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
  __int64 v2; // x2
  float scenarioSpeedValue; // s8

  if ( (byte_4B11646 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B11646 = 1;
  }
  scenarioSpeedValue = this->fields.scenarioSpeedValue;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  OptionManager__SetScenarioSpeed(scenarioSpeedValue, 0LL);
  OptionManager__SetScenarioTextWaitTimeSecond(this->fields.scenarioTextWaitTimeSecondValue, 0LL);
}


void __fastcall SetScenarioControl__getChangeScenarioSpeedValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIProgressBar_o *scenarioSpeedSlider; // x0
  const MethodInfo *v5; // x1
  float value; // s0
  BalanceConfig_c *v7; // x0
  float v8; // s8

  if ( (byte_4B11648 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B11648 = 1;
  }
  scenarioSpeedSlider = (UIProgressBar_o *)this->fields.scenarioSpeedSlider;
  if ( !scenarioSpeedSlider )
    sub_1BCAA3C(0LL, method);
  value = UIProgressBar__get_value(scenarioSpeedSlider, 0LL);
  v7 = BalanceConfig_TypeInfo;
  v8 = value;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
    v7 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioSpeedValue = v7->static_fields->ScenarioSpeedLow
                                  + (float)(v8
                                          * (float)(v7->static_fields->ScenarioSpeedHigh
                                                  - v7->static_fields->ScenarioSpeedLow));
  SetScenarioControl__setChangeScenarioSpeedText(this, v5);
}


void __fastcall SetScenarioControl__getScenarioTextWaitTimeSecond(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIProgressBar_o *scenarioTextWaitSlider; // x0
  const MethodInfo *v5; // x1
  float value; // s0
  BalanceConfig_c *v7; // x0
  float v8; // s8

  if ( (byte_4B1164A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B1164A = 1;
  }
  scenarioTextWaitSlider = (UIProgressBar_o *)this->fields.scenarioTextWaitSlider;
  if ( !scenarioTextWaitSlider )
    sub_1BCAA3C(0LL, method);
  value = UIProgressBar__get_value(scenarioTextWaitSlider, 0LL);
  v7 = BalanceConfig_TypeInfo;
  v8 = value;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
    v7 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioTextWaitTimeSecondValue = v7->static_fields->ScenarioTextWaitLow
                                               + (float)(v8
                                                       * (float)(v7->static_fields->ScenarioTextWaitHigh
                                                               - v7->static_fields->ScenarioTextWaitLow));
  SetScenarioControl__setScenarioTextWaitTimeSecond(this, v5);
}


void __fastcall SetScenarioControl__initSetValue(SetScenarioControl_o *this, const MethodInfo *method)
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
  UILabel_o *scenarioSpeedTxt; // x20
  System_String_o *scenarioSpeedSlider; // x0
  __int64 v16; // x1
  UILabel_o *scenarioTextWaitTxt; // x20
  UILabel_o *scenarioCommentTxt; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  BalanceConfig_c *v21; // x0
  float *p_CriticalRateToAddByQuickFirstBonus; // x8
  float v23; // s8
  float v24; // s9
  float v25; // s8
  unsigned int v26; // w9
  int32_t v27; // w8
  float ScenarioSpeed; // s0
  __int64 v29; // x1
  __int64 v30; // x2
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioTextWaitStep; // s8
  float v33; // s9
  float v34; // s8
  unsigned int v35; // w9
  int32_t v36; // w8
  float ScenarioTextWaitTimeSecond; // s0
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1

  if ( (byte_4B11645 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&OptionManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_9827/*"OPTION_SCENARIO_SPEED"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_9823/*"OPTION_SCENARIO_COMMENT"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_9828/*"OPTION_SCENARIO_TEXTWAIT_SPEED"*/, v12, v13);
    byte_4B11645 = 1;
  }
  scenarioSpeedTxt = this->fields.scenarioSpeedTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  scenarioSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9827/*"OPTION_SCENARIO_SPEED"*/, 0LL);
  if ( !scenarioSpeedTxt )
    goto LABEL_29;
  UILabel__set_text(scenarioSpeedTxt, scenarioSpeedSlider, 0LL);
  scenarioTextWaitTxt = this->fields.scenarioTextWaitTxt;
  scenarioSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9828/*"OPTION_SCENARIO_TEXTWAIT_SPEED"*/, 0LL);
  if ( !scenarioTextWaitTxt )
    goto LABEL_29;
  UILabel__set_text(scenarioTextWaitTxt, scenarioSpeedSlider, 0LL);
  scenarioCommentTxt = this->fields.scenarioCommentTxt;
  scenarioSpeedSlider = LocalizationManager__Get((System_String_o *)StringLiteral_9823/*"OPTION_SCENARIO_COMMENT"*/, 0LL);
  if ( !scenarioCommentTxt )
    goto LABEL_29;
  UILabel__set_text(scenarioCommentTxt, scenarioSpeedSlider, 0LL);
  v21 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
    v21 = BalanceConfig_TypeInfo;
  }
  p_CriticalRateToAddByQuickFirstBonus = (float *)&v21->static_fields->CriticalRateToAddByQuickFirstBonus;
  v23 = p_CriticalRateToAddByQuickFirstBonus[134];
  v24 = p_CriticalRateToAddByQuickFirstBonus[136] - p_CriticalRateToAddByQuickFirstBonus[135];
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v19, v20);
    byte_4B1103A = 1;
  }
  v25 = v24 / v23;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v19);
  v26 = vcvtps_s32_f32(v25);
  if ( ceilf(v25) == INFINITY )
    v27 = -2147483647;
  else
    v27 = v26 + 1;
  this->fields.scenarioSpeedStep = v27;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v19);
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
  v33 = static_fields->ScenarioTextWaitHigh - static_fields->ScenarioTextWaitLow;
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v29, v30);
    byte_4B1103A = 1;
  }
  v34 = v33 / ScenarioTextWaitStep;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v29);
  v35 = vcvtps_s32_f32(v34);
  v36 = ceilf(v34) == INFINITY ? -2147483647 : v35 + 1;
  this->fields.scenarioTextWaitTimeSecondStep = v36;
  ScenarioTextWaitTimeSecond = OptionManager__GetScenarioTextWaitTimeSecond(0LL);
  scenarioSpeedSlider = (System_String_o *)this->fields.scenarioTextWaitSlider;
  this->fields.scenarioTextWaitTimeSecondValue = ScenarioTextWaitTimeSecond;
  if ( !scenarioSpeedSlider )
LABEL_29:
    sub_1BCAA3C(scenarioSpeedSlider, v16);
  HIDWORD(scenarioSpeedSlider[4].klass) = this->fields.scenarioTextWaitTimeSecondStep;
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioSpeedSlider,
    (float)(ScenarioTextWaitTimeSecond - BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow),
    0LL);
  SetScenarioControl__setChangeScenarioSpeedText(this, v38);
  SetScenarioControl__setScenarioTextWaitTimeSecond(this, v39);
}


void __fastcall SetScenarioControl__setChangeScenarioSpeedText(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *scenarioSpeedValueTxt; // x19
  float scenarioSpeedValue; // s8
  float v10; // s8
  int v11; // w8
  float v12; // s0
  __int64 v13; // x1
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  System_String_o format; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B11647 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6473/*"F2"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_9832/*"OPTION_SCENARIO_UNIT"*/, v6, v7);
    byte_4B11647 = 1;
  }
  scenarioSpeedValueTxt = this->fields.scenarioSpeedValueTxt;
  scenarioSpeedValue = this->fields.scenarioSpeedValue;
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v2);
    byte_4B1103A = 1;
  }
  v10 = scenarioSpeedValue * 1000.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  v11 = vcvtps_s32_f32(v10);
  if ( ceilf(v10) == INFINITY )
    v12 = -2147500.0;
  else
    v12 = (float)v11 / 1000.0;
  *(float *)&format.klass = v12;
  v14 = System_Single__ToString_63289624(v12, &format, (const MethodInfo *)StringLiteral_6473/*"F2"*/);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9832/*"OPTION_SCENARIO_UNIT"*/, 0LL);
  v16 = System_String__Concat_62401220(v14, v15, 0LL);
  if ( !scenarioSpeedValueTxt )
    sub_1BCAA3C(v16, v17);
  UILabel__set_text(scenarioSpeedValueTxt, v16, 0LL);
}


void __fastcall SetScenarioControl__setDefaultValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UIProgressBar_o *scenarioSpeedSlider; // x20
  BalanceConfig_c *v9; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioSpeedDefault; // s8
  __int64 v12; // x2
  UIProgressBar_o *scenarioTextWaitSlider; // x19
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  if ( (byte_4B1164B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&OptionManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SetScenarioControl_setDefaultValue__, v6, v7);
    byte_4B1164B = 1;
  }
  scenarioSpeedSlider = (UIProgressBar_o *)this->fields.scenarioSpeedSlider;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  if ( !byte_4B11756 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B11756 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    static_fields = BalanceConfig_TypeInfo->static_fields;
    ScenarioSpeedDefault = static_fields->ScenarioSpeedDefault;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v9 = BalanceConfig_TypeInfo;
    static_fields = BalanceConfig_TypeInfo->static_fields;
    ScenarioSpeedDefault = static_fields->ScenarioSpeedDefault;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
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
  if ( !byte_4B11757 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v12);
    byte_4B11757 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v9 = BalanceConfig_TypeInfo;
  }
  if ( !scenarioTextWaitSlider )
LABEL_20:
    sub_1BCAA3C(v9, method);
  UIProgressBar__set_value(
    scenarioTextWaitSlider,
    (float)(v9->static_fields->ScenarioTextWaitDefaultSt - v9->static_fields->ScenarioTextWaitLow)
  / (float)(v9->static_fields->ScenarioTextWaitHigh - v9->static_fields->ScenarioTextWaitLow),
    0LL);
  v14 = Method_SetScenarioControl_setDefaultValue__;
  if ( (*((_BYTE *)Method_SetScenarioControl_setDefaultValue__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1BCA7F8(Method_SetScenarioControl_setDefaultValue__);
  v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
}


void __fastcall SetScenarioControl__setScenarioTextWaitTimeSecond(SetScenarioControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *scenarioTextWaitValueTxt; // x19
  float scenarioTextWaitTimeSecondValue; // s8
  float v10; // s9
  double v11; // d8
  double v12; // d0
  double v13; // d0
  double v14; // d1
  double v15; // d1
  float v16; // s0
  __int64 v17; // x1
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  __int64 v21; // x1
  System_String_o format; // [xsp+Ch] [xbp-44h] BYREF
  double iptr; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4B11649 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6473/*"F2"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_9832/*"OPTION_SCENARIO_UNIT"*/, v6, v7);
    byte_4B11649 = 1;
  }
  LODWORD(format.klass) = 0;
  scenarioTextWaitValueTxt = this->fields.scenarioTextWaitValueTxt;
  scenarioTextWaitTimeSecondValue = this->fields.scenarioTextWaitTimeSecondValue;
  if ( !byte_4B11755 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v2);
    byte_4B11755 = 1;
  }
  v10 = scenarioTextWaitTimeSecondValue * 1000.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  v11 = v10;
  v12 = modf(v10, &iptr);
  if ( v10 >= 0.0 )
  {
    if ( v12 != 0.5 )
    {
      v13 = floor(v11 + 0.5);
      goto LABEL_17;
    }
    v13 = iptr;
    v14 = 1.0;
  }
  else
  {
    if ( v12 != -0.5 )
    {
      v13 = ceil(v11 + -0.5);
      goto LABEL_17;
    }
    v13 = iptr;
    v14 = -1.0;
  }
  v15 = v13 + v14;
  if ( ((__int64)v13 & 1) != 0 )
    v13 = v15;
LABEL_17:
  if ( v13 == INFINITY )
    v16 = -2147500.0;
  else
    v16 = (float)(int)v13 / 1000.0;
  *(float *)&format.klass = v16;
  v18 = System_Single__ToString_63289624(v16, &format, (const MethodInfo *)StringLiteral_6473/*"F2"*/);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9832/*"OPTION_SCENARIO_UNIT"*/, 0LL);
  v20 = System_String__Concat_62401220(v18, v19, 0LL);
  if ( !scenarioTextWaitValueTxt )
    sub_1BCAA3C(v20, v21);
  UILabel__set_text(scenarioTextWaitValueTxt, v20, 0LL);
}