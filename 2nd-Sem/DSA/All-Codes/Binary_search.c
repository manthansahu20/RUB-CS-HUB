#include<stdio.h>
int main()
{
    int a[100],n,i,key,l=0,h,mid;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter sorted array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter key: ");
    scanf("%d",&key);

    h=n-1;

    while(l<=h)
    {
        mid=(l+h)/2;

        if(a[mid]==key)
        {
            printf("Found at position %d",mid+1);
            return 0;
        }
        else if(key>a[mid])
            l=mid+1;
        else
            h=mid-1;
    }

    printf("Not Found");
    return 0;
}
