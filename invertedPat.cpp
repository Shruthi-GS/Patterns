#include<iostream>
using namespace std;
int main(){
    int n,count=1;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
            //cout<<count++;
        }
        //count=1;
        cout<<endl;
    }
    return 0;
}