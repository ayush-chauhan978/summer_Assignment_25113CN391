// Question Number 21
#include<stdio.h>
int main(){
    int n;
    printf("Enter the Decimal Number:");
    scanf("%d",&n);

    int place=1;
    int bin=0;
    while(n>0){
        int temp = n%2;
        if(temp==1){
        bin=place+bin;
        }
        place=place*10;
        n=n/2;
    }
    printf("%d",bin);
    return 0;
}

// Question Number 22
#include<stdio.h>
int main(){
    int n;
    printf("Enter The binary number:");
    scanf("%d",&n);

    int place=1;
    int dec=0;
    while(n>0){
        int temp=n%10;
        if(temp==1){
            dec = place+dec;
        }
        place=place*2;
        n=n/10;
    }
    printf("%d",dec);
    return 0;
}

//Question Number 23
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0;

    while (n>0) {
        if (n%2==1) {
            count++;
        }
        n=n/2;
    }

    printf("%d", count);

    return 0;
}

// Question Number 24
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the base:");
    scanf("%d",&a);

    printf("Enter the exponent");
    scanf("%d",&b);

    int result=1;
    for(int i=1;i<=b;i++){
        result=a*result;
    }
    printf("%d",result);
}