#include<iostream>
using namespace std;
long long a[50],k;
int main()
{
cin>>k;
a[1]=1;a[2]=1;
for(int i=3;i<=k;i++) a[i]=a[i-1]+a[i-2];
cout<<a[k];
return 0;


}
