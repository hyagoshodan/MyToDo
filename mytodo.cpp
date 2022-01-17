#include "mytodo.h"
#include "ui_mytodo.h"

MyTodo::MyTodo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyTodo)
{
    ui->setupUi(this);
}

MyTodo::~MyTodo()
{
    delete ui;
}


void MyTodo::on_actionSair_triggered()
{
    close();
}

void MyTodo::on_actionSobre_triggered()
{
    QMessageBox::about( this, "Sobre esse projeto", "Mensagem teste");
}
