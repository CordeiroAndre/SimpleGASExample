// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class SinglePlayerGasDemo : ModuleRules
{
	public SinglePlayerGasDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore",  "GameplayTags", "GameplayTasks", "GameplayAbilities" });

	}
}
