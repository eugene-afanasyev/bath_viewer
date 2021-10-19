//
// Created by eugene on 19.10.2021.
//

#include <QFormLayout>
#include <QLabel>
#include <iostream>
#include <QDoubleValidator>
#include <QDialogButtonBox>
#include "../inc/add_pt_dialog.hpp"

namespace bath {

AddPtDialog::AddPtDialog(QWidget *parent)
    : QDialog(parent), lon_field(new QLineEdit(this)), lat_field(new QLineEdit(this)) {
  auto *lon_validator = new QDoubleValidator(-180, 180, 6, this);
  auto *lat_validator = new QDoubleValidator(-90, 90, 6, this);

  lon_field->setValidator(lon_validator);
  lat_field->setValidator(lat_validator);

  auto *form = new QFormLayout(this);
  form->addRow(new QLabel(tr("Введите широту и долготу")));
  form->addRow(tr("Широта"), lat_field);
  form->addRow(tr("Долгота"), lon_field);

  auto *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel,
                                         Qt::Horizontal, this);
  form->addRow(buttonBox);
  QObject::connect(buttonBox, &QDialogButtonBox::accepted, this, &AddPtDialog::accept);
  QObject::connect(buttonBox, &QDialogButtonBox::rejected, this, &AddPtDialog::reject);
}

/// returns <latitude, longitude> value pair
std::pair<double, double> AddPtDialog::GetPoint() {
  if (exec() == QDialog::Accepted && (lat_field->hasAcceptableInput() && lon_field->hasAcceptableInput()))
    return {lat_field->text().replace(',', '.').toDouble(),
            lon_field->text().replace(',', '.').toDouble()};
  else
    return {0, 0};
}

}
