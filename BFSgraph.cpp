#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int cost[10][10],i,j,k,n,qu[10],front,rear,v,visit[10],visited[10];
int main()
{
int m;
cout<<"enter no of vertices";
cin>> n;
cout<<"enter no of edges";
cin>> m;
cout<<"\nEDGES \n";
for(k=1;k<=m;k++)
{
cin>>i>>j;
cost[i][j]=1;
}
cout<<"enter initial vertex";
cin>>v;
cout<<"The BFS Graph traversal is given by: \n";
cout<<v<<" ";
visited[v]=1;
k=1;
while(k<n)
{
for(j=1;j<=n;j++)
if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
{
visit[j]=1;
qu[rear++]=j;
}
v=qu[front++];
cout<<v<<" ";
k++;
visit[v]=0; visited[v]=1;
}
return 0;
}
