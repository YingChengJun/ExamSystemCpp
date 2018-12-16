#ifndef _LOGINDIALOG_H
#define _LOGINDIALOG_H

#include <QList>
#include <QString>
#include <QDialog>
#include <QSqlQuery>
#include <QWidget>
#include <QRadioButton>
#include <QAbstractButton>
#include <QtWidgets/QApplication>
#include <QMessageBox>
#include <QDebug>
#include "MainWindow.h"
#include "ui_LoginDialog.h"

class LoginDialog : public QDialog
{
	Q_OBJECT

public:
	LoginDialog(QWidget *parent = Q_NULLPTR);
	~LoginDialog();

private slots:
	/**
	  * @author:Ӧ�о�
	  * @brief:�û������¼��ť��ʵ�ֵĹ���
	  * @date:2018/12/12
	  * @version:1.0
	  */
	void login();

private:
	Ui::LoginDialog ui;
	MainWindow admin;
};


#endif