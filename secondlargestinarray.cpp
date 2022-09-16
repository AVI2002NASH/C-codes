#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[100],largest,i,n;
    cout<<"enter array length";
    cin>>n;
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
sort(arr,arr+n);
largest=arr[n-2];
cout<<largest;
}
