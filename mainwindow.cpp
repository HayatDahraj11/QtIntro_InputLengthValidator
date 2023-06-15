#include "mainwindow.h"
#include "NameLineEdit.h"
#include "NameTooLong.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
QWidget * central = new QWidget (this);
QVBoxLayout * layout  = new QVBoxLayout(central);
NAMELINEEDIT* LineEdit = new NAMELINEEDIT(central);

layout->addWidget(LineEdit);
NAMETOOLONG * prompt = new NAMETOOLONG();
connect(LineEdit , &NAMELINEEDIT::NameError , prompt , &NAMETOOLONG::showmessage );

}

MainWindow::~MainWindow()
{

}

