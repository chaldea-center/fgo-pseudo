void SetResolutionOptionControl___ctor(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetResolutionOptionControl__Init(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SetResolutionOptionControl_o *v3; // x19
  int enableResolutionSetting; // w8
  struct UILabel_o *lowLabel; // x8
  struct UnityEngine_Color_o mEffectColor; // q0
  struct UILabel_o *normalLabel; // x8
  System_String_o *normalSprite; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x2
  bool IsEnableResolutionSetting; // w0
  UILabel_o *infoLabel; // x20
  System_String_o **v26; // x8
  System_String_o *v27; // x21
  UILabel_o *v28; // x20
  UILabel_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  int32_t ResolutionType; // w1
  const MethodInfo *v33; // x2

  v3 = this;
  if ( (byte_59334AA & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&ResolutionManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10074/*"OPTION_RERSOLUTION_INFO_DISABLE"*/);
    sub_21FFC50(&StringLiteral_10073/*"OPTION_RERSOLUTION_INFO"*/);
    sub_21FFC50(&StringLiteral_10076/*"OPTION_RERSOLUTION_NORMAL"*/);
    this = (SetResolutionOptionControl_o *)sub_21FFC50(&StringLiteral_10075/*"OPTION_RERSOLUTION_LOW"*/);
    byte_59334AA = 1;
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
    normalSprite = UIButton__get_normalSprite((UIButton_o *)this, 0);
    v3->fields.onButtonName = normalSprite;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v3->fields.onButtonName,
      (int32_t)normalSprite,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    this = (SetResolutionOptionControl_o *)v3->fields.normalButton;
    if ( !this )
      goto LABEL_23;
    v15 = UIButton__get_normalSprite((UIButton_o *)this, 0);
    v3->fields.offButtonName = v15;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v3->fields.offButtonName,
      (int32_t)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( !*(&ResolutionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo, v22, v23);
    IsEnableResolutionSetting = ResolutionManager__IsEnableResolutionSetting(0);
    enableResolutionSetting = IsEnableResolutionSetting;
    v3->fields.enableResolutionSetting = IsEnableResolutionSetting;
  }
  infoLabel = v3->fields.infoLabel;
  if ( enableResolutionSetting )
    v26 = (System_String_o **)&StringLiteral_10073/*"OPTION_RERSOLUTION_INFO"*/;
  else
    v26 = (System_String_o **)&StringLiteral_10074/*"OPTION_RERSOLUTION_INFO_DISABLE"*/;
  v27 = *v26;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  this = (SetResolutionOptionControl_o *)LocalizationManager__Get(v27, 0);
  if ( !infoLabel
    || (UILabel__set_text(infoLabel, (System_String_o *)this, 0),
        v28 = v3->fields.normalLabel,
        this = (SetResolutionOptionControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10076/*"OPTION_RERSOLUTION_NORMAL"*/, 0),
        !v28)
    || (UILabel__set_text(v28, (System_String_o *)this, 0),
        v29 = v3->fields.lowLabel,
        this = (SetResolutionOptionControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10075/*"OPTION_RERSOLUTION_LOW"*/, 0),
        !v29) )
  {
LABEL_23:
    sub_21FFECC(this, method);
  }
  UILabel__set_text(v29, (System_String_o *)this, 0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v30, v31);
  ResolutionType = OptionManager__GetResolutionType(0);
  SetResolutionOptionControl__RefreshDisplay(v3, ResolutionType, v33);
}


void SetResolutionOptionControl__OnClickLowButton(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_59334AC & 1) == 0 )
  {
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_SetResolutionOptionControl_OnClickLowButton__);
    byte_59334AC = 1;
  }
  v3 = Method_SetResolutionOptionControl_OnClickLowButton__;
  if ( this->fields.enableResolutionSetting )
  {
    if ( (*((_BYTE *)Method_SetResolutionOptionControl_OnClickLowButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SetResolutionOptionControl_OnClickLowButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SetResolutionOptionControl__RefreshDisplay(this, 1, v5);
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v6, v7);
    OptionManager__SetResolutionType(1, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_SetResolutionOptionControl_OnClickLowButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SetResolutionOptionControl_OnClickLowButton__);
    v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
  }
}


void SetResolutionOptionControl__OnClickNormalButton(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_59334AB & 1) == 0 )
  {
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_SetResolutionOptionControl_OnClickNormalButton__);
    byte_59334AB = 1;
  }
  v3 = Method_SetResolutionOptionControl_OnClickNormalButton__;
  if ( this->fields.enableResolutionSetting )
  {
    if ( (*((_BYTE *)Method_SetResolutionOptionControl_OnClickNormalButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SetResolutionOptionControl_OnClickNormalButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SetResolutionOptionControl__RefreshDisplay(this, 0, v5);
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v6, v7);
    OptionManager__SetResolutionType(0, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_SetResolutionOptionControl_OnClickNormalButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SetResolutionOptionControl_OnClickNormalButton__);
    v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
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
                  lowButton->fields.hover = (struct UnityEngine_Color_o)xmmword_E93FD0;
                  v7 = this->fields.lowButton;
                  if ( v7 )
                  {
                    v7->fields.pressed = (struct UnityEngine_Color_o)xmmword_E93FD0;
                    v8 = this->fields.lowButton;
                    if ( v8 )
                    {
                      v8->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_E93FD0;
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
    sub_21FFECC(normalLabel, *(_QWORD *)&type);
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