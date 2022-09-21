#include <iostream>
#include "R4DVector3n.h"
#include "R4DMatrix3n.h"

int main(int argc, const char * argv[]) {
    R4DEngine::R4DVector3n vector1(2,3,1);
    R4DEngine::R4DVector3n vector2(1,2,0);

    //multiplication: vector3=5.0*vector2

    R4DEngine::R4DVector3n vector3=vector2*5.0;

    //multiplication: vector1*=7.0

    vector1*=7.0;

    //division: vector4=5.0/vector2
    R4DEngine::R4DVector3n vector4=vector2/5.0;

    //division: vector2/=7.0
    vector2/=7.0;

    return 0;
}