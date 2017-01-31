#include <QWidget>
#include <QApplication>
#include <QGridLayout>
#include <QMainWindow>
#include <QPushButton>

int main(int argc, char **argv)
{
  QApplication a(argc, argv);
  QMainWindow *winMain = new QMainWindow;
  QGridLayout *grid = new QGridLayout(winMain);
  QPushButton *btn = new QPushButton("hello");

  grid->setColumnStretch(0, 1);
  grid->addWidget(btn, 0, 0);

  winMain->show();
  return a.exec();
}
