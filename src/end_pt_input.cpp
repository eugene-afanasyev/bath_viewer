//
// Created by eugene on 18.10.2021.
//

#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include "../inc/end_pt_input.hpp"

namespace bath {

EndPtInput::EndPtInput(QWidget *parent)
    : QWidget(parent), layout(new QHBoxLayout(this)), lv(new QListView(this)) {
  layout->addWidget(lv);

  auto *vbox = new QVBoxLayout();
  vbox->setAlignment(Qt::AlignTop);

  auto *btn = new QPushButton(tr("добавить"), this);
  vbox->addWidget(btn);

  layout->addLayout(vbox);
}

}
