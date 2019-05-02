/*
 * T01HelloWorld.pro 是一个Qt的工程文件 ，类似于sln文件
T01HelloWorld.pro.user 是编译的用户的特定的环境的文件，例如代码从Windows拷贝到
Linux上，这个文件是没有用的。
*/

/*应用程序抽象类*/
#include <QApplication>
/*窗口类*/
#include <QWidget>
#include <QPushButton>

//在空文件中的时候，这两个目录没有，
//为什么，因为没有在.pro文件中加上库
//添加上QT += widgets gui，再保存一下就可以了
//（ctrl + /）是注释的快捷键。
int main(int argc, char* argv[]){
    //构造了一个Qt的应用程序
    QApplication app(argc, argv);
    //构造一个窗口
    QWidget W;

    //设置窗口名称
    W.setWindowTitle("Hello World");
    //显示窗口
    W.show();

    //其实按钮也是一个窗口，QPushButton继承于QAbstractButton继承于QWidget
    //窗口对象的父子关系影响显示的位置，比如这里的QPushButton是W的子窗口，所以会显示在窗口W之中，否则将会是两个窗口。
    //没有父窗口的窗口，称为主窗口
    QPushButton btn;
    btn.setText("button");
    btn.setParent(&W);//这是设置父子关系，这是对象的父子关系而不是父类子类。
    //在后面的话需要btn单独show一下
    btn.show();

    //这个信号/槽是Qt对C++的拓展。
    //std::bind std::function有点像。
    QObject::connect(&btn,SIGNAL(clicked()),&W,SLOT(close()));

    //在exec中有一个消息循环（死循环），所以这个窗口不会消息，可以响应拖动（这是Qt已经帮忙实现的）消息等
    return app.exec();
}
