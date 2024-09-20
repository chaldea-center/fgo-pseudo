void __fastcall LapTimeEffectSubComponent___ctor(LapTimeEffectSubComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall LapTimeEffectSubComponent__RecvParam(
        LapTimeEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  System_String_o *Value; // x0
  System_String_o *v7; // x1
  int *v8; // x8
  __int64 v9; // x21
  struct UILabel_o *label; // x19
  void *monitor; // x8
  int64_t v12; // x20

  if ( (byte_4A5C516 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&RaceResultEffectParam_TypeInfo);
    sub_1B885B0(&StringLiteral_10941/*"RACE_TARGET_GOAL_RANK"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_5676/*"EVENT_RACE_RESULT_TIME_NONE"*/);
    byte_4A5C516 = 1;
  }
  if ( param
    && (methodPtr_low = LOBYTE(RaceResultEffectParam_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[methodPtr_low - 1] == RaceResultEffectParam_TypeInfo
    && (v8 = (int *)param[1].monitor) != 0LL
    && v8[6] >= 5 )
  {
    v9 = *((_QWORD *)v8 + 7);
    Value = (System_String_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_10941/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    if ( v9 <= (int)Value )
    {
      monitor = param[1].monitor;
      if ( !monitor )
        goto LABEL_22;
      if ( *((_DWORD *)monitor + 6) <= 4u )
        sub_1B88814(Value, param);
      v12 = *((_QWORD *)monitor + 8);
      label = this->fields.label;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Value = LocalizationManager__GetLapTime(v12, 0LL);
      if ( !label )
LABEL_22:
        sub_1B8880C(Value, param);
    }
    else
    {
      label = this->fields.label;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Value = LocalizationManager__Get((System_String_o *)StringLiteral_5676/*"EVENT_RACE_RESULT_TIME_NONE"*/, 0LL);
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
  UILabel__set_text((UILabel_o *)Value, v7, 0LL);
}