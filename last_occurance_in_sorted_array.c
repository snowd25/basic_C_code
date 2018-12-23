// to find the last occurance of a given number in an sorted array.
#include <stdio.h>

int last_occur(int arr[], int start, int end, int s_key)
{
        if(start < end)
        {
                int mid = start + ((end - start) +1) / 2;
                printf("\n%d" ,mid);
                if(s_key >= arr[mid] )
                        return last_occur(arr,mid,end, s_key);
                else
                        return last_occur(arr, start, mid-1, s_key);

        }
        //printf("start %d end %d", start,end);
        return (arr[start] == s_key) ? start: -1;
}

int main()
{
    printf("Find 1st occurance of a number in sorted array:\n\n");
    int index;
    int ar[] = {1,10,10,10,10,11,15,17,18,19,20,100};

    //int ar[] = { 0, 1, 4};
    int s_key = 10;
    int end = sizeof(ar)/sizeof(ar[0]);
    printf("end: %d\n" ,end);
    index = last_occur(ar, 0, end-1, s_key);
    printf("\nlast occurance of %d is at index %d",s_key,index);
    printf("\n\n");
    return 0;
}

