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
  int v2; // w2
  __int64 v3; // x3
  float scenarioTextWaitTimeSecondValue; // s8

  if ( (byte_42ECEDB & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECEDB = 1;
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
  int v2; // w2
  __int64 v3; // x3
  struct UILabel_o *scenarioSpeedValueTxt; // x0
  const MethodInfo *v6; // x1
  float value; // s8
  BalanceConfig_c *v8; // x0

  if ( (byte_42ECEDD & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECEDD = 1;
  }
  scenarioSpeedValueTxt = this->fields.scenarioSpeedValueTxt;
  if ( !scenarioSpeedValueTxt )
    sub_B5D69C(0LL, method);
  value = UIProgressBar__get_value((UIProgressBar_o *)scenarioSpeedValueTxt, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioTextWaitTimeSecondValue = v8->static_fields->ScenarioSpeedLow
                                               + (float)(value
                                                       * (float)(v8->static_fields->ScenarioSpeedHigh
                                                               - v8->static_fields->ScenarioSpeedLow));
  SetScenarioControl__setChangeScenarioSpeedText(this, v6);
}


void __fastcall SetScenarioControl__getScenarioTextWaitTimeSecond(SetScenarioControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UILabel_o *scenarioTextWaitValueTxt; // x0
  const MethodInfo *v6; // x1
  float value; // s8
  BalanceConfig_c *v8; // x0

  if ( (byte_42ECEDF & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECEDF = 1;
  }
  scenarioTextWaitValueTxt = this->fields.scenarioTextWaitValueTxt;
  if ( !scenarioTextWaitValueTxt )
    sub_B5D69C(0LL, method);
  value = UIProgressBar__get_value((UIProgressBar_o *)scenarioTextWaitValueTxt, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  *((float *)&this[1].klass + 1) = v8->static_fields->ScenarioTextWaitLow
                                 + (float)(value
                                         * (float)(v8->static_fields->ScenarioTextWaitHigh
                                                 - v8->static_fields->ScenarioTextWaitLow));
  SetScenarioControl__setScenarioTextWaitTimeSecond(this, v6);
}


void __fastcall SetScenarioControl__initSetValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UILabel_o *scenarioSpeedSlider; // x20
  System_String_o *v21; // x0
  __int64 v22; // x1
  UILabel_o *scenarioTextWaitSlider; // x20
  UILabel_o *v24; // x20
  BalanceConfig_c *v25; // x0
  float ScenarioSpeed; // s0
  struct UILabel_o *scenarioSpeedValueTxt; // x8
  float ScenarioTextWaitTimeSecond; // s0
  struct UILabel_o *scenarioTextWaitValueTxt; // x8
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1

  if ( (byte_42ECEDA & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&OptionManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9911/*"OPTION_SCENARIO_SPEED"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_9909/*"OPTION_SCENARIO_COMMENT"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_9912/*"OPTION_SCENARIO_TEXTWAIT_SPEED"*/, v17, v18, v19);
    byte_42ECEDA = 1;
  }
  scenarioSpeedSlider = (UILabel_o *)this->fields.scenarioSpeedSlider;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9911/*"OPTION_SCENARIO_SPEED"*/, 0LL);
  if ( !scenarioSpeedSlider )
    goto LABEL_20;
  UILabel__set_text(scenarioSpeedSlider, v21, 0LL);
  scenarioTextWaitSlider = (UILabel_o *)this->fields.scenarioTextWaitSlider;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9912/*"OPTION_SCENARIO_TEXTWAIT_SPEED"*/, 0LL);
  if ( !scenarioTextWaitSlider )
    goto LABEL_20;
  UILabel__set_text(scenarioTextWaitSlider, v21, 0LL);
  v24 = *(UILabel_o **)&this->fields.scenarioSpeedStep;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9909/*"OPTION_SCENARIO_COMMENT"*/, 0LL);
  if ( !v24 )
    goto LABEL_20;
  UILabel__set_text(v24, v21, 0LL);
  v25 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  this->fields.scenarioTextWaitTimeSecondStep = UnityEngine_Mathf__CeilToInt(
                                                  (float)(v25->static_fields->ScenarioSpeedHigh
                                                        - v25->static_fields->ScenarioSpeedLow)
                                                / v25->static_fields->ScenarioSpeedStep,
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
  v21 = (System_String_o *)this->fields.scenarioSpeedValueTxt;
  if ( !v21
    || (UIProgressBar__set_value(
          (UIProgressBar_o *)v21,
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
        (v21 = (System_String_o *)this->fields.scenarioTextWaitValueTxt) == 0LL) )
  {
LABEL_20:
    sub_B5D69C(v21, v22);
  }
  UIProgressBar__set_value(
    (UIProgressBar_o *)v21,
    (float)(*((float *)&this[1].klass + 1) - BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow)
  / (float)(BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitHigh
          - BalanceConfig_TypeInfo->static_fields->ScenarioTextWaitLow),
    0LL);
  SetScenarioControl__setChangeScenarioSpeedText(this, v30);
  SetScenarioControl__setScenarioTextWaitTimeSecond(this, v31);
}


void __fastcall SetScenarioControl__setChangeScenarioSpeedText(SetScenarioControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  float scenarioTextWaitTimeSecondValue; // s0
  UILabel_o *scenarioTextWaitTxt; // x19
  System_String_o *v13; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o format; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ECEDC & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6398/*"F2"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_9914/*"OPTION_SCENARIO_UNIT"*/, v8, v9, v10);
    byte_42ECEDC = 1;
  }
  scenarioTextWaitTimeSecondValue = this->fields.scenarioTextWaitTimeSecondValue;
  scenarioTextWaitTxt = this->fields.scenarioTextWaitTxt;
  *(float *)&format.klass = (float)UnityEngine_Mathf__CeilToInt(scenarioTextWaitTimeSecondValue * 1000.0, 0LL) / 1000.0;
  v13 = System_Single__ToString_44564460(*(float *)&format.klass, &format, (const MethodInfo *)StringLiteral_6398/*"F2"*/);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_9914/*"OPTION_SCENARIO_UNIT"*/, 0LL);
  v15 = System_String__Concat_44577788(v13, v14, 0LL);
  if ( !scenarioTextWaitTxt )
    sub_B5D69C(v15, v16);
  UILabel__set_text(scenarioTextWaitTxt, v15, 0LL);
}


void __fastcall SetScenarioControl__setDefaultValue(SetScenarioControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UILabel_o *scenarioSpeedValueTxt; // x20
  BalanceConfig_c *v12; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ScenarioSpeedDefault; // s8
  int v15; // w2
  __int64 v16; // x3
  struct UILabel_o *scenarioTextWaitValueTxt; // x19

  if ( (byte_42ECEE0 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42ECEE0 = 1;
  }
  scenarioSpeedValueTxt = this->fields.scenarioSpeedValueTxt;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !byte_42ECF96 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECF96 = 1;
  }
  v12 = BalanceConfig_TypeInfo;
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
      v12 = BalanceConfig_TypeInfo;
      static_fields = BalanceConfig_TypeInfo->static_fields;
      ScenarioSpeedDefault = static_fields->ScenarioSpeedDefault;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_16;
    }
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
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
  if ( !byte_42ECF97 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v15, v16);
    byte_42ECF97 = 1;
  }
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( !scenarioTextWaitValueTxt )
LABEL_27:
    sub_B5D69C(v12, method);
  UIProgressBar__set_value(
    (UIProgressBar_o *)scenarioTextWaitValueTxt,
    (float)(v12->static_fields->ScenarioTextWaitDefaultSt - v12->static_fields->ScenarioTextWaitLow)
  / (float)(v12->static_fields->ScenarioTextWaitHigh - v12->static_fields->ScenarioTextWaitLow),
    0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}


void __fastcall SetScenarioControl__setScenarioTextWaitTimeSecond(SetScenarioControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  float v11; // s0
  UILabel_o *scenarioCommentTxt; // x19
  System_String_o *v13; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o format; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ECEDE & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6398/*"F2"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_9914/*"OPTION_SCENARIO_UNIT"*/, v8, v9, v10);
    byte_42ECEDE = 1;
  }
  v11 = *((float *)&this[1].klass + 1);
  scenarioCommentTxt = this->fields.scenarioCommentTxt;
  *(float *)&format.klass = (float)UnityEngine_Mathf__RoundToInt(v11 * 1000.0, 0LL) / 1000.0;
  v13 = System_Single__ToString_44564460(*(float *)&format.klass, &format, (const MethodInfo *)StringLiteral_6398/*"F2"*/);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_9914/*"OPTION_SCENARIO_UNIT"*/, 0LL);
  v15 = System_String__Concat_44577788(v13, v14, 0LL);
  if ( !scenarioCommentTxt )
    sub_B5D69C(v15, v16);
  UILabel__set_text(scenarioCommentTxt, v15, 0LL);
}