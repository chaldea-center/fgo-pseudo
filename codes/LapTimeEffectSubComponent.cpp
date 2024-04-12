void __fastcall LapTimeEffectSubComponent___ctor(LapTimeEffectSubComponent_o *this, const MethodInfo *method)
{
  EffectSubComponent___ctor((EffectSubComponent_o *)this, 0LL);
}


void __fastcall LapTimeEffectSubComponent__RecvParam(
        LapTimeEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  __int64 v5; // x10
  System_String_o *Value; // x0
  System_String_o *v7; // x1
  int *v8; // x8
  __int64 v9; // x21
  struct UILabel_o *label; // x19
  void *monitor; // x8
  int64_t v12; // x20
  __int64 v13; // x0

  if ( (byte_42AF1A7 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&RaceResultEffectParam_TypeInfo);
    sub_B52984(&StringLiteral_11089/*"RACE_TARGET_GOAL_RANK"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_5725/*"EVENT_RACE_RESULT_TIME_NONE"*/);
    byte_42AF1A7 = 1;
  }
  if ( param
    && (v5 = *(&RaceResultEffectParam_TypeInfo->_2.bitflags2 + 1), *(&param->klass->_2.bitflags2 + 1) >= (unsigned int)v5)
    && (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[v5 - 1] == RaceResultEffectParam_TypeInfo
    && (v8 = (int *)param[1].monitor) != 0LL
    && v8[6] >= 5 )
  {
    v9 = *((_QWORD *)v8 + 7);
    Value = (System_String_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_11089/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    if ( v9 <= (int)Value )
    {
      monitor = param[1].monitor;
      if ( !monitor )
        goto LABEL_24;
      if ( *((_DWORD *)monitor + 6) <= 4u )
      {
        v13 = sub_B52A88(Value);
        sub_B52A28(v13, 0LL);
      }
      v12 = *((_QWORD *)monitor + 8);
      label = this->fields.label;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Value = LocalizationManager__GetLapTime(v12, 0LL);
      if ( !label )
LABEL_24:
        sub_B52A5C(Value, param);
    }
    else
    {
      label = this->fields.label;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Value = LocalizationManager__Get((System_String_o *)StringLiteral_5725/*"EVENT_RACE_RESULT_TIME_NONE"*/, 0LL);
      if ( !label )
        goto LABEL_24;
    }
    v7 = Value;
    Value = (System_String_o *)label;
  }
  else
  {
    Value = (System_String_o *)this->fields.label;
    if ( !Value )
      goto LABEL_24;
    v7 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)Value, v7, 0LL);
}