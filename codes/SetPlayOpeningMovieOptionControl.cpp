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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UISprite_o *titleImage; // x20
  __int64 v19; // x1
  UILabel_o *notPlayTitleLabel; // x20
  System_String_o *v21; // x0
  __int64 v22; // x1
  UILabel_o *notPlayInfoLabel; // x20
  UILabel_o *touchSkipTitleLabel; // x20
  UILabel_o *touchSkipInfoLabel; // x20
  __int64 v26; // x1
  const MethodInfo *v27; // x1

  if ( (byte_4B1162E & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&OptionManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_9801/*"OPTION_NOT_PLAY_OPENING_MOVIE"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_9843/*"OPTION_TOUCH_SKIP_OPENING_MOVIE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_9844/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_20790/*"img_txt_playopening"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_9802/*"OPTION_NOT_PLAY_OPENING_MOVIE_INFO"*/, v16, v17);
    byte_4B1162E = 1;
  }
  titleImage = this->fields.titleImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__SetMyRoomImage(titleImage, (System_String_o *)StringLiteral_20790/*"img_txt_playopening"*/, 0LL);
  notPlayTitleLabel = this->fields.notPlayTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9801/*"OPTION_NOT_PLAY_OPENING_MOVIE"*/, 0LL);
  if ( !notPlayTitleLabel )
    goto LABEL_14;
  UILabel__set_text(notPlayTitleLabel, v21, 0LL);
  notPlayInfoLabel = this->fields.notPlayInfoLabel;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9802/*"OPTION_NOT_PLAY_OPENING_MOVIE_INFO"*/, 0LL);
  if ( !notPlayInfoLabel
    || (UILabel__set_text(notPlayInfoLabel, v21, 0LL),
        touchSkipTitleLabel = this->fields.touchSkipTitleLabel,
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9843/*"OPTION_TOUCH_SKIP_OPENING_MOVIE"*/, 0LL),
        !touchSkipTitleLabel)
    || (UILabel__set_text(touchSkipTitleLabel, v21, 0LL),
        touchSkipInfoLabel = this->fields.touchSkipInfoLabel,
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9844/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, 0LL),
        !touchSkipInfoLabel) )
  {
LABEL_14:
    sub_1BCAA3C(v21, v22);
  }
  UILabel__set_text(touchSkipInfoLabel, v21, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v26);
  this->fields.notPlayFlag = OptionManager__GetNotPlayOpeningMovie(0LL);
  this->fields.touchSkipFlag = OptionManager__GetTouchSkipOpeningMovie(0LL);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v27);
}


void __fastcall SetPlayOpeningMovieOptionControl__OnClickNotPlaySwitchButton(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SetPlayOpeningMovieOptionControl_c *klass; // x9
  _QWORD *v5; // x0
  _BOOL4 notPlayFlag; // w20
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B11630 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__, method, v2);
    byte_4B11630 = 1;
  }
  klass = this->klass;
  this->fields.notPlayFlag ^= 1u;
  ((void (__fastcall *)(SetPlayOpeningMovieOptionControl_o *, Il2CppMethodPointer))klass->vtable._5_Reflection.method)(
    this,
    klass->vtable._6_IsAvailable.methodPtr);
  v5 = Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__;
  notPlayFlag = this->fields.notPlayFlag;
  if ( (*((_BYTE *)Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, !notPlayFlag, 0LL);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v8);
}


void __fastcall SetPlayOpeningMovieOptionControl__OnClickTouchSkipSwitchButton(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SetPlayOpeningMovieOptionControl_c *klass; // x9
  _QWORD *v5; // x0
  _BOOL4 touchSkipFlag; // w20
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B11631 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__, method, v2);
    byte_4B11631 = 1;
  }
  klass = this->klass;
  this->fields.touchSkipFlag ^= 1u;
  ((void (__fastcall *)(SetPlayOpeningMovieOptionControl_o *, Il2CppMethodPointer))klass->vtable._5_Reflection.method)(
    this,
    klass->vtable._6_IsAvailable.methodPtr);
  v5 = Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__;
  touchSkipFlag = this->fields.touchSkipFlag;
  if ( (*((_BYTE *)Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, !touchSkipFlag, 0LL);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v8);
}


void __fastcall SetPlayOpeningMovieOptionControl__Reflection(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 notPlayFlag; // w20

  if ( (byte_4B11632 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B11632 = 1;
  }
  notPlayFlag = this->fields.notPlayFlag;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  OptionManager__SetNotPlayOpeningMovie(notPlayFlag, 0LL);
  OptionManager__SetTouchSkipOpeningMovie(this->fields.touchSkipFlag, 0LL);
}


void __fastcall SetPlayOpeningMovieOptionControl__RefreshDisplay(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIButton_o *notPlaySwitchButton; // x0
  _BOOL4 touchSkipFlag; // w22
  __int64 v8; // x20
  __int64 v9; // x21
  System_String_o *v10; // x1
  System_String_o *v11; // x1

  if ( (byte_4B1162F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B1162F = 1;
  }
  notPlaySwitchButton = this->fields.notPlaySwitchButton;
  if ( !notPlaySwitchButton
    || ((touchSkipFlag = this->fields.touchSkipFlag,
         v8 = StringLiteral_17702/*"btn_off"*/,
         v9 = StringLiteral_17703/*"btn_on"*/,
         this->fields.notPlayFlag)
      ? (v10 = (System_String_o *)StringLiteral_17703/*"btn_on"*/)
      : (v10 = (System_String_o *)StringLiteral_17702/*"btn_off"*/),
        UIButton__set_normalSprite(notPlaySwitchButton, v10, 0LL),
        (notPlaySwitchButton = this->fields.touchSkipSwitchButton) == 0LL) )
  {
    sub_1BCAA3C(notPlaySwitchButton, method);
  }
  if ( touchSkipFlag )
    v11 = (System_String_o *)v9;
  else
    v11 = (System_String_o *)v8;
  UIButton__set_normalSprite(notPlaySwitchButton, v11, 0LL);
}