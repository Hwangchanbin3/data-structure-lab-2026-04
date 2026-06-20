#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 배경 설정 (이미지 파일명 확인 필수)
    this->setStyleSheet("QMainWindow { background-image: url(:/images/background.png); "
                        "background-position: center; "
                        "background-repeat: no-repeat; }");

    ui->listWidget->hide();
    ui->listWidget->setStyleSheet("background-color: rgba(255, 255, 255, 220); "
                                  "border-radius: 10px; "
                                  "font-size: 14px; "
                                  "border: 1px solid gray;");

    if(ui->comboBox->count() == 0) {
        ui->comboBox->addItems({"전북대", "덕진공원", "전주 객사", "신시가지", "에코시티", "전주역"});
    }
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::updateCafeDistances(const QString &location) {
    cafeList.clear();
    if (location == "전북대") cafeList = {{"A스터디카페", 200}, {"B스터디카페", 500}, {"C스터디카페", 1200}, {"D스터디카페", 800}, {"E스터디카페", 1500}, {"F스터디카페", 300}};
    else if (location == "덕진공원") cafeList = {{"A스터디카페", 400}, {"B스터디카페", 600}, {"C스터디카페", 1300}, {"D스터디카페", 1000}, {"E스터디카페", 1700}, {"F스터디카페", 200}};
    else if (location == "전주 객사") cafeList = {{"A스터디카페", 1500}, {"B스터디카페", 300}, {"C스터디카페", 400}, {"D스터디카페", 900}, {"E스터디카페", 600}, {"F스터디카페", 1100}};
    else if (location == "신시가지") cafeList = {{"A스터디카페", 800}, {"B스터디카페", 1200}, {"C스터디카페", 1000}, {"D스터디카페", 300}, {"E스터디카페", 200}, {"F스터디카페", 1400}};
    else if (location == "에코시티") cafeList = {{"A스터디카페", 1800}, {"B스터디카페", 1500}, {"C스터디카페", 2000}, {"D스터디카페", 600}, {"E스터디카페", 800}, {"F스터디카페", 500}};
    else if (location == "전주역") cafeList = {{"A스터디카페", 2000}, {"B스터디카페", 1800}, {"C스터디카페", 1500}, {"D스터디카페", 400}, {"E스터디카페", 500}, {"F스터디카페", 2200}};
    else cafeList = {{"A스터디카페", 500}, {"B스터디카페", 500}, {"C스터디카페", 500}, {"D스터디카페", 500}, {"E스터디카페", 500}, {"F스터디카페", 500}};
}

void MainWindow::on_pushButton_clicked() {
    QString selectedLocation = ui->comboBox->currentText();
    updateCafeDistances(selectedLocation);

    // 정렬 로직 (StudyCafe 타입 명시)
    std::sort(cafeList.begin(), cafeList.end(), [](const StudyCafe& a, const StudyCafe& b) {
        return a.distance < b.distance;
    });

    ui->listWidget->clear();
    ui->listWidget->addItem("== " + selectedLocation + " 근처 스터디카페 (거리순) ==");
    for (const auto& cafe : cafeList) {
        ui->listWidget->addItem(cafe.name + " : " + QString::number(cafe.distance) + "m");
    }

    ui->listWidget->show();
}