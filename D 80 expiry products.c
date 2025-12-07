#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of products: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the expiry months of all products: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
    }
    printf("The products are: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
