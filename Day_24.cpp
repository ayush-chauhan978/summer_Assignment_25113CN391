#include<bits/stdc++.h>
using namespace std;
//Question Number 93
bool isrotation(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    string temp = s1+s2;
    
    return temp.find(s2)!=string::npos;
}
int main(){
    string s1;
    getline(cin,s1);

    string s2;
    getline(cin,s2);

    if(isrotation(s1,s2)){
        cout<<"String is rotated";
    }
    else{
        cout<<"String is not rotated";
    }
    return 0;
}

//Question Number 94
string compress(string s){
    string ans="";

    int n=s.length();

    for(int i=0;i<n;i++){
        int count=1;

        while(i<n-1 && s[i]==s[i+1]){
            count++;
            i++;
        }
        ans+=s[i];
        ans+=to_string(count);
    }
    return ans;
}
int main(){
    string s;
    getline(cin,s);

    cout<<compress(s);
    return 0;
}

//Question Number 95
int main(){
    string s;
    getline(cin,s);

    stringstream ss(s);

    string word,longs ="";

    while(ss>>word){
        if(word.length()>longs.length()){
            longs=word;
        }

    }
    cout<<"longest word is"<<" "<<longs;
    return 0;
}

//Question Number 96
int main(){
    string s;
    getline(cin,s);

    string ans="";
    for(int i=0;i<s.length();i++){
        bool dup=false;

        for(int j=0;j<i;j++){
            if(s[i]==s[j]){
            dup=true;
            break;
            }
        }
        if(!dup){
        ans+=s[i];
    }
    }
    cout<<"New string is "<<ans;
    return 0;
}