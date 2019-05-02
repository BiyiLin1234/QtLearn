#include "MyWidget.h"
#include <QApplication>
#include <QDebug>
MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{

}

int main(int argc, char*argv[]){
    QApplication app(argc,argv);//管理所有的东西

    MyWidget w;
    w.show();

    return app.exec();
}
void MyWidget::event(QEvent *ev){
    if(ev->type()==QEvent::MouseButtonPress){
        qDebug()<<"1";
    }
    return QWidget::event(ev);
}
