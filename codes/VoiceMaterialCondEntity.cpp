void __fastcall VoiceMaterialCondEntity___ctor(VoiceMaterialCondEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418D2DD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418D2DD = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall VoiceMaterialCondEntity__CreatePK(
        int32_t svtId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_418D2DC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__long__string__long___, *(_QWORD *)&voicePrefix);
    byte_418D2DC = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__string__long_(
           svtId,
           voicePrefix,
           voiceId,
           idx,
           (const MethodInfo_1733288 *)Method_DataEntityBase_CreateMultiplePK_long__long__string__long___);
}


System_String_o *__fastcall VoiceMaterialCondEntity__CreatePrimaryKey(
        VoiceMaterialCondEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  int32_t voicePrefix; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x22
  int32_t v9; // w21
  System_String_o *v10; // x0
  const MethodInfo *v11; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_418D2DB & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v3);
    byte_418D2DB = 1;
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
  return VoiceMaterialCondEntity__CreatePK(v9, voicePrefix, v10, this->fields.idx, v11);
}


int32_t __fastcall VoiceMaterialCondEntity__getCondType(VoiceMaterialCondEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


int32_t __fastcall VoiceMaterialCondEntity__getCondValue(VoiceMaterialCondEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *condValues; // x8
  __int64 v3; // x9
  __int64 v5; // x0

  condValues = this->fields.condValues;
  if ( !condValues )
    sub_B2C434(this, method);
  v3 = *(_QWORD *)&condValues->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
  }
  return condValues->m_Items[1];
}