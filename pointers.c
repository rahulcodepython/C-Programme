#include<stdio.h>

int main()
{

    int a=5;
    int *ptra = &a;

    printf("The size of intizer of my arcitecture is %ld \n", sizeof(a));

    printf("The value of variable a is %d \n", a);
    printf("The value of variable a is %d by the addres of the variable \n", *ptra);
    printf("The address of variable a is %p \n", &a);

    return 0;
}