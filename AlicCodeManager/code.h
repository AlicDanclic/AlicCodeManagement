#ifndef CODE_H
#define CODE_H
#include "QString"
#include <ctime>
#include <QTime>
#include <QDateTime>

QString encode(QString src);
QString decode(QString src);
char getDigit();
char getLower();
char getUpper();
QString RandomCode(int len);

#endif // CODE_H

