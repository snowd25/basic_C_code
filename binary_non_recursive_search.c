#include <stdio.h>

int binary_search(int arr[], int start, int end, int s_key)
{

	while( start <= end)
	{
		int mid = (start + end)/2;
		if(arr[mid] == s_key)
			return mid;

		if(s_key < arr[mid] )
		{
			 end = mid - 1 ;
			continue;
		}
		if(s_key > arr[mid] )
		{
			start = mid + 1;
			continue;
		}
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
    index = binary_search(ar, 0, end, 19);
     printf("\n%d",index);
    printf("\n\n");
    return 0;
}
