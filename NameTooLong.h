#ifndef NAMETOOLONG_H
#define NAMETOOLONG_H
#include <QMessageBox>
class NAMETOOLONG : public QObject
{
     Q_OBJECT
public:
    void showmessage()
    {
        QMessageBox::information(NULL , "Error" , "Name Length Exceeds 5 Letters");
    }
};

#endif // NAMETOOLONG_H
