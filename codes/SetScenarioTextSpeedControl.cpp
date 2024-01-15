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
  struct UILabel_o *v12; // x0
  const MethodInfo *v13; // x1
  UILabel_o *scenarioScrollSpeedSlider; // x20
  System_String_o *v15; // x0
  float ScenarioScrollSpeed; // s0
  struct UILabel_o *scenarioScrollSpeedValueTxt; // x8
  struct UILabel_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_40FF311 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&OptionManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_9774/*"OPTION_SCENARIO_SCROLL_SPEED"*/, v5);
    sub_B16FFC(&StringLiteral_9777/*"OPTION_SCENARIO_TEXT_SPEED"*/, v6);
    byte_40FF311 = 1;
  }
  scenarioTextSpeedSlider = (UILabel_o *)this->fields.scenarioTextSpeedSlider;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_9777/*"OPTION_SCENARIO_TEXT_SPEED"*/, 0LL);
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
  v12 = this->fields.scenarioTextSpeedValueTxt;
  if ( !v12 )
    goto LABEL_19;
  UIProgressBar__set_value(
    (UIProgressBar_o *)v12,
    (float)(this->fields.scenarioScrollSpeedValue - BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow),
    0LL);
  SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(this, v13);
  scenarioScrollSpeedSlider = (UILabel_o *)this->fields.scenarioScrollSpeedSlider;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9774/*"OPTION_SCENARIO_SCROLL_SPEED"*/, 0LL);
  if ( !scenarioScrollSpeedSlider
    || (UILabel__set_text(scenarioScrollSpeedSlider, v15, 0LL),
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
        (v18 = this->fields.scenarioScrollSpeedValueTxt) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  UIProgressBar__set_value(
    (UIProgressBar_o *)v18,
    (float)(*((float *)&this[1].klass + 1) - BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow),
    0LL);
  SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(this, v19);
}


void __fastcall SetScenarioTextSpeedControl__Reflection(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  float scenarioScrollSpeedValue; // s8

  if ( (byte_40FF312 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FF312 = 1;
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

  if ( (byte_40FF316 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FF316 = 1;
  }
  scenarioScrollSpeedValueTxt = this->fields.scenarioScrollSpeedValueTxt;
  if ( !scenarioScrollSpeedValueTxt )
    sub_B170D4();
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

  if ( (byte_40FF314 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FF314 = 1;
  }
  scenarioTextSpeedValueTxt = this->fields.scenarioTextSpeedValueTxt;
  if ( !scenarioTextSpeedValueTxt )
    sub_B170D4();
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
  BalanceConfig_c *v7; // x0
  UILabel_o *v8; // x19
  float ScenarioScrollSpeedHigh; // s0
  System_String_o *v10; // x0
  System_String_o *v11; // x1

  if ( (byte_40FF315 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&StringLiteral_8653/*"MAX"*/, v3);
    sub_B16FFC(&StringLiteral_6798/*"G2"*/, v4);
    byte_40FF315 = 1;
  }
  v5 = (System_String_o *)((char *)&this[1].klass + 4);
  v6 = *((float *)&this[1].klass + 1);
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = *(UILabel_o **)&this->fields.scenarioTextSpeedStep;
  ScenarioScrollSpeedHigh = v7->static_fields->ScenarioScrollSpeedHigh;
  if ( v6 >= ScenarioScrollSpeedHigh )
  {
    if ( v8 )
    {
      v11 = (System_String_o *)StringLiteral_8653/*"MAX"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_B170D4();
  }
  v10 = System_Single__ToString_43730404(ScenarioScrollSpeedHigh, v5, (const MethodInfo *)StringLiteral_6798/*"G2"*/);
  if ( !v8 )
    goto LABEL_12;
  v11 = v10;
LABEL_11:
  UILabel__set_text(v8, v11, 0LL);
}


void __fastcall SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  float *p_scenarioScrollSpeedValue; // x20
  float scenarioScrollSpeedValue; // s8
  BalanceConfig_c *v7; // x0
  UILabel_o *scenarioScrollSpeedTxt; // x19
  float ScenarioTextSpeedHigh; // s0
  System_String_o *v10; // x0
  System_String_o *v11; // x1

  if ( (byte_40FF313 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&StringLiteral_8653/*"MAX"*/, v3);
    sub_B16FFC(&StringLiteral_6798/*"G2"*/, v4);
    byte_40FF313 = 1;
  }
  p_scenarioScrollSpeedValue = &this->fields.scenarioScrollSpeedValue;
  scenarioScrollSpeedValue = this->fields.scenarioScrollSpeedValue;
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  scenarioScrollSpeedTxt = this->fields.scenarioScrollSpeedTxt;
  ScenarioTextSpeedHigh = v7->static_fields->ScenarioTextSpeedHigh;
  if ( scenarioScrollSpeedValue >= ScenarioTextSpeedHigh )
  {
    if ( scenarioScrollSpeedTxt )
    {
      v11 = (System_String_o *)StringLiteral_8653/*"MAX"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_B170D4();
  }
  v10 = System_Single__ToString_43730404(
          ScenarioTextSpeedHigh,
          (System_String_o *)p_scenarioScrollSpeedValue,
          (const MethodInfo *)StringLiteral_6798/*"G2"*/);
  if ( !scenarioScrollSpeedTxt )
    goto LABEL_12;
  v11 = v10;
LABEL_11:
  UILabel__set_text(scenarioScrollSpeedTxt, v11, 0LL);
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
  struct UILabel_o *scenarioTextSpeedValueTxt; // x0
  __int64 v9; // x1
  BalanceConfig_c *v10; // x0

  if ( (byte_40FF317 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&OptionManager_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FF317 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !byte_40FF3C5 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FF3C5 = 1;
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
  scenarioTextSpeedValueTxt = this->fields.scenarioTextSpeedValueTxt;
  if ( !scenarioTextSpeedValueTxt )
    goto LABEL_26;
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioTextSpeedValueTxt,
    (float)(ScenarioTextSpeedDefault - static_fields->ScenarioTextSpeedLow)
  / (float)(static_fields->ScenarioTextSpeedHigh - static_fields->ScenarioTextSpeedLow),
    0LL);
  if ( !byte_40FF3C6 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v9);
    byte_40FF3C6 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  if ( !this->fields.scenarioScrollSpeedValueTxt )
LABEL_26:
    sub_B170D4();
  UIProgressBar__set_value(
    (UIProgressBar_o *)this->fields.scenarioScrollSpeedValueTxt,
    (float)(v10->static_fields->ScenarioScrollSpeedDefault - v10->static_fields->ScenarioScrollSpeedLow)
  / (float)(v10->static_fields->ScenarioScrollSpeedHigh - v10->static_fields->ScenarioScrollSpeedLow),
    0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}