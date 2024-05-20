#include "code.h"

QString encode(QString src){
    QByteArray text = src.toLocal8Bit();
    QByteArray by = text.toBase64();
    return QString(by);
}

QString decode(QString src){
    QByteArray text = src.toLocal8Bit();
    QByteArray by = text.fromBase64(text);
    QString str = QString::fromLocal8Bit(by);
    return str;
}
