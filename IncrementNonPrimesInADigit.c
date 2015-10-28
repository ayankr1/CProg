//Increment Non Primes In A Digit. If 9 increment to 0

#include <stdio.h>
#include<math.h>
int checkprime(int n);

int main(void) {
    int newNum=0,temp,number,copy,arr[10],size=0,rem,i=0;
	scanf("%d",&copy);
	
	while(copy>0)
	{
	    rem=copy%10;
	    arr[i]=checkprime(rem);
	    i++; size++;
	    copy/=10;
	}
	for(i=0; i<size; i++) printf("%d\t",arr[i]);
	number=size-1;
	
    for(i=size-1; i>=0; i--)
	{
	   temp=arr[i]*(pow(10,(number--)));
	   printf("\n%d",temp);
	   newNum+=temp;
	}
	printf("\t%d",newNum);
	
	return 0;
}

int checkprime(int n)
{
    int i,flag=1;
    
    if(n==9)
        return 0;
        
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    
    if(flag==0) return n+1;   
    else return n;
}
