//
// Created by eugene on 13.10.2021.
//
#include <QVBoxLayout>
#include "../inc/page.hpp"
#include "../inc/MainWindow.hpp"
#include "../inc/StartPage.hpp"

MainWindow::MainWindow(QWidget *parent) :
  QWidget(nullptr), layout(new QVBoxLayout(this)),
  pagesStack(new QStackedWidget(this)){

  auto* startPage = new StartPage(this);
  pagesStack->addWidget(startPage);
  pagesStack->setCurrentIndex(number_of_page(Page::StartPage));

  layout->addWidget(pagesStack);

  resize(1280, 768);
  show();
}
