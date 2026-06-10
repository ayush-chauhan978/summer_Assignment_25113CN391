#include<bits/stdc++.h>
using namespace std;
//Question Number 37
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

//Question Number 38
int main(){
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=2*i-1;j>0;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

//Question Number 39
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        int breakpoint = i;
        int a=1;
        for(int k=1;k<=2*i-1;k++){
            if(k<breakpoint){
                cout<<a;
                a++;
            }
            else{
                cout<<a;
                a--;
            }
        }

        cout<<"\n";
    }
    return 0;
}

//Question Number 40
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        int breakpoint = i;
        char ch = 'A';
        for(int k=1;k<=2*i-1;k++){
            if(k<breakpoint){
                cout<<ch;
                ch++;
            }
            else{
                cout<<ch;
                ch--;
            }
        }
        cout<<"\n";
    }
    return 0;
}