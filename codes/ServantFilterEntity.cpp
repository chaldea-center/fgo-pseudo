void ServantFilterEntity___ctor(ServantFilterEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939024 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5939024 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t ServantFilterEntity__CreatePrimaryKey(ServantFilterEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool ServantFilterEntity__IsEnable(ServantFilterEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20
  int64_t endedAt; // x8

  Time = nowTime;
  if ( (byte_5939022 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5939022 = 1;
  }
  if ( !Time )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0);
  }
  if ( Time < this->fields.startedAt )
    return 0;
  endedAt = this->fields.endedAt;
  return !endedAt || Time <= endedAt;
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
  il2cpp_array_size_t max_length; // x8
  __int64 v8; // x24
  unsigned __int64 v9; // x25
  __int64 v10; // x27
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_array *v11; // x8
  char *v12; // x8
  __int64 v13; // x22
  __int64 v14; // x23
  int32_t v15; // w22
  bool v16; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v3 = *(_QWORD *)&svtId.fields.fakeValue;
  v4 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  v5 = this;
  if ( (byte_5939023 & 1) == 0 )
  {
    this = (ServantFilterEntity_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939023 = 1;
  }
  svtIds = v5->fields.svtIds;
  if ( svtIds && (max_length = svtIds->max_length, (int)max_length >= 1) )
  {
    v8 = 0;
    v9 = 0;
    v10 = (unsigned int)max_length - 1LL;
    do
    {
      v11 = v5->fields.svtIds;
      if ( !v11 )
        sub_21FFECC(this, *(_QWORD *)&svtId.fields.currentCryptoKey);
      if ( v9 >= LODWORD(v11->max_length) )
        sub_21FFED4(this);
      v12 = (char *)v11 + v8;
      v13 = *((_QWORD *)v12 + 4);
      v14 = *((_QWORD *)v12 + 5);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
          *(_QWORD *)&svtId.fields.currentCryptoKey);
      *(_QWORD *)&v18.fields.currentCryptoKey = v13;
      *(_QWORD *)&v18.fields.fakeValue = v14;
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v18, 0);
      *(_QWORD *)&v19.fields.currentCryptoKey = v4;
      *(_QWORD *)&v19.fields.fakeValue = v3;
      v16 = v15 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v19, 0);
      this = (ServantFilterEntity_o *)v16;
      if ( v16 )
        break;
      v16 = v10 == v9++;
      v8 += 16;
    }
    while ( !v16 );
  }
  else
  {
    LOBYTE(this) = 0;
  }
  return (char)this;
}