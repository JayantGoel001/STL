#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> d{1,2,3,10,14};
    d.push_back(111);//O(1) for most of the time
    for(x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    d.pop_back();

    for(x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    d.insert(d.begin()+3,100);
    for(x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    d.insert(d.begin()+2,10,999);//O(N)
    for(x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    d.erase(d.begin()+3);
    for(x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    d.erase(d.begin()+2,d.begin()+8);
    for(x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;

    d.resize(8);//If size is increasing then more memory will be allocated
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;


    d.clear();//It will not reduce the memory size occupied by the array.
    for(x:d){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<d.capacity()<<endl;

    if(d.empty()){
        cout<<"This is an empty array."<<endl;
    }
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);
    d.push_back(7);
    d.push_back(8);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    //Doubling is an expensive operation.
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
    cout<<"\nCapacity : "<<v.capacity()<<endl;
    //To avoid doubling we will use reserve.
    vector<int> v2;
    v2.reserve(1000);
    cout<<"Enter the value of n:\n";
    cin>>n;
    cout<<"Enter the element :\n";
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v2.push_back(no);
    }
    cout<<"\nCapacity : "<<v2.capacity()<<endl;
}
