#include "unittest.h"
//#include "unittest.moc"
void UnitTest::checkFile()
{
    QString str = "Hello";
       QCOMPARE(str.toUpper(), QString("HELLO"));
}
void UnitTest::checkString()
{
    QString str = "Hello";
       QCOMPARE(str.toUpper(), QString("HELLO"));
}
void UnitTest::checkResult()
{
    QString str = "Hello";
       QCOMPARE(str.toUpper(), QString("HELLO"));
}

//QTEST_MAIN(UnitTest)

