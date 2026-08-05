#include<stdio.h>

int a[10][10],visit[10],n;

void dfs(int v){
    int i;
    visit[v]=1;
    printf("%d ",v);

    for(i=0;i<n;i++)
        if(a[v][i] && !visit[i])
            dfs(i);
}

void bfs(int s){
    int q[20],f=0,r=0,i,v;
    int vis[10]={0};

    q[r++]=s;
    vis[s]=1;

    while(f<r){
        v=q[f++];
        printf("%d ",v);

        for(i=0;i<n;i++)
            if(a[v][i] && !vis[i]){
                vis[i]=1;
                q[r++]=i;
            }
    }
}

int main(){
    int i,j,start;

    printf("Enter vertices: ");
    scanf("%d",&n);

    printf("Enter adjacency matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    printf("Start vertex: ");
    scanf("%d",&start);

    printf("DFS: ");
    for(i=0;i<n;i++) visit[i]=0;
    dfs(start);

    printf("\nBFS: ");
    bfs(start);

    return 0;
}
