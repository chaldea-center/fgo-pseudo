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
  __int64 v9; // x1
  int64_t v10; // x1
  struct AiFieldEntity_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B36DB5 & 1) == 0 )
  {
    sub_1BD3458(&AiFieldEntity_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_19249/*"enemyMasterEffectType"*/, v8);
    sub_1BD3458(&StringLiteral_24879/*"voicePlay"*/, v9);
    byte_4B36DB5 = 1;
  }
  AiFieldEntity_TypeInfo->static_fields->KEY_VOICE_NAME = (struct System_String_o *)StringLiteral_24879/*"voicePlay"*/;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)AiFieldEntity_TypeInfo->static_fields,
    StringLiteral_24879/*"voicePlay"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_19249/*"enemyMasterEffectType"*/;
  static_fields = AiFieldEntity_TypeInfo->static_fields;
  static_fields->KEY_EFFECT_TYPE = (struct System_String_o *)StringLiteral_19249/*"enemyMasterEffectType"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->KEY_EFFECT_TYPE, v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall AiFieldEntity___ctor(AiFieldEntity_o *this, const MethodInfo *method)
{
  AiBaseEntity___ctor((AiBaseEntity_o *)this, 0LL);
}


float __fastcall AiFieldEntity__GetCutinAdditionalTime(AiFieldEntity_o *this, float def, const MethodInfo *method)
{
  if ( (byte_4B36DB4 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_18630/*"cutinAdditionalTime"*/, method);
    byte_4B36DB4 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18630/*"cutinAdditionalTime"*/, def, 0LL);
}


int32_t __fastcall AiFieldEntity__GetFieldHp(AiFieldEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B36DB2 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_19627/*"fieldHp"*/, method);
    byte_4B36DB2 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19627/*"fieldHp"*/, -1, 0LL);
}


int32_t __fastcall AiFieldEntity__GetFieldUIId(AiFieldEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B36DB3 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_19634/*"fieldHpUiId"*/, method);
    byte_4B36DB3 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19634/*"fieldHpUiId"*/, -1, 0LL);
}


int32_t __fastcall AiFieldEntity__getEffectType(AiFieldEntity_o *this, const MethodInfo *method)
{
  AiFieldEntity_c *v3; // x0

  if ( (byte_4B36DAF & 1) == 0 )
  {
    sub_1BD3458(&AiFieldEntity_TypeInfo, method);
    byte_4B36DAF = 1;
  }
  v3 = AiFieldEntity_TypeInfo;
  if ( !AiFieldEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiFieldEntity_TypeInfo);
    v3 = AiFieldEntity_TypeInfo;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, v3->static_fields->KEY_EFFECT_TYPE, 0, 0LL);
}


System_String_o *__fastcall AiFieldEntity__getVoice(AiFieldEntity_o *this, const MethodInfo *method)
{
  AiFieldEntity_c *v3; // x0

  if ( (byte_4B36DB0 & 1) == 0 )
  {
    sub_1BD3458(&AiFieldEntity_TypeInfo, method);
    byte_4B36DB0 = 1;
  }
  v3 = AiFieldEntity_TypeInfo;
  if ( !AiFieldEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiFieldEntity_TypeInfo);
    v3 = AiFieldEntity_TypeInfo;
  }
  return AiBaseEntity__getScriptStringParam((AiBaseEntity_o *)this, v3->static_fields->KEY_VOICE_NAME, 0LL);
}


bool __fastcall AiFieldEntity__isForcedSkillSpeedOne(AiFieldEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B36DB1 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_19770/*"forcedSkillSpeed"*/, method);
    byte_4B36DB1 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19770/*"forcedSkillSpeed"*/, 0, 0LL) == 1;
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
  return (unsigned int)(state - 2) <= 0x15 && ((0x3A2F15u >> v5) & 1) != 0 && this->fields.timing == dword_C12AC4[v5];
}