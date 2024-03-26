/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase()
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X272_WAVY_LINES_ID));
    scalableImage1.setPosition(0, 0, 480, 272);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(scalableImage1);

    lightON.setXY(13, 67);
    lightON.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUND_MEDIUM_OUTLINE_ACTIVE_ID));
    lightON.setVisible(false);
    add(lightON);

    textArea1voltage.setXY(28, 44);
    textArea1voltage.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1voltage.setLinespacing(0);
    Unicode::snprintf(textArea1voltageBuffer, TEXTAREA1VOLTAGE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_2P1M).getText());
    textArea1voltage.setWildcard(textArea1voltageBuffer);
    textArea1voltage.resizeToCurrentText();
    textArea1voltage.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3L49));
    add(textArea1voltage);

    textArea2current.setXY(24, 112);
    textArea2current.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2current.setLinespacing(0);
    Unicode::snprintf(textArea2currentBuffer, TEXTAREA2CURRENT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_ZPBN).getText());
    textArea2current.setWildcard(textArea2currentBuffer);
    textArea2current.resizeToCurrentText();
    textArea2current.setTypedText(touchgfx::TypedText(T___SINGLEUSE_X1JV));
    add(textArea2current);

    textArea2current_1.setXY(24, 169);
    textArea2current_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2current_1.setLinespacing(0);
    Unicode::snprintf(textArea2current_1Buffer, TEXTAREA2CURRENT_1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_4V2Z).getText());
    textArea2current_1.setWildcard(textArea2current_1Buffer);
    textArea2current_1.resizeToCurrentText();
    textArea2current_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_QFAQ));
    add(textArea2current_1);

    textProgress1.setXY(265, 111);
    textProgress1.setProgressIndicatorPosition(12, 10, 150, 30);
    textProgress1.setRange(0, 100);
    textProgress1.setColor(touchgfx::Color::getColorFromRGB(12, 27, 55));
    textProgress1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6KNV));
    textProgress1.setBackground(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_TEXTPROGRESS_BACKGROUNDS_ROUNDED_DARK_ID));
    textProgress1.setValue(60);
    add(textProgress1);
}

Screen1ViewBase::~Screen1ViewBase()
{

}

void Screen1ViewBase::setupScreen()
{

}