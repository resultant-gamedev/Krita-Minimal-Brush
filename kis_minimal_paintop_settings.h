/*
 *  Copyright (c) YEAR YOUR_NAME <YOUR_EMAIL>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef KIS_MINIMAL_PAINTOP_SETTINGS_H_
#define KIS_MINIMAL_PAINTOP_SETTINGS_H_

#include <kis_paintop_settings.h>
#include <kis_brush_based_paintop_settings.h>
#include <kis_types.h>

#include <opengl/kis_opengl.h>

#if defined(_WIN32) || defined(_WIN64)
# include <windows.h>
#endif

class KisMinimalPaintOpSettings : public KisBrushBasedPaintOpSettings
{

public:
    KisMinimalPaintOpSettings();
    virtual ~KisMinimalPaintOpSettings() {}

#if defined(HAVE_OPENGL)
    QString modelName() const;
#endif

};

#endif
