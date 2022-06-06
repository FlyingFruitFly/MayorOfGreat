// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MayorOfGreat : ModuleRules
{
	public MayorOfGreat(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG" });
	}
}
