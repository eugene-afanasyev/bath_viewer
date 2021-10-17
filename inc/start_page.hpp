//
// Created by eugene on 14.10.2021.
//

#ifndef BATH_VIEWER_INC_START_PAGE_HPP_
#define BATH_VIEWER_INC_START_PAGE_HPP_

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "page.hpp"

namespace bath {
namespace page {

class StartPage : public Page {
 Q_OBJECT
 public:
  explicit StartPage(QWidget *parent = nullptr);

 private:
  void CreateButtons();

 signals:
  void loadGRDTrackPage();
};

}  // namespace page
}  // namespace bath

#endif //BATH_VIEWER_INC_START_PAGE_HPP_
