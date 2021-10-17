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
#include "../inc/grd_page.hpp"

using bath::page::GRDTrackPage;

GRDTrackPage::GRDTrackPage(QWidget *parent) : Page(parent) {
  layout->setContentsMargins(0, 0, 0, 0);
  auto *horizLayout = new QHBoxLayout(this);

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
  connect(turnBackAction, &QAction::triggered, this, &GRDTrackPage::loadStartPage);

  toolBar->addAction(turnBackAction);
  separator->setFrameShape(QFrame::HLine);
  separator->setFrameShadow(QFrame::Sunken);

  layout->addWidget(toolBar);
  layout->addWidget(separator);
  layout->addStretch();
  layout->addLayout(horizLayout);
}
