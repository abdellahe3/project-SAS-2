#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d\n" , Sum(1 , 1));

    printf("%d\n" , Modulo(1 , 1));
    return 0;
}


int Sum(int n1 , int n2 ){
    int sum = n1 + n2 ;

    return sum;
}

int Modulo(int n1 , int n2 ){
    /*
    Modulo is a mathematical term relating to congruence,
     in particular: in modular arithmetic we speak of congruent integers modulo n;
     in computer science, the modulo is an operation which associates
     the remainder r of the Euclidean division of a by b with the pair (a, b) of integers.
    */




    int mod = n1 % n2 ;

    return mod ;
}

