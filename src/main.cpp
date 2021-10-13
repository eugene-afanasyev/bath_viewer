#include <QApplication>
#include <memory>
#include "../inc/MainWindow.hpp"

int main(int argc, char *argv[]) {
  QFont font("Courier New", 16);
  font.setStyleHint(QFont::Monospace);
  QApplication::setFont(font);

  QApplication app(argc, argv);
  MainWindow::instance();

  return QApplication::exec();
}