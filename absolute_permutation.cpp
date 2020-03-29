#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    int n,k;
    cin>>n>>k;
    vector <int> vec;
    if(k==0)
    {
        for(int i=1;i<=n;i++)
        {
            vec.push_back(i);
        }
    }
    else if(n%2!=0 || k>n/2 || (k<n/2&& n%k!=0))
    {
        vec.push_back(-1);

    }
    else if(n%(2*k)!=0)
    {
    vec.push_back(-1);

    }
    else
    {
    int x=2*k;
    int p=x;
    int u=1;
    for(int i=1;i<=n;)
    {
            for(int k1=(x+i)/2+1;k1<=x;k1++)
            {
                vec.push_back(k1);
            }
            for(int k1=i;k1<=(x+i)/2;k1++)
            {
                vec.push_back(k1);
            }
        u++;
        x=p*u;
        i=i+(2*k);
    }
    }
   for(auto it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
    }
    cout<<"\n";
}
