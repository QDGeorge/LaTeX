#ifndef FRAC_COMPLEX_HPP
#define FRAC_COMPLEX_HPP

#include "fractions.hpp"

/// Çàãîëîâî÷íûé ôàéë äëÿ ðàöèîíàëüíûõ êîìïëåêñíûõ ÷èñåë
/// Îïèñàíèå òèïà ñòðóêòóðû FractionComplex
/// îáúÿâëåíèÿ ôóíêöèé ðàáîòû ñ ðàö.êîìïëåêñíûìè ÷èñëàìè

struct FractionComplex
{
    Fraction re; /// äåéñòâèòåëüíàÿ ÷àñòü
    Fraction im; /// ìíèìàÿ ÷àñòü
};

FractionComplex fraction_complex_plus(FractionComplex self,
                                      FractionComplex other);

void fraction_complex_print(FractionComplex a);

#endif