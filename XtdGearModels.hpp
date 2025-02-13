class XtdGearModels {
    #include "XtdGearModels_Common.hpp"
    class CfgWeapons {
         #include "XtdGearModels\AUSPAT\CfgWeapons\AUSPAT_Boonie.hpp"
         #include "XtdGearModels\AUSPAT\CfgWeapons\AUSPAT_Cap.hpp"
         #include "XtdGearModels\AUSPAT\CfgWeapons\AUSPAT_CBRN.hpp"
         #include "XtdGearModels\AUSPAT\CfgWeapons\AUSPAT_ECWCS.hpp"
         #include "XtdGearModels\AUSPAT\CfgWeapons\AUSPAT_G3L.hpp"
         #include "XtdGearModels\AUSPAT\CfgWeapons\AUSPAT_G3R.hpp"
         #include "XtdGearModels\AUSPAT\CfgWeapons\AUSPAT_G3T.hpp"
         #include "XtdGearModels\AUSPAT\CfgWeapons\AUSPAT_RH.hpp"
         #include "XtdGearModels\AUSPAT\CfgWeapons\battlebelt.hpp"
         #include "XtdGearModels\AUSPAT\CfgWeapons\carrier.hpp"
         #include "XtdGearModels\AUSPAT\CfgWeapons\ciras.hpp"
         #include "XtdGearModels\AUSPAT\CfgWeapons\jpc.hpp"
         #include "XtdGearModels\AUSPAT\CfgWeapons\mmac.hpp"
         #include "XtdGearModels\AUSPAT\CfgWeapons\airframe.hpp"
         #include "XtdGearModels\AUSPAT\CfgWeapons\fast.hpp"
         #include "XtdGearModels\AUSPAT\CfgWeapons\batlskin.hpp"
         #include "XtdGearModels\AUSPAT\CfgWeapons\maskpol.hpp"
    };

    class CfgVehicles {
        #include "XtdGearModels/AUSPAT/CfgVehicles/assaultpack.hpp"
        #include "XtdGearModels/AUSPAT/CfgVehicles/bergenpack.hpp"
        #include "XtdGearModels/AUSPAT/CfgVehicles/breacherkit.hpp"
        #include "XtdGearModels/AUSPAT/CfgVehicles/carryall.hpp"
        #include "XtdGearModels/AUSPAT/CfgVehicles/hydro.hpp"
        #include "XtdGearModels/AUSPAT/CfgVehicles/kitbag.hpp"
        #include "XtdGearModels/AUSPAT/CfgVehicles/patrolpack.hpp"
        #include "XtdGearModels/AUSPAT/CfgVehicles/pointman.hpp"
        #include "XtdGearModels/AUSPAT/CfgVehicles/radiopack.hpp"
        #include "XtdGearModels/AUSPAT/CfgVehicles/scoutkit.hpp"
        #include "XtdGearModels/AUSPAT/CfgVehicles/tacticalpack.hpp"

    };
    class CamoBase{
        class AMCU
        {
            label = "AMCU";
            description = "Australian Multicam Camouflage Uniform";
            image = "P:\z\AUSPAT_ACEAX\data\camo\AMCU.paa";
        };

        class DPCU
        {
            label = "DPCU";
            description = "Disruptive Pattern Camouflage Uniform aka Auscam";
            image = "P:\z\AUSPAT_ACEAX\data\camo\DPCU.paa";
        };

        class DPDU
        {
            label = "DPDU";
            description = "Disruptive Pattern Desert Uniform aka Auscam";
            image = "P:\z\AUSPAT_ACEAX\data\camo\DPDU.paa";
        };

        class DPNU
        {
            label = "DPNU";
            description = "Disruptive Pattern Naval Uniform aka Auscam";
            image = "P:\z\AUSPAT_ACEAX\data\camo\DPNU.paa";
        };

        class BRN
        {
            label = "Coyote Brown";
            image="#(rgb,8,8,3)color(0.55,0.38,0.25,1)";
        };
    };
};
