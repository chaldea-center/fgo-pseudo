void UserServantAppendPassiveSkillLvEntity___ctor(
        UserServantAppendPassiveSkillLvEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5939663 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_long___ctor__);
    byte_5939663 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3EDADB8 *)Method_DataEntityBase_long___ctor__);
}


int64_t UserServantAppendPassiveSkillLvEntity__CreatePrimaryKey(
        UserServantAppendPassiveSkillLvEntity_o *this,
        const MethodInfo *method)
{
  __int128 v3; // q1
  int v4; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_5939662 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5939662 = 1;
  }
  v3 = *(_OWORD *)&this->fields.userSvtId.fields.fakeValue;
  v4 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v3;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v6, 0);
}