#ifndef NAMELINEEDIT_H
#define NAMELINEEDIT_H
#include <QString>
#include <QObject>
#include <QLineEdit>

class NAMELINEEDIT : public QLineEdit
{
     Q_OBJECT
public:

    NAMELINEEDIT(QWidget* parent = nullptr) :  QLineEdit(parent)
    {
        setMaxLength(5);
   connect(this , &QLineEdit::textChanged , this , &NAMELINEEDIT::checkNameLength);

    }


signals:
    void NameError();
 private slots:
    void checkNameLength(QString Name)
    {
        if(Name.length() >= maxLength() )
        {
            emit NameError();
        }
    }


};



#endif // NAMELINEEDIT_H
