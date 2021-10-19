//
// Created by eugene on 18.10.2021.
//

#ifndef BATH_VIEWER_INC_END_PT_INPUT_HPP_
#define BATH_VIEWER_INC_END_PT_INPUT_HPP_

#include <QWidget>
#include <QListWidget>
#include <QVBoxLayout>
#include "add_pt_dialog.hpp"

namespace bath {

class EndPtInput : public QWidget {
 Q_OBJECT
 public:
  EndPtInput(QWidget *parent = nullptr);

 private:
  QHBoxLayout *layout;
  QListWidget *lw;

  void AddPoint();
  void RemovePoint();
};

}  // namespace bath

#endif //BATH_VIEWER_INC_END_PT_INPUT_HPP_
