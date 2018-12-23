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

int first_occur(int arr[], int start, int end, int s_key)
{
        if(start < end)
        {
                int mid = (end + start) / 2;
                printf("\n%d" ,mid);
                if(s_key <= arr[mid] )
                        return first_occur(arr,start, mid, s_key);
                else
                        return first_occur(arr, mid+1, end, s_key);

        }
        //printf("start %d end %d", start,end);
        return (arr[start] == s_key) ? start: -1;
}
int main()
{
    printf("Find no. of  occurances of a number in sorted array:\n\n");
    int index;
    int ar[] = {1,10,10,10,10,11,15,17,18,19,20,100};

    //int ar[] = { 0, 1, 4};
    int s_key = 100;
    int end = sizeof(ar)/sizeof(ar[0]);
    printf("end: %d\n" ,end);
    int start = first_occur(ar, 0, end-1, s_key);
    end = last_occur(ar, 0, end-1, s_key);
    printf("\nno. of occurances of %d are %d",s_key,(1+end-start));
    printf("\n\n");
    return 0;
}
