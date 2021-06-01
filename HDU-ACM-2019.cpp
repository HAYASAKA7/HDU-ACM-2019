#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
 
    int n,m,a[150];
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(n==0&&m==0){;}
        else
     {
      int i;
      for(i=0;i<=n-1;i++)
      {
          scanf("%d",&a[i]);
      }
      a[n]=m;
      int j;
      for(j=0;j<=n-1;j++)
      {
          int r,k;
          k=j;
          for(r=j;r<=n-1;r++)
          {
              if(a[k]>=a[r+1]){
                k=r+1;}
          }
          swap(a[j],a[k]);
      }
 
      for(i=0;i<=n;i++)
        {if(i<=n-1){
            printf("%d ",a[i]);}
         else printf("%d\n",a[i]);
        }
     }
    }
    return 0;
}
