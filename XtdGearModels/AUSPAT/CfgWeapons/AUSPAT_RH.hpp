class AUSPAT_RH
{
    options[] = { "camo", "Type" }; // Always computed, do not edit
    label = "[AuCEP] Opscore FAST";
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "AMCU", "BLK", "BRN", "DPCU", "DPDU", "DPNU", "GRN", "TAN" }; // Always computed, do not edit
    };

    class Type
    {
        label = "Type";
        alwaysSelectable = 1;
        values[] = { "Simple", "Enhanced" }; // Always computed, do not edit
    };
};
