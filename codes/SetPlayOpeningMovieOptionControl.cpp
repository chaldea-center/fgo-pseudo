void SetPlayOpeningMovieOptionControl___ctor(SetPlayOpeningMovieOptionControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetPlayOpeningMovieOptionControl__Init(SetPlayOpeningMovieOptionControl_o *this, const MethodInfo *method)
{
  UISprite_o *titleImage; // x20
  UILabel_o *notPlayTitleLabel; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UILabel_o *notPlayInfoLabel; // x20
  UILabel_o *touchSkipTitleLabel; // x20
  UILabel_o *touchSkipInfoLabel; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4C51D82 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&OptionManager_TypeInfo);
    sub_1C3E564(&StringLiteral_9674/*"OPTION_NOT_PLAY_OPENING_MOVIE"*/);
    sub_1C3E564(&StringLiteral_9716/*"OPTION_TOUCH_SKIP_OPENING_MOVIE"*/);
    sub_1C3E564(&StringLiteral_9717/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/);
    sub_1C3E564(&StringLiteral_20716/*"img_txt_playopening"*/);
    sub_1C3E564(&StringLiteral_9675/*"OPTION_NOT_PLAY_OPENING_MOVIE_INFO"*/);
    byte_4C51D82 = 1;
  }
  titleImage = this->fields.titleImage;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMyRoomImage(titleImage, (System_String_o *)StringLiteral_20716/*"img_txt_playopening"*/, 0);
  notPlayTitleLabel = this->fields.notPlayTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_9674/*"OPTION_NOT_PLAY_OPENING_MOVIE"*/, 0);
  if ( !notPlayTitleLabel )
    goto LABEL_14;
  UILabel__set_text(notPlayTitleLabel, v5, 0);
  notPlayInfoLabel = this->fields.notPlayInfoLabel;
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_9675/*"OPTION_NOT_PLAY_OPENING_MOVIE_INFO"*/, 0);
  if ( !notPlayInfoLabel
    || (UILabel__set_text(notPlayInfoLabel, v5, 0),
        touchSkipTitleLabel = this->fields.touchSkipTitleLabel,
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_9716/*"OPTION_TOUCH_SKIP_OPENING_MOVIE"*/, 0),
        !touchSkipTitleLabel)
    || (UILabel__set_text(touchSkipTitleLabel, v5, 0),
        touchSkipInfoLabel = this->fields.touchSkipInfoLabel,
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_9717/*"OPTION_TOUCH_SKIP_OPENING_MOVIE_INFO"*/, 0),
        !touchSkipInfoLabel) )
  {
LABEL_14:
    sub_1C3E7C0(v5, v6);
  }
  UILabel__set_text(touchSkipInfoLabel, v5, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.notPlayFlag = OptionManager__GetNotPlayOpeningMovie(0);
  this->fields.touchSkipFlag = OptionManager__GetTouchSkipOpeningMovie(0);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v10);
}


void SetPlayOpeningMovieOptionControl__OnClickNotPlaySwitchButton(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  SetPlayOpeningMovieOptionControl_c *klass; // x9
  _QWORD *v4; // x0
  _BOOL4 notPlayFlag; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C51D84 & 1) == 0 )
  {
    sub_1C3E564(&Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__);
    byte_4C51D84 = 1;
  }
  klass = this->klass;
  this->fields.notPlayFlag ^= 1u;
  ((void (__fastcall *)(SetPlayOpeningMovieOptionControl_o *, const MethodInfo *))klass->vtable._5_Reflection.methodPtr)(
    this,
    klass->vtable._5_Reflection.method);
  v4 = Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__;
  notPlayFlag = this->fields.notPlayFlag;
  if ( (*((_BYTE *)Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C3E57C(Method_SetPlayOpeningMovieOptionControl_OnClickNotPlaySwitchButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, !notPlayFlag, 0, 0);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v7);
}


void SetPlayOpeningMovieOptionControl__OnClickTouchSkipSwitchButton(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  SetPlayOpeningMovieOptionControl_c *klass; // x9
  _QWORD *v4; // x0
  _BOOL4 touchSkipFlag; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C51D85 & 1) == 0 )
  {
    sub_1C3E564(&Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__);
    byte_4C51D85 = 1;
  }
  klass = this->klass;
  this->fields.touchSkipFlag ^= 1u;
  ((void (__fastcall *)(SetPlayOpeningMovieOptionControl_o *, const MethodInfo *))klass->vtable._5_Reflection.methodPtr)(
    this,
    klass->vtable._5_Reflection.method);
  v4 = Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__;
  touchSkipFlag = this->fields.touchSkipFlag;
  if ( (*((_BYTE *)Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C3E57C(Method_SetPlayOpeningMovieOptionControl_OnClickTouchSkipSwitchButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, !touchSkipFlag, 0, 0);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v7);
}


void SetPlayOpeningMovieOptionControl__Reflection(SetPlayOpeningMovieOptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 notPlayFlag; // w20

  if ( (byte_4C51D86 & 1) == 0 )
  {
    sub_1C3E564(&OptionManager_TypeInfo);
    byte_4C51D86 = 1;
  }
  notPlayFlag = this->fields.notPlayFlag;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
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

  if ( (byte_4C51D83 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_17524/*"btn_on"*/);
    sub_1C3E564(&StringLiteral_17523/*"btn_off"*/);
    byte_4C51D83 = 1;
  }
  notPlaySwitchButton = this->fields.notPlaySwitchButton;
  if ( !notPlaySwitchButton
    || ((touchSkipFlag = this->fields.touchSkipFlag,
         v5 = StringLiteral_17523/*"btn_off"*/,
         v6 = StringLiteral_17524/*"btn_on"*/,
         this->fields.notPlayFlag)
      ? (v7 = (System_String_o *)StringLiteral_17524/*"btn_on"*/)
      : (v7 = (System_String_o *)StringLiteral_17523/*"btn_off"*/),
        UIButton__set_normalSprite(notPlaySwitchButton, v7, 0),
        (notPlaySwitchButton = this->fields.touchSkipSwitchButton) == 0) )
  {
    sub_1C3E7C0(notPlaySwitchButton, method);
  }
  if ( touchSkipFlag )
    v8 = (System_String_o *)v6;
  else
    v8 = (System_String_o *)v5;
  UIButton__set_normalSprite(notPlaySwitchButton, v8, 0);
}