#include <QDesktopServices>

#include "browser.h"
#include "qurl.h"

Browser::Browser(QObject *parent)
    : QObject{parent}
{

}

void Browser::openIssues()
{
    openStringInBrowser("https://github.com/acecentre/gridwizv2/issues");
}

void Browser::openContact()
{
    openStringInBrowser("https://acecentre.org.uk/contact");
}

void Browser::openAbout()
{
    openStringInBrowser("https://acecentre.org.uk/about");

}

void Browser::openStringInBrowser(QString url)
{
    QUrl fullUrl = QUrl(url);
    QDesktopServices::openUrl(fullUrl);
}
