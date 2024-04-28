#pragma once
#include <QObject>
#include <QList>
#include <QDate>
#include "Exception.h"

enum DataType
{
	INT, SMALLINT, VARCHAR, DOUBLE, DATE
};

class Varchar :public QString {
	Q_OBJECT

public:
	Varchar(QString var, int maxSize);
private:
	int maxSize;
};

class Variant :public QObject
{
	Q_OBJECT

public:
	Variant(int var);
	Variant(short int var);
	Variant(Varchar var);
	Variant(double var);
	Variant(QString date);
	int toInt();
	short int toSmallInt();
	QString toVarchar();
	double toDouble();
	QDate toDate();
private:
	int varInt;
	short int varSmallInt;
	Varchar varVarchar;
	double varDouble;
	QDate varDate;
	DataType type;
};

class FormAttibute :public QObject {
public:
	FormAttibute(QString attributeName, DataType type);
	QString AttributeName();
	DataType Type();
private:
	QString attributeName;
	DataType type;
};