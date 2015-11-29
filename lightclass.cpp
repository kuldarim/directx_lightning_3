////////////////////////////////////////////////////////////////////////////////
// Filename: lightclass.cpp
////////////////////////////////////////////////////////////////////////////////
#include "lightclass.h"


LightClass::LightClass()
{
	//m_LightColorBuffer.myLightPosition = D3DXVECTOR4(0,10,0,0);
	//m_LightColorBuffer.myLightDifuseColor = D3DXVECTOR4(1,1,1,1);
	//m_LightColorBuffer.myLightAmbientColor = D3DXVECTOR4(0.3f, 0.3f, 0.3f, 1.0f);
	//m_LightColorBuffer.myLightAtt = D3DXVECTOR4(0.1f, 0.02f, 0.0f,0);
	//m_LightColorBuffer.myLightDir = D3DXVECTOR4(-0.3f, -1.0f, 0.0f,0);
	//m_LightColorBuffer.myLightCone = D3DXVECTOR4(30.0f,0,0,0);
	//m_LightColorBuffer.myLightRange = D3DXVECTOR4(1000.0f,0,0,0);
}


LightClass::LightClass(const LightClass& other)
{
}


LightClass::~LightClass()
{
}

void LightClass::SetLightPosition(float x, float y, float z)
{
	m_LightColorBuffer.myLightPosition = D3DXVECTOR3(x, y, z);
	return;
}


void LightClass::SetLightDiffuseColor(float red, float green, float blue, float alpha)
{
	m_LightColorBuffer.myLightDifuseColor = D3DXVECTOR4(red, green, blue, alpha);
	return;
}

void LightClass::SetLightAmbient(float r, float g, float b, float a)
{
	m_LightColorBuffer.myLightAmbientColor = D3DXVECTOR4(r,g,b,a);
	return;
}

void LightClass::SetLightAtt(float r,float g,float b)
{
	m_LightColorBuffer.myLightAtt = D3DXVECTOR3(r,g,b);
	return;
}

void LightClass::SetLightDir(float x, float y, float z)
{
	m_LightColorBuffer.myLightDir = D3DXVECTOR3(x,y,z);
	return;
}

void LightClass::SetLightCone(float cone)
{
	m_LightColorBuffer.myLightCone = cone;
	return;
}

void LightClass::SetLightRange(float range)
{
	m_LightColorBuffer.myLightRange =range;
	return;
}

//
//void LightClass::SetLightDir(float x, float y, float z)
//{
//	m_LightColorBuffer.myLightAmbientColor = D3DXVECTOR4(x, y, z, 0);
//	return;
//}
//
//void LightClass::SetLightCone(float cone)
//{
//	m_LightColorBuffer.myLightAmbientColor = D3DXVECTOR4(cone, 0, 0, 0);
//	return;
//}
//
//void LightClass::SetLightRange(float range)
//{
//	m_LightColorBuffer.myLightAmbientColor = D3DXVECTOR4(range, 0, 0, 0);
//	return;
//}
//
LightColorBufferType LightClass::GetLightColorBuffer()
{
	return m_LightColorBuffer;
}







