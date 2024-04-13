void __fastcall LapTimeEffectSubComponent___ctor(LapTimeEffectSubComponent_o *this, const MethodInfo *method)
{
  EffectSubComponent___ctor((EffectSubComponent_o *)this, 0LL);
}


void __fastcall LapTimeEffectSubComponent__RecvParam(
        LapTimeEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x10
  System_String_o *Value; // x0
  System_String_o *v20; // x1
  int *v21; // x8
  __int64 v22; // x21
  struct UILabel_o *label; // x19
  void *monitor; // x8
  int64_t v25; // x20
  __int64 v26; // x0

  if ( (byte_42E7D2E & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)param, (_DWORD)method, v3);
    sub_B5D5C4(&RaceResultEffectParam_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11135/*"RACE_TARGET_GOAL_RANK"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_5760/*"EVENT_RACE_RESULT_TIME_NONE"*/, v15, v16, v17);
    byte_42E7D2E = 1;
  }
  if ( param
    && (v18 = *(&RaceResultEffectParam_TypeInfo->_2.bitflags2 + 1),
        *(&param->klass->_2.bitflags2 + 1) >= (unsigned int)v18)
    && (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[v18 - 1] == RaceResultEffectParam_TypeInfo
    && (v21 = (int *)param[1].monitor) != 0LL
    && v21[6] >= 5 )
  {
    v22 = *((_QWORD *)v21 + 7);
    Value = (System_String_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_11135/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    if ( v22 <= (int)Value )
    {
      monitor = param[1].monitor;
      if ( !monitor )
        goto LABEL_24;
      if ( *((_DWORD *)monitor + 6) <= 4u )
      {
        v26 = sub_B5D6C8(Value);
        sub_B5D668(v26, 0LL);
      }
      v25 = *((_QWORD *)monitor + 8);
      label = this->fields.label;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Value = LocalizationManager__GetLapTime(v25, 0LL);
      if ( !label )
LABEL_24:
        sub_B5D69C(Value, param);
    }
    else
    {
      label = this->fields.label;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Value = LocalizationManager__Get((System_String_o *)StringLiteral_5760/*"EVENT_RACE_RESULT_TIME_NONE"*/, 0LL);
      if ( !label )
        goto LABEL_24;
    }
    v20 = Value;
    Value = (System_String_o *)label;
  }
  else
  {
    Value = (System_String_o *)this->fields.label;
    if ( !Value )
      goto LABEL_24;
    v20 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)Value, v20, 0LL);
}