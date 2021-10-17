//
// Created by eugene on 13.10.2021.
//
#include <QVBoxLayout>
#include "../inc/page.hpp"
#include "../inc/main_window.hpp"
#include "../inc/start_page.hpp"
#include "../inc/grd_page.hpp"

using bath::MainWindow;
using bath::page::StartPage;
using bath::page::GRDTrackPage;
using bath::page::PageName;

MainWindow::MainWindow(QWidget *parent) :
    QWidget(nullptr), layout(new QVBoxLayout(this)),
    pagesStack(new QStackedWidget(this)) {

  auto *startPage = new StartPage(this);
  auto *grdPage = new GRDTrackPage(this);

  pagesStack->addWidget(startPage);
  pagesStack->addWidget(grdPage);
  pagesStack->setCurrentIndex(number_of_page(PageName::StartPage));

  layout->addWidget(pagesStack);

  resize(1280, 768);
  show();

  connect(startPage, &StartPage::loadGRDTrackPage, this, &MainWindow::loadGRDPage);
  connect(grdPage, &GRDTrackPage::LoadStartPage, this, &MainWindow::loadStartPage);
}

void MainWindow::loadGRDPage() {
  pagesStack->setCurrentIndex(number_of_page(PageName::GRDTrackPage));
}

void MainWindow::loadStartPage() {
  pagesStack->setCurrentIndex(number_of_page(PageName::StartPage));
}
