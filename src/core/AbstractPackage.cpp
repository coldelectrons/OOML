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

#include "AbstractPackage.h"
#include "IndentWriter.h"

#include <fstream>
#include <string>

void AbstractPackage::genScadFiles() const
{
	for (Map::const_iterator it = _children.begin(); it != _children.end();
			 ++it)
	{
		std::ofstream fd(std::string(it->first + ".scad").c_str());
		if (fd)
		{
			IndentWriter writer;
			writer << it->second;
			fd << writer;
			fd.close();
		}
	}
}
