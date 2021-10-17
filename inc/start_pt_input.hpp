//
// Created by eugene on 17.10.2021.
//

#ifndef BATH_VIEWER_INC_START_PT_INPUT_HPP_
#define BATH_VIEWER_INC_START_PT_INPUT_HPP_

#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>

namespace bath {

class StartPtInputWidget : public QWidget {
 Q_OBJECT
 public:
  explicit StartPtInputWidget(QWidget *parent = nullptr);

 private:
  // start point input field
  QGridLayout *input_layout;
  QLineEdit *slon_input_line;
  QLineEdit *slat_input_line;
};

}



#endif //BATH_VIEWER_INC_START_PT_INPUT_HPP_
