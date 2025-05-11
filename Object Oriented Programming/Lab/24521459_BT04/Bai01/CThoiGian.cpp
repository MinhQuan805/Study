#include "CThoiGian.h"

CThoiGian::CThoiGian() {
    gio = 0;
    phut = 0;
    giay = 0;
    cout << "Phuong thuc khoi tao mac dinh\n";
}

CThoiGian::CThoiGian(int gio, int phut, int giay) {
    this->gio = gio;
    this->phut = phut;
    this->giay = giay;
    cout << "Phuong thuc thiet lap khi biet dang thong tin cua doi tuong\n";
}

CThoiGian::CThoiGian(const CThoiGian& other) {
    gio = other.gio;
    phut = other.phut;
    giay = other.giay;
    cout << "Phuong thuc sao chep thong tin tu doi tuong khac\n";
}

CThoiGian::~CThoiGian() {
    cout << "Phuong thuc pha huy\n";
}
