// Question Number 9
#include<stdio.h>
int main(){
    int a=0;
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0) printf("Number is prime");
    else printf("Number is not prime");
    return 0;
}

// Question Number 10
#include<stdio.h>
int main(){
    int start , end;
    printf("Enter the numbers:");
    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++){
        int a=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                a=0;
                break;
            }
        }
        if(a==1) printf("%d",i);
    }
    
    return 0;
}

// Question number 11
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);

    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;

        if(a==0) printf("%d",b);
        else if(b==0) printf("%d",a);

    }
    return 0;
}

//Question Number 12
#include<stdio.h>
int max(int a,int b){
    if(a>b) return a;
    return b;
}
int Lcm(int a,int b){
    int lcm=max(a,b);
    while(1){
        if(lcm%a==0 && lcm%b==0){
            return lcm;
        }
        lcm++;
    }
}
int main(){
    int a,b;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    
    printf("%d",Lcm(a,b));

    return 0;
}