//
// Created by eugene on 19.10.2021.
//

#ifndef BATH_VIEWER_INC_ADD_PT_DIALOG_HPP_
#define BATH_VIEWER_INC_ADD_PT_DIALOG_HPP_

#include <QDialog>
#include <QLineEdit>

namespace bath {

class AddPtDialog : public QDialog {
 Q_OBJECT
 public:
  AddPtDialog(QWidget *parent = nullptr);
  std::pair<double, double> GetPoint();

 private:
  QLineEdit *lon_field;
  QLineEdit *lat_field;
};

}  // namespace bath

#endif //BATH_VIEWER_INC_ADD_PT_DIALOG_HPP_
