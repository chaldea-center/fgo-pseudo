void __fastcall UpdateProfileDialogInfoEntity___ctor(UpdateProfileDialogInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188A7B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188A7B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UpdateProfileDialogInfoEntity__CreatePK(int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4188A7A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int___, method);
    byte_4188A7A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           svtId,
           (const MethodInfo_173289C *)Method_DataEntityBase_CreateMultiplePK_int___);
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

  if ( (byte_4188A79 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4188A79 = 1;
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
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v8, 0LL);
  return UpdateProfileDialogInfoEntity__CreatePK(v5, v6);
}