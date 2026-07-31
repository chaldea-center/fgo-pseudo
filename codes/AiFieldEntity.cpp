void AiFieldEntity___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct AiFieldEntity_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5938239 & 1) == 0 )
  {
    sub_21FFC50(&AiFieldEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_19881/*"enemyMasterEffectType"*/);
    sub_21FFC50(&StringLiteral_26031/*"voicePlay"*/);
    byte_5938239 = 1;
  }
  v7 = StringLiteral_26031/*"voicePlay"*/;
  AiFieldEntity_TypeInfo->static_fields->KEY_VOICE_NAME = (struct System_String_o *)StringLiteral_26031/*"voicePlay"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)AiFieldEntity_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_19881/*"enemyMasterEffectType"*/;
  static_fields = AiFieldEntity_TypeInfo->static_fields;
  static_fields->KEY_EFFECT_TYPE = (struct System_String_o *)StringLiteral_19881/*"enemyMasterEffectType"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->KEY_EFFECT_TYPE, v8, v10, v11, v12, v13, v14, v15);
}


float AiFieldEntity__GetCutinAdditionalTime(AiFieldEntity_o *this, float def, const MethodInfo *method)
{
  if ( (byte_5938237 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19215/*"cutinAdditionalTime"*/);
    byte_5938237 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_19215/*"cutinAdditionalTime"*/, def, 0);
}


int32_t AiFieldEntity__GetFieldHp(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938235 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20284/*"fieldHp"*/);
    byte_5938235 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_20284/*"fieldHp"*/, -1, v2);
}


int32_t AiFieldEntity__GetFieldUIId(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938236 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20290/*"fieldHpUiId"*/);
    byte_5938236 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_20290/*"fieldHpUiId"*/, -1, v2);
}


int32_t AiFieldEntity__getEffectType(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  AiFieldEntity_c *v4; // x0

  if ( (byte_5938232 & 1) == 0 )
  {
    sub_21FFC50(&AiFieldEntity_TypeInfo);
    byte_5938232 = 1;
  }
  v4 = AiFieldEntity_TypeInfo;
  if ( !*(&AiFieldEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AiFieldEntity_TypeInfo, method);
    v4 = AiFieldEntity_TypeInfo;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, v4->static_fields->KEY_EFFECT_TYPE, 0, v2);
}


System_String_o *AiFieldEntity__getVoice(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  AiFieldEntity_c *v4; // x0
  System_String_o *result; // x0

  if ( (byte_5938233 & 1) == 0 )
  {
    sub_21FFC50(&AiFieldEntity_TypeInfo);
    byte_5938233 = 1;
  }
  v4 = AiFieldEntity_TypeInfo;
  if ( !*(&AiFieldEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AiFieldEntity_TypeInfo, method);
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

  if ( (byte_5938238 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6969/*"FieldAi_{0}_{1}"*/);
    byte_5938238 = 1;
  }
  id = this->fields.id;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &id);
  idx = this->fields.idx;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &idx);
  return System_String__Format_75484576((System_String_o *)StringLiteral_6969/*"FieldAi_{0}_{1}"*/, v3, v4, 0);
}


bool AiFieldEntity__isForcedSkillSpeedOne(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938234 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20447/*"forcedSkillSpeed"*/);
    byte_5938234 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_20447/*"forcedSkillSpeed"*/, 0, v2) == 1;
}


bool AiFieldEntity__isTiming(
        AiFieldEntity_o *this,
        int32_t state,
        int32_t actcnt,
        int32_t timingPriority,
        const MethodInfo *method)
{
  unsigned int v5; // w8

  v5 = state - 2;
  return (unsigned int)(state - 2) <= 0x17 && ((0xBA2F15u >> v5) & 1) != 0 && this->fields.timing == dword_ED124C[v5];
}