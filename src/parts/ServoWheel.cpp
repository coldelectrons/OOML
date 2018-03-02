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

#include "ServoWheel.h"
#include "../components/Cylinder.h"
#include "../core/Difference.h"
#include "SimpleWheel.h"

Component ServoWheel::build()
{
  return get() // Get the SimpleWheel we inherit from
    - Cylinder(_servoRadius, _servoThickness + PART_MARGIN,50,false)
	 .translate(0, 0, getThickness() - (_servoThickness - PART_MARGIN));
}
