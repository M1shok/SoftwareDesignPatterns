#ifndef DATABASE_H
#define DATABASE_H

#include <set>
#include <string>

class Database
{
public:
    class Snapshot
    {
    public:
        Snapshot(const Database & db);
        ~Snapshot();

        const Database * databaseState() const;

    private:
        const Database * const m_databaseState;
    };

public:
    Database() = default;
    virtual ~Database() = default;

    Database(const Database & db) = default;
    Database(Database && db) = default;

    Database & operator = (const Database & db) = default;
    Database & operator = (Database && db) = default;

public:
    Snapshot createSnapshot() const;
    bool restore(const Snapshot & snapshot);

public:
    bool createTable(const std::string & tableName);
    bool dropTable(const std::string & tableName);

    std::set<std::string> tables() const;

private:
    std::set<std::string> m_tables;
};

#endif // DATABASE_H
