#include<iostream>
using namespace std;
int left_side_max(int a[],int pos)
{
    int i,s=a[0];
    for(i=1;i<=pos;i++)
        if (s<a[i])s=a[i];
    return s;
}
int right_side_max(int a[],int pos,int n)
{
    int i,s=a[n-1];
    for(i=n-2;i>=pos;i--)
        if(s<a[i])s=a[i];
    return s;
}
int main()
{
    int left,right,n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
        {left=left_side_max(a,i);
        right = right_side_max(a,i,n);
        sum += min(left,right)-a[i];
}
cout<<sum;
return 0;
}
