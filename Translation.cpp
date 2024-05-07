#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,d;
    cin>>s>>d;
    reverse(d.begin(), d.end());
    int result=s.compare(d);
    
    if(result == 0) cout<<"YES";
    else cout<<"NO";
 

}