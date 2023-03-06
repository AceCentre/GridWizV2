#ifndef SEARCHCONTROLLER_H
#define SEARCHCONTROLLER_H

#include <QObject>

class SearchController : public QObject
{
    Q_OBJECT
public:
    explicit SearchController(QObject *parent = nullptr);


    Qt::CheckState getSafeSearch() const;

public slots:
    void setSearchText(QString newSearchText);
    void setSafeSearch(int newSafeSearch);

signals:

private:
    QString searchText;
    Qt::CheckState safeSearch;
};

#endif // SEARCHCONTROLLER_H
