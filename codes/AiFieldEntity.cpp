void __fastcall AiFieldEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct AiFieldEntity_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E684D & 1) == 0 )
  {
    sub_B5D5C4(&AiFieldEntity_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18595/*"enemyMasterEffectType"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_23489/*"voicePlay"*/, v11, v12, v13);
    byte_42E684D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)AiFieldEntity_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_23489/*"voicePlay"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23489/*"voicePlay"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = AiFieldEntity_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_18595/*"enemyMasterEffectType"*/;
  v16->KEY_EFFECT_TYPE = (struct System_String_o *)StringLiteral_18595/*"enemyMasterEffectType"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->KEY_EFFECT_TYPE, v17, v18, v19, v20, v21, v22, v23);
}


float __fastcall AiFieldEntity__GetCutinAdditionalTime(AiFieldEntity_o *this, float def, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3

  if ( (byte_42E684C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18066/*"cutinAdditionalTime"*/, (_DWORD)method, v3, v4);
    byte_42E684C = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18066/*"cutinAdditionalTime"*/, def, 0LL);
}


int32_t __fastcall AiFieldEntity__GetFieldHp(AiFieldEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E684A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18938/*"fieldHp"*/, (_DWORD)method, v2, v3);
    byte_42E684A = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_18938/*"fieldHp"*/, -1, v3);
}


int32_t __fastcall AiFieldEntity__GetFieldUIId(AiFieldEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E684B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18945/*"fieldHpUiId"*/, (_DWORD)method, v2, v3);
    byte_42E684B = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_18945/*"fieldHpUiId"*/, -1, v3);
}


int32_t __fastcall AiFieldEntity__getEffectType(AiFieldEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  AiFieldEntity_c *v5; // x0

  if ( (byte_42E6847 & 1) == 0 )
  {
    sub_B5D5C4(&AiFieldEntity_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6847 = 1;
  }
  v5 = AiFieldEntity_TypeInfo;
  if ( (BYTE3(AiFieldEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AiFieldEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiFieldEntity_TypeInfo);
    v5 = AiFieldEntity_TypeInfo;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, v5->static_fields->KEY_EFFECT_TYPE, 0, v3);
}


System_String_o *__fastcall AiFieldEntity__getVoice(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  AiFieldEntity_c *v5; // x0
  System_String_o *result; // x0

  if ( (byte_42E6848 & 1) == 0 )
  {
    sub_B5D5C4(&AiFieldEntity_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E6848 = 1;
  }
  v5 = AiFieldEntity_TypeInfo;
  if ( (BYTE3(AiFieldEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AiFieldEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiFieldEntity_TypeInfo);
    v5 = AiFieldEntity_TypeInfo;
  }
  result = (System_String_o *)AiBaseEntity__getScriptObj((AiBaseEntity_o *)this, v5->static_fields->KEY_VOICE_NAME, v2);
  if ( result )
    return (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))result->klass->vtable._3_ToString.method)(
                                result,
                                result->klass->vtable._4_CompareTo.methodPtr);
  return result;
}


bool __fastcall AiFieldEntity__isForcedSkillSpeedOne(AiFieldEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E6849 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19045/*"forcedSkillSpeed"*/, (_DWORD)method, v2, v3);
    byte_42E6849 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19045/*"forcedSkillSpeed"*/, 0, v3) == 1;
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
  return (unsigned int)(state - 2) <= 0x15 && ((0x3A2F15u >> v5) & 1) != 0 && this->fields.timing == dword_32A09F0[v5];
}