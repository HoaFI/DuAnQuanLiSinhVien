#ifndef STUDENT_H
#define STUDENT_H

#include <QListWidgetItem>
#include <QString>

class Student : public QListWidgetItem //Student thua ke lai QlistWidgetItem
{
public:
    Student();
    Student(QString name);
    Student(QString name, QString dob, QString className);
    ~ Student() { };

    void setName(QString name);
    void setDOB(QString dob);
    void setClass(QString className);

    QString getName() const;
    QString getDOB() const;
    QString getClass() const;

private:
    QString m_DOB;
    QString m_Class;
};

inline void Student::setName(QString name) {
    QListWidgetItem::setText(name);
}

inline void Student::setDOB(QString dob) {
    m_DOB = dob;
}

inline void Student::setClass(QString className) {
    m_Class = className;
}

inline QString Student::getName() const {
    return QListWidgetItem::text();
}

inline QString Student::getDOB() const {
    return  m_DOB;
}

inline QString Student::getClass() const {
    return m_Class;
}
#endif // STUDENT_H
