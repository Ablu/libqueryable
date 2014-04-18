#ifndef QUERYABLE_H
#define QUERYABLE_H

#include "libqueryable_global.h"

#include "filter.h"

class LIBQUERYABLESHARED_EXPORT Queryable
{
public:
    enum FilterType {
        Equals,
    };

    Queryable(const QString &source);

    Queryable &filter(FilterType type, const QString &value);
};

#endif // QUERYABLE_H
