Signals
===============================================================================

This library contains common signal filtering algorithms written in C, with  an 
emphasis on firmware development. This emphasis includes a small footprint,
minimal size of local variables and parameters, and quick execution.

The intended usage is for reducing noise on analog input signals acquired by
software. The intended target is PIC microcontrollers, specifically within the
PIC18/24/32 series.

Algorithms
-------------------------------------------------------------------------------
The following algorithms will be implemented by this library:

Noise reduction:
* Savitsky-Golay filter
* Innerquartile range
* Rolling average
* Xbar and R
* Dynamic range compression

Sorting:
* Selection sort
* Insertion sort
* Shell sort
* Mergesort
* Quicksort
* Heapsort

License
-------------------------------------------------------------------------------
Copyright (C) 2013 Steve Phillips

This program is free software; you can redistribute it and/or modify it under 
the terms of the GNU General Public License as published by the Free Software 
Foundation; either version 2 of the License, or (at your option) any later 
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY 
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR 
A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with 
this program; if not, write to the Free Software Foundation, Inc., 51 Franklin 
Street, Fifth Floor, Boston, MA  02110-1301, USA.