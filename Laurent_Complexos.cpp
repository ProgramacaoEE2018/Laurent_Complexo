#include <iostream>
#include <math.h>
using namespace std;

class Complexo{
public:

    float real;
    float im;

public:

    Complexo(float a, float b){
        real = a;
        im = b;
    };


    float Modulo(){
        return sqrt(real*real + im*im);
    };

    Complexo Conjugado(){
        return Complexo(real, -im);
    };

    Complexo operator -(Complexo z){
        Complexo z2(real,im);
        z2.real = this->real - z.real;
        z2.im = this->im - z.im;
        return z2;
    }


    Complexo operator+(Complexo z){
        Complexo z2(real,im);
        z2.real = this ->real + z.real;
        z2.im = this ->im + z.im;
        return z2;
    }

     Complexo operator*(Complexo z ){
        Complexo z4(real, im);
        z4.real = (this->real * z.real) - (this->im * z.im);
        z4.im = (this->real * z.im) + (this->im * z.real);
        return z4;
    }

    Complexo operator/(Complexo z){
        return Complexo((this->real * z.real  +  this->im * z.im)/(z.real*z.real + z.im*z.im) , (-this->real * z.im  +  this->im * z.real)/(z.real*z.real + z.im*z.im
));
    }

};
