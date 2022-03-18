#include<iostream>
#include "Rectangle.h"
//#include "Shape.h"
using namespace std;


   int main(){


      //Shape * shape= new Shape();
           Shape * shape_B = new Rectangle(10,20);
           cout<<"Area of Rectangle: "<<shape_B->CalculateArea()<<endl;
           cout<<"circumference of Rectangle "<<shape_B->CalculateCircumference()<<endl; 

      return 0;

   
   
   }
