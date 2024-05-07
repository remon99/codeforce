#include<bits/stdc++.h>
using namespace std;
#define loop(i,n) for(i=0;i<n;i++)
#define rep(i,a,n) for(int i=a;i<n;i++)
int main(){
	int t;
	cin>>t;
	while(t--){
        long long n,i,cnt=0,q,e;
        vector<int>a;
        vector<int>b;
        cin>>n;
        loop(i,n){
            int x;
            cin>>x;
            a.push_back(x);
        }
        loop(i,n){
            int x;
            cin>>x;
            b.push_back(x);
        }
        int s=*min_element(a.begin(),a.end());
        int d=*min_element(b.begin(),b.end());
        loop(i,n){
           q=a[i]-s;
           e=b[i]-d;
           if(q>=1 && e>=1){
               if(q>e){
                   cnt+=e+(q-e);
               }
               else cnt+=q+(e-q);
           }
           else cnt+=q+e;
        }
        cout<<cnt<<endl;
	} 
}