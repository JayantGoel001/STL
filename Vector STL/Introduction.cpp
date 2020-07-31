#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    vector<int> b(5,10);//five integers with value 10
    vector<int> c(b.begin(),b.end());
    vector<int> d{1,2,3,4,5};

    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }

    cout<<endl;

    for(auto it = d.begin();it!=d.end();it++){
        cout<<*it<<" ";
    }

    cout<<endl;

    for(x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    vector<int> v;
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    cout<<"Enter the element :\n";
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
    }

    cout<<endl;
    for(x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<endl;
    //Understand at memory level , What is the difference in the two
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;

    cout<<endl;
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;
    cout<<d.max_size()<<endl;
}
