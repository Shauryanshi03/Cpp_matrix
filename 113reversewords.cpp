#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string reverseword(string s){
    reverse(s.begin(),s.end());
    int start=0;
    for(int end=0;end<=s.length();end++){
        if(end==s.length() || s[end]==' '){
            reverse(s.begin()+start,s.begin()+end);
            start=end+1;
        }
    }
    return s;
}

int main(){
    string s="the sky is blue";
    cout<<reverseword(s);
    return 0;
}