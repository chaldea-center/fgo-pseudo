void __fastcall UserServantCommandCardEntity___ctor(UserServantCommandCardEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6B60 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E6B60 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserServantCommandCardEntity__CreatePK(
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E6B5F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__long___, svtId, (_DWORD)method, v3);
    byte_42E6B5F = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           svtId,
           (const MethodInfo_1AE31E0 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *__fastcall UserServantCommandCardEntity__CreatePrimaryKey(
        UserServantCommandCardEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int128 v5; // q1
  int64_t v6; // x0
  __int128 v7; // q0
  int64_t v8; // x20
  int64_t v9; // x0
  const MethodInfo *v10; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-30h]

  if ( (byte_42E6B5E & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6B5E = 1;
  }
  v5 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v13 = v14;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v13, 0LL);
  v7 = *(_OWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = v6;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v12, 0LL);
  return UserServantCommandCardEntity__CreatePK(v8, v9, v10);
}