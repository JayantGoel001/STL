#include <iostream>

template<typename T>
class Vector{
    unsigned int cs; // SIZE
    unsigned int ms; // CAPACITY
    T *ar;
public:
    Vector(): cs(0), ms(1), ar(new T[1]){}
    Vector (std::initializer_list<T> list): cs(0)
                                          , ms(list.size() * 2)
                                          , ar(static_cast<T*>(operator new(sizeof(T) * list.size() * 2))){
        for(auto& elem: list){
            push_back(elem);
        }
    }
    ~Vector(){
        clear();
    }
    void clear(){
        for (int i = 0; i < cs; ++i)
            ar[i].~T();
        delete (ar);
        ar = nullptr;
        cs = 0;
        ms = 0;
    }
    void push_back(const T d){
        if (cs < ms) new (ar + cs) T(d);
        else{
            reserve(ms * 2);
            new (ar + cs) T(d);
        }
        ++cs;
    }
    void reserve(unsigned int n){
        if (n > ms){
            ms = n;
            T* tmp = static_cast<T*>(::operator new(sizeof(T) * ms));
            for (int i = 0; i < cs; ++i){
                new (tmp + i) T(ar[i]);
            }
            operator delete(ar);
            ar = tmp;
        }
    }
    void pop_back(){
        --cs;
        ar[cs].~T();
    }
    T front() const{
        return ar[0];
    }
    T back()const{
        return ar[cs-1];
    }
    bool empty()const{
        return cs==0;
    }
    unsigned int capacity()const{
        return ms;
    }
    T at(unsigned int i){
        if (i > cs) throw std::runtime_error("Index out of range");
        return ar[i];
    }

    T operator[](const unsigned int i){
        return ar[i];
    }

    unsigned int size() const{
        return cs;
    }
};
