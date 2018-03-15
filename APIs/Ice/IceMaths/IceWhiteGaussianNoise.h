///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
 *	White Gaussian Noise
 *	\file		IceWhiteGaussianNoise.h
 *	\author		Pierre Terdiman
 *	\date		January, 29, 2000
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Include Guard
#ifndef ICEWHITEGAUSSIANNOISE_H
#define ICEWHITEGAUSSIANNOISE_H
	
	// White gaussian noise
	class ICEMATHS_API WhiteGaussianNoise
	{
		public:
			// Constructor/destructor
						WhiteGaussianNoise(udword nbsamples=4);
						~WhiteGaussianNoise();

			// The noise function
				float	Noise();

		private:
				udword	mNbSamples;
				float	mGaussAdd;
				float	mGaussFactor;
	};

#endif	// ICEWHITEGAUSSIANNOISE_H
