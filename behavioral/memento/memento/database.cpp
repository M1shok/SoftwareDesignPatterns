#include "database.h"


Database::Snapshot Database::createSnapshot() const
{
    return Snapshot(*this);
}

bool Database::restore(const Database::Snapshot &snapshot)
{
    m_tables = snapshot.databaseState()->tables();
    return true;
}

bool Database::createTable(const std::string &tableName)
{
    if (m_tables.find(tableName) == m_tables.end())
    {
        m_tables.insert(tableName);
        return true;
    }
    return false;
}

bool Database::dropTable(const std::string &tableName)
{
    auto it = m_tables.find(tableName);
    if (it != m_tables.end())
    {
        m_tables.erase(it);
        return true;
    }
    return false;
}

std::set<std::string> Database::tables() const
{
    return m_tables;
}



Database::Snapshot::Snapshot(const Database &db)
    : m_databaseState(new Database(db))
{

}

Database::Snapshot::~Snapshot()
{
    delete m_databaseState;
}

const Database *Database::Snapshot::databaseState() const
{
    return m_databaseState;
}
