#ifndef MYSQLDATABASEWORKER_H
#define MYSQLDATABASEWORKER_H

#include "databaseworker.h"



class MySqlDatabaseWorker : public DatabaseWorker
{
public:
    MySqlDatabaseWorker() = default;
    ~MySqlDatabaseWorker() override = default;

    MySqlDatabaseWorker(const MySqlDatabaseWorker & worker) = default;
    MySqlDatabaseWorker(MySqlDatabaseWorker && worker) = default;

    MySqlDatabaseWorker & operator = (const MySqlDatabaseWorker & worker) = default;
    MySqlDatabaseWorker & operator = (MySqlDatabaseWorker && worker) = default;

public:
    void connectToDatabase() override;
    void remove(uint32_t index) override;
    std::string select(uint32_t index) override;
};

#endif // MYSQLDATABASEWORKER_H
