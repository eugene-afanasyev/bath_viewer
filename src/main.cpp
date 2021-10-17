#include <QApplication>
#include <memory>
#include "../inc/main_window.hpp"

using bath::MainWindow;

int main(int argc, char *argv[]) {
  QFont font("Courier New", 16);
  font.setStyleHint(QFont::Monospace);
  QApplication::setFont(font);

  QApplication app(argc, argv);

  auto *mw = new MainWindow();

  return QApplication::exec();
}