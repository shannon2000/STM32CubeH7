/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/WasherContainerBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

WasherContainerBase::WasherContainerBase() :
    buttonCallback(this, &WasherContainerBase::buttonCallbackHandler),
    updateItemCallback(this, &WasherContainerBase::updateItemCallbackHandler)
{
    setWidth(480);
    setHeight(272);

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));

    imageGreyCenter.setXY(120, 16);
    imageGreyCenter.setBitmap(touchgfx::Bitmap(BITMAP_BACK_CENTER_GRAY_ID));

    bottombar.setXY(5, 196);
    bottombar.setBitmap(touchgfx::Bitmap(BITMAP_BOTTOM_BAR_ID));

    topbar.setXY(0, 0);
    topbar.setBitmap(touchgfx::Bitmap(BITMAP_TOP_BAR_ID));

    washerWheel.setPosition(50, 85, 382, 100);
    washerWheel.setHorizontal(true);
    washerWheel.setCircular(true);
    washerWheel.setEasingEquation(touchgfx::EasingEquations::backEaseOut);
    washerWheel.setSwipeAcceleration(10);
    washerWheel.setDragAcceleration(10);
    washerWheel.setNumberOfItems(7);
    washerWheel.setSelectedItemOffset(117);
    washerWheel.setSelectedItemExtraSize(1, 0);
    washerWheel.setSelectedItemMargin(5, 0);
    washerWheel.setDrawableSize(100, 23);
    washerWheel.setDrawables(washerWheelListItems, updateItemCallback,
                              washerWheelSelectedListItems, updateItemCallback);
    washerWheel.animateToItem(0, 0);

    imageWhiteCenter.setXY(150, 45);
    imageWhiteCenter.setBitmap(touchgfx::Bitmap(BITMAP_BACK_CENTER_WHITE_ID));

    leftShade.setXY(0, 61);
    leftShade.setBitmap(touchgfx::Bitmap(BITMAP_SIDE_GRADIENT_LEFT_ID));

    rightShade.setXY(432, 61);
    rightShade.setBitmap(touchgfx::Bitmap(BITMAP_SIDE_GRADIENT_RIGHT_ID));

    leftButton.setXY(0, 112);
    leftButton.setBitmaps(touchgfx::Bitmap(BITMAP_LEFT_ARROW_ID), touchgfx::Bitmap(BITMAP_LEFT_ARROW_ID));
    leftButton.setAction(buttonCallback);

    rightButton.setXY(440, 112);
    rightButton.setBitmaps(touchgfx::Bitmap(BITMAP_RIGHT_ARROW_ID), touchgfx::Bitmap(BITMAP_RIGHT_ARROW_ID));
    rightButton.setAction(buttonCallback);

    buttonStart.setXY(190, 86);
    buttonStart.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_START_ID), touchgfx::Bitmap(BITMAP_BLUE_START_ID));
    buttonStart.setAlpha(0);

    centerAnimation.setXY(104, 28);
    centerAnimation.setVisible(false);
    centerAnimation.setBitmaps(BITMAP_COMP_00000_ID, BITMAP_COMP_00026_ID);
    centerAnimation.setUpdateTicksInterval(2);

    imageOption1.setXY(305, 217);
    imageOption1.setBitmap(touchgfx::Bitmap(BITMAP_ICON_ALLERGY_50PX_ID));

    imageOption2.setXY(361, 217);
    imageOption2.setBitmap(touchgfx::Bitmap(BITMAP_ICON_ECO_WASH_50PX_ID));

    imageOption3.setXY(417, 217);
    imageOption3.setBitmap(touchgfx::Bitmap(BITMAP_ICON_PREWASH_50PX_ID));

    imageRPM.setXY(14, 217);
    imageRPM.setBitmap(touchgfx::Bitmap(BITMAP_ICON_SPIN_SPEED_1000_RPM_50PX_ID));

    imageHeat.setXY(71, 217);
    imageHeat.setBitmap(touchgfx::Bitmap(BITMAP_ICON_HEAT_60_50PX_ID));

    imageLevel.setXY(125, 217);
    imageLevel.setBitmap(touchgfx::Bitmap(BITMAP_ICON_SOIL_MEDIUM_50PX_ID));

    icon1.setXY(-120, 70);
    icon1.setBitmap(touchgfx::Bitmap(BITMAP_SOIL_LEVEL_MEDIUM_ID));

    icon2.setXY(-120, 106);
    icon2.setBitmap(touchgfx::Bitmap(BITMAP_HEAT_60_ID));

    icon3.setXY(-120, 142);
    icon3.setBitmap(touchgfx::Bitmap(BITMAP_SPIN_1600_ID));

    icon4.setXY(480, 71);
    icon4.setBitmap(touchgfx::Bitmap(BITMAP_ALLERGY_ID));

    icon5.setXY(480, 105);
    icon5.setBitmap(touchgfx::Bitmap(BITMAP_ECO_WASH_ID));

    icon6.setXY(480, 140);
    icon6.setBitmap(touchgfx::Bitmap(BITMAP_PREWASH_ID));

    leftReplacementImage.setXY(54, 85);
    leftReplacementImage.setVisible(false);
    leftReplacementImage.setBitmap(touchgfx::Bitmap(BITMAP_ICON_CENTER_ACTIVEWEAR_ID));

    rightReplacementImage.setXY(346, 85);
    rightReplacementImage.setVisible(false);
    rightReplacementImage.setBitmap(touchgfx::Bitmap(BITMAP_ICON_CENTER_ACTIVEWEAR_ID));

    textAreaProgramName.setPosition(40, 13, 180, 24);
    textAreaProgramName.setColor(touchgfx::Color::getColorFrom24BitRGB(92, 92, 92));
    textAreaProgramName.setLinespacing(0);
    Unicode::snprintf(textAreaProgramNameBuffer, TEXTAREAPROGRAMNAME_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID4).getText());
    textAreaProgramName.setWildcard(textAreaProgramNameBuffer);
    textAreaProgramName.setTypedText(touchgfx::TypedText(T_PROGRAMNAMETEXT));

    textAreaDash.setPosition(220, 13, 40, 24);
    textAreaDash.setColor(touchgfx::Color::getColorFrom24BitRGB(92, 92, 92));
    textAreaDash.setLinespacing(0);
    textAreaDash.setTypedText(touchgfx::TypedText(T_DASHTEXT));

    textAreaProgramLength.setPosition(260, 13, 180, 24);
    textAreaProgramLength.setColor(touchgfx::Color::getColorFrom24BitRGB(92, 92, 92));
    textAreaProgramLength.setLinespacing(0);
    textAreaProgramLengthBuffer[0] = 0;
    textAreaProgramLength.setWildcard(textAreaProgramLengthBuffer);
    textAreaProgramLength.setTypedText(touchgfx::TypedText(T_PROGRAMLENGTHTEXT));

    buttonRun.setXY(48, 179);
    buttonRun.setVisible(false);
    buttonRun.setBitmaps(touchgfx::Bitmap(BITMAP_RUNNING_BUTTON_ID), touchgfx::Bitmap(BITMAP_RUNNING_BUTTON_ID));
    buttonRun.setAction(buttonCallback);

    buttonPause.setXY(361, 179);
    buttonPause.setVisible(false);
    buttonPause.setBitmaps(touchgfx::Bitmap(BITMAP_PAUSE_STOP_BUTTON_ID), touchgfx::Bitmap(BITMAP_PAUSE_STOP_BUTTON_ID));
    buttonPause.setAction(buttonCallback);

    washAnimation.setXY(174, 70);
    washAnimation.setVisible(false);
    washAnimation.setBitmaps(BITMAP_WASH_FRAME_01_ID, BITMAP_WASH_FRAME_11_ID);
    washAnimation.setUpdateTicksInterval(4);

    prewashIcon.setXY(35, 15);
    prewashIcon.setVisible(false);
    prewashIcon.setBitmap(touchgfx::Bitmap(BITMAP_TOP_WASH_PREWASH_INACTIVE_ID));

    washingIcon.setXY(113, 15);
    washingIcon.setVisible(false);
    washingIcon.setBitmap(touchgfx::Bitmap(BITMAP_TOP_WASH_WASHING_INACTIVE_ID));

    rinsingIcon.setXY(293, 15);
    rinsingIcon.setVisible(false);
    rinsingIcon.setBitmap(touchgfx::Bitmap(BITMAP_TOP_WASH_RINSING_INACTIVE_ID));

    spinCycleIcon.setXY(360, 15);
    spinCycleIcon.setVisible(false);
    spinCycleIcon.setBitmap(touchgfx::Bitmap(BITMAP_TOP_WASH_SPIN_CYCLE_INACTIVE_ID));

    progressBar.setPosition(134, 30, 210, 210);
    progressBar.setCenter(105, 105);
    progressBar.setRadius(97);
    progressBar.setLineWidth(15);
    progressBar.setArc(0, 0);
    progressBar.setCapPrecision(10);
    progressBarPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(69, 77, 86));
    progressBar.setPainter(progressBarPainter);
    progressBar.setAlpha(0);
    progressBar.setVisible(false);

    washDoneBackground.setXY(190, 86);
    washDoneBackground.setVisible(false);
    washDoneBackground.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_DONE_ID));

    add(background);
    add(imageGreyCenter);
    add(bottombar);
    add(topbar);
    add(washerWheel);
    add(imageWhiteCenter);
    add(leftShade);
    add(rightShade);
    add(leftButton);
    add(rightButton);
    add(buttonStart);
    add(centerAnimation);
    add(imageOption1);
    add(imageOption2);
    add(imageOption3);
    add(imageRPM);
    add(imageHeat);
    add(imageLevel);
    add(icon1);
    add(icon2);
    add(icon3);
    add(icon4);
    add(icon5);
    add(icon6);
    add(leftReplacementImage);
    add(rightReplacementImage);
    add(textAreaProgramName);
    add(textAreaDash);
    add(textAreaProgramLength);
    add(buttonRun);
    add(buttonPause);
    add(washAnimation);
    add(prewashIcon);
    add(washingIcon);
    add(rinsingIcon);
    add(spinCycleIcon);
    add(progressBar);
    add(washDoneBackground);
}

void WasherContainerBase::initialize()
{
    washerWheel.initialize();
    for (int i = 0; i < washerWheelListItems.getNumberOfDrawables(); i++)
    {
        washerWheelListItems[i].initialize();
    }
    for (int i = 0; i < washerWheelSelectedListItems.getNumberOfDrawables(); i++)
    {
        washerWheelSelectedListItems[i].initialize();
    }	
}

void WasherContainerBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &leftButton)
    {
        //InteractionLeft
        //When leftButton clicked call virtual function
        //Call leftButtonClicked
        leftButtonClicked();
    }
    else if (&src == &rightButton)
    {
        //InteractionRight
        //When rightButton clicked call virtual function
        //Call rightButtonClicked
        rightButtonClicked();
    }
    else if (&src == &buttonRun)
    {
        //InteractionButtonRun
        //When buttonRun clicked call virtual function
        //Call buttonRunClicked
        buttonRunClicked();
    }
    else if (&src == &buttonPause)
    {
        //InteractionButtonPause
        //When buttonPause clicked call virtual function
        //Call buttonPausedClicked
        buttonPausedClicked();
    }
}

void WasherContainerBase::updateItemCallbackHandler(touchgfx::DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex)
{
    if (items == &washerWheelListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        WasherWheelItem* cc = (WasherWheelItem*)d;
        washerWheelUpdateItem(*cc, itemIndex);
    }
    else if (items == &washerWheelSelectedListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        WasherWheelCenterItem* cc = (WasherWheelCenterItem*)d;
        washerWheelUpdateCenterItem(*cc, itemIndex);
    }
}