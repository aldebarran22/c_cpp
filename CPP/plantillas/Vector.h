
#ifndef VECTOR_H

#define VECTOR_H

#include <iostream>

template <class T> class Vector {

    T *ptr;
    int n;
    int pos;

    public:
    Vector(int=10);
    bool add(T);
    void print();
    int getNumElem(){ return this->n; }
    ~Vector();
};

// Implementacion de los metodos:
template<class T> Vector<T>::Vector(int n){
    ptr = new T[n];
    this->n = n;
    pos = 0;
}

template<class T> bool Vector<T>::add(T item){
    if (pos < n){
        ptr[pos] = item;
        pos++;
        return true;

    } else {
        return false;
    }
}

template<class T> void Vector<T>::print(){
    for (int i=0 ; i < pos ; i++){
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;
}

template<class T> Vector<T>::~Vector(){
    delete [] ptr;
    ptr = nullptr;
}
#endif