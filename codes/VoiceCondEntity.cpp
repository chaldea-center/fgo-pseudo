void __fastcall VoiceCondEntity___ctor(VoiceCondEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1712A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1712A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall VoiceCondEntity__CreatePK(
        int32_t svtId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        int32_t condType,
        int32_t targetId,
        int32_t condGroup,
        const MethodInfo *method)
{
  if ( (byte_4B17128 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataEntityBase_CreateMultiplePK_long__long__string__long__long__long___,
      *(_QWORD *)&voicePrefix,
      voiceId);
    byte_4B17128 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__object__long__long__long_(
           svtId,
           voicePrefix,
           (Il2CppObject *)voiceId,
           condType,
           targetId,
           condGroup,
           (const MethodInfo_2F12148 *)Method_DataEntityBase_CreateMultiplePK_long__long__string__long__long__long___);
}


System_String_o *__fastcall VoiceCondEntity__CreatePrimaryKey(VoiceCondEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  __int64 v9; // x1
  int32_t voicePrefix; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x22
  int32_t v12; // w21
  System_String_o *v13; // x0
  const MethodInfo *v14; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B17127 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v4, v5);
    byte_4B17127 = 1;
  }
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v16.fields.currentCryptoKey = v7;
  *(_QWORD *)&v16.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
  voicePrefix = this->fields.voicePrefix;
  voiceId = this->fields.voiceId;
  v12 = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(voiceId, 0LL);
  return VoiceCondEntity__CreatePK(
           v12,
           voicePrefix,
           v13,
           this->fields.condType,
           this->fields.targetId,
           this->fields.condGroup,
           v14);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceCondEntity__IsEnable(
        VoiceCondEntity_o *this,
        int32_t svtId,
        int32_t voicePrefix,
        const MethodInfo *method)
{
  int32_t targetId; // w19
  int32_t v7; // w8
  int32_t condType; // w21
  int64_t condValue; // x20
  int32_t v11; // w0

  targetId = svtId;
  if ( (byte_4B17129 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&voicePrefix);
    byte_4B17129 = 1;
  }
  v7 = this->fields.voicePrefix;
  if ( (v7 & 0x80000000) == 0 && v7 != voicePrefix )
    return 1;
  condType = this->fields.condType;
  if ( condType == 56 )
  {
    condValue = this->fields.condValue;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&svtId);
    v11 = 56;
  }
  else
  {
    targetId = this->fields.targetId;
    condValue = this->fields.condValue;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&svtId);
    v11 = condType;
  }
  return CondType__IsOpen(v11, targetId, condValue, 0, 0LL, 0LL);
}