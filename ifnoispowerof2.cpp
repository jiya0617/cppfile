#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int power(int n){
    for(int i=0;i<=30;i++){
            int a=pow(2,i);
            if(a==n){
                return true;
            }
        }
        return false;
}
int main(){
    int n;
    cin>>n;
    int ans=power(n);
    cout<<ans;
    }
