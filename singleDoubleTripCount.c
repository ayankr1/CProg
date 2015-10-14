#include<stdio.h>

int numberOfDigits(int n);

void singleDoubleTripCount(int elements[], int size);

int count[6]={1,0,2,0,3,0};

int main()
{
    int size,arr[50],i;
    
    //size of Array
    scanf("%d",&size);
    if(size<0)
    {
        printf("Invalid Input");
        return 0 ;
    }
    
    
    //Array Imput
    for(i=0;i<size;++i)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0)
        {
            printf("Invalid Input");
            return 0;
        }
    }
    
    
    singleDoubleTripCount(arr,size);
    
    for(i=0;i<6;++i)
    {
        printf("%d\n",count[i]);
    }
    
 
    return 0;
}

void singleDoubleTripCount(int elements[], int size)
{
    int i,num;
    
    for(i=0;i<size;i++)
    {
        num=numberOfDigits(elements[i]);
        if(num==1)
            count[1]++;
        else if(num==2)
            count[3]++;
        else if(num==3)
            count[5]++;
    }
}

int numberOfDigits(int n)
{
    int x=0;
    if(n==0)
        return 1;
        
    while(n>0)
    {
        x++;
        n/=10;
    }
    return x;
}





