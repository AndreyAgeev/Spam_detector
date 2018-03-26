#ifndef UNITTEST_H
#define UNITTEST_H
#include <QtTest/QTest>
#include <QtCore/QObject>
#include "src/MainWindow/mainwindow.h"

class UnitTest : public QObject
{
    Q_OBJECT
public:
    explicit UnitTest(QObject *parent = 0): QObject(parent){}
    private slots:
    void checkFile();
    void checkString();
    void checkResult();
};

#endif // UNITTEST_H
