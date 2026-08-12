void VoiceCondEntity___ctor(VoiceCondEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59719B5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_59719B5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_59719B3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_long__long__string__long__long__long___);
    byte_59719B3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__object__long__long__long_(
           svtId,
           voicePrefix,
           (Il2CppObject *)voiceId,
           condType,
           targetId,
           condGroup,
           (const MethodInfo_3855790 *)Method_DataEntityBase_CreateMultiplePK_long__long__string__long__long__long___);
}


System_String_o *VoiceCondEntity__CreatePrimaryKey(VoiceCondEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  __int64 v6; // x1
  int32_t voicePrefix; // w20
  int32_t v8; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x22
  System_String_o *v10; // x2
  const MethodInfo *v11; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_59719B2 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_59719B2 = 1;
  }
  v3 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v13.fields.currentCryptoKey = v3;
  *(_QWORD *)&v13.fields.fakeValue = v4;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
  voicePrefix = this->fields.voicePrefix;
  v8 = v5;
  voiceId = this->fields.voiceId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(voiceId, 0);
  return VoiceCondEntity__CreatePK(
           v8,
           voicePrefix,
           v10,
           this->fields.condType,
           this->fields.targetId,
           this->fields.condGroup,
           v11);
}


// local variable allocation has failed, the output may be wrong!
bool VoiceCondEntity__IsEnable(VoiceCondEntity_o *this, int32_t svtId, int32_t voicePrefix, const MethodInfo *method)
{
  int32_t targetId; // w19
  int32_t v7; // w8
  int32_t condType; // w21
  int64_t condValue; // x20
  int32_t v11; // w0

  targetId = svtId;
  if ( (byte_59719B4 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_59719B4 = 1;
  }
  v7 = this->fields.voicePrefix;
  if ( (v7 & 0x80000000) == 0 && v7 != voicePrefix )
    return 1;
  condType = this->fields.condType;
  if ( condType == 56 )
  {
    condValue = this->fields.condValue;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&svtId);
    v11 = 56;
  }
  else
  {
    targetId = this->fields.targetId;
    condValue = this->fields.condValue;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&svtId);
    v11 = condType;
  }
  return CondType__IsOpen(v11, targetId, condValue, 0, 0, 0);
}