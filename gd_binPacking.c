#include<stdio.h>
int packing(int section_size,int section[],int c_size,int c[])
{
    int count=0;
    int i,j;
    for(j=0;j<section_size;j++)

    {
       for(i=0;i<c_size;i++)
       {
         if(c[i]>=section[j])
           {
              c[i]=c[i]-section[j];
              break;
           }
       }
       if(count<=c[i])
       {
           count++;
       }


    }


    /*for(i=0;i<c_size;i++)
    {
        if(c[i]!=20)
    {
        count++;

    }
    }
     printf("%d",count); */

    printf("%d",count);


}
int main()
{
    int section_size=3;
    int section[3];
    int i;

    for(i=0;i<section_size;i++)
    {
        scanf("%d",&section[i]);
    }
    int c_size=10;
    int c[10];
    for(i=0;i<c_size;i++)
    {
        c[i]=20;
    }

    packing(section_size,section,c_size,c);
}
