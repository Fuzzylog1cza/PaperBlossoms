/*
 * *******************************************************************
 * This file is part of the Paper Blossoms application
 * (https://github.com/dashnine/PaperBlossoms).
 * Copyright (c) 2019 Kyle Hankins (dashnine)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * The Legend of the Five Rings Roleplaying Game is the creation
 * and property of Fantasy Flight Games.
 * *******************************************************************
 */

#ifndef RINGVIEWER_H
#define RINGVIEWER_H
#include <QMap>

#include <QWidget>

namespace Ui {
class RingViewer;
}

class RingViewer : public QWidget
{
    Q_OBJECT

public:
    explicit RingViewer(QWidget *parent = 0);
    ~RingViewer();
    void setBackgroundWhite();
    void setBackgroundClear();
public slots:
    void setRings(QMap<QString, int> ringmap);
private:
    Ui::RingViewer *ui;
};

#endif // RINGVIEWER_H