#include <stdio.h>
#include <string.h>
#include "wasm/runtime/pinvoke.h"
#include "generated-pinvokes.h"

void*
wasm_dl_lookup_pinvoke_table (const char *name)
{
	for (int i = 0; i < pinvoke_tables_len; ++i) {
		if (!strcmp (name, pinvoke_names [i]))
			return pinvoke_tables [i];
	}
	return NULL;
}
