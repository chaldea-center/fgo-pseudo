void __fastcall SetScenarioTextSpeedControl___ctor(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetScenarioTextSpeedControl__Init(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  UILabel_o *scenarioTextSpeedTxt; // x20
  System_String_o *scenarioTextSpeedSlider; // x0
  __int64 v30; // x1
  UILabel_o *scenarioTextSpeedFastTxt; // x20
  UILabel_o *scenarioTextSpeedSlowTxt; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  BalanceConfig_c *v35; // x0
  float *p_CriticalRateToAddByQuickFirstBonus; // x8
  float v37; // s8
  float v38; // s9
  float v39; // s8
  unsigned int v40; // w9
  int32_t v41; // w8
  float ScenarioTextSpeed; // s0
  const MethodInfo *v43; // x1
  UILabel_o *scenarioScrollSpeedTxt; // x20
  UILabel_o *scenarioScrollSpeedFastTxt; // x20
  UILabel_o *scenarioScrollSpeedSlowTxt; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioScrollSpeedStep; // s8
  float v51; // s9
  float v52; // s8
  unsigned int v53; // w9
  int32_t v54; // w8
  float ScenarioScrollSpeed; // s0
  const MethodInfo *v56; // x1
  UILabel_o *scenarioAutoWaitTxt; // x20
  UILabel_o *scenarioAutoWaitLabel; // x20
  UILabel_o *scenarioAutoWaitLongTxt; // x20
  UILabel_o *scenarioAutoWaitShortTxt; // x20
  __int64 v61; // x1
  __int64 v62; // x2
  struct BalanceConfig_StaticFields *v63; // x8
  float ScenarioAutoWaitTimeStep; // s8
  float v65; // s9
  float v66; // s8
  unsigned int v67; // w9
  int32_t v68; // w8
  float ScenarioAutoWaitTime; // s0
  const MethodInfo *v70; // x1

  if ( (byte_4B1164C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&OptionManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_9830/*"OPTION_SCENARIO_TEXT_SPEED_FAST"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_9824/*"OPTION_SCENARIO_SCROLL_SPEED"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_9831/*"OPTION_SCENARIO_TEXT_SPEED_SLOW"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_9829/*"OPTION_SCENARIO_TEXT_SPEED"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_9826/*"OPTION_SCENARIO_SCROLL_SPEED_SLOW"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_9825/*"OPTION_SCENARIO_SCROLL_SPEED_FAST"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_9819/*"OPTION_SCENARIO_AUTO_WAIT_TIME"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_9822/*"OPTION_SCENARIO_AUTO_WAIT_TIME_SHORT"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_9820/*"OPTION_SCENARIO_AUTO_WAIT_TIME_COMMENT"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_9821/*"OPTION_SCENARIO_AUTO_WAIT_TIME_LONG"*/, v26, v27);
    byte_4B1164C = 1;
  }
  scenarioTextSpeedTxt = this->fields.scenarioTextSpeedTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9829/*"OPTION_SCENARIO_TEXT_SPEED"*/, 0LL);
  if ( !scenarioTextSpeedTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioTextSpeedTxt, scenarioTextSpeedSlider, 0LL);
  scenarioTextSpeedFastTxt = this->fields.scenarioTextSpeedFastTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9830/*"OPTION_SCENARIO_TEXT_SPEED_FAST"*/, 0LL);
  if ( !scenarioTextSpeedFastTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioTextSpeedFastTxt, scenarioTextSpeedSlider, 0LL);
  scenarioTextSpeedSlowTxt = this->fields.scenarioTextSpeedSlowTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9831/*"OPTION_SCENARIO_TEXT_SPEED_SLOW"*/, 0LL);
  if ( !scenarioTextSpeedSlowTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioTextSpeedSlowTxt, scenarioTextSpeedSlider, 0LL);
  v35 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v33);
    v35 = BalanceConfig_TypeInfo;
  }
  p_CriticalRateToAddByQuickFirstBonus = (float *)&v35->static_fields->CriticalRateToAddByQuickFirstBonus;
  v37 = p_CriticalRateToAddByQuickFirstBonus[143];
  v38 = p_CriticalRateToAddByQuickFirstBonus[145] - p_CriticalRateToAddByQuickFirstBonus[144];
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v33, v34);
    byte_4B1103A = 1;
  }
  v39 = v38 / v37;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v33);
  v40 = vcvtps_s32_f32(v39);
  if ( ceilf(v39) == INFINITY )
    v41 = -2147483647;
  else
    v41 = v40 + 1;
  this->fields.scenarioTextSpeedStep = v41;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v33);
  ScenarioTextSpeed = OptionManager__GetScenarioTextSpeed(0LL);
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
    0LL);
  SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(this, v43);
  scenarioScrollSpeedTxt = this->fields.scenarioScrollSpeedTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9824/*"OPTION_SCENARIO_SCROLL_SPEED"*/, 0LL);
  if ( !scenarioScrollSpeedTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioScrollSpeedTxt, scenarioTextSpeedSlider, 0LL);
  scenarioScrollSpeedFastTxt = this->fields.scenarioScrollSpeedFastTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9825/*"OPTION_SCENARIO_SCROLL_SPEED_FAST"*/, 0LL);
  if ( !scenarioScrollSpeedFastTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioScrollSpeedFastTxt, scenarioTextSpeedSlider, 0LL);
  scenarioScrollSpeedSlowTxt = this->fields.scenarioScrollSpeedSlowTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9826/*"OPTION_SCENARIO_SCROLL_SPEED_SLOW"*/, 0LL);
  if ( !scenarioScrollSpeedSlowTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioScrollSpeedSlowTxt, scenarioTextSpeedSlider, 0LL);
  static_fields = BalanceConfig_TypeInfo->static_fields;
  ScenarioScrollSpeedStep = static_fields->ScenarioScrollSpeedStep;
  v51 = static_fields->ScenarioScrollSpeedHigh - static_fields->ScenarioScrollSpeedLow;
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v47, v48);
    byte_4B1103A = 1;
  }
  v52 = v51 / ScenarioScrollSpeedStep;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v47);
  v53 = vcvtps_s32_f32(v52);
  v54 = ceilf(v52) == INFINITY ? -2147483647 : v53 + 1;
  this->fields.scenarioScrollSpeedStep = v54;
  ScenarioScrollSpeed = OptionManager__GetScenarioScrollSpeed(0LL);
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
    0LL);
  SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(this, v56);
  scenarioAutoWaitTxt = this->fields.scenarioAutoWaitTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9819/*"OPTION_SCENARIO_AUTO_WAIT_TIME"*/, 0LL);
  if ( !scenarioAutoWaitTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioAutoWaitTxt, scenarioTextSpeedSlider, 0LL);
  scenarioAutoWaitLabel = this->fields.scenarioAutoWaitLabel;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9820/*"OPTION_SCENARIO_AUTO_WAIT_TIME_COMMENT"*/, 0LL);
  if ( !scenarioAutoWaitLabel )
    goto LABEL_44;
  UILabel__set_text(scenarioAutoWaitLabel, scenarioTextSpeedSlider, 0LL);
  scenarioAutoWaitLongTxt = this->fields.scenarioAutoWaitLongTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9821/*"OPTION_SCENARIO_AUTO_WAIT_TIME_LONG"*/, 0LL);
  if ( !scenarioAutoWaitLongTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioAutoWaitLongTxt, scenarioTextSpeedSlider, 0LL);
  scenarioAutoWaitShortTxt = this->fields.scenarioAutoWaitShortTxt;
  scenarioTextSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9822/*"OPTION_SCENARIO_AUTO_WAIT_TIME_SHORT"*/, 0LL);
  if ( !scenarioAutoWaitShortTxt )
    goto LABEL_44;
  UILabel__set_text(scenarioAutoWaitShortTxt, scenarioTextSpeedSlider, 0LL);
  v63 = BalanceConfig_TypeInfo->static_fields;
  ScenarioAutoWaitTimeStep = v63->ScenarioAutoWaitTimeStep;
  v65 = v63->ScenarioAutoWaitTimeHigh - v63->ScenarioAutoWaitTimeLow;
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v61, v62);
    byte_4B1103A = 1;
  }
  v66 = v65 / ScenarioAutoWaitTimeStep;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v61);
  v67 = vcvtps_s32_f32(v66);
  v68 = ceilf(v66) == INFINITY ? -2147483647 : v67 + 1;
  this->fields.scenarioAutoWaitStep = v68;
  ScenarioAutoWaitTime = OptionManager__GetScenarioAutoWaitTime(0LL);
  scenarioTextSpeedSlider = (System_String_o *)this->fields.scenarioAutoWaitSlider;
  this->fields.scenarioAutoWaitValue = ScenarioAutoWaitTime;
  if ( !scenarioTextSpeedSlider )
LABEL_44:
    sub_1BCAA3C(scenarioTextSpeedSlider, v30);
  HIDWORD(scenarioTextSpeedSlider[4].klass) = this->fields.scenarioAutoWaitStep;
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioTextSpeedSlider,
    (float)(ScenarioAutoWaitTime - BalanceConfig_TypeInfo->static_fields->ScenarioAutoWaitTimeLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioAutoWaitTimeHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioAutoWaitTimeLow),
    0LL);
  SetScenarioTextSpeedControl__SetChangeScenarioAutoWaitTimeText(this, v70);
}


void __fastcall SetScenarioTextSpeedControl__OnValueChangeScenarioAutoWaitTime(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UIProgressBar_o *scenarioAutoWaitSlider; // x0
  const MethodInfo *v5; // x1
  float value; // s0
  BalanceConfig_c *v7; // x0
  float v8; // s8

  if ( (byte_4B11652 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B11652 = 1;
  }
  scenarioAutoWaitSlider = (UIProgressBar_o *)this->fields.scenarioAutoWaitSlider;
  if ( !scenarioAutoWaitSlider )
    sub_1BCAA3C(0LL, method);
  value = UIProgressBar__get_value(scenarioAutoWaitSlider, 0LL);
  v7 = BalanceConfig_TypeInfo;
  v8 = value;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
    v7 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioAutoWaitValue = v7->static_fields->ScenarioAutoWaitTimeLow
                                     + (float)(v8
                                             * (float)(v7->static_fields->ScenarioAutoWaitTimeHigh
                                                     - v7->static_fields->ScenarioAutoWaitTimeLow));
  SetScenarioTextSpeedControl__SetChangeScenarioAutoWaitTimeText(this, v5);
}


void __fastcall SetScenarioTextSpeedControl__Reflection(SetScenarioTextSpeedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float scenarioTextSpeedValue; // s8

  if ( (byte_4B1164D & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B1164D = 1;
  }
  scenarioTextSpeedValue = this->fields.scenarioTextSpeedValue;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  OptionManager__SetScenarioTextSpeed(scenarioTextSpeedValue, 0LL);
  OptionManager__SetScenarioScrollSpeed(this->fields.scenarioScrollSpeedValue, 0LL);
  OptionManager__SetScenarioAutoWaitTime(this->fields.scenarioAutoWaitValue, 0LL);
}


void __fastcall SetScenarioTextSpeedControl__SetChangeScenarioAutoWaitTimeText(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  float *p_scenarioAutoWaitValue; // x20
  float scenarioAutoWaitValue; // s8
  System_String_o *v10; // x0
  UILabel_o *scenarioAutoWaitValueTxt; // x19
  float v12; // s0
  System_String_o *v13; // x1

  if ( (byte_4B11653 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6472/*"F0"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v6, v7);
    byte_4B11653 = 1;
  }
  p_scenarioAutoWaitValue = &this->fields.scenarioAutoWaitValue;
  scenarioAutoWaitValue = this->fields.scenarioAutoWaitValue;
  v10 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v10 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  scenarioAutoWaitValueTxt = this->fields.scenarioAutoWaitValueTxt;
  v12 = *(float *)(*(_QWORD *)&v10[7].fields + 608LL);
  if ( scenarioAutoWaitValue <= v12 )
  {
    if ( scenarioAutoWaitValueTxt )
    {
      v13 = (System_String_o *)StringLiteral_1209/*"0"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_1BCAA3C(v10, method);
  }
  v10 = System_Single__ToString_63289624(
          v12,
          (System_String_o *)p_scenarioAutoWaitValue,
          (const MethodInfo *)StringLiteral_6472/*"F0"*/);
  if ( !scenarioAutoWaitValueTxt )
    goto LABEL_11;
  v13 = v10;
LABEL_10:
  UILabel__set_text(scenarioAutoWaitValueTxt, v13, 0LL);
}


void __fastcall SetScenarioTextSpeedControl__getChangeScenarioScrollSpeedValue(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UIProgressBar_o *scenarioScrollSpeedSlider; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  float value; // s0
  BalanceConfig_c *v8; // x0
  float v9; // s8
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioScrollSpeedHigh; // s10
  float ScenarioScrollSpeedLow; // s9
  float v13; // s0
  float v14; // s1
  float v15; // s0

  if ( (byte_4B11651 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B11651 = 1;
  }
  scenarioScrollSpeedSlider = (UIProgressBar_o *)this->fields.scenarioScrollSpeedSlider;
  if ( !scenarioScrollSpeedSlider )
    sub_1BCAA3C(0LL, method);
  value = UIProgressBar__get_value(scenarioScrollSpeedSlider, 0LL);
  v8 = BalanceConfig_TypeInfo;
  v9 = value;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
    v8 = BalanceConfig_TypeInfo;
  }
  static_fields = v8->static_fields;
  ScenarioScrollSpeedHigh = static_fields->ScenarioScrollSpeedHigh;
  ScenarioScrollSpeedLow = static_fields->ScenarioScrollSpeedLow;
  if ( !byte_4B109C0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v5, v6);
    byte_4B109C0 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v5);
  v13 = ScenarioScrollSpeedLow + (float)(v9 * (float)(ScenarioScrollSpeedHigh - ScenarioScrollSpeedLow));
  v14 = floorf(v13);
  v15 = (float)(int)vcvtms_s32_f32(v13);
  if ( v14 == INFINITY )
    v15 = -2147500000.0;
  if ( v15 <= BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow )
    v15 = BalanceConfig_TypeInfo->static_fields->ScenarioScrollSpeedLow;
  this->fields.scenarioScrollSpeedValue = v15;
  SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(this, v5);
}


void __fastcall SetScenarioTextSpeedControl__getChangeScenarioTextSpeedValue(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UIProgressBar_o *scenarioTextSpeedSlider; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  float value; // s0
  BalanceConfig_c *v8; // x0
  float v9; // s8
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioTextSpeedHigh; // s10
  float ScenarioTextSpeedLow; // s9
  float v13; // s0
  float v14; // s1
  float v15; // s0

  if ( (byte_4B1164F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B1164F = 1;
  }
  scenarioTextSpeedSlider = (UIProgressBar_o *)this->fields.scenarioTextSpeedSlider;
  if ( !scenarioTextSpeedSlider )
    sub_1BCAA3C(0LL, method);
  value = UIProgressBar__get_value(scenarioTextSpeedSlider, 0LL);
  v8 = BalanceConfig_TypeInfo;
  v9 = value;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
    v8 = BalanceConfig_TypeInfo;
  }
  static_fields = v8->static_fields;
  ScenarioTextSpeedHigh = static_fields->ScenarioTextSpeedHigh;
  ScenarioTextSpeedLow = static_fields->ScenarioTextSpeedLow;
  if ( !byte_4B109C0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v5, v6);
    byte_4B109C0 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v5);
  v13 = ScenarioTextSpeedLow + (float)(v9 * (float)(ScenarioTextSpeedHigh - ScenarioTextSpeedLow));
  v14 = floorf(v13);
  v15 = (float)(int)vcvtms_s32_f32(v13);
  if ( v14 == INFINITY )
    v15 = -2147500000.0;
  if ( v15 <= BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow )
    v15 = BalanceConfig_TypeInfo->static_fields->ScenarioTextSpeedLow;
  this->fields.scenarioTextSpeedValue = v15;
  SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(this, v5);
}


void __fastcall SetScenarioTextSpeedControl__setChangeScenarioScrollSpeedText(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  float *p_scenarioScrollSpeedValue; // x20
  float scenarioScrollSpeedValue; // s8
  System_String_o *v10; // x0
  UILabel_o *scenarioScrollSpeedValueTxt; // x19
  float v12; // s0
  System_String_o *v13; // x1

  if ( (byte_4B11650 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_8701/*"MAX"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_6988/*"G2"*/, v6, v7);
    byte_4B11650 = 1;
  }
  p_scenarioScrollSpeedValue = &this->fields.scenarioScrollSpeedValue;
  scenarioScrollSpeedValue = this->fields.scenarioScrollSpeedValue;
  v10 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v10 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  scenarioScrollSpeedValueTxt = this->fields.scenarioScrollSpeedValueTxt;
  v12 = *(float *)(*(_QWORD *)&v10[7].fields + 596LL);
  if ( scenarioScrollSpeedValue >= v12 )
  {
    if ( scenarioScrollSpeedValueTxt )
    {
      v13 = (System_String_o *)StringLiteral_8701/*"MAX"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_1BCAA3C(v10, method);
  }
  v10 = System_Single__ToString_63289624(
          v12,
          (System_String_o *)p_scenarioScrollSpeedValue,
          (const MethodInfo *)StringLiteral_6988/*"G2"*/);
  if ( !scenarioScrollSpeedValueTxt )
    goto LABEL_11;
  v13 = v10;
LABEL_10:
  UILabel__set_text(scenarioScrollSpeedValueTxt, v13, 0LL);
}


void __fastcall SetScenarioTextSpeedControl__setChangeScenarioTextSpeedText(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  float *p_scenarioTextSpeedValue; // x20
  float scenarioTextSpeedValue; // s8
  System_String_o *v10; // x0
  UILabel_o *scenarioTextSpeedValueTxt; // x19
  float v12; // s0
  System_String_o *v13; // x1

  if ( (byte_4B1164E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_8701/*"MAX"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_6988/*"G2"*/, v6, v7);
    byte_4B1164E = 1;
  }
  p_scenarioTextSpeedValue = &this->fields.scenarioTextSpeedValue;
  scenarioTextSpeedValue = this->fields.scenarioTextSpeedValue;
  v10 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v10 = (System_String_o *)BalanceConfig_TypeInfo;
  }
  scenarioTextSpeedValueTxt = this->fields.scenarioTextSpeedValueTxt;
  v12 = *(float *)(*(_QWORD *)&v10[7].fields + 580LL);
  if ( scenarioTextSpeedValue >= v12 )
  {
    if ( scenarioTextSpeedValueTxt )
    {
      v13 = (System_String_o *)StringLiteral_8701/*"MAX"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_1BCAA3C(v10, method);
  }
  v10 = System_Single__ToString_63289624(
          v12,
          (System_String_o *)p_scenarioTextSpeedValue,
          (const MethodInfo *)StringLiteral_6988/*"G2"*/);
  if ( !scenarioTextSpeedValueTxt )
    goto LABEL_11;
  v13 = v10;
LABEL_10:
  UILabel__set_text(scenarioTextSpeedValueTxt, v13, 0LL);
}


void __fastcall SetScenarioTextSpeedControl__setDefaultValue(
        SetScenarioTextSpeedControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioTextSpeedDefault; // s8
  UIProgressBar_o *scenarioTextSpeedSlider; // x0
  __int64 v11; // x2
  __int64 v12; // x2
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_4B11654 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&OptionManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SetScenarioTextSpeedControl_setDefaultValue__, v6, v7);
    byte_4B11654 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  if ( !byte_4B11758 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B11758 = 1;
  }
  if ( BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    static_fields = BalanceConfig_TypeInfo->static_fields;
    ScenarioTextSpeedDefault = static_fields->ScenarioTextSpeedDefault;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    static_fields = BalanceConfig_TypeInfo->static_fields;
    ScenarioTextSpeedDefault = static_fields->ScenarioTextSpeedDefault;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
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
    0LL);
  if ( !byte_4B11759 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v11);
    byte_4B11759 = 1;
  }
  scenarioTextSpeedSlider = (UIProgressBar_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    scenarioTextSpeedSlider = (UIProgressBar_o *)BalanceConfig_TypeInfo;
  }
  if ( !this->fields.scenarioScrollSpeedSlider )
    goto LABEL_25;
  UIProgressBar__set_value(
    (UIProgressBar_o *)this->fields.scenarioScrollSpeedSlider,
    (float)(*(float *)&scenarioTextSpeedSlider[1].fields.mTrans[25].klass
          - *(float *)&scenarioTextSpeedSlider[1].fields.mTrans[24].fields.m_CachedPtr)
  / (float)(*((float *)&scenarioTextSpeedSlider[1].fields.mTrans[24].fields + 1)
          - *(float *)&scenarioTextSpeedSlider[1].fields.mTrans[24].fields.m_CachedPtr),
    0LL);
  if ( !byte_4B1175A )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v12);
    byte_4B1175A = 1;
  }
  scenarioTextSpeedSlider = (UIProgressBar_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    scenarioTextSpeedSlider = (UIProgressBar_o *)BalanceConfig_TypeInfo;
  }
  if ( !this->fields.scenarioAutoWaitSlider )
LABEL_25:
    sub_1BCAA3C(scenarioTextSpeedSlider, method);
  UIProgressBar__set_value(
    (UIProgressBar_o *)this->fields.scenarioAutoWaitSlider,
    (float)(*(float *)&scenarioTextSpeedSlider[1].fields.mTrans[25].fields.m_CachedPtr
          - *(float *)&scenarioTextSpeedSlider[1].fields.mTrans[25].monitor)
  / (float)(*((float *)&scenarioTextSpeedSlider[1].fields.mTrans[25].monitor + 1)
          - *(float *)&scenarioTextSpeedSlider[1].fields.mTrans[25].monitor),
    0LL);
  v13 = Method_SetScenarioTextSpeedControl_setDefaultValue__;
  if ( (*((_BYTE *)Method_SetScenarioTextSpeedControl_setDefaultValue__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BCA7F8(Method_SetScenarioTextSpeedControl_setDefaultValue__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
}