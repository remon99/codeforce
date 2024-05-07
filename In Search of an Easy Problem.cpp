#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,s;
  cin>>n;
  int cnt=0;
while(n--)
    {
      cin>>s;
      if(s == 1)
      cnt ++;
    }
  if(cnt == 0) cout<<"EASY";
  else cout<<"HARD";
}