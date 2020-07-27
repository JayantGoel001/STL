#include<iostream>
#include<string>
using namespace std;
template<typename T>
int search(T ar[],int n,T key)
{
    for(int i=0;i<n;i++)
    {
        if(ar[i]==key){
            return i;
        }
    }
    return -1;
}
int main()
{
    int ar[] = {1,2,3,4,10,12};
    int key1 =10;
    int sizeOfAr = sizeof(ar)/sizeof(ar[0]);
    cout<<search(ar,sizeOfAr,key1)<<endl;

    float br[] = {1.1,2.1,3.1,4.1,10.1,12.1};
    float key2 =10.1;
    int sizeOfBr = sizeof(br)/sizeof(br[0]);
    cout<<search(br,sizeOfBr,key2)<<endl;
}
