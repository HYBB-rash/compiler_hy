%{
#include <string>
#include <../include/tokens.h>
#include <../include/utils.h>

%}

%%
(f|F)(o|O)(r|R)	{printToken(get_for_token());}

