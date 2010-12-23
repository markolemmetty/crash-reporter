/*
 * This file is part of crash-reporter
 *
 * Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * Contact: Ville Ilvonen <ville.p.ilvonen@nokia.com>
 * Author: Riku Halonen <riku.halonen@nokia.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#ifndef CREPORTERDAEMONCOREDIR_P_H
#define CREPORTERDAEMONCOREDIR_P_H

// System includes

#include <QStringList>

/*!
 * \class CReporterDaemonCoreDirPrivate
 * \brief Private CReporterDaemonCoreDir class.
 *
 * \sa CReporterDaemonCoreDir
 */
class CReporterDaemonCoreDirPrivate
{
public:
    //! @arg Absolute path to the core-dumps directory.
    QString directory;
    //! @arg Absolute path to the mount point.
    QString mountpoint;
    //! @arg List of core files currently in the directory.
    QStringList coresAtDirectory;
};

#endif // CREPORTERDAEMONCOREDIR_P_H
