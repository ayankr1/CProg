#include <stdio.h>
int findPrime(int n);
int findFact(int num);
int main(void) {
	// your code goes here
	int num,rem,sum=0;

	scanf("%d",& num);
	
	if(num>32767)
	{
	    printf("Number too large");
	    return 0;
	}
	
	
	else
	{
    	while(num>0)
    	{
    	    rem=num%10;
    	    if(findPrime(rem))
    	    {
    	        sum+=findFact(rem);
    	        //printf("\nSum %d",sum);
    	    }
    	    num/=10;
    	   
    	}   
	    printf("\n%d",sum);
	}
	

	return 0;
}

int findPrime(int n)
{
    int i,flag=1;
    
    if(n==1)
        flag= 0;
        
    else
    {
        for(i=2;i<=n/2;i++)
      {
          if(n%i==0)
          {
              flag=0;
              break;
          }     
      }
    }
  return flag;
}

int findFact(int num)
{
    int fact=1,c;
    for(c = 1; c <= num; c++)
     {
         fact = fact * c;
         //printf("\nFact %d",fact);
     }
     return fact;
}
