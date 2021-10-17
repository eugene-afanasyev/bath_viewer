//
// Created by eugene on 15.10.2021.
//

#ifndef BATH_VIEWER_INC_GRD_PAGE_HPP_
#define BATH_VIEWER_INC_GRD_PAGE_HPP_

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include "page.hpp"
#include "start_pt_input.hpp"

namespace bath {
namespace page {

class GRDTrackPage : public Page {
 Q_OBJECT
 public:
  explicit GRDTrackPage(QWidget *parent = nullptr);

 private:
  StartPtInputWidget *start_pt_input_widget;
  QWidget *input_field;
  QVBoxLayout *input_field_layout;

  void CreateMenuBar();
  void SetupInputField();

  void SetupPage();
};

}  // namespace page
}  // namespace bath

#endif //BATH_VIEWER_INC_GRD_PAGE_HPP_
