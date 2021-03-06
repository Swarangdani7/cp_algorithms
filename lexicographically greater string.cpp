#include<bits/stdc++.h>

using namespace std;

string next_greatest(string s){
//finding next lexicographically greater string  
    if(s.empty()) return "a";
    if(count(s.begin(),s.end(),'z') == s.size()){
        fill(s.begin(),s.end(),'a');
        return s+'a';
    }
    int i = s.size()-1;
    while(s[i] == 'z'){
        s[i] = 'a';
        i--;
    }
    s[i] = s[i]+1;
    return s;
}

bool comp(string s1,string s2){ 
// comparator func which returns true if string s1 is greater than string s2
    if(s1.size() == s2.size()) return (s1 > s2);
    return s1.size() > s2.size();
}

int main(){

    string x;
    cin>>x; // taking string input
    int k = x.size();
    
    string p = ""; // if string is empty return "a"

    while(1){
        if(comp(next_greatest(p),x)){
            // next_greatest() returns next greatest string
            cout<<next_greatest(p)<<endl;
            break;
        }
        p = next_greatest(p);
    }


    return 0;
}