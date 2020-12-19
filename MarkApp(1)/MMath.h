#pragma once

const double G_PI = 3.1415926535897932384626;
const double G_DEG2RAD = 0.0174532925199433;   // 角度转弧度的系数 = PI / 180
const double G_RAD2DEG = 57.2957795130824;   // 弧度转角度的系数 = 180 / PI 

//const double c_nTolerance = 1e-9;
const double G_TOLERANCE = 1e-3;   // FAGO: 容差1e-9有点太小, 判断点、线相交的容差。通过旋转变换后的容差需要稍微大一些

#define DOUBLE_GREAT(nX_, nY_)		((nX_) > (nY_) + G_TOLERANCE)
#define DOUBLE_LESS(nX_, nY_)		((nX_) < (nY_) - G_TOLERANCE)
#define DOUBLE_EQU(nX_, nY_)		(!DOUBLE_GREAT(nX_, nY_) && !DOUBLE_LESS(nX_, nY_))
#define DOUBLE_GREAT_ZERO(nX_)		DOUBLE_GREAT((nX_), 0.0)
#define DOUBLE_LESS_ZERO(nX_)		DOUBLE_LESS((nX_), 0.0)
#define DOUBLE_EQU_ZERO(nX_)		DOUBLE_EQU((nX_), 0.0)
#define DOUBLE_GE_ZERO(nX_)			(!DOUBLE_LESS_ZERO(nX_))
#define DOUBLE_LE_ZERO(nX_)			(!DOUBLE_GREAT_ZERO(nX_))
#define DOUBLE_NOT_ZERO(nX_)		(!DOUBLE_EQU_ZERO(nX_))


class MMath
{
public:
	MMath();
	~MMath();


};

