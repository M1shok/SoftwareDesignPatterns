#include "mysqldatabaseworker.h"
#include "proxydatabaseworker.h"
#include <iostream>

ProxyDatabaseWorker::ProxyDatabaseWorker()
    : m_mysqlDb(new MySqlDatabaseWorker)
{

}

ProxyDatabaseWorker::~ProxyDatabaseWorker()
{
    delete m_mysqlDb;
}

void ProxyDatabaseWorker::connectToDatabase()
{
    logMessage("connecting to database");
    m_mysqlDb->connectToDatabase();
}

void ProxyDatabaseWorker::remove(uint32_t index)
{
    logMessage("Removing");
    m_mysqlDb->remove(index);
    logMessage("Removed");
}

std::string ProxyDatabaseWorker::select(uint32_t index)
{
    logMessage("Selecting");
    return m_mysqlDb->select(index);
}

void ProxyDatabaseWorker::logMessage(const std::string &message) const
{
    std::cout << message << std::endl;
}
