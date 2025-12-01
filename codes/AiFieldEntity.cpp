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

  if ( (byte_4CC6F94 & 1) == 0 )
  {
    sub_1C713B0(&AiFieldEntity_TypeInfo);
    sub_1C713B0(&StringLiteral_19094/*"enemyMasterEffectType"*/);
    sub_1C713B0(&StringLiteral_24839/*"voicePlay"*/);
    byte_4CC6F94 = 1;
  }
  AiFieldEntity_TypeInfo->static_fields->KEY_VOICE_NAME = (struct System_String_o *)StringLiteral_24839/*"voicePlay"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)AiFieldEntity_TypeInfo->static_fields,
    StringLiteral_24839/*"voicePlay"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_19094/*"enemyMasterEffectType"*/;
  static_fields = AiFieldEntity_TypeInfo->static_fields;
  static_fields->KEY_EFFECT_TYPE = (struct System_String_o *)StringLiteral_19094/*"enemyMasterEffectType"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->KEY_EFFECT_TYPE, v7, v9, v10, v11, v12, v13, v14);
}


float AiFieldEntity__GetCutinAdditionalTime(AiFieldEntity_o *this, float def, const MethodInfo *method)
{
  if ( (byte_4CC6F93 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_18465/*"cutinAdditionalTime"*/);
    byte_4CC6F93 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18465/*"cutinAdditionalTime"*/, def, 0);
}


int32_t AiFieldEntity__GetFieldHp(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC6F91 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19488/*"fieldHp"*/);
    byte_4CC6F91 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19488/*"fieldHp"*/, -1, v2);
}


int32_t AiFieldEntity__GetFieldUIId(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC6F92 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19495/*"fieldHpUiId"*/);
    byte_4CC6F92 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19495/*"fieldHpUiId"*/, -1, v2);
}


int32_t AiFieldEntity__getEffectType(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  AiFieldEntity_c *v4; // x0

  if ( (byte_4CC6F8E & 1) == 0 )
  {
    sub_1C713B0(&AiFieldEntity_TypeInfo);
    byte_4CC6F8E = 1;
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

  if ( (byte_4CC6F8F & 1) == 0 )
  {
    sub_1C713B0(&AiFieldEntity_TypeInfo);
    byte_4CC6F8F = 1;
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


bool AiFieldEntity__isForcedSkillSpeedOne(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC6F90 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19635/*"forcedSkillSpeed"*/);
    byte_4CC6F90 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19635/*"forcedSkillSpeed"*/, 0, v2) == 1;
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
  return (unsigned int)(state - 2) <= 0x17 && ((0xBA2F15u >> v5) & 1) != 0 && this->fields.timing == dword_D23C04[v5];
}