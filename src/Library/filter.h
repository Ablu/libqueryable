#ifndef FILTER_H
#define FILTER_H

class Filter
{
public:
    enum Condition
    {
        Equals,
    };

    Filter(const Condition condition);
};

#endif // FILTER_H
