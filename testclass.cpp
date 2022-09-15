#include "testclass.h"

TestClass::TestClass(){

}

void TestClass::test_max(){
    Comp obj;
    QCOMPARE(obj.max(1,   0), 1);
    QCOMPARE(obj.max(0,   0), 0);
    QCOMPARE(obj.max(-1,   0), 0);
    QCOMPARE(obj.max(3.4,   3.0), 3.4);
}

void TestClass::test_min()
{
    Comp obj;
    QCOMPARE(obj.min(1,   0), 0);
    QCOMPARE(obj.min(0,   0), 0);
    QCOMPARE(obj.min(-1,   0), -1);
    QCOMPARE(obj.min(3.4,   3.0), 3.0);
}
