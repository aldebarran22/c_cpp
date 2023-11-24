

#ifndef FIGURA_H

#define FIGURA_H

class Figura {

    int color;

    public:
    Figura(int c=0):color(c){}
    void setColor(int color){ this->color=color;}
    int getColor(){ return this->color; }
    virtual void visualizar()=0;
    ~Figura(){}
};


#endif