void LapTimeEffectSubComponent___ctor(LapTimeEffectSubComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void LapTimeEffectSubComponent__RecvParam(
        LapTimeEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  System_String_o *Value; // x0
  System_String_o *v7; // x1
  int *v8; // x8
  __int64 v9; // x21
  struct UILabel_o *label; // x19
  void *monitor; // x8
  int64_t v12; // x20

  if ( (byte_4CC8AF0 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&RaceResultEffectParam_TypeInfo);
    sub_1C713B0(&StringLiteral_10953/*"RACE_TARGET_GOAL_RANK"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_5664/*"EVENT_RACE_RESULT_TIME_NONE"*/);
    byte_4CC8AF0 = 1;
  }
  if ( param
    && (naturalAligment = RaceResultEffectParam_TypeInfo->_2.naturalAligment,
        param->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[naturalAligment - 1] == RaceResultEffectParam_TypeInfo
    && (v8 = (int *)param[1].monitor) != 0
    && v8[6] >= 5 )
  {
    v9 = *((_QWORD *)v8 + 7);
    Value = (System_String_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_10953/*"RACE_TARGET_GOAL_RANK"*/, 0);
    if ( v9 <= (int)Value )
    {
      monitor = param[1].monitor;
      if ( !monitor )
        goto LABEL_22;
      if ( *((_DWORD *)monitor + 6) <= 4u )
        sub_1C71610(Value);
      v12 = *((_QWORD *)monitor + 8);
      label = this->fields.label;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Value = LocalizationManager__GetLapTime(v12, 0);
      if ( !label )
LABEL_22:
        sub_1C71608(Value, param);
    }
    else
    {
      label = this->fields.label;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Value = LocalizationManager__Get((System_String_o *)StringLiteral_5664/*"EVENT_RACE_RESULT_TIME_NONE"*/, 0);
      if ( !label )
        goto LABEL_22;
    }
    v7 = Value;
    Value = (System_String_o *)label;
  }
  else
  {
    Value = (System_String_o *)this->fields.label;
    if ( !Value )
      goto LABEL_22;
    v7 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)Value, v7, 0);
}