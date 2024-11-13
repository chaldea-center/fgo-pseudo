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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 methodPtr_low; // x10
  System_String_o *Value; // x0
  System_String_o *v15; // x1
  int *v16; // x8
  __int64 v17; // x21
  struct UILabel_o *label; // x19
  void *monitor; // x8
  int64_t v20; // x20

  if ( (byte_4B175E2 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, param, method);
    sub_1BCA7E0(&RaceResultEffectParam_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_11077/*"RACE_TARGET_GOAL_RANK"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_5760/*"EVENT_RACE_RESULT_TIME_NONE"*/, v11, v12);
    byte_4B175E2 = 1;
  }
  if ( param
    && (methodPtr_low = LOBYTE(RaceResultEffectParam_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (RaceResultEffectParam_c *)param->klass->_2.typeHierarchy[methodPtr_low - 1] == RaceResultEffectParam_TypeInfo
    && (v16 = (int *)param[1].monitor) != 0LL
    && v16[6] >= 5 )
  {
    v17 = *((_QWORD *)v16 + 7);
    Value = (System_String_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_11077/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    if ( v17 <= (int)Value )
    {
      monitor = param[1].monitor;
      if ( !monitor )
        goto LABEL_22;
      if ( *((_DWORD *)monitor + 6) <= 4u )
        sub_1BCAA44(Value, param);
      v20 = *((_QWORD *)monitor + 8);
      label = this->fields.label;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, param);
      Value = LocalizationManager__GetLapTime(v20, 0LL);
      if ( !label )
LABEL_22:
        sub_1BCAA3C(Value, param);
    }
    else
    {
      label = this->fields.label;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, param);
      Value = LocalizationManager__Get((System_String_o *)StringLiteral_5760/*"EVENT_RACE_RESULT_TIME_NONE"*/, 0LL);
      if ( !label )
        goto LABEL_22;
    }
    v15 = Value;
    Value = (System_String_o *)label;
  }
  else
  {
    Value = (System_String_o *)this->fields.label;
    if ( !Value )
      goto LABEL_22;
    v15 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)Value, v15, 0LL);
}