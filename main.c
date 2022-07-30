#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d\n" , Sum(1 , 1));
<<<<<<< HEAD
    printf("%d\n", multiply(12, 2));
=======

    printf("%d\n" , Modulo(1 , 1));
>>>>>>> 8aecd26a124a072a081a5d0242ce38ef674c1a6d
    printf("%d\n",div(f1,f2));
    return 0;

}


int Sum(int n1 , int n2 ){
    int sum = n1 + n2 ;

    return sum;
}

<<<<<<< HEAD
int multiply(int n1, int n2){
    return n1 * n2;
}
=======
int Modulo(int n1 , int n2 ){
    int mod = n1 % n2 ;

    return mod ;
}
//---------------
int division(int f1,int f2){
    int div = f1/f2;
    return div;
}
