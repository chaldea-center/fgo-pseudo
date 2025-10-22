void SetResolutionOptionControl___ctor(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetResolutionOptionControl__Init(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  SetResolutionOptionControl_o *v2; // x19
  int enableResolutionSetting; // w8
  struct UILabel_o *lowLabel; // x8
  struct UnityEngine_Color_o mEffectColor; // q0
  struct UILabel_o *normalLabel; // x8
  System_String_o *normalSprite; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool IsEnableResolutionSetting; // w0
  UILabel_o *infoLabel; // x20
  System_String_o **v15; // x8
  System_String_o *v16; // x21
  UILabel_o *v17; // x20
  UILabel_o *v18; // x20
  int32_t ResolutionType; // w1
  const MethodInfo *v20; // x2

  v2 = this;
  if ( (byte_4C51D96 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&OptionManager_TypeInfo);
    sub_1C3E564(&ResolutionManager_TypeInfo);
    sub_1C3E564(&StringLiteral_9689/*"OPTION_RERSOLUTION_INFO_DISABLE"*/);
    sub_1C3E564(&StringLiteral_9688/*"OPTION_RERSOLUTION_INFO"*/);
    sub_1C3E564(&StringLiteral_9691/*"OPTION_RERSOLUTION_NORMAL"*/);
    this = (SetResolutionOptionControl_o *)sub_1C3E564(&StringLiteral_9690/*"OPTION_RERSOLUTION_LOW"*/);
    byte_4C51D96 = 1;
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
    normalSprite = UIButton__get_normalSprite((UIButton_o *)this, 0);
    v2->fields.onButtonName = normalSprite;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.onButtonName, (int32_t)normalSprite, v8, v9);
    this = (SetResolutionOptionControl_o *)v2->fields.normalButton;
    if ( !this )
      goto LABEL_23;
    v10 = UIButton__get_normalSprite((UIButton_o *)this, 0);
    v2->fields.offButtonName = v10;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.offButtonName, (int32_t)v10, v11, v12);
    if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    IsEnableResolutionSetting = ResolutionManager__IsEnableResolutionSetting(0);
    enableResolutionSetting = IsEnableResolutionSetting;
    v2->fields.enableResolutionSetting = IsEnableResolutionSetting;
  }
  infoLabel = v2->fields.infoLabel;
  if ( enableResolutionSetting )
    v15 = (System_String_o **)&StringLiteral_9688/*"OPTION_RERSOLUTION_INFO"*/;
  else
    v15 = (System_String_o **)&StringLiteral_9689/*"OPTION_RERSOLUTION_INFO_DISABLE"*/;
  v16 = *v15;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (SetResolutionOptionControl_o *)LocalizationManager__Get(v16, 0);
  if ( !infoLabel
    || (UILabel__set_text(infoLabel, (System_String_o *)this, 0),
        v17 = v2->fields.normalLabel,
        this = (SetResolutionOptionControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9691/*"OPTION_RERSOLUTION_NORMAL"*/, 0),
        !v17)
    || (UILabel__set_text(v17, (System_String_o *)this, 0),
        v18 = v2->fields.lowLabel,
        this = (SetResolutionOptionControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9690/*"OPTION_RERSOLUTION_LOW"*/, 0),
        !v18) )
  {
LABEL_23:
    sub_1C3E7C0(this, method);
  }
  UILabel__set_text(v18, (System_String_o *)this, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  ResolutionType = OptionManager__GetResolutionType(0);
  SetResolutionOptionControl__RefreshDisplay(v2, ResolutionType, v20);
}


void SetResolutionOptionControl__OnClickLowButton(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 enableResolutionSetting; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C51D98 & 1) == 0 )
  {
    sub_1C3E564(&OptionManager_TypeInfo);
    sub_1C3E564(&Method_SetResolutionOptionControl_OnClickLowButton__);
    byte_4C51D98 = 1;
  }
  v3 = Method_SetResolutionOptionControl_OnClickLowButton__;
  enableResolutionSetting = this->fields.enableResolutionSetting;
  if ( (*((_BYTE *)Method_SetResolutionOptionControl_OnClickLowButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_SetResolutionOptionControl_OnClickLowButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  if ( enableResolutionSetting )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    SetResolutionOptionControl__RefreshDisplay(this, 1, v6);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__SetResolutionType(1, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
}


void SetResolutionOptionControl__OnClickNormalButton(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 enableResolutionSetting; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C51D97 & 1) == 0 )
  {
    sub_1C3E564(&OptionManager_TypeInfo);
    sub_1C3E564(&Method_SetResolutionOptionControl_OnClickNormalButton__);
    byte_4C51D97 = 1;
  }
  v3 = Method_SetResolutionOptionControl_OnClickNormalButton__;
  enableResolutionSetting = this->fields.enableResolutionSetting;
  if ( (*((_BYTE *)Method_SetResolutionOptionControl_OnClickNormalButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_SetResolutionOptionControl_OnClickNormalButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  if ( enableResolutionSetting )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    SetResolutionOptionControl__RefreshDisplay(this, 0, v6);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__SetResolutionType(0, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void SetResolutionOptionControl__RefreshDisplay(
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
      UILabel__set_effectColor(normalLabel, this->fields.onButtonOutlineColor, 0);
      normalLabel = this->fields.lowLabel;
      if ( normalLabel )
      {
        UILabel__set_effectColor(normalLabel, this->fields.offButtonOutlineColor, 0);
        normalLabel = (UILabel_o *)this->fields.normalButton;
        if ( normalLabel )
        {
          UIButton__set_normalSprite((UIButton_o *)normalLabel, this->fields.onButtonName, 0);
          normalLabel = (UILabel_o *)this->fields.lowButton;
          if ( normalLabel )
          {
            UIButton__set_normalSprite((UIButton_o *)normalLabel, this->fields.offButtonName, 0);
            normalLabel = this->fields.lowLabel;
            if ( normalLabel )
            {
              v9.fields.r = 0.5;
              v9.fields.g = 0.5;
              v9.fields.b = 0.5;
              v9.fields.a = 1.0;
              UIWidget__set_color((UIWidget_o *)normalLabel, v9, 0);
              normalLabel = (UILabel_o *)this->fields.lowButton;
              if ( normalLabel )
              {
                v10.fields.r = 0.5;
                v10.fields.g = 0.5;
                v10.fields.b = 0.5;
                v10.fields.a = 1.0;
                UIButtonColor__set_defaultColor((UIButtonColor_o *)normalLabel, v10, 0);
                lowButton = this->fields.lowButton;
                if ( lowButton )
                {
                  lowButton->fields.hover = (struct UnityEngine_Color_o)xmmword_C11A90;
                  v7 = this->fields.lowButton;
                  if ( v7 )
                  {
                    v7->fields.pressed = (struct UnityEngine_Color_o)xmmword_C11A90;
                    v8 = this->fields.lowButton;
                    if ( v8 )
                    {
                      v8->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_C11A90;
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
      UILabel__set_effectColor(normalLabel, this->fields.onButtonOutlineColor, 0);
      normalLabel = this->fields.lowLabel;
      if ( normalLabel )
      {
        UILabel__set_effectColor(normalLabel, this->fields.offButtonOutlineColor, 0);
        normalLabel = (UILabel_o *)this->fields.normalButton;
        if ( normalLabel )
        {
          UIButton__set_normalSprite((UIButton_o *)normalLabel, this->fields.onButtonName, 0);
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
    sub_1C3E7C0(normalLabel, *(_QWORD *)&type);
  }
  if ( !normalLabel )
    goto LABEL_24;
  UILabel__set_effectColor(normalLabel, this->fields.offButtonOutlineColor, 0);
  normalLabel = this->fields.lowLabel;
  if ( !normalLabel )
    goto LABEL_24;
  UILabel__set_effectColor(normalLabel, this->fields.onButtonOutlineColor, 0);
  normalLabel = (UILabel_o *)this->fields.normalButton;
  if ( !normalLabel )
    goto LABEL_24;
  UIButton__set_normalSprite((UIButton_o *)normalLabel, this->fields.offButtonName, 0);
  normalLabel = (UILabel_o *)this->fields.lowButton;
  if ( !normalLabel )
    goto LABEL_24;
  offButtonName = this->fields.onButtonName;
LABEL_23:
  UIButton__set_normalSprite((UIButton_o *)normalLabel, offButtonName, 0);
}