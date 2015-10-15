#include<stdio.h>
int occurenceDigits(int ,int);
int main()
{
    int num,match;
    scanf("%d",&num);//Inputted number
    if(num<0)
    {
        printf("Invalid input");
        return 0;
    }
    scanf("%d",&match);//Number for matching
    
    printf("%d",occurenceDigits(num,match));
    
    return 0;
}

int occurenceDigits(int n, int m)//N inputted number, M is number for matching
{
    int count=0,rem;
    while(n>0){
       rem=n%10;
       if(rem==m)
       {
            count++;
        }
        n=n/10;
    }
return count;
}
