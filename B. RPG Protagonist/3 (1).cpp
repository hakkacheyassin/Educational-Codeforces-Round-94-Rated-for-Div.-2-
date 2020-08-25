#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef long long ll;

ll fun(ll p,ll s,ll f,ll w,ll cnts,ll cntw)
{
    ll ans=0;
    ll cnt=p/s;
     ll o=p%s;
                ll dif=w-s;
                ll cc;
                if(dif==0) cc=0;
                else
                 cc=o/dif;
                ll io=min(cc,cntw);
                cntw-=io;
                ans+=io;
                p-=io*w;
                cnt=p/s;
                ans+=min(cnt,cnts);
                p-=(min(cnt,cnts)*s);
                cnts-=min(cnt,cnts);

                ll oi=p/w;
                ll ii=min(oi,cntw);
                ans+=ii;
                cntw-=ii;
              ll cnt1=f/s;
                ll o1=min(cnt1,cnts);
                ans+=min(cnt1,cnts);
                f-=o1*s;

                cnts-=min(cnts,cnt1);
                 cnt1=f/w;
                 o1=min(cnt1,cntw);
                ans+=min(cnt1,cntw);
                return ans;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll p,f;
        cin>>p>>f;
        ll cnts,cntw;
        cin>>cnts>>cntw;
        ll s,w;
        cin>>s>>w;

        if(s>w)
        {
            swap(s,w);
            swap(cnts,cntw);
        }
        ll ans=0;
        for(int i=0;i<=cnts;i++)
        {
            ll cr=0;
            ll pp=p, ff=f;
            pp-=i*s;
            if(pp>=0)
            {cr+=i;
            ll ci=cnts-i;
            ll cw=cntw;
            ll o=pp/w;
            ll ip=min(o,cw);
            cr+=ip;
            cw-=ip;

            ll oi=ff/s;
            ll k=min(oi,ci);
            cr+=min(oi,ci);
            ff-=k*s;
            oi=ff/w;
            k=min(oi,cw);
            cr+=k;
            ans=max(ans,cr);}
cr=0;
            pp=f,ff=p;
                        pp-=i*s;
            if(pp>=0)
            {cr+=i;
          ll ci=cnts-i;
    ll cw=cntw;
            ll o=pp/w;
            ll ip=min(o,cw);
            cr+=ip;
            cw-=ip;

            ll oi=ff/s;
            ll k=min(oi,ci);
            cr+=min(oi,ci);
            ff-=k*s;
            oi=ff/w;
            k=min(oi,cw);
            cr+=k;
            ans=max(ans,cr);}


        }



        cout<<ans<<endl;

    }

}