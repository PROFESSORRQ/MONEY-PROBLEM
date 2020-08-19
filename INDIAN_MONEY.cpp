#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
    return a<=b;
}
int main()
{
    int money;
    int arr[]={1,2,5,10,20,50,100,200,500,2000};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the amount of money";
    cin>>money;
    while(money>0)
    {
        int p=lower_bound(arr,arr+n,money,compare)-arr-1;
        int m=arr[p];
        cout<<m<<",";
        money=money-m;

    }
    
    return 0;
}