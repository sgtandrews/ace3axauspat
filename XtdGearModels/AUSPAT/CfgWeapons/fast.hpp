class AUSPAT_FAST
{
    options[] = { "Camo", "Type", "Cover" }; // Always computed, do not edit
    label = "FAST";
    class Camo
    {
        alwaysSelectable = 1;
        values[] = { "AMCU", "BLK", "BRN", "DPCU", "DPDU", "DPNU", "GRN", "TAN"  }; // Always computed, do not edit
    };
    class Type
    {
        label = "Type";
        alwaysSelectable = 1;
        values[] = { "1", "2", "3", "4", "5", "6" }; // Always computed, do not edit
    };
	class Cover
    {
        label = "Cover";
        alwaysSelectable = 1;
        values[] = { "No", "Yes" }; // Always computed, do not edit
    };
};
