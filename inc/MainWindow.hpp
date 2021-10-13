//
// Created by eugene on 13.10.2021.
//

#ifndef BATH_VIEWER_INC_MAINWINDOW_HPP_
#define BATH_VIEWER_INC_MAINWINDOW_HPP_

#include <QMainWindow>
#include <QMenuBar>
#include <QPushButton>

class MainWindow : public QMainWindow {
 Q_OBJECT

 public:
  MainWindow(QWidget*) = delete;
  static MainWindow* instance();

  ~MainWindow() override;

 private:
  MainWindow();

  static MainWindow* instance_;
  void createMenu();
};

#endif //BATH_VIEWER_INC_MAINWINDOW_HPP_
