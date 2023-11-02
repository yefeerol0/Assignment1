// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class BirdOfPreyTarget : TargetRules
{
	public BirdOfPreyTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V3;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_2;

        ExtraModuleNames.AddRange( new string[] { "BirdOfPrey" } );
	}
}
