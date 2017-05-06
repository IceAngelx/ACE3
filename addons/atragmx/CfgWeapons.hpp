
class CfgWeapons {
    class ACE_ItemCore;
    class ACE_ItemInfo;

    class ACE_ATragMX: ACE_ItemCore {
        author = "Ruthberg";
        scope = 2;
        displayName = CSTRING(Name);
        descriptionShort = CSTRING(Description);
        model = QPATHTOF(data\tdsrecon.p3d);
        picture = QPATHTOF(UI\ATRAG_Icon.paa);
        icon = "iconObject_circle";
        mapSize = 0.034;

        class ItemInfo: ACE_ItemInfo {
            mass = 2;
        };
    };
};
