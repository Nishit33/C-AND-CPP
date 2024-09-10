// 5. WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include <stdio.h>


int sortArray(int arr[], int size, int ascending) 
{
    int temp;
    int swaps = 0; 

    for (int i = 0; i < size - 1; i++) 
	{
        for (int j = i + 1; j < size; j++) 
		{
            if ((ascending && arr[i] > arr[j]) || (!ascending && arr[i] < arr[j])) 
			{
            
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                swaps++; 
            }
        }
    }

    return swaps;
}


int printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    return 0;
}

int main() 
{
    int arr1[5], arr2[5], choice;


    printf("Enter 5 elements for the first array:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("Enter Element : ");
        scanf("%d", &arr1[i]);
    }

    
    printf("Enter 5 elements for the second array:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("Element : ");
        scanf("%d", &arr2[i]);
    }

    
    printf("Enter 1 for ascending order or 2 for descending order: ");
    scanf("%d", &choice);

    
    int swaps1 = sortArray(arr1, 5, choice == 1);
    printf("\nFirst array after sorting:\n");
    printArray(arr1, 5);


    
    int swaps2 = sortArray(arr2, 5, choice == 1);
    printf("\nSecond array after sorting:\n");
    printArray(arr2, 5);


}

