void UpdateProfileDialogInfoEntity___ctor(UpdateProfileDialogInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593943D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_593943D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UpdateProfileDialogInfoEntity__CreatePK(int32_t svtId, const MethodInfo *method)
{
  if ( (byte_593943C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_593943C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           svtId,
           (const MethodInfo_3820DF8 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *UpdateProfileDialogInfoEntity__CreatePrimaryKey(
        UpdateProfileDialogInfoEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  int32_t v5; // w0
  const MethodInfo *v6; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_593943B & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593943B = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v8, 0);
  return UpdateProfileDialogInfoEntity__CreatePK(v5, v6);
}