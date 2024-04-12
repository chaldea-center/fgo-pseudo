void __fastcall VoiceMaterialCondEntity___ctor(VoiceMaterialCondEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B5EBA & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B5EBA = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall VoiceMaterialCondEntity__CreatePK(
        int32_t svtId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_42B5EB9 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__long__string__long___);
    byte_42B5EB9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__string__long_(
           svtId,
           voicePrefix,
           voiceId,
           idx,
           (const MethodInfo_1A4EA20 *)Method_DataEntityBase_CreateMultiplePK_long__long__string__long___);
}


System_String_o *__fastcall VoiceMaterialCondEntity__CreatePrimaryKey(
        VoiceMaterialCondEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  int32_t voicePrefix; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x22
  int32_t v8; // w21
  System_String_o *v9; // x0
  const MethodInfo *v10; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42B5EB8 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_42B5EB8 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v4;
  *(_QWORD *)&v12.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
  voicePrefix = this->fields.voicePrefix;
  voiceId = this->fields.voiceId;
  v8 = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44824884(voiceId, 0LL);
  return VoiceMaterialCondEntity__CreatePK(v8, voicePrefix, v9, this->fields.idx, v10);
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
    sub_B52A5C(this, method);
  v3 = *(_QWORD *)&condValues->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B52A88(this);
    sub_B52A28(v5, 0LL);
  }
  return condValues->m_Items[1];
}