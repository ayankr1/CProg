#include <stdio.h>

int main(void) {
	int arr1[40], arr2[40],i,size,flag=0,j;
	
//	printf("Enter size");
	scanf("\n%d",&size);
	
//	printf("\nEnter 1st array elements");
	for(i=0;i<size;++i)
	{
	    scanf("\n%d",&arr1[i]);
	    if(arr1[i]<0)
	    {
	        printf("Invalid Input");
	        return 0;
	    }
	}
	    
//	printf("\nEnter 2nd array elements");	
	for(i=0;i<size;++i)
	{
	    scanf("\n%d",&arr2[i]);
	     if(arr2[i]<0)
	    {
	        printf("Invalid Input");
	        return 0;
	    }
	}
	    
	for(i=0;i<size;++i)
	{
	    for(j=0;j<size;j++)
	    {
	        if(arr1[i]==arr2[j])
	            flag=1;
	    }
	    if(flag==0)
	        printf("\n%d",arr1[i]);
	    flag=0;
	}
	
	return 0;
}

