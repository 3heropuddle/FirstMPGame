// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FirstMPGame : ModuleRules
{
	public FirstMPGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
