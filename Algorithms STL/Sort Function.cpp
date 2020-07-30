#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
    if(a>b){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n,key;
    cout<<"Enter a value of n:"<<endl;
    cin>>n;
    cout<<"Enter the numbers"<<endl;
    int *ar = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    cout<<"Increasing Order :";
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<"\nDecreasing Order :\n";
    sort(ar,ar+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }

}

