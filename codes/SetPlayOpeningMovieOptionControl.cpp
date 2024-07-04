void __fastcall SetPlayOpeningMovieOptionControl___ctor(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetPlayOpeningMovieOptionControl__Init(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UISprite_o *titleImage; // x20
  UILabel_o *notPlayTitleLabel; // x20
  System_String_o *v12; // x0
  __int64 v13; // x1
  UILabel_o *notPlayInfoLabel; // x20
  UILabel_o *touchSkipTitleLabel; // x20
  UILabel_o *touchSkipInfoLabel; // x20
  const MethodInfo *v17; // x1

  if ( (byte_48DE17F & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, method);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v3);
    sub_1B00CCC(&OptionManager_TypeInfo, v4);
    sub_1B00CCC(&StringLiteral_9560/*"OPTION_NOT_PLAY_OPENING_MOVIE"*/, v5);
    sub_1B00CCC(&StringLiteral_9602/*"OPTION_TOUCH_SKIP_OPENING_MOVIE"*/, v6);
    sub_1B00CCC(&StringLiteral_9603/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, v7);
    sub_1B00CCC(&StringLiteral_20289/*"img_txt_playopening"*/, v8);
    sub_1B00CCC(&StringLiteral_9561/*"OPTION_NOT_PLAY_OPENING_MOVIE_INFO"*/, v9);
    byte_48DE17F = 1;
  }
  titleImage = this->fields.titleImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMyRoomImage(titleImage, (System_String_o *)StringLiteral_20289/*"img_txt_playopening"*/, 0LL);
  notPlayTitleLabel = this->fields.notPlayTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9560/*"OPTION_NOT_PLAY_OPENING_MOVIE"*/, 0LL);
  if ( !notPlayTitleLabel )
    goto LABEL_14;
  UILabel__set_text(notPlayTitleLabel, v12, 0LL);
  notPlayInfoLabel = this->fields.notPlayInfoLabel;
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9561/*"OPTION_NOT_PLAY_OPENING_MOVIE_INFO"*/, 0LL);
  if ( !notPlayInfoLabel
    || (UILabel__set_text(notPlayInfoLabel, v12, 0LL),
        touchSkipTitleLabel = this->fields.touchSkipTitleLabel,
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9602/*"OPTION_TOUCH_SKIP_OPENING_MOVIE"*/, 0LL),
        !touchSkipTitleLabel)
    || (UILabel__set_text(touchSkipTitleLabel, v12, 0LL),
        touchSkipInfoLabel = this->fields.touchSkipInfoLabel,
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9603/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, 0LL),
        !touchSkipInfoLabel) )
  {
LABEL_14:
    sub_1B00F28(v12, v13);
  }
  UILabel__set_text(touchSkipInfoLabel, v12, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.notPlayFlag = OptionManager__GetNotPlayOpeningMovie(0LL);
  this->fields.touchSkipFlag = OptionManager__GetTouchSkipOpeningMovie(0LL);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v17);
}


void __fastcall SetPlayOpeningMovieOptionControl__OnClickNotPlaySwitchButton(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  SetPlayOpeningMovieOptionControl_c *klass; // x9
  _QWORD *v4; // x0
  _BOOL4 notPlayFlag; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_48DE181 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__, method);
    byte_48DE181 = 1;
  }
  klass = this->klass;
  this->fields.notPlayFlag ^= 1u;
  ((void (__fastcall *)(SetPlayOpeningMovieOptionControl_o *, Il2CppMethodPointer))klass->vtable._5_Reflection.method)(
    this,
    klass->vtable._6_IsAvailable.methodPtr);
  v4 = Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__;
  notPlayFlag = this->fields.notPlayFlag;
  if ( (*((_BYTE *)Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B00CE4(Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, !notPlayFlag, 0LL);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v7);
}


void __fastcall SetPlayOpeningMovieOptionControl__OnClickTouchSkipSwitchButton(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  SetPlayOpeningMovieOptionControl_c *klass; // x9
  _QWORD *v4; // x0
  _BOOL4 touchSkipFlag; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_48DE182 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__, method);
    byte_48DE182 = 1;
  }
  klass = this->klass;
  this->fields.touchSkipFlag ^= 1u;
  ((void (__fastcall *)(SetPlayOpeningMovieOptionControl_o *, Il2CppMethodPointer))klass->vtable._5_Reflection.method)(
    this,
    klass->vtable._6_IsAvailable.methodPtr);
  v4 = Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__;
  touchSkipFlag = this->fields.touchSkipFlag;
  if ( (*((_BYTE *)Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B00CE4(Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, !touchSkipFlag, 0LL);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v7);
}


void __fastcall SetPlayOpeningMovieOptionControl__Reflection(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  _BOOL4 notPlayFlag; // w20

  if ( (byte_48DE183 & 1) == 0 )
  {
    sub_1B00CCC(&OptionManager_TypeInfo, method);
    byte_48DE183 = 1;
  }
  notPlayFlag = this->fields.notPlayFlag;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetNotPlayOpeningMovie(notPlayFlag, 0LL);
  OptionManager__SetTouchSkipOpeningMovie(this->fields.touchSkipFlag, 0LL);
}


void __fastcall SetPlayOpeningMovieOptionControl__RefreshDisplay(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *notPlaySwitchButton; // x0
  _BOOL4 touchSkipFlag; // w22
  __int64 v6; // x20
  __int64 v7; // x21
  System_String_o *v8; // x1
  System_String_o *v9; // x1

  if ( (byte_48DE180 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_17284/*"btn_on"*/, method);
    sub_1B00CCC(&StringLiteral_17283/*"btn_off"*/, v3);
    byte_48DE180 = 1;
  }
  notPlaySwitchButton = this->fields.notPlaySwitchButton;
  if ( !notPlaySwitchButton
    || ((touchSkipFlag = this->fields.touchSkipFlag,
         v6 = StringLiteral_17283/*"btn_off"*/,
         v7 = StringLiteral_17284/*"btn_on"*/,
         this->fields.notPlayFlag)
      ? (v8 = (System_String_o *)StringLiteral_17284/*"btn_on"*/)
      : (v8 = (System_String_o *)StringLiteral_17283/*"btn_off"*/),
        UIButton__set_normalSprite(notPlaySwitchButton, v8, 0LL),
        (notPlaySwitchButton = this->fields.touchSkipSwitchButton) == 0LL) )
  {
    sub_1B00F28(notPlaySwitchButton, method);
  }
  if ( touchSkipFlag )
    v9 = (System_String_o *)v7;
  else
    v9 = (System_String_o *)v6;
  UIButton__set_normalSprite(notPlaySwitchButton, v9, 0LL);
}