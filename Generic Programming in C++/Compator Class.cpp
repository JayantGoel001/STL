#include<iostream>
#include<list>
#include<vector>
#include<string>
using namespace std;
//Templates + Iterators + Comparators
template<class ForwardIterator,class T,class Compare>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key,Compare cmp){
    while(start!=end){
        if(cmp(*start,key)){
            return start;
        }
        else{
            start++;
        }
    }
    return end;
}
class Book{
public:
    string name;
    int price;
    Book(){

    }
    Book(string name,int price){
        this->name = name;
        this->price = price;
    }
};
class BookCompare{
public:
    bool operator()(Book a,Book b){
        if(a.name == b.name)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    Book b1("C++",100);
    Book b2("Java",150);
    Book b3("C",80);
    Book b4("Python",200);
    Book b5(b1);

    list<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);
    l.push_back(b4);
    l.push_back(b5);

    Book key("C++",100);
    BookCompare cmp;
    auto it = search(l.begin(),l.end(),key,cmp);
    //list<Book>::iterator it= ForwardIterator(l.begin(),l.end(),key,cmp);
    cout<<it->name<<","<<it->price<<endl;



    vector<Book> v;
    v.push_back(b1);
    v.push_back(b2);
    v.push_back(b3);
    v.push_back(b4);
    v.push_back(b5);

    Book key2("C++",100);
    BookCompare cmp2;
    auto it2 = search(v.begin(),v.end(),key2,cmp2);
    //list<Book>::iterator it= ForwardIterator(l.begin(),l.end(),key,cmp);
    cout<<it2->name<<","<<it2->price<<endl;
}
