//
// Created by eugene on 14.10.2021.
//

#include <QVBoxLayout>
#include <QPushButton>
#include "../inc/page.hpp"
#include "../inc/start_page.hpp"

using bath::page::StartPage;
using bath::page::PageName;

StartPage::StartPage(QWidget *parent) : Page(parent) {
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
