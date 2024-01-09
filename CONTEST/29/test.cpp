#include <iostream>
using namespace std;

int main() {
   
     char char1;
     cin>>char1;

     char a = 'a',e='e',i='i',o='o',u='u';
     
     if(char1==a || char1==e || char1==i || char1==o || char1==u)cout<<"vowel"<<endl;
     else cout<<"consonant"<<endl;

     // u can check by this as well
    //    if(char1=='a' || char1=='e' || char1=='i' || char1=='o' || char1=='u')cout<<"vowel"<<endl;

    return 0;
}
