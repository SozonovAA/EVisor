#include "widgetfactory.h"


widgetf::FLableEdit::FLableEdit(QWidget *parent) :
    QWidget(parent),
    edit_(new QLineEdit()),
    labble_(new QLabel ())
{
    QSize max_size(250, 20);

//    edit_->setVisible(true);
//    labble_->setVisible(true);
    edit_->setMaximumSize(max_size);
    labble_->setMaximumSize(max_size);
}
