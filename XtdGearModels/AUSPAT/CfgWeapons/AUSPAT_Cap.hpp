class AUSPAT_Cap
{
    options[] = { "camo" , "Headset"}; // Always computed, do not edit
    label = "[AuCEP] Cap";
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "AMCU", "BLK", "BRN", "DPCU", "DPDU", "DPNU", "GRN", "TAN" }; // Always computed, do not edit
    };

     class Headset
    {
        label = "Headset";
        alwaysSelectable = 1;
        values[] = { "No", "Yes", "Peltor" }; // Always computed, do not edit
    };
};
