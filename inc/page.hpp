//
// Created by eugene on 15.10.2021.
//

#ifndef BATH_VIEWER_INC_PAGE_HPP_
#define BATH_VIEWER_INC_PAGE_HPP_

#include <type_traits>
#include <QWidget>
#include <QVBoxLayout>

namespace bath {
namespace page {

enum class PageName {
  StartPage = 0,
  GRDTrackPage
};

class Page : public QWidget {
 Q_OBJECT
 public:
  explicit Page(QWidget *parent = nullptr) : QWidget(parent), layout(new QVBoxLayout(this)) {}

 protected:
  QVBoxLayout *layout;

 signals:
  void loadStartPage();
};

constexpr auto number_of_page(PageName p) noexcept {
  return static_cast<std::underlying_type_t<PageName>>(p);
}

}  // namespace page
}  // namespace bath

#endif //BATH_VIEWER_INC_PAGE_HPP_
