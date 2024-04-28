#pragma once

#include <QtWidgets/QMainWindow>
#include "DBMS.h"
#include "ui_DBMSMainWindow.h"

class DBMSMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    DBMSMainWindow(QWidget *parent = nullptr);
    ~DBMSMainWindow();

private:
    DBMS dbms;
    Ui::DBMSMainWindowClass ui;
};
