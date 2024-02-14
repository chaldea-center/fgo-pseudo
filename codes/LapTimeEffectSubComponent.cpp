void __fastcall LapTimeEffectSubComponent___ctor(LapTimeEffectSubComponent_o *this, const MethodInfo *method)
{
  EffectSubComponent___ctor((EffectSubComponent_o *)this, 0LL);
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
  __int64 v9; // x10
  System_String_o *Value; // x0
  System_String_o *v11; // x1
  int *v12; // x8
  __int64 v13; // x21
  struct UILabel_o *label; // x19
  void *monitor; // x8
  int64_t v16; // x20
  __int64 v17; // x0

  if ( (byte_4213EA9 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, param);
    sub_B0D8A4(&RaceResultEffectParam_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_11029/*"RACE_TARGET_GOAL_RANK"*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    sub_B0D8A4(&StringLiteral_5699/*"EVENT_RACE_RESULT_TIME_NONE"*/, v8);
    byte_4213EA9 = 1;
  }
  if ( param
    && (v9 = *(&RaceResultEffectParam_TypeInfo->_2.bitflags2 + 1), *(&param->klass->_2.bitflags2 + 1) >= (unsigned int)v9)
    && (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[v9 - 1] == RaceResultEffectParam_TypeInfo
    && (v12 = (int *)param[1].monitor) != 0LL
    && v12[6] >= 5 )
  {
    v13 = *((_QWORD *)v12 + 7);
    Value = (System_String_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_11029/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    if ( v13 <= (int)Value )
    {
      monitor = param[1].monitor;
      if ( !monitor )
        goto LABEL_24;
      if ( *((_DWORD *)monitor + 6) <= 4u )
      {
        v17 = sub_B0D9A8(Value);
        sub_B0D948(v17, 0LL);
      }
      v16 = *((_QWORD *)monitor + 8);
      label = this->fields.label;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Value = LocalizationManager__GetLapTime(v16, 0LL);
      if ( !label )
LABEL_24:
        sub_B0D97C(Value);
    }
    else
    {
      label = this->fields.label;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Value = LocalizationManager__Get((System_String_o *)StringLiteral_5699/*"EVENT_RACE_RESULT_TIME_NONE"*/, 0LL);
      if ( !label )
        goto LABEL_24;
    }
    v11 = Value;
    Value = (System_String_o *)label;
  }
  else
  {
    Value = (System_String_o *)this->fields.label;
    if ( !Value )
      goto LABEL_24;
    v11 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)Value, v11, 0LL);
}