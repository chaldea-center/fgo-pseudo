void __fastcall AiFieldEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct AiFieldEntity_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B15E16 & 1) == 0 )
  {
    sub_1BCA7E0(&AiFieldEntity_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19220/*"enemyMasterEffectType"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_24844/*"voicePlay"*/, v10, v11);
    byte_4B15E16 = 1;
  }
  AiFieldEntity_TypeInfo->static_fields->KEY_VOICE_NAME = (struct System_String_o *)StringLiteral_24844/*"voicePlay"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AiFieldEntity_TypeInfo->static_fields,
    StringLiteral_24844/*"voicePlay"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_19220/*"enemyMasterEffectType"*/;
  static_fields = AiFieldEntity_TypeInfo->static_fields;
  static_fields->KEY_EFFECT_TYPE = (struct System_String_o *)StringLiteral_19220/*"enemyMasterEffectType"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->KEY_EFFECT_TYPE, v12, v14, v15, v16, v17, v18, v19);
}


void __fastcall AiFieldEntity___ctor(AiFieldEntity_o *this, const MethodInfo *method)
{
  AiBaseEntity___ctor((AiBaseEntity_o *)this, 0LL);
}


float __fastcall AiFieldEntity__GetCutinAdditionalTime(AiFieldEntity_o *this, float def, const MethodInfo *method)
{
  __int64 v3; // x2

  if ( (byte_4B15E15 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18602/*"cutinAdditionalTime"*/, method, v3);
    byte_4B15E15 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18602/*"cutinAdditionalTime"*/, def, 0LL);
}


int32_t __fastcall AiFieldEntity__GetFieldHp(AiFieldEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E13 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19597/*"fieldHp"*/, method, v2);
    byte_4B15E13 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19597/*"fieldHp"*/, -1, 0LL);
}


int32_t __fastcall AiFieldEntity__GetFieldUIId(AiFieldEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E14 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19604/*"fieldHpUiId"*/, method, v2);
    byte_4B15E14 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19604/*"fieldHpUiId"*/, -1, 0LL);
}


int32_t __fastcall AiFieldEntity__getEffectType(AiFieldEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AiFieldEntity_c *v4; // x0

  if ( (byte_4B15E10 & 1) == 0 )
  {
    sub_1BCA7E0(&AiFieldEntity_TypeInfo, method, v2);
    byte_4B15E10 = 1;
  }
  v4 = AiFieldEntity_TypeInfo;
  if ( !AiFieldEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiFieldEntity_TypeInfo, method);
    v4 = AiFieldEntity_TypeInfo;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, v4->static_fields->KEY_EFFECT_TYPE, 0, 0LL);
}


System_String_o *__fastcall AiFieldEntity__getVoice(AiFieldEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AiFieldEntity_c *v4; // x0

  if ( (byte_4B15E11 & 1) == 0 )
  {
    sub_1BCA7E0(&AiFieldEntity_TypeInfo, method, v2);
    byte_4B15E11 = 1;
  }
  v4 = AiFieldEntity_TypeInfo;
  if ( !AiFieldEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiFieldEntity_TypeInfo, method);
    v4 = AiFieldEntity_TypeInfo;
  }
  return AiBaseEntity__getScriptStringParam((AiBaseEntity_o *)this, v4->static_fields->KEY_VOICE_NAME, 0LL);
}


bool __fastcall AiFieldEntity__isForcedSkillSpeedOne(AiFieldEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E12 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19740/*"forcedSkillSpeed"*/, method, v2);
    byte_4B15E12 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19740/*"forcedSkillSpeed"*/, 0, 0LL) == 1;
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
  return (unsigned int)(state - 2) <= 0x15 && ((0x3A2F15u >> v5) & 1) != 0 && this->fields.timing == dword_C0D69C[v5];
}