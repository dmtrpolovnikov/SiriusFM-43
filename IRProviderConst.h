#pragma once

#include "IRProvider.h"
#include <iostream>

namespace SiriusFM 
{
	template <>
	class IRProvider <IRModeE::Const> 
	{
		double m_IRs[int(CcyE::N)];
		
	public:
	
		IRProvider (const char* a_file);
		double r(CcyE a_ccy, double a_t) const
		{
			return m_IRs[int(a_ccy)];
		};	
	};
};


