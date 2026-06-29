/*
1. Write a recursive function called sumDigits to 
return the sum of all of the digits in a given integer value.  
Use a helper function if necessary.
*/
#include <stdio.h>

int sumDigits(int n);
int main(){
    int n = 1111;
    int l;

    l = sumDigits(n);
    printf("%d\n", l);
    return 0;
}

int sumDigits(int n){
    if (n < 10){
        return n;
    }
    return (n % 10) + sumDigits(n / 10);
}