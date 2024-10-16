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

  if ( (byte_4AB597A & 1) == 0 )
  {
    sub_1BAB41C(&AiFieldEntity_TypeInfo, v1);
    sub_1BAB41C(&StringLiteral_19053/*"enemyMasterEffectType"*/, v4);
    sub_1BAB41C(&StringLiteral_24632/*"voicePlay"*/, v5);
    byte_4AB597A = 1;
  }
  AiFieldEntity_TypeInfo->static_fields->KEY_VOICE_NAME = (struct System_String_o *)StringLiteral_24632/*"voicePlay"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)AiFieldEntity_TypeInfo->static_fields, StringLiteral_24632/*"voicePlay"*/, v2, v3);
  v6 = StringLiteral_19053/*"enemyMasterEffectType"*/;
  static_fields = AiFieldEntity_TypeInfo->static_fields;
  static_fields->KEY_EFFECT_TYPE = (struct System_String_o *)StringLiteral_19053/*"enemyMasterEffectType"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->KEY_EFFECT_TYPE, v6, v8, v9);
}


void __fastcall AiFieldEntity___ctor(AiFieldEntity_o *this, const MethodInfo *method)
{
  AiBaseEntity___ctor((AiBaseEntity_o *)this, 0LL);
}


float __fastcall AiFieldEntity__GetCutinAdditionalTime(AiFieldEntity_o *this, float def, const MethodInfo *method)
{
  if ( (byte_4AB5979 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_18446/*"cutinAdditionalTime"*/, method);
    byte_4AB5979 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_18446/*"cutinAdditionalTime"*/, def, 0LL);
}


int32_t __fastcall AiFieldEntity__GetFieldHp(AiFieldEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5977 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_19425/*"fieldHp"*/, method);
    byte_4AB5977 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19425/*"fieldHp"*/, -1, 0LL);
}


int32_t __fastcall AiFieldEntity__GetFieldUIId(AiFieldEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5978 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_19432/*"fieldHpUiId"*/, method);
    byte_4AB5978 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19432/*"fieldHpUiId"*/, -1, 0LL);
}


int32_t __fastcall AiFieldEntity__getEffectType(AiFieldEntity_o *this, const MethodInfo *method)
{
  AiFieldEntity_c *v3; // x0

  if ( (byte_4AB5974 & 1) == 0 )
  {
    sub_1BAB41C(&AiFieldEntity_TypeInfo, method);
    byte_4AB5974 = 1;
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

  if ( (byte_4AB5975 & 1) == 0 )
  {
    sub_1BAB41C(&AiFieldEntity_TypeInfo, method);
    byte_4AB5975 = 1;
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
  if ( (byte_4AB5976 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_19568/*"forcedSkillSpeed"*/, method);
    byte_4AB5976 = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_19568/*"forcedSkillSpeed"*/, 0, 0LL) == 1;
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
  return (unsigned int)(state - 2) <= 0x15 && ((0x3A2F15u >> v5) & 1) != 0 && this->fields.timing == dword_BFDF30[v5];
}