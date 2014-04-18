#include "tdd.h"

#include <queryable.h>

void TDD::structureTest()
{
    Queryable("Test")
            .filter(Queryable::Equals, "value")
            .filter(Queryable::Equals, "otherValue");
}
