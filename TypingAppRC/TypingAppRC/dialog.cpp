#include "dialog.h"
#include "ui_dialog.h"
#include <QStackedWidget>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    refreshDatabase();
}

void Dialog::refreshDatabase(){
    ui -> listWidget -> clear();
    for( int i = 0; i < typingApp.getFileNamesSizeFromDatabase(); i++){
        std::string str = typingApp.getFileNameFromDatabase( i );
        QString qstr = QString::fromStdString( str );
        ui -> listWidget -> addItem( qstr );
    }
    typingApp.refreshDatabase();
}

Dialog::~Dialog(){
    delete ui;
}

void Dialog::on_addButton_clicked(){
    ui -> stackedWidget -> setCurrentIndex( 2 );
}

void Dialog::on_listWidget_itemDoubleClicked(QListWidgetItem *item){

    ui -> stackedWidget -> setCurrentIndex( 1 ); // było 1!!!!
    QString qstr = item -> text();
    std::string str = qstr.toUtf8().constData();

    typingApp.setText( str );
}

void Dialog::on_lineEdit_returnPressed(){
    static int i = 0;
    std::string str = " ";

    if( i == 1 ){
        typingApp.startTimer();
    }

    if( i == typingApp.getNumberOfWordsSelectedText() - 1 ){
        typingApp.stopTimer();
        std::stringstream ss;
        ss << ( typingApp.getNumberOfWordsSelectedText() / typingApp.timerScore() * 60 ) ;
        std::string score = ss.str();
             QMessageBox::information( this, "Score", QString::fromStdString( score ) + " WPM\nGoodjob!" );
        ui -> stackedWidget -> setCurrentIndex( 1 );
    }else{

    QString qstr = QString::fromStdString( typingApp.getWordSelectedText( i ) );
    QString enteredQstr = ui -> lineEdit -> text();
    ui -> label -> setText( qstr );

    if( qstr == enteredQstr ){
       i++;
       qstr = QString::fromStdString( typingApp.getWordSelectedText( i ) );
       ui -> lineEdit -> clear();
    }
       ui -> label -> setText( qstr );
    }
}

void Dialog::on_pushButton_clicked(){
    QString enteredQstr = ui -> lineEdit_2 -> text();
    std::string str = enteredQstr.toUtf8().constData();

    try {
        typingApp.addFile( str );
    }  catch ( MyException & error) {
          QMessageBox m;
          m.critical( 0, "Error", error.what() );
          m.setFixedSize(500,200);
    }
    ui -> lineEdit_2 -> clear();
    refreshDatabase();
    ui -> stackedWidget -> setCurrentIndex( 0 );
}

void Dialog::on_typingBackButton_clicked(){
    ui -> lineEdit -> clear();
    ui -> stackedWidget -> setCurrentIndex( 0 );
}
