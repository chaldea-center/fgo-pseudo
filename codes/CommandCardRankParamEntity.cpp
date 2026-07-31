void CommandCardRankParamEntity___ctor(CommandCardRankParamEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938441 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938441 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *CommandCardRankParamEntity__CreatePK(int32_t id, int32_t rank, const MethodInfo *method)
{
  if ( (byte_5938440 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938440 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           rank,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *CommandCardRankParamEntity__CreatePrimaryKey(
        CommandCardRankParamEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  const MethodInfo *v6; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_593843F & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593843F = 1;
  }
  v3 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v8.fields.currentCryptoKey = v3;
  *(_QWORD *)&v8.fields.fakeValue = v4;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v8, 0);
  return CommandCardRankParamEntity__CreatePK(v5, this->fields.rank, v6);
}