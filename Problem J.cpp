#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,lowest,f=0;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++){
      cin>>a[i]; 
    }
    lowest=a[1];
    for(i=2;i<=n;i++)
    {
        if(a[i]<lowest)
            lowest=a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==lowest)
            f++;
    }
    if(f%2!=0)
        cout<<"Lucky";
    else
        cout<<"Unlucky";

    return 0;
}
