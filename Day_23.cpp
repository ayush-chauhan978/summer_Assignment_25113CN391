#include<bits/stdc++.h>
using namespace std;
//Question Number 89
int main(){
    string s;
    getline(cin,s);

    map<char,int> mpp;

    for(char ch:s){
        mpp[ch]++;
    }
    for(int i=0;i<s.size();i++){

        if(mpp[s[i]] == 1){
            cout<<s[i];
            break;
        }
    }
    return 0;
}
//Question Number 90
int main(){
    string s;
    getline(cin,s);

    set<char> st;

    for(char ch:s){
        if(st.count(ch)){
            cout<<ch;
            break;
        }
        st.insert(ch);
    }
    return 0;
}

//Question Number 91
int main(){
    string s1;
    getline(cin,s1);

    string s2;
    getline(cin,s2);
    if(s1.size()!=s2.size()){
        cout<<"Anagram";
        return 0;
    }
    int freq[26]={0};

    for(char ch:s1){
        freq[ch-'a']++;
    }
    for(char ch:s2){
        freq[ch-'a']--;
    }

    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            cout<<"Not Anagram";
            return 0;
        }
    }
    cout<<"Anagram";
    return 0;
}

//Question Number 92
int main(){
    string s;
    getline(cin,s);

    unordered_map<char,int> st;

    for(char ch:s){
        st[ch]++;
    }
    int maxi = INT_MIN;
    char ch ;
    for(auto it:st){
        if(maxi<it.second){
            maxi = it.second;
            ch = it.first;
        }
    }
    cout<<ch;
    return 0;
}