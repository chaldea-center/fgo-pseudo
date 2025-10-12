void VoiceCondEntity___ctor(VoiceCondEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38AAF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C38AAF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *VoiceCondEntity__CreatePK(
        int32_t svtId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        int32_t condType,
        int32_t targetId,
        int32_t condGroup,
        const MethodInfo *method)
{
  if ( (byte_4C38AAD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_long__long__string__long__long__long___);
    byte_4C38AAD = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__object__long__long__long_(
           svtId,
           voicePrefix,
           (Il2CppObject *)voiceId,
           condType,
           targetId,
           condGroup,
           (const MethodInfo_30DC8A8 *)Method_DataEntityBase_CreateMultiplePK_long__long__string__long__long__long___);
}


System_String_o *VoiceCondEntity__CreatePrimaryKey(VoiceCondEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  int32_t voicePrefix; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x22
  int32_t v8; // w21
  System_String_o *v9; // x0
  const MethodInfo *v10; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4C38AAC & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4C38AAC = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v4;
  *(_QWORD *)&v12.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v12, 0);
  voicePrefix = this->fields.voicePrefix;
  voiceId = this->fields.voiceId;
  v8 = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48923628(voiceId, 0);
  return VoiceCondEntity__CreatePK(
           v8,
           voicePrefix,
           v9,
           this->fields.condType,
           this->fields.targetId,
           this->fields.condGroup,
           v10);
}


bool VoiceCondEntity__IsEnable(VoiceCondEntity_o *this, int32_t svtId, int32_t voicePrefix, const MethodInfo *method)
{
  int32_t v7; // w8
  int32_t condType; // w21
  int64_t condValue; // x20
  int32_t v11; // w0

  if ( (byte_4C38AAE & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C38AAE = 1;
  }
  v7 = this->fields.voicePrefix;
  if ( (v7 & 0x80000000) == 0 && v7 != voicePrefix )
    return 1;
  condType = this->fields.condType;
  if ( condType == 56 )
  {
    condValue = this->fields.condValue;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v11 = 56;
  }
  else
  {
    svtId = this->fields.targetId;
    condValue = this->fields.condValue;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v11 = condType;
  }
  return CondType__IsOpen(v11, svtId, condValue, 0, 0, 0);
}