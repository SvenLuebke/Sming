/****
 * Sming Framework Project - Open Source framework for high efficiency native ESP8266 development.
 * Created 2015 by Skurydin Alexey
 * http://github.com/SmingHub/Sming
 * All files of the Sming Core are provided under the LGPL v3 license.
 *
 * @author Slavey Karadzhov <slaff@attachix.com>
 *
 ****/

#ifndef _SMING_CORE_DATA_QUOTED_PRINTABLE_OUTPUT_STREAM_H_
#define _SMING_CORE_DATA_QUOTED_PRINTABLE_OUTPUT_STREAM_H_

#include "../StreamTransformer.h"

/**
 * @brief      Quoted-Printable Stream
 * @ingroup    stream data
 *
 *  @{
*/

class QuotedPrintableOutputStream : public StreamTransformer
{
public:
	/**
	 * @brief Stream that transforms bytes of data into quoted printable data stream
	 * @param stream source stream
	 * @param resultSize The size of the intermediate buffer, created once per object and reused multiple times
	 */
	QuotedPrintableOutputStream(IDataSourceStream* stream, size_t resultSize = 512);
};

/** @} */
#endif /* _SMING_CORE_DATA_QUOTED_PRINTABLE_OUTPUT_STREAM_H_ */
