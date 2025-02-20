// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class CapsaDemoServerTarget : TargetRules
{
	public CapsaDemoServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;
		ExtraModuleNames.Add("CapsaDemo");
		
		bUseLoggingInShipping = true;
		BuildEnvironment = TargetBuildEnvironment.Unique;
	}
}