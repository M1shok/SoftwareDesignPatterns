#ifndef ITERABLECOLLECTION_H
#define ITERABLECOLLECTION_H

class Iterator;

class IterableCollection
{
public:
    IterableCollection() = default;
    virtual ~IterableCollection() = default;

    IterableCollection(const IterableCollection & ic) = default;
    IterableCollection(IterableCollection && ic) = default;

    IterableCollection & operator = (const IterableCollection & ic) = default;
    IterableCollection & operator = (IterableCollection && ic) = default;

public:
    virtual Iterator * begin() = 0;
    virtual Iterator * end() = 0;
};

#endif // ITERABLECOLLECTION_H
