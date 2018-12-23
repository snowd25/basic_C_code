#include<stdio.h>
  
int first_o_rotated(int arr[], int start, int end, int s_key)
{

        if(start < end)
        {
                int mid = (start+end)/2;

                if(s_key < arr[mid] && s_key < arr[start])
                        return first_o_rotated(arr, mid+1, end, s_key);
                if(s_key <= arr[mid] && s_key >= arr[start])
                        return first_o_rotated(arr,start, mid, s_key);
                else
                        return first_o_rotated(arr, mid+1, end, s_key);
        }
        return arr[start] == s_key ? start: -1;
}

int main()
{
        printf("\n\n Program to find first occurance of a number in rotated sorted array\n\n");



        int arr[]= {10,20,30,40,40,1,2,3,4,5};

        int end = (sizeof(arr)/sizeof(arr[0]));

        int search_key = 1;

        int index = first_o_rotated(arr, 0, end-1, search_key);

        printf("\n\n first occurance of %d in rotated sorted array is at %d\n\n" ,search_key, index);
        return 0;

}
