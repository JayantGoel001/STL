#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
double distance(int x,int y){
    return sqrt(x*x + y*y);
}
bool compare(pair<int,int> p1,pair<int,int> p2){
    double dist1 = distance(p1.first,p1.second);
    double dist2 = distance(p2.first,p2.second);
    if(dist1 == dist2){
        return p1.first < p2.first;
    }
    return dist1<dist2;
}
int main(){
    vector<pair<int,int>> v;
    cout<<"Enter the value of n:\n";
    int n;
    cin>>n;

    cout<<"Enter the value of x and y :\n";
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    sort(v.begin(),v.end(),compare);

    for(x:v){
        cout<<"("<<x.first<<" , "<<x.second<<")"<<endl;
    }

}

