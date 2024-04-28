#pragma once
#include <QObject>
#include <QList>
#include <QDate>
#include "Variant.h"

enum OrderType {
	ASC,DESC
};

class SQLExecuteResult :public QObject 
{
	Q_OBJECT

public:
	SQLExecuteResult(bool isSuccess, QList<QList<Variant>> result);
	bool isSuccess();
	QList<QList<Variant>>& execResult();
private:
	bool isSuccess;
	QList<QList<Variant>> result;
};

class DBMS :public QObject 
{
	Q_OBJECT

public:
	DBMS();
	SQLExecuteResult& execSQL(QString SQLString);
private:
	QList<QList<Variant>>& selectSQL(QString tableName, QStringList selectColumn, QStringList whereExpressions, bool isGroupBy, OrderType order = ASC);
	bool updateSQL(QString tableName, QString updateColumn, QStringList whereExpressions);
	bool deleteSQL(QString tableName, QString deleteColumn, QStringList whereExpressions);
	bool createSQL(QString tableName, QStringList columnList);
	bool insertSQL(QString tableName, QStringList columns, QStringList columnValueList);
	QString usedDatabase;
};