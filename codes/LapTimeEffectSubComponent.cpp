void __fastcall LapTimeEffectSubComponent___ctor(LapTimeEffectSubComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall LapTimeEffectSubComponent__RecvParam(
        LapTimeEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 methodPtr_low; // x10
  System_String_o *Value; // x0
  System_String_o *v11; // x1
  int *v12; // x8
  __int64 v13; // x21
  struct UILabel_o *label; // x19
  void *monitor; // x8
  int64_t v16; // x20

  if ( (byte_4BFEBEB & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, param);
    sub_1C2E12C(&RaceResultEffectParam_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_11148/*"RACE_TARGET_GOAL_RANK"*/, v6);
    sub_1C2E12C(&StringLiteral_1/*""*/, v7);
    sub_1C2E12C(&StringLiteral_5794/*"EVENT_RACE_RESULT_TIME_NONE"*/, v8);
    byte_4BFEBEB = 1;
  }
  if ( param
    && (methodPtr_low = LOBYTE(RaceResultEffectParam_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[methodPtr_low - 1] == RaceResultEffectParam_TypeInfo
    && (v12 = (int *)param[1].monitor) != 0LL
    && v12[6] >= 5 )
  {
    v13 = *((_QWORD *)v12 + 7);
    Value = (System_String_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_11148/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    if ( v13 <= (int)Value )
    {
      monitor = param[1].monitor;
      if ( !monitor )
        goto LABEL_22;
      if ( *((_DWORD *)monitor + 6) <= 4u )
        sub_1C2E390(Value, param);
      v16 = *((_QWORD *)monitor + 8);
      label = this->fields.label;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Value = LocalizationManager__GetLapTime(v16, 0LL);
      if ( !label )
LABEL_22:
        sub_1C2E388(Value, param);
    }
    else
    {
      label = this->fields.label;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Value = LocalizationManager__Get((System_String_o *)StringLiteral_5794/*"EVENT_RACE_RESULT_TIME_NONE"*/, 0LL);
      if ( !label )
        goto LABEL_22;
    }
    v11 = Value;
    Value = (System_String_o *)label;
  }
  else
  {
    Value = (System_String_o *)this->fields.label;
    if ( !Value )
      goto LABEL_22;
    v11 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)Value, v11, 0LL);
}