void __fastcall ServantVoiceRelationEntity___ctor(ServantVoiceRelationEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBF7E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EBF7E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantVoiceRelationEntity__CreatePK(
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EBF7D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, relationSvtId, (_DWORD)method, v3);
    byte_42EBF7D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           relationSvtId,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantVoiceRelationEntity__CreatePrimaryKey(
        ServantVoiceRelationEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w0
  __int64 v8; // x8
  int32_t v9; // w19
  int32_t v10; // w1
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42EBF7C & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBF7C = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v6;
  *(_QWORD *)&v13.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v13, 0LL);
  v8 = *(_QWORD *)&this->fields.relationSvtId.fields.currentCryptoKey;
  *(_QWORD *)&v14.fields.fakeValue = *(_QWORD *)&this->fields.relationSvtId.fields.fakeValue;
  v9 = v7;
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL);
  return ServantVoiceRelationEntity__CreatePK(v9, v10, v11);
}