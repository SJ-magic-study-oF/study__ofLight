/************************************************************
************************************************************/

#pragma once

#include "ofMain.h"

/**************************************************
**************************************************/
class INIT_PARAM{
	private:
	
	public:	
		INIT_PARAM()
		{
		}
		
		float SphereRadius()			{ return 100; }
		float SphereResolution()		{ return 300; }
		
		ofColor spotColor_diffuse()		{ return ofColor(255, 0, 0, 255); }
		ofColor spotColor_specular()	{ return ofColor(0, 0, 255, 255); }
		ofVec3f spot_position()			{ return ofVec3f(0, 0, 300); }
		ofVec3f spot_orientation()		{ return ofVec3f(0, 0, 0); }

		float spotCutOff()				{ return 5.0; }
		float spotConcentration()		{ return 10.0; }
		
		bool b_lookAt()					{ return false; }
		ofVec3f position_lootAt()		{ return ofVec3f(0, 0, 0); }
		
		float attenuation_constant()	{ return 1.0; }
		float attenuation_linear()		{ return 0.0; }
		float attenuation_quadratic()	{ return 0.0; }
		
		ofColor dirColor_diffuse()		{ return ofColor(0, 0, 255, 255); }
		ofColor dirColor_specular()		{ return ofColor(255, 0, 0, 255); }
		ofVec3f dir_position()			{ return ofVec3f(300, 0, 0); }
		// ofVec3f dir_orientation()		{ return ofVec3f(0, -90, 0); }
		ofVec3f dir_orientation()		{ return ofVec3f(0, 0, 0); }
		
		ofColor pointColor_diffuse()	{ return ofColor(0, 255, 0, 255); }
		ofColor pointColor_specular()	{ return ofColor(255, 0, 0, 255); }
		ofVec3f point_position()		{ return ofVec3f(0, 300, 0); }
		
		ofColor AmbientColor()			{ return ofColor(20, 20, 20, 20); }

		float material_shine()			{ return 120; }
		ofColor material_diffuse()		{ return ofColor(255, 255, 255, 255); }
		ofColor material_emissive()		{ return ofColor(0, 0, 0, 255); }
		ofColor material_specular()		{ return ofColor(255,255, 255, 255); }
		ofColor material_noLight()		{ return ofColor(255,0, 0, 255); }
};
