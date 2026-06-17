#include<bits/stdc++.h>
using namespace std;
//Question Number 65
void ms(vector<int> &a,vector<int> &b){
    int n1 = a.size();
    int n2 = b.size();
    int k =n1;
    for(int i=0;i<n2;i++){
        a.push_back(b[i]);
        k++;
    }
}
int main(){
    vector<int> arr1={3,2,4,5,1};
    vector<int> arr2={6,7,1,4};
    ms(arr1,arr2);

for(auto it:arr1){
    cout<<it<<" ";
}
    return 0;
}

//Question number 66
int main() {
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {1,2,6,7,8};

    int n1=arr1.size();
    int n2=arr2.size();

    int i= 0, j= 0;
    vector<int> ans;

    while(i<n1 && j<n2) {
        if(arr1[i] <= arr2[j]) {
            if(ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
            i++;
        }
        else {
            if(ans.empty() || ans.back() != arr2[j])
                ans.push_back(arr2[j]);
            j++;
        }
    }

    while(i<n1) {
        if(ans.empty() || ans.back() != arr1[i])
            ans.push_back(arr1[i]);
        i++;
    }

    while(j<n2) {
        if(ans.empty() || ans.back() != arr2[j])
            ans.push_back(arr2[j]);
        j++;
    }

    for(int x: ans)
        cout<<x<< " ";

    return 0;
}

//Question Number 67
int main(){
    vector<int> arr1={1,3,3,9,8};
    vector<int> arr2={1,2,3,3,7};

    vector<int>ans;

    int n1=arr1.size(),n2=arr2.size();
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++,j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}

//Question number 68
int main(){
    vector<int> arr1={1,3,3,9,8};
    vector<int> arr2={1,2,3,3,7};

    vector<int>ans;

    int n1=arr1.size(),n2=arr2.size();
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++,j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}