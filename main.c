#include <stdio.h>
#include "sortb.h"
int main()
{
    int arr[20],n,k;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: \n");
    for(int i=0; i<n; i++)
    {
    	scanf("%d",&arr[i]);
    }
    printf("Enter 1.Selection Sort 2.Bubble Sort: ");
    scanf("%d",&k);
    switch(k){
    case 1:
    	bubbleSort(arr, n);
    	break;
    case 2:
    	selectionsort(arr, n);
    	break;
    default:
    	break;
    }
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
