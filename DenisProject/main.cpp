#include "DenisProject.h"
#include <QtWidgets/QApplication>
#include <QTextCodec>

int main(int argc, char *argv[]){
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("CP1251")); 
    QApplication a(argc, argv);
    DenisProject w;
    w.show();

    return a.exec();
}
