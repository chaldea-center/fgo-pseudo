void __fastcall SetScenarioTextSpeedControl___ctor(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetScenarioTextSpeedControl__Init(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
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
  UILabel_o *scenarioTextSpeedSlider; // x20
  System_String_o *v18; // x0
  __int64 v19; // x1
  BalanceConfig_c *v20; // x0
  float ScenarioTextSpeed; // s0
  struct UILabel_o *scenarioTextSpeedValueTxt; // x8
  const MethodInfo *v23; // x1
  UILabel_o *scenarioScrollSpeedSlider; // x20
  float ScenarioScrollSpeed; // s0
  struct UILabel_o *scenarioScrollSpeedValueTxt; // x8
  const MethodInfo *v27; // x1

  if ( (byte_42ECEE1 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&OptionManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9910/*"OPTION_SCENARIO_SCROLL_SPEED"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_9913/*"OPTION_SCENARIO_TEXT_SPEED"*/, v14, v15, v16);
    byte_42ECEE1 = 1;
  }
  scenarioTextSpeedSlider = (UILabel_o *)this->fields.scenarioTextSpeedSlider;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_9913/*"OPTION_SCENARIO_TEXT_SPEED"*/, 0LL);
  if ( !scenarioTextSpeedSlider )
    goto LABEL_19;
  UILabel__set_text(scenarioTextSpeedSlider, v18, 0LL);
  v20 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioScrollSpeedStep = UnityEngine_Mathf__CeilToInt(
                                           (float)(v20->static_fields->ScenarioTextSpeedHigh
                                                 - v20->static_fields->ScenarioTextSpeedLow)
                                         / v20->static_fields->ScenarioTextSpeedStep,
                                           0LL)
                                       + 1;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  ScenarioTextSpeed = OptionManager__GetScenarioTextSpeed(0LL);
  scenarioTextSpeedValueTxt = this->fields.scenarioTextSpeedValueTxt;
  this->fields.scenarioScrollSpeedValue = ScenarioTextSpeed;
  if ( !scenarioTextSpeedValueTxt )
    goto LABEL_19;
  scenarioTextSpeedValueTxt->fields.mUpdateFrame = this->fields.scenarioScrollSpeedStep;
  v18 = (System_String_o *)this->fields.scenarioTextSpeedValueTxt;
  if ( !v18 )
    goto LABEL_19;
  UIProgressBar__set_value(
    (UIProgressBar_o *)v18,
    (float)(this->fields.scenarioScrollSpeedValue - BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow),
    0LL);
  SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(this, v23);
  scenarioScrollSpeedSlider = (UILabel_o *)this->fields.scenarioScrollSpeedSlider;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_9910/*"OPTION_SCENARIO_SCROLL_SPEED"*/, 0LL);
  if ( !scenarioScrollSpeedSlider
    || (UILabel__set_text(scenarioScrollSpeedSlider, v18, 0LL),
        LODWORD(this[1].klass) = UnityEngine_Mathf__CeilToInt(
                                   (float)(BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedHigh
                                         - BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow)
                                 / BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedStep,
                                   0LL)
                               + 1,
        ScenarioScrollSpeed = OptionManager__GetScenarioScrollSpeed(0LL),
        scenarioScrollSpeedValueTxt = this->fields.scenarioScrollSpeedValueTxt,
        *((float *)&this[1].klass + 1) = ScenarioScrollSpeed,
        !scenarioScrollSpeedValueTxt)
    || (scenarioScrollSpeedValueTxt->fields.mUpdateFrame = (int32_t)this[1].klass,
        (v18 = (System_String_o *)this->fields.scenarioScrollSpeedValueTxt) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(v18, v19);
  }
  UIProgressBar__set_value(
    (UIProgressBar_o *)v18,
    (float)(*((float *)&this[1].klass + 1) - BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow),
    0LL);
  SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(this, v27);
}


void __fastcall SetScenarioTextSpeedControl__Reflection(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float scenarioScrollSpeedValue; // s8

  if ( (byte_42ECEE2 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECEE2 = 1;
  }
  scenarioScrollSpeedValue = this->fields.scenarioScrollSpeedValue;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetScenarioTextSpeed(scenarioScrollSpeedValue, 0LL);
  OptionManager__SetScenarioScrollSpeed(*((float *)&this[1].klass + 1), 0LL);
}


void __fastcall SetScenarioTextSpeedControl__getChangeScenarioScrollSpeedValue(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UILabel_o *scenarioScrollSpeedValueTxt; // x0
  float value; // s8
  BalanceConfig_c *v7; // x0
  int32_t v8; // w0
  const MethodInfo *v9; // x1

  if ( (byte_42ECEE6 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECEE6 = 1;
  }
  scenarioScrollSpeedValueTxt = this->fields.scenarioScrollSpeedValueTxt;
  if ( !scenarioScrollSpeedValueTxt )
    sub_B5D69C(0LL, method);
  value = UIProgressBar__get_value((UIProgressBar_o *)scenarioScrollSpeedValueTxt, 0LL);
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = UnityEngine_Mathf__FloorToInt(
         v7->static_fields->ScenarioScrollSpeedLow
       + (float)(value * (float)(v7->static_fields->ScenarioScrollSpeedHigh - v7->static_fields->ScenarioScrollSpeedLow)),
         0LL);
  *((float *)&this[1].klass + 1) = UnityEngine_Mathf__Max(
                                     (float)v8,
                                     BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow,
                                     0LL);
  SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(this, v9);
}


void __fastcall SetScenarioTextSpeedControl__getChangeScenarioTextSpeedValue(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UILabel_o *scenarioTextSpeedValueTxt; // x0
  float value; // s8
  BalanceConfig_c *v7; // x0
  int32_t v8; // w0
  const MethodInfo *v9; // x1

  if ( (byte_42ECEE4 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECEE4 = 1;
  }
  scenarioTextSpeedValueTxt = this->fields.scenarioTextSpeedValueTxt;
  if ( !scenarioTextSpeedValueTxt )
    sub_B5D69C(0LL, method);
  value = UIProgressBar__get_value((UIProgressBar_o *)scenarioTextSpeedValueTxt, 0LL);
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = UnityEngine_Mathf__FloorToInt(
         v7->static_fields->ScenarioTextSpeedLow
       + (float)(value * (float)(v7->static_fields->ScenarioTextSpeedHigh - v7->static_fields->ScenarioTextSpeedLow)),
         0LL);
  this->fields.scenarioScrollSpeedValue = UnityEngine_Mathf__Max(
                                            (float)v8,
                                            BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow,
                                            0LL);
  SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(this, v9);
}


void __fastcall SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *v11; // x20
  float v12; // s8
  System_String_o *v13; // x0
  UILabel_o *v14; // x19
  float v15; // s0
  System_String_o *v16; // x1

  if ( (byte_42ECEE5 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_8772/*"MAX"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6909/*"G2"*/, v8, v9, v10);
    byte_42ECEE5 = 1;
  }
  v11 = (System_String_o *)((char *)&this[1].klass + 4);
  v12 = *((float *)&this[1].klass + 1);
  v13 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  v14 = *(UILabel_o **)&this->fields.scenarioTextSpeedStep;
  v15 = *(float *)(*(_QWORD *)&v13[7].fields + 572LL);
  if ( v12 >= v15 )
  {
    if ( v14 )
    {
      v16 = (System_String_o *)StringLiteral_8772/*"MAX"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_B5D69C(v13, method);
  }
  v13 = System_Single__ToString_44564460(v15, v11, (const MethodInfo *)StringLiteral_6909/*"G2"*/);
  if ( !v14 )
    goto LABEL_12;
  v16 = v13;
LABEL_11:
  UILabel__set_text(v14, v16, 0LL);
}


void __fastcall SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  float *p_scenarioScrollSpeedValue; // x20
  float scenarioScrollSpeedValue; // s8
  System_String_o *v13; // x0
  UILabel_o *scenarioScrollSpeedTxt; // x19
  float v15; // s0
  System_String_o *v16; // x1

  if ( (byte_42ECEE3 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_8772/*"MAX"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6909/*"G2"*/, v8, v9, v10);
    byte_42ECEE3 = 1;
  }
  p_scenarioScrollSpeedValue = &this->fields.scenarioScrollSpeedValue;
  scenarioScrollSpeedValue = this->fields.scenarioScrollSpeedValue;
  v13 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  scenarioScrollSpeedTxt = this->fields.scenarioScrollSpeedTxt;
  v15 = *(float *)(*(_QWORD *)&v13[7].fields + 556LL);
  if ( scenarioScrollSpeedValue >= v15 )
  {
    if ( scenarioScrollSpeedTxt )
    {
      v16 = (System_String_o *)StringLiteral_8772/*"MAX"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_B5D69C(v13, method);
  }
  v13 = System_Single__ToString_44564460(
          v15,
          (System_String_o *)p_scenarioScrollSpeedValue,
          (const MethodInfo *)StringLiteral_6909/*"G2"*/);
  if ( !scenarioScrollSpeedTxt )
    goto LABEL_12;
  v16 = v13;
LABEL_11:
  UILabel__set_text(scenarioScrollSpeedTxt, v16, 0LL);
}


void __fastcall SetScenarioTextSpeedControl__setDefaultValue(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BalanceConfig_c *v11; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioTextSpeedDefault; // s8
  UIProgressBar_o *scenarioTextSpeedValueTxt; // x0
  int v15; // w2
  __int64 v16; // x3

  if ( (byte_42ECEE7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42ECEE7 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !byte_42ECF98 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECF98 = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    if ( BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      static_fields = BalanceConfig_TypeInfo->static_fields;
      ScenarioTextSpeedDefault = static_fields->ScenarioTextSpeedDefault;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
      static_fields = BalanceConfig_TypeInfo->static_fields;
      ScenarioTextSpeedDefault = static_fields->ScenarioTextSpeedDefault;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_15;
    }
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
  }
  else
  {
    static_fields = BalanceConfig_TypeInfo->static_fields;
    ScenarioTextSpeedDefault = static_fields->ScenarioTextSpeedDefault;
  }
LABEL_15:
  scenarioTextSpeedValueTxt = (UIProgressBar_o *)this->fields.scenarioTextSpeedValueTxt;
  if ( !scenarioTextSpeedValueTxt )
    goto LABEL_26;
  UIProgressBar__set_value(
    scenarioTextSpeedValueTxt,
    (float)(ScenarioTextSpeedDefault - static_fields->ScenarioTextSpeedLow)
  / (float)(static_fields->ScenarioTextSpeedHigh - static_fields->ScenarioTextSpeedLow),
    0LL);
  if ( !byte_42ECF99 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v15, v16);
    byte_42ECF99 = 1;
  }
  scenarioTextSpeedValueTxt = (UIProgressBar_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    scenarioTextSpeedValueTxt = (UIProgressBar_o *)BalanceConfig_TypeInfo;
  }
  if ( !this->fields.scenarioScrollSpeedValueTxt )
LABEL_26:
    sub_B5D69C(scenarioTextSpeedValueTxt, method);
  UIProgressBar__set_value(
    (UIProgressBar_o *)this->fields.scenarioScrollSpeedValueTxt,
    (float)(*(float *)&scenarioTextSpeedValueTxt[1].fields.mCam[24].klass
          - *(float *)&scenarioTextSpeedValueTxt[1].fields.mCam[23].fields.m_CachedPtr)
  / (float)(*((float *)&scenarioTextSpeedValueTxt[1].fields.mCam[23].fields + 1)
          - *(float *)&scenarioTextSpeedValueTxt[1].fields.mCam[23].fields.m_CachedPtr),
    0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}