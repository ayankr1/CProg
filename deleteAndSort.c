#include <stdio.h>
void removeAndSort(int[] , int, int);

int main() {
int i,del,a[50],size;
//printf("Enter the size of an array");
scanf("%d",&size);
//printf("Enter the elements of an array");
for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
	//printf("Enter the element to be deleted");
	scanf("%d",&del);
	
	removeAndSort(a, size, del);//explain this line
	
    return 0;
}

void removeAndSort(int a[],int size, int del)
{
    int i,j,temp;
    for(i=0;i<=size;i++)
    {
        if(a[i]==del)
        {
            for(j=i; j<size-1; j++)
            {
                a[j]=a[j+1];
            }
            size--;
            break;
        }
    }
    for (i = 0; i < size; ++i)
    {
        for (j = i + 1; j < size; ++j)
        {
            if (a[i] > a[j])
            {
                temp =  a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    for(i=0;i<size;i++)
	    printf("%d\t",a[i]);
}
