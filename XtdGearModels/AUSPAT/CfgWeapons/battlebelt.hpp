class AUSPAT_Belt_MG_AMCU
{
    options[] = { "Camo", "Type" }; // Always computed, do not edit
    label = "Battle Belt";
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "AMCU", "BLK", "BRN", "DPCU", "DPDU", "DPNU", "GRN", "TAN" }; // Always computed, do not edit
    };
    class Type
    {
        label = "Type";
        alwaysSelectable = 1;
        values[] = {"Gunner" , "Rifleman"}; // Always computed, do not edit
    };
};