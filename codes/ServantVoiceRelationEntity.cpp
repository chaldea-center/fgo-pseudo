void __fastcall ServantVoiceRelationEntity___ctor(ServantVoiceRelationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418B121 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418B121 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantVoiceRelationEntity__CreatePK(
        int32_t svtId,
        int32_t relationSvtId,
        const MethodInfo *method)
{
  if ( (byte_418B120 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&relationSvtId);
    byte_418B120 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           relationSvtId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantVoiceRelationEntity__CreatePrimaryKey(
        ServantVoiceRelationEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  __int64 v6; // x8
  int32_t v7; // w19
  int32_t v8; // w1
  const MethodInfo *v9; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_418B11F & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418B11F = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v4;
  *(_QWORD *)&v11.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v11, 0LL);
  v6 = *(_QWORD *)&this->fields.relationSvtId.fields.currentCryptoKey;
  *(_QWORD *)&v12.fields.fakeValue = *(_QWORD *)&this->fields.relationSvtId.fields.fakeValue;
  v7 = v5;
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
  return ServantVoiceRelationEntity__CreatePK(v7, v8, v9);
}