void __fastcall SetResolutionOptionControl___ctor(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetResolutionOptionControl__Init(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int klass_low; // w8
  struct UIButton_o *normalButton; // x8
  __int128 v11; // q0
  struct UILabel_o *lowLabel; // x8
  UIButton_o *v13; // x0
  struct System_String_o *normalSprite; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UIButton_o *lowButton; // x0
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  bool IsEnableResolutionSetting; // w0
  UILabel_o *normalLabel; // x20
  System_String_o **v31; // x8
  System_String_o *v32; // x21
  System_String_o *v33; // x0
  UILabel_o *v34; // x20
  System_String_o *v35; // x0
  UILabel_o *v36; // x20
  System_String_o *v37; // x0
  int32_t ResolutionType; // w1
  const MethodInfo *v39; // x2

  if ( (byte_40FF301 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&OptionManager_TypeInfo, v3);
    sub_B16FFC(&ResolutionManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_9770/*"OPTION_RERSOLUTION_INFO_DISABLE"*/, v5);
    sub_B16FFC(&StringLiteral_9769/*"OPTION_RERSOLUTION_INFO"*/, v6);
    sub_B16FFC(&StringLiteral_9772/*"OPTION_RERSOLUTION_NORMAL"*/, v7);
    sub_B16FFC(&StringLiteral_9771/*"OPTION_RERSOLUTION_LOW"*/, v8);
    byte_40FF301 = 1;
  }
  if ( LOBYTE(this->fields.onButtonOutlineColor.fields.g) )
  {
    klass_low = LOBYTE(this[1].klass);
  }
  else
  {
    normalButton = this->fields.normalButton;
    LOBYTE(this->fields.onButtonOutlineColor.fields.g) = 1;
    if ( !normalButton )
      goto LABEL_26;
    v11 = *(_OWORD *)&normalButton[1].fields.mSprite2D;
    lowLabel = this->fields.lowLabel;
    *(_OWORD *)&this->fields.onButtonOutlineColor.fields.b = v11;
    if ( !lowLabel )
      goto LABEL_26;
    v13 = *(UIButton_o **)&this->fields.isInit;
    *(struct UnityEngine_Color_o *)&this->fields.offButtonOutlineColor.fields.b = lowLabel->fields.mEffectColor;
    if ( !v13 )
      goto LABEL_26;
    normalSprite = UIButton__get_normalSprite(v13, 0LL);
    this->fields.offButtonName = normalSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.offButtonName,
      (System_Int32_array **)normalSprite,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    lowButton = this->fields.lowButton;
    if ( !lowButton )
      goto LABEL_26;
    v22 = (System_Int32_array **)UIButton__get_normalSprite(lowButton, 0LL);
    *(_QWORD *)&this->fields.enableResolutionSetting = v22;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.enableResolutionSetting, v22, v23, v24, v25, v26, v27, v28);
    if ( (BYTE3(ResolutionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ResolutionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    }
    IsEnableResolutionSetting = ResolutionManager__IsEnableResolutionSetting(0LL);
    klass_low = IsEnableResolutionSetting;
    LOBYTE(this[1].klass) = IsEnableResolutionSetting;
  }
  normalLabel = this->fields.normalLabel;
  if ( klass_low )
    v31 = (System_String_o **)&StringLiteral_9769/*"OPTION_RERSOLUTION_INFO"*/;
  else
    v31 = (System_String_o **)&StringLiteral_9770/*"OPTION_RERSOLUTION_INFO_DISABLE"*/;
  v32 = *v31;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v33 = LocalizationManager__Get(v32, 0LL);
  if ( !normalLabel
    || (UILabel__set_text(normalLabel, v33, 0LL),
        v34 = this->fields.lowLabel,
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_9772/*"OPTION_RERSOLUTION_NORMAL"*/, 0LL),
        !v34)
    || (UILabel__set_text(v34, v35, 0LL),
        v36 = (UILabel_o *)this->fields.normalButton,
        v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9771/*"OPTION_RERSOLUTION_LOW"*/, 0LL),
        !v36) )
  {
LABEL_26:
    sub_B170D4();
  }
  UILabel__set_text(v36, v37, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  ResolutionType = OptionManager__GetResolutionType(0LL);
  SetResolutionOptionControl__RefreshDisplay(this, ResolutionType, v39);
}


void __fastcall SetResolutionOptionControl__OnClickLowButton(
        SetResolutionOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2

  if ( (byte_40FF303 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FF303 = 1;
  }
  if ( LOBYTE(this[1].klass) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    SetResolutionOptionControl__RefreshDisplay(this, 1, v4);
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__SetResolutionType(1, 0LL);
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
}


void __fastcall SetResolutionOptionControl__OnClickNormalButton(
        SetResolutionOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2

  if ( (byte_40FF302 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FF302 = 1;
  }
  if ( LOBYTE(this[1].klass) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    SetResolutionOptionControl__RefreshDisplay(this, 0, v4);
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__SetResolutionType(0, 0LL);
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetResolutionOptionControl__RefreshDisplay(
        SetResolutionOptionControl_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UILabel_o *v4; // x0
  UILabel_o *v5; // x0
  UIButton_o *v6; // x0
  UIButton_o *v7; // x0
  System_String_o *offButtonName; // x1
  UILabel_o *lowLabel; // x0
  UILabel_o *normalButton; // x0
  UIButton_o *lowButton; // x0
  UIButton_o *v12; // x0
  UIWidget_o *v13; // x20
  int v14; // s0
  UIButtonColor_o *v18; // x20
  int v19; // s0
  _DWORD *v23; // x20
  int v24; // s0
  int v25; // s1
  int v26; // s2
  int v27; // s3
  _DWORD *v28; // x20
  int v29; // s0
  int v30; // s1
  int v31; // s2
  int v32; // s3
  _DWORD *v33; // x19
  int v34; // s0
  int v35; // s1
  int v36; // s2
  int v37; // s3
  UILabel_o *v38; // x0
  UIButton_o *v39; // x0

  if ( !LOBYTE(this[1].klass) )
  {
    lowLabel = this->fields.lowLabel;
    if ( lowLabel )
    {
      UILabel__set_effectColor(lowLabel, *(UnityEngine_Color_o *)&this->fields.onButtonOutlineColor.fields.b, 0LL);
      normalButton = (UILabel_o *)this->fields.normalButton;
      if ( normalButton )
      {
        UILabel__set_effectColor(
          normalButton,
          *(UnityEngine_Color_o *)&this->fields.offButtonOutlineColor.fields.b,
          0LL);
        lowButton = this->fields.lowButton;
        if ( lowButton )
        {
          UIButton__set_normalSprite(lowButton, this->fields.offButtonName, 0LL);
          v12 = *(UIButton_o **)&this->fields.isInit;
          if ( v12 )
          {
            UIButton__set_normalSprite(v12, *(System_String_o **)&this->fields.enableResolutionSetting, 0LL);
            v13 = (UIWidget_o *)this->fields.normalButton;
            *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_grey(0LL);
            if ( v13 )
            {
              UIWidget__set_color(v13, *(UnityEngine_Color_o *)&v14, 0LL);
              v18 = *(UIButtonColor_o **)&this->fields.isInit;
              *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_grey(0LL);
              if ( v18 )
              {
                UIButtonColor__set_defaultColor(v18, *(UnityEngine_Color_o *)&v19, 0LL);
                v23 = *(_DWORD **)&this->fields.isInit;
                *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_grey(0LL);
                if ( v23 )
                {
                  v23[8] = v24;
                  v23[9] = v25;
                  v23[10] = v26;
                  v23[11] = v27;
                  v28 = *(_DWORD **)&this->fields.isInit;
                  *(UnityEngine_Color_o *)&v29 = UnityEngine_Color__get_grey(0LL);
                  if ( v28 )
                  {
                    v28[12] = v29;
                    v28[13] = v30;
                    v28[14] = v31;
                    v28[15] = v32;
                    v33 = *(_DWORD **)&this->fields.isInit;
                    *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_grey(0LL);
                    if ( v33 )
                    {
                      v33[16] = v34;
                      v33[17] = v35;
                      v33[18] = v36;
                      v33[19] = v37;
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
  v4 = this->fields.lowLabel;
  if ( !type )
  {
    if ( v4 )
    {
      UILabel__set_effectColor(v4, *(UnityEngine_Color_o *)&this->fields.onButtonOutlineColor.fields.b, 0LL);
      v38 = (UILabel_o *)this->fields.normalButton;
      if ( v38 )
      {
        UILabel__set_effectColor(v38, *(UnityEngine_Color_o *)&this->fields.offButtonOutlineColor.fields.b, 0LL);
        v39 = this->fields.lowButton;
        if ( v39 )
        {
          UIButton__set_normalSprite(v39, this->fields.offButtonName, 0LL);
          v7 = *(UIButton_o **)&this->fields.isInit;
          if ( v7 )
          {
            offButtonName = *(System_String_o **)&this->fields.enableResolutionSetting;
            goto LABEL_23;
          }
        }
      }
    }
LABEL_24:
    sub_B170D4();
  }
  if ( !v4 )
    goto LABEL_24;
  UILabel__set_effectColor(v4, *(UnityEngine_Color_o *)&this->fields.offButtonOutlineColor.fields.b, 0LL);
  v5 = (UILabel_o *)this->fields.normalButton;
  if ( !v5 )
    goto LABEL_24;
  UILabel__set_effectColor(v5, *(UnityEngine_Color_o *)&this->fields.onButtonOutlineColor.fields.b, 0LL);
  v6 = this->fields.lowButton;
  if ( !v6 )
    goto LABEL_24;
  UIButton__set_normalSprite(v6, *(System_String_o **)&this->fields.enableResolutionSetting, 0LL);
  v7 = *(UIButton_o **)&this->fields.isInit;
  if ( !v7 )
    goto LABEL_24;
  offButtonName = this->fields.offButtonName;
LABEL_23:
  UIButton__set_normalSprite(v7, offButtonName, 0LL);
}