//
// Created by eugene on 14.10.2021.
//

#ifndef BATH_VIEWER_INC_STARTPAGE_HPP_
#define BATH_VIEWER_INC_STARTPAGE_HPP_

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>

class StartPage : public QWidget {
 Q_OBJECT
 public:
  explicit StartPage(QWidget *parent = nullptr);

 private:
  QVBoxLayout *layout;
  void CreateButtons();

 signals:
  void loadGRDTrackPage();
};

#endif //BATH_VIEWER_INC_STARTPAGE_HPP_
