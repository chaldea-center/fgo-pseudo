void SetScenarioTextSpeedControl___ctor(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetScenarioTextSpeedControl__Init(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *scenarioTextSpeedTxt; // x20
  System_String_o *scenarioTextSpeedSlider; // x0
  __int64 v6; // x1
  UILabel_o *scenarioTextSpeedFastTxt; // x20
  UILabel_o *scenarioTextSpeedSlowTxt; // x20
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
  float ScenarioTextSpeed; // s0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioTextSpeedLow; // s1
  float ScenarioTextSpeedHigh; // s2
  const MethodInfo *v24; // x1
  UILabel_o *scenarioScrollSpeedTxt; // x20
  UILabel_o *scenarioScrollSpeedFastTxt; // x20
  UILabel_o *scenarioScrollSpeedSlowTxt; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  struct BalanceConfig_StaticFields *v30; // x8
  float ScenarioScrollSpeedStep; // s9
  float v32; // s8
  float v33; // s8
  unsigned int v34; // w9
  int32_t v35; // w8
  float ScenarioScrollSpeed; // s0
  struct BalanceConfig_StaticFields *v37; // x8
  float ScenarioScrollSpeedLow; // s1
  float ScenarioScrollSpeedHigh; // s2
  const MethodInfo *v40; // x1
  UILabel_o *scenarioAutoWaitTxt; // x20
  UILabel_o *scenarioAutoWaitLabel; // x20
  UILabel_o *scenarioAutoWaitLongTxt; // x20
  UILabel_o *scenarioAutoWaitShortTxt; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  struct BalanceConfig_StaticFields *v47; // x8
  float ScenarioAutoWaitTimeStep; // s9
  float v49; // s8
  float v50; // s8
  unsigned int v51; // w9
  int32_t v52; // w8
  float ScenarioAutoWaitTime; // s0
  struct BalanceConfig_StaticFields *v54; // x8
  float ScenarioAutoWaitTimeLow; // s1
  float ScenarioAutoWaitTimeHigh; // s2
  const MethodInfo *v57; // x1

  if ( (byte_596B5BC & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&StringLiteral_10101/*"OPTION_SCENARIO_TEXT_SPEED_FAST"*/);
    sub_2213A60(&StringLiteral_10095/*"OPTION_SCENARIO_SCROLL_SPEED"*/);
    sub_2213A60(&StringLiteral_10102/*"OPTION_SCENARIO_TEXT_SPEED_SLOW"*/);
    sub_2213A60(&StringLiteral_10100/*"OPTION_SCENARIO_TEXT_SPEED"*/);
    sub_2213A60(&StringLiteral_10097/*"OPTION_SCENARIO_SCROLL_SPEED_SLOW"*/);
    sub_2213A60(&StringLiteral_10096/*"OPTION_SCENARIO_SCROLL_SPEED_FAST"*/);
    sub_2213A60(&StringLiteral_10090/*"OPTION_SCENARIO_AUTO_WAIT_TIME"*/);
    sub_2213A60(&StringLiteral_10093/*"OPTION_SCENARIO_AUTO_WAIT_TIME_SHORT"*/);
    sub_2213A60(&StringLiteral_10091/*"OPTION_SCENARIO_AUTO_WAIT_TIME_COMMENT"*/);
    sub_2213A60(&StringLiteral_10092/*"OPTION_SCENARIO_AUTO_WAIT_TIME_LONG"*/);
    byte_596B5BC = 1;
  }
  scenarioTextSpeedTxt = this->fields.scenarioTextSpeedTxt;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_10100/*"OPTION_SCENARIO_TEXT_SPEED"*/, 0);
  if ( !scenarioTextSpeedTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioTextSpeedTxt, scenarioTextSpeedSlider, 0);
  scenarioTextSpeedFastTxt = this->fields.scenarioTextSpeedFastTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_10101/*"OPTION_SCENARIO_TEXT_SPEED_FAST"*/, 0);
  if ( !scenarioTextSpeedFastTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioTextSpeedFastTxt, scenarioTextSpeedSlider, 0);
  scenarioTextSpeedSlowTxt = this->fields.scenarioTextSpeedSlowTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_10102/*"OPTION_SCENARIO_TEXT_SPEED_SLOW"*/, 0);
  if ( !scenarioTextSpeedSlowTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioTextSpeedSlowTxt, scenarioTextSpeedSlider, 0);
  v11 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v10);
    v11 = BalanceConfig_TypeInfo;
  }
  p_CriticalRateToAddByQuickFirstBonus = (float *)&v11->static_fields->CriticalRateToAddByQuickFirstBonus;
  v13 = p_CriticalRateToAddByQuickFirstBonus[149];
  v14 = p_CriticalRateToAddByQuickFirstBonus[151] - p_CriticalRateToAddByQuickFirstBonus[150];
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
  this->fields.scenarioTextSpeedStep = v19;
  if ( !v18 )
    j_il2cpp_runtime_class_init_0(v17, v9, v10);
  ScenarioTextSpeed = OptionManager__GetScenarioTextSpeed(0);
  scenarioTextSpeedSlider = (System_String_o *)this->fields.scenarioTextSpeedSlider;
  this->fields.scenarioTextSpeedValue = ScenarioTextSpeed;
  if ( !scenarioTextSpeedSlider )
    goto LABEL_44;
  static_fields = BalanceConfig_TypeInfo->static_fields;
  ScenarioTextSpeedLow = static_fields->ScenarioTextSpeedLow;
  ScenarioTextSpeedHigh = static_fields->ScenarioTextSpeedHigh;
  HIDWORD(scenarioTextSpeedSlider[4].klass) = this->fields.scenarioTextSpeedStep;
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioTextSpeedSlider,
    (float)(ScenarioTextSpeed - ScenarioTextSpeedLow) / (float)(ScenarioTextSpeedHigh - ScenarioTextSpeedLow),
    0);
  SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(this, v24);
  scenarioScrollSpeedTxt = this->fields.scenarioScrollSpeedTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_10095/*"OPTION_SCENARIO_SCROLL_SPEED"*/, 0);
  if ( !scenarioScrollSpeedTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioScrollSpeedTxt, scenarioTextSpeedSlider, 0);
  scenarioScrollSpeedFastTxt = this->fields.scenarioScrollSpeedFastTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_10096/*"OPTION_SCENARIO_SCROLL_SPEED_FAST"*/, 0);
  if ( !scenarioScrollSpeedFastTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioScrollSpeedFastTxt, scenarioTextSpeedSlider, 0);
  scenarioScrollSpeedSlowTxt = this->fields.scenarioScrollSpeedSlowTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_10097/*"OPTION_SCENARIO_SCROLL_SPEED_SLOW"*/, 0);
  if ( !scenarioScrollSpeedSlowTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioScrollSpeedSlowTxt, scenarioTextSpeedSlider, 0);
  v30 = BalanceConfig_TypeInfo->static_fields;
  ScenarioScrollSpeedStep = v30->ScenarioScrollSpeedStep;
  v32 = v30->ScenarioScrollSpeedHigh - v30->ScenarioScrollSpeedLow;
  if ( !byte_596A15B )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A15B = 1;
  }
  v33 = v32 / ScenarioScrollSpeedStep;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v28, v29);
  v34 = vcvtps_s32_f32(v33);
  v35 = ceilf(v33) == INFINITY ? -2147483647 : v34 + 1;
  this->fields.scenarioScrollSpeedStep = v35;
  ScenarioScrollSpeed = OptionManager__GetScenarioScrollSpeed(0);
  scenarioTextSpeedSlider = (System_String_o *)this->fields.scenarioScrollSpeedSlider;
  this->fields.scenarioScrollSpeedValue = ScenarioScrollSpeed;
  if ( !scenarioTextSpeedSlider )
    goto LABEL_44;
  v37 = BalanceConfig_TypeInfo->static_fields;
  ScenarioScrollSpeedLow = v37->ScenarioScrollSpeedLow;
  ScenarioScrollSpeedHigh = v37->ScenarioScrollSpeedHigh;
  HIDWORD(scenarioTextSpeedSlider[4].klass) = this->fields.scenarioScrollSpeedStep;
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioTextSpeedSlider,
    (float)(ScenarioScrollSpeed - ScenarioScrollSpeedLow) / (float)(ScenarioScrollSpeedHigh - ScenarioScrollSpeedLow),
    0);
  SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(this, v40);
  scenarioAutoWaitTxt = this->fields.scenarioAutoWaitTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_10090/*"OPTION_SCENARIO_AUTO_WAIT_TIME"*/, 0);
  if ( !scenarioAutoWaitTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioAutoWaitTxt, scenarioTextSpeedSlider, 0);
  scenarioAutoWaitLabel = this->fields.scenarioAutoWaitLabel;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_10091/*"OPTION_SCENARIO_AUTO_WAIT_TIME_COMMENT"*/, 0);
  if ( !scenarioAutoWaitLabel )
    goto LABEL_44;
  UILabel__set_text(scenarioAutoWaitLabel, scenarioTextSpeedSlider, 0);
  scenarioAutoWaitLongTxt = this->fields.scenarioAutoWaitLongTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_10092/*"OPTION_SCENARIO_AUTO_WAIT_TIME_LONG"*/, 0);
  if ( !scenarioAutoWaitLongTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioAutoWaitLongTxt, scenarioTextSpeedSlider, 0);
  scenarioAutoWaitShortTxt = this->fields.scenarioAutoWaitShortTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_10093/*"OPTION_SCENARIO_AUTO_WAIT_TIME_SHORT"*/, 0);
  if ( !scenarioAutoWaitShortTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioAutoWaitShortTxt, scenarioTextSpeedSlider, 0);
  v47 = BalanceConfig_TypeInfo->static_fields;
  ScenarioAutoWaitTimeStep = v47->ScenarioAutoWaitTimeStep;
  v49 = v47->ScenarioAutoWaitTimeHigh - v47->ScenarioAutoWaitTimeLow;
  if ( !byte_596A15B )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A15B = 1;
  }
  v50 = v49 / ScenarioAutoWaitTimeStep;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v45, v46);
  v51 = vcvtps_s32_f32(v50);
  v52 = ceilf(v50) == INFINITY ? -2147483647 : v51 + 1;
  this->fields.scenarioAutoWaitStep = v52;
  ScenarioAutoWaitTime = OptionManager__GetScenarioAutoWaitTime(0);
  scenarioTextSpeedSlider = (System_String_o *)this->fields.scenarioAutoWaitSlider;
  this->fields.scenarioAutoWaitValue = ScenarioAutoWaitTime;
  if ( !scenarioTextSpeedSlider )
LABEL_44:
    sub_2213CDC(scenarioTextSpeedSlider, v6);
  v54 = BalanceConfig_TypeInfo->static_fields;
  ScenarioAutoWaitTimeLow = v54->ScenarioAutoWaitTimeLow;
  ScenarioAutoWaitTimeHigh = v54->ScenarioAutoWaitTimeHigh;
  HIDWORD(scenarioTextSpeedSlider[4].klass) = this->fields.scenarioAutoWaitStep;
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioTextSpeedSlider,
    (float)(ScenarioAutoWaitTime - ScenarioAutoWaitTimeLow)
  / (float)(ScenarioAutoWaitTimeHigh - ScenarioAutoWaitTimeLow),
    0);
  SetScenarioTextSpeedControl__SetChangeScenarioAutoWaitTimeText(this, v57);
}


void SetScenarioTextSpeedControl__OnValueChangeScenarioAutoWaitTime(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *scenarioAutoWaitSlider; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  float value; // s0
  BalanceConfig_c *v7; // x0
  float v8; // s8

  if ( (byte_596B5C2 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596B5C2 = 1;
  }
  scenarioAutoWaitSlider = (UIProgressBar_o *)this->fields.scenarioAutoWaitSlider;
  if ( !scenarioAutoWaitSlider )
    sub_2213CDC(0, method);
  value = UIProgressBar__get_value(scenarioAutoWaitSlider, 0);
  v7 = BalanceConfig_TypeInfo;
  v8 = value;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v5);
    v7 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioAutoWaitValue = v7->static_fields->ScenarioAutoWaitTimeLow
                                     + (float)(v8
                                             * (float)(v7->static_fields->ScenarioAutoWaitTimeHigh
                                                     - v7->static_fields->ScenarioAutoWaitTimeLow));
  SetScenarioTextSpeedControl__SetChangeScenarioAutoWaitTimeText(this, v4);
}


void SetScenarioTextSpeedControl__Reflection(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float scenarioTextSpeedValue; // s8

  if ( (byte_596B5BD & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596B5BD = 1;
  }
  scenarioTextSpeedValue = this->fields.scenarioTextSpeedValue;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetScenarioTextSpeed(scenarioTextSpeedValue, 0);
  OptionManager__SetScenarioScrollSpeed(this->fields.scenarioScrollSpeedValue, 0);
  OptionManager__SetScenarioAutoWaitTime(this->fields.scenarioAutoWaitValue, 0);
}


void SetScenarioTextSpeedControl__SetChangeScenarioAutoWaitTimeText(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x0
  float *p_scenarioAutoWaitValue; // x20
  float scenarioAutoWaitValue; // s8
  UILabel_o *scenarioAutoWaitValueTxt; // x19
  float v8; // s0
  System_String_o *v9; // x1

  if ( (byte_596B5C3 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&StringLiteral_6658/*"F0"*/);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596B5C3 = 1;
  }
  v4 = (System_String_o *)BalanceConfig_TypeInfo;
  p_scenarioAutoWaitValue = &this->fields.scenarioAutoWaitValue;
  scenarioAutoWaitValue = this->fields.scenarioAutoWaitValue;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  scenarioAutoWaitValueTxt = this->fields.scenarioAutoWaitValueTxt;
  v8 = *(float *)(*(_QWORD *)&v4[7].fields + 632LL);
  if ( scenarioAutoWaitValue <= v8 )
  {
    if ( scenarioAutoWaitValueTxt )
    {
      v9 = (System_String_o *)StringLiteral_1198/*"0"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_2213CDC(v4, method);
  }
  v4 = System_Single__ToString_77226200(
         v8,
         (System_String_o *)p_scenarioAutoWaitValue,
         (const MethodInfo *)StringLiteral_6658/*"F0"*/);
  if ( !scenarioAutoWaitValueTxt )
    goto LABEL_11;
  v9 = v4;
LABEL_10:
  UILabel__set_text(scenarioAutoWaitValueTxt, v9, 0);
}


void SetScenarioTextSpeedControl__getChangeScenarioScrollSpeedValue(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *scenarioScrollSpeedSlider; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  float value; // s0
  BalanceConfig_c *v7; // x0
  float v8; // s8
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioScrollSpeedHigh; // s10
  float ScenarioScrollSpeedLow; // s9
  struct BalanceConfig_StaticFields *v12; // x8
  float v13; // s0
  float v14; // s0

  if ( (byte_596B5C1 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596B5C1 = 1;
  }
  scenarioScrollSpeedSlider = (UIProgressBar_o *)this->fields.scenarioScrollSpeedSlider;
  if ( !scenarioScrollSpeedSlider )
    sub_2213CDC(0, method);
  value = UIProgressBar__get_value(scenarioScrollSpeedSlider, 0);
  v7 = BalanceConfig_TypeInfo;
  v8 = value;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v5);
    v7 = BalanceConfig_TypeInfo;
  }
  static_fields = v7->static_fields;
  ScenarioScrollSpeedHigh = static_fields->ScenarioScrollSpeedHigh;
  ScenarioScrollSpeedLow = static_fields->ScenarioScrollSpeedLow;
  if ( !byte_5969ADF )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4, v5);
  v12 = BalanceConfig_TypeInfo->static_fields;
  v13 = floorf(ScenarioScrollSpeedLow + (float)(v8 * (float)(ScenarioScrollSpeedHigh - ScenarioScrollSpeedLow)));
  if ( v13 == INFINITY )
    v14 = -2147500000.0;
  else
    v14 = (float)(int)v13;
  if ( v14 <= v12->ScenarioScrollSpeedLow )
    v14 = v12->ScenarioScrollSpeedLow;
  this->fields.scenarioScrollSpeedValue = v14;
  SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(this, v4);
}


void SetScenarioTextSpeedControl__getChangeScenarioTextSpeedValue(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *scenarioTextSpeedSlider; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  float value; // s0
  BalanceConfig_c *v7; // x0
  float v8; // s8
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioTextSpeedHigh; // s10
  float ScenarioTextSpeedLow; // s9
  struct BalanceConfig_StaticFields *v12; // x8
  float v13; // s0
  float v14; // s0

  if ( (byte_596B5BF & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596B5BF = 1;
  }
  scenarioTextSpeedSlider = (UIProgressBar_o *)this->fields.scenarioTextSpeedSlider;
  if ( !scenarioTextSpeedSlider )
    sub_2213CDC(0, method);
  value = UIProgressBar__get_value(scenarioTextSpeedSlider, 0);
  v7 = BalanceConfig_TypeInfo;
  v8 = value;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v5);
    v7 = BalanceConfig_TypeInfo;
  }
  static_fields = v7->static_fields;
  ScenarioTextSpeedHigh = static_fields->ScenarioTextSpeedHigh;
  ScenarioTextSpeedLow = static_fields->ScenarioTextSpeedLow;
  if ( !byte_5969ADF )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4, v5);
  v12 = BalanceConfig_TypeInfo->static_fields;
  v13 = floorf(ScenarioTextSpeedLow + (float)(v8 * (float)(ScenarioTextSpeedHigh - ScenarioTextSpeedLow)));
  if ( v13 == INFINITY )
    v14 = -2147500000.0;
  else
    v14 = (float)(int)v13;
  if ( v14 <= v12->ScenarioTextSpeedLow )
    v14 = v12->ScenarioTextSpeedLow;
  this->fields.scenarioTextSpeedValue = v14;
  SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(this, v4);
}


void SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x0
  float *p_scenarioScrollSpeedValue; // x20
  float scenarioScrollSpeedValue; // s8
  UILabel_o *scenarioScrollSpeedValueTxt; // x19
  float v8; // s0
  System_String_o *v9; // x1

  if ( (byte_596B5C0 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&StringLiteral_8967/*"MAX"*/);
    sub_2213A60(&StringLiteral_7191/*"G2"*/);
    byte_596B5C0 = 1;
  }
  v4 = (System_String_o *)BalanceConfig_TypeInfo;
  p_scenarioScrollSpeedValue = &this->fields.scenarioScrollSpeedValue;
  scenarioScrollSpeedValue = this->fields.scenarioScrollSpeedValue;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  scenarioScrollSpeedValueTxt = this->fields.scenarioScrollSpeedValueTxt;
  v8 = *(float *)(*(_QWORD *)&v4[7].fields + 620LL);
  if ( scenarioScrollSpeedValue >= v8 )
  {
    if ( scenarioScrollSpeedValueTxt )
    {
      v9 = (System_String_o *)StringLiteral_8967/*"MAX"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_2213CDC(v4, method);
  }
  v4 = System_Single__ToString_77226200(
         v8,
         (System_String_o *)p_scenarioScrollSpeedValue,
         (const MethodInfo *)StringLiteral_7191/*"G2"*/);
  if ( !scenarioScrollSpeedValueTxt )
    goto LABEL_11;
  v9 = v4;
LABEL_10:
  UILabel__set_text(scenarioScrollSpeedValueTxt, v9, 0);
}


void SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x0
  float *p_scenarioTextSpeedValue; // x20
  float scenarioTextSpeedValue; // s8
  UILabel_o *scenarioTextSpeedValueTxt; // x19
  float v8; // s0
  System_String_o *v9; // x1

  if ( (byte_596B5BE & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&StringLiteral_8967/*"MAX"*/);
    sub_2213A60(&StringLiteral_7191/*"G2"*/);
    byte_596B5BE = 1;
  }
  v4 = (System_String_o *)BalanceConfig_TypeInfo;
  p_scenarioTextSpeedValue = &this->fields.scenarioTextSpeedValue;
  scenarioTextSpeedValue = this->fields.scenarioTextSpeedValue;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  scenarioTextSpeedValueTxt = this->fields.scenarioTextSpeedValueTxt;
  v8 = *(float *)(*(_QWORD *)&v4[7].fields + 604LL);
  if ( scenarioTextSpeedValue >= v8 )
  {
    if ( scenarioTextSpeedValueTxt )
    {
      v9 = (System_String_o *)StringLiteral_8967/*"MAX"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_2213CDC(v4, method);
  }
  v4 = System_Single__ToString_77226200(
         v8,
         (System_String_o *)p_scenarioTextSpeedValue,
         (const MethodInfo *)StringLiteral_7191/*"G2"*/);
  if ( !scenarioTextSpeedValueTxt )
    goto LABEL_11;
  v9 = v4;
LABEL_10:
  UILabel__set_text(scenarioTextSpeedValueTxt, v9, 0);
}


void SetScenarioTextSpeedControl__setDefaultValue(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float ScenarioTextSpeedDefault; // s8
  __int64 v5; // x2
  UIProgressBar_o *scenarioTextSpeedSlider; // x0
  __int64 v7; // x2
  __int64 v8; // x2
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_596B5C4 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&Method_SetScenarioTextSpeedControl_setDefaultValue__);
    byte_596B5C4 = 1;
  }
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  if ( !byte_596B5C7 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596B5C7 = 1;
  }
  if ( *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    ScenarioTextSpeedDefault = BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedDefault;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    ScenarioTextSpeedDefault = BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedDefault;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v5);
  }
  scenarioTextSpeedSlider = (UIProgressBar_o *)this->fields.scenarioTextSpeedSlider;
  if ( !scenarioTextSpeedSlider )
    goto LABEL_25;
  UIProgressBar__set_value(
    scenarioTextSpeedSlider,
    (float)(ScenarioTextSpeedDefault - BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow),
    0);
  if ( !byte_596B5C8 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596B5C8 = 1;
  }
  scenarioTextSpeedSlider = (UIProgressBar_o *)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v7);
    scenarioTextSpeedSlider = (UIProgressBar_o *)BalanceConfig_TypeInfo;
  }
  if ( !this->fields.scenarioScrollSpeedSlider )
    goto LABEL_25;
  UIProgressBar__set_value(
    (UIProgressBar_o *)this->fields.scenarioScrollSpeedSlider,
    (float)(*(float *)&scenarioTextSpeedSlider[1].fields.mTrans[26].klass
          - *(float *)&scenarioTextSpeedSlider[1].fields.mTrans[25].fields.m_CachedPtr)
  / (float)(*((float *)&scenarioTextSpeedSlider[1].fields.mTrans[25].fields.m_CachedPtr + 1)
          - *(float *)&scenarioTextSpeedSlider[1].fields.mTrans[25].fields.m_CachedPtr),
    0);
  if ( !byte_596B5C9 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596B5C9 = 1;
  }
  scenarioTextSpeedSlider = (UIProgressBar_o *)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v8);
    scenarioTextSpeedSlider = (UIProgressBar_o *)BalanceConfig_TypeInfo;
  }
  if ( !this->fields.scenarioAutoWaitSlider )
LABEL_25:
    sub_2213CDC(scenarioTextSpeedSlider, method);
  UIProgressBar__set_value(
    (UIProgressBar_o *)this->fields.scenarioAutoWaitSlider,
    (float)(*(float *)&scenarioTextSpeedSlider[1].fields.mTrans[26].fields.m_CachedPtr
          - *(float *)&scenarioTextSpeedSlider[1].fields.mTrans[26].monitor)
  / (float)(*((float *)&scenarioTextSpeedSlider[1].fields.mTrans[26].monitor + 1)
          - *(float *)&scenarioTextSpeedSlider[1].fields.mTrans[26].monitor),
    0);
  v9 = Method_SetScenarioTextSpeedControl_setDefaultValue__;
  if ( (*((_BYTE *)Method_SetScenarioTextSpeedControl_setDefaultValue__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_2213A78(Method_SetScenarioTextSpeedControl_setDefaultValue__);
  v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
}