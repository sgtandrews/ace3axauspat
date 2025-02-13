class AUSPAT_BATLSKIN
{
    options[] = { "Camo", "Type" }; // Always computed, do not edit
    label = "Batlskin Cobra";
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
