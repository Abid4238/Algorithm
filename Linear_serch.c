#include<stdio.h>
int main()
{    
    int arr[]={1,2,3,4,5,6,7,8,9,10},i,value=-2;

    
    for(i=0;i<10;i++)
    {
        if(arr[i]==9){
            value=i;
            break;
        }
    }
    if(value==-2){
        printf("Not found");
    }
    else {
        printf("Index : %d",value);
    }
    return 0;
}