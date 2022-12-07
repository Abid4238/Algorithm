#include<stdio.h>
int main()
{
    int n ;
    scanf("%d", &n);
    int A[n] ;
    for(int i  =1; i<=n; i++)
    {
        scanf("%d", &A[i]);
    }
    int q = LIS(A, n);
    printf("\nLength: %d", q);
}
int LIS(int A[], int n)
{
    int a[n], prev[n];
    int LIS = 0, i;
    for(i = 0; i<=n ; i++)
    {
        prev[i] = -1;
    }
    for(i = 1 ; i<=n ; i++)
    {
        a[i] = 1;
        for(int j = 1 ; j<=i-1 ; j++)
        {
            if(A[j] < A[i] && a[j]+1 > a[i])
            {
                a[i] = a[j] +1;
                prev[i] = j;
            }

        }
        if( a[i] > LIS)
        {
            LIS = a[i];
        }
    }
    int max = 0;
    int index;
    for(i = 0; i<=n; i++)
    {
        if(a[i]>=max)
        {
            max = a[i];
            index = i;
        }
    }
    LIS_t(index, A, prev);
    return LIS;
}
LIS_t(int max, int A[], int prev[])
{
    int i = max;
    while( i >= 0)
    {
        printf("%d ", A[i]);
        i = prev[i];
    }
}
