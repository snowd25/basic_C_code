/******************************************************************************
          Code to sort array of integers using bubble sort.
*******************************************************************************/

#include<stdio.h>


int main() {

        int no_of_array_elements = 0;

        //printf("Enter number of elements to be added in array of integers:-\n");
        //scanf("%d", &no_of_array_elements);

        int index, j, temp = 0;
        int arr[] = {2,10,5,6,4,7,3,8,7,17,1};

        no_of_array_elements = sizeof(arr)/sizeof(int);

        for(index =0; index < no_of_array_elements; index++)
        {
                for( j = 0; j <  no_of_array_elements -1; j++)
                {

                       if(arr[j+1] < arr[j])
                        {
                                temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
                        }
                }
        }

        printf("Sorted array elements are :\n");
        for(index =0; index < no_of_array_elements; index++)
        {
                printf(" %d " ,arr[index]);
        }

        return 0;
}

