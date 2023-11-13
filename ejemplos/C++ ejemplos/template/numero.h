#ifndef NUMERO_H
#define NUMERO_H

template<class T>class Numero
{
	private:
		T n;
	
	public:
		Numero(T);
		T getN();
		void setN(T);
		virtual ~Numero();		
	protected:
};

#endif

template<class T> Numero<T>::Numero(T n){
	this->n = n;
}

template<class T> T Numero<T>::getN(){
	return this->n;
}

template<class T> void Numero<T>::setN(T n){ this->n = n; }

template<class T> Numero<T>::~Numero(){}
