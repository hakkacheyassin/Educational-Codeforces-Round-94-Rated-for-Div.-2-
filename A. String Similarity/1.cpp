#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define all(x) x.begin(),x.end()
typedef vector<ll> vll;
typedef vector<int> vi;
ll modpower(ll a,ll b,ll c)
{
	ll res=1;
	while(b)
	{
		if(b&1LL)
			res=(res*a)%c;
		a=(a*a)%c;
		b>>=1;
	}
	return res;
}

int main() 
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n;
		string s;
		string res;
        cin>>n;
        cin>>s;
        ll cur=0;
        ll sum=0;
        set<string> v;
        for(int i=0;i<n;i++)
        {
            string ss;
            for(int j=i;j<i+n;j++)
            {
                ss.pb(s[j]);
            }
            v.insert(ss);
        }
        for(int i=0;i<n;i++)
        	sum+=i;
        
        while(!v.empty())
        {
        	sum++;
            string it=*v.begin();
            int counter=0;
            res.pb(it[cur]);
            vector<string> ve;
            for(auto tt=v.begin();tt!=v.end();tt++)
            {
            	counter++;
                string vs=*tt;
                if(it[cur]==vs[cur])
                {
                	sum++;
                    ve.pb(vs);
                }
            }
            sum--;
            for(int i=0;i<ve.size();i++)
            {
            	counter--;
            	sum--;
                v.erase(ve[i]);
            }
            cur++;
        }

        cout<<res;
        for(int i=0;i<n-res.size();i++) 
			cout<<"1";
        cout<<endl;
		
	}
	return 0;
}




