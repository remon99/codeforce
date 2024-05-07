#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s=="Icosahedron") sum+=20;
        else if(s=="Cube") sum+=6;
        else if(s=="Octahedron") sum+=8;
        else if(s=="Dodecahedron") sum+=12;
        else sum+=4;
    }
    cout<<sum;
    
}