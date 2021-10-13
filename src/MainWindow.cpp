//
// Created by eugene on 13.10.2021.
//
#include "../inc/MainWindow.hpp"

MainWindow::MainWindow() {
  createMenu();

  resize(1280, 786);
  show();
}

MainWindow* MainWindow::instance_ = nullptr;

MainWindow *MainWindow::instance() {
  return instance_ ? instance_ : (instance_ = new MainWindow());
}

MainWindow::~MainWindow() {
  delete instance_;
}

void MainWindow::createMenu() {
  auto* fileMenu = menuBar()->addMenu(tr("&Файл"));
  const auto openIcon = QIcon::fromTheme("document-open");

  auto *openAct = new QAction(openIcon, tr("&Открыть"), this);
  openAct->setStatusTip(tr("&Открыть файл базы данных"));

  fileMenu->addAction(openAct);
}
