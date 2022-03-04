/* === This file is part of Calamares - <https://calamares.io> ===
 *
 *   SPDX-FileCopyrightText: 2021 Adriaan de Groot <groot@kde.org>
 *   SPDX-License-Identifier: GPL-3.0-or-later
 *
 *   Calamares is Free Software: see the License-Identifier above.
 *
 */

#ifndef UNPACKFSC_UNSQUASHRUNNER_H
#define UNPACKFSC_UNSQUASHRUNNER_H

#include "Runners.h"

/** @brief Use Unsquash for extracting a filesystem
 *
 * NOTE: not implemented
 */
class UnsquashRunner : public Runner
{
public:
    using Runner::Runner;

    Calamares::JobResult run() override;
};

#endif
