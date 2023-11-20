void __fastcall AiFieldEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct AiFieldEntity_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F7ED0 & 1) == 0 )
  {
    sub_B16FFC(&AiFieldEntity_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18297, v8);
    sub_B16FFC(&StringLiteral_23086, v9);
    byte_40F7ED0 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)AiFieldEntity_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_23086;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23086;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = AiFieldEntity_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18297;
  v12->KEY_EFFECT_TYPE = (struct System_String_o *)StringLiteral_18297;
  sub_B16F98((BattleServantConfConponent_o *)&v12->KEY_EFFECT_TYPE, v13, v14, v15, v16, v17, v18, v19);
}


float __fastcall AiFieldEntity__GetCutinAdditionalTime(AiFieldEntity_o *this, float def, const MethodInfo *method)
{
  if ( (byte_40F7ECF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17779, method);
    byte_40F7ECF = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_17779, def, 0LL);
}


int32_t __fastcall AiFieldEntity__GetFieldHp(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F7ECD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18632, method);
    byte_40F7ECD = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_18632, -1, v2);
}


int32_t __fastcall AiFieldEntity__GetFieldUIId(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F7ECE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18638, method);
    byte_40F7ECE = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_18638, -1, v2);
}


int32_t __fastcall AiFieldEntity__getEffectType(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  AiFieldEntity_c *v4; // x0

  if ( (byte_40F7ECA & 1) == 0 )
  {
    sub_B16FFC(&AiFieldEntity_TypeInfo, method);
    byte_40F7ECA = 1;
  }
  v4 = AiFieldEntity_TypeInfo;
  if ( (BYTE3(AiFieldEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AiFieldEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiFieldEntity_TypeInfo);
    v4 = AiFieldEntity_TypeInfo;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, v4->static_fields->KEY_EFFECT_TYPE, 0, v2);
}


System_String_o *__fastcall AiFieldEntity__getVoice(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  AiFieldEntity_c *v4; // x0
  System_String_o *result; // x0

  if ( (byte_40F7ECB & 1) == 0 )
  {
    sub_B16FFC(&AiFieldEntity_TypeInfo, method);
    byte_40F7ECB = 1;
  }
  v4 = AiFieldEntity_TypeInfo;
  if ( (BYTE3(AiFieldEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AiFieldEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiFieldEntity_TypeInfo);
    v4 = AiFieldEntity_TypeInfo;
  }
  result = (System_String_o *)AiBaseEntity__getScriptObj((AiBaseEntity_o *)this, v4->static_fields->KEY_VOICE_NAME, v2);
  if ( result )
    return (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))result->klass->vtable._3_ToString.method)(
                                result,
                                result->klass->vtable._4_CompareTo.methodPtr);
  return result;
}


bool __fastcall AiFieldEntity__isForcedSkillSpeedOne(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F7ECC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18737, method);
    byte_40F7ECC = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_18737, 0, v2) == 1;
}


bool __fastcall AiFieldEntity__isTiming(
        AiFieldEntity_o *this,
        int32_t state,
        int32_t actcnt,
        int32_t timingPriority,
        const MethodInfo *method)
{
  int v5; // w8

  v5 = state - 2;
  return (unsigned int)(state - 2) <= 0x14 && ((0x1A2F15u >> v5) & 1) != 0 && this->fields.timing == dword_3133B10[v5];
}