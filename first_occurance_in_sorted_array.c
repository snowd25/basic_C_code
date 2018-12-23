// to find the first occurance of a given number in sorted array.
#include <stdio.h>

int first_occur(int arr[], int start, int end, int s_key)
{

	if(start < end)
	{
		int mid = (start + end)/2;
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
    printf("Find 1st occurance of a number in sorted array:\n\n");
    int index;
    int ar[] = {1,10,10,11,15,17,18,19,20,100};

    //int ar[] = { 0, 1, 4};
    int s_key = 10; 
    int end = sizeof(ar)/sizeof(ar[0]);
    printf("end: %d\n" ,end);
    index = first_occur(ar, 0, end - 1, s_key);
    printf("\nfirst occurance of %d is at index %d",s_key,index);
    printf("\n\n");
    return 0;
}
