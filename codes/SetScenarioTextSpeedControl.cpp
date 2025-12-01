void SetScenarioTextSpeedControl___ctor(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetScenarioTextSpeedControl__Init(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  UILabel_o *scenarioTextSpeedTxt; // x20
  System_String_o *scenarioTextSpeedSlider; // x0
  __int64 v5; // x1
  UILabel_o *scenarioTextSpeedFastTxt; // x20
  UILabel_o *scenarioTextSpeedSlowTxt; // x20
  BalanceConfig_c *v8; // x0
  float *p_CriticalRateToAddByQuickFirstBonus; // x8
  float v10; // s8
  float v11; // s9
  float v12; // s8
  unsigned int v13; // w9
  int32_t v14; // w8
  float ScenarioTextSpeed; // s0
  const MethodInfo *v16; // x1
  UILabel_o *scenarioScrollSpeedTxt; // x20
  UILabel_o *scenarioScrollSpeedFastTxt; // x20
  UILabel_o *scenarioScrollSpeedSlowTxt; // x20
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioScrollSpeedStep; // s8
  float v22; // s9
  float v23; // s8
  unsigned int v24; // w9
  int32_t v25; // w8
  float ScenarioScrollSpeed; // s0
  const MethodInfo *v27; // x1
  UILabel_o *scenarioAutoWaitTxt; // x20
  UILabel_o *scenarioAutoWaitLabel; // x20
  UILabel_o *scenarioAutoWaitLongTxt; // x20
  UILabel_o *scenarioAutoWaitShortTxt; // x20
  struct BalanceConfig_StaticFields *v32; // x8
  float ScenarioAutoWaitTimeStep; // s8
  float v34; // s9
  float v35; // s8
  unsigned int v36; // w9
  int32_t v37; // w8
  float ScenarioAutoWaitTime; // s0
  const MethodInfo *v39; // x1

  if ( (byte_4CC23F5 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&StringLiteral_9704/*"OPTION_SCENARIO_TEXT_SPEED_FAST"*/);
    sub_1C713B0(&StringLiteral_9698/*"OPTION_SCENARIO_SCROLL_SPEED"*/);
    sub_1C713B0(&StringLiteral_9705/*"OPTION_SCENARIO_TEXT_SPEED_SLOW"*/);
    sub_1C713B0(&StringLiteral_9703/*"OPTION_SCENARIO_TEXT_SPEED"*/);
    sub_1C713B0(&StringLiteral_9700/*"OPTION_SCENARIO_SCROLL_SPEED_SLOW"*/);
    sub_1C713B0(&StringLiteral_9699/*"OPTION_SCENARIO_SCROLL_SPEED_FAST"*/);
    sub_1C713B0(&StringLiteral_9693/*"OPTION_SCENARIO_AUTO_WAIT_TIME"*/);
    sub_1C713B0(&StringLiteral_9696/*"OPTION_SCENARIO_AUTO_WAIT_TIME_SHORT"*/);
    sub_1C713B0(&StringLiteral_9694/*"OPTION_SCENARIO_AUTO_WAIT_TIME_COMMENT"*/);
    sub_1C713B0(&StringLiteral_9695/*"OPTION_SCENARIO_AUTO_WAIT_TIME_LONG"*/);
    byte_4CC23F5 = 1;
  }
  scenarioTextSpeedTxt = this->fields.scenarioTextSpeedTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9703/*"OPTION_SCENARIO_TEXT_SPEED"*/, 0);
  if ( !scenarioTextSpeedTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioTextSpeedTxt, scenarioTextSpeedSlider, 0);
  scenarioTextSpeedFastTxt = this->fields.scenarioTextSpeedFastTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9704/*"OPTION_SCENARIO_TEXT_SPEED_FAST"*/, 0);
  if ( !scenarioTextSpeedFastTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioTextSpeedFastTxt, scenarioTextSpeedSlider, 0);
  scenarioTextSpeedSlowTxt = this->fields.scenarioTextSpeedSlowTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9705/*"OPTION_SCENARIO_TEXT_SPEED_SLOW"*/, 0);
  if ( !scenarioTextSpeedSlowTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioTextSpeedSlowTxt, scenarioTextSpeedSlider, 0);
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  p_CriticalRateToAddByQuickFirstBonus = (float *)&v8->static_fields->CriticalRateToAddByQuickFirstBonus;
  v10 = p_CriticalRateToAddByQuickFirstBonus[150];
  v11 = p_CriticalRateToAddByQuickFirstBonus[152] - p_CriticalRateToAddByQuickFirstBonus[151];
  if ( !byte_4CC13B2 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC13B2 = 1;
  }
  v12 = v11 / v10;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = vcvtps_s32_f32(v12);
  if ( ceilf(v12) == INFINITY )
    v14 = -2147483647;
  else
    v14 = v13 + 1;
  this->fields.scenarioTextSpeedStep = v14;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  ScenarioTextSpeed = OptionManager__GetScenarioTextSpeed(0);
  scenarioTextSpeedSlider = (System_String_o *)this->fields.scenarioTextSpeedSlider;
  this->fields.scenarioTextSpeedValue = ScenarioTextSpeed;
  if ( !scenarioTextSpeedSlider )
    goto LABEL_44;
  HIDWORD(scenarioTextSpeedSlider[4].klass) = this->fields.scenarioTextSpeedStep;
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioTextSpeedSlider,
    (float)(ScenarioTextSpeed - BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow),
    0);
  SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(this, v16);
  scenarioScrollSpeedTxt = this->fields.scenarioScrollSpeedTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9698/*"OPTION_SCENARIO_SCROLL_SPEED"*/, 0);
  if ( !scenarioScrollSpeedTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioScrollSpeedTxt, scenarioTextSpeedSlider, 0);
  scenarioScrollSpeedFastTxt = this->fields.scenarioScrollSpeedFastTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9699/*"OPTION_SCENARIO_SCROLL_SPEED_FAST"*/, 0);
  if ( !scenarioScrollSpeedFastTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioScrollSpeedFastTxt, scenarioTextSpeedSlider, 0);
  scenarioScrollSpeedSlowTxt = this->fields.scenarioScrollSpeedSlowTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9700/*"OPTION_SCENARIO_SCROLL_SPEED_SLOW"*/, 0);
  if ( !scenarioScrollSpeedSlowTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioScrollSpeedSlowTxt, scenarioTextSpeedSlider, 0);
  static_fields = BalanceConfig_TypeInfo->static_fields;
  ScenarioScrollSpeedStep = static_fields->ScenarioScrollSpeedStep;
  v22 = static_fields->ScenarioScrollSpeedHigh - static_fields->ScenarioScrollSpeedLow;
  if ( !byte_4CC13B2 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC13B2 = 1;
  }
  v23 = v22 / ScenarioScrollSpeedStep;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v24 = vcvtps_s32_f32(v23);
  v25 = ceilf(v23) == INFINITY ? -2147483647 : v24 + 1;
  this->fields.scenarioScrollSpeedStep = v25;
  ScenarioScrollSpeed = OptionManager__GetScenarioScrollSpeed(0);
  scenarioTextSpeedSlider = (System_String_o *)this->fields.scenarioScrollSpeedSlider;
  this->fields.scenarioScrollSpeedValue = ScenarioScrollSpeed;
  if ( !scenarioTextSpeedSlider )
    goto LABEL_44;
  HIDWORD(scenarioTextSpeedSlider[4].klass) = this->fields.scenarioScrollSpeedStep;
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioTextSpeedSlider,
    (float)(ScenarioScrollSpeed - BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow),
    0);
  SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(this, v27);
  scenarioAutoWaitTxt = this->fields.scenarioAutoWaitTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9693/*"OPTION_SCENARIO_AUTO_WAIT_TIME"*/, 0);
  if ( !scenarioAutoWaitTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioAutoWaitTxt, scenarioTextSpeedSlider, 0);
  scenarioAutoWaitLabel = this->fields.scenarioAutoWaitLabel;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9694/*"OPTION_SCENARIO_AUTO_WAIT_TIME_COMMENT"*/, 0);
  if ( !scenarioAutoWaitLabel )
    goto LABEL_44;
  UILabel__set_text(scenarioAutoWaitLabel, scenarioTextSpeedSlider, 0);
  scenarioAutoWaitLongTxt = this->fields.scenarioAutoWaitLongTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9695/*"OPTION_SCENARIO_AUTO_WAIT_TIME_LONG"*/, 0);
  if ( !scenarioAutoWaitLongTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioAutoWaitLongTxt, scenarioTextSpeedSlider, 0);
  scenarioAutoWaitShortTxt = this->fields.scenarioAutoWaitShortTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9696/*"OPTION_SCENARIO_AUTO_WAIT_TIME_SHORT"*/, 0);
  if ( !scenarioAutoWaitShortTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioAutoWaitShortTxt, scenarioTextSpeedSlider, 0);
  v32 = BalanceConfig_TypeInfo->static_fields;
  ScenarioAutoWaitTimeStep = v32->ScenarioAutoWaitTimeStep;
  v34 = v32->ScenarioAutoWaitTimeHigh - v32->ScenarioAutoWaitTimeLow;
  if ( !byte_4CC13B2 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC13B2 = 1;
  }
  v35 = v34 / ScenarioAutoWaitTimeStep;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v36 = vcvtps_s32_f32(v35);
  v37 = ceilf(v35) == INFINITY ? -2147483647 : v36 + 1;
  this->fields.scenarioAutoWaitStep = v37;
  ScenarioAutoWaitTime = OptionManager__GetScenarioAutoWaitTime(0);
  scenarioTextSpeedSlider = (System_String_o *)this->fields.scenarioAutoWaitSlider;
  this->fields.scenarioAutoWaitValue = ScenarioAutoWaitTime;
  if ( !scenarioTextSpeedSlider )
LABEL_44:
    sub_1C71608(scenarioTextSpeedSlider, v5);
  HIDWORD(scenarioTextSpeedSlider[4].klass) = this->fields.scenarioAutoWaitStep;
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioTextSpeedSlider,
    (float)(ScenarioAutoWaitTime - BalanceConfig_TypeInfo->static_fields->ScenarioAutoWaitTimeLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioAutoWaitTimeHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioAutoWaitTimeLow),
    0);
  SetScenarioTextSpeedControl__SetChangeScenarioAutoWaitTimeText(this, v39);
}


void SetScenarioTextSpeedControl__OnValueChangeScenarioAutoWaitTime(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *scenarioAutoWaitSlider; // x0
  const MethodInfo *v4; // x1
  float value; // s0
  BalanceConfig_c *v6; // x0
  float v7; // s8

  if ( (byte_4CC23FB & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC23FB = 1;
  }
  scenarioAutoWaitSlider = (UIProgressBar_o *)this->fields.scenarioAutoWaitSlider;
  if ( !scenarioAutoWaitSlider )
    sub_1C71608(0, method);
  value = UIProgressBar__get_value(scenarioAutoWaitSlider, 0);
  v6 = BalanceConfig_TypeInfo;
  v7 = value;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioAutoWaitValue = v6->static_fields->ScenarioAutoWaitTimeLow
                                     + (float)(v7
                                             * (float)(v6->static_fields->ScenarioAutoWaitTimeHigh
                                                     - v6->static_fields->ScenarioAutoWaitTimeLow));
  SetScenarioTextSpeedControl__SetChangeScenarioAutoWaitTimeText(this, v4);
}


void SetScenarioTextSpeedControl__Reflection(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  float scenarioTextSpeedValue; // s8

  if ( (byte_4CC23F6 & 1) == 0 )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    byte_4CC23F6 = 1;
  }
  scenarioTextSpeedValue = this->fields.scenarioTextSpeedValue;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetScenarioTextSpeed(scenarioTextSpeedValue, 0);
  OptionManager__SetScenarioScrollSpeed(this->fields.scenarioScrollSpeedValue, 0);
  OptionManager__SetScenarioAutoWaitTime(this->fields.scenarioAutoWaitValue, 0);
}


void SetScenarioTextSpeedControl__SetChangeScenarioAutoWaitTimeText(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  float *p_scenarioAutoWaitValue; // x20
  float scenarioAutoWaitValue; // s8
  System_String_o *v5; // x0
  UILabel_o *scenarioAutoWaitValueTxt; // x19
  float v7; // s0
  System_String_o *v8; // x1

  if ( (byte_4CC23FC & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&StringLiteral_6381/*"F0"*/);
    sub_1C713B0(&StringLiteral_1115/*"0"*/);
    byte_4CC23FC = 1;
  }
  p_scenarioAutoWaitValue = &this->fields.scenarioAutoWaitValue;
  scenarioAutoWaitValue = this->fields.scenarioAutoWaitValue;
  v5 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  scenarioAutoWaitValueTxt = this->fields.scenarioAutoWaitValueTxt;
  v7 = *(float *)(*(_QWORD *)&v5[7].fields + 636LL);
  if ( scenarioAutoWaitValue <= v7 )
  {
    if ( scenarioAutoWaitValueTxt )
    {
      v8 = (System_String_o *)StringLiteral_1115/*"0"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C71608(v5, method);
  }
  v5 = System_Single__ToString_65625372(
         v7,
         (System_String_o *)p_scenarioAutoWaitValue,
         (const MethodInfo *)StringLiteral_6381/*"F0"*/);
  if ( !scenarioAutoWaitValueTxt )
    goto LABEL_11;
  v8 = v5;
LABEL_10:
  UILabel__set_text(scenarioAutoWaitValueTxt, v8, 0);
}


void SetScenarioTextSpeedControl__getChangeScenarioScrollSpeedValue(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *scenarioScrollSpeedSlider; // x0
  const MethodInfo *v4; // x1
  float value; // s0
  BalanceConfig_c *v6; // x0
  float v7; // s8
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioScrollSpeedHigh; // s10
  float ScenarioScrollSpeedLow; // s9
  float v11; // s0
  float v12; // s1
  float v13; // s0

  if ( (byte_4CC23FA & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC23FA = 1;
  }
  scenarioScrollSpeedSlider = (UIProgressBar_o *)this->fields.scenarioScrollSpeedSlider;
  if ( !scenarioScrollSpeedSlider )
    sub_1C71608(0, method);
  value = UIProgressBar__get_value(scenarioScrollSpeedSlider, 0);
  v6 = BalanceConfig_TypeInfo;
  v7 = value;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  static_fields = v6->static_fields;
  ScenarioScrollSpeedHigh = static_fields->ScenarioScrollSpeedHigh;
  ScenarioScrollSpeedLow = static_fields->ScenarioScrollSpeedLow;
  if ( !byte_4CC0D08 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC0D08 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = ScenarioScrollSpeedLow + (float)(v7 * (float)(ScenarioScrollSpeedHigh - ScenarioScrollSpeedLow));
  v12 = floorf(v11);
  v13 = (float)(int)vcvtms_s32_f32(v11);
  if ( v12 == INFINITY )
    v13 = -2147500000.0;
  if ( v13 <= BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow )
    v13 = BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow;
  this->fields.scenarioScrollSpeedValue = v13;
  SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(this, v4);
}


void SetScenarioTextSpeedControl__getChangeScenarioTextSpeedValue(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *scenarioTextSpeedSlider; // x0
  const MethodInfo *v4; // x1
  float value; // s0
  BalanceConfig_c *v6; // x0
  float v7; // s8
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioTextSpeedHigh; // s10
  float ScenarioTextSpeedLow; // s9
  float v11; // s0
  float v12; // s1
  float v13; // s0

  if ( (byte_4CC23F8 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC23F8 = 1;
  }
  scenarioTextSpeedSlider = (UIProgressBar_o *)this->fields.scenarioTextSpeedSlider;
  if ( !scenarioTextSpeedSlider )
    sub_1C71608(0, method);
  value = UIProgressBar__get_value(scenarioTextSpeedSlider, 0);
  v6 = BalanceConfig_TypeInfo;
  v7 = value;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  static_fields = v6->static_fields;
  ScenarioTextSpeedHigh = static_fields->ScenarioTextSpeedHigh;
  ScenarioTextSpeedLow = static_fields->ScenarioTextSpeedLow;
  if ( !byte_4CC0D08 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC0D08 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = ScenarioTextSpeedLow + (float)(v7 * (float)(ScenarioTextSpeedHigh - ScenarioTextSpeedLow));
  v12 = floorf(v11);
  v13 = (float)(int)vcvtms_s32_f32(v11);
  if ( v12 == INFINITY )
    v13 = -2147500000.0;
  if ( v13 <= BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow )
    v13 = BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow;
  this->fields.scenarioTextSpeedValue = v13;
  SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(this, v4);
}


void SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  float *p_scenarioScrollSpeedValue; // x20
  float scenarioScrollSpeedValue; // s8
  System_String_o *v5; // x0
  UILabel_o *scenarioScrollSpeedValueTxt; // x19
  float v7; // s0
  System_String_o *v8; // x1

  if ( (byte_4CC23F9 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&StringLiteral_8605/*"MAX"*/);
    sub_1C713B0(&StringLiteral_6893/*"G2"*/);
    byte_4CC23F9 = 1;
  }
  p_scenarioScrollSpeedValue = &this->fields.scenarioScrollSpeedValue;
  scenarioScrollSpeedValue = this->fields.scenarioScrollSpeedValue;
  v5 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  scenarioScrollSpeedValueTxt = this->fields.scenarioScrollSpeedValueTxt;
  v7 = *(float *)(*(_QWORD *)&v5[7].fields + 624LL);
  if ( scenarioScrollSpeedValue >= v7 )
  {
    if ( scenarioScrollSpeedValueTxt )
    {
      v8 = (System_String_o *)StringLiteral_8605/*"MAX"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C71608(v5, method);
  }
  v5 = System_Single__ToString_65625372(
         v7,
         (System_String_o *)p_scenarioScrollSpeedValue,
         (const MethodInfo *)StringLiteral_6893/*"G2"*/);
  if ( !scenarioScrollSpeedValueTxt )
    goto LABEL_11;
  v8 = v5;
LABEL_10:
  UILabel__set_text(scenarioScrollSpeedValueTxt, v8, 0);
}


void SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  float *p_scenarioTextSpeedValue; // x20
  float scenarioTextSpeedValue; // s8
  System_String_o *v5; // x0
  UILabel_o *scenarioTextSpeedValueTxt; // x19
  float v7; // s0
  System_String_o *v8; // x1

  if ( (byte_4CC23F7 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&StringLiteral_8605/*"MAX"*/);
    sub_1C713B0(&StringLiteral_6893/*"G2"*/);
    byte_4CC23F7 = 1;
  }
  p_scenarioTextSpeedValue = &this->fields.scenarioTextSpeedValue;
  scenarioTextSpeedValue = this->fields.scenarioTextSpeedValue;
  v5 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  scenarioTextSpeedValueTxt = this->fields.scenarioTextSpeedValueTxt;
  v7 = *(float *)(*(_QWORD *)&v5[7].fields + 608LL);
  if ( scenarioTextSpeedValue >= v7 )
  {
    if ( scenarioTextSpeedValueTxt )
    {
      v8 = (System_String_o *)StringLiteral_8605/*"MAX"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C71608(v5, method);
  }
  v5 = System_Single__ToString_65625372(
         v7,
         (System_String_o *)p_scenarioTextSpeedValue,
         (const MethodInfo *)StringLiteral_6893/*"G2"*/);
  if ( !scenarioTextSpeedValueTxt )
    goto LABEL_11;
  v8 = v5;
LABEL_10:
  UILabel__set_text(scenarioTextSpeedValueTxt, v8, 0);
}


void SetScenarioTextSpeedControl__setDefaultValue(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioTextSpeedDefault; // s8
  UIProgressBar_o *scenarioTextSpeedSlider; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4CC23FD & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&Method_SetScenarioTextSpeedControl_setDefaultValue__);
    byte_4CC23FD = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !byte_4CC24D8 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC24D8 = 1;
  }
  if ( BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    static_fields = BalanceConfig_TypeInfo->static_fields;
    ScenarioTextSpeedDefault = static_fields->ScenarioTextSpeedDefault;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    static_fields = BalanceConfig_TypeInfo->static_fields;
    ScenarioTextSpeedDefault = static_fields->ScenarioTextSpeedDefault;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
  }
  scenarioTextSpeedSlider = (UIProgressBar_o *)this->fields.scenarioTextSpeedSlider;
  if ( !scenarioTextSpeedSlider )
    goto LABEL_25;
  UIProgressBar__set_value(
    scenarioTextSpeedSlider,
    (float)(ScenarioTextSpeedDefault - static_fields->ScenarioTextSpeedLow)
  / (float)(static_fields->ScenarioTextSpeedHigh - static_fields->ScenarioTextSpeedLow),
    0);
  if ( !byte_4CC24D9 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC24D9 = 1;
  }
  scenarioTextSpeedSlider = (UIProgressBar_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    scenarioTextSpeedSlider = (UIProgressBar_o *)BalanceConfig_TypeInfo;
  }
  if ( !this->fields.scenarioScrollSpeedSlider )
    goto LABEL_25;
  UIProgressBar__set_value(
    (UIProgressBar_o *)this->fields.scenarioScrollSpeedSlider,
    (float)(*((float *)&scenarioTextSpeedSlider[1].fields.mTrans[26].klass + 1)
          - *((float *)&scenarioTextSpeedSlider[1].fields.mTrans[25].fields.m_CachedPtr + 1))
  / (float)(*(float *)&scenarioTextSpeedSlider[1].fields.mTrans[26].klass
          - *((float *)&scenarioTextSpeedSlider[1].fields.mTrans[25].fields.m_CachedPtr + 1)),
    0);
  if ( !byte_4CC24DA )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC24DA = 1;
  }
  scenarioTextSpeedSlider = (UIProgressBar_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    scenarioTextSpeedSlider = (UIProgressBar_o *)BalanceConfig_TypeInfo;
  }
  if ( !this->fields.scenarioAutoWaitSlider )
LABEL_25:
    sub_1C71608(scenarioTextSpeedSlider, method);
  UIProgressBar__set_value(
    (UIProgressBar_o *)this->fields.scenarioAutoWaitSlider,
    (float)(*((float *)&scenarioTextSpeedSlider[1].fields.mTrans[26].fields.m_CachedPtr + 1)
          - *((float *)&scenarioTextSpeedSlider[1].fields.mTrans[26].monitor + 1))
  / (float)(*(float *)&scenarioTextSpeedSlider[1].fields.mTrans[26].fields.m_CachedPtr
          - *((float *)&scenarioTextSpeedSlider[1].fields.mTrans[26].monitor + 1)),
    0);
  v6 = Method_SetScenarioTextSpeedControl_setDefaultValue__;
  if ( (*((_BYTE *)Method_SetScenarioTextSpeedControl_setDefaultValue__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C713C8(Method_SetScenarioTextSpeedControl_setDefaultValue__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C71394(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
}