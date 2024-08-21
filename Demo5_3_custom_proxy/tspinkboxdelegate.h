#ifndef TSPINKBOXDELEGATE_H
#define TSPINKBOXDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>

class TSpinkBoxDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit TSpinkBoxDelegate(QObject *parent = nullptr);

    // QAbstractItemDelegate interface
public:
    virtual QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    virtual void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    virtual void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;
    virtual void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
};



#endif // TSPINKBOXDELEGATE_H
