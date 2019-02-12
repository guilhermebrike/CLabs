#include <stdlib.h>

/**
 * File              : vc_concat_params.c
 * Author            : Enrique, Masa and Guilherme
 * Date              : Mon 11 Feb 2019
 */
char *vc_concat_params(int argc, char **argv) {

    int length = 0;
    for (int i = 0; i < argc; ++i) {
        char *argumentChar = argv[i];
        for (int j = 0; argumentChar[j] != '\0'; ++j) {
            ++length;
        }
    }


    length += argc - 1;
    char *result = malloc(length * sizeof(char));
    result[length] = '\0';
    int totalIndex = 0;

    for (int i = 0; i < argc; ++i) {
        char *argumentChar = argv[i];
        if (i != 0){
            result[totalIndex] = '\n';
            ++totalIndex;
        }
        for (int j = 0; argumentChar[j] != '\0'; ++j, ++totalIndex) {
            result[totalIndex] = argumentChar[j];
        }

    }

    return result;
}