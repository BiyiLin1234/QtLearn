#include <QApplication>
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QCompleter>
int main(int argc, char* argv[]){
    QApplication app(argc, argv);
    QWidget W;
    W.show();
    QLineEdit edit;
    edit.setParent(&W);
//    edit.setEchoMode(QLineEdit::Password);
//    edit.setPlaceholderText("输入密码");

    QCompleter completer(QStringList()<<"abb"<<"233"<<"998");
    completer.setFilterMode(Qt::MatchContains);
    edit.setCompleter(&completer);
    edit.show();
    return app.exec();
}
