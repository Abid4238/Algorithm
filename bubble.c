// Bubble sort assending or decending order both are tother
void bubble_sort_assendding(int arr[], int n){
   int i,j,temp;
   for(i=0;i<n;i++)
   {
    for(j=0;j<n-i-1;j++)
    {
       if(arr[j]<arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
       }
    }
   }

}
void bubble_sort_decending(int arr[], int n){
   int i,j,temp;
   for(i=0;i<n;i++)
   {
    for(j=0;j<n-i-1;j++)
    {
       if(arr[j]>arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
       }
    }
   }

}
#include<stdio.h>
int main()
{
    // for accendending
    int arr[ ] = { 2,4,1,5,4,7};
    bubble_sort_assendding(arr,6);
    printf("Accending order : ");
    for(int i=0;i<6;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n\nDecending order: ");
    int ar[ ] = { 2,4,1,5,4,7};
    bubble_sort_decending(ar,6);
    for(int i=0;i<6;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}