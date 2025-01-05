using UnrealBuildTool;

public class DreamGameplayTaskEditor : ModuleRules
{
    public DreamGameplayTaskEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "Projects",
                "DreamGameplayTask",
                "AssetTools",
                "AssetRegistry",
                "ContentBrowser",
                "UnrealEd",
                "DeveloperSettings",
                "InputCore"
            }
        );
    }
}