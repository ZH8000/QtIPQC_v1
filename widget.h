#ifndef WIDGET_H
#define WIDGET_H

#include <QImage>
#include <QToolButton>
#include <QWidget>

#include <iostream>

#include "CamCaptureThread.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void refresh_cam(QImage *img);
    void on_pushButton_open_cam_clicked();
    void on_pushButton_close_cam_clicked();

private:
    Ui::Widget *ui;
    QImage img;


    CamCaptureThread *thread;

};

#endif // WIDGET_H
