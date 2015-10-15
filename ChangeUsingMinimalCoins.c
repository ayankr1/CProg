#include <stdio.h>

int main(void) {
    int num,count=0,s500=0,s100=0,s50=0,s10=0,s5=0,s1=0;
    printf("Enter the number");
    scanf("%d",&num);
    if(num<0)
    {
    printf("Invalid input");
    return -1;
    }
    while(num>0){
        s500=num/500;
        num=num-s500*500;
        
        while(num>0){
             //count=0;
             s100=num/100;
             num=num-s100*100;
             
                 while(num>0){
                 //count=0;
                 s50=num/50;
                 num=num-s50*50;
                 
                     while(num>0){
                     s10=num/10;
                     num=num-s10*10;
                     
                         while(num>0){
                         s5=num/5;
                         num=num-s5*5;
                         
                             while(num>0){
                             s1=num/1;
                             num=num-s1*1;
                             }
                         }
                     }
                }
            }
        }
       
    
    count=s500+s100+s50+s10+s5+s1;
    printf("%d",count);
    
    return 0;
}
