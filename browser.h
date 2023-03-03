#ifndef BROWSER_H
#define BROWSER_H

#include <QObject>

class Browser : public QObject
{
    Q_OBJECT
public:
    explicit Browser(QObject *parent = nullptr);

public slots:
    void openIssues();
    void openContact();
    void openAbout();

private:
    void openStringInBrowser(QString url);

signals:

};

#endif // BROWSER_H
