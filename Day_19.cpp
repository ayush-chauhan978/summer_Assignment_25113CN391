#include<bits/stdc++.h>
using namespace std;

// Question Number 73
/*int main(){
    vector<vector<int>> arr1 = {{1,2,3,4,5,6,7,8,9}};
    vector<vector<int>> arr2 = {{10,11,12,13,14,15,16,17,18}};
    vector<vector<int>> arr3;

    int n = arr1.size();
    int m = arr1[0].size();
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x=arr1[i][j] + arr2[i][j];
            arr3.push_back({x});
        }
    }
    for(auto i:arr3){
        for(auto j:i){
            cout<<j<<" ";
        }
    }
    return 0;
}*/

//Question Number 74
/*int main(){
    vector<vector<int>> arr1={{1,2,3,4,5,6,7,8,9}};
    vector<vector<int>> arr2={{10,11,12,13,14,15,16,17,18}};
    vector<vector<int>> arr3;

    int n= arr1.size();
    int m = arr1[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr3.push_back({arr2[i][j] - arr1[i][j]});
        }

    }

    return 0;
}*/

//Question Number 75
/*int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    int n= arr.size();
    int m = arr[0].size();

    for(int i=0;i<n-1;i++){
        for(int j=1;j<m;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(auto i:arr){
        for(auto j:i){
            cout<<j<<" ";
        }
    }

    return 0;
}*/

//Question Number 76
int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    int n= arr.size();
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i][i];

        if(i!=n-1-i){
            sum+=arr[i][n-1-i];
        }
    }
    cout<<sum;

    return 0;
}