#include<bits/stdc++.h>
using namespace std;
// Question Number 77
/*int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int ar[3][3]={1,2,3,4,5,6,7,8,9};

    int a[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int sum=0;
            for(int k=0;k<3;k++){
                sum+=arr[i][k]*ar[k][j];
            }
            a[i][j]=sum;
        }

    }

    for(auto &i : a){
        for(auto j : i){
            cout<<j<<" ";
        }
    }
    return 0;
}*/

//Question Number 78
/*int main(){
    vector<vector<int>> arr={{1,2,3},{2,4,5},{3,5,6}};
    bool flag = true;
    int n = arr.size();
    int m = arr[0].size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<m;j++){
            if(arr[i][j]!=arr[j][i]){
                flag=false;
                break;
            }
        }
        if(!flag) break;
    }
    if(flag) cout<<"Matrix is symmetric";
    else cout<<"Matrix is not symmetric";

    return 0;
}*/

//Question Number 79
/*int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    int n = arr.size();
    int m = arr[0].size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
        cout<< sum<<" ";
    }
    return 0;
}*/

//Question Number 80
int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};

    int n = arr.size();
    int m = arr[0].size();

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum +=arr[j][i];
        }
        cout<<sum<<" ";
    }
    return 0;
}