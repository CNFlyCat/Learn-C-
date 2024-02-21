#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 实现回车执行命令功能
    // 连接信号与槽 谁发出信号 发出什么信号 谁处理信号 怎么处理
    // 填 this 代表的就是 Widget 这个类来处理 因为on_applyButton_clicked()可以实现需求功能,
    // 所以执行on_applyButton_clicked()函数
    // 以下是通过 SIGNAL() 与 SLOT() 的宏来实现
    connect(ui->cmdLineEdit,SIGNAL(returnPressed()),this,SLOT(on_applyButton_clicked()));

    // 示例：使用指针的写法
    connect(ui->cancelButton,&QPushButton::clicked,this,&Widget::on_cancelButton_clicked);

    // 示例：执行功能单一时使用方法
    connect(ui->browseButton,&QPushButton::clicked,[this]()
    {
        QMessageBox::information(this,"信息","浏览");
    });
}

Widget::~Widget()
{
    delete ui;
}
// 确定按钮的功能实现
void Widget::on_applyButton_clicked()
{
    // 获取lineedit 内容
    QString program = ui->cmdLineEdit->text();
    // 创建Process 对象
    QProcess *myProcess = new QProcess(this);
    myProcess->start(program);
}

// 取消按钮的功能实现
void Widget::on_cancelButton_clicked()
{
    this->close();
}




