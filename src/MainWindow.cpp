//
// Created by eugene on 13.10.2021.
//
#include <QVBoxLayout>
#include "../inc/page.hpp"
#include "../inc/MainWindow.hpp"
#include "../inc/StartPage.hpp"
#include "../inc/grdtrackPage.hpp"

MainWindow::MainWindow(QWidget *parent) :
  QWidget(nullptr), layout(new QVBoxLayout(this)),
  pagesStack(new QStackedWidget(this)){

  auto* startPage = new StartPage(this);
  auto* grdPage = new GRDTrackPage(this);

  pagesStack->addWidget(startPage);
  pagesStack->addWidget(grdPage);
  pagesStack->setCurrentIndex(number_of_page(Page::StartPage));

  layout->addWidget(pagesStack);

  resize(1280, 768);
  show();

  connect(startPage, &StartPage::loadGRDTrackPage, this, &MainWindow::loadGRDPage);
}

void MainWindow::loadGRDPage() {
  pagesStack->setCurrentIndex(number_of_page(Page::GRDTrackPage));
}

