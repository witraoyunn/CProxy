#include "CProxySetting.h"
void CProxySetting::startProxy(QString ipandport)
{
    QSettings m_Setting("HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings", QSettings::NativeFormat);
    m_Setting.setValue("ProxyServer",ipandport);
    m_Setting.setValue("ProxyEnable",1);
}

void CProxySetting::stopProxy()
{
    QSettings m_Setting("HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings", QSettings::NativeFormat);
    m_Setting.setValue("ProxyServer","");
    m_Setting.setValue("ProxyEnable",0);
}
