#include<bits/stdc++.h>
using namespace std;
//Question Number 41
int sum(int a,int b){
    return a+b;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<sum(x,y);
    return 0;
}

//Question Number 42
int max(int a,int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<max(x,y);
    return 0;
}

//Question Number 43
string prime(int a){
    int flag=1;
    for(int i=2;i<a;i++){
        if(a%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1) return "Prime Number";
    else return "Not Prime Number";
}
int main(){
    int x;
    cin>>x;
    cout<<prime(x);
    return 0;
}

//Question Number 44
int factorial(int a){
    int fact=1;
    for(int i=2;i<=a;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int x;
    cin>>x;
    cout<<factorial(x);
    return 0;
}