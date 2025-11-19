void SetScenarioControl___ctor(SetScenarioControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// attributes: thunk
void SetScenarioControl__Init(SetScenarioControl_o *this, const MethodInfo *method)
{
  SetScenarioControl__initSetValue(this, method);
}


void SetScenarioControl__Reflection(SetScenarioControl_o *this, const MethodInfo *method)
{
  float scenarioSpeedValue; // s8

  if ( (byte_4CB12E2 & 1) == 0 )
  {
    sub_1C6BA08(&OptionManager_TypeInfo);
    byte_4CB12E2 = 1;
  }
  scenarioSpeedValue = this->fields.scenarioSpeedValue;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetScenarioSpeed(scenarioSpeedValue, 0);
  OptionManager__SetScenarioTextWaitTimeSecond(this->fields.scenarioTextWaitTimeSecondValue, 0);
}


void SetScenarioControl__getChangeScenarioSpeedValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *scenarioSpeedSlider; // x0
  const MethodInfo *v4; // x1
  float value; // s0
  BalanceConfig_c *v6; // x0
  float v7; // s8

  if ( (byte_4CB12E4 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    byte_4CB12E4 = 1;
  }
  scenarioSpeedSlider = (UIProgressBar_o *)this->fields.scenarioSpeedSlider;
  if ( !scenarioSpeedSlider )
    sub_1C6BC60(0, method);
  value = UIProgressBar__get_value(scenarioSpeedSlider, 0);
  v6 = BalanceConfig_TypeInfo;
  v7 = value;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioSpeedValue = v6->static_fields->ScenarioSpeedLow
                                  + (float)(v7
                                          * (float)(v6->static_fields->ScenarioSpeedHigh
                                                  - v6->static_fields->ScenarioSpeedLow));
  SetScenarioControl__setChangeScenarioSpeedText(this, v4);
}


void SetScenarioControl__getScenarioTextWaitTimeSecond(SetScenarioControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *scenarioTextWaitSlider; // x0
  const MethodInfo *v4; // x1
  float value; // s0
  BalanceConfig_c *v6; // x0
  float v7; // s8

  if ( (byte_4CB12E6 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    byte_4CB12E6 = 1;
  }
  scenarioTextWaitSlider = (UIProgressBar_o *)this->fields.scenarioTextWaitSlider;
  if ( !scenarioTextWaitSlider )
    sub_1C6BC60(0, method);
  value = UIProgressBar__get_value(scenarioTextWaitSlider, 0);
  v6 = BalanceConfig_TypeInfo;
  v7 = value;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioTextWaitTimeSecondValue = v6->static_fields->ScenarioTextWaitLow
                                               + (float)(v7
                                                       * (float)(v6->static_fields->ScenarioTextWaitHigh
                                                               - v6->static_fields->ScenarioTextWaitLow));
  SetScenarioControl__setScenarioTextWaitTimeSecond(this, v4);
}


void SetScenarioControl__initSetValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  UILabel_o *scenarioSpeedTxt; // x20
  System_String_o *scenarioSpeedSlider; // x0
  __int64 v5; // x1
  UILabel_o *scenarioTextWaitTxt; // x20
  UILabel_o *scenarioCommentTxt; // x20
  BalanceConfig_c *v8; // x0
  float *p_CriticalRateToAddByQuickFirstBonus; // x8
  float v10; // s8
  float v11; // s9
  float v12; // s8
  unsigned int v13; // w9
  int32_t v14; // w8
  float ScenarioSpeed; // s0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioTextWaitStep; // s8
  float v18; // s9
  float v19; // s8
  unsigned int v20; // w9
  int32_t v21; // w8
  float ScenarioTextWaitTimeSecond; // s0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1

  if ( (byte_4CB12E1 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&OptionManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_9696/*"OPTION_SCENARIO_SPEED"*/);
    sub_1C6BA08(&StringLiteral_9692/*"OPTION_SCENARIO_COMMENT"*/);
    sub_1C6BA08(&StringLiteral_9697/*"OPTION_SCENARIO_TEXTWAIT_SPEED"*/);
    byte_4CB12E1 = 1;
  }
  scenarioSpeedTxt = this->fields.scenarioSpeedTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  scenarioSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9696/*"OPTION_SCENARIO_SPEED"*/, 0);
  if ( !scenarioSpeedTxt )
    goto LABEL_29;
  UILabel__set_text(scenarioSpeedTxt, scenarioSpeedSlider, 0);
  scenarioTextWaitTxt = this->fields.scenarioTextWaitTxt;
  scenarioSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9697/*"OPTION_SCENARIO_TEXTWAIT_SPEED"*/, 0);
  if ( !scenarioTextWaitTxt )
    goto LABEL_29;
  UILabel__set_text(scenarioTextWaitTxt, scenarioSpeedSlider, 0);
  scenarioCommentTxt = this->fields.scenarioCommentTxt;
  scenarioSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9692/*"OPTION_SCENARIO_COMMENT"*/, 0);
  if ( !scenarioCommentTxt )
    goto LABEL_29;
  UILabel__set_text(scenarioCommentTxt, scenarioSpeedSlider, 0);
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  p_CriticalRateToAddByQuickFirstBonus = (float *)&v8->static_fields->CriticalRateToAddByQuickFirstBonus;
  v10 = p_CriticalRateToAddByQuickFirstBonus[141];
  v11 = p_CriticalRateToAddByQuickFirstBonus[143] - p_CriticalRateToAddByQuickFirstBonus[142];
  if ( !byte_4CB02B0 )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CB02B0 = 1;
  }
  v12 = v11 / v10;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = vcvtps_s32_f32(v12);
  if ( ceilf(v12) == INFINITY )
    v14 = -2147483647;
  else
    v14 = v13 + 1;
  this->fields.scenarioSpeedStep = v14;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  ScenarioSpeed = OptionManager__GetScenarioSpeed(0);
  scenarioSpeedSlider = (System_String_o *)this->fields.scenarioSpeedSlider;
  this->fields.scenarioSpeedValue = ScenarioSpeed;
  if ( !scenarioSpeedSlider )
    goto LABEL_29;
  HIDWORD(scenarioSpeedSlider[4].klass) = this->fields.scenarioSpeedStep;
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioSpeedSlider,
    (float)(ScenarioSpeed - BalanceConfig_TypeInfo->static_fields->ScenarioSpeedLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioSpeedHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioSpeedLow),
    0);
  static_fields = BalanceConfig_TypeInfo->static_fields;
  ScenarioTextWaitStep = static_fields->ScenarioTextWaitStep;
  v18 = static_fields->ScenarioTextWaitHigh - static_fields->ScenarioTextWaitLow;
  if ( !byte_4CB02B0 )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CB02B0 = 1;
  }
  v19 = v18 / ScenarioTextWaitStep;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v20 = vcvtps_s32_f32(v19);
  v21 = ceilf(v19) == INFINITY ? -2147483647 : v20 + 1;
  this->fields.scenarioTextWaitTimeSecondStep = v21;
  ScenarioTextWaitTimeSecond = OptionManager__GetScenarioTextWaitTimeSecond(0);
  scenarioSpeedSlider = (System_String_o *)this->fields.scenarioTextWaitSlider;
  this->fields.scenarioTextWaitTimeSecondValue = ScenarioTextWaitTimeSecond;
  if ( !scenarioSpeedSlider )
LABEL_29:
    sub_1C6BC60(scenarioSpeedSlider, v5);
  HIDWORD(scenarioSpeedSlider[4].klass) = this->fields.scenarioTextWaitTimeSecondStep;
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioSpeedSlider,
    (float)(ScenarioTextWaitTimeSecond - BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow),
    0);
  SetScenarioControl__setChangeScenarioSpeedText(this, v23);
  SetScenarioControl__setScenarioTextWaitTimeSecond(this, v24);
}


void SetScenarioControl__setChangeScenarioSpeedText(SetScenarioControl_o *this, const MethodInfo *method)
{
  UILabel_o *scenarioSpeedValueTxt; // x19
  float scenarioSpeedValue; // s8
  float v5; // s8
  int v6; // w8
  float v7; // s0
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o format; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4CB12E3 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_6380/*"F2"*/);
    sub_1C6BA08(&StringLiteral_9701/*"OPTION_SCENARIO_UNIT"*/);
    byte_4CB12E3 = 1;
  }
  scenarioSpeedValueTxt = this->fields.scenarioSpeedValueTxt;
  scenarioSpeedValue = this->fields.scenarioSpeedValue;
  if ( !byte_4CB02B0 )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CB02B0 = 1;
  }
  v5 = scenarioSpeedValue * 1000.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = vcvtps_s32_f32(v5);
  if ( ceilf(v5) == INFINITY )
    v7 = -2147500.0;
  else
    v7 = (float)v6 / 1000.0;
  *(float *)&format.klass = v7;
  v8 = System_Single__ToString_65560440(v7, &format, (const MethodInfo *)StringLiteral_6380/*"F2"*/);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9701/*"OPTION_SCENARIO_UNIT"*/, 0);
  v10 = System_String__Concat_63966792(v8, v9, 0);
  if ( !scenarioSpeedValueTxt )
    sub_1C6BC60(v10, v11);
  UILabel__set_text(scenarioSpeedValueTxt, v10, 0);
}


void SetScenarioControl__setDefaultValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *scenarioSpeedSlider; // x20
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioSpeedDefault; // s8
  UIProgressBar_o *scenarioTextWaitSlider; // x19
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_4CB12E7 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&OptionManager_TypeInfo);
    sub_1C6BA08(&Method_SetScenarioControl_setDefaultValue__);
    byte_4CB12E7 = 1;
  }
  scenarioSpeedSlider = (UIProgressBar_o *)this->fields.scenarioSpeedSlider;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !byte_4CB13C9 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    byte_4CB13C9 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
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
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
  }
  if ( !scenarioSpeedSlider )
    goto LABEL_20;
  UIProgressBar__set_value(
    scenarioSpeedSlider,
    (float)(ScenarioSpeedDefault - static_fields->ScenarioSpeedLow)
  / (float)(static_fields->ScenarioSpeedHigh - static_fields->ScenarioSpeedLow),
    0);
  scenarioTextWaitSlider = (UIProgressBar_o *)this->fields.scenarioTextWaitSlider;
  if ( !byte_4CB13CA )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    byte_4CB13CA = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  if ( !scenarioTextWaitSlider )
LABEL_20:
    sub_1C6BC60(v4, method);
  UIProgressBar__set_value(
    scenarioTextWaitSlider,
    (float)(v4->static_fields->ScenarioTextWaitDefaultSt - v4->static_fields->ScenarioTextWaitLow)
  / (float)(v4->static_fields->ScenarioTextWaitHigh - v4->static_fields->ScenarioTextWaitLow),
    0);
  v8 = Method_SetScenarioControl_setDefaultValue__;
  if ( (*((_BYTE *)Method_SetScenarioControl_setDefaultValue__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C6BA20(Method_SetScenarioControl_setDefaultValue__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
}


void SetScenarioControl__setScenarioTextWaitTimeSecond(SetScenarioControl_o *this, const MethodInfo *method)
{
  UILabel_o *scenarioTextWaitValueTxt; // x19
  float scenarioTextWaitTimeSecondValue; // s8
  float v5; // s9
  double v6; // d8
  double v7; // d0
  double v8; // d0
  double v9; // d1
  double v10; // d1
  float v11; // s0
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  System_String_o format; // [xsp+Ch] [xbp-44h] BYREF
  double iptr; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4CB12E5 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_6380/*"F2"*/);
    sub_1C6BA08(&StringLiteral_9701/*"OPTION_SCENARIO_UNIT"*/);
    byte_4CB12E5 = 1;
  }
  LODWORD(format.klass) = 0;
  scenarioTextWaitValueTxt = this->fields.scenarioTextWaitValueTxt;
  scenarioTextWaitTimeSecondValue = this->fields.scenarioTextWaitTimeSecondValue;
  if ( !byte_4CB13C8 )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CB13C8 = 1;
  }
  v5 = scenarioTextWaitTimeSecondValue * 1000.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = v5;
  v7 = modf(v5, &iptr);
  if ( v5 >= 0.0 )
  {
    if ( v7 != 0.5 )
    {
      v8 = floor(v6 + 0.5);
      goto LABEL_17;
    }
    v8 = iptr;
    v9 = 1.0;
  }
  else
  {
    if ( v7 != -0.5 )
    {
      v8 = ceil(v6 + -0.5);
      goto LABEL_17;
    }
    v8 = iptr;
    v9 = -1.0;
  }
  v10 = v8 + v9;
  if ( ((__int64)v8 & 1) != 0 )
    v8 = v10;
LABEL_17:
  if ( v8 == INFINITY )
    v11 = -2147500.0;
  else
    v11 = (float)(int)v8 / 1000.0;
  *(float *)&format.klass = v11;
  v12 = System_Single__ToString_65560440(v11, &format, (const MethodInfo *)StringLiteral_6380/*"F2"*/);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_9701/*"OPTION_SCENARIO_UNIT"*/, 0);
  v14 = System_String__Concat_63966792(v12, v13, 0);
  if ( !scenarioTextWaitValueTxt )
    sub_1C6BC60(v14, v15);
  UILabel__set_text(scenarioTextWaitValueTxt, v14, 0);
}