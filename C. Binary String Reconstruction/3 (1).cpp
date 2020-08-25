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
		ll x;
		string st;
        cin>>st;
		cin>>x;
        ll n=st.length();
        string res;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            res+='1';
            sum+=i;
        }
        for(int i=0;i<n;i++)
        {
            if(st[i]=='0')
            {
            	ll sub=i-x;
                if(sub>=0)
                {
                    res[sub]='0';
                }
                ll ad=i+x;
                if(ad<n)
                {
                    res[ad]='0';
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            sum+=i;
        }
        for(int i=0;i<n;i++)
        {
            if(st[i]=='0')
            {
            	ll sub=i-x;
                if(sub>=0)
                {
                    res[sub]='0';
                }
                ll ad=i+x;
                if(ad<n)
                {
                    res[ad]='0';
                }
            }
        }
        ll flag=0;
        sum++;
        for(int i=0;i<n;i++)
        {
            if(st[i]=='1')
            {
            	sum++;
                ll sub=i-x;
                if(sub>=0)
                {
                    if(res[sub]=='1') 
						continue;

                }
                sum--;
                ll ad=i+x;
                if(ad<n)
                {
                    if(res[ad]=='1') 
						continue;
                }
                flag=1;
                break;
            }
        }
        
        if(flag==0)
        {
        	cout<<res<<"\n";
            
        }
        else{
            cout<<-1<<"\n";
        }
		
			
			
		
	
	}
	return 0;
}




