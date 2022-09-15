#include "mainwindow.h"
#include "testclass.h"
#include <QTest>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    TestClass *huy = new TestClass;
    QTest::qExec(new TestClass);
    MainWindow w;
    w.show();
    return a.exec();
}
