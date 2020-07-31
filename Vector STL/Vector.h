class Vector{
    int cs;
    int ms;
    int *ar;
public:
    Vector(){
        cs = 0;
        ms = 1;
        ar = new int[ms];
    }
    void push_back(const int d){
        if(cs==ms){
            int *oldAr = ar;
            ar = new int[2*ms];
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
    int front() const{
        return ar[0];
    }
    int back()const{
        return ar[cs-1];
    }
    bool empty()const{
        return cs==0;
    }
    int capacity()const{
        return ms;
    }
    int at(int i){
        return ar[i];
    }

    int operator[](const int i){
        return ar[i];
    }

    int size() const{
        return cs;
    }
};
