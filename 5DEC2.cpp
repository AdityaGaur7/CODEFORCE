#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
  
    while (t--) {
        string s;
        cin >> s;
       
        int n = s.size();
      
stack<pair<int,char>>low,up;

for(int i = 0;i<n;i++){
    if(s[i]=='b' && !low.empty()){
        low.pop();
    }
    else if(s[i]=='B' && !up.empty()){
        up.pop();
    }
    else if(s[i]>='a' && s[i]<='z' && s[i]!='b')low.push({i,s[i]});
    else if(s[i]>='A' && s[i]<='Z' && s[i]!='B')up.push({i,s[i]});
}


set<pair<int,char>>set;

    while(!low.empty())   {
          
    set.insert(low.top());

low.pop();
    }
    while(!up.empty())   {
          
    set.insert(up.top());

up.pop();
    }
    for(auto x : set)cout<<x.second;
cout<<endl;
    }
    return 0;
}
