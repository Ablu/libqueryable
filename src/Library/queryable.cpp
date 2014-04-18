#include "queryable.h"


Queryable::Queryable(const QString &source)
{
}

Queryable &Queryable::filter(FilterType type, const QString &value)
{
    return *this;
}
