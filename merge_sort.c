#include<stdio.h>

void Merge(int arr[ ],int left, int right,int q){
    int n1,n2,i,j,k;
    n1=q-left+1;
    n2 =right-q;
    int L[n1],R[n2];
    for(i=0;i<n1;i++){
        L[i]=arr[left+i];
    }
    for(i=0;i<n2;i++){
        R[i]=arr[q+1+i];
    }
    i=0;
    j=0;
    k = left;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k] =L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] =L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}

void Mergesort(int left, int right, int arr[] ){
    int q;
    if(left<right){
        q = (left+right)/2;
        Mergesort(left,q,arr);
        Mergesort(q+1,right,arr);
        Merge(arr,left,right,q);
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    Mergesort(0,n-1,arr);
    for(i=0;i<n;i++){
        printf("%d   ",arr[i]);
    }
    return 0;
}
