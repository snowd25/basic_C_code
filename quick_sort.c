#include <stdio.h>

void swap(int* a1, int* a2)
{
    int temp;
    temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}

int partition(int a[], int start, int end)
{
    int i = start + 1;
    int j = end;
    int p = start ;
    while(i < j)
    {
        if(a[i] < a[p])
            i++;
        if(a[j] > a[p])
            j--;
        if (a[i] > a[j])
            swap(&a[i], &a[j]); //is same as swap(a[i], a[j])
    }

    if (a[j] < a[p])
        swap(&a[j], &a[p]); //is same as swap(a[j], a[p])

    return j;
}

int quick_sort(int array[], int start, int end)
{
    if (start < end)
    {
        int p = partition(array,start,end);
        //printf("pivot = %d" ,p);
        quick_sort(array, start, p-1);
        quick_sort(array, p+1, end);
    }
    return 0;
}

int main()
{
    printf("Hello World\n\n");
    int index;
    int ar[] = {10 ,9 ,79,3,6,2,1,100,11,5};

    //int ar[] = { 3, 1, 4};
    int end = sizeof(ar)/sizeof(int);

    quick_sort(ar, 0, end-1);

    printf("\n\nSorted array:-");
    for(index = 0; index < end; index++)
    {
        printf("%d ",ar[index]);
    }

    printf("\n\n");
    return 0;
}
