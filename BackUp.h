#pragma once
#include <QObject>
#include <QThread>
#include <QTimer>

class BackUp :public QTimer {
	Q_OBJECT

public:
	BackUp();
	void writeToLog(QString NotBackUpSQL);
};