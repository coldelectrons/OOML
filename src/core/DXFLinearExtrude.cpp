﻿/*
*    OOML : Object Oriented Mechanics Library
*    Copyright (C) 2012  Alberto Valero Gomez, Juan González Gómez, Rafael Treviño
*
*    This program is free software: you can redistribute it and/or modify
*    it under the terms of the GNU Lesser General Public License (LGPL) as published by
*    the Free Software Foundation, either version 3 of the License, or
*    (at your option) any later version.
*
*    This program is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU Lesser General Public License (LGPL) for more details.
*
*    You should have received a copy of the GNU Lesser General Public License (LGPL)
*    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*/

#include "DXFLinearExtrude.h"
#include "IndentWriter.h"

void DXFLinearExtrude::genScad(IndentWriter& writer) const
{
  writer << "linear_extrude(height=" << _height << ", twist=" << _twist << ", $fn=" << _faces << ", convexity=" << _convexity << ", center=" << _center << "){import (\""<< _DXFFilename <<"\");}" << std::endl;
}

void DXFLinearExtrude::printAst(IndentWriter& writer) const
{
  writer << "// LINEAR_EXTRUDE("<< _height << ", " << _twist << ", " << _faces << ", " << _convexity << ", " << _center << "){" << _DXFFilename << "};" << std::endl;
}
