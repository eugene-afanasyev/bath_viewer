//
// Created by eugene on 15.10.2021.
//

#ifndef BATH_VIEWER_INC_GRDTRACKPAGE_HPP_
#define BATH_VIEWER_INC_GRDTRACKPAGE_HPP_

#include <QWidget>
#include <QVBoxLayout>

class GRDTrackPage : public QWidget {
  Q_OBJECT
 public:
  explicit GRDTrackPage(QWidget *parent = nullptr);

 private:
  QVBoxLayout *layout;
};
#endif //BATH_VIEWER_INC_GRDTRACKPAGE_HPP_
