/******************************************************************************
          Code to sort array of integers using insertion sort.
*******************************************************************************/

int main() {

        int no_of_array_elements = 0;

        //printf("Enter number of elements to be added in array of integers:-\n");
        //scanf("%d", &no_of_array_elements);

        int index, j, temp = 0;
        int arr[] = {2,10,5,6,4,7,3,8,7,17,1};


        no_of_array_elements = sizeof(arr)/sizeof(int);

        for(index = 1; index < no_of_array_elements; index++)
        {
                temp = arr[index];
                for( j = index - 1 ; j >=0 && temp < arr[j];  j--)
                {
                        arr[j+1] = arr[j];
                }
                arr[j+1] = temp;
        }

        printf("Sorted array elements are :\n");
        for(index =0; index < no_of_array_elements; index++)
        {
                printf(" %d " ,arr[index]);
        }

        return 0;
}

