void AiFieldEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct AiFieldEntity_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C26E9D & 1) == 0 )
  {
    sub_1C2D490(&AiFieldEntity_TypeInfo);
    sub_1C2D490(&StringLiteral_19023/*"enemyMasterEffectType"*/);
    sub_1C2D490(&StringLiteral_24686/*"voicePlay"*/);
    byte_4C26E9D = 1;
  }
  AiFieldEntity_TypeInfo->static_fields->KEY_VOICE_NAME = (struct System_String_o *)StringLiteral_24686/*"voicePlay"*/;
  sub_1C2D434((CGThumbnailListItem_o *)AiFieldEntity_TypeInfo->static_fields, StringLiteral_24686/*"voicePlay"*/, v1, v2);
  v3 = StringLiteral_19023/*"enemyMasterEffectType"*/;
  static_fields = AiFieldEntity_TypeInfo->static_fields;
  static_fields->KEY_EFFECT_TYPE = (struct System_String_o *)StringLiteral_19023/*"enemyMasterEffectType"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->KEY_EFFECT_TYPE, v3, v5, v6);
}


float AiFieldEntity__GetCutinAdditionalTime(AiFieldEntity_o *this, float def, const MethodInfo *method)
{
  if ( (byte_4C26E9C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18416/*"cutinAdditionalTime"*/);
    byte_4C26E9C = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18416/*"cutinAdditionalTime"*/, def, 0);
}


int32_t AiFieldEntity__GetFieldHp(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C26E9A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19402/*"fieldHp"*/);
    byte_4C26E9A = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19402/*"fieldHp"*/, -1, v2);
}


int32_t AiFieldEntity__GetFieldUIId(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C26E9B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19409/*"fieldHpUiId"*/);
    byte_4C26E9B = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19409/*"fieldHpUiId"*/, -1, v2);
}


int32_t AiFieldEntity__getEffectType(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  AiFieldEntity_c *v4; // x0

  if ( (byte_4C26E97 & 1) == 0 )
  {
    sub_1C2D490(&AiFieldEntity_TypeInfo);
    byte_4C26E97 = 1;
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

  if ( (byte_4C26E98 & 1) == 0 )
  {
    sub_1C2D490(&AiFieldEntity_TypeInfo);
    byte_4C26E98 = 1;
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

  if ( (byte_4C26E99 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19546/*"forcedSkillSpeed"*/);
    byte_4C26E99 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19546/*"forcedSkillSpeed"*/, 0, v2) == 1;
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
  return (unsigned int)(state - 2) <= 0x17 && ((0xBA2F15u >> v5) & 1) != 0 && this->fields.timing == dword_C43754[v5];
}