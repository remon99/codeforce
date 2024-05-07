#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define ROF(i,a,b) for(int i=(a);i>=(b);--i)
#define mem(a) memset((a),0,sizeof(a))
#define int long long
#define endl '\n'
using namespace std;

const int N = 1e5+7;
int a[N],b1[N],b2[N],pre1[N],pre2[N];

void solve(){
    int n,m; cin>>n>>m;
    FOR(i,1,n) cin>>a[i];
    FOR(i,1,n){
        if(a[i-1]>a[i]) b1[i]=a[i-1]-a[i];
        else b2[i]=a[i]-a[i-1];
        
    }
    FOR(i,1,n){
        pre1[i]=pre1[i-1]+b1[i];
        pre2[i]=pre2[i-1]+b2[i];
    }
    
    FOR(i,1,m){
        int l,r; cin>>l>>r;
        if(l<r) cout<<pre1[r]-pre1[l]<<endl;
        else cout<<pre2[l]-pre2[r]<<endl;
    }
}

signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int T=1; //cin>>T;
    while(T--) solve();
    return 0;
}