/*
SmartLaunch: multi-function app launcher.
Copyright (C) 2017 Samson Wang

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "Common/CommonDef.h"

#include <QString>

#ifndef SMARTLAUNCH_UTILITIES_CATALOGITEM_H
#define SMARTLAUNCH_UTILITIES_CATALOGITEM_H

namespace smartlaunch
{
namespace utilities
{

class SL_EXPORT CatalogItem
{
public:  
  QString name_;

  QString fullPath_;

public:
  CatalogItem(const QString& name);
  CatalogItem();



};



} // namespace utilities
} // namespace smartlaunch

#endif // SMARTLAUNCH_UTILITIES_CATALOGITEM_H
