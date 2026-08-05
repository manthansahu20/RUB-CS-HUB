#include<stdio.h>
int main()
{
    int a[100],n,i,pos,item,ch;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("1.Insert 2.Delete : ");
    scanf("%d",&ch);

    if(ch==1)
    {
        printf("Position & Item: ");
        scanf("%d%d",&pos,&item);

        for(i=n;i>=pos;i--)
            a[i]=a[i-1];

        a[pos-1]=item;
        n++;
    }
    else
    {
        printf("Position: ");
        scanf("%d",&pos);

        for(i=pos-1;i<n-1;i++)
            a[i]=a[i+1];

        n--;
    }

    printf("Array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
