#include <QtCore/QtCore>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

namespace DIVS {

class Database {
public:
    Database(QString& dbName, QString& hostName, QString& userName, QString& password);
    virtual ~Database(void);

    QVariantMap execQuery(QString& query);

private:
    QSqlDatabase m_database;
};
}
