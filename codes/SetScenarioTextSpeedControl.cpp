void __fastcall SetScenarioTextSpeedControl___ctor(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetScenarioTextSpeedControl__Init(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *scenarioTextSpeedSlider; // x20
  System_String_o *v8; // x0
  BalanceConfig_c *v9; // x0
  float ScenarioTextSpeed; // s0
  struct UILabel_o *scenarioTextSpeedValueTxt; // x8
  const MethodInfo *v12; // x1
  UILabel_o *scenarioScrollSpeedSlider; // x20
  float ScenarioScrollSpeed; // s0
  struct UILabel_o *scenarioScrollSpeedValueTxt; // x8
  const MethodInfo *v16; // x1

  if ( (byte_4218A51 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&OptionManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_9828/*"OPTION_SCENARIO_SCROLL_SPEED"*/, v5);
    sub_B0D8A4(&StringLiteral_9831/*"OPTION_SCENARIO_TEXT_SPEED"*/, v6);
    byte_4218A51 = 1;
  }
  scenarioTextSpeedSlider = (UILabel_o *)this->fields.scenarioTextSpeedSlider;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_9831/*"OPTION_SCENARIO_TEXT_SPEED"*/, 0LL);
  if ( !scenarioTextSpeedSlider )
    goto LABEL_19;
  UILabel__set_text(scenarioTextSpeedSlider, v8, 0LL);
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioScrollSpeedStep = UnityEngine_Mathf__CeilToInt(
                                           (float)(v9->static_fields->ScenarioTextSpeedHigh
                                                 - v9->static_fields->ScenarioTextSpeedLow)
                                         / v9->static_fields->ScenarioTextSpeedStep,
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
  v8 = (System_String_o *)this->fields.scenarioTextSpeedValueTxt;
  if ( !v8 )
    goto LABEL_19;
  UIProgressBar__set_value(
    (UIProgressBar_o *)v8,
    (float)(this->fields.scenarioScrollSpeedValue - BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow),
    0LL);
  SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(this, v12);
  scenarioScrollSpeedSlider = (UILabel_o *)this->fields.scenarioScrollSpeedSlider;
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_9828/*"OPTION_SCENARIO_SCROLL_SPEED"*/, 0LL);
  if ( !scenarioScrollSpeedSlider
    || (UILabel__set_text(scenarioScrollSpeedSlider, v8, 0LL),
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
        (v8 = (System_String_o *)this->fields.scenarioScrollSpeedValueTxt) == 0LL) )
  {
LABEL_19:
    sub_B0D97C(v8);
  }
  UIProgressBar__set_value(
    (UIProgressBar_o *)v8,
    (float)(*((float *)&this[1].klass + 1) - BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow),
    0LL);
  SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(this, v16);
}


void __fastcall SetScenarioTextSpeedControl__Reflection(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  float scenarioScrollSpeedValue; // s8

  if ( (byte_4218A52 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4218A52 = 1;
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
  struct UILabel_o *scenarioScrollSpeedValueTxt; // x0
  float value; // s8
  BalanceConfig_c *v5; // x0
  int32_t v6; // w0
  const MethodInfo *v7; // x1

  if ( (byte_4218A56 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_4218A56 = 1;
  }
  scenarioScrollSpeedValueTxt = this->fields.scenarioScrollSpeedValueTxt;
  if ( !scenarioScrollSpeedValueTxt )
    sub_B0D97C(0LL);
  value = UIProgressBar__get_value((UIProgressBar_o *)scenarioScrollSpeedValueTxt, 0LL);
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = UnityEngine_Mathf__FloorToInt(
         v5->static_fields->ScenarioScrollSpeedLow
       + (float)(value * (float)(v5->static_fields->ScenarioScrollSpeedHigh - v5->static_fields->ScenarioScrollSpeedLow)),
         0LL);
  *((float *)&this[1].klass + 1) = UnityEngine_Mathf__Max(
                                     (float)v6,
                                     BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow,
                                     0LL);
  SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(this, v7);
}


void __fastcall SetScenarioTextSpeedControl__getChangeScenarioTextSpeedValue(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *scenarioTextSpeedValueTxt; // x0
  float value; // s8
  BalanceConfig_c *v5; // x0
  int32_t v6; // w0
  const MethodInfo *v7; // x1

  if ( (byte_4218A54 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_4218A54 = 1;
  }
  scenarioTextSpeedValueTxt = this->fields.scenarioTextSpeedValueTxt;
  if ( !scenarioTextSpeedValueTxt )
    sub_B0D97C(0LL);
  value = UIProgressBar__get_value((UIProgressBar_o *)scenarioTextSpeedValueTxt, 0LL);
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = UnityEngine_Mathf__FloorToInt(
         v5->static_fields->ScenarioTextSpeedLow
       + (float)(value * (float)(v5->static_fields->ScenarioTextSpeedHigh - v5->static_fields->ScenarioTextSpeedLow)),
         0LL);
  this->fields.scenarioScrollSpeedValue = UnityEngine_Mathf__Max(
                                            (float)v6,
                                            BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow,
                                            0LL);
  SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(this, v7);
}


void __fastcall SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x20
  float v6; // s8
  System_String_o *v7; // x0
  UILabel_o *v8; // x19
  float v9; // s0
  System_String_o *v10; // x1

  if ( (byte_4218A55 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_8704/*"MAX"*/, v3);
    sub_B0D8A4(&StringLiteral_6846/*"G2"*/, v4);
    byte_4218A55 = 1;
  }
  v5 = (System_String_o *)((char *)&this[1].klass + 4);
  v6 = *((float *)&this[1].klass + 1);
  v7 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  v8 = *(UILabel_o **)&this->fields.scenarioTextSpeedStep;
  v9 = *(float *)(*(_QWORD *)&v7[7].fields + 572LL);
  if ( v6 >= v9 )
  {
    if ( v8 )
    {
      v10 = (System_String_o *)StringLiteral_8704/*"MAX"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_B0D97C(v7);
  }
  v7 = System_Single__ToString_43836576(v9, v5, (const MethodInfo *)StringLiteral_6846/*"G2"*/);
  if ( !v8 )
    goto LABEL_12;
  v10 = v7;
LABEL_11:
  UILabel__set_text(v8, v10, 0LL);
}


void __fastcall SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  float *p_scenarioScrollSpeedValue; // x20
  float scenarioScrollSpeedValue; // s8
  System_String_o *v7; // x0
  UILabel_o *scenarioScrollSpeedTxt; // x19
  float v9; // s0
  System_String_o *v10; // x1

  if ( (byte_4218A53 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_8704/*"MAX"*/, v3);
    sub_B0D8A4(&StringLiteral_6846/*"G2"*/, v4);
    byte_4218A53 = 1;
  }
  p_scenarioScrollSpeedValue = &this->fields.scenarioScrollSpeedValue;
  scenarioScrollSpeedValue = this->fields.scenarioScrollSpeedValue;
  v7 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  scenarioScrollSpeedTxt = this->fields.scenarioScrollSpeedTxt;
  v9 = *(float *)(*(_QWORD *)&v7[7].fields + 556LL);
  if ( scenarioScrollSpeedValue >= v9 )
  {
    if ( scenarioScrollSpeedTxt )
    {
      v10 = (System_String_o *)StringLiteral_8704/*"MAX"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_B0D97C(v7);
  }
  v7 = System_Single__ToString_43836576(
         v9,
         (System_String_o *)p_scenarioScrollSpeedValue,
         (const MethodInfo *)StringLiteral_6846/*"G2"*/);
  if ( !scenarioScrollSpeedTxt )
    goto LABEL_12;
  v10 = v7;
LABEL_11:
  UILabel__set_text(scenarioScrollSpeedTxt, v10, 0LL);
}


void __fastcall SetScenarioTextSpeedControl__setDefaultValue(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioTextSpeedDefault; // s8
  UIProgressBar_o *scenarioTextSpeedValueTxt; // x0
  __int64 v9; // x1

  if ( (byte_4218A57 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&OptionManager_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4218A57 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !byte_4218B09 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_4218B09 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
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
      v5 = BalanceConfig_TypeInfo;
      static_fields = BalanceConfig_TypeInfo->static_fields;
      ScenarioTextSpeedDefault = static_fields->ScenarioTextSpeedDefault;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_15;
    }
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
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
  if ( !byte_4218B0A )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v9);
    byte_4218B0A = 1;
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
    sub_B0D97C(scenarioTextSpeedValueTxt);
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