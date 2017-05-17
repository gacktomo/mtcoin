// Copyright (c) 2011-2014 The MTcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MTcoinADDRESSVALIDATOR_H
#define MTcoinADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class MTcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit MTcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** MTcoin address widget validator, checks for a valid mtcoin address.
 */
class MTcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit MTcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // MTcoinADDRESSVALIDATOR_H
