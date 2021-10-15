//
// Created by eugene on 14.10.2021.
//

#include <QVBoxLayout>
#include <QPushButton>
#include "../inc/MainWindow.hpp"
#include "../inc/StartPage.hpp"
#include "../inc/page.hpp"

StartPage::StartPage(QWidget *parent) :
  QWidget(parent), layout(new QVBoxLayout(this)) {
  CreateButtons();
}

void StartPage::CreateButtons() {
  auto* grd_track_btn = new QPushButton(tr("GRD_track"), this);
  grd_track_btn->setFixedSize(256, 128);

  connect(grd_track_btn, &QPushButton::clicked, this, &StartPage::loadGRDTrackPage);

  auto* grd2xyz = new QPushButton(tr("grd2xyz"), this);
  grd2xyz->setFixedSize(256, 128);

  layout->addStretch();
  layout->addWidget(grd_track_btn, 0, Qt::AlignHCenter);
  layout->addWidget(grd2xyz, 0, Qt::AlignHCenter);
  layout->addStretch();
}
