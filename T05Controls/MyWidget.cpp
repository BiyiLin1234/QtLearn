#include "MyWidget.h"
#include <QApplication>
#include <qlabel.h>//display static magic, label
#include <QPushButton>//
#include <QLineEdit>//single line
#include <qcombobox.h>
#include <QCheckBox>
#include <QRadioButton>
#include <QTextBrowser>//readonly textedit
#include <QTextEdit>
#include <QSpinBox>//数字方式显示数值
#include <QSlider>//模拟方式
#include <QDateTimeEdit>
#include <QDateEdit>
#include <QGroupBox>
#include <QCompleter>
#include <QVBoxLayout>
#include <QHBoxLayout>
MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *lay = new QVBoxLayout(this);
    QLabel* label;
    QComboBox* combo;
    QPushButton* btn;
    QRadioButton* radio;
    QTextEdit* edit;
    QGroupBox* group;
//<font color=red><h1>label</h1>
    lay->addWidget(label = new QLabel("<a href=www.baidu.com>baidu</a>"));//label 是支持HTML格式的
    lay->addWidget(btn = new QPushButton("Button"));
    btn->setStyleSheet("QPushButton {font:bold 18px;color:blue}");//这是使用css设置风格
    lay->addWidget(radio = new QRadioButton("radio"));
    radio->setStyleSheet("QRadioButton {font:bold 14px;color:yellow;padding:5px}");
    lay->addWidget(new QCheckBox("check box"));
    lay->addWidget(combo = new QComboBox());
    combo->addItem("Select Item1");
    combo->addItem("Select Item2");
    combo->setEditable(true);
    combo->setCompleter(new QCompleter(combo->model()));
    lay->addWidget(edit = new QTextEdit);
    edit->setText("<table border=1><tr><th>head1</th><th>head2</th></tr>"//这是用html做报表，
                  "<tr><td>value1</td><td>value2</td></tr>"
                  "<tr><td>value3</td><td>value4</td></tr>"
                  "<tr><td>value4</td><td>value5</td></tr>"
                  "</table>");
    lay->addWidget(group = new QGroupBox);

    QHBoxLayout* hBoxLay;
    group->setLayout(hBoxLay = new QHBoxLayout);
   // hBoxLay->addWidget(new QL);

    lay->addWidget(new QSlider);
    lay->addWidget(new QSpinBox);
    lay->addWidget(new QDateTimeEdit);
}
int main(int argc, char* argv[]){
    QApplication app(argc, argv);
//    QUdpSocket socket;
//    socket.bind(998);
    MyWidget w;
    w.show();
    return app.exec();
}
