void __fastcall SetResolutionOptionControl___ctor(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetResolutionOptionControl__Init(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  SetResolutionOptionControl_o *v2; // x19
  int enableResolutionSetting; // w8
  struct UILabel_o *lowLabel; // x8
  struct UnityEngine_Color_o mEffectColor; // q0
  struct UILabel_o *normalLabel; // x8
  System_String_o *normalSprite; // x0
  System_String_o *v8; // x0
  bool IsEnableResolutionSetting; // w0
  UILabel_o *infoLabel; // x20
  System_String_o **v11; // x8
  System_String_o *v12; // x21
  UILabel_o *v13; // x20
  UILabel_o *v14; // x20
  int32_t ResolutionType; // w1
  const MethodInfo *v16; // x2

  v2 = this;
  if ( (byte_4A56720 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&ResolutionManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9683/*"OPTION_RERSOLUTION_INFO_DISABLE"*/);
    sub_1B885B0(&StringLiteral_9682/*"OPTION_RERSOLUTION_INFO"*/);
    sub_1B885B0(&StringLiteral_9685/*"OPTION_RERSOLUTION_NORMAL"*/);
    this = (SetResolutionOptionControl_o *)sub_1B885B0(&StringLiteral_9684/*"OPTION_RERSOLUTION_LOW"*/);
    byte_4A56720 = 1;
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
    normalSprite = UIButton__get_normalSprite((UIButton_o *)this, 0LL);
    v2->fields.onButtonName = normalSprite;
    sub_1B88554(&v2->fields.onButtonName, normalSprite);
    this = (SetResolutionOptionControl_o *)v2->fields.normalButton;
    if ( !this )
      goto LABEL_23;
    v8 = UIButton__get_normalSprite((UIButton_o *)this, 0LL);
    v2->fields.offButtonName = v8;
    sub_1B88554(&v2->fields.offButtonName, v8);
    if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    IsEnableResolutionSetting = ResolutionManager__IsEnableResolutionSetting(0LL);
    enableResolutionSetting = IsEnableResolutionSetting;
    v2->fields.enableResolutionSetting = IsEnableResolutionSetting;
  }
  infoLabel = v2->fields.infoLabel;
  if ( enableResolutionSetting )
    v11 = (System_String_o **)&StringLiteral_9682/*"OPTION_RERSOLUTION_INFO"*/;
  else
    v11 = (System_String_o **)&StringLiteral_9683/*"OPTION_RERSOLUTION_INFO_DISABLE"*/;
  v12 = *v11;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (SetResolutionOptionControl_o *)LocalizationManager__Get(v12, 0LL);
  if ( !infoLabel
    || (UILabel__set_text(infoLabel, (System_String_o *)this, 0LL),
        v13 = v2->fields.normalLabel,
        this = (SetResolutionOptionControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9685/*"OPTION_RERSOLUTION_NORMAL"*/, 0LL),
        !v13)
    || (UILabel__set_text(v13, (System_String_o *)this, 0LL),
        v14 = v2->fields.lowLabel,
        this = (SetResolutionOptionControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9684/*"OPTION_RERSOLUTION_LOW"*/, 0LL),
        !v14) )
  {
LABEL_23:
    sub_1B8880C(this, method);
  }
  UILabel__set_text(v14, (System_String_o *)this, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  ResolutionType = OptionManager__GetResolutionType(0LL);
  SetResolutionOptionControl__RefreshDisplay(v2, ResolutionType, v16);
}


void __fastcall SetResolutionOptionControl__OnClickLowButton(
        SetResolutionOptionControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 enableResolutionSetting; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4A56722 & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SetResolutionOptionControl_OnClickLowButton__);
    byte_4A56722 = 1;
  }
  v3 = Method_SetResolutionOptionControl_OnClickLowButton__;
  enableResolutionSetting = this->fields.enableResolutionSetting;
  if ( (*((_BYTE *)Method_SetResolutionOptionControl_OnClickLowButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_SetResolutionOptionControl_OnClickLowButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  if ( enableResolutionSetting )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    SetResolutionOptionControl__RefreshDisplay(this, 1, v6);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__SetResolutionType(1, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0LL);
  }
}


void __fastcall SetResolutionOptionControl__OnClickNormalButton(
        SetResolutionOptionControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 enableResolutionSetting; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4A56721 & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SetResolutionOptionControl_OnClickNormalButton__);
    byte_4A56721 = 1;
  }
  v3 = Method_SetResolutionOptionControl_OnClickNormalButton__;
  enableResolutionSetting = this->fields.enableResolutionSetting;
  if ( (*((_BYTE *)Method_SetResolutionOptionControl_OnClickNormalButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_SetResolutionOptionControl_OnClickNormalButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  if ( enableResolutionSetting )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    SetResolutionOptionControl__RefreshDisplay(this, 0, v6);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__SetResolutionType(0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0LL);
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
                  lowButton->fields.hover = (struct UnityEngine_Color_o)xmmword_BB4110;
                  v7 = this->fields.lowButton;
                  if ( v7 )
                  {
                    v7->fields.pressed = (struct UnityEngine_Color_o)xmmword_BB4110;
                    v8 = this->fields.lowButton;
                    if ( v8 )
                    {
                      v8->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_BB4110;
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
    sub_1B8880C(normalLabel, *(_QWORD *)&type);
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