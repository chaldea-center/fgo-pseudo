void __fastcall AiFieldEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct AiFieldEntity_StaticFields *static_fields; // x0
  __int64 v5; // x1
  struct AiFieldEntity_StaticFields *v6; // x0
  __int64 v7; // x1

  if ( (byte_4185A6E & 1) == 0 )
  {
    sub_B2C35C(&AiFieldEntity_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_18366/*"enemyMasterEffectType"*/, v2);
    sub_B2C35C(&StringLiteral_23180/*"voicePlay"*/, v3);
    byte_4185A6E = 1;
  }
  static_fields = AiFieldEntity_TypeInfo->static_fields;
  v5 = StringLiteral_23180/*"voicePlay"*/;
  static_fields->KEY_VOICE_NAME = (struct System_String_o *)StringLiteral_23180/*"voicePlay"*/;
  sub_B2C2F8(static_fields, v5);
  v6 = AiFieldEntity_TypeInfo->static_fields;
  v7 = StringLiteral_18366/*"enemyMasterEffectType"*/;
  v6->KEY_EFFECT_TYPE = (struct System_String_o *)StringLiteral_18366/*"enemyMasterEffectType"*/;
  sub_B2C2F8(&v6->KEY_EFFECT_TYPE, v7);
}


float __fastcall AiFieldEntity__GetCutinAdditionalTime(AiFieldEntity_o *this, float def, const MethodInfo *method)
{
  if ( (byte_4185A6D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17847/*"cutinAdditionalTime"*/, method);
    byte_4185A6D = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_17847/*"cutinAdditionalTime"*/, def, 0LL);
}


int32_t __fastcall AiFieldEntity__GetFieldHp(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4185A6B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18703/*"fieldHp"*/, method);
    byte_4185A6B = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_18703/*"fieldHp"*/, -1, v2);
}


int32_t __fastcall AiFieldEntity__GetFieldUIId(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4185A6C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18710/*"fieldHpUiId"*/, method);
    byte_4185A6C = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_18710/*"fieldHpUiId"*/, -1, v2);
}


int32_t __fastcall AiFieldEntity__getEffectType(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  AiFieldEntity_c *v4; // x0

  if ( (byte_4185A68 & 1) == 0 )
  {
    sub_B2C35C(&AiFieldEntity_TypeInfo, method);
    byte_4185A68 = 1;
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

  if ( (byte_4185A69 & 1) == 0 )
  {
    sub_B2C35C(&AiFieldEntity_TypeInfo, method);
    byte_4185A69 = 1;
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

  if ( (byte_4185A6A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18809/*"forcedSkillSpeed"*/, method);
    byte_4185A6A = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_18809/*"forcedSkillSpeed"*/, 0, v2) == 1;
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
  return (unsigned int)(state - 2) <= 0x14 && ((0x1A2F15u >> v5) & 1) != 0 && this->fields.timing == dword_319FB40[v5];
}