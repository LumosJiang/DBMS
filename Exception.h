#pragma once
#include <QException>

class Exception :public QException {
public:
	Exception(QString exceptionInfo);
	QString getExceptionInfo();
private:
	QString exceptionInfo;
};

class SQLException :public Exception {
public:
	SQLException();
};

class VarcharException :public Exception {
public:
	VarcharException();
};

class foreignKeyException :public Exception {
public:
	foreignKeyException();
};

class columnException :public Exception {
public:
	columnException();
};