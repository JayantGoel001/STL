#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    int n=10;
    for(int i=0;i<n;i++){
        if(i%2==0){
            pq.push(2*i*i - 5*i + 3*(i-2));
        }
        else{
            pq.push(2*i+5+3*i*i - 2*(3*i-7));
        }
    }
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }

    cout<<endl;

    priority_queue<int,vector<int>,greater<int>> minHeap;//minHeap priority queue.
    n=10;
    for(int i=0;i<n;i++){
        if(i%2==0){
            minHeap.push(2*i*i - 5*i + 3*(i-2));
        }
        else{
            minHeap.push(2*i+5+3*i*i - 2*(3*i-7));
        }
    }
    while(!minHeap.empty()){
        cout<<minHeap.top()<<endl;
        minHeap.pop();
    }
}
