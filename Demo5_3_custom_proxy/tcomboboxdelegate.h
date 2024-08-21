#ifndef TCOMBOBOXDELEGATE_H
#define TCOMBOBOXDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>

class TComboBoxDelegate : public QStyledItemDelegate
{
    Q_OBJECT

private:
    QStringList m_itemList;
    bool m_editable;
public:
    explicit TComboBoxDelegate(QObject *parent = nullptr);

    void setItems(QStringList item, bool editable);

    // QAbstractItemDelegate interface
public:
    virtual QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    virtual void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    virtual void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;
    virtual void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
};



#endif // TCOMBOBOXDELEGATE_H
