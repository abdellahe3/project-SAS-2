#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d\n" , Sum(1 , 1));
    printf("%d\n", multiply(12, 2));
    return 0;
}


int Sum(int n1 , int n2 ){
    int sum = n1 + n2 ;

    return sum;
}

int multiply(int n1, int n2){
    return n1 * n2;
}