#include<bits/stdc++.h>
using namespace std;
void code()
{
    int i, j, k=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>k;
            if(k==1)
            {
                cout<<abs(i-3)+abs(j-3)<<endl;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    code();
    return 0;
}
