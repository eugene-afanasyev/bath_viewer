//
// Created by eugene on 18.10.2021.
//

#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include "../inc/end_pt_input.hpp"

namespace bath {

EndPtInput::EndPtInput(QWidget *parent)
    : QWidget(parent), layout(new QHBoxLayout(this)), lw(new QListWidget(this)) {
  layout->addWidget(lw);

  auto *vbox = new QVBoxLayout();
  vbox->setAlignment(Qt::AlignTop);

  auto *add_button = new QPushButton(tr("Добавить"), this);
  connect(add_button, &QPushButton::clicked, [this] { AddPoint(); });
  vbox->addWidget(add_button);

  auto *remove_button = new QPushButton(tr("Удалить"), this);
  connect(remove_button, &QPushButton::clicked, [this] { RemovePoint(); });
  vbox->addWidget(remove_button);

  layout->addLayout(vbox);
}

void EndPtInput::AddPoint() {
  auto *ptDialog = new AddPtDialog(this);
  auto pt = ptDialog->GetPoint();

  QString item = "Широта: ";
  item.append(QString::number(pt.first));

  item.append("; Долгота: ");
  item.append(QString::number(pt.second));

  lw->addItem(item);
  int row = lw->count() - 1;
  lw->setCurrentRow(row);
}

void EndPtInput::RemovePoint() {
  if (!lw->count())
    return;

  auto *item_to_remove = lw->takeItem(lw->currentRow());
  delete item_to_remove;
}

}
