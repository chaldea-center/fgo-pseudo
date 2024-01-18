void __fastcall VoiceCondEntity___ctor(VoiceCondEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418D2CE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418D2CE = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_418D2CC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__long__string__long__long__long___, *(_QWORD *)&voicePrefix);
    byte_418D2CC = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__string__long__long__long_(
           svtId,
           voicePrefix,
           voiceId,
           condType,
           targetId,
           condGroup,
           (const MethodInfo_1733628 *)Method_DataEntityBase_CreateMultiplePK_long__long__string__long__long__long___);
}


System_String_o *__fastcall VoiceCondEntity__CreatePrimaryKey(VoiceCondEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  int32_t voicePrefix; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x22
  int32_t v9; // w21
  System_String_o *v10; // x0
  const MethodInfo *v11; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_418D2CB & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v3);
    byte_418D2CB = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v5;
  *(_QWORD *)&v13.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  voicePrefix = this->fields.voicePrefix;
  voiceId = this->fields.voiceId;
  v9 = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(voiceId, 0LL);
  return VoiceCondEntity__CreatePK(
           v9,
           voicePrefix,
           v10,
           this->fields.condType,
           this->fields.targetId,
           this->fields.condGroup,
           v11);
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
  if ( (byte_418D2CD & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&svtId);
    byte_418D2CD = 1;
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