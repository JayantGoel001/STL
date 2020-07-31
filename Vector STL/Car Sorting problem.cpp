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
    double distance(){
        int x = p.first;
        int y = p.second;
        return sqrt(x*x + y*y);
    }
};

bool compare(Cars c1,Cars c2){
    double dist1 = c1.distance();
    double dist2 = c2.distance();
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


