//发邮件
//错排问题
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        vector<long long> v;
        v.resize(n+1);
        v[0]=0;
        v[1]=0;
        v[2]=1;
        for(int i=3;i<=n;++i)
        {
            v[i]=(i-1)*(v[i-2]+v[i-1]);
        }
        printf("%lld\n",v[n]);
    }
    return 0;
}