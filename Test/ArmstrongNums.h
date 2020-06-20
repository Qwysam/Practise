

#include <stdio.h>
#include <math.h>

int Number_of_Digits(int num){
    int digits = 0;
    while (num != 0) {
        num /= 10;
        digits++;
    }
    return digits;
}

void ToArray(int num,int length,int arr[]){
    for(int i = 0;i<length;i++){
        arr[i] = num%10;
        num/= 10;
    }
}

bool Is_Armstrong_Num(int num,int length,int arr[]){
    int temp = 0;
    for(int i = 0;i<length;i++){
        temp+=pow(arr[i], length);
    }
    return num==temp;
}


void Print_Armstrong_Nums(int start,int end){
    for(int i = start;i<=end;i++){
        int digits = Number_of_Digits(i);
        int array[digits];
        ToArray(i, digits, array);
        if(Is_Armstrong_Num(i, digits, array))
            printf("%d\n",i);
    }
}
