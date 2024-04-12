void __fastcall UserServantCommandCardEntity___ctor(UserServantCommandCardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE1F8 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AE1F8 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserServantCommandCardEntity__CreatePK(
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  if ( (byte_42AE1F7 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__long___);
    byte_42AE1F7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long_(
           userId,
           svtId,
           (const MethodInfo_1A4E118 *)Method_DataEntityBase_CreateMultiplePK_long__long___);
}


System_String_o *__fastcall UserServantCommandCardEntity__CreatePrimaryKey(
        UserServantCommandCardEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q1
  int64_t v4; // x0
  __int128 v5; // q0
  int64_t v6; // x20
  int64_t v7; // x0
  const MethodInfo *v8; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-30h]

  if ( (byte_42AE1F6 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42AE1F6 = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v3;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v11 = v12;
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v11, 0LL);
  v5 = *(_OWORD *)&this->fields.svtId.fields.fakeValue;
  v6 = v4;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&this->fields.svtId.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v10, 0LL);
  return UserServantCommandCardEntity__CreatePK(v6, v7, v8);
}