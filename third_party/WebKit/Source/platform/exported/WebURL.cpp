/*
 * Copyright (C) 2009 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "public/platform/WebURL.h"

#include "platform/weborigin/KURL.h"

namespace blink {

WebURL::WebURL(const KURL& url)
    : m_string(url.string())
   // , m_parsed(url.parsed())
    , m_isValid(url.isValid())
{
}

WebURL& WebURL::operator=(const KURL& url)
{
    m_string = url.string();
    //m_parsed = url.parsed();
    m_isValid = url.isValid();
    return *this;
}

WebURL::operator KURL() const
{
#ifdef MINIBLINK_NOT_IMPLEMENTED
    return KURL(m_string, m_parsed, m_isValid);
#endif // MINIBLINK_NOT_IMPLEMENTED
	return KURL(ParsedURLString, (String)m_string);
}

WebURL::WebURL(const WebString& str)
{
    m_string = str;
    KURL url(ParsedURLString, (String)m_string);
    m_isValid = url.isValid();
}

bool WebURL::schemeIsHTTPOrHTTPS() const
{
    KURL url(ParsedURLString, (String)m_string);
    return (url.protocolIsInHTTPFamily());
}

std::string WebURL::getOrigin() const
{
    KURL url(ParsedURLString, (String)m_string);
    if (!url.isValid())
        return "";

    String origin = url.protocol();
    origin.append(url.host());
    origin.append(String::format("%d", url.port()));
    return std::string(origin.utf8().data());
}

} // namespace blink
