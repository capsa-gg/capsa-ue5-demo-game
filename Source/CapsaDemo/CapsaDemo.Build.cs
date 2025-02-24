// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CapsaDemo : ModuleRules
{
	public CapsaDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "CapsaCore", "Core", "CoreUObject", "Engine", "HTTP", "InputCore", "EnhancedInput" });
	}
}
