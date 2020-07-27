#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int ar[] = {10,20,40,40,40,60,80,100};
    int n = sizeof(ar)/sizeof(ar[0]);

    int key = 40;
    bool present = binary_search(ar,ar+n,key);
    if(!present){
        cout<<"Element Not Found"<<endl;
    }
    else{
        cout<<"Element Found"<<endl;
    }

    auto lb = lower_bound(ar,ar+n,key);//key=<
    cout<<lb-ar<<endl;



    auto ub = upper_bound(ar,ar+n,key);//key<
    cout<<ub-ar<<endl;

    cout<<"Frequency Of "<<key<<" is : "<<ub-lb;
}
