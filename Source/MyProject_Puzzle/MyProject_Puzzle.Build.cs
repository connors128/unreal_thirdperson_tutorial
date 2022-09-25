// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyProject_Puzzle : ModuleRules
{
	public MyProject_Puzzle(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
