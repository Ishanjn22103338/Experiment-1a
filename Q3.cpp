#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    int i=0;
    int j=s.length()-1;
    while(i!=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<"Reversed string : "<<s;

}