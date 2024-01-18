void __fastcall SetResolutionOptionControl___ctor(SetResolutionOptionControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
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
  int klass_low; // w8
  struct UIButton_o *normalButton; // x8
  __int128 v11; // q0
  struct UILabel_o *lowLabel; // x8
  System_Int32_array **normalSprite; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  bool IsEnableResolutionSetting; // w0
  UILabel_o *normalLabel; // x20
  System_String_o **v29; // x8
  System_String_o *v30; // x21
  UILabel_o *v31; // x20
  UILabel_o *v32; // x20
  int32_t ResolutionType; // w1
  const MethodInfo *v34; // x2

  v2 = this;
  if ( (byte_418BC1F & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&OptionManager_TypeInfo, v3);
    sub_B2C35C(&ResolutionManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_9800/*"OPTION_RERSOLUTION_INFO_DISABLE"*/, v5);
    sub_B2C35C(&StringLiteral_9799/*"OPTION_RERSOLUTION_INFO"*/, v6);
    sub_B2C35C(&StringLiteral_9802/*"OPTION_RERSOLUTION_NORMAL"*/, v7);
    this = (SetResolutionOptionControl_o *)sub_B2C35C(&StringLiteral_9801/*"OPTION_RERSOLUTION_LOW"*/, v8);
    byte_418BC1F = 1;
  }
  if ( LOBYTE(v2->fields.onButtonOutlineColor.fields.g) )
  {
    klass_low = LOBYTE(v2[1].klass);
  }
  else
  {
    normalButton = v2->fields.normalButton;
    LOBYTE(v2->fields.onButtonOutlineColor.fields.g) = 1;
    if ( !normalButton )
      goto LABEL_26;
    v11 = *(_OWORD *)&normalButton[1].fields.mSprite2D;
    lowLabel = v2->fields.lowLabel;
    *(_OWORD *)&v2->fields.onButtonOutlineColor.fields.b = v11;
    if ( !lowLabel )
      goto LABEL_26;
    this = *(SetResolutionOptionControl_o **)&v2->fields.isInit;
    *(struct UnityEngine_Color_o *)&v2->fields.offButtonOutlineColor.fields.b = lowLabel->fields.mEffectColor;
    if ( !this )
      goto LABEL_26;
    normalSprite = (System_Int32_array **)UIButton__get_normalSprite((UIButton_o *)this, 0LL);
    v2->fields.offButtonName = (struct System_String_o *)normalSprite;
    sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.offButtonName, normalSprite, v14, v15, v16, v17, v18, v19);
    this = (SetResolutionOptionControl_o *)v2->fields.lowButton;
    if ( !this )
      goto LABEL_26;
    v20 = (System_Int32_array **)UIButton__get_normalSprite((UIButton_o *)this, 0LL);
    *(_QWORD *)&v2->fields.enableResolutionSetting = v20;
    sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.enableResolutionSetting, v20, v21, v22, v23, v24, v25, v26);
    if ( (BYTE3(ResolutionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ResolutionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ResolutionManager_TypeInfo);
    }
    IsEnableResolutionSetting = ResolutionManager__IsEnableResolutionSetting(0LL);
    klass_low = IsEnableResolutionSetting;
    LOBYTE(v2[1].klass) = IsEnableResolutionSetting;
  }
  normalLabel = v2->fields.normalLabel;
  if ( klass_low )
    v29 = (System_String_o **)&StringLiteral_9799/*"OPTION_RERSOLUTION_INFO"*/;
  else
    v29 = (System_String_o **)&StringLiteral_9800/*"OPTION_RERSOLUTION_INFO_DISABLE"*/;
  v30 = *v29;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (SetResolutionOptionControl_o *)LocalizationManager__Get(v30, 0LL);
  if ( !normalLabel
    || (UILabel__set_text(normalLabel, (System_String_o *)this, 0LL),
        v31 = v2->fields.lowLabel,
        this = (SetResolutionOptionControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9802/*"OPTION_RERSOLUTION_NORMAL"*/, 0LL),
        !v31)
    || (UILabel__set_text(v31, (System_String_o *)this, 0LL),
        v32 = (UILabel_o *)v2->fields.normalButton,
        this = (SetResolutionOptionControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9801/*"OPTION_RERSOLUTION_LOW"*/, 0LL),
        !v32) )
  {
LABEL_26:
    sub_B2C434(this, method);
  }
  UILabel__set_text(v32, (System_String_o *)this, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  ResolutionType = OptionManager__GetResolutionType(0LL);
  SetResolutionOptionControl__RefreshDisplay(v2, ResolutionType, v34);
}


void __fastcall SetResolutionOptionControl__OnClickLowButton(
        SetResolutionOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2

  if ( (byte_418BC21 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418BC21 = 1;
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

  if ( (byte_418BC20 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418BC20 = 1;
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
    sub_B2C434(lowLabel, *(_QWORD *)&type);
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