//
// Created by eugene on 18.10.2021.
//

#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include "../inc/pt_item.hpp"
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

  QString item_text = "Широта: ";
  item_text.append(QString::number(pt.first));

  item_text.append("; Долгота: ");
  item_text.append(QString::number(pt.second));

  auto *pt_item = new ListWidgetPointItem();
  pt_item->setText(item_text);
  pt_item->lat = pt.first;
  pt_item->lon = pt.second;

  lw->addItem(pt_item);
  int row = lw->count() - 1;
  lw->setCurrentRow(row);
}

void EndPtInput::RemovePoint() {
  if (!lw->count())
    return;

  auto *item_to_remove = lw->takeItem(lw->currentRow());
  delete item_to_remove;
}

std::vector<std::pair<double, double>> EndPtInput::GetInputPoints() const {
  std::vector<std::pair<double, double>> pts(lw->count());

  for (unsigned i = 0; i < lw->count(); ++i) {
    auto item = dynamic_cast<ListWidgetPointItem*>(lw->item(i));
    auto lat = item->lat, lon = item->lon;
    pts.emplace_back(lat, lon);
  }

  return pts;
}

}
