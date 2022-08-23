#ifndef _RETURN_CODES_H_
#define _RETURN_CODES_H_

#include<string>

namespace binance 
{
    enum http_code
    {
        malformed,
        waf_limit,
        cancel_replace_partial,
        break_request_rate_limit,
        auto_ban,
        internal_error
    };

    http_code parse_to_http_code (unsigned int);

    std::string code_description (http_code);

}

#endif