#include<iostream>
#include<list>
using namespace std;
int main(){
    list<pair<int,int>> *l;
    int n;
    cout<<"Enter the number of nodes:";
    cin>>n;
    l = new list<pair<int,int>>[n];
    int e;
    cout<<"Enter the number of edges:\n";
    cin>>e;
    cout<<"Enter the x,y and weight:\n";
    for(int i=0;i<e;i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        l[x].push_back(make_pair(y,wt));
        l[y].push_back(make_pair(x,wt));
    }

    for(int i=0;i<n;i++){
        cout<<"Linked List "<<i<<"--->";
        for(x:l[i]){
            cout<<"("<<x.first<<","<<x.second<<")";
        }
        cout<<endl;
    }
}
