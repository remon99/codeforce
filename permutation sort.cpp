#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a[52],cnt=0;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n-1;i++){
	        if(a[i]<a[i+1]) continue;
	        else cnt++;
	    }
	    if(cnt==0){
	        cout<<0<<endl;
	    }
	    else{
	        if(n==3){
	            if(a[n-1]==3) cout<<1<<endl;
	            else if(a[n-1]==2){
	                if(a[0]==1) cout<<1;
	                else cout<<2;
	            }
	            else if(a[n-1]==1){
	                if(a[0]==3) cout<<3;
	                else cout<<2;
	            }
	            cout<<endl;
	        }
	        else if(a[0]==1 || a[n-1]==n) cout<<1<<endl;
	        else{
	            if(a[0]==n && a[n-1]==1) cout<<3;
	            else cout<<2;
	            cout<<endl;
	        }
	    }
	}
	return 0;
}
