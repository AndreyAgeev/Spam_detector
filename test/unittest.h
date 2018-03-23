#ifndef UNITTEST_H
#define UNITTEST_H
#include <QtTest/QTest>
#include <QObject>
class UnitTest : public QObject
{
    Q_OBJECT
    private slots:
        void checkFile();
        void checkString();
        void checkResult();
};

#endif // UNITTEST_H
