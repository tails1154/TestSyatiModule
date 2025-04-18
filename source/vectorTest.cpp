#include "JSystem/JGeometry.h"

class VectorTest {
public:
    void someFunction();

    JGeometry::TVec3<char> char_Vec;
    JGeometry::TVec3<short> short_Vec;
    JGeometry::TVec3<float> float_Vec;
};

void VectorTest::someFunction() {
    char_Vec.negate();
    short_Vec.negate();
    float_Vec.negate();

    char_Vec = -JGeometry::TVec3<char>(5, 5, 5);
    char_Vec += char_Vec + JGeometry::TVec3<char>(5, 5, 5);
    char_Vec -= char_Vec - JGeometry::TVec3<char>(5,5,5);
    char_Vec *= char_Vec * 5;
    char_Vec /= char_Vec / 2;
}