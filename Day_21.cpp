#include<bits/stdc++.h>
using namespace std;
//Question Number 81
int main(){
    string str;
    cout<<"Enter the string";
    getline(cin,str);

    int cnt=0;
    while(str[cnt]!='\0'){
        cnt++;
    }
    cout<<cnt;
    return 0;
}

//Question Number 82
int main(){
    string str;
    cout<<"Enter the string";
    getline(cin,str);

    for(int i=str.size()-1;i>=0;i--){
        cout<<str[i];
    }
    return 0;
}

//Question Number 83
int main(){
    string s;
    cin>>s;

    int vow=0,cons=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            vow++;
        }
        else{
            cons++;
        }
    }
    return 0;
}

//Question Number 84
int main(){
    string s;
    cout<<"Enter the lowercase string";
    cin>>s;

    for(int i=0;i<s.size();i++){
        s[i]=s[i]-32;
    }
    cout<<"The uppercase string is"<<s;
    return 0;
}