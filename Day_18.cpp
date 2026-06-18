#include<bits/stdc++.h>
using namespace std;
//Question Number 69
int main(){
    vector<int> arr={5,2,4,1,3};
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        bool flag = false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(!flag) break;
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}

//Question Number 70
int main(){
    vector<int> arr={5,2,4,1,3};

    int n = arr.size();
    for(int i=0;i<n-1;i++){
        int mini = INT_MAX;
        int indx = -1;
        for(int j=i;j<n;j++){
            if(arr[j]<mini){
                mini=arr[j];
                indx=j;
            }
        }
        swap(arr[i],arr[indx]);
    }

    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}

// Question Number 71

int main(){
    vector<int> arr={1,2,3,4,5};
    int n= arr.size();
    int key;
    cin>>key;

    int low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==key){
            cout<<"founded the element at "<<mid;
            break;
        }
        else if(arr[mid]<key) low = mid+1;
        else high = mid-1;
    }

    return 0;
}

//Question Number 72
int main(){
    vector<int> arr={3,1,5,2,4};

    int n = arr.size();
    int i =0,j=0;
    while(i<n && j<n){
        if(arr[i]<arr[j]){
            swap(arr[i],arr[j]);
            i++;
        }
        else{
            j++;
        }
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}
