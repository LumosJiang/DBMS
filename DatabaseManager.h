#pragma once
#include <QFile>
#include <QList>
#include "Variant.h"

/*
[tableName].tb 记录表数据：x@y@z\n
[tableName].tdf 描述表格数据结构定义：columnName Type\n
[tableName].tic 记录表格完整性约束：fkName <[columnName@primaryKey/@Not Null]/checkDiscription>\n
[tableName].tid 记录表格索引：indexName columnName asc/desc\n
*/

class DatabaseManager :public QObject {
	Q_OBJECT

public:
	void switchUsedDatabase(QString databaseName);
	QList<QList<Variant>> getAllSelectData(QString tableName);
	QList<FormAttibute> getAllAttribute(QString tableName);

private:
	QString usedDatabase = "";
};

