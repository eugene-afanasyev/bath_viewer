//
// Created by eugene on 17.10.2021.
//

#include <QDoubleValidator>
#include <QLabel>
#include "../inc/start_pt_input.hpp"

namespace bath {

StartPtInputWidget::StartPtInputWidget(QWidget *parent) :
    QWidget(parent),
    input_layout(new QGridLayout(this)) {
  slon_input_line = new QLineEdit(this);
  slat_input_line = new QLineEdit(this);

  auto *start_long_label = new QLabel(tr("Начальная долгота:"), this);
  start_long_label->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
  auto *start_lat_label = new QLabel(tr("Начальная широта:"), this);
  start_lat_label->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

  auto *lon_validator = new QDoubleValidator(-180, 180, 10, this);
  auto *lat_validator = new QDoubleValidator(-90, 90, 10, this);

  slon_input_line->setValidator(lon_validator);
  slat_input_line->setValidator(lat_validator);

  input_layout->addWidget(start_lat_label, 0, 0);
  input_layout->addWidget(slat_input_line, 0, 1);
  input_layout->addWidget(start_long_label, 1, 0);
  input_layout->addWidget(slon_input_line, 1, 1);
}

}


