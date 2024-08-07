void __fastcall AiFieldEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct AiFieldEntity_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FE761 & 1) == 0 )
  {
    sub_1B64A00(&AiFieldEntity_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_18953/*"enemyMasterEffectType"*/, v4);
    sub_1B64A00(&StringLiteral_24495/*"voicePlay"*/, v5);
    byte_49FE761 = 1;
  }
  AiFieldEntity_TypeInfo->static_fields->KEY_VOICE_NAME = (struct System_String_o *)StringLiteral_24495/*"voicePlay"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)AiFieldEntity_TypeInfo->static_fields, StringLiteral_24495/*"voicePlay"*/, v2, v3);
  v6 = StringLiteral_18953/*"enemyMasterEffectType"*/;
  static_fields = AiFieldEntity_TypeInfo->static_fields;
  static_fields->KEY_EFFECT_TYPE = (struct System_String_o *)StringLiteral_18953/*"enemyMasterEffectType"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->KEY_EFFECT_TYPE, v6, v8, v9);
}


float __fastcall AiFieldEntity__GetCutinAdditionalTime(AiFieldEntity_o *this, float def, const MethodInfo *method)
{
  if ( (byte_49FE760 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18348/*"cutinAdditionalTime"*/, method);
    byte_49FE760 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18348/*"cutinAdditionalTime"*/, def, 0LL);
}


int32_t __fastcall AiFieldEntity__GetFieldHp(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE75E & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_19321/*"fieldHp"*/, method);
    byte_49FE75E = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19321/*"fieldHp"*/, -1, v2);
}


int32_t __fastcall AiFieldEntity__GetFieldUIId(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FE75F & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_19328/*"fieldHpUiId"*/, method);
    byte_49FE75F = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19328/*"fieldHpUiId"*/, -1, v2);
}


int32_t __fastcall AiFieldEntity__getEffectType(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  AiFieldEntity_c *v4; // x0

  if ( (byte_49FE75B & 1) == 0 )
  {
    sub_1B64A00(&AiFieldEntity_TypeInfo, method);
    byte_49FE75B = 1;
  }
  v4 = AiFieldEntity_TypeInfo;
  if ( !AiFieldEntity_TypeInfo->_2.cctor_finished )
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

  if ( (byte_49FE75C & 1) == 0 )
  {
    sub_1B64A00(&AiFieldEntity_TypeInfo, method);
    byte_49FE75C = 1;
  }
  v4 = AiFieldEntity_TypeInfo;
  if ( !AiFieldEntity_TypeInfo->_2.cctor_finished )
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

  if ( (byte_49FE75D & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_19463/*"forcedSkillSpeed"*/, method);
    byte_49FE75D = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19463/*"forcedSkillSpeed"*/, 0, v2) == 1;
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
  return (unsigned int)(state - 2) <= 0x15 && ((0x3A2F15u >> v5) & 1) != 0 && this->fields.timing == dword_BDD954[v5];
}