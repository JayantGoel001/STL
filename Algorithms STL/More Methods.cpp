#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    swap(a,b);
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;
    int ar[] = {1,2,3,4,6};
    int n = sizeof(ar)/sizeof(ar[0]);
    reverse(ar,ar+n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}

