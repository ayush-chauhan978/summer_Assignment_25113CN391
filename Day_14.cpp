#include<bits/stdc++.h>
using namespace std;
//Question Number53
int main(){
    int arr[]={2,4,3,5,1};
    for(int i=0;i<4;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    return 0;
}
//Question Number 54
int main(){
    int arr[]={1,2,3,1,1,4,5,5};
    int key;
    cin>>key;
    int cnt=0;
    for(int i=0;i<8;i++){
        if(arr[i]==key){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}

//Question Number 55
int main(){
    int arr[]={0,1,3,3,2};
    int max=INT_MIN,smax=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<max<<" "<<smax;
    return 0;
}

//Question Number 56
int main(){
    vector<int> arr={1,2,1,3,4,5,5};
    vector<int> hashmpp(10,0);
    for(int i=0;i<arr.size();i++){
        hashmpp[arr[i]]++;
    }
    for(int i=0;i<hashmpp.size();i++){
        if(hashmpp[i]>1){
            cout<<i<<" ";
        }
    }
    return 0;
}