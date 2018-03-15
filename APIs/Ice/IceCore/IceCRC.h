///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
 *	Contains CRC code.
 *	\file		IceCRC.h
 *	\author		Unknown
 *	\date		Unknown
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Include Guard
#ifndef ICECRC_H
#define ICECRC_H

	FUNCTION ICECORE_API udword	Crc16(ubyte* buf, udword nbbytes);
	FUNCTION ICECORE_API void	Crc32(ubyte c, udword* crc);

#endif // ICECRC_H