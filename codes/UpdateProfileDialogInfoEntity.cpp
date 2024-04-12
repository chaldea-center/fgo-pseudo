void __fastcall UpdateProfileDialogInfoEntity___ctor(UpdateProfileDialogInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1468 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B1468 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UpdateProfileDialogInfoEntity__CreatePK(int32_t svtId, const MethodInfo *method)
{
  if ( (byte_42B1467 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_42B1467 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           svtId,
           (const MethodInfo_1A4DEE4 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall UpdateProfileDialogInfoEntity__CreatePrimaryKey(
        UpdateProfileDialogInfoEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  int32_t v5; // w0
  const MethodInfo *v6; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42B1466 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B1466 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v8, 0LL);
  return UpdateProfileDialogInfoEntity__CreatePK(v5, v6);
}