void __fastcall UpdateProfileDialogInfoEntity___ctor(UpdateProfileDialogInfoEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16DB5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16DB5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UpdateProfileDialogInfoEntity__CreatePK(int32_t svtId, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16DB4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int___, method, v2);
    byte_4B16DB4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           svtId,
           (const MethodInfo_2F10D48 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall UpdateProfileDialogInfoEntity__CreatePrimaryKey(
        UpdateProfileDialogInfoEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  int32_t v6; // w0
  const MethodInfo *v7; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4B16DB3 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B16DB3 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v9, 0LL);
  return UpdateProfileDialogInfoEntity__CreatePK(v6, v7);
}