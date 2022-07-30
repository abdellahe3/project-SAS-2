#include <stdio.h>
#include <stdlib.h>

int main()
{

    Sum();
    Modulo();


    printf("%d\n", multiply(12, 2));



    printf("%d\n",division(10,2));
    return 0;

 }




void  Sum(){
    int n1 , n2;
    puts("enter the first number :");
    scanf("%d" , &n1);
    puts("enter the second  number :");
    scanf("%d" , &n2);
    printf("%d  +  %d  =  %d\n" , n1 , n2 , n1+n2);

}


void  Modulo( ){
    /*
    Modulo is a mathematical term relating to congruence,
     in particular: in modular arithmetic we speak of congruent integers modulo n;
     in computer science, the modulo is an operation which associates
     the remainder r of the Euclidean division of a by b with the pair (a, b) of integers.
    */

    int n1 , n2;
    puts("enter the first number :");
    scanf("%d" , &n1);
    puts("enter the second  number :");
    scanf("%d" , &n2);
    printf("%d  MODULO  %d  =  %d\n" , n1 , n2 , n1%n2);
}




int multiply(int n1, int n2){
    return n1 * n2;
}



int division(int f1,int f2){
    int div = f1/f2;
    return div;
}

