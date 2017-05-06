
class CfgWeapons {
    class ACE_ItemCore;
    class ACE_ItemInfo;

    class ACE_SpottingScope: ACE_ItemCore {
        scope = 2;
        displayName = CSTRING(DisplayName);
        descriptionShort = "";
        picture = QPATHTOF(UI\w_spottingscope_ca.paa);
        model = QPATHTOF(data\ace_spottingscope.p3d);

        class ItemInfo: ACE_ItemInfo {
            mass = 40;
        };
    };
};
