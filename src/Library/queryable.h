/*
 * A library for abstracting querying data from various sources
 * Copyright (C) 2014  Erik Schilling
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

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
