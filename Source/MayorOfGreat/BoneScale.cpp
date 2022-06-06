#include "BoneScale.h"

void BoneScale::setBoneScale(FString bone_name, float scale)
{
	m_bone_scale[bone_name]= scale;
}

float BoneScale::getBoneScale(FString bone_name)
{
	auto scale_iter = m_bone_scale.find(bone_name);
	if (scale_iter == m_bone_scale.end())
		return 1.0f;
	else
		return scale_iter->second;
}
