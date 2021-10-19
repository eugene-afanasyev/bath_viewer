//
// Created by eugene on 19.10.2021.
//

#ifndef BATH_VIEWER_INC_PT_ITEM_HPP_
#define BATH_VIEWER_INC_PT_ITEM_HPP_

#include <QListWidgetItem>

namespace bath {

class ListWidgetPointItem : public QListWidgetItem {
 public:
  double lat, lon;
};

}  // namespace bath


#endif //BATH_VIEWER_INC_PT_ITEM_HPP_
