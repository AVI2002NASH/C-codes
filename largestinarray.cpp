#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[100],largest,i,n;
    cout<<"enter array length";
    cin>>n;
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    largest=arr[0];
for(i=1;i<n;i++){
    if(arr[i]>largest)
    largest=arr[i];
}
cout<<largest;
}
