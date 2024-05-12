void __fastcall SetScenarioTextSpeedControl___ctor(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetScenarioTextSpeedControl__Init(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  UILabel_o *scenarioTextSpeedSlider; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  float ScenarioTextSpeed; // s0
  struct UILabel_o *scenarioTextSpeedValueTxt; // x8
  const MethodInfo *v9; // x1
  UILabel_o *scenarioScrollSpeedSlider; // x20
  float ScenarioScrollSpeed; // s0
  struct UILabel_o *scenarioScrollSpeedValueTxt; // x8
  const MethodInfo *v13; // x1

  if ( (byte_438F97E & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&StringLiteral_9985/*"OPTION_SCENARIO_SCROLL_SPEED"*/);
    sub_B775C4(&StringLiteral_9988/*"OPTION_SCENARIO_TEXT_SPEED"*/);
    byte_438F97E = 1;
  }
  scenarioTextSpeedSlider = (UILabel_o *)this->fields.scenarioTextSpeedSlider;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9988/*"OPTION_SCENARIO_TEXT_SPEED"*/, 0LL);
  if ( !scenarioTextSpeedSlider )
    goto LABEL_19;
  UILabel__set_text(scenarioTextSpeedSlider, v4, 0LL);
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioScrollSpeedStep = UnityEngine_Mathf__CeilToInt(
                                           (float)(v6->static_fields->ScenarioTextSpeedHigh
                                                 - v6->static_fields->ScenarioTextSpeedLow)
                                         / v6->static_fields->ScenarioTextSpeedStep,
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
  v4 = (System_String_o *)this->fields.scenarioTextSpeedValueTxt;
  if ( !v4 )
    goto LABEL_19;
  UIProgressBar__set_value(
    (UIProgressBar_o *)v4,
    (float)(this->fields.scenarioScrollSpeedValue - BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow),
    0LL);
  SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(this, v9);
  scenarioScrollSpeedSlider = (UILabel_o *)this->fields.scenarioScrollSpeedSlider;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9985/*"OPTION_SCENARIO_SCROLL_SPEED"*/, 0LL);
  if ( !scenarioScrollSpeedSlider
    || (UILabel__set_text(scenarioScrollSpeedSlider, v4, 0LL),
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
        (v4 = (System_String_o *)this->fields.scenarioScrollSpeedValueTxt) == 0LL) )
  {
LABEL_19:
    sub_B7769C(v4, v5);
  }
  UIProgressBar__set_value(
    (UIProgressBar_o *)v4,
    (float)(*((float *)&this[1].klass + 1) - BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow),
    0LL);
  SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(this, v13);
}


void __fastcall SetScenarioTextSpeedControl__Reflection(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  float scenarioScrollSpeedValue; // s8

  if ( (byte_438F97F & 1) == 0 )
  {
    sub_B775C4(&OptionManager_TypeInfo);
    byte_438F97F = 1;
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

  if ( (byte_438F983 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_438F983 = 1;
  }
  scenarioScrollSpeedValueTxt = this->fields.scenarioScrollSpeedValueTxt;
  if ( !scenarioScrollSpeedValueTxt )
    sub_B7769C(0LL, method);
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

  if ( (byte_438F981 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_438F981 = 1;
  }
  scenarioTextSpeedValueTxt = this->fields.scenarioTextSpeedValueTxt;
  if ( !scenarioTextSpeedValueTxt )
    sub_B7769C(0LL, method);
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
  System_String_o *v3; // x20
  float v4; // s8
  System_String_o *v5; // x0
  UILabel_o *v6; // x19
  float v7; // s0
  System_String_o *v8; // x1

  if ( (byte_438F982 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&StringLiteral_8843/*"MAX"*/);
    sub_B775C4(&StringLiteral_6979/*"G2"*/);
    byte_438F982 = 1;
  }
  v3 = (System_String_o *)((char *)&this[1].klass + 4);
  v4 = *((float *)&this[1].klass + 1);
  v5 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  v6 = *(UILabel_o **)&this->fields.scenarioTextSpeedStep;
  v7 = *(float *)(*(_QWORD *)&v5[7].fields + 572LL);
  if ( v4 >= v7 )
  {
    if ( v6 )
    {
      v8 = (System_String_o *)StringLiteral_8843/*"MAX"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_B7769C(v5, method);
  }
  v5 = System_Single__ToString_44888608(v7, v3, (const MethodInfo *)StringLiteral_6979/*"G2"*/);
  if ( !v6 )
    goto LABEL_12;
  v8 = v5;
LABEL_11:
  UILabel__set_text(v6, v8, 0LL);
}


void __fastcall SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  float *p_scenarioScrollSpeedValue; // x20
  float scenarioScrollSpeedValue; // s8
  System_String_o *v5; // x0
  UILabel_o *scenarioScrollSpeedTxt; // x19
  float v7; // s0
  System_String_o *v8; // x1

  if ( (byte_438F980 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&StringLiteral_8843/*"MAX"*/);
    sub_B775C4(&StringLiteral_6979/*"G2"*/);
    byte_438F980 = 1;
  }
  p_scenarioScrollSpeedValue = &this->fields.scenarioScrollSpeedValue;
  scenarioScrollSpeedValue = this->fields.scenarioScrollSpeedValue;
  v5 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  scenarioScrollSpeedTxt = this->fields.scenarioScrollSpeedTxt;
  v7 = *(float *)(*(_QWORD *)&v5[7].fields + 556LL);
  if ( scenarioScrollSpeedValue >= v7 )
  {
    if ( scenarioScrollSpeedTxt )
    {
      v8 = (System_String_o *)StringLiteral_8843/*"MAX"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_B7769C(v5, method);
  }
  v5 = System_Single__ToString_44888608(
         v7,
         (System_String_o *)p_scenarioScrollSpeedValue,
         (const MethodInfo *)StringLiteral_6979/*"G2"*/);
  if ( !scenarioScrollSpeedTxt )
    goto LABEL_12;
  v8 = v5;
LABEL_11:
  UILabel__set_text(scenarioScrollSpeedTxt, v8, 0LL);
}


void __fastcall SetScenarioTextSpeedControl__setDefaultValue(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioTextSpeedDefault; // s8
  UIProgressBar_o *scenarioTextSpeedValueTxt; // x0

  if ( (byte_438F984 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F984 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !byte_438FA35 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_438FA35 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
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
      v3 = BalanceConfig_TypeInfo;
      static_fields = BalanceConfig_TypeInfo->static_fields;
      ScenarioTextSpeedDefault = static_fields->ScenarioTextSpeedDefault;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_15;
    }
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
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
  if ( !byte_438FA36 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_438FA36 = 1;
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
    sub_B7769C(scenarioTextSpeedValueTxt, method);
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