#include<bits/stdc++.h>
using namespace std;
// Question Number 57
void rev(vector<int> &arr){
    int n= arr.size();
    int left=0;
    int right = arr.size()-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++,right--;
    }
}
int main(){
    vector<int> arr={1,2,3,4,5};
    rev(arr);
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}

//Question Number 58
void rotat(int arr[],int n,int d){
    d %=n;
    rotate(arr,arr+d,arr+n);
}
int main(){
    int arr[]={1,2,3,4,5};
    int d;
    cout<<"Enter the value of rotation"<<" ";
    cin>>d;
    int n=5;
    rotat(arr,n,d);
    for(auto it:arr){
        cout<<it;
    }
    return 0;
}

//Question Number 59
void rotat(vector<int> &arr,int d){
    int n= arr.size();
    d%=n;
    rotate(arr.begin(),arr.begin()+d,arr.end());
}
int main(){
    vector<int> arr={1,2,3,4,5};
    int d;
    cout<<"Enter the value of rotation"<<" ";
    cin>>d;
    rotat(arr,d);
    for(auto it:arr){
        cout<<it<<" ";
    }
}

//Question Number 60
int main(){
    int arr[]={0,1,0,1,0,1,0};
    int n=7;
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(auto it : arr){
        cout<<it<<" ";
    }
    return 0;
}