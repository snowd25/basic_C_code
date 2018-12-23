
#include<stdio.h>
  
int last_o_rotated(int arr[], int start, int end, int s_key)
{

        if(start < end)
        {
                int mid = start + ((end - start) +1) / 2;

                if(s_key < arr[mid] && s_key >= arr[start])
                        return last_o_rotated(arr,start, mid-1, s_key);
                if(s_key <= arr[mid] && s_key <= arr[start])
                        return last_o_rotated(arr, mid, end, s_key);
                if(s_key >= arr[mid] && s_key > arr[start])
                        return last_o_rotated(arr, mid,end, s_key);
                else
                        return last_o_rotated(arr, start, mid-1, s_key);
        }
        return arr[start] == s_key ? start: -1;
}

int main()
{
        printf("\n\n Program to find last occurance of a number in rotated sorted array\n\n");



        int arr[]= {10,20,30,40,40,40,5,5,7};

        int end = (sizeof(arr)/sizeof(arr[0]));

        int search_key = 30;

        int index = last_o_rotated(arr, 0, end-1, search_key);

        printf("\n\n last occurance of %d in rotated sorted array is at %d\n\n" ,search_key, index);
        return 0;

}
