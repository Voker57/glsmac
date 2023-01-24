#pragma once

// callback-based request-response API
// use to communicate across threads

#include "base/Base.h"

#include <functional>

namespace types {

template< typename REQUESTDATATYPE, typename RESPONSEDATATYPE >
CLASS( ThreadCall, base::Base )
	
	typedef function<RESPONSEDATATYPE(REQUESTDATATYPE data)> threadcall_func_t;
//ThreadCall( threadcall_func_t)

	void SetRequest( REQUESTDATATYPE );
	bool IsExecuted() const;
	const RESPONSEDATATYPE GetResponse() const;

private:
	bool m_is_executed = false;
	
	const REQUESTDATATYPE m_request;
	RESPONSEDATATYPE m_response;
	
};

}
