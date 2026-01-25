void AiFieldEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct AiFieldEntity_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CEE258 & 1) == 0 )
  {
    sub_1C7BAE8(&AiFieldEntity_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19175/*"enemyMasterEffectType"*/);
    sub_1C7BAE8(&StringLiteral_24962/*"voicePlay"*/);
    byte_4CEE258 = 1;
  }
  AiFieldEntity_TypeInfo->static_fields->KEY_VOICE_NAME = (struct System_String_o *)StringLiteral_24962/*"voicePlay"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)AiFieldEntity_TypeInfo->static_fields,
    StringLiteral_24962/*"voicePlay"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_19175/*"enemyMasterEffectType"*/;
  static_fields = AiFieldEntity_TypeInfo->static_fields;
  static_fields->KEY_EFFECT_TYPE = (struct System_String_o *)StringLiteral_19175/*"enemyMasterEffectType"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->KEY_EFFECT_TYPE, v7, v9, v10, v11, v12, v13, v14);
}


float AiFieldEntity__GetCutinAdditionalTime(AiFieldEntity_o *this, float def, const MethodInfo *method)
{
  if ( (byte_4CEE256 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18533/*"cutinAdditionalTime"*/);
    byte_4CEE256 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18533/*"cutinAdditionalTime"*/, def, 0);
}


int32_t AiFieldEntity__GetFieldHp(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE254 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19571/*"fieldHp"*/);
    byte_4CEE254 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19571/*"fieldHp"*/, -1, v2);
}


int32_t AiFieldEntity__GetFieldUIId(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE255 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19577/*"fieldHpUiId"*/);
    byte_4CEE255 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19577/*"fieldHpUiId"*/, -1, v2);
}


int32_t AiFieldEntity__getEffectType(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  AiFieldEntity_c *v4; // x0

  if ( (byte_4CEE251 & 1) == 0 )
  {
    sub_1C7BAE8(&AiFieldEntity_TypeInfo);
    byte_4CEE251 = 1;
  }
  v4 = AiFieldEntity_TypeInfo;
  if ( !AiFieldEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiFieldEntity_TypeInfo);
    v4 = AiFieldEntity_TypeInfo;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, v4->static_fields->KEY_EFFECT_TYPE, 0, v2);
}


System_String_o *AiFieldEntity__getVoice(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  AiFieldEntity_c *v4; // x0
  System_String_o *result; // x0

  if ( (byte_4CEE252 & 1) == 0 )
  {
    sub_1C7BAE8(&AiFieldEntity_TypeInfo);
    byte_4CEE252 = 1;
  }
  v4 = AiFieldEntity_TypeInfo;
  if ( !AiFieldEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiFieldEntity_TypeInfo);
    v4 = AiFieldEntity_TypeInfo;
  }
  result = (System_String_o *)AiBaseEntity__getScriptObj((AiBaseEntity_o *)this, v4->static_fields->KEY_VOICE_NAME, v2);
  if ( result )
    return (System_String_o *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))result->klass->vtable._3_ToString.methodPtr)(
                                result,
                                result->klass->vtable._3_ToString.method);
  return result;
}


System_String_o *AiFieldEntity__get_FirstTimeSaveKey(AiFieldEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  Il2CppObject *v4; // x0
  int32_t idx; // [xsp+8h] [xbp-28h] BYREF
  int32_t id; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEE257 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6705/*"FieldAi_{0}_{1}"*/);
    byte_4CEE257 = 1;
  }
  id = this->fields.id;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  idx = this->fields.idx;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx);
  return System_String__Format_64218220((System_String_o *)StringLiteral_6705/*"FieldAi_{0}_{1}"*/, v3, v4, 0);
}


bool AiFieldEntity__isForcedSkillSpeedOne(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE253 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19717/*"forcedSkillSpeed"*/);
    byte_4CEE253 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19717/*"forcedSkillSpeed"*/, 0, v2) == 1;
}


bool AiFieldEntity__isTiming(
        AiFieldEntity_o *this,
        int32_t state,
        int32_t actcnt,
        int32_t timingPriority,
        const MethodInfo *method)
{
  int v5; // w8

  v5 = state - 2;
  return (unsigned int)(state - 2) <= 0x17 && ((0xBA2F15u >> v5) & 1) != 0 && this->fields.timing == dword_D2A694[v5];
}