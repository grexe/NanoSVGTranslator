/*
 * Copyright 2015-2018, Gerasim Troeglazov, 3dEyes@gmail.com. All rights reserved.
 * Distributed under the terms of the MIT License.
 */


#ifndef SVG_TRANSLATOR_H
#define SVG_TRANSLATOR_H


#include "BaseTranslator.h"

#include <Translator.h>
#include <TranslatorFormats.h>
#include <TranslationDefs.h>
#include <GraphicsDefs.h>
#include <InterfaceDefs.h>
#include <DataIO.h>
#include <File.h>
#include <ByteOrder.h>

#define SVG_TRANSLATOR_VERSION B_TRANSLATION_MAKE_VERSION(1, 0, 5)
#define SVG_IMAGE_FORMAT	'SVG '

#define SVG_IN_QUALITY		0.5
#define SVG_IN_CAPABILITY	0.5

#define BITS_OUT_QUALITY	1
#define BITS_OUT_CAPABILITY	0.9

class SVGTranslator : public BaseTranslator {
	public:
		SVGTranslator();

		virtual status_t DerivedIdentify(BPositionIO *inSource,
			const translation_format *inFormat, BMessage *ioExtension,
			translator_info *outInfo, uint32 outType);

		virtual status_t DerivedTranslate(BPositionIO *inSource,
			const translator_info *inInfo, BMessage *ioExtension,
			uint32 outType, BPositionIO *outDestination, int32 baseType);

		virtual status_t DerivedCanHandleImageSize(float width,
			float height) const;

		virtual BView *NewConfigView(TranslatorSettings *settings);	

	protected:
		virtual ~SVGTranslator();
};

#endif	/* SVG_TRANSLATOR_H */
