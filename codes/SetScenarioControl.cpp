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
  __int64 v2; // x2
  float scenarioSpeedValue; // s8

  if ( (byte_596B5B6 & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596B5B6 = 1;
  }
  scenarioSpeedValue = this->fields.scenarioSpeedValue;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetScenarioSpeed(scenarioSpeedValue, 0);
  OptionManager__SetScenarioTextWaitTimeSecond(this->fields.scenarioTextWaitTimeSecondValue, 0);
}


void SetScenarioControl__getChangeScenarioSpeedValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *scenarioSpeedSlider; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  float value; // s0
  BalanceConfig_c *v7; // x0
  float v8; // s8

  if ( (byte_596B5B8 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596B5B8 = 1;
  }
  scenarioSpeedSlider = (UIProgressBar_o *)this->fields.scenarioSpeedSlider;
  if ( !scenarioSpeedSlider )
    sub_2213CDC(0, method);
  value = UIProgressBar__get_value(scenarioSpeedSlider, 0);
  v7 = BalanceConfig_TypeInfo;
  v8 = value;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v5);
    v7 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioSpeedValue = v7->static_fields->ScenarioSpeedLow
                                  + (float)(v8
                                          * (float)(v7->static_fields->ScenarioSpeedHigh
                                                  - v7->static_fields->ScenarioSpeedLow));
  SetScenarioControl__setChangeScenarioSpeedText(this, v4);
}


void SetScenarioControl__getScenarioTextWaitTimeSecond(SetScenarioControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *scenarioTextWaitSlider; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  float value; // s0
  BalanceConfig_c *v7; // x0
  float v8; // s8

  if ( (byte_596B5BA & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596B5BA = 1;
  }
  scenarioTextWaitSlider = (UIProgressBar_o *)this->fields.scenarioTextWaitSlider;
  if ( !scenarioTextWaitSlider )
    sub_2213CDC(0, method);
  value = UIProgressBar__get_value(scenarioTextWaitSlider, 0);
  v7 = BalanceConfig_TypeInfo;
  v8 = value;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v5);
    v7 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioTextWaitTimeSecondValue = v7->static_fields->ScenarioTextWaitLow
                                               + (float)(v8
                                                       * (float)(v7->static_fields->ScenarioTextWaitHigh
                                                               - v7->static_fields->ScenarioTextWaitLow));
  SetScenarioControl__setScenarioTextWaitTimeSecond(this, v4);
}


void SetScenarioControl__initSetValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *scenarioSpeedTxt; // x20
  System_String_o *scenarioSpeedSlider; // x0
  __int64 v6; // x1
  UILabel_o *scenarioTextWaitTxt; // x20
  UILabel_o *scenarioCommentTxt; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  BalanceConfig_c *v11; // x0
  float *p_CriticalRateToAddByQuickFirstBonus; // x8
  float v13; // s9
  float v14; // s8
  float v15; // s8
  unsigned int v16; // w9
  OptionManager_c *v17; // x0
  int v18; // w10
  int32_t v19; // w8
  float ScenarioSpeed; // s0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioSpeedLow; // s1
  float ScenarioSpeedHigh; // s2
  __int64 v24; // x1
  __int64 v25; // x2
  struct BalanceConfig_StaticFields *v26; // x8
  float ScenarioTextWaitStep; // s9
  float v28; // s8
  float v29; // s8
  unsigned int v30; // w9
  int32_t v31; // w8
  float ScenarioTextWaitTimeSecond; // s0
  struct BalanceConfig_StaticFields *v33; // x8
  float ScenarioTextWaitLow; // s1
  float ScenarioTextWaitHigh; // s2
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1

  if ( (byte_596B5B5 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&StringLiteral_10098/*"OPTION_SCENARIO_SPEED"*/);
    sub_2213A60(&StringLiteral_10094/*"OPTION_SCENARIO_COMMENT"*/);
    sub_2213A60(&StringLiteral_10099/*"OPTION_SCENARIO_TEXTWAIT_SPEED"*/);
    byte_596B5B5 = 1;
  }
  scenarioSpeedTxt = this->fields.scenarioSpeedTxt;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  scenarioSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_10098/*"OPTION_SCENARIO_SPEED"*/, 0);
  if ( !scenarioSpeedTxt )
    goto LABEL_29;
  UILabel__set_text(scenarioSpeedTxt, scenarioSpeedSlider, 0);
  scenarioTextWaitTxt = this->fields.scenarioTextWaitTxt;
  scenarioSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_10099/*"OPTION_SCENARIO_TEXTWAIT_SPEED"*/, 0);
  if ( !scenarioTextWaitTxt )
    goto LABEL_29;
  UILabel__set_text(scenarioTextWaitTxt, scenarioSpeedSlider, 0);
  scenarioCommentTxt = this->fields.scenarioCommentTxt;
  scenarioSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_10094/*"OPTION_SCENARIO_COMMENT"*/, 0);
  if ( !scenarioCommentTxt )
    goto LABEL_29;
  UILabel__set_text(scenarioCommentTxt, scenarioSpeedSlider, 0);
  v11 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v10);
    v11 = BalanceConfig_TypeInfo;
  }
  p_CriticalRateToAddByQuickFirstBonus = (float *)&v11->static_fields->CriticalRateToAddByQuickFirstBonus;
  v13 = p_CriticalRateToAddByQuickFirstBonus[140];
  v14 = p_CriticalRateToAddByQuickFirstBonus[142] - p_CriticalRateToAddByQuickFirstBonus[141];
  if ( !byte_596A15B )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A15B = 1;
  }
  v15 = v14 / v13;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9, v10);
  v16 = vcvtps_s32_f32(v15);
  v17 = OptionManager_TypeInfo;
  v18 = *(&OptionManager_TypeInfo->_2.cctor_finished + 1);
  if ( ceilf(v15) == INFINITY )
    v19 = -2147483647;
  else
    v19 = v16 + 1;
  this->fields.scenarioSpeedStep = v19;
  if ( !v18 )
    j_il2cpp_runtime_class_init_0(v17, v9, v10);
  ScenarioSpeed = OptionManager__GetScenarioSpeed(0);
  scenarioSpeedSlider = (System_String_o *)this->fields.scenarioSpeedSlider;
  this->fields.scenarioSpeedValue = ScenarioSpeed;
  if ( !scenarioSpeedSlider )
    goto LABEL_29;
  static_fields = BalanceConfig_TypeInfo->static_fields;
  ScenarioSpeedLow = static_fields->ScenarioSpeedLow;
  ScenarioSpeedHigh = static_fields->ScenarioSpeedHigh;
  HIDWORD(scenarioSpeedSlider[4].klass) = this->fields.scenarioSpeedStep;
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioSpeedSlider,
    (float)(ScenarioSpeed - ScenarioSpeedLow) / (float)(ScenarioSpeedHigh - ScenarioSpeedLow),
    0);
  v26 = BalanceConfig_TypeInfo->static_fields;
  ScenarioTextWaitStep = v26->ScenarioTextWaitStep;
  v28 = v26->ScenarioTextWaitHigh - v26->ScenarioTextWaitLow;
  if ( !byte_596A15B )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A15B = 1;
  }
  v29 = v28 / ScenarioTextWaitStep;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v24, v25);
  v30 = vcvtps_s32_f32(v29);
  v31 = ceilf(v29) == INFINITY ? -2147483647 : v30 + 1;
  this->fields.scenarioTextWaitTimeSecondStep = v31;
  ScenarioTextWaitTimeSecond = OptionManager__GetScenarioTextWaitTimeSecond(0);
  scenarioSpeedSlider = (System_String_o *)this->fields.scenarioTextWaitSlider;
  this->fields.scenarioTextWaitTimeSecondValue = ScenarioTextWaitTimeSecond;
  if ( !scenarioSpeedSlider )
LABEL_29:
    sub_2213CDC(scenarioSpeedSlider, v6);
  v33 = BalanceConfig_TypeInfo->static_fields;
  ScenarioTextWaitLow = v33->ScenarioTextWaitLow;
  ScenarioTextWaitHigh = v33->ScenarioTextWaitHigh;
  HIDWORD(scenarioSpeedSlider[4].klass) = this->fields.scenarioTextWaitTimeSecondStep;
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioSpeedSlider,
    (float)(ScenarioTextWaitTimeSecond - ScenarioTextWaitLow) / (float)(ScenarioTextWaitHigh - ScenarioTextWaitLow),
    0);
  SetScenarioControl__setChangeScenarioSpeedText(this, v36);
  SetScenarioControl__setScenarioTextWaitTimeSecond(this, v37);
}


void SetScenarioControl__setChangeScenarioSpeedText(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *scenarioSpeedValueTxt; // x19
  float scenarioSpeedValue; // s8
  float v6; // s8
  float v7; // s0
  float v8; // s1
  bool v9; // zf
  float v10; // s0
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *v13; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o format; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_596B5B7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_6659/*"F2"*/);
    sub_2213A60(&StringLiteral_10103/*"OPTION_SCENARIO_UNIT"*/);
    byte_596B5B7 = 1;
  }
  scenarioSpeedValueTxt = this->fields.scenarioSpeedValueTxt;
  scenarioSpeedValue = this->fields.scenarioSpeedValue;
  LODWORD(format.klass) = 0;
  if ( !byte_596A15B )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A15B = 1;
  }
  v6 = scenarioSpeedValue * 1000.0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v2);
  v7 = ceilf(v6);
  v8 = (float)(int)v7 / 1000.0;
  v9 = v7 == INFINITY;
  v10 = -2147500.0;
  if ( !v9 )
    v10 = v8;
  *(float *)&format.klass = v10;
  v13 = System_Single__ToString_77226200(v10, &format, (const MethodInfo *)StringLiteral_6659/*"F2"*/);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10103/*"OPTION_SCENARIO_UNIT"*/, 0);
  v15 = System_String__Concat_75651716(v13, v14, 0);
  if ( !scenarioSpeedValueTxt )
    sub_2213CDC(v15, v16);
  UILabel__set_text(scenarioSpeedValueTxt, v15, 0);
}


void SetScenarioControl__setDefaultValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIProgressBar_o *scenarioSpeedSlider; // x20
  BalanceConfig_c *v5; // x0
  float ScenarioSpeedDefault; // s8
  __int64 v7; // x2
  __int64 v8; // x2
  UIProgressBar_o *scenarioTextWaitSlider; // x19
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_596B5BB & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&Method_SetScenarioControl_setDefaultValue__);
    byte_596B5BB = 1;
  }
  scenarioSpeedSlider = (UIProgressBar_o *)this->fields.scenarioSpeedSlider;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  if ( !byte_596B5C5 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596B5C5 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    ScenarioSpeedDefault = BalanceConfig_TypeInfo->static_fields->ScenarioSpeedDefault;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v5 = BalanceConfig_TypeInfo;
    ScenarioSpeedDefault = BalanceConfig_TypeInfo->static_fields->ScenarioSpeedDefault;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v7);
  }
  if ( !scenarioSpeedSlider )
    goto LABEL_20;
  UIProgressBar__set_value(
    scenarioSpeedSlider,
    (float)(ScenarioSpeedDefault - BalanceConfig_TypeInfo->static_fields->ScenarioSpeedLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioSpeedHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioSpeedLow),
    0);
  scenarioTextWaitSlider = (UIProgressBar_o *)this->fields.scenarioTextWaitSlider;
  if ( !byte_596B5C6 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596B5C6 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v8);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( !scenarioTextWaitSlider )
LABEL_20:
    sub_2213CDC(v5, method);
  UIProgressBar__set_value(
    scenarioTextWaitSlider,
    (float)(v5->static_fields->ScenarioTextWaitDefaultSt - v5->static_fields->ScenarioTextWaitLow)
  / (float)(v5->static_fields->ScenarioTextWaitHigh - v5->static_fields->ScenarioTextWaitLow),
    0);
  v10 = Method_SetScenarioControl_setDefaultValue__;
  if ( (*((_BYTE *)Method_SetScenarioControl_setDefaultValue__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_2213A78(Method_SetScenarioControl_setDefaultValue__);
  v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
}


void SetScenarioControl__setScenarioTextWaitTimeSecond(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *scenarioTextWaitValueTxt; // x19
  float scenarioTextWaitTimeSecondValue; // s8
  float v6; // s9
  double v7; // d8
  double v8; // d0
  double v9; // d0
  double v10; // d1
  double v11; // d1
  float v12; // s1
  bool v13; // zf
  float v14; // s0
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *v17; // x20
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  System_String_o format; // [xsp+Ch] [xbp-44h] BYREF
  double iptr; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_596B5B9 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_6659/*"F2"*/);
    sub_2213A60(&StringLiteral_10103/*"OPTION_SCENARIO_UNIT"*/);
    byte_596B5B9 = 1;
  }
  scenarioTextWaitValueTxt = this->fields.scenarioTextWaitValueTxt;
  scenarioTextWaitTimeSecondValue = this->fields.scenarioTextWaitTimeSecondValue;
  LODWORD(format.klass) = 0;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v6 = scenarioTextWaitTimeSecondValue * 1000.0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v2);
  v7 = v6;
  v8 = modf(v6, &iptr);
  if ( v6 >= 0.0 )
  {
    if ( v8 != 0.5 )
    {
      v9 = floor(v7 + 0.5);
      goto LABEL_17;
    }
    v10 = 1.0;
    v9 = iptr;
  }
  else
  {
    if ( v8 != -0.5 )
    {
      v9 = ceil(v7 + -0.5);
      goto LABEL_17;
    }
    v9 = iptr;
    v10 = -1.0;
  }
  v11 = v9 + v10;
  if ( ((__int64)v9 & 1) != 0 )
    v9 = v11;
LABEL_17:
  v12 = (float)(int)v9 / 1000.0;
  v13 = v9 == INFINITY;
  v14 = -2147500.0;
  if ( !v13 )
    v14 = v12;
  *(float *)&format.klass = v14;
  v17 = System_Single__ToString_77226200(v14, &format, (const MethodInfo *)StringLiteral_6659/*"F2"*/);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10103/*"OPTION_SCENARIO_UNIT"*/, 0);
  v19 = System_String__Concat_75651716(v17, v18, 0);
  if ( !scenarioTextWaitValueTxt )
    sub_2213CDC(v19, v20);
  UILabel__set_text(scenarioTextWaitValueTxt, v19, 0);
}