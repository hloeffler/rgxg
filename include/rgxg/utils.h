/* rgxg - ReGular eXpression Generator
 *
 * Copyright (c) 2013 Hannes von Haugwitz
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute
 * it freely, subject to the following restrictions:
 *
 *     1. The origin of this software must not be misrepresented; you
 *     must not claim that you wrote the original software. If you use
 *     this software in a product, an acknowledgment in the product
 *     documentation would be appreciated but is not required.
 *
 *     2. Altered source versions must be plainly marked as such, and
 *     must not be misrepresented as being the original software.
 *
 *     3. This notice may not be removed or altered from any source
 *     distribution.
 */

#ifndef _RGXG_UTILS_H_INCLUDED
#define _RGXG_UTILS_H_INCLUDED

/* needed for rgxg_options_t */
#include "types.h"

/* needed for size_t */
#include <stddef.h>

extern int rgxg_utils_escape_string (const char *src, size_t size,
        char *regex, rgxg_options_t options);

extern int rgxg_utils_alternation (const char **patterns, size_t size,
        char *regex, rgxg_options_t options);

#endif /* _RGXG_UTILS_H_INCLUDED */
