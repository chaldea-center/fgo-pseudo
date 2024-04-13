void __fastcall ServantFilterEntity___ctor(ServantFilterEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAD62 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EAD62 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantFilterEntity__CreatePrimaryKey(ServantFilterEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall ServantFilterEntity__IsEnable(ServantFilterEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_42EAD60 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, nowTime, (_DWORD)method, v3);
    byte_42EAD60 = 1;
  }
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
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
  __int64 v7; // x9
  __int64 v8; // x24
  unsigned __int64 v9; // x25
  signed __int64 v10; // x26
  char *v11; // x8
  __int64 v12; // x22
  __int64 v13; // x23
  int32_t v14; // w22
  __int64 v15; // x1
  __int64 v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v3 = *(_QWORD *)&svtId.fields.fakeValue;
  v4 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  v5 = this;
  if ( (byte_42EAD61 & 1) == 0 )
  {
    this = (ServantFilterEntity_o *)sub_B5D5C4(
                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      svtId.fields.currentCryptoKey,
                                      svtId.fields.fakeValue,
                                      method);
    byte_42EAD61 = 1;
  }
  svtIds = v5->fields.svtIds;
  if ( !svtIds )
    return 0;
  v7 = *(_QWORD *)&svtIds->max_length;
  if ( (int)v7 < 1 )
    return 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = (int)v7;
  while ( 1 )
  {
    if ( v9 >= svtIds->max_length )
    {
      v17 = sub_B5D6C8(this);
      sub_B5D668(v17, 0LL);
    }
    v11 = (char *)svtIds + v8;
    v13 = *((_QWORD *)v11 + 4);
    v12 = *((_QWORD *)v11 + 5);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v18.fields.currentCryptoKey = v13;
    *(_QWORD *)&v18.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v18, 0LL);
    *(_QWORD *)&v19.fields.currentCryptoKey = v4;
    *(_QWORD *)&v19.fields.fakeValue = v3;
    this = (ServantFilterEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v19, 0LL);
    if ( v14 == (_DWORD)this )
      break;
    if ( (__int64)++v9 >= v10 )
      return 0;
    svtIds = v5->fields.svtIds;
    v8 += 16LL;
    if ( !svtIds )
      sub_B5D69C(this, v15);
  }
  return 1;
}