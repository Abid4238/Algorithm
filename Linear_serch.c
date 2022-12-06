#include<stdio.h>
int main()
{
    int n=10,i,search_Value,value=-2;
    printf("Enter number of item : ");
    int arr[]={1,2,3,4,5,6,7,8,9,10};

    printf("Enter search iteam : ");
    //scanf("%d",&search_Value);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search_Value){
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