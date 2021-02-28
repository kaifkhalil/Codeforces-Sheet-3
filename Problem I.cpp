#include<bits/stdc++.h> 
#define ll long long int
 
using namespace std; 
 
 
int main() {

 
   int t,x,n,i,j;
  
  cin>>t;
  for(x=0;x<t;x++)
  {
  cin>>n;
  long long int a[n];
  long long int min;
  long long int sum;
  for(i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  for(i=1;i<n;i++)
  {
      for(j=i+1;j<=n;j++)
    {
        sum=(a[i]+a[j]+j-i);
    if(j==2)
    {
        min=sum;
    }
    if(sum<min)
    {
        min=sum;
    }
    
    }
  }
    cout<<min << endl;
  }
  return 0;
}
