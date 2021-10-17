//
// Created by eugene on 15.10.2021.
//

#ifndef BATH_VIEWER_INC_GRD_PAGE_HPP_
#define BATH_VIEWER_INC_GRD_PAGE_HPP_

#include <QWidget>
#include <QVBoxLayout>
#include "page.hpp"

namespace bath {
namespace page {

class GRDTrackPage : public Page {
 Q_OBJECT
 public:
  explicit GRDTrackPage(QWidget *parent = nullptr);

 signals:
  void loadStartPage();
};

}  // namespace page
}  // namespace bath

#endif //BATH_VIEWER_INC_GRD_PAGE_HPP_
