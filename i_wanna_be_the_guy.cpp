#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int,int>m;
    int n , p , q;
    cin >> n>>p;
    for(int i=0;i<p;++i){
        int x;
        cin>>x;
        m[x]++;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    if(m.size()==n) cout<<"I become the guy";
    else cout<<"Oh! my keyboard";
    return 0;
}
    
    
    
