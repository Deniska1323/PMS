#ifndef TESTCLASS_H
#define TESTCLASS_H

#include "comp.h"
#include <QTest>

class TestClass : public QObject
{
    Q_OBJECT

public:
    TestClass();
private:

    void test_max();
    void test_min();
};

#endif // TESTCLASS_H
