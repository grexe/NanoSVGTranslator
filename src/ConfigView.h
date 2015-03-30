/*
 * Copyright 2015, Gerasim Troeglazov, 3dEyes@gmail.com. All rights reserved.
 * Distributed under the terms of the MIT License.
 */


#ifndef CONFIG_VIEW_H
#define CONFIG_VIEW_H

#include "TranslatorSettings.h"

#include <View.h>
#include <TextView.h>
#include <String.h>
#include <GroupView.h>
#include <CheckBox.h>
#include <Slider.h>

#define SVG_SETTING_SCALE "svg/scale"

class ConfigView : public BGroupView {
	public:
		ConfigView(TranslatorSettings *settings);
		virtual ~ConfigView();
		
		virtual void AllAttached();
		virtual void MessageReceived(BMessage* message);

	private:
		BSlider*			fScaleSlider;
		BTextView*			fCopyrightView;
		TranslatorSettings *fSettings;
};

#endif	// CONFIG_VIEW_H
