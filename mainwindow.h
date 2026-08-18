#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void numberClicked();
    void operatorClicked();
    void equalClicked();
    void clearClicked();
    void decimalClicked();
    void deleteClicked();

private:
    Ui::MainWindow *ui;

    double firstNumber=0;
    QString currentOperator="";
    bool waitingForSecondNumber=false;
};
#endif // MAINWINDOW_H
