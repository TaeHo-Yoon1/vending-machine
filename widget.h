#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pb10_clicked();
    void on_pb50_clicked();
    void on_pb100_clicked();
    void on_pb500_clicked();
    void on_pb_coffee_100_clicked();
    void on_pb_milk_150_clicked();
    void on_pb_tea_200_clicked();
    void on_pb_reset_clicked();

private:
    Ui::Widget *ui;
    unsigned int money = 0; // unsigned int로 변경하여 음수 방지

    void increaseMoney(int value);
    void updateButtonStates(); // 버튼 상태 업데이트 함수 추가
};

#endif // WIDGET_H
