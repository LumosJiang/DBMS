#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DBMSMainWindow.h"

class DBMSMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    DBMSMainWindow(QWidget *parent = nullptr);
    ~DBMSMainWindow();

private:
    Ui::DBMSMainWindowClass ui;
};
