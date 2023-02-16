#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char x[20], y[20];
    
    cout<<"Enter sequence x : ";
    cin>>x;
    //fflush(stdin);
    //gets(x);
    
    cout<<"\nEnter sequence y : ";
    cin>>y;
    //fflush(stdin);
    //gets(y);
    
    int lx=strlen(x), ly=strlen(y);
    int a[lx+1][ly+1];
    char b[lx][ly];
    
    for(int i=0; i<=lx+1; i++)
    {
        for(int j=0; j<=ly+1; j++)
        {
            if(i==0 || j==0)
                a[i][j]=0;
            else if(x[i-1]==y[j-1])
            {
                a[i][j]=a[i-1][j-1]+1;
                b[i][j]='\\';
            }
            else if(x[i-1]!=y[j-1])
            {
                if(a[i-1][j] >= a[i][j-1])
                {
                    a[i][j]=a[i-1][j];
                    b[i][j]='|';
                }
                else
                {
                    a[i][j]=a[i][j-1];
                    b[i][j]='-';
                }
            }     
        }
    }
    
    int k=0;
    char lsq[20];
    
    for(int i=lx; i>0;)
    for(int j=ly; j>0;)
    {
        if(b[i][j]=='\\')
        {
            lsq[k++]=y[j-1];
            i--;
            j--;
        }
        else if(b[i][j]=='|')
        {
            i--;
        }
        else if(b[i][j]=='-')
        {
            j--;
        }
        if(i<1 || j<1)
        {
            i--;
            j--;
        }
    }
    
    cout<<endl;
    
    for(int i=0; i<lx+1; i++)
    {
        cout<<endl;
        for(int j=0; j<ly+1; j++)
        {
            if(i==0 || j==0)
            cout<<" 0 ";
            else
            cout<<b[i][j]<<a[i][j]<<" ";
        }
    }
    
    strrev(lsq);
    cout<<"\n\nLCS : "<<lsq;
    return 0;
}
