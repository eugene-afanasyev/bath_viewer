//
// Created by eugene on 13.10.2021.
//

#ifndef BATH_VIEWER_INC_MAIN_WINDOW_HPP_
#define BATH_VIEWER_INC_MAIN_WINDOW_HPP_

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QStackedWidget>
#include <QPushButton>

namespace bath {

class MainWindow : public QWidget {
 Q_OBJECT

 public:
  explicit MainWindow(QWidget *parent = nullptr);

 private:
  QVBoxLayout *layout;
  QStackedWidget *pagesStack;

 public slots:
  void loadGRDPage();
  void loadStartPage();
};

}  // namespace bath

#endif //BATH_VIEWER_INC_MAIN_WINDOW_HPP_
