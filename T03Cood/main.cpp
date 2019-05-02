#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
int main(int argc, char* argv[]){
    QApplication app(argc, argv);
    QWidget w;
    QPushButton btn("btn", &w);
    QLineEdit edit(&w);
    QHBoxLayout layout;    layout.addStretch(1);//加弹簧，这个比喻厉害了。。左一个右一个就跑中间去（比重一样的话）
    //如果在layout加控件的时候也加上比重，按比重分割空间
    layout.addWidget(&btn,4);
    layout.addSpacing(23);
    layout.addWidget(&edit);
layout.addStretch(2);
//    btn.setGeometry(30,30,100,30);
    w.show();
    w.setLayout(&layout);
    return app.exec();
}
