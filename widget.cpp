#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    updateButtonStates();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::updateButtonStates() {

    ui->pb_coffee_100->setEnabled(money >= 100);
    ui->pb_milk_150->setEnabled(money >= 150);
    ui->pb_tea_200->setEnabled(money >= 200);
    ui->pb_reset->setEnabled(money > 0);

}

void Widget::increaseMoney(int value) {

    if (value < 0 && static_cast<unsigned int>(-value) > money) {
        return;
    }

    money += value;
    ui->lcdNumber->display(static_cast<int>(money));

    updateButtonStates();
}

void Widget::on_pb10_clicked()
{
    increaseMoney(10);
}

void Widget::on_pb50_clicked()
{
    increaseMoney(50);
}

void Widget::on_pb100_clicked()
{
    increaseMoney(100);
}

void Widget::on_pb500_clicked()
{
    increaseMoney(500);
}

void Widget::on_pb_coffee_100_clicked()
{
    increaseMoney(-100);
}

void Widget::on_pb_milk_150_clicked()
{
    increaseMoney(-150);
}

void Widget::on_pb_tea_200_clicked()
{
    increaseMoney(-200);
}

void Widget::on_pb_reset_clicked()
{
    if (money == 0) return;

    struct Change {
        int value;
        int count;
    };

    Change changes[] = {
        {500, 0},
        {100, 0},
        {50, 0},
        {10, 0}
    };

    unsigned int remaining = money;

    for (auto& change : changes) {
        change.count = remaining / change.value;
        remaining %= change.value;
    }

    QString message = QString("500원: %1개\n100원: %2개\n50원: %3개\n10원: %4개")
                          .arg(changes[0].count)
                          .arg(changes[1].count)
                          .arg(changes[2].count)
                          .arg(changes[3].count);

    QMessageBox::information(this, "거스름돈", message);

    money = 0;
    ui->lcdNumber->display(0);

    updateButtonStates();
}
