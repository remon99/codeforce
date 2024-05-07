#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a[45],cnt1=0,cnt2=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(a[i]%2 == 1) cnt1++;
            }
            else{
                if(a[i]%2 == 0) cnt2++;
            }
        }
        if(cnt1==cnt2) cout<<cnt1<<endl;
        else cout<<-1<<endl;
        
    }
}