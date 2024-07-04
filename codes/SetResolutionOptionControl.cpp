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
  System_String_o *normalSprite; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  bool IsEnableResolutionSetting; // w0
  UILabel_o *infoLabel; // x20
  System_String_o **v21; // x8
  System_String_o *v22; // x21
  UILabel_o *v23; // x20
  UILabel_o *v24; // x20
  int32_t ResolutionType; // w1
  const MethodInfo *v26; // x2

  v2 = this;
  if ( (byte_48DE193 & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, method);
    sub_1B00CCC(&OptionManager_TypeInfo, v3);
    sub_1B00CCC(&ResolutionManager_TypeInfo, v4);
    sub_1B00CCC(&StringLiteral_9575/*"OPTION_RERSOLUTION_INFO_DISABLE"*/, v5);
    sub_1B00CCC(&StringLiteral_9574/*"OPTION_RERSOLUTION_INFO"*/, v6);
    sub_1B00CCC(&StringLiteral_9577/*"OPTION_RERSOLUTION_NORMAL"*/, v7);
    this = (SetResolutionOptionControl_o *)sub_1B00CCC(&StringLiteral_9576/*"OPTION_RERSOLUTION_LOW"*/, v8);
    byte_48DE193 = 1;
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
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.onButtonName, (int32_t)normalSprite, v14, v15);
    this = (SetResolutionOptionControl_o *)v2->fields.normalButton;
    if ( !this )
      goto LABEL_23;
    v16 = UIButton__get_normalSprite((UIButton_o *)this, 0LL);
    v2->fields.offButtonName = v16;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.offButtonName, (int32_t)v16, v17, v18);
    if ( !ResolutionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    IsEnableResolutionSetting = ResolutionManager__IsEnableResolutionSetting(0LL);
    enableResolutionSetting = IsEnableResolutionSetting;
    v2->fields.enableResolutionSetting = IsEnableResolutionSetting;
  }
  infoLabel = v2->fields.infoLabel;
  if ( enableResolutionSetting )
    v21 = (System_String_o **)&StringLiteral_9574/*"OPTION_RERSOLUTION_INFO"*/;
  else
    v21 = (System_String_o **)&StringLiteral_9575/*"OPTION_RERSOLUTION_INFO_DISABLE"*/;
  v22 = *v21;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (SetResolutionOptionControl_o *)LocalizationManager__Get(v22, 0LL);
  if ( !infoLabel
    || (UILabel__set_text(infoLabel, (System_String_o *)this, 0LL),
        v23 = v2->fields.normalLabel,
        this = (SetResolutionOptionControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9577/*"OPTION_RERSOLUTION_NORMAL"*/, 0LL),
        !v23)
    || (UILabel__set_text(v23, (System_String_o *)this, 0LL),
        v24 = v2->fields.lowLabel,
        this = (SetResolutionOptionControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9576/*"OPTION_RERSOLUTION_LOW"*/, 0LL),
        !v24) )
  {
LABEL_23:
    sub_1B00F28(this, method);
  }
  UILabel__set_text(v24, (System_String_o *)this, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  ResolutionType = OptionManager__GetResolutionType(0LL);
  SetResolutionOptionControl__RefreshDisplay(v2, ResolutionType, v26);
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

  if ( (byte_48DE195 & 1) == 0 )
  {
    sub_1B00CCC(&OptionManager_TypeInfo, method);
    sub_1B00CCC(&Method_SetResolutionOptionControl_OnClickLowButton__, v3);
    byte_48DE195 = 1;
  }
  v4 = Method_SetResolutionOptionControl_OnClickLowButton__;
  enableResolutionSetting = this->fields.enableResolutionSetting;
  if ( (*((_BYTE *)Method_SetResolutionOptionControl_OnClickLowButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B00CE4(Method_SetResolutionOptionControl_OnClickLowButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v4, v4[4]);
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

  if ( (byte_48DE194 & 1) == 0 )
  {
    sub_1B00CCC(&OptionManager_TypeInfo, method);
    sub_1B00CCC(&Method_SetResolutionOptionControl_OnClickNormalButton__, v3);
    byte_48DE194 = 1;
  }
  v4 = Method_SetResolutionOptionControl_OnClickNormalButton__;
  enableResolutionSetting = this->fields.enableResolutionSetting;
  if ( (*((_BYTE *)Method_SetResolutionOptionControl_OnClickNormalButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B00CE4(Method_SetResolutionOptionControl_OnClickNormalButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v4, v4[4]);
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
                  lowButton->fields.hover = (struct UnityEngine_Color_o)xmmword_B70510;
                  v7 = this->fields.lowButton;
                  if ( v7 )
                  {
                    v7->fields.pressed = (struct UnityEngine_Color_o)xmmword_B70510;
                    v8 = this->fields.lowButton;
                    if ( v8 )
                    {
                      v8->fields.disabledColor = (struct UnityEngine_Color_o)xmmword_B70510;
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
    sub_1B00F28(normalLabel, *(_QWORD *)&type);
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