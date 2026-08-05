#include<stdio.h>

int main(){
    int a[10][10],r,c,i,j;

    printf("Rows Columns: ");
    scanf("%d%d",&r,&c);

    printf("Enter matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Row Col Value\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(a[i][j]!=0)
                printf("%d %d %d\n",i,j,a[i][j]);

    return 0;
}
