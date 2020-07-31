#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class Cars{
public:
    string name;
    pair<int,int> p;
    Cars(){
        name = "";
        p = make_pair(0,0);
    }
    Cars(string name,pair<int,int> p){
        this->name = name;
        this->p = p;
    }
};
double distance(int x,int y){
    return sqrt(x*x + y*y);
}
bool compare(Cars c1,Cars c2){
    pair<int,int> p1 = c1.p;
    pair<int,int> p2 = c2.p;
    double dist1 = distance(p1.first,p1.second);
    double dist2 = distance(p2.first,p2.second);
    if(dist1 == dist2){
        return c1.name<=c2.name;
    }
    return dist1<dist2;
}
int main(){
    vector<Cars> v;
    cout<<"Enter the value of n:\n";
    int n;
    cin>>n;
    cin.get();
    cout<<"Enter the name of car and coordinates of car x and y :\n";
    for(int i=0;i<n;i++){
        string name;
        getline(cin,name);
        int x,y;
        cin>>x>>y;
        cin.get();
        v.push_back(Cars(name,make_pair(x,y)));
    }

    sort(v.begin(),v.end(),compare);
    cout<<endl;
    for(x:v){
        cout<<"Name of Car is : "<<x.name<<endl;
        cout<<"("<<x.p.first<<" , "<<x.p.second<<")"<<endl;
    }

}


