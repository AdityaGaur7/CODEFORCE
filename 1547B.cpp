
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
string s;
cin>>s;

int n = s.length();
if(n==1 && s[0]=='a')cout<<"YES\n";
else{
    char b = 'a'+n;
    int i = 0 , j=n-1;
    while(i<j && b>='a'){
        if(s[i]==b)i++;
        else if(s[j]==b)j--;
        else {cout<<"NO\n";return ;}
        cout<<b;
        b--;
    }
}

}

int main(){
   ll t;
cin>>t;
while(t--){
    solve();
    
}
 
    return 0;
 }


   

