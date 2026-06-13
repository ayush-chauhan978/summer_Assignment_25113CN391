#include<bits/stdc++.h>
using namespace std;
//Question Number 49
/*int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    return 0;
}*/

//Question Number 50
/*int main(){
    int arr[5]={1,2,3,4};
    int sum=0;
    float avg=0;
    for(int i=0;i<4;i++){
        sum+=arr[i];
    }
    avg=(float)sum/4;
    cout<<"sum is:"<<sum<<endl;
    cout<<"average is:"<<avg<<endl;
    
    return 0;
}*/

//Question Number 51
/*int main(){
    int max=INT_MIN;
    int min=INT_MAX;
    int arr[5]={1,2,3,4,5};

    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<max<<" "<<min;
    return 0;
}*/

//Question Number 52
int main(){
    int arr[5]={1,2,2,4,5};
    int even=0,odd=0;
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<even<<" "<<odd;
    return 0;
}