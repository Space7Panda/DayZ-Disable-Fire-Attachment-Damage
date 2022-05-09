class CfgPatches
{
    class DisableFireAttachmentDamage
    {
        requiredAddons[] =
            {
                "DZ_Data",
        };
    };
};

class CfgMods
{
    class DisableFireAttachmentDamage
    {
        type = "mod";
        name = "DisableFireAttachmentDamage";
        author = "Space7Panda";
        version = "1.0";

        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] = {"DisableFireAttachmentDamage/3_game"};
            };
        };
    };
};
