//
// Created by eugene on 15.10.2021.
//

#include <QPushButton>
#include "../inc/grdtrackPage.hpp"

GRDTrackPage::GRDTrackPage(QWidget *parent) : layout(new QVBoxLayout(this)) {
  auto* btn = new QPushButton(tr("Ok"), this);
  layout->addWidget(btn);
}
