void SetPlayOpeningMovieOptionControl___ctor(SetPlayOpeningMovieOptionControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetPlayOpeningMovieOptionControl__Init(SetPlayOpeningMovieOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UISprite_o *titleImage; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *notPlayTitleLabel; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  UILabel_o *notPlayInfoLabel; // x20
  UILabel_o *touchSkipTitleLabel; // x20
  UILabel_o *touchSkipInfoLabel; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x1

  if ( (byte_5933496 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10059/*"OPTION_NOT_PLAY_OPENING_MOVIE"*/);
    sub_21FFC50(&StringLiteral_10101/*"OPTION_TOUCH_SKIP_OPENING_MOVIE"*/);
    sub_21FFC50(&StringLiteral_10102/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/);
    sub_21FFC50(&StringLiteral_21655/*"img_txt_playopening"*/);
    sub_21FFC50(&StringLiteral_10060/*"OPTION_NOT_PLAY_OPENING_MOVIE_INFO"*/);
    byte_5933496 = 1;
  }
  titleImage = this->fields.titleImage;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  AtlasManager__SetMyRoomImage(titleImage, (System_String_o *)StringLiteral_21655/*"img_txt_playopening"*/, 0);
  notPlayTitleLabel = this->fields.notPlayTitleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10059/*"OPTION_NOT_PLAY_OPENING_MOVIE"*/, 0);
  if ( !notPlayTitleLabel )
    goto LABEL_14;
  UILabel__set_text(notPlayTitleLabel, v8, 0);
  notPlayInfoLabel = this->fields.notPlayInfoLabel;
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10060/*"OPTION_NOT_PLAY_OPENING_MOVIE_INFO"*/, 0);
  if ( !notPlayInfoLabel
    || (UILabel__set_text(notPlayInfoLabel, v8, 0),
        touchSkipTitleLabel = this->fields.touchSkipTitleLabel,
        v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10101/*"OPTION_TOUCH_SKIP_OPENING_MOVIE"*/, 0),
        !touchSkipTitleLabel)
    || (UILabel__set_text(touchSkipTitleLabel, v8, 0),
        touchSkipInfoLabel = this->fields.touchSkipInfoLabel,
        v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10102/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, 0),
        !touchSkipInfoLabel) )
  {
LABEL_14:
    sub_21FFECC(v8, v9);
  }
  UILabel__set_text(touchSkipInfoLabel, v8, 0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v13, v14);
  this->fields.notPlayFlag = OptionManager__GetNotPlayOpeningMovie(0);
  this->fields.touchSkipFlag = OptionManager__GetTouchSkipOpeningMovie(0);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v15);
}


void SetPlayOpeningMovieOptionControl__OnClickNotPlaySwitchButton(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  Il2CppMethodPointer methodPtr; // x10
  _QWORD *v5; // x0
  _BOOL4 notPlayFlag; // w20
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_5933498 & 1) == 0 )
  {
    sub_21FFC50(&Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__);
    byte_5933498 = 1;
  }
  methodPtr = this->klass->vtable._5_Reflection.methodPtr;
  v3 = this->klass->vtable._5_Reflection.method;
  this->fields.notPlayFlag ^= 1u;
  ((void (__fastcall *)(SetPlayOpeningMovieOptionControl_o *, const MethodInfo *))methodPtr)(this, v3);
  v5 = Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__;
  notPlayFlag = this->fields.notPlayFlag;
  if ( (*((_BYTE *)Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_21FFC68(Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, !notPlayFlag, 0, 0);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v8);
}


void SetPlayOpeningMovieOptionControl__OnClickTouchSkipSwitchButton(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  Il2CppMethodPointer methodPtr; // x10
  _QWORD *v5; // x0
  _BOOL4 touchSkipFlag; // w20
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_5933499 & 1) == 0 )
  {
    sub_21FFC50(&Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__);
    byte_5933499 = 1;
  }
  methodPtr = this->klass->vtable._5_Reflection.methodPtr;
  v3 = this->klass->vtable._5_Reflection.method;
  this->fields.touchSkipFlag ^= 1u;
  ((void (__fastcall *)(SetPlayOpeningMovieOptionControl_o *, const MethodInfo *))methodPtr)(this, v3);
  v5 = Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__;
  touchSkipFlag = this->fields.touchSkipFlag;
  if ( (*((_BYTE *)Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_21FFC68(Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, !touchSkipFlag, 0, 0);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v8);
}


void SetPlayOpeningMovieOptionControl__Reflection(SetPlayOpeningMovieOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 notPlayFlag; // w20

  if ( (byte_593349A & 1) == 0 )
  {
    sub_21FFC50(&OptionManager_TypeInfo);
    byte_593349A = 1;
  }
  notPlayFlag = this->fields.notPlayFlag;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetNotPlayOpeningMovie(notPlayFlag, 0);
  OptionManager__SetTouchSkipOpeningMovie(this->fields.touchSkipFlag, 0);
}


void SetPlayOpeningMovieOptionControl__RefreshDisplay(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  UIButton_o *notPlaySwitchButton; // x0
  _BOOL4 touchSkipFlag; // w22
  __int64 v5; // x20
  __int64 v6; // x21
  System_String_o *v7; // x1
  System_String_o *v8; // x1

  if ( (byte_5933497 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_5933497 = 1;
  }
  notPlaySwitchButton = this->fields.notPlaySwitchButton;
  if ( !notPlaySwitchButton
    || ((touchSkipFlag = this->fields.touchSkipFlag,
         v5 = StringLiteral_18236/*"btn_off"*/,
         v6 = StringLiteral_18237/*"btn_on"*/,
         this->fields.notPlayFlag)
      ? (v7 = (System_String_o *)StringLiteral_18237/*"btn_on"*/)
      : (v7 = (System_String_o *)StringLiteral_18236/*"btn_off"*/),
        UIButton__set_normalSprite(notPlaySwitchButton, v7, 0),
        (notPlaySwitchButton = this->fields.touchSkipSwitchButton) == 0) )
  {
    sub_21FFECC(notPlaySwitchButton, method);
  }
  if ( touchSkipFlag )
    v8 = (System_String_o *)v6;
  else
    v8 = (System_String_o *)v5;
  UIButton__set_normalSprite(notPlaySwitchButton, v8, 0);
}