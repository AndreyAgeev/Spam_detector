#include <QString>
#include <QtTest>
#include <QCoreApplication>
#include "../../../src/Method/method.h"
#include "../../../src/Table/table.h"
#include "../../../src/Table/table.cpp"
#include "../../../src/Method/method.cpp"

class TestSpamDetectorTest : public QObject
{
    Q_OBJECT

public:
    TestSpamDetectorTest();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase_data();
    void testCase();
    void checkGetResult();
    void checkTable();
private:
    Table t;
    Method m;
    const int count = 100;
};

TestSpamDetectorTest::TestSpamDetectorTest()
{

}

void TestSpamDetectorTest::initTestCase()
{
    QStringList checkSpam("hi"), checkHam("nothi");
    for(auto i = 0; i < count; i++)
    {
         t.insertIntoSPAMTable(checkSpam);
         t.insertIntoHAMTable(checkHam);
    }
    m.setTable(t);
}

void TestSpamDetectorTest::cleanupTestCase()
{
}
void TestSpamDetectorTest::checkGetResult()
{
    m.setString("hi");
    const double resHi = m.getResult();
    QVERIFY(resHi >= double(0));
    m.setString("nothi");
    const double resNo = m.getResult();
    QVERIFY(resNo <= double(1));
}

void TestSpamDetectorTest::checkTable()
{
    QCOMPARE(t.getKey("hi", t.spamTable), (double)count);
    QCOMPARE(t.getKey("nothi", t.hamTable), (double)count);
}

void TestSpamDetectorTest::testCase_data()
{
    QTest::addColumn<QString>("data");
    QTest::newRow("0") << QString();
}

void TestSpamDetectorTest::testCase()
{
    QFETCH(QString, data);
    QVERIFY2(true, "Failure");
}

QTEST_MAIN(TestSpamDetectorTest)

#include "tst_testspamdetectortest.moc"
