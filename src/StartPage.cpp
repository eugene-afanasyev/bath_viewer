//
// Created by eugene on 14.10.2021.
//

#include <QVBoxLayout>
#include <QPushButton>
#include "../inc/StartPage.hpp"

StartPage::StartPage(QWidget *parent) :
  QWidget(parent), layout(new QVBoxLayout(this)) {
  CreateButtons();
}

void StartPage::CreateButtons() {
  auto* grd_track_btn = new QPushButton(tr("GRD_track"));
  grd_track_btn->setFixedSize(256, 128);
  layout->addWidget(grd_track_btn, 1, Qt::AlignCenter);
}
