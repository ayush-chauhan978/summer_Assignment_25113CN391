#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) sum+=i;
    }

    if(n==sum) printf("Entered number is perfect number");
    else printf("Entered number is not perfect number");
    return 0;
}

// Question number 18
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int sum=0;

    int temp=n;
    while(temp>0){
        int remainder = temp%10;
        int fact=1;
        for(int i=2;i<=remainder;i++){
            fact=fact*i;
        }
        sum+=fact;
        temp=temp/10;
    }
    if(n==sum) printf("Entered number is strong number");
    else printf("Entered number is not strong number");
    return 0;
}

//Question Number 18
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of n:");
    scanf("%d",&n);

    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
            if((n/i)!=i){
                printf("%d ",n/i);
        }
    }
    }
    return 0;
}

//Question Number 20
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int flag=-1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int prime=1;
           for(int j=2;j*j<=i;j++){
            if(i%j==0){
                prime=0;
                break;}
           }
           if(prime) flag=i;
    }
}
    printf("%d",flag);
    return 0;
}