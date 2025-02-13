class AUSPAT_MMAC
{
    options[] = { "Camo", "Type" , "Belt"}; // Always computed, do not edit
    label = "MMAC";
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "AMCU", "BLK", "BRN", "DPCU", "DPDU", "DPNU", "GRN", "TAN" }; // Always computed, do not edit
    };
    class Type
    {
        label = "Type";
        alwaysSelectable = 1;
        values[] = {"Grenadier" , "Gunner", "Marksman", "Medic","Rifleman","Team Lead", "Light"}; // Always computed, do not edit
    };

    class Belt 
    {
        label = "Belt";
        alwaysSelectable = 1;
        values[] = {"Yes", "No"}; // Always computed, do not edit
    };
};