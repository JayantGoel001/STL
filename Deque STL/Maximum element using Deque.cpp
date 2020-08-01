#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    int *ar = new int[n];
    cout<<"Enter the value of array:\n";
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<"Enter the size of window:\n";
    int k;
    cin>>k;
    deque<int> d;
    for(int i=1;i<=n;i++){
        d.push_back(ar[i-1]);

        if(i>k){
            d.pop_front();
            d.push_back(ar[i-1]);
        }
        if(i>=k){
            cout<<*max_element(d.begin(),d.end())<<" ";
        }
    }
    cout<<endl;
    //Optimized Approach
    deque<int> Q(k);
    for(int i=0;i<n;i++){
        if(i>=k){
            cout<<ar[Q.front()]<<" ";
            while(!Q.empty() && Q.front()<=i-k){
                Q.pop_front();
            }
        }
        while(!Q.empty() && ar[i]>=ar[Q.back()]){
            Q.pop_back();
        }
        Q.push_back(i);
    }
    cout<<ar[Q.front()];
}
