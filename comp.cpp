#include "comp.h"

/*!
	   \class Comp
*/
Comp::Comp(){

}
  /*!The function returns the minimum value of the two received.*/
int Comp::min(int x, int y){
    if(x < y){
        return x;
    }
    return y;
}

  
   /*!The function returns the maximum value of the two received.*/
int Comp::max(int x, int y){
    if(x > y){
        return x;
    }
    return y;
}

  /*!The function returns the minimum value of the two received.*/
 double Comp::min(double x, double y){
    if(x < y){
        return x;
    }
    return y;
}

  /*!The function returns the minimum value of the two received.*/
double Comp::max(double x, double y){
    if(x > y){
        return x;
    }
    return y;
}

