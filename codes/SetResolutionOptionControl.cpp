void __fastcall SetResolutionOptionControl___ctor(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetResolutionOptionControl__Init(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SetResolutionOptionControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int klass_low; // w8
  struct UIButton_o *normalButton; // x8
  __int128 v25; // q0
  struct UILabel_o *lowLabel; // x8
  System_Int32_array **normalSprite; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  bool IsEnableResolutionSetting; // w0
  UILabel_o *normalLabel; // x20
  System_String_o **v43; // x8
  System_String_o *v44; // x21
  UILabel_o *v45; // x20
  UILabel_o *v46; // x20
  int32_t ResolutionType; // w1
  const MethodInfo *v48; // x2

  v4 = this;
  if ( (byte_42ECED1 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ResolutionManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9906/*"OPTION_RERSOLUTION_INFO_DISABLE"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_9905/*"OPTION_RERSOLUTION_INFO"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_9908/*"OPTION_RERSOLUTION_NORMAL"*/, v17, v18, v19);
    this = (SetResolutionOptionControl_o *)sub_B5D5C4(&StringLiteral_9907/*"OPTION_RERSOLUTION_LOW"*/, v20, v21, v22);
    byte_42ECED1 = 1;
  }
  if ( LOBYTE(v4->fields.onButtonOutlineColor.fields.g) )
  {
    klass_low = LOBYTE(v4[1].klass);
  }
  else
  {
    normalButton = v4->fields.normalButton;
    LOBYTE(v4->fields.onButtonOutlineColor.fields.g) = 1;
    if ( !normalButton )
      goto LABEL_26;
    v25 = *(_OWORD *)&normalButton[1].fields.mSprite2D;
    lowLabel = v4->fields.lowLabel;
    *(_OWORD *)&v4->fields.onButtonOutlineColor.fields.b = v25;
    if ( !lowLabel )
      goto LABEL_26;
    this = *(SetResolutionOptionControl_o **)&v4->fields.isInit;
    *(struct UnityEngine_Color_o *)&v4->fields.offButtonOutlineColor.fields.b = lowLabel->fields.mEffectColor;
    if ( !this )
      goto LABEL_26;
    normalSprite = (System_Int32_array **)UIButton__get_normalSprite((UIButton_o *)this, 0LL);
    v4->fields.offButtonName = (struct System_String_o *)normalSprite;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.offButtonName, normalSprite, v28, v29, v30, v31, v32, v33);
    this = (SetResolutionOptionControl_o *)v4->fields.lowButton;
    if ( !this )
      goto LABEL_26;
    v34 = (System_Int32_array **)UIButton__get_normalSprite((UIButton_o *)this, 0LL);
    *(_QWORD *)&v4->fields.enableResolutionSetting = v34;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.enableResolutionSetting, v34, v35, v36, v37, v38, v39, v40);
    if ( (BYTE3(ResolutionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ResolutionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    }
    IsEnableResolutionSetting = ResolutionManager__IsEnableResolutionSetting(0LL);
    klass_low = IsEnableResolutionSetting;
    LOBYTE(v4[1].klass) = IsEnableResolutionSetting;
  }
  normalLabel = v4->fields.normalLabel;
  if ( klass_low )
    v43 = (System_String_o **)&StringLiteral_9905/*"OPTION_RERSOLUTION_INFO"*/;
  else
    v43 = (System_String_o **)&StringLiteral_9906/*"OPTION_RERSOLUTION_INFO_DISABLE"*/;
  v44 = *v43;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (SetResolutionOptionControl_o *)LocalizationManager__Get(v44, 0LL);
  if ( !normalLabel
    || (UILabel__set_text(normalLabel, (System_String_o *)this, 0LL),
        v45 = v4->fields.lowLabel,
        this = (SetResolutionOptionControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9908/*"OPTION_RERSOLUTION_NORMAL"*/, 0LL),
        !v45)
    || (UILabel__set_text(v45, (System_String_o *)this, 0LL),
        v46 = (UILabel_o *)v4->fields.normalButton,
        this = (SetResolutionOptionControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9907/*"OPTION_RERSOLUTION_LOW"*/, 0LL),
        !v46) )
  {
LABEL_26:
    sub_B5D69C(this, method);
  }
  UILabel__set_text(v46, (System_String_o *)this, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  ResolutionType = OptionManager__GetResolutionType(0LL);
  SetResolutionOptionControl__RefreshDisplay(v4, ResolutionType, v48);
}


void __fastcall SetResolutionOptionControl__OnClickLowButton(
        SetResolutionOptionControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_42ECED3 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42ECED3 = 1;
  }
  if ( LOBYTE(this[1].klass) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    SetResolutionOptionControl__RefreshDisplay(this, 1, v8);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_42ECED2 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42ECED2 = 1;
  }
  if ( LOBYTE(this[1].klass) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    SetResolutionOptionControl__RefreshDisplay(this, 0, v8);
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
  UILabel_o *lowLabel; // x0
  System_String_o *offButtonName; // x1
  UIWidget_o *normalButton; // x20
  int v7; // s0
  UIButtonColor_o *v11; // x20
  int v12; // s0
  _DWORD *v16; // x20
  int v17; // s0
  int v18; // s1
  int v19; // s2
  int v20; // s3
  _DWORD *v21; // x20
  int v22; // s0
  int v23; // s1
  int v24; // s2
  int v25; // s3
  _DWORD *v26; // x19
  int v27; // s0
  int v28; // s1
  int v29; // s2
  int v30; // s3

  if ( !LOBYTE(this[1].klass) )
  {
    lowLabel = this->fields.lowLabel;
    if ( lowLabel )
    {
      UILabel__set_effectColor(lowLabel, *(UnityEngine_Color_o *)&this->fields.onButtonOutlineColor.fields.b, 0LL);
      lowLabel = (UILabel_o *)this->fields.normalButton;
      if ( lowLabel )
      {
        UILabel__set_effectColor(lowLabel, *(UnityEngine_Color_o *)&this->fields.offButtonOutlineColor.fields.b, 0LL);
        lowLabel = (UILabel_o *)this->fields.lowButton;
        if ( lowLabel )
        {
          UIButton__set_normalSprite((UIButton_o *)lowLabel, this->fields.offButtonName, 0LL);
          lowLabel = *(UILabel_o **)&this->fields.isInit;
          if ( lowLabel )
          {
            UIButton__set_normalSprite(
              (UIButton_o *)lowLabel,
              *(System_String_o **)&this->fields.enableResolutionSetting,
              0LL);
            normalButton = (UIWidget_o *)this->fields.normalButton;
            *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_grey(0LL);
            if ( normalButton )
            {
              UIWidget__set_color(normalButton, *(UnityEngine_Color_o *)&v7, 0LL);
              v11 = *(UIButtonColor_o **)&this->fields.isInit;
              *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_grey(0LL);
              if ( v11 )
              {
                UIButtonColor__set_defaultColor(v11, *(UnityEngine_Color_o *)&v12, 0LL);
                v16 = *(_DWORD **)&this->fields.isInit;
                *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_grey(0LL);
                if ( v16 )
                {
                  v16[8] = v17;
                  v16[9] = v18;
                  v16[10] = v19;
                  v16[11] = v20;
                  v21 = *(_DWORD **)&this->fields.isInit;
                  *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_grey(0LL);
                  if ( v21 )
                  {
                    v21[12] = v22;
                    v21[13] = v23;
                    v21[14] = v24;
                    v21[15] = v25;
                    v26 = *(_DWORD **)&this->fields.isInit;
                    *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_grey(0LL);
                    if ( v26 )
                    {
                      v26[16] = v27;
                      v26[17] = v28;
                      v26[18] = v29;
                      v26[19] = v30;
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
  lowLabel = this->fields.lowLabel;
  if ( !type )
  {
    if ( lowLabel )
    {
      UILabel__set_effectColor(lowLabel, *(UnityEngine_Color_o *)&this->fields.onButtonOutlineColor.fields.b, 0LL);
      lowLabel = (UILabel_o *)this->fields.normalButton;
      if ( lowLabel )
      {
        UILabel__set_effectColor(lowLabel, *(UnityEngine_Color_o *)&this->fields.offButtonOutlineColor.fields.b, 0LL);
        lowLabel = (UILabel_o *)this->fields.lowButton;
        if ( lowLabel )
        {
          UIButton__set_normalSprite((UIButton_o *)lowLabel, this->fields.offButtonName, 0LL);
          lowLabel = *(UILabel_o **)&this->fields.isInit;
          if ( lowLabel )
          {
            offButtonName = *(System_String_o **)&this->fields.enableResolutionSetting;
            goto LABEL_23;
          }
        }
      }
    }
LABEL_24:
    sub_B5D69C(lowLabel, *(_QWORD *)&type);
  }
  if ( !lowLabel )
    goto LABEL_24;
  UILabel__set_effectColor(lowLabel, *(UnityEngine_Color_o *)&this->fields.offButtonOutlineColor.fields.b, 0LL);
  lowLabel = (UILabel_o *)this->fields.normalButton;
  if ( !lowLabel )
    goto LABEL_24;
  UILabel__set_effectColor(lowLabel, *(UnityEngine_Color_o *)&this->fields.onButtonOutlineColor.fields.b, 0LL);
  lowLabel = (UILabel_o *)this->fields.lowButton;
  if ( !lowLabel )
    goto LABEL_24;
  UIButton__set_normalSprite((UIButton_o *)lowLabel, *(System_String_o **)&this->fields.enableResolutionSetting, 0LL);
  lowLabel = *(UILabel_o **)&this->fields.isInit;
  if ( !lowLabel )
    goto LABEL_24;
  offButtonName = this->fields.offButtonName;
LABEL_23:
  UIButton__set_normalSprite((UIButton_o *)lowLabel, offButtonName, 0LL);
}