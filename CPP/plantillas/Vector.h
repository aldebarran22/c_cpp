
#ifndef VECTOR_H

#define VECTOR_H

#include <iostream>

template <class T> class Vector {

    T *ptr;
    int n;
    int pos;

    public:
    Vector(int=10);
    Vector(const Vector<T> &);
    Vector<T> & operator=(const Vector<T> &);
    //Vector(const Vector<T> &)=delete; Borra el constructor copia y no se puede utilizar
    bool add(T);
    void print();
    int getNumElem(){ return this->n; }
    const T * getPtr(){ return this->ptr; }
    ~Vector();
};

// Implementacion de los metodos:
template<class T> Vector<T>::Vector(int n){
    ptr = new T[n];
    this->n = n;
    pos = 0;
}

template<class T> Vector<T>::Vector(const Vector<T> &o){
    this->n = o.n;
    this->pos = o.pos;
    this->ptr = new T[o.n];
    for (int i = 0 ; i < o.pos ; i++){
        this->ptr[i] = o.ptr[i];
    }
}

template<class T> Vector<T> & Vector<T>::operator=(const Vector<T> &o){

    //std::cout << "this->ptr " << this->getPtr() << std::endl;
    //std::cout << "n: " << this->n << std::endl;
    //this->print();

    // 1. liberar memoria en this
    delete []this->ptr;

    // 2 Copiar contadores
    this->n = o.n;
    this->pos = o.pos;

    // 3. Reservar memoria
    this->ptr = new T[o.n];

    // 4. copiar los elementos del array
    for (int i = 0 ; i < o.pos ; i++){
        this->ptr[i] = o.ptr[i];
    }

    // 5. Devolver una referencia a this:
    return *this;
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