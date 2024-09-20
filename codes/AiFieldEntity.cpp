void __fastcall AiFieldEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct AiFieldEntity_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5AD8C & 1) == 0 )
  {
    sub_1B885B0(&AiFieldEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_19023/*"enemyMasterEffectType"*/);
    sub_1B885B0(&StringLiteral_24590/*"voicePlay"*/);
    byte_4A5AD8C = 1;
  }
  AiFieldEntity_TypeInfo->static_fields->KEY_VOICE_NAME = (struct System_String_o *)StringLiteral_24590/*"voicePlay"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)AiFieldEntity_TypeInfo->static_fields, StringLiteral_24590/*"voicePlay"*/, v1, v2);
  v3 = StringLiteral_19023/*"enemyMasterEffectType"*/;
  static_fields = AiFieldEntity_TypeInfo->static_fields;
  static_fields->KEY_EFFECT_TYPE = (struct System_String_o *)StringLiteral_19023/*"enemyMasterEffectType"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->KEY_EFFECT_TYPE, v3, v5, v6);
}


float __fastcall AiFieldEntity__GetCutinAdditionalTime(AiFieldEntity_o *this, float def, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4A5AD8B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18416/*"cutinAdditionalTime"*/);
    byte_4A5AD8B = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18416/*"cutinAdditionalTime"*/, def, v3);
}


int32_t __fastcall AiFieldEntity__GetFieldHp(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5AD89 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19395/*"fieldHp"*/);
    byte_4A5AD89 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19395/*"fieldHp"*/, -1, v2);
}


int32_t __fastcall AiFieldEntity__GetFieldUIId(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5AD8A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19402/*"fieldHpUiId"*/);
    byte_4A5AD8A = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19402/*"fieldHpUiId"*/, -1, v2);
}


int32_t __fastcall AiFieldEntity__getEffectType(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  AiFieldEntity_c *v4; // x0

  if ( (byte_4A5AD86 & 1) == 0 )
  {
    sub_1B885B0(&AiFieldEntity_TypeInfo);
    byte_4A5AD86 = 1;
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

  if ( (byte_4A5AD87 & 1) == 0 )
  {
    sub_1B885B0(&AiFieldEntity_TypeInfo);
    byte_4A5AD87 = 1;
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

  if ( (byte_4A5AD88 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19538/*"forcedSkillSpeed"*/);
    byte_4A5AD88 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19538/*"forcedSkillSpeed"*/, 0, v2) == 1;
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
  return (unsigned int)(state - 2) <= 0x15 && ((0x3A2F15u >> v5) & 1) != 0 && this->fields.timing == dword_BEEE68[v5];
}