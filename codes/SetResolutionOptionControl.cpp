void __fastcall SetResolutionOptionControl___ctor(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetResolutionOptionControl__Init(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  SetResolutionOptionControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int enableResolutionSetting; // w8
  struct UILabel_o *lowLabel; // x8
  struct UnityEngine_Color_o mEffectColor; // q0
  struct UILabel_o *normalLabel; // x8
  bool IsEnableResolutionSetting; // w0
  UILabel_o *infoLabel; // x20
  System_String_o **v15; // x8
  System_String_o *v16; // x21
  UILabel_o *v17; // x20
  UILabel_o *v18; // x20
  int32_t ResolutionType; // w1
  const MethodInfo *v20; // x2

  v2 = this;
  if ( (byte_4B61F9E & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    sub_1BE4ACC(&OptionManager_TypeInfo, v3);
    sub_1BE4ACC(&ResolutionManager_TypeInfo, v4);
    sub_1BE4ACC(&StringLiteral_9839/*"OPTION_RERSOLUTION_INFO_DISABLE"*/, v5);
    sub_1BE4ACC(&StringLiteral_9838/*"OPTION_RERSOLUTION_INFO"*/, v6);
    sub_1BE4ACC(&StringLiteral_9841/*"OPTION_RERSOLUTION_NORMAL"*/, v7);
    this = (SetResolutionOptionControl_o *)sub_1BE4ACC(&StringLiteral_9840/*"OPTION_RERSOLUTION_LOW"*/, v8);
    byte_4B61F9E = 1;
  }
  if ( v2->fields.isInit )
  {
    enableResolutionSetting = v2->fields.enableResolutionSetting;
  }
  else
  {
    lowLabel = v2->fields.lowLabel;
    v2->fields.isInit = 1;
    if ( !lowLabel )
      goto LABEL_23;
    mEffectColor = lowLabel->fields.mEffectColor;
    normalLabel = v2->fields.normalLabel;
    v2->fields.onButtonOutlineColor = mEffectColor;
    if ( !normalLabel )
      goto LABEL_23;
    this = (SetResolutionOptionControl_o *)v2->fields.lowButton;
    v2->fields.offButtonOutlineColor = normalLabel->fields.mEffectColor;
    if ( !this )
      goto LABEL_23;
    v2->fields.onButtonName = UIButton__get_normalSprite((UIButton_o *)this, 0LL);
    sub_1BE4A70(&v2->fields.onButtonName);
    this = (SetResolutionOptionControl_o *)v2->fields.normalButton;
    if ( !this )
      goto LABEL_23;
    v2->fields.offButtonName = UIButton__get_normalSprite((UIButton_o *)this, 0LL);
    sub_1BE4A70(&v2->fields.offButtonName);
    if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    IsEnableResolutionSetting = ResolutionManager__IsEnableResolutionSetting(0LL);
    enableResolutionSetting = IsEnableResolutionSetting;
    v2->fields.enableResolutionSetting = IsEnableResolutionSetting;
  }
  infoLabel = v2->fields.infoLabel;
  if ( enableResolutionSetting )
    v15 = (System_String_o **)&StringLiteral_9838/*"OPTION_RERSOLUTION_INFO"*/;
  else
    v15 = (System_String_o **)&StringLiteral_9839/*"OPTION_RERSOLUTION_INFO_DISABLE"*/;
  v16 = *v15;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (SetResolutionOptionControl_o *)LocalizationManager__Get(v16, 0LL);
  if ( !infoLabel
    || (UILabel__set_text(infoLabel, (System_String_o *)this, 0LL),
        v17 = v2->fields.normalLabel,
        this = (SetResolutionOptionControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9841/*"OPTION_RERSOLUTION_NORMAL"*/, 0LL),
        !v17)
    || (UILabel__set_text(v17, (System_String_o *)this, 0LL),
        v18 = v2->fields.lowLabel,
        this = (SetResolutionOptionControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9840/*"OPTION_RERSOLUTION_LOW"*/, 0LL),
        !v18) )
  {
LABEL_23:
    sub_1BE4D28(this, method);
  }
  UILabel__set_text(v18, (System_String_o *)this, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  ResolutionType = OptionManager__GetResolutionType(0LL);
  SetResolutionOptionControl__RefreshDisplay(v2, ResolutionType, v20);
}


void __fastcall SetResolutionOptionControl__OnClickLowButton(
        SetResolutionOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  _BOOL4 enableResolutionSetting; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4B61FA0 & 1) == 0 )
  {
    sub_1BE4ACC(&OptionManager_TypeInfo, method);
    sub_1BE4ACC(&Method_SetResolutionOptionControl_OnClickLowButton__, v3);
    byte_4B61FA0 = 1;
  }
  v4 = Method_SetResolutionOptionControl_OnClickLowButton__;
  enableResolutionSetting = this->fields.enableResolutionSetting;
  if ( (*((_BYTE *)Method_SetResolutionOptionControl_OnClickLowButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BE4AE4(Method_SetResolutionOptionControl_OnClickLowButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
  if ( enableResolutionSetting )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    SetResolutionOptionControl__RefreshDisplay(this, 1, v7);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__SetResolutionType(1, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
  }
}


void __fastcall SetResolutionOptionControl__OnClickNormalButton(
        SetResolutionOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  _BOOL4 enableResolutionSetting; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4B61F9F & 1) == 0 )
  {
    sub_1BE4ACC(&OptionManager_TypeInfo, method);
    sub_1BE4ACC(&Method_SetResolutionOptionControl_OnClickNormalButton__, v3);
    byte_4B61F9F = 1;
  }
  v4 = Method_SetResolutionOptionControl_OnClickNormalButton__;
  enableResolutionSetting = this->fields.enableResolutionSetting;
  if ( (*((_BYTE *)Method_SetResolutionOptionControl_OnClickNormalButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BE4AE4(Method_SetResolutionOptionControl_OnClickNormalButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
  if ( enableResolutionSetting )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    SetResolutionOptionControl__RefreshDisplay(this, 0, v7);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__SetResolutionType(0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
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
                  lowButton->fields.hover = (struct UnityEngine_Color_o)xmmword_BE1890;
                  v7 = this->fields.lowButton;
                  if ( v7 )
                  {
                    v7->fields.pressed = (struct UnityEngine_Color_o)xmmword_BE1890;
                    v8 = this->fields.lowButton;
                    if ( v8 )
                    {
                      v8->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_BE1890;
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
    sub_1BE4D28(normalLabel, *(_QWORD *)&type);
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