void __fastcall UserServantAppendPassiveSkillLvEntity___ctor(
        UserServantAppendPassiveSkillLvEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BBCFA & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_long___ctor__, method);
    byte_49BBCFA = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_319B500 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserServantAppendPassiveSkillLvEntity__CreatePrimaryKey(
        UserServantAppendPassiveSkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_49BBCF9 & 1) == 0 )
  {
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_49BBCF9 = 1;
  }
  v3 = *(_OWORD *)&this->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v5, 0LL);
}