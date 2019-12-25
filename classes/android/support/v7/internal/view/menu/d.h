#pragma once

//========================================================================
// This conversion was produced by the Free Edition of
// Java to C++ Converter courtesy of Tangible Software Solutions.
// Order the Premium Edition at https://www.tangiblesoftwaresolutions.com
//========================================================================

#include "../b.h"
#include "b.h"
#include <stdexcept>

namespace android
{
	namespace support
	{
		namespace v7
		{
			namespace internal_Renamed
			{
				namespace view
				{
					namespace menu
					{

						template<typename T>
						class d : public Object
						{
					  public:
						  const T b;

						  d(T paramT) : b(paramT)
						  {
							if (paramT == nullptr)
							{
							  throw std::invalid_argument("Wrapped Object can not be null.");
							}
						  }
						};


						/* Location:              C:\Users\Clayton\Desktop\IrataJag\dex2jar-2.0\classes-dex2jar.jar!\android\support\v7\internal\view\menu\d.class
						 * Java compiler version: 6 (50.0)
						 * JD-Core Version:       1.0.7
						 */
					}
				}
			}
		}
	}
}
