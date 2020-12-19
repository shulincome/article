#pragma once

const double G_PI = 3.1415926535897932384626;
const double G_DEG2RAD = 0.0174532925199433;   // �Ƕ�ת���ȵ�ϵ�� = PI / 180
const double G_RAD2DEG = 57.2957795130824;   // ����ת�Ƕȵ�ϵ�� = 180 / PI 

//const double c_nTolerance = 1e-9;
const double G_TOLERANCE = 1e-3;   // FAGO: �ݲ�1e-9�е�̫С, �жϵ㡢���ཻ���ݲͨ����ת�任����ݲ���Ҫ��΢��һЩ

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

