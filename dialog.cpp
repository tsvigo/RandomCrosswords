#include "dialog.h"
#include "ui_dialog.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
#include <iostream>
#include <fstream>
using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///.сначала на 1450 файлов    
/// magick -size 10x10 xc:gray +noise Random -threshold 50% /mnt/247E7EDA7E7EA3E8/картинки/RandomCrosswords/1.bmp
    QString comanda1="magick -size 10x10 xc:gray +noise Random -threshold 50% /mnt/247E7EDA7E7EA3E8/картинки/RandomCrosswords/";//1.bmp";
 //   QString imia_fayla=""; // 1, 2 и так далее
    QString comanda2=".bmp";
     QString comanda_vsia;
    for (int imia_fayla = 1; imia_fayla < 1452; ++imia_fayla)
 {
     comanda_vsia=comanda1+QString::number(imia_fayla)+comanda2;
     system (comanda_vsia.toStdString().c_str() );
        
    }
/// 
/// 
/// 
/// 
/// 
/// 
/// 
/// 
/// 
}

Dialog::~Dialog()
{
    delete ui;
}

