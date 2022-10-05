#ifndef WIDGETFACTORY_H
#define WIDGETFACTORY_H

#include <QObject>
#include <QWidget>

#include <QGridLayout>
#include <QComboBox>
#include <QCheckBox>
#include <QLineEdit>
#include <QLabel>

namespace widgetf {

class FLableEdit : public QWidget
{
        Q_OBJECT
public:
    QLineEdit * edit_;
    QLabel * labble_;

    explicit FLableEdit(QWidget *parent=0);

};

} // namespace widgetf

#endif // WIDGETFACTORY_H
