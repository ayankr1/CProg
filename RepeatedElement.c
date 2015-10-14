#include<stdio.h>

int main()
{
    int arr[10],count[10],i,size,run=0,j,maximum,c,location=0;
    
    scanf("%d",&size); //Size of array
    if(size<0)
    {
        printf("Invalid Input");
        return 0;
    }
    
    //input array elements
    for(i=0;i<size;++i)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0)
            printf("Invalid Input");
    }    
    
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
                run++;
        }
        count[i]=run;
        run=0;
    }
    
    maximum = count[0];
 
  for (c = 1; c < size; c++)
  {
    if (count[c] > maximum)
    {
       maximum  = count[c];
       location = c;
    }
  }
  printf("%d",arr[location]);
  
    
    return 0;
}
