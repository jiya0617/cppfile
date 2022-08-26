#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int powfun(int n,int x){
    if(x<0){
        return abs(x);
    }
if(x==0){
    return 1;
    }
return powfun(n,x-1)*n;

}
int main(){
int n;
cin>>n;
int x;
cin>>x;
int nas=powfun(n,x);
cout<<nas;

}
