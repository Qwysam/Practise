#include <stdio.h>
#include <math.h>

/*
 Функция для подсчёта количества знаков в числе
 Ввод: целое число
 Вывод : количество знаков в виде целочисленной переменной
*/

int Number_of_Digits(int num){
    int digits = 0;
    while (num != 0) {
        num /= 10;
        digits++;
    }
    return digits;
}

/*
 Функция для разделения числа на массив цифр
 Ввод: целое число, количество цифр в числе, массив для хранения цифр
 Вывод : -
*/

void ToArray(int num,int length,int arr[]){
    for(int i = 0;i<length;i++){
        arr[i] = num%10;
        num/= 10;
    }
}

/*
 Функция для определения является ли целочисленная переменная числом Армстронга
 Ввод: целое число, количество цифр в числе, массив цифр
 Вывод : переменная булевого типа
*/

bool Is_Armstrong_Num(int num,int length,int arr[]){
    int temp = 0;
    for(int i = 0;i<length;i++){
        temp+=pow(arr[i], length);
    }
    return num==temp;
}

/*
 Функция для вывода чисел Армстронга в указанном диапазоне
 Ввод: два целых числа, первое отображает начало диапазона, а второе конец
 Вывод : -
*/

void Print_Armstrong_Nums(int start,int end){
    for(int i = start;i<=end;i++){
        int digits = Number_of_Digits(i);
        int array[digits];
        ToArray(i, digits, array);
        if(Is_Armstrong_Num(i, digits, array))
            printf("%d\n",i);
    }
}
