class AUSPAT_CarrierLite_AMCU
{
    options[] = { "Camo", "Type" }; // Always computed, do not edit
    label = "Carrier Plates";
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "AMCU", "BLK", "BRN", "DPCU", "DPDU", "DPNU", "GRN", "TAN" }; // Always computed, do not edit
    };
    class Type
    {
        label = "Type";
        alwaysSelectable = 1;
        values[] = {"Lite" , "Rig"}; // Always computed, do not edit
    };
};