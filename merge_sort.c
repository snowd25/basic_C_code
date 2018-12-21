#include <stdio.h>
int merge(int array[], int i, int j, int end)
{
    static int temp[10];
    int mid = j, index;
    j += 1; 		
    int k = 0;
    int start = i;	
    while(i <= mid && j <= end)
    {
        if(array[i] < array[j])
        {
            temp[k] = array[i];
            i++;
        }
        else
        {
            temp[k] = array[j];
            j++;
        }
        k++;
    }
  
    while(i <= mid)
    {
       temp[k] = array[i];
       //printf("%d ", temp[k]);
       i++;
       k++;
    }
    while(j <= end)
    {
       temp[k] = array[j];
       j++;
       k++;
       
    } 
  for(index = start, j=0; index <= end; index++, j++)
  {
	array[index] = temp[j];
  }

  
    return 0;
}

int merge_sort(int array[], int start, int end)
{
    if(start < end)
    {
        int mid = (start + end )/2;
        merge_sort(array, start, mid);
        merge_sort(array, mid+1, end);
        
        merge(array, start, mid, end);  
    }
return 0;
}

int main()
{
    printf("Hello World");
    int ar[] = {10 ,9 ,79,3,6,2,1,100,11,5};
    int i; 
    int end = sizeof(ar)/sizeof(int);
    printf("%d ",end);
    merge_sort(ar, 0, end-1);
    
    printf("\nSorted array is :");

    for(i = 0; i < end; i++)
        printf("%d ",ar[i]);

    return 0;
}
