#include<bits/stdc++.h>
using namespace std;
// QUestion Number25
int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}

//Question Number 26
int fibonacci(int n){
    if(n==1) return 1;
    else if(n==0) return 0;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cin >> n;
    cout<<fibonacci(n);
    return 0;
}

// Question Number 27 
int summation(int n){
    if(n==0) return 0;
    return (n%10)+summation(n/10);
}
int main(){
    int n;
    cin>>n;
    cout<<summation(n);
    return 0;
}


//Question Number 28
int revnum(int n,int rev){
    if(n==0) return rev;
    return revnum(n/10,rev*10+n%10);
}
int main(){
    int n;
    cin>>n;
    cout<<revnum(n,0);
    return 0;
}