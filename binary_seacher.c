#include<stdio.h>
int binary_serch(int arr[], int n, int search)
{
   int l=0,r=n-1,mid;
   while (l<=r)
   {
    mid = (l+r)/2;
    if(arr[mid]==search){
        return mid;
    }
    if(mid<search){
        l= mid+1;
    }
    else{
       r= mid-1;
    }
   }
   return -1;
   
}
int main()
{
    int arr[ ] = {4,5,6,7,8};
    int x = binary_serch(arr,5,7); // Here 7 is searching value 
    if(x==-1){
      printf("Not found");
    }
    else{
      printf("Index is : %d \n",x);
    }

    return 0;
}