#include <iostream>
using namespace std;
void towerHanoi(int n,char a,char c,char b){
    if(n==1){
        cout<<"disk"<<n<<"from"<<a<<"to"<<c<<endl;
        return;}

    towerHanoi(n-1,a,b,c);
   cout<<"disk"<<n<<"from"<<a<<"to"<<c<<endl;
    towerHanoi(n-1,b,c,a);
}
int main(){
    int n;
    cin>>n;
    towerHanoi(n,'A','C','B');}
