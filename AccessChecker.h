#pragma once
#include <QObject>
class AccessChecker :public QObject {
	Q_OBJECT
public:
	AccessChecker();
	bool signIn(QString username, QString password);
	bool AccessCheck(QString databaseName, QString tableName);//一个用户一个文件存储能操作的表（？）
private:
	QString signedUserName = "";
};