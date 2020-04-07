#ifndef PROXYDATABASEWORKER_H
#define PROXYDATABASEWORKER_H

#include "databaseworker.h"

class MySqlDatabaseWorker;

class ProxyDatabaseWorker : public DatabaseWorker
{
public:
    ProxyDatabaseWorker();
    ~ProxyDatabaseWorker() override;

    ProxyDatabaseWorker(const ProxyDatabaseWorker & worker) = default;
    ProxyDatabaseWorker(ProxyDatabaseWorker && worker) = default;

    ProxyDatabaseWorker & operator = (const ProxyDatabaseWorker & worker) = default;
    ProxyDatabaseWorker & operator = (ProxyDatabaseWorker && worker) = default;

public:
    void connectToDatabase() override;
    void remove(uint32_t index) override;
    std::string select(uint32_t index) override;

private:
    void logMessage(const std::string & message) const;

private:
    MySqlDatabaseWorker * m_mysqlDb;
};

#endif // PROXYDATABASEWORKER_H
