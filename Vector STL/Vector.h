template<typename T>
class Vector{
    int cs;
    int ms;
    T *ar;
public:
    Vector(){
        cs = 0;
        ms = 1;
        ar = new T[ms];
    }
    void push_back(const T d){
        if(cs==ms){
            T *oldAr = ar;
            ar = new T[2*ms];
            ms = ms * 2;
            for(int i=0;i<cs;i++){
                ar[i] = oldAr[i];
            }
            delete [] oldAr;

        }
        ar[cs] = d;
        cs++;
    }
    void pop_back(){
        cs--;
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
    T capacity()const{
        return ms;
    }
    T at(T i){
        return ar[i];
    }

    T operator[](const T i){
        return ar[i];
    }

    T size() const{
        return cs;
    }
};
