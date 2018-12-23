#include <stdio.h>

int binary_search(int arr[], int start, int end, int s_key)
{

	if(start <= end)
	{
		int mid = (start + end)/2;
		if(arr[mid] == s_key)
			return mid;

		if(s_key < arr[mid] )
			 return binary_search(arr,start, mid-1, s_key);
		else
                	 return binary_search(arr, mid+1, end, s_key);
	}

	return -1;
}
int main()
{
    printf("Hello World\n\n");
    int index;
    int ar[] = {1,10,11,15,17,18,19,20,100};

    //int ar[] = { 3, 1, 4}; 
    int end = sizeof(ar)/sizeof(int);
    index = binary_search(ar, 0, end-1, 19);
     printf("\n%d",index);
    printf("\n\n");
    return 0;
}
