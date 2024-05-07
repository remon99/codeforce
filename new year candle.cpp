#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,total=0;
    cin>>a>>b;
    int n=a;
    while(a>=b){
        total+=a/b;
        a=a/b+a%b;
    }
    cout<<total+n;
}