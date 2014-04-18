#include "tdd.h"

#include <QTest>

int main(int argc, char *argv[])
{
    TDD tddTest;
    QTest::qExec(&tddTest, argc, argv);
}
