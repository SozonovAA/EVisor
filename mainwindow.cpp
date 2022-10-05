#include <iostream>

#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "widgetfactory.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    std::vector<widgetf::FLableEdit> lable_edit_v_input(20);
    std::vector<widgetf::FLableEdit> lable_edit_v_output(10);

    std::size_t cnt = 0;
    for(auto & widget : dp.get_input()) {
        std::string lable_text = std::to_string(cnt * 32) + '-' +
                std::to_string(cnt * 32 + 31);
        widget.labble_->setText(QString::fromStdString(lable_text));
        ui->inputLayout->addWidget(widget.labble_,cnt,0);
        ui->inputLayout->addWidget(widget.edit_,cnt,1);
        cnt++;
    }

    cnt = 0;
    for(auto & widget :  dp.get_output()) {
        std::string lable_text = std::to_string(cnt * 32) + '-' +
                std::to_string(cnt * 32 + 31);
        widget.labble_->setText(QString::fromStdString(lable_text));
        ui->outputLayout->addWidget(widget.labble_,cnt,0);
        ui->outputLayout->addWidget(widget.edit_,cnt,1);
        cnt++;
    }
    auto & w = dp.get_output();
    w[0].edit_->setText("qweqwe");

    dp.set_protocol(std::string{});
    dp.input_data_update(
                std::vector<char>{0x46,0x46,0x46,0x46,
                                  0x45,0x45,0x45,0x45});
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

}

