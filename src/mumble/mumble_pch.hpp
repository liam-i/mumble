// Copyright 2008-2022 The Mumble Developers. All rights reserved.
// Use of this source code is governed by a BSD-style license
// that can be found in the LICENSE file at the root of the
// Mumble source tree or at <https://www.mumble.info/LICENSE>.

#ifndef Q_MOC_RUN
#	ifndef MUMBLE_MUMBLE_MUMBLE_PCH_H_
#		define MUMBLE_MUMBLE_MUMBLE_PCH_H_

#		define QT_NO_CAST_TO_ASCII
#		define QT_NO_CAST_FROM_ASCII
#		define QT_USE_FAST_CONCATENATION
#		define QT_USE_FAST_OPERATOR_PLUS

#		include <QtCore/QtGlobal>

#		ifdef Q_OS_WIN
#			include "win.h"
#		endif

#		define BOOST_TYPEOF_SUPPRESS_UNNAMED_NAMESPACE

#		ifdef __APPLE__
#			include <ApplicationServices/ApplicationServices.h>
#			include <Carbon/Carbon.h>
#			include <CoreFoundation/CoreFoundation.h>
#			undef nil
#			undef check
#			undef TYPE_BOOL
#		endif

#		include <QtCore/QtCore>
#		include <QtGui/QtGui>
#		include <QtWidgets/QtWidgets>

#		include <QtSvg/QtSvg>
#		ifdef USE_DBUS
#			include <QtDBus/QtDBus>
#		endif
#		include <QtNetwork/QtNetwork>
#		include <QtSql/QtSql>
#		include <QtXml/QtXml>

#		ifdef Q_OS_WIN
#			define ENABLE_SNDFILE_WINDOWS_PROTOTYPES 1
#		endif
#		include <celt.h>
#		include <sndfile.h>
#		include <speex/speex.h>
#		include <speex/speex_echo.h>
#		include <speex/speex_jitter.h>
#		include <speex/speex_preprocess.h>
#		include <speex/speex_resampler.h>

#		include <boost/accumulators/accumulators.hpp>
#		include <boost/accumulators/statistics/extended_p_square.hpp>
#		include <boost/accumulators/statistics/mean.hpp>
#		include <boost/accumulators/statistics/stats.hpp>
#		include <boost/accumulators/statistics/variance.hpp>
#		include <boost/array.hpp>
#		include <boost/bind.hpp>
#		include <boost/enable_shared_from_this.hpp>
#		include <boost/make_shared.hpp>
#		include <boost/scoped_array.hpp>
#		include <boost/scoped_ptr.hpp>
#		include <boost/shared_array.hpp>
#		include <boost/shared_ptr.hpp>
#		include <boost/typeof/typeof.hpp>
#		include <boost/weak_ptr.hpp>

#		include <algorithm>
#		include <cmath>

#		ifdef Q_OS_WIN
#			include <dbt.h>
#			include <delayimp.h>
#			include <mmreg.h>
#			include <psapi.h>
#			include <qos2.h>
#			include <shellapi.h>
#			include <shlobj.h>
#			include <softpub.h>
#			include <tlhelp32.h>
#			include <wintrust.h>
#			include <ws2tcpip.h>
#		else // ifndef Q_OS_WIN
#			include <arpa/inet.h>
#			include <netinet/in.h>
#			include <netinet/tcp.h>
#			include <sys/socket.h>
#			include <sys/types.h>
#		endif

#		if !defined(Q_OS_OPENBSD) && (defined(__MMX__) || defined(Q_OS_WIN))
#			include <mmintrin.h>
#		endif

#		ifdef USE_ZEROCONF
#			include <dns_sd.h>
#		endif

#		ifdef __OBJC__
#			define nil 0
#		endif

#		include <openssl/aes.h>
#		include <openssl/conf.h>
#		include <openssl/pem.h>
#		include <openssl/pkcs12.h>
#		include <openssl/rand.h>
#		include <openssl/ssl.h>
#		include <openssl/x509v3.h>
/* OpenSSL defines set_key. This breaks our protobuf-generated setters. */
#		undef set_key

#	endif
#endif
