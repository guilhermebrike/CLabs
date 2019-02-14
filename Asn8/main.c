/**
 * File              : vc_boolean.h
 * Author            : Guilherme and Enrique
 * Date              : Wed 13 Jan 2019
 */

#include "vc_boolean.h"
#include "vc_abs.h"
#include <stdio.h>
#include "vc_point.h"
#include "vc_stock.h"
#include "vc_param_to_tab.h"
#include "vc_show_tab.h"

// Excercise 00
//int main(int argc, char **argv) {
//    (void) argv;
//    if (vc_is_even(argc - 1) == TRUE)
//        vc_putstr(EVEN_MSG);
//    else
//        vc_putstr(ODD_MSG);
//    return SUCCESS;
//}

// Excercise 01
//int main(int argc, char **argv) {
//    printf("%d", ABS(10));
//}

// Excercise 02
//void set_point(t_point *point)
//{
//    point->x = 86;
//    point->y = 89;
//}
//int main(void)
//{
//    t_point point;
//    set_point(&point);
//    return 0;
//}

// Excercise 03/04
int main(int argc, char *argv[]) {
    //char **args = {"Hello", "Hello World"};
    // arr = {stock1, stock2};
    // stock1 = {5, pointer, strdup, {"Hello"}}
    // stock2 = {11, pointer, strdup, {"Hello", "World"}}
    t_stock *arr = vc_param_to_tab(argc, argv);
    vc_show_tab(arr);
}
