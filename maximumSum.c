#include<stdio.h>
void maximumSum(int[], int) ;
 int main()
 {
     int arr[60],n,i;
     scanf("%d",&n);
     if(n<0)
     {
         printf("Invalid input");
         return 0;
     }
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
         if(arr[i]<0)
         {
             printf("Invalid input");
             return 0;
         }
     }
     maximumSum(arr, n); 
     
 return 0;
 }
     
 
void maximumSum(int a[], int n) 
 {
     int even=0,odd=0,i;
     for(i=0;i<n;i++)
     {
         if(a[i]%2==0)
         {
             even+=a[i];
         }
         else
         {
             odd+=a[i];
         }
     }
     if(even>odd)
     {
        printf("%d",even);
     }
     else
     {
         printf("%d",odd);
     }
     
 }
