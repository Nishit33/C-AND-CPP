#include<stdio.h>

int main() {
    int a, b;

    printf("Enter Number A: ");     // two number swap 
    scanf("%d", &a);

    printf("Enter Number B: ");
    scanf("%d", &b);


     a = a + b - (b = a);

  
    printf("\nAfter swapping value A is: %d", a);
    printf("\nAfter swapping value B is: %d", b);

}

