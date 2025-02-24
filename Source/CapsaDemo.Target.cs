// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class CapsaDemoTarget : TargetRules
{
	public CapsaDemoTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;
		ExtraModuleNames.Add("CapsaDemo");
		
		bUseLoggingInShipping = true;
		BuildEnvironment = TargetBuildEnvironment.Unique;
		GlobalDefinitions.Add("WITH_CAPSA_LOG_ENABLED=1");
	}
}
