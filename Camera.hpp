#ifndef SOONER_IEEE_CAMERA_HPP
#define SOONER_IEEE_CAMERA_HPP

#include <stdio.h>
#include <vector>

class Camera {
	public:
		static vector<vector<short> > takePicture(void);
};

#endif