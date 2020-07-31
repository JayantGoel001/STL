#include<iostream>
#include<queue>
using namespace std;
template<typename T>
class Stack{
public:
    queue<T> q1;
    queue<T> q2;
    void push(T x){
        q1.push(x);
    }
    bool empty(){
        return q1.empty() && q2.empty();
    }
    void pop(){
        int lenOfq1 = q1.size();
        for(int i=0;i<lenOfq1-1;i++){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        swap(q1,q2);
    }
    T top(){
        int lenOfq1 = q1.size();
        for(int i=0;i<lenOfq1-1;i++){
            q2.push(q1.front());
            q1.pop();
        }
        T topEle = q1.front();
        q2.push(topEle);
        q1.pop();
        swap(q1,q2);
        return topEle;
    }

};
int main()
{
    Stack<int> s;
    for(int i=0;i<10;i++){
        s.push(i);
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

}


