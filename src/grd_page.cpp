//
// Created by eugene on 15.10.2021.
//

#include <QHBoxLayout>
#include <QMenu>
#include <QIcon>
#include <QAction>
#include <QMenuBar>
#include <QToolBar>
#include <QFrame>
#include <QLineEdit>
#include <QDoubleValidator>
#include "../inc/grd_page.hpp"

using bath::page::GRDTrackPage;

GRDTrackPage::GRDTrackPage(QWidget *parent) :
    Page(parent), slon_input_field(new QLineEdit(this)),
    slat_input_field(new QLineEdit(this)), content_layout(new QHBoxLayout()) {

  layout->setContentsMargins(0, 0, 0, 0);

  CreateMenuBar();
  SetupPage();
  layout->addStretch();
}

void GRDTrackPage::SetupPage() {
  CreateStartPointForm();
}

void GRDTrackPage::CreateStartPointForm() {
// setting up start points input field
  auto *start_point_input_field = new QWidget();
  auto *start_point_layout = new QGridLayout(start_point_input_field);

  start_point_input_field->setFont(QFont("Courier New", 12));

  auto *start_long_label = new QLabel(tr("Начальная долгота:"), this);
  start_long_label->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
  auto *start_lat_label = new QLabel(tr("Начальная широта:"), this);
  start_lat_label->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

  auto *lon_validator = new QDoubleValidator(-180, 180, 10, this);
  auto *lat_validator = new QDoubleValidator(-90, 90, 10, this);

  slon_input_field->setValidator(lon_validator);
  slat_input_field->setValidator(lat_validator);

  start_point_layout->addWidget(start_long_label, 0, 0);
  start_point_layout->addWidget(slat_input_field, 0, 1);
  start_point_layout->addWidget(start_lat_label, 1, 0);
  start_point_layout->addWidget(slon_input_field, 1, 1);

  layout->addLayout(content_layout);
  content_layout->addWidget(start_point_input_field);
}

void GRDTrackPage::CreateMenuBar() {
// creating menu bar
  auto *menuBar = new QMenuBar(this);
  auto *fileMenu = new QMenu(tr("Файл"));
  auto *openFileAction = new QAction(QIcon::fromTheme("document-open"), tr("Открыть"));
  menuBar->addMenu(fileMenu);
  fileMenu->addAction(openFileAction);
  layout->setMenuBar(menuBar);

  auto *toolBar = new QToolBar(this);
  auto *turnBackAction = new QAction(QIcon::fromTheme("edit-undo"), tr("Назад"));
  auto *separator = new QFrame(this);
  connect(turnBackAction, &QAction::triggered, this, &GRDTrackPage::LoadStartPage);

  toolBar->addAction(turnBackAction);
  separator->setFrameShape(QFrame::HLine);
  separator->setFrameShadow(QFrame::Sunken);

  layout->addWidget(toolBar);
  layout->addWidget(separator);
}
