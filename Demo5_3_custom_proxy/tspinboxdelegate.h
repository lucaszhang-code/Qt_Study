#ifndef TSPINBOXDELEGATE_H
#define TSPINBOXDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>

class TSpinBoxDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit TSpinBoxDelegate(QObject *parent = nullptr);
};

#endif // TSPINBOXDELEGATE_H
