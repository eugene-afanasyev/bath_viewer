//
// Created by eugene on 17.10.2021.
//

#ifndef BATH_VIEWER_INC_SEPARATOR_HPP_
#define BATH_VIEWER_INC_SEPARATOR_HPP_

#include <QWidget>

namespace bath {

enum class SepOrientation {
  kVert = 0,
  kHoriz
};

class Separator : private QWidget {
 public:
  Separator() = delete;
  Separator(Separator &other) = delete;

  static QFrame* get(QWidget* parent = nullptr, SepOrientation orientation = SepOrientation::kVert) noexcept {
    auto *line = new QFrame(parent);

    switch (orientation) {
      case SepOrientation::kVert:
        line->setFrameShape(QFrame::VLine);
        break;
      case SepOrientation::kHoriz:
        line->setFrameShape(QFrame::HLine);
        break;
    }

    line->setFrameShadow(QFrame::Sunken);
    line->setLineWidth(1);

    return line;
  }
};

}  // namespace bath


#endif //BATH_VIEWER_INC_SEPARATOR_HPP_
