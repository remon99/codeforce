#include<bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i=0;i<n;i++)
#define pys cout<<"YES"<<endl;
#define pyn cout<<"NO"<<endl;
typedef long long ll;
 
int main(){
	int n,m,a[100007],b[100007],cnt=0;
	cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>m;
    while(m--){
        int x;
        cin>>x;
        int ans=upper_bound(a,a+n,x)-a;
        cout<<ans<<"\n";
    }
}