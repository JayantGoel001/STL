#include<iostream>
#include<list>
using namespace std;
template<class ForwardIterator,class T>
// ForwardIterator ->Type of Container
// T-> Type of Data Type.
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key){
    while(start!=end){
        if(*start==key){
            return start;
        }
        else{
            start++;
        }
    }
    return end;
}
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(5);
    l.push_back(3);
    l.push_back(10);
    l.push_back(15);
    int key = 10;
    auto it = search(l.begin(),l.end(),key);
    cout<<*it<<endl;
}
