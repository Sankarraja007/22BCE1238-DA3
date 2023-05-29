#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

}

bool MainWindow::isincol(int grid[9][9], int col, int num){
    for(int row=0;row<9;row++)
        if(grid[row][col]==num)
            return true;
    return false;
}


bool MainWindow::isinrow(int grid[9][9], int row, int num){
    for(int col=0;col<9;col++)
        if(grid[row][col]==num)
            return true;
    return false;
}

bool MainWindow::isinbox(int grid[9][9], int brow, int bcol, int num){
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (grid[row+brow][col+bcol] == num)
                return true;
    return false;
}

bool MainWindow::isvalid(int grid[9][9], int row, int col, int num){
    return !isinrow(grid, row, num) && !isincol(grid, col, num) && !isinbox(grid, row - row%3 , col - col%3, num);
}

bool MainWindow::findemptyslot(int grid[9][9], int row, int col){
    for (row = 0; row < 9; row++)
        for (col = 0; col < 9; col++)
            if (grid[row][col] == 0)
                return true;
    return false;
}

bool MainWindow::solve(int grid[9][9]){
    for (int row = 0; row < 9; row++){
        for(int col=0;col<9; col++){
                 if (!findemptyslot(grid, row, col))
                     return true;
        }
    }
    for (int row = 0; row < 9; row++){
        for(int col=0;col<9; col++){
            for (int num = 1; num <= 9; num++){
                if (isvalid(grid, row, col, num)){
                    grid[row][col] = num;
                    if (solve(grid))
                        return true;
                    grid[row][col] = 0;
                }
            }
            return false;
        }
    }
}

void MainWindow::on_pushButton_clicked()
{
    int grid[9][9];
    QString g1 = ui->lineEdit->text();
    QString g2 = ui->lineEdit_2->text();
    QString g3 = ui->lineEdit_3->text();
    QString g4 = ui->lineEdit_4->text();
    QString g5 = ui->lineEdit_5->text();
    QString g6 = ui->lineEdit_6->text();
    QString g7 = ui->lineEdit_7->text();
    QString g8 = ui->lineEdit_8->text();
    QString g9 = ui->lineEdit_9->text();
    QString g10 = ui->lineEdit_10->text();
    QString g11 = ui->lineEdit_11->text();
    QString g12 = ui->lineEdit_12->text();
    QString g13 = ui->lineEdit_13->text();
    QString g14 = ui->lineEdit_14->text();
    QString g15 = ui->lineEdit_15->text();
    QString g16 = ui->lineEdit_16->text();
    QString g17 = ui->lineEdit_17->text();
    QString g18 = ui->lineEdit_18->text();
    QString g19 = ui->lineEdit_19->text();
    QString g20 = ui->lineEdit_20->text();
    QString g21 = ui->lineEdit_21->text();
    QString g22 = ui->lineEdit_22->text();
    QString g23 = ui->lineEdit_23->text();
    QString g24 = ui->lineEdit_24->text();
    QString g25 = ui->lineEdit_25->text();
    QString g26 = ui->lineEdit_26->text();
    QString g27 = ui->lineEdit_27->text();
    QString g28 = ui->lineEdit_28->text();
    QString g29 = ui->lineEdit_29->text();
    QString g30 = ui->lineEdit_30->text();
    QString g31 = ui->lineEdit_31->text();
    QString g32 = ui->lineEdit_32->text();
    QString g33 = ui->lineEdit_33->text();
    QString g34 = ui->lineEdit_34->text();
    QString g35 = ui->lineEdit_35->text();
    QString g36 = ui->lineEdit_36->text();
    QString g37 = ui->lineEdit_37->text();
    QString g38 = ui->lineEdit_38->text();
    QString g39 = ui->lineEdit_39->text();
    QString g40 = ui->lineEdit_40->text();
    QString g41 = ui->lineEdit_41->text();
    QString g42 = ui->lineEdit_42->text();
    QString g43 = ui->lineEdit_43->text();
    QString g44 = ui->lineEdit_44->text();
    QString g45 = ui->lineEdit_45->text();
    QString g46 = ui->lineEdit_46->text();
    QString g47 = ui->lineEdit_47->text();
    QString g48 = ui->lineEdit_48->text();
    QString g49 = ui->lineEdit_49->text();
    QString g50 = ui->lineEdit_50->text();
    QString g51 = ui->lineEdit_51->text();
    QString g52 = ui->lineEdit_52->text();
    QString g53 = ui->lineEdit_53->text();
    QString g54 = ui->lineEdit_54->text();
    QString g55 = ui->lineEdit_55->text();
    QString g56 = ui->lineEdit_56->text();
    QString g57 = ui->lineEdit_57->text();
    QString g58 = ui->lineEdit_58->text();
    QString g59 = ui->lineEdit_59->text();
    QString g60 = ui->lineEdit_60->text();
    QString g61 = ui->lineEdit_61->text();
    QString g62 = ui->lineEdit_62->text();
    QString g63 = ui->lineEdit_63->text();
    QString g64 = ui->lineEdit_64->text();
    QString g65 = ui->lineEdit_65->text();
    QString g66 = ui->lineEdit_66->text();
    QString g67 = ui->lineEdit_67->text();
    QString g68 = ui->lineEdit_68->text();
    QString g69 = ui->lineEdit_69->text();
    QString g70 = ui->lineEdit_70->text();
    QString g71 = ui->lineEdit_71->text();
    QString g72 = ui->lineEdit_72->text();
    QString g73 = ui->lineEdit_73->text();
    QString g74 = ui->lineEdit_74->text();
    QString g75 = ui->lineEdit_75->text();
    QString g76 = ui->lineEdit_76->text();
    QString g77 = ui->lineEdit_77->text();
    QString g78 = ui->lineEdit_78->text();
    QString g79 = ui->lineEdit_79->text();
    QString g80 = ui->lineEdit_80->text();
    QString g81 = ui->lineEdit_81->text();

    bool ok;

    QString g[81]={g1,g2,g3,g4,g5,g6,g7,g8,g9,g10,g11,g12,g13,g14,g15,g16,g17,g18,g19,g20,g21,g22,g23,g24,g25,g26,g27,g28,g29,g30,g31,g32,g33,g34,g35,g36,g37,g38,g39,g40,g41,g42,g43,g44,g45,g46,g47,g48,g49,g50,g51,g52,g53,g54,g55,g56,g57,g58,g59,g60,g61,g62,g63,g64,g65,g66,g67,g68,g69,g70,g71,g72,g73,g74,g75,g76,g77,g78,g79,g80,g81};
    int a=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            grid[i][j]=g[a].toInt(&ok);
            a++;
        }
    }
    solve(grid);


}

