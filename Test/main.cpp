/*
Файл: main.cpp
Летняя практика
Автор: Жданов В.И.
Задание: вывести числа Армтсронга в указанном промежутке
 Дата создания: 22.06.2020
*/

#include <stdio.h>
#include <math.h>
#include "ArmstrongNums.h"


int main(void)
{
    int start = 0,end = 0;
    printf("Please, make sure that the numbers that you input are not less than 1 and not bigger than 2147483647\n");
    while(start<1){
    printf("Input start of the range: ");
    scanf("%d",&start); 
    }
    while(end<1){
    printf("Input end of the range: ");
    scanf("%d",&end);
    }
    printf("Armstrong numbers:\n");
    Print_Armstrong_Nums(start, end);
    return 0;
}

