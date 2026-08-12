void VoiceMaterialCondEntity___ctor(VoiceMaterialCondEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59719C5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_59719C5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *VoiceMaterialCondEntity__CreatePK(
        int32_t svtId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_59719C4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_long__long__string__long___);
    byte_59719C4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__object__long_(
           svtId,
           voicePrefix,
           (Il2CppObject *)voiceId,
           idx,
           (const MethodInfo_3854FF8 *)Method_DataEntityBase_CreateMultiplePK_long__long__string__long___);
}


System_String_o *VoiceMaterialCondEntity__CreatePrimaryKey(VoiceMaterialCondEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  __int64 v6; // x1
  int32_t voicePrefix; // w20
  int32_t v8; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x22
  System_String_o *v10; // x0
  const MethodInfo *v11; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_59719C3 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_59719C3 = 1;
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
  return VoiceMaterialCondEntity__CreatePK(v8, voicePrefix, v10, this->fields.idx, v11);
}


int32_t VoiceMaterialCondEntity__getCondType(VoiceMaterialCondEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


int32_t VoiceMaterialCondEntity__getCondValue(VoiceMaterialCondEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *condValues; // x8
  il2cpp_array_size_t max_length; // x9

  condValues = this->fields.condValues;
  if ( !condValues )
    sub_2213CDC(this, method);
  max_length = condValues->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_2213CE4(this);
  return condValues->m_Items[0];
}