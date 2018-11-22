/******************************************************************************

          Code to find minimum of all in the array of integers.

*******************************************************************************/

#include<stdio.h>
  
int main() {

        int no_of_array_elements = 0;

        //printf("Enter number of elements to be added in array of integers:-\n");
        //scanf("%d", &no_of_array_elements);

        int index, minindex = 0;
        int arr[] = {2,10,5,6,4,7,3,8,7,17,1};

        no_of_array_elements = sizeof(arr)/sizeof(int);

        for(index =0; index < no_of_array_elements; index++)
        {
                if(arr[index] < arr[minindex])
                {
                        minindex = index;

                }
        }
        printf("min of all is : %d" ,arr[minindex]);
return 0;
}
