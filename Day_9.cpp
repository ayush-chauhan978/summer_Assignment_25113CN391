#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

//Question Number 34
int main(){
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}

//Question Number 35
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(65+i);
        }
        cout<<"\n";
    }
    return 0;
}

//Question Number 36
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==2*n-1){
                cout<<"*";
            }
            else if(j==1 && i%2!=0){
                cout<<"*";
            }
            else if(j==n && i%2!=0){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}