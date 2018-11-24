/******************************************************************************
          Code to find maximum of all in the array of integers.
*******************************************************************************/

#include<stdio.h>
  
int main() {

        int no_of_array_elements = 0;

        //printf("Enter number of elements to be added in array of integers:-\n");
        //scanf("%d", &no_of_array_elements);

        int index, maxindex = 0;
        int arr[] = {2,10,5,6,4,7,3,8,7,17,1};

        no_of_array_elements = sizeof(arr)/sizeof(int);

        for(index =0; index < no_of_array_elements; index++)
        {
                if(arr[index] > arr[maxindex])
                {
                        maxindex = index;

                }
        }
        printf("max of all is : %d" ,arr[maxindex]);
return 0;
}
