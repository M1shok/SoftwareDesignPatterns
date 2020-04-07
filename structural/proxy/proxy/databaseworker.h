#ifndef DATABASEWORKER_H
#define DATABASEWORKER_H

#include <string>

class DatabaseWorker
{
public:
    DatabaseWorker() = default;
    virtual ~DatabaseWorker() = default;

    DatabaseWorker(const DatabaseWorker & worker) = default;
    DatabaseWorker(DatabaseWorker && worker) = default;

    DatabaseWorker & operator = (const DatabaseWorker & worker) = default;
    DatabaseWorker & operator = (DatabaseWorker && worker) = default;

public:
    virtual void connectToDatabase() = 0;
    virtual std::string select(uint32_t index) = 0;
    virtual void remove(uint32_t index) = 0;
};

#endif // DATABASEWORKER_H
