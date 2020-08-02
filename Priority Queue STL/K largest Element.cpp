#include<iostream>
#include<queue>
using namespace std;
//Worst Case Complexity if O(N*Log(k))
int main(){
    priority_queue<int,vector<int>,greater<int>> pq;
    int k;
    cout<<"Enter the value of k:\n";
    cin>>k;
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    int no;
    cout<<"Enter the element :\n";
    for(int i=0;i<n;i++){
        cin>>no;
        if(pq.size()<k){
            pq.push(no);
        }
        else{
            if(pq.top()<no){
                pq.pop();
                pq.push(no);
            }
        }
    }
    cout<<"Top "<<k<<" elements are:\n"<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    /*int no;
    while(scanf("%d",&no)!=EOF){
        cout<<no<<",";
    }*/
}
