#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <cmath>
#define f(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;

int main() {

ll n;
cin>>n;
unordered_map<int,int>m;
while(n>0){
    ll r= n%10;
    n=n/10;
    m[r]++;
}
ll sum =0;
for(auto it:m){
    if(it.first==4 || it.first == 7)sum = sum + it.second;
    
}
// for(auto it:m){
//     cout<<it.first<<"--"<<it.second<<endl;
// }
if(sum==4 || sum == 7)cout<<"YES"<<endl;
else cout<<"NO"<<endl;


    return 0;

}