//
// Created by eugene on 15.10.2021.
//

#ifndef BATH_VIEWER_INC_PAGE_HPP_
#define BATH_VIEWER_INC_PAGE_HPP_

#include <type_traits>


enum class Page {
  StartPage = 0
};

constexpr auto number_of_page(Page p) noexcept {
  return static_cast<std::underlying_type_t<Page>>(p);
}

#endif //BATH_VIEWER_INC_PAGE_HPP_
