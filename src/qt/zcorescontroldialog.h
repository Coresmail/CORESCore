// Copyright (c) 2017 The PIVX developers
// Copyright (c) 2017-2018 The cores developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZcoresCONTROLDIALOG_H
#define ZcoresCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "primitives/zerocoin.h"
#include "privacydialog.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZcoresControlDialog;
}

class ZcoresControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZcoresControlDialog(QWidget *parent);
    ~ZcoresControlDialog();

    void setModel(WalletModel* model);

    static std::list<std::string> listSelectedMints;
    static std::list<CZerocoinMint> listMints;
    static std::vector<CZerocoinMint> GetSelectedMints();

private:
    Ui::ZcoresControlDialog *ui;
    WalletModel* model;
    PrivacyDialog* privacyDialog;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZcoresCONTROLDIALOG_H
