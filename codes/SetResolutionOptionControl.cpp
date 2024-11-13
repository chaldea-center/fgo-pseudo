void __fastcall SetResolutionOptionControl___ctor(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetResolutionOptionControl__Init(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SetResolutionOptionControl_o *v3; // x19
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
  int enableResolutionSetting; // w8
  struct UILabel_o *lowLabel; // x8
  struct UnityEngine_Color_o mEffectColor; // q0
  struct UILabel_o *normalLabel; // x8
  System_String_o *normalSprite; // x0
  System_String_o *v21; // x0
  __int64 v22; // x1
  bool IsEnableResolutionSetting; // w0
  UILabel_o *infoLabel; // x20
  System_String_o **v25; // x8
  System_String_o *v26; // x21
  UILabel_o *v27; // x20
  UILabel_o *v28; // x20
  __int64 v29; // x1
  int32_t ResolutionType; // w1
  const MethodInfo *v31; // x2

  v3 = this;
  if ( (byte_4B11642 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&OptionManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&ResolutionManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_9816/*"OPTION_RERSOLUTION_INFO_DISABLE"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_9815/*"OPTION_RERSOLUTION_INFO"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_9818/*"OPTION_RERSOLUTION_NORMAL"*/, v12, v13);
    this = (SetResolutionOptionControl_o *)sub_1BCA7E0(&StringLiteral_9817/*"OPTION_RERSOLUTION_LOW"*/, v14, v15);
    byte_4B11642 = 1;
  }
  if ( v3->fields.isInit )
  {
    enableResolutionSetting = v3->fields.enableResolutionSetting;
  }
  else
  {
    lowLabel = v3->fields.lowLabel;
    v3->fields.isInit = 1;
    if ( !lowLabel )
      goto LABEL_23;
    mEffectColor = lowLabel->fields.mEffectColor;
    normalLabel = v3->fields.normalLabel;
    v3->fields.onButtonOutlineColor = mEffectColor;
    if ( !normalLabel )
      goto LABEL_23;
    this = (SetResolutionOptionControl_o *)v3->fields.lowButton;
    v3->fields.offButtonOutlineColor = normalLabel->fields.mEffectColor;
    if ( !this )
      goto LABEL_23;
    normalSprite = UIButton__get_normalSprite((UIButton_o *)this, 0LL);
    v3->fields.onButtonName = normalSprite;
    sub_1BCA784(&v3->fields.onButtonName, normalSprite);
    this = (SetResolutionOptionControl_o *)v3->fields.normalButton;
    if ( !this )
      goto LABEL_23;
    v21 = UIButton__get_normalSprite((UIButton_o *)this, 0LL);
    v3->fields.offButtonName = v21;
    sub_1BCA784(&v3->fields.offButtonName, v21);
    if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v22);
    IsEnableResolutionSetting = ResolutionManager__IsEnableResolutionSetting(0LL);
    enableResolutionSetting = IsEnableResolutionSetting;
    v3->fields.enableResolutionSetting = IsEnableResolutionSetting;
  }
  infoLabel = v3->fields.infoLabel;
  if ( enableResolutionSetting )
    v25 = (System_String_o **)&StringLiteral_9815/*"OPTION_RERSOLUTION_INFO"*/;
  else
    v25 = (System_String_o **)&StringLiteral_9816/*"OPTION_RERSOLUTION_INFO_DISABLE"*/;
  v26 = *v25;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  this = (SetResolutionOptionControl_o *)LocalizationManager__Get(v26, 0LL);
  if ( !infoLabel
    || (UILabel__set_text(infoLabel, (System_String_o *)this, 0LL),
        v27 = v3->fields.normalLabel,
        this = (SetResolutionOptionControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9818/*"OPTION_RERSOLUTION_NORMAL"*/, 0LL),
        !v27)
    || (UILabel__set_text(v27, (System_String_o *)this, 0LL),
        v28 = v3->fields.lowLabel,
        this = (SetResolutionOptionControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9817/*"OPTION_RERSOLUTION_LOW"*/, 0LL),
        !v28) )
  {
LABEL_23:
    sub_1BCAA3C(this, method);
  }
  UILabel__set_text(v28, (System_String_o *)this, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v29);
  ResolutionType = OptionManager__GetResolutionType(0LL);
  SetResolutionOptionControl__RefreshDisplay(v3, ResolutionType, v31);
}


void __fastcall SetResolutionOptionControl__OnClickLowButton(
        SetResolutionOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  _BOOL4 enableResolutionSetting; // w20
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2
  __int64 v10; // x1

  if ( (byte_4B11644 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SetResolutionOptionControl_OnClickLowButton__, v4, v5);
    byte_4B11644 = 1;
  }
  v6 = Method_SetResolutionOptionControl_OnClickLowButton__;
  enableResolutionSetting = this->fields.enableResolutionSetting;
  if ( (*((_BYTE *)Method_SetResolutionOptionControl_OnClickLowButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_SetResolutionOptionControl_OnClickLowButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  if ( enableResolutionSetting )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    SetResolutionOptionControl__RefreshDisplay(this, 1, v9);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v10);
    OptionManager__SetResolutionType(1, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
  }
}


void __fastcall SetResolutionOptionControl__OnClickNormalButton(
        SetResolutionOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  _BOOL4 enableResolutionSetting; // w20
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2
  __int64 v10; // x1

  if ( (byte_4B11643 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SetResolutionOptionControl_OnClickNormalButton__, v4, v5);
    byte_4B11643 = 1;
  }
  v6 = Method_SetResolutionOptionControl_OnClickNormalButton__;
  enableResolutionSetting = this->fields.enableResolutionSetting;
  if ( (*((_BYTE *)Method_SetResolutionOptionControl_OnClickNormalButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_SetResolutionOptionControl_OnClickNormalButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  if ( enableResolutionSetting )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    SetResolutionOptionControl__RefreshDisplay(this, 0, v9);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v10);
    OptionManager__SetResolutionType(0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetResolutionOptionControl__RefreshDisplay(
        SetResolutionOptionControl_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UILabel_o *normalLabel; // x0
  System_String_o *offButtonName; // x1
  struct UIButton_o *lowButton; // x8
  struct UIButton_o *v7; // x8
  struct UIButton_o *v8; // x8
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !this->fields.enableResolutionSetting )
  {
    normalLabel = this->fields.normalLabel;
    if ( normalLabel )
    {
      UILabel__set_effectColor(normalLabel, this->fields.onButtonOutlineColor, 0LL);
      normalLabel = this->fields.lowLabel;
      if ( normalLabel )
      {
        UILabel__set_effectColor(normalLabel, this->fields.offButtonOutlineColor, 0LL);
        normalLabel = (UILabel_o *)this->fields.normalButton;
        if ( normalLabel )
        {
          UIButton__set_normalSprite((UIButton_o *)normalLabel, this->fields.onButtonName, 0LL);
          normalLabel = (UILabel_o *)this->fields.lowButton;
          if ( normalLabel )
          {
            UIButton__set_normalSprite((UIButton_o *)normalLabel, this->fields.offButtonName, 0LL);
            normalLabel = this->fields.lowLabel;
            if ( normalLabel )
            {
              v9.fields.r = 0.5;
              v9.fields.g = 0.5;
              v9.fields.b = 0.5;
              v9.fields.a = 1.0;
              UIWidget__set_color((UIWidget_o *)normalLabel, v9, 0LL);
              normalLabel = (UILabel_o *)this->fields.lowButton;
              if ( normalLabel )
              {
                v10.fields.r = 0.5;
                v10.fields.g = 0.5;
                v10.fields.b = 0.5;
                v10.fields.a = 1.0;
                UIButtonColor__set_defaultColor((UIButtonColor_o *)normalLabel, v10, 0LL);
                lowButton = this->fields.lowButton;
                if ( lowButton )
                {
                  lowButton->fields.hover = (struct UnityEngine_Color_o)xmmword_BD2310;
                  v7 = this->fields.lowButton;
                  if ( v7 )
                  {
                    v7->fields.pressed = (struct UnityEngine_Color_o)xmmword_BD2310;
                    v8 = this->fields.lowButton;
                    if ( v8 )
                    {
                      v8->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_BD2310;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_24;
  }
  normalLabel = this->fields.normalLabel;
  if ( !type )
  {
    if ( normalLabel )
    {
      UILabel__set_effectColor(normalLabel, this->fields.onButtonOutlineColor, 0LL);
      normalLabel = this->fields.lowLabel;
      if ( normalLabel )
      {
        UILabel__set_effectColor(normalLabel, this->fields.offButtonOutlineColor, 0LL);
        normalLabel = (UILabel_o *)this->fields.normalButton;
        if ( normalLabel )
        {
          UIButton__set_normalSprite((UIButton_o *)normalLabel, this->fields.onButtonName, 0LL);
          normalLabel = (UILabel_o *)this->fields.lowButton;
          if ( normalLabel )
          {
            offButtonName = this->fields.offButtonName;
            goto LABEL_23;
          }
        }
      }
    }
LABEL_24:
    sub_1BCAA3C(normalLabel, *(_QWORD *)&type);
  }
  if ( !normalLabel )
    goto LABEL_24;
  UILabel__set_effectColor(normalLabel, this->fields.offButtonOutlineColor, 0LL);
  normalLabel = this->fields.lowLabel;
  if ( !normalLabel )
    goto LABEL_24;
  UILabel__set_effectColor(normalLabel, this->fields.onButtonOutlineColor, 0LL);
  normalLabel = (UILabel_o *)this->fields.normalButton;
  if ( !normalLabel )
    goto LABEL_24;
  UIButton__set_normalSprite((UIButton_o *)normalLabel, this->fields.offButtonName, 0LL);
  normalLabel = (UILabel_o *)this->fields.lowButton;
  if ( !normalLabel )
    goto LABEL_24;
  offButtonName = this->fields.onButtonName;
LABEL_23:
  UIButton__set_normalSprite((UIButton_o *)normalLabel, offButtonName, 0LL);
}