//
// Created by eugene on 15.10.2021.
//

#include <QHBoxLayout>
#include <QMenu>
#include <QIcon>
#include <QAction>
#include <QMenuBar>
#include <QFrame>
#include <QDoubleValidator>
#include "../inc/grd_page.hpp"
#include "../inc/separator.hpp"

namespace bath {

namespace page {

GRDTrackPage::GRDTrackPage(QWidget *parent) :
    Page(parent), start_pt_input_widget(new StartPtInputWidget(this)),
    input_field(new QWidget(this)), input_field_layout(new QVBoxLayout(input_field)),
    end_pt_widget (new EndPtInput(this)) {

  layout->setContentsMargins(0, 0, 0, 0);
  content->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

  CreateMenuBar();
  SetupInputField();

  layout->addWidget(content);
}

void GRDTrackPage::CreateMenuBar() {
  auto *menu_bar = new QMenuBar(this);
  auto *file_menu = new QMenu(tr("Файл"), this);
  auto *open_file_action = new QAction(QIcon::fromTheme("document-open"), tr("Открыть"));

  file_menu->addAction(open_file_action);
  menu_bar->addMenu(file_menu);
  layout->setMenuBar(menu_bar);
}

void GRDTrackPage::SetupInputField() {
  input_field->setFont(QFont("Courier New", 12));

  input_field_layout->setAlignment(Qt::AlignTop);
  input_field_layout->addWidget(start_pt_input_widget);
  content_layout->addWidget(input_field);
  input_field_layout->addWidget(Separator::get(this, SepOrientation::kHoriz));

  auto* end_pt_lbl = new QLabel(tr("Конечные точки:"), this);
  input_field_layout->addWidget(end_pt_lbl);

  input_field_layout->addWidget(end_pt_widget);
}

}  // namespace page

}  // namespace bath
