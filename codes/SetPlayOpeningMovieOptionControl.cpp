void __fastcall SetPlayOpeningMovieOptionControl___ctor(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
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
  struct UILabel_o *notPlayTitleLabel; // x20
  UILabel_o *notPlayInfoLabel; // x20
  System_String_o *v12; // x0
  UILabel_o *notPlaySwitchButton; // x20
  UILabel_o *touchSkipInfoLabel; // x20
  UILabel_o *touchSkipSwitchButton; // x20
  const MethodInfo *v16; // x1

  if ( (byte_42178A7 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&OptionManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_9815/*"OPTION_NOT_PLAY_OPENING_MOVIE"*/, v5);
    sub_B0D8A4(&StringLiteral_9843/*"OPTION_TOUCH_SKIP_OPENING_MOVIE"*/, v6);
    sub_B0D8A4(&StringLiteral_9844/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, v7);
    sub_B0D8A4(&StringLiteral_19788/*"img_txt_playopening"*/, v8);
    sub_B0D8A4(&StringLiteral_9816/*"OPTION_NOT_PLAY_OPENING_MOVIE_INFO"*/, v9);
    byte_42178A7 = 1;
  }
  notPlayTitleLabel = this->fields.notPlayTitleLabel;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMyRoomImage((UISprite_o *)notPlayTitleLabel, (System_String_o *)StringLiteral_19788/*"img_txt_playopening"*/, 0LL);
  notPlayInfoLabel = this->fields.notPlayInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9815/*"OPTION_NOT_PLAY_OPENING_MOVIE"*/, 0LL);
  if ( !notPlayInfoLabel )
    goto LABEL_17;
  UILabel__set_text(notPlayInfoLabel, v12, 0LL);
  notPlaySwitchButton = (UILabel_o *)this->fields.notPlaySwitchButton;
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9816/*"OPTION_NOT_PLAY_OPENING_MOVIE_INFO"*/, 0LL);
  if ( !notPlaySwitchButton
    || (UILabel__set_text(notPlaySwitchButton, v12, 0LL),
        touchSkipInfoLabel = this->fields.touchSkipInfoLabel,
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9843/*"OPTION_TOUCH_SKIP_OPENING_MOVIE"*/, 0LL),
        !touchSkipInfoLabel)
    || (UILabel__set_text(touchSkipInfoLabel, v12, 0LL),
        touchSkipSwitchButton = (UILabel_o *)this->fields.touchSkipSwitchButton,
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9844/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, 0LL),
        !touchSkipSwitchButton) )
  {
LABEL_17:
    sub_B0D97C(v12);
  }
  UILabel__set_text(touchSkipSwitchButton, v12, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetNotPlayOpeningMovie(0LL);
  BYTE1(this[1].klass) = OptionManager__GetTouchSkipOpeningMovie(0LL);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v16);
}


void __fastcall SetPlayOpeningMovieOptionControl__OnClickNotPlaySwitchButton(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  SetPlayOpeningMovieOptionControl_c *klass; // x9
  _QWORD *v4; // x0
  int v5; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42178A9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__, method);
    byte_42178A9 = 1;
  }
  klass = this->klass;
  LOBYTE(this[1].klass) ^= 1u;
  ((void (__fastcall *)(SetPlayOpeningMovieOptionControl_o *, Il2CppMethodPointer))klass->vtable._5_Reflection.method)(
    this,
    klass->vtable._6_IsAvailable.methodPtr);
  v4 = Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__;
  v5 = LOBYTE(this[1].klass) ^ 1;
  if ( (*((_BYTE *)Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B0D8AC(Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, v5, 0LL);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v7);
}


void __fastcall SetPlayOpeningMovieOptionControl__OnClickTouchSkipSwitchButton(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  SetPlayOpeningMovieOptionControl_c *klass; // x9
  _QWORD *v4; // x0
  int v5; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42178AA & 1) == 0 )
  {
    sub_B0D8A4(&Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__, method);
    byte_42178AA = 1;
  }
  klass = this->klass;
  BYTE1(this[1].klass) ^= 1u;
  ((void (__fastcall *)(SetPlayOpeningMovieOptionControl_o *, Il2CppMethodPointer))klass->vtable._5_Reflection.method)(
    this,
    klass->vtable._6_IsAvailable.methodPtr);
  v4 = Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__;
  v5 = BYTE1(this[1].klass) ^ 1;
  if ( (*((_BYTE *)Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B0D8AC(Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, v5, 0LL);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v7);
}


void __fastcall SetPlayOpeningMovieOptionControl__Reflection(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  int klass_low; // w20

  if ( (byte_42178AB & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_42178AB = 1;
  }
  klass_low = LOBYTE(this[1].klass);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetNotPlayOpeningMovie(klass_low != 0, 0LL);
  OptionManager__SetTouchSkipOpeningMovie(BYTE1(this[1].klass), 0LL);
}


void __fastcall SetPlayOpeningMovieOptionControl__RefreshDisplay(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *touchSkipTitleLabel; // x0
  System_String_o *v5; // x20
  System_String_o *v6; // x1

  if ( (byte_42178A8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17057/*"btn_on"*/, method);
    sub_B0D8A4(&StringLiteral_17056/*"btn_off"*/, v3);
    byte_42178A8 = 1;
  }
  touchSkipTitleLabel = this->fields.touchSkipTitleLabel;
  if ( BYTE1(this[1].klass) )
    v5 = (System_String_o *)StringLiteral_17057/*"btn_on"*/;
  else
    v5 = (System_String_o *)StringLiteral_17056/*"btn_off"*/;
  if ( !touchSkipTitleLabel
    || (LOBYTE(this[1].klass)
      ? (v6 = (System_String_o *)StringLiteral_17057/*"btn_on"*/)
      : (v6 = (System_String_o *)StringLiteral_17056/*"btn_off"*/),
        UIButton__set_normalSprite((UIButton_o *)touchSkipTitleLabel, v6, 0LL),
        (touchSkipTitleLabel = *(struct UILabel_o **)&this->fields.notPlayFlag) == 0LL) )
  {
    sub_B0D97C(touchSkipTitleLabel);
  }
  UIButton__set_normalSprite((UIButton_o *)touchSkipTitleLabel, v5, 0LL);
}