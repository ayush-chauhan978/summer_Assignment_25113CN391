#include<bits/stdc++.h>
using namespace std;
//Question Number 85
int main(){
    string s;
    getline(cin,s);
    int n = s.length();
    int j=0,k=n-1;
    for(int i=0;i<n/2;i++){
        if(s[j]!=s[k]){
            cout<<"Not Palindrome";
            break;
        }
        j++;
        k--;
    }
    cout<<"Palindrome";
    return 0;
}

//Question Number 86
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);

    int count =0 ;
    string word;

    while(ss>>word){
        count++;
    }
    cout<<count;
    return 0;
}

//Question Number 877
int main(){
    string s;
    getline(cin,s);

    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ' || s[i]=='\t' || s[i]=='\n'){
            continue;
        }
        count++;
    }
    cout<<count;
    return 0;
}

// Question Number 88
int main(){
    string s;
    getline(cin,s);
    int j=0;
    for(int i=0;i<s.size();i++){
        if(!isspace(s[i])){
            s[j]=s[i];
            j++;
        }
    }
    cout<<s;
    return 0;
}