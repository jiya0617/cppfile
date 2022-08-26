#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;
    int j;
    for( i=0;i<n;i++){
        cin>>arr[i];
    }

    for( i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            break;
        }
    }
    if(i<0){
        while(arr[i]<arr[n-1]){
            swap(arr[i],arr[n-1]);
            i++;
            n--;
        }
    }
    else{
        for( j=n-1;j>i;j--){
            if(arr[j]>arr[i]){
                break;
            }
        }
        swap(arr[j],arr[i]);
        while(arr[i+1]<arr[n-1]){
            swap(arr[i],arr[n-1]);
            i++;
            n--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
