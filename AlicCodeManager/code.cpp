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


char getDigit()
{
    return static_cast<char>('0' + qrand()%('9'-'0'+1));
}
char getLower()
{
    return static_cast<char>('a' + qrand()%('z'-'a'+1));
}
char getUpper()
{
    return static_cast<char>('A' + qrand()%('Z'-'A'+1));
}

QString RandomCode(int len){
    qsrand(QDateTime::currentMSecsSinceEpoch());
    const char ch[] = "1234567890abcdefghijkmnpqrstuvwxyzABCDEFGHJKLMNPQRSTUVWXYZ";
    int size = sizeof(ch);
    char* str = new char[len + 1];
    int num = 0;
    for (int nIndex = 0; nIndex < len; ++nIndex)
    {
        num = rand() % (size - 1);
        str[nIndex] = ch[num];
    }
    str[len] = '\0';
    QString res(str);
    return res;
}
