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

namespace bath {
namespace page {

class GRDTrackPage : public Page {
 Q_OBJECT
 public:
  explicit GRDTrackPage(QWidget *parent = nullptr);

 private:
  QHBoxLayout *content_layout;
  QLineEdit *slat_input_field;
  QLineEdit *slon_input_field;

  void SetupPage();
  void CreateMenuBar();
  void CreateStartPointForm();
};

}  // namespace page
}  // namespace bath

#endif //BATH_VIEWER_INC_GRD_PAGE_HPP_
