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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct UILabel_o *notPlayTitleLabel; // x20
  UILabel_o *notPlayInfoLabel; // x20
  System_String_o *v28; // x0
  __int64 v29; // x1
  UILabel_o *notPlaySwitchButton; // x20
  UILabel_o *touchSkipInfoLabel; // x20
  UILabel_o *touchSkipSwitchButton; // x20
  const MethodInfo *v33; // x1

  if ( (byte_42EBA94 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&OptionManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9891/*"OPTION_NOT_PLAY_OPENING_MOVIE"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_9925/*"OPTION_TOUCH_SKIP_OPENING_MOVIE"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_9926/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_19975/*"img_txt_playopening"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_9892/*"OPTION_NOT_PLAY_OPENING_MOVIE_INFO"*/, v23, v24, v25);
    byte_42EBA94 = 1;
  }
  notPlayTitleLabel = this->fields.notPlayTitleLabel;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMyRoomImage((UISprite_o *)notPlayTitleLabel, (System_String_o *)StringLiteral_19975/*"img_txt_playopening"*/, 0LL);
  notPlayInfoLabel = this->fields.notPlayInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_9891/*"OPTION_NOT_PLAY_OPENING_MOVIE"*/, 0LL);
  if ( !notPlayInfoLabel )
    goto LABEL_17;
  UILabel__set_text(notPlayInfoLabel, v28, 0LL);
  notPlaySwitchButton = (UILabel_o *)this->fields.notPlaySwitchButton;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_9892/*"OPTION_NOT_PLAY_OPENING_MOVIE_INFO"*/, 0LL);
  if ( !notPlaySwitchButton
    || (UILabel__set_text(notPlaySwitchButton, v28, 0LL),
        touchSkipInfoLabel = this->fields.touchSkipInfoLabel,
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_9925/*"OPTION_TOUCH_SKIP_OPENING_MOVIE"*/, 0LL),
        !touchSkipInfoLabel)
    || (UILabel__set_text(touchSkipInfoLabel, v28, 0LL),
        touchSkipSwitchButton = (UILabel_o *)this->fields.touchSkipSwitchButton,
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_9926/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, 0LL),
        !touchSkipSwitchButton) )
  {
LABEL_17:
    sub_B5D69C(v28, v29);
  }
  UILabel__set_text(touchSkipSwitchButton, v28, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetNotPlayOpeningMovie(0LL);
  BYTE1(this[1].klass) = OptionManager__GetTouchSkipOpeningMovie(0LL);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v33);
}


void __fastcall SetPlayOpeningMovieOptionControl__OnClickNotPlaySwitchButton(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SetPlayOpeningMovieOptionControl_c *klass; // x9
  _QWORD *v6; // x0
  int v7; // w20
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42EBA96 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__, (_DWORD)method, v2, v3);
    byte_42EBA96 = 1;
  }
  klass = this->klass;
  LOBYTE(this[1].klass) ^= 1u;
  ((void (__fastcall *)(SetPlayOpeningMovieOptionControl_o *, Il2CppMethodPointer))klass->vtable._5_Reflection.method)(
    this,
    klass->vtable._6_IsAvailable.methodPtr);
  v6 = Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__;
  v7 = LOBYTE(this[1].klass) ^ 1;
  if ( (*((_BYTE *)Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B5D5CC(Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v8, v7, 0LL);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v9);
}


void __fastcall SetPlayOpeningMovieOptionControl__OnClickTouchSkipSwitchButton(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SetPlayOpeningMovieOptionControl_c *klass; // x9
  _QWORD *v6; // x0
  int v7; // w20
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42EBA97 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__, (_DWORD)method, v2, v3);
    byte_42EBA97 = 1;
  }
  klass = this->klass;
  BYTE1(this[1].klass) ^= 1u;
  ((void (__fastcall *)(SetPlayOpeningMovieOptionControl_o *, Il2CppMethodPointer))klass->vtable._5_Reflection.method)(
    this,
    klass->vtable._6_IsAvailable.methodPtr);
  v6 = Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__;
  v7 = BYTE1(this[1].klass) ^ 1;
  if ( (*((_BYTE *)Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B5D5CC(Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v8, v7, 0LL);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v9);
}


void __fastcall SetPlayOpeningMovieOptionControl__Reflection(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int klass_low; // w20

  if ( (byte_42EBA98 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBA98 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UILabel_o *touchSkipTitleLabel; // x0
  System_String_o *v9; // x20
  System_String_o *v10; // x1

  if ( (byte_42EBA95 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v5, v6, v7);
    byte_42EBA95 = 1;
  }
  touchSkipTitleLabel = this->fields.touchSkipTitleLabel;
  if ( BYTE1(this[1].klass) )
    v9 = (System_String_o *)StringLiteral_17215/*"btn_on"*/;
  else
    v9 = (System_String_o *)StringLiteral_17214/*"btn_off"*/;
  if ( !touchSkipTitleLabel
    || (LOBYTE(this[1].klass)
      ? (v10 = (System_String_o *)StringLiteral_17215/*"btn_on"*/)
      : (v10 = (System_String_o *)StringLiteral_17214/*"btn_off"*/),
        UIButton__set_normalSprite((UIButton_o *)touchSkipTitleLabel, v10, 0LL),
        (touchSkipTitleLabel = *(struct UILabel_o **)&this->fields.notPlayFlag) == 0LL) )
  {
    sub_B5D69C(touchSkipTitleLabel, method);
  }
  UIButton__set_normalSprite((UIButton_o *)touchSkipTitleLabel, v9, 0LL);
}