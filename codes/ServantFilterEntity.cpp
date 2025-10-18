void ServantFilterEntity___ctor(ServantFilterEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C438E2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_int___ctor__);
    byte_4C438E2 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_339EBBC *)Method_DataEntityBase_int___ctor__);
}


int32_t ServantFilterEntity__CreatePrimaryKey(ServantFilterEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool ServantFilterEntity__IsEnable(ServantFilterEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  if ( (byte_4C438E0 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C438E0 = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  return nowTime >= this->fields.startedAt && (this->fields.endedAt == 0 || nowTime <= this->fields.endedAt);
}


bool ServantFilterEntity__IsEnableServant(
        ServantFilterEntity_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  ServantFilterEntity_o *v5; // x21
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_array *svtIds; // x8
  __int64 v7; // x24
  unsigned __int64 v8; // x25
  __int64 v9; // x26
  char *v10; // x8
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t v13; // w22
  bool v14; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v3 = *(_QWORD *)&svtId.fields.fakeValue;
  v4 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  v5 = this;
  if ( (byte_4C438E1 & 1) == 0 )
  {
    this = (ServantFilterEntity_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C438E1 = 1;
  }
  svtIds = v5->fields.svtIds;
  if ( svtIds && (int)svtIds->max_length >= 1 )
  {
    v7 = 0;
    v8 = 0;
    v9 = (unsigned int)svtIds->max_length - 1LL;
    while ( 1 )
    {
      if ( v8 >= LODWORD(svtIds->max_length) )
        sub_1C372BC(this);
      v10 = (char *)svtIds + v7;
      v12 = *((_QWORD *)v10 + 4);
      v11 = *((_QWORD *)v10 + 5);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = v12;
      *(_QWORD *)&v16.fields.fakeValue = v11;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v16, 0);
      *(_QWORD *)&v17.fields.currentCryptoKey = v4;
      *(_QWORD *)&v17.fields.fakeValue = v3;
      v14 = v13 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v17, 0);
      this = (ServantFilterEntity_o *)v14;
      if ( v14 || v9 == v8 )
        break;
      svtIds = v5->fields.svtIds;
      ++v8;
      v7 += 16;
      if ( !svtIds )
        sub_1C372B4(v14);
    }
  }
  else
  {
    LOBYTE(this) = 0;
  }
  return (char)this;
}