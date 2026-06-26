#include<bits/stdc++.h>
using namespace std;
//Question Number 97
int main(){
    vector<int> arr1={1,3,5,7};
    vector<int> arr2={2,4,6,8,9};

    int n=arr1.size();
    int m = arr2.size();

    vector<int> merg;

    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            merg.push_back(arr1[i]);
            i++;
        }
        else{
            merg.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        merg.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        merg.push_back(arr2[j]);
        j++;
    }

    for(auto it:merg){
        cout<<it<<" ";
    }
    return 0;
}

//Question Number 98
int main(){
    string s1;
    getline(cin,s1);

    string s2;
    getline(cin,s2);

    vector<int> freq1(26,0),freq2(26,0);
    
    for(char ch:s1){
        freq1[ch-'a']++;
    }
    for(char ch:s2){
        freq2[ch-'a']++;
    }

    cout<<"Common character"<<" ";

    for(int i=0;i<26;i++){
        int comm = min(freq1[i],freq2[i]);

        while(comm--){
            cout<<char(i+'a')<<" ";
        }
    }
    return 0;
}

//Question Number 99
int main(){
    int n;
    cout<<"Enter the number of names"<<" ";
    cin>>n;

    vector<string> names(n);

    for(int i=0;i<n;i++){
        cin>>names[i];
    }

    sort(names.begin(),names.end());

    for(int i=0;i<n;i++){
        cout<<names[i]<<" ";
    }

    return 0;
}

//Question Number 100
bool compare(string a,string b){
    return a.length() < b.length();
}

int main(){
    int n;
    cout<<"Enter the number of words"<<" ";
    cin>>n;

    vector<string> words(n);

    for(int i=0;i<n;i++){
        cin>>words[i];
    }

    sort(words.begin(),words.end(),compare);

    for(auto it : words){
        cout<<it<<" ";
    }
    return 0;
}