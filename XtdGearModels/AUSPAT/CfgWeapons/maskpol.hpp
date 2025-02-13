class AUSPAT_MASKPOL
{
    options[] = { "Camo", "Type" }; // Always computed, do not edit
    label = "MASKPOL HP-05";
    class Camo
    {
        alwaysSelectable = 1;
        values[] = { "AMCU", "BLK", "BRN", "DPCU", "DPDU", "DPNU", "GRN", "TAN"  }; // Always computed, do not edit
    };
    class Type
    {
        label = "Type";
        alwaysSelectable = 1;
        values[] = { "Simple", "Enhanced" }; // Always computed, do not edit
    };
};
