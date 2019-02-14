/**
 * File              : vc_boolean.h
 * Author            : Guilherme and Enrique
 * Date              : Wed 13 Jan 2019
 */

#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define SUCCESS 0
typedef int t_bool;
#define TRUE 1
#define FALSE 0

#define EVEN(n) (n%2 == 0)

void vc_putstr(char *str);

t_bool vc_is_even(int n);