#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    set<int>s;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        s.insert(temp);
	    }
	    int size = s.size();
	    cout<<size<<endl;
	    
	}
	return 0;
}
