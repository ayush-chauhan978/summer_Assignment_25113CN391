// Question Number 13
#include<stdio.h>
int main(){
    int a=0;
    int b=1;
    int sum=0;

    int n;
    printf("Enter The value ofn:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        sum = a+b;
        a=b;
        b=sum;
    }
    return 0;
}

// Question Number 14

#include<stdio.h>
int main(){
    int a=0;
    int b=1;
    int sum=0;

    int n;
    printf("Enter The value of n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum = a+b;
        a=b;
        b=sum;
    }
    printf("%d",a);
    return 0;
}

// Question Number 15
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    int temp,count=0;
    int sum=0;
    temp=n;
    while(temp>0){
        temp=temp/10;
        count++;
    }
    temp = n;
    while(temp>0){
        int remainder;
        remainder = temp%10;
        sum+=(int)pow(remainder,count);
        temp=temp/10;
    }
    if(n==sum) printf("Armstrong Number");
    else printf("Number is not Armstrong");
    return 0;
}

// Question number 16
#include<stdio.h>
#include<math.h>
int main(){
    int start,end;
    printf("Enter the number of start and end values:");
    scanf("%d %d",&start,&end);

    
    for(int i=start;i<=end;i++){
        int temp,count=0;
        int sum=0;
        temp=i;
        while(temp>0){
            temp=temp/10;
            count++;
        }
        temp = i;
        while(temp>0){
            int remainder;
            remainder = temp%10;
            sum+=(int)pow(remainder,count);
            temp=temp/10;
        }
        if(i==sum) printf("%d ",i);
            }
    return 0;
}
