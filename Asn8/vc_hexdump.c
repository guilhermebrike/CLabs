/**
 * File              : vc_hexdump.c
 * Author            : Guilherme, Enrique and Derrick
 * Date              : Wed 13 Jan 2019
 */

#include <stdio.h>
#include<fcntl.h>
#include<errno.h>
#include <unistd.h>
extern int errno;

static void	print_hex(unsigned char c)
{
    if ((c / 16) > 9)
        putchar((c / 16) - 10 + 'a');
    else
        putchar((c / 16) + '0');
    if ((c & 0xf) > 9)
        putchar((c & 0xf) - 10 + 'a');
    else
        putchar((c & 0xf) + '0');
}

static void	print_addr(unsigned int offset)
{
    print_hex((offset >> 24) & 0xff);
    print_hex((offset >> 16) & 0xff);
    print_hex((offset >> 8) & 0xff);
    print_hex(offset & 0xff);
    putchar(':');
    putchar(' ');
}

static void	print_text(char *addr, unsigned int count)
{
    putchar('|');
    unsigned int i;

    i = 0;
    while (i < 16 && i < count)
    {
        if (addr[i] > 31 && addr[i] < 127)
            putchar(addr[i]);
        else
            putchar('.');
        i++;
    }
    putchar('|');
    putchar('\n');
}

int main(int argc, char * argv[]){   
    int address = 0;
    int arg_counter = 1;

    while (arg_counter < argc){
    int fp;

    fp = open(argv[arg_counter], O_RDONLY);

    if (fp == -1){
        printf(" Value of errno: %d\n ", errno);
        perror("Message from perror");
        return 1;
    }

    int a = 1;
    int count = 1;
    int i = 0;

    char c1 = ' ';
    char str[16];
    print_addr(address);
    while (a != 0){

        a = read(fp,&c1,1);
        if (a ==0){
            break;
        }
        print_hex(c1);
        str[i] = c1;
        i++;
        putchar(' ');
        if (count == 8){
            putchar(' ');
        }
        if (count == 16){
            print_text(str,16);
            address = address + 16;
            print_addr(address);
            count = 0;
            i = 0;
        }
        count++;
    }
    int temp_count = count;
    while (count != 17){
        if (count ==8){
            putchar(' ');
        }
        putchar(' ');
        putchar(' ');
        putchar(' ');
        count++;
    }
    print_text(str,temp_count-1);

    close(fp);
    arg_counter++;
    }
    putchar('\n');
    return 0;
}