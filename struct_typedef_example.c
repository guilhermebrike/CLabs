#include <stdio.h>
#include <stdlib.h>


typedef struct Date{
    int day;
    int month;
    int year;
} Date;


// example of constructor using C.
Date *new(int day,int month,int year){
    Date *instance = (Date *) malloc(sizeof(Date));
    instance->day = day;
    instance->month = month;
    instance->year = year;
    return instance;
}

typedef unsigned long size_t;

typedef char* string; 

int main(){
    Date d1;
    
    Date d2 = {7,2,2019};

    string s = "Hello";
    return 0;

}