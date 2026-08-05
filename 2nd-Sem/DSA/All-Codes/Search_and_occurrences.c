#include<stdio.h>
int main()
{
    int a[100],n,i,key,c=0;
    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element to search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
        if(a[i]==key)
            c++;

    if(c)
        printf("Found %d times",c);
    else
        printf("Not Found");

    return 0;
}
