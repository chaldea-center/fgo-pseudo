void __fastcall SetScenarioControl___ctor(SetScenarioControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


// attributes: thunk
void __fastcall SetScenarioControl__Init(SetScenarioControl_o *this, const MethodInfo *method)
{
  SetScenarioControl__initSetValue(this, method);
}


void __fastcall SetScenarioControl__Reflection(SetScenarioControl_o *this, const MethodInfo *method)
{
  float scenarioTextWaitTimeSecondValue; // s8

  if ( (byte_4218A4B & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4218A4B = 1;
  }
  scenarioTextWaitTimeSecondValue = this->fields.scenarioTextWaitTimeSecondValue;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetScenarioSpeed(scenarioTextWaitTimeSecondValue, 0LL);
  OptionManager__SetScenarioTextWaitTimeSecond(*((float *)&this[1].klass + 1), 0LL);
}


void __fastcall SetScenarioControl__getChangeScenarioSpeedValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *scenarioSpeedValueTxt; // x0
  const MethodInfo *v4; // x1
  float value; // s8
  BalanceConfig_c *v6; // x0

  if ( (byte_4218A4D & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_4218A4D = 1;
  }
  scenarioSpeedValueTxt = this->fields.scenarioSpeedValueTxt;
  if ( !scenarioSpeedValueTxt )
    sub_B0D97C(0LL);
  value = UIProgressBar__get_value((UIProgressBar_o *)scenarioSpeedValueTxt, 0LL);
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioTextWaitTimeSecondValue = v6->static_fields->ScenarioSpeedLow
                                               + (float)(value
                                                       * (float)(v6->static_fields->ScenarioSpeedHigh
                                                               - v6->static_fields->ScenarioSpeedLow));
  SetScenarioControl__setChangeScenarioSpeedText(this, v4);
}


void __fastcall SetScenarioControl__getScenarioTextWaitTimeSecond(SetScenarioControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *scenarioTextWaitValueTxt; // x0
  const MethodInfo *v4; // x1
  float value; // s8
  BalanceConfig_c *v6; // x0

  if ( (byte_4218A4F & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_4218A4F = 1;
  }
  scenarioTextWaitValueTxt = this->fields.scenarioTextWaitValueTxt;
  if ( !scenarioTextWaitValueTxt )
    sub_B0D97C(0LL);
  value = UIProgressBar__get_value((UIProgressBar_o *)scenarioTextWaitValueTxt, 0LL);
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  *((float *)&this[1].klass + 1) = v6->static_fields->ScenarioTextWaitLow
                                 + (float)(value
                                         * (float)(v6->static_fields->ScenarioTextWaitHigh
                                                 - v6->static_fields->ScenarioTextWaitLow));
  SetScenarioControl__setScenarioTextWaitTimeSecond(this, v4);
}


void __fastcall SetScenarioControl__initSetValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *scenarioSpeedSlider; // x20
  System_String_o *v9; // x0
  UILabel_o *scenarioTextWaitSlider; // x20
  UILabel_o *v11; // x20
  BalanceConfig_c *v12; // x0
  float ScenarioSpeed; // s0
  struct UILabel_o *scenarioSpeedValueTxt; // x8
  float ScenarioTextWaitTimeSecond; // s0
  struct UILabel_o *scenarioTextWaitValueTxt; // x8
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1

  if ( (byte_4218A4A & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&OptionManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_9829/*"OPTION_SCENARIO_SPEED"*/, v5);
    sub_B0D8A4(&StringLiteral_9827/*"OPTION_SCENARIO_COMMENT"*/, v6);
    sub_B0D8A4(&StringLiteral_9830/*"OPTION_SCENARIO_TEXTWAIT_SPEED"*/, v7);
    byte_4218A4A = 1;
  }
  scenarioSpeedSlider = (UILabel_o *)this->fields.scenarioSpeedSlider;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9829/*"OPTION_SCENARIO_SPEED"*/, 0LL);
  if ( !scenarioSpeedSlider )
    goto LABEL_20;
  UILabel__set_text(scenarioSpeedSlider, v9, 0LL);
  scenarioTextWaitSlider = (UILabel_o *)this->fields.scenarioTextWaitSlider;
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9830/*"OPTION_SCENARIO_TEXTWAIT_SPEED"*/, 0LL);
  if ( !scenarioTextWaitSlider )
    goto LABEL_20;
  UILabel__set_text(scenarioTextWaitSlider, v9, 0LL);
  v11 = *(UILabel_o **)&this->fields.scenarioSpeedStep;
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9827/*"OPTION_SCENARIO_COMMENT"*/, 0LL);
  if ( !v11 )
    goto LABEL_20;
  UILabel__set_text(v11, v9, 0LL);
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioTextWaitTimeSecondStep = UnityEngine_Mathf__CeilToInt(
                                                  (float)(v12->static_fields->ScenarioSpeedHigh
                                                        - v12->static_fields->ScenarioSpeedLow)
                                                / v12->static_fields->ScenarioSpeedStep,
                                                  0LL)
                                              + 1;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  ScenarioSpeed = OptionManager__GetScenarioSpeed(0LL);
  scenarioSpeedValueTxt = this->fields.scenarioSpeedValueTxt;
  this->fields.scenarioTextWaitTimeSecondValue = ScenarioSpeed;
  if ( !scenarioSpeedValueTxt )
    goto LABEL_20;
  scenarioSpeedValueTxt->fields.mUpdateFrame = this->fields.scenarioTextWaitTimeSecondStep;
  v9 = (System_String_o *)this->fields.scenarioSpeedValueTxt;
  if ( !v9
    || (UIProgressBar__set_value(
          (UIProgressBar_o *)v9,
          (float)(this->fields.scenarioTextWaitTimeSecondValue - BalanceConfig_TypeInfo->static_fields->ScenarioSpeedLow)
        / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioSpeedHigh
                - BalanceConfig_TypeInfo->static_fields->ScenarioSpeedLow),
          0LL),
        LODWORD(this[1].klass) = UnityEngine_Mathf__CeilToInt(
                                   (float)(BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitHigh
                                         - BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow)
                                 / BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitStep,
                                   0LL)
                               + 1,
        ScenarioTextWaitTimeSecond = OptionManager__GetScenarioTextWaitTimeSecond(0LL),
        scenarioTextWaitValueTxt = this->fields.scenarioTextWaitValueTxt,
        *((float *)&this[1].klass + 1) = ScenarioTextWaitTimeSecond,
        !scenarioTextWaitValueTxt)
    || (scenarioTextWaitValueTxt->fields.mUpdateFrame = (int32_t)this[1].klass,
        (v9 = (System_String_o *)this->fields.scenarioTextWaitValueTxt) == 0LL) )
  {
LABEL_20:
    sub_B0D97C(v9);
  }
  UIProgressBar__set_value(
    (UIProgressBar_o *)v9,
    (float)(*((float *)&this[1].klass + 1) - BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow),
    0LL);
  SetScenarioControl__setChangeScenarioSpeedText(this, v17);
  SetScenarioControl__setScenarioTextWaitTimeSecond(this, v18);
}


void __fastcall SetScenarioControl__setChangeScenarioSpeedText(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  float scenarioTextWaitTimeSecondValue; // s0
  UILabel_o *scenarioTextWaitTxt; // x19
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o format; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4218A4C & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_6336/*"F2"*/, v3);
    sub_B0D8A4(&StringLiteral_9832/*"OPTION_SCENARIO_UNIT"*/, v4);
    byte_4218A4C = 1;
  }
  scenarioTextWaitTimeSecondValue = this->fields.scenarioTextWaitTimeSecondValue;
  scenarioTextWaitTxt = this->fields.scenarioTextWaitTxt;
  *(float *)&format.klass = (float)UnityEngine_Mathf__CeilToInt(scenarioTextWaitTimeSecondValue * 1000.0, 0LL) / 1000.0;
  v7 = System_Single__ToString_43836576(*(float *)&format.klass, &format, (const MethodInfo *)StringLiteral_6336/*"F2"*/);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_9832/*"OPTION_SCENARIO_UNIT"*/, 0LL);
  v9 = System_String__Concat_43849904(v7, v8, 0LL);
  if ( !scenarioTextWaitTxt )
    sub_B0D97C(v9);
  UILabel__set_text(scenarioTextWaitTxt, v9, 0LL);
}


void __fastcall SetScenarioControl__setDefaultValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UILabel_o *scenarioSpeedValueTxt; // x20
  BalanceConfig_c *v6; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioSpeedDefault; // s8
  __int64 v9; // x1
  struct UILabel_o *scenarioTextWaitValueTxt; // x19

  if ( (byte_4218A50 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&OptionManager_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4218A50 = 1;
  }
  scenarioSpeedValueTxt = this->fields.scenarioSpeedValueTxt;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !byte_4218B07 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_4218B07 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    if ( BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      static_fields = BalanceConfig_TypeInfo->static_fields;
      ScenarioSpeedDefault = static_fields->ScenarioSpeedDefault;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
      static_fields = BalanceConfig_TypeInfo->static_fields;
      ScenarioSpeedDefault = static_fields->ScenarioSpeedDefault;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_16;
    }
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
LABEL_16:
    if ( !scenarioSpeedValueTxt )
      goto LABEL_27;
    goto LABEL_17;
  }
  static_fields = BalanceConfig_TypeInfo->static_fields;
  ScenarioSpeedDefault = static_fields->ScenarioSpeedDefault;
  if ( !scenarioSpeedValueTxt )
    goto LABEL_27;
LABEL_17:
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioSpeedValueTxt,
    (float)(ScenarioSpeedDefault - static_fields->ScenarioSpeedLow)
  / (float)(static_fields->ScenarioSpeedHigh - static_fields->ScenarioSpeedLow),
    0LL);
  scenarioTextWaitValueTxt = this->fields.scenarioTextWaitValueTxt;
  if ( !byte_4218B08 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v9);
    byte_4218B08 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( !scenarioTextWaitValueTxt )
LABEL_27:
    sub_B0D97C(v6);
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioTextWaitValueTxt,
    (float)(v6->static_fields->ScenarioTextWaitDefaultSt - v6->static_fields->ScenarioTextWaitLow)
  / (float)(v6->static_fields->ScenarioTextWaitHigh - v6->static_fields->ScenarioTextWaitLow),
    0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}


void __fastcall SetScenarioControl__setScenarioTextWaitTimeSecond(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  float v5; // s0
  UILabel_o *scenarioCommentTxt; // x19
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o format; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4218A4E & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_6336/*"F2"*/, v3);
    sub_B0D8A4(&StringLiteral_9832/*"OPTION_SCENARIO_UNIT"*/, v4);
    byte_4218A4E = 1;
  }
  v5 = *((float *)&this[1].klass + 1);
  scenarioCommentTxt = this->fields.scenarioCommentTxt;
  *(float *)&format.klass = (float)UnityEngine_Mathf__RoundToInt(v5 * 1000.0, 0LL) / 1000.0;
  v7 = System_Single__ToString_43836576(*(float *)&format.klass, &format, (const MethodInfo *)StringLiteral_6336/*"F2"*/);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_9832/*"OPTION_SCENARIO_UNIT"*/, 0LL);
  v9 = System_String__Concat_43849904(v7, v8, 0LL);
  if ( !scenarioCommentTxt )
    sub_B0D97C(v9);
  UILabel__set_text(scenarioCommentTxt, v9, 0LL);
}