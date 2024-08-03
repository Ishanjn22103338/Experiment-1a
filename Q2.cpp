#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    float sum=0;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        sum+=num;
    }
    cout<<"Average is : "<<sum/n;
}