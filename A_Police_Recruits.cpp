#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[100007],sum=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<0){
            if(sum>0){
            sum--;
            }
            else cnt++;
        }
        else sum+=a[i];
    }
    cout<<cnt;

}