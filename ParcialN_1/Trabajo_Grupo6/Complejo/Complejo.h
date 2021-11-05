/***********************************************************************
 * Module:  Complejo.h
 * Author:  WISTAR
 * Modified: viernes, 5 de noviembre de 2021 10:07:23
 * Purpose: Declaration of the class Complejo
 ***********************************************************************/

#if !defined(__Complejo2_Complejo_h)
#define __Complejo2_Complejo_h
#pragma once
#include <iostream>
using namespace std;
template <class T>
class Complejo;
template <typename T>
ostream& operator <<(ostream &o, const Complejo<T> &A);

template <class T>
class Complejo
{
public:
   T getReal(void);
   void setReal(T newReal);
   T getImg(void);
   void setImg(T newImg);
   Complejo(T real=0, T img=0);
   ~Complejo();
   Complejo<T>& operator+(const Complejo<T> &A);
   Complejo<T>& operator-(const Complejo<T> &A);

protected:
private:
   T real;
   T img;


};

#endif
