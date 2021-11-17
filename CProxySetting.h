#ifndef CPROXYSETTING_H
#define CPROXYSETTING_H

#include <QObject>
#include <QSettings>
#include <QDebug>

class CProxySetting
{
public:

    //开始代理
    static void startProxy(QString ipandport);       //传入IP:端口，并设置代理

    //停止代理
    static void stopProxy();   //网络恢复正常使用

};

#endif // CPROXYSETTING_H
