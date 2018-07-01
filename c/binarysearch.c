#include<stdio.h>

int binarySearch(int *arr,int low,int high,int n)
{
    int mid;
    while(low<high)
    {
        mid = (low+high)/2;
        if(arr[mid] == n)
        {
            return mid;
        }

        if(arr[mid]<n)
        {
            low = mid +1;
        }
        if (arr[mid]>n)
        {
            high = mid;
        }
    }
}
void main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    printf("Index is %d",binarySearch(arr,0,8,4));
    
}