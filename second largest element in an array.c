#include<stdio.h>
void main()
{
    int ar[]={2,3,4,5}; 
    int max=0;
    int secondlargest=0;
    for(int i=0;i<4;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }

    }
    for(int i=0;i<4;i++)
    {
    if(ar[i]!=max)
    {
        if(ar[i]>secondlargest)
        {
        secondlargest=ar[i];
        }
    }
    }
    printf("%d",secondlargest);
    
    
}   