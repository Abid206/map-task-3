#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    op();
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        getline(cin, s);
        while(s.length()==0)getline(cin, s);

        string temp;

        vector<string> v;
        for(auto u : s)
        {
            if(isspace(u) )
            {
                v.push_back (temp);
                temp.clear();
            }
            else
                temp += u;
        }

        v.push_back(temp);

        map<string,int> coun;

        int mxFrq=0;
        for(auto u : v)
        {
            coun[u]++;
            mxFrq=max(mxFrq, coun[u]);
        }

        string ans;

        for(auto u : v)
        {
            if(coun[u] == mxFrq)
            {
                ans = u;
                break;
            }
        }
        cout << ans << " " << mxFrq << endl;
    }
    return 0;
}


