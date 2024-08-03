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
  float scenarioSpeedValue; // s8

  if ( (byte_49F7A64 & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49F7A64 = 1;
  }
  scenarioSpeedValue = this->fields.scenarioSpeedValue;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetScenarioSpeed(scenarioSpeedValue, 0LL);
  OptionManager__SetScenarioTextWaitTimeSecond(this->fields.scenarioTextWaitTimeSecondValue, 0LL);
}


void __fastcall SetScenarioControl__getChangeScenarioSpeedValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *scenarioSpeedSlider; // x0
  const MethodInfo *v4; // x1
  float value; // s0
  BalanceConfig_c *v6; // x0
  float v7; // s8

  if ( (byte_49F7A66 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F7A66 = 1;
  }
  scenarioSpeedSlider = (UIProgressBar_o *)this->fields.scenarioSpeedSlider;
  if ( !scenarioSpeedSlider )
    sub_1B64324(0LL);
  value = UIProgressBar__get_value(scenarioSpeedSlider, 0LL);
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


void __fastcall SetScenarioControl__getScenarioTextWaitTimeSecond(SetScenarioControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *scenarioTextWaitSlider; // x0
  const MethodInfo *v4; // x1
  float value; // s0
  BalanceConfig_c *v6; // x0
  float v7; // s8

  if ( (byte_49F7A68 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F7A68 = 1;
  }
  scenarioTextWaitSlider = (UIProgressBar_o *)this->fields.scenarioTextWaitSlider;
  if ( !scenarioTextWaitSlider )
    sub_1B64324(0LL);
  value = UIProgressBar__get_value(scenarioTextWaitSlider, 0LL);
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


void __fastcall SetScenarioControl__initSetValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *scenarioSpeedTxt; // x20
  System_String_o *scenarioSpeedSlider; // x0
  UILabel_o *scenarioTextWaitTxt; // x20
  UILabel_o *scenarioCommentTxt; // x20
  __int64 v12; // x1
  BalanceConfig_c *v13; // x0
  float *p_CriticalRateToAddByQuickFirstBonus; // x8
  float v15; // s8
  float v16; // s9
  float v17; // s8
  unsigned int v18; // w9
  int32_t v19; // w8
  float ScenarioSpeed; // s0
  __int64 v21; // x1
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioTextWaitStep; // s8
  float v24; // s9
  float v25; // s8
  unsigned int v26; // w9
  int32_t v27; // w8
  float ScenarioTextWaitTimeSecond; // s0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1

  if ( (byte_49F7A63 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&OptionManager_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_9649/*"OPTION_SCENARIO_SPEED"*/, v5);
    sub_1B640C8(&StringLiteral_9645/*"OPTION_SCENARIO_COMMENT"*/, v6);
    sub_1B640C8(&StringLiteral_9650/*"OPTION_SCENARIO_TEXTWAIT_SPEED"*/, v7);
    byte_49F7A63 = 1;
  }
  scenarioSpeedTxt = this->fields.scenarioSpeedTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  scenarioSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9649/*"OPTION_SCENARIO_SPEED"*/, 0LL);
  if ( !scenarioSpeedTxt )
    goto LABEL_29;
  UILabel__set_text(scenarioSpeedTxt, scenarioSpeedSlider, 0LL);
  scenarioTextWaitTxt = this->fields.scenarioTextWaitTxt;
  scenarioSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9650/*"OPTION_SCENARIO_TEXTWAIT_SPEED"*/, 0LL);
  if ( !scenarioTextWaitTxt )
    goto LABEL_29;
  UILabel__set_text(scenarioTextWaitTxt, scenarioSpeedSlider, 0LL);
  scenarioCommentTxt = this->fields.scenarioCommentTxt;
  scenarioSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9645/*"OPTION_SCENARIO_COMMENT"*/, 0LL);
  if ( !scenarioCommentTxt )
    goto LABEL_29;
  UILabel__set_text(scenarioCommentTxt, scenarioSpeedSlider, 0LL);
  v13 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  p_CriticalRateToAddByQuickFirstBonus = (float *)&v13->static_fields->CriticalRateToAddByQuickFirstBonus;
  v15 = p_CriticalRateToAddByQuickFirstBonus[131];
  v16 = p_CriticalRateToAddByQuickFirstBonus[133] - p_CriticalRateToAddByQuickFirstBonus[132];
  if ( !byte_49F779D )
  {
    sub_1B640C8(&System_Math_TypeInfo, v12);
    byte_49F779D = 1;
  }
  v17 = v16 / v15;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v18 = vcvtps_s32_f32(v17);
  if ( ceilf(v17) == INFINITY )
    v19 = -2147483647;
  else
    v19 = v18 + 1;
  this->fields.scenarioSpeedStep = v19;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  ScenarioSpeed = OptionManager__GetScenarioSpeed(0LL);
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
    0LL);
  static_fields = BalanceConfig_TypeInfo->static_fields;
  ScenarioTextWaitStep = static_fields->ScenarioTextWaitStep;
  v24 = static_fields->ScenarioTextWaitHigh - static_fields->ScenarioTextWaitLow;
  if ( !byte_49F779D )
  {
    sub_1B640C8(&System_Math_TypeInfo, v21);
    byte_49F779D = 1;
  }
  v25 = v24 / ScenarioTextWaitStep;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v26 = vcvtps_s32_f32(v25);
  v27 = ceilf(v25) == INFINITY ? -2147483647 : v26 + 1;
  this->fields.scenarioTextWaitTimeSecondStep = v27;
  ScenarioTextWaitTimeSecond = OptionManager__GetScenarioTextWaitTimeSecond(0LL);
  scenarioSpeedSlider = (System_String_o *)this->fields.scenarioTextWaitSlider;
  this->fields.scenarioTextWaitTimeSecondValue = ScenarioTextWaitTimeSecond;
  if ( !scenarioSpeedSlider )
LABEL_29:
    sub_1B64324(scenarioSpeedSlider);
  HIDWORD(scenarioSpeedSlider[4].klass) = this->fields.scenarioTextWaitTimeSecondStep;
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioSpeedSlider,
    (float)(ScenarioTextWaitTimeSecond - BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow),
    0LL);
  SetScenarioControl__setChangeScenarioSpeedText(this, v29);
  SetScenarioControl__setScenarioTextWaitTimeSecond(this, v30);
}


void __fastcall SetScenarioControl__setChangeScenarioSpeedText(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *scenarioSpeedValueTxt; // x19
  float scenarioSpeedValue; // s8
  float v7; // s8
  int v8; // w8
  float v9; // s0
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  System_String_o format; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_49F7A65 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_6322/*"F2"*/, v3);
    sub_1B640C8(&StringLiteral_9654/*"OPTION_SCENARIO_UNIT"*/, v4);
    byte_49F7A65 = 1;
  }
  scenarioSpeedValueTxt = this->fields.scenarioSpeedValueTxt;
  scenarioSpeedValue = this->fields.scenarioSpeedValue;
  if ( !byte_49F779D )
  {
    sub_1B640C8(&System_Math_TypeInfo, method);
    byte_49F779D = 1;
  }
  v7 = scenarioSpeedValue * 1000.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = vcvtps_s32_f32(v7);
  if ( ceilf(v7) == INFINITY )
    v9 = -2147500.0;
  else
    v9 = (float)v8 / 1000.0;
  *(float *)&format.klass = v9;
  v10 = System_Single__ToString_62263464(v9, &format, (const MethodInfo *)StringLiteral_6322/*"F2"*/);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9654/*"OPTION_SCENARIO_UNIT"*/, 0LL);
  v12 = System_String__Concat_61375396(v10, v11, 0LL);
  if ( !scenarioSpeedValueTxt )
    sub_1B64324(v12);
  UILabel__set_text(scenarioSpeedValueTxt, v12, 0LL);
}


void __fastcall SetScenarioControl__setDefaultValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UIProgressBar_o *scenarioSpeedSlider; // x20
  BalanceConfig_c *v6; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioSpeedDefault; // s8
  __int64 v9; // x1
  UIProgressBar_o *scenarioTextWaitSlider; // x19
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_49F7A69 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&OptionManager_TypeInfo, v3);
    sub_1B640C8(&Method_SetScenarioControl_setDefaultValue__, v4);
    byte_49F7A69 = 1;
  }
  scenarioSpeedSlider = (UIProgressBar_o *)this->fields.scenarioSpeedSlider;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !byte_49F7B74 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F7B74 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
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
    0LL);
  scenarioTextWaitSlider = (UIProgressBar_o *)this->fields.scenarioTextWaitSlider;
  if ( !byte_49F7B75 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, v9);
    byte_49F7B75 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( !scenarioTextWaitSlider )
LABEL_20:
    sub_1B64324(v6);
  UIProgressBar__set_value(
    scenarioTextWaitSlider,
    (float)(v6->static_fields->ScenarioTextWaitDefaultSt - v6->static_fields->ScenarioTextWaitLow)
  / (float)(v6->static_fields->ScenarioTextWaitHigh - v6->static_fields->ScenarioTextWaitLow),
    0LL);
  v11 = Method_SetScenarioControl_setDefaultValue__;
  if ( (*((_BYTE *)Method_SetScenarioControl_setDefaultValue__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1B640E0(Method_SetScenarioControl_setDefaultValue__);
  v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
}


void __fastcall SetScenarioControl__setScenarioTextWaitTimeSecond(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *scenarioTextWaitValueTxt; // x19
  float scenarioTextWaitTimeSecondValue; // s8
  float v7; // s9
  double v8; // d8
  double v9; // d0
  double v10; // d0
  double v11; // d1
  double v12; // d1
  float v13; // s0
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  System_String_o format; // [xsp+Ch] [xbp-44h] BYREF
  double iptr; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_49F7A67 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_6322/*"F2"*/, v3);
    sub_1B640C8(&StringLiteral_9654/*"OPTION_SCENARIO_UNIT"*/, v4);
    byte_49F7A67 = 1;
  }
  LODWORD(format.klass) = 0;
  scenarioTextWaitValueTxt = this->fields.scenarioTextWaitValueTxt;
  scenarioTextWaitTimeSecondValue = this->fields.scenarioTextWaitTimeSecondValue;
  if ( !byte_49F7B73 )
  {
    sub_1B640C8(&System_Math_TypeInfo, method);
    byte_49F7B73 = 1;
  }
  v7 = scenarioTextWaitTimeSecondValue * 1000.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = v7;
  v9 = modf(v7, &iptr);
  if ( v7 >= 0.0 )
  {
    if ( v9 != 0.5 )
    {
      v10 = floor(v8 + 0.5);
      goto LABEL_17;
    }
    v10 = iptr;
    v11 = 1.0;
  }
  else
  {
    if ( v9 != -0.5 )
    {
      v10 = ceil(v8 + -0.5);
      goto LABEL_17;
    }
    v10 = iptr;
    v11 = -1.0;
  }
  v12 = v10 + v11;
  if ( ((__int64)v10 & 1) != 0 )
    v10 = v12;
LABEL_17:
  if ( v10 == INFINITY )
    v13 = -2147500.0;
  else
    v13 = (float)(int)v10 / 1000.0;
  *(float *)&format.klass = v13;
  v14 = System_Single__ToString_62263464(v13, &format, (const MethodInfo *)StringLiteral_6322/*"F2"*/);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9654/*"OPTION_SCENARIO_UNIT"*/, 0LL);
  v16 = System_String__Concat_61375396(v14, v15, 0LL);
  if ( !scenarioTextWaitValueTxt )
    sub_1B64324(v16);
  UILabel__set_text(scenarioTextWaitValueTxt, v16, 0LL);
}