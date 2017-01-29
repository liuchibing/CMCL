#include <QApplication>
#include <QGridLayout>

int main(int argc, char** argv) {
  QApplication a(argc, argv);

  QGridLayout root;

  a.setLayout(&root);
  return a.exec();
}
