#include<bits/stdc++.h>
using namespace std;
//Question Number 29
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

// Question Number 30
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }

    return 0;
}

//Question Number 31
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<char(65+j);
        }
        cout<<"\n";
    }
    return 0;
}

//Question Number 32
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}