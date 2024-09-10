// 1. Write a program to find out the max number from given array using function

#include <stdio.h>
int findMax(int arr[], int size) 
{
    int max = arr[0]; 

    
    for (int i = 1; i < size; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i]; 
        }
    }

    return max; 
}

int main() 
{
    int size;

    printf("How many numbers you want to enter :  ");
    scanf("%d", &size);

    int arr[size]; 
    
    
    for (int i = 0; i < size; i++) 
	{
        printf("Enter Number : ");
        scanf("%d", &arr[i]); 
    }

    
    int max = findMax(arr, size);

    
    printf("\nThe largest number is: %d\n", max);

}

