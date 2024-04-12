void __fastcall AiFieldEntity___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct AiFieldEntity_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42ADFC1 & 1) == 0 )
  {
    sub_B52984(&AiFieldEntity_TypeInfo);
    sub_B52984(&StringLiteral_18500/*"enemyMasterEffectType"*/);
    sub_B52984(&StringLiteral_23372/*"voicePlay"*/);
    byte_42ADFC1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)AiFieldEntity_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_23372/*"voicePlay"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23372/*"voicePlay"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = AiFieldEntity_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18500/*"enemyMasterEffectType"*/;
  v9->KEY_EFFECT_TYPE = (struct System_String_o *)StringLiteral_18500/*"enemyMasterEffectType"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->KEY_EFFECT_TYPE, v10, v11, v12, v13, v14, v15, v16);
}


float __fastcall AiFieldEntity__GetCutinAdditionalTime(AiFieldEntity_o *this, float def, const MethodInfo *method)
{
  if ( (byte_42ADFC0 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17972/*"cutinAdditionalTime"*/);
    byte_42ADFC0 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_17972/*"cutinAdditionalTime"*/, def, 0LL);
}


int32_t __fastcall AiFieldEntity__GetFieldHp(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42ADFBE & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18843/*"fieldHp"*/);
    byte_42ADFBE = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_18843/*"fieldHp"*/, -1, v2);
}


int32_t __fastcall AiFieldEntity__GetFieldUIId(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42ADFBF & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18850/*"fieldHpUiId"*/);
    byte_42ADFBF = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_18850/*"fieldHpUiId"*/, -1, v2);
}


int32_t __fastcall AiFieldEntity__getEffectType(AiFieldEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  AiFieldEntity_c *v4; // x0

  if ( (byte_42ADFBB & 1) == 0 )
  {
    sub_B52984(&AiFieldEntity_TypeInfo);
    byte_42ADFBB = 1;
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

  if ( (byte_42ADFBC & 1) == 0 )
  {
    sub_B52984(&AiFieldEntity_TypeInfo);
    byte_42ADFBC = 1;
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

  if ( (byte_42ADFBD & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18950/*"forcedSkillSpeed"*/);
    byte_42ADFBD = 1;
  }
  return AiBaseEntity__getScriptIntParam((AiBaseEntity_o *)this, (System_String_o *)StringLiteral_18950/*"forcedSkillSpeed"*/, 0, v2) == 1;
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
  return (unsigned int)(state - 2) <= 0x15 && ((0x3A2F15u >> v5) & 1) != 0 && this->fields.timing == dword_3279B60[v5];
}