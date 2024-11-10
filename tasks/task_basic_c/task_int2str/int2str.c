#include <assert.h>
#include "int2str.h"
#include "stdio.h"
#include <stdlib.h>

char* int2str(int number) {
    int num2 = number;
    int length = 0;
    char* answ = malloc(12);
    //char* pointer_min = answ;
    if(number == 2147483647) {
        return("2147483647");
    }
    if(number == -2147483648) {
        return("-2147483648");
    }
    if(number == 0) {
        return("0");
    }
    if(number == -0) {
        return("-0");
    }
    if(number < 0) {
        *answ = '-';
        answ++;
        length++;
        number *= -1;
        num2 *= -1;
    }

    while (number !=0) {
        number /= 10;
        answ++;
        length++;
    }
    *answ = '\0';

    while (num2 != 0) {
        answ--;
        *answ = num2%10 + '0';
        num2 /= 10;

    }
    answ--;
    return answ;
}
