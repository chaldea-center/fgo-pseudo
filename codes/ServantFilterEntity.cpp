void __fastcall ServantFilterEntity___ctor(ServantFilterEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A70586 & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_int___ctor__, method);
    byte_4A70586 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_312C3A8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantFilterEntity__CreatePrimaryKey(ServantFilterEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall ServantFilterEntity__IsEnable(ServantFilterEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_4A70584 & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, nowTime);
    byte_4A70584 = 1;
  }
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
  }
  return Time >= this->fields.startedAt && (this->fields.endedAt == 0 || Time <= this->fields.endedAt);
}


bool __fastcall ServantFilterEntity__IsEnableServant(
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
  if ( (byte_4A70585 & 1) == 0 )
  {
    this = (ServantFilterEntity_o *)sub_1B90010(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      *(_QWORD *)&svtId.fields.currentCryptoKey);
    byte_4A70585 = 1;
  }
  svtIds = v5->fields.svtIds;
  if ( svtIds && (int)*(_QWORD *)&svtIds->max_length >= 1 )
  {
    v7 = 0LL;
    v8 = 0LL;
    v9 = (unsigned int)*(_QWORD *)&svtIds->max_length - 1LL;
    while ( 1 )
    {
      if ( v8 >= svtIds->max_length )
        sub_1B90274(this, *(_QWORD *)&svtId.fields.currentCryptoKey);
      v10 = (char *)svtIds + v7;
      v12 = *((_QWORD *)v10 + 4);
      v11 = *((_QWORD *)v10 + 5);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = v12;
      *(_QWORD *)&v16.fields.fakeValue = v11;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v16, 0LL);
      *(_QWORD *)&v17.fields.currentCryptoKey = v4;
      *(_QWORD *)&v17.fields.fakeValue = v3;
      v14 = v13 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v17, 0LL);
      this = (ServantFilterEntity_o *)v14;
      if ( v14 || v9 == v8 )
        break;
      svtIds = v5->fields.svtIds;
      ++v8;
      v7 += 16LL;
      if ( !svtIds )
        sub_1B9026C(v14, *(_QWORD *)&svtId.fields.currentCryptoKey);
    }
  }
  else
  {
    LOBYTE(this) = 0;
  }
  return (char)this;
}