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

  if ( (byte_43562FA & 1) == 0 )
  {
    sub_B70694(&OptionManager_TypeInfo);
    byte_43562FA = 1;
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

  if ( (byte_43562FC & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_43562FC = 1;
  }
  scenarioSpeedValueTxt = this->fields.scenarioSpeedValueTxt;
  if ( !scenarioSpeedValueTxt )
    sub_B7076C(0LL, method);
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

  if ( (byte_43562FE & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_43562FE = 1;
  }
  scenarioTextWaitValueTxt = this->fields.scenarioTextWaitValueTxt;
  if ( !scenarioTextWaitValueTxt )
    sub_B7076C(0LL, method);
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
  UILabel_o *scenarioSpeedSlider; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *scenarioTextWaitSlider; // x20
  UILabel_o *v7; // x20
  BalanceConfig_c *v8; // x0
  float ScenarioSpeed; // s0
  struct UILabel_o *scenarioSpeedValueTxt; // x8
  float ScenarioTextWaitTimeSecond; // s0
  struct UILabel_o *scenarioTextWaitValueTxt; // x8
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_43562F9 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&StringLiteral_9927/*"OPTION_SCENARIO_SPEED"*/);
    sub_B70694(&StringLiteral_9925/*"OPTION_SCENARIO_COMMENT"*/);
    sub_B70694(&StringLiteral_9928/*"OPTION_SCENARIO_TEXTWAIT_SPEED"*/);
    byte_43562F9 = 1;
  }
  scenarioSpeedSlider = (UILabel_o *)this->fields.scenarioSpeedSlider;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9927/*"OPTION_SCENARIO_SPEED"*/, 0LL);
  if ( !scenarioSpeedSlider )
    goto LABEL_20;
  UILabel__set_text(scenarioSpeedSlider, v4, 0LL);
  scenarioTextWaitSlider = (UILabel_o *)this->fields.scenarioTextWaitSlider;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9928/*"OPTION_SCENARIO_TEXTWAIT_SPEED"*/, 0LL);
  if ( !scenarioTextWaitSlider )
    goto LABEL_20;
  UILabel__set_text(scenarioTextWaitSlider, v4, 0LL);
  v7 = *(UILabel_o **)&this->fields.scenarioSpeedStep;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9925/*"OPTION_SCENARIO_COMMENT"*/, 0LL);
  if ( !v7 )
    goto LABEL_20;
  UILabel__set_text(v7, v4, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioTextWaitTimeSecondStep = UnityEngine_Mathf__CeilToInt(
                                                  (float)(v8->static_fields->ScenarioSpeedHigh
                                                        - v8->static_fields->ScenarioSpeedLow)
                                                / v8->static_fields->ScenarioSpeedStep,
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
  v4 = (System_String_o *)this->fields.scenarioSpeedValueTxt;
  if ( !v4
    || (UIProgressBar__set_value(
          (UIProgressBar_o *)v4,
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
        (v4 = (System_String_o *)this->fields.scenarioTextWaitValueTxt) == 0LL) )
  {
LABEL_20:
    sub_B7076C(v4, v5);
  }
  UIProgressBar__set_value(
    (UIProgressBar_o *)v4,
    (float)(*((float *)&this[1].klass + 1) - BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow),
    0LL);
  SetScenarioControl__setChangeScenarioSpeedText(this, v13);
  SetScenarioControl__setScenarioTextWaitTimeSecond(this, v14);
}


void __fastcall SetScenarioControl__setChangeScenarioSpeedText(SetScenarioControl_o *this, const MethodInfo *method)
{
  float scenarioTextWaitTimeSecondValue; // s0
  UILabel_o *scenarioTextWaitTxt; // x19
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_String_o format; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_43562FB & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_6411/*"F2"*/);
    sub_B70694(&StringLiteral_9930/*"OPTION_SCENARIO_UNIT"*/);
    byte_43562FB = 1;
  }
  scenarioTextWaitTimeSecondValue = this->fields.scenarioTextWaitTimeSecondValue;
  scenarioTextWaitTxt = this->fields.scenarioTextWaitTxt;
  *(float *)&format.klass = (float)UnityEngine_Mathf__CeilToInt(scenarioTextWaitTimeSecondValue * 1000.0, 0LL) / 1000.0;
  v5 = System_Single__ToString_44744840(*(float *)&format.klass, &format, (const MethodInfo *)StringLiteral_6411/*"F2"*/);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_9930/*"OPTION_SCENARIO_UNIT"*/, 0LL);
  v7 = System_String__Concat_44758168(v5, v6, 0LL);
  if ( !scenarioTextWaitTxt )
    sub_B7076C(v7, v8);
  UILabel__set_text(scenarioTextWaitTxt, v7, 0LL);
}


void __fastcall SetScenarioControl__setDefaultValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *scenarioSpeedValueTxt; // x20
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioSpeedDefault; // s8
  struct UILabel_o *scenarioTextWaitValueTxt; // x19

  if ( (byte_43562FF & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_43562FF = 1;
  }
  scenarioSpeedValueTxt = this->fields.scenarioSpeedValueTxt;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !byte_43563B5 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_43563B5 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
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
      v4 = BalanceConfig_TypeInfo;
      static_fields = BalanceConfig_TypeInfo->static_fields;
      ScenarioSpeedDefault = static_fields->ScenarioSpeedDefault;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_16;
    }
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
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
  if ( !byte_43563B6 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_43563B6 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  if ( !scenarioTextWaitValueTxt )
LABEL_27:
    sub_B7076C(v4, method);
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioTextWaitValueTxt,
    (float)(v4->static_fields->ScenarioTextWaitDefaultSt - v4->static_fields->ScenarioTextWaitLow)
  / (float)(v4->static_fields->ScenarioTextWaitHigh - v4->static_fields->ScenarioTextWaitLow),
    0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}


void __fastcall SetScenarioControl__setScenarioTextWaitTimeSecond(SetScenarioControl_o *this, const MethodInfo *method)
{
  float v3; // s0
  UILabel_o *scenarioCommentTxt; // x19
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_String_o format; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_43562FD & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_6411/*"F2"*/);
    sub_B70694(&StringLiteral_9930/*"OPTION_SCENARIO_UNIT"*/);
    byte_43562FD = 1;
  }
  v3 = *((float *)&this[1].klass + 1);
  scenarioCommentTxt = this->fields.scenarioCommentTxt;
  *(float *)&format.klass = (float)UnityEngine_Mathf__RoundToInt(v3 * 1000.0, 0LL) / 1000.0;
  v5 = System_Single__ToString_44744840(*(float *)&format.klass, &format, (const MethodInfo *)StringLiteral_6411/*"F2"*/);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_9930/*"OPTION_SCENARIO_UNIT"*/, 0LL);
  v7 = System_String__Concat_44758168(v5, v6, 0LL);
  if ( !scenarioCommentTxt )
    sub_B7076C(v7, v8);
  UILabel__set_text(scenarioCommentTxt, v7, 0LL);
}