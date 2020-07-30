#include<iostream>
using namespace std;

bool compare(int a,int b){
    if(a>b){
        return true;
    }
    else{
        return false;
    }
}


void bubble_sort(int ar[],int n,bool (&cmp)(int a,int b)){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(cmp(ar[j],ar[j+1])){
                swap(ar[j],ar[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter a value of n:"<<endl;
    cin>>n;
    cout<<"Enter the numbers"<<endl;
    int *ar = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    bubble_sort(ar,n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}
