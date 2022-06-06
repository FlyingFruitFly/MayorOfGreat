#pragma once
#include <map>
#include "GameFramework/Character.h"

using std::map;
class BoneScale
{
	map<FString, float> m_bone_scale;

public:
	void setBoneScale(FString bone_name, float scale);
	float getBoneScale(FString bone_name);
};

