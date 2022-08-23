#include "return_codes.h"

namespace binance {
    http_code parse_to_http_code (unsigned int code_int)
    {
        switch (code_int)
        {
        case 403:
            return waf_limit;
            break;
        case 409:
            return cancel_replace_partial;
            break;
        case 429:
            return break_request_rate_limit;
            break;
        case 418:
            return auto_ban;
            break;
        default:
            if(code_int >= 500)
                return internal_error;
            else
                return malformed;
            break;
        }
    }

    std::string code_description (http_code code)
    {
        switch (code)
        {
        case waf_limit:
            return "the WAF Limit (Web Application Firewall) has been violated";
            break;
        case cancel_replace_partial:
            return "cancelReplace order partially succeeded";
            break;
        case break_request_rate_limit:
            return "broke request rate limit";
            break;
        case auto_ban:
            return "IP has been auto-banned for continuing to send requests after receiving 429 codes";
            break;
        case internal_error:
            return "internal error";
            break;
        default:
            return "malformed request";
            break;
        }
    }
}