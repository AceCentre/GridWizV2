#include "searchcontroller.h"
#include <QDebug>

SearchController::SearchController(QObject *parent)
    : QObject{parent}
{
    safeSearch = Qt::Checked;
    searchText = "";
}

void SearchController::setSearchText(QString newSearchText)
{
    searchText = newSearchText;
}

void SearchController::setSafeSearch (int newSafeSearch)
{
    if(newSafeSearch == 0) {
        safeSearch = Qt::Unchecked;
    }

    if(newSafeSearch == 2) {
        safeSearch = Qt::Checked;
    }
}

Qt::CheckState SearchController::getSafeSearch() const
{
    return safeSearch;
}
