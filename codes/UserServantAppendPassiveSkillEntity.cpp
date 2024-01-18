void __fastcall UserServantAppendPassiveSkillEntity___ctor(
        UserServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4185E1E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4185E1E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserServantAppendPassiveSkillEntity__CreatePK(
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_4185E1D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&svtId);
    byte_4185E1D = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_1732A38 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserServantAppendPassiveSkillEntity__CreatePrimaryKey(
        UserServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q1
  int64_t v4; // x0
  const MethodInfo *v5; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  if ( (byte_4185E1C & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4185E1C = 1;
  }
  v3 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v3;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v7, 0LL);
  return UserServantAppendPassiveSkillEntity__CreatePK(v4, this->fields.svtId, v5);
}