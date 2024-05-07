#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        string s;
        vector<char>v;
        cin>>n>>s;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]) continue;
            else v.push_back(s[i]); 
        }
        v.push_back(s[n-1]);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]) cnt++;
        }
        if(cnt>=1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}