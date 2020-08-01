#include<iostream>
#include<string>
using namespace std;
class Fun{
public:
    bool operator()(string s){
        cout<<"Having fun inside Operator () Fn. and "<<s;
    }
};
int main(){
    Fun f;
    f("C++");
}
