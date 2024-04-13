void __fastcall VoiceCondEntity___ctor(VoiceCondEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE709 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EE709 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_42EE707 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataEntityBase_CreateMultiplePK_long__long__string__long__long__long___,
      voicePrefix,
      (_DWORD)voiceId,
      *(_QWORD *)&condType);
    byte_42EE707 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__string__long__long__long_(
           svtId,
           voicePrefix,
           voiceId,
           condType,
           targetId,
           condGroup,
           (const MethodInfo_1AE3E88 *)Method_DataEntityBase_CreateMultiplePK_long__long__string__long__long__long___);
}


System_String_o *__fastcall VoiceCondEntity__CreatePrimaryKey(VoiceCondEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  int32_t voicePrefix; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x22
  int32_t v13; // w21
  System_String_o *v14; // x0
  const MethodInfo *v15; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_42EE706 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v5, v6, v7);
    byte_42EE706 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v9;
  *(_QWORD *)&v17.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v17, 0LL);
  voicePrefix = this->fields.voicePrefix;
  voiceId = this->fields.voiceId;
  v13 = v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(voiceId, 0LL);
  return VoiceCondEntity__CreatePK(
           v13,
           voicePrefix,
           v14,
           this->fields.condType,
           this->fields.targetId,
           this->fields.condGroup,
           v15);
}


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
  if ( (byte_42EE708 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, svtId, voicePrefix, method);
    byte_42EE708 = 1;
  }
  v7 = this->fields.voicePrefix;
  if ( (v7 & 0x80000000) == 0 && v7 != voicePrefix )
    return 1;
  condType = this->fields.condType;
  if ( condType == 56 )
  {
    condValue = this->fields.condValue;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v11 = 56;
  }
  else
  {
    targetId = this->fields.targetId;
    condValue = this->fields.condValue;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v11 = condType;
  }
  return CondType__IsOpen(v11, targetId, condValue, 0, 0LL);
}