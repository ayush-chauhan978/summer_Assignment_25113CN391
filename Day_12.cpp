#include<bits/stdc++.h>
using namespace std;
//Question Number 45 
/*string palindrome(int n){
    int temp = n;
    int num=0;
    while(temp>0){
        int rem = temp%10;
        num = num*10+rem;
        temp = temp/10;
    }
    if(n==num) return "Palindrome";
    else return "Not Palindrome";
}
int main(){
    int x;
    cin>>x;
    cout<<palindrome(x);
    return 0;
}*/

//Question Number 46
/*string armstrong(int n){
    int temp=n;
    int count=0;
    int num=0;
    while(temp>0){
        temp=temp/10;
        count++;
    }
    temp=n;
    while(temp>0){
        int remainder = temp%10;
        num+=(int)pow(remainder,count);
        temp=temp/10;
    }
    if(n==num) return "Armstrong Number";
    else return "Not Armstrong Number";
}
int main(){
    int x;
    cin>>x;
    cout<<armstrong(x);
    return 0;
}*/

//Question Number 47 
/*int fibonacci(int n){
    int a=0,b=1;
    int sum=0;
    for(int i=1;i<n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    return a;
}
int main(){
    int x;
    cin>>x;
    cout<<fibonacci(x);
    return 0;
}*/

//Question Number 48
string perfect(int n){
    int sum=0;
    for(int i=1;i*i<=n;i++){
        int fact=i;
        if(n%i==0) {
            sum+=fact;
        
            if((n/i)!=n){
                sum+=(n/i);
        }
    }
    }
    if(n==sum) return "Perfect Number";
    else return "Not Perfect Number";
}
int main(){
    int x;
    cin>>x;
    cout<<perfect(x);
    return 0;
}