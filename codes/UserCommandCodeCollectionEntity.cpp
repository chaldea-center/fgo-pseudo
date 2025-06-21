void __fastcall UserCommandCodeCollectionEntity___ctor(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1D229 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1D229 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserCommandCodeCollectionEntity___ctor_42138044(
        UserCommandCodeCollectionEntity_o *this,
        UserCommandCodeCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4B1D22A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, e);
    byte_4B1D22A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
  if ( !e )
    sub_1BCB254(v5, v6);
  this->fields.userId = e->fields.userId;
  this->fields.commandCodeId = e->fields.commandCodeId;
  *(_QWORD *)&this->fields.status = *(_QWORD *)&e->fields.status;
  this->fields.createdAt = e->fields.createdAt;
}


void __fastcall UserCommandCodeCollectionEntity___ctor_42138172(
        UserCommandCodeCollectionEntity_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_4B1D22B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, userId);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B1D22B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.commandCodeId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(commandCodeId, 0LL);
  this->fields.status = 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserCommandCodeCollectionEntity__CreatePK(
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  if ( (byte_4B1D228 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&commandCodeId);
    byte_4B1D228 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           commandCodeId,
           (const MethodInfo_3018D34 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserCommandCodeCollectionEntity__CreatePrimaryKey(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  int64_t userId; // x20
  __int64 v4; // x21
  __int64 v5; // x19
  int32_t v6; // w1
  const MethodInfo *v7; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4B1D227 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B1D227 = 1;
  }
  userId = this->fields.userId;
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v9, 0LL);
  return UserCommandCodeCollectionEntity__CreatePK(userId, v6, v7);
}


int32_t __fastcall UserCommandCodeCollectionEntity__GetCommandCodeId(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4B1D22C & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B1D22C = 1;
  }
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v6, 0LL);
}


void __fastcall UserCommandCodeCollectionEntity__GetSkillInfo(
        UserCommandCodeCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        const MethodInfo *method)
{
  long double v5; // q0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 v14; // x0
  Il2CppObject *Entity; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x23
  __int64 v18; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B1D22F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommandCodeMaster___, idList);
    sub_1BCAFF8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v10);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12);
    byte_4B1D22F = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1B45C(v5);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1B45C(v5);
  Entity = **(Il2CppObject ***)(v14 + 184);
  if ( !Entity )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entity,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v18 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v18;
  *(_QWORD *)&v20.fields.fakeValue = v17;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v20, 0LL);
  if ( !v19
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v19,
                   (int32_t)Entity,
                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_13:
    sub_1BCB254(Entity, idList);
  }
  CommandCodeEntity__GetSkillInfo((CommandCodeEntity_o *)Entity, idList, titleList, explanationList, 0LL);
}


int64_t __fastcall UserCommandCodeCollectionEntity__GetUserId(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userId;
}


bool __fastcall UserCommandCodeCollectionEntity__IsFinded(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.status != 0;
}


bool __fastcall UserCommandCodeCollectionEntity__IsGet(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.status == 2;
}


bool __fastcall UserCommandCodeCollectionEntity__IsNew(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  NetworkManager_c *v5; // x0
  __int64 v6; // x19
  __int64 v7; // x20
  int32_t v8; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4B1D22D & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BCAFF8(&UserCommandCodeCollectionManager_TypeInfo, v4);
    byte_4B1D22D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B165D1 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  if ( v5->static_fields->userIdNumber != this->fields.userId || !this->fields.status )
    return 0;
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v10, 0LL);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  return UserCommandCodeCollectionManager__IsNew(v8, 0LL);
}


void __fastcall UserCommandCodeCollectionEntity__SetOld(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  NetworkManager_c *v5; // x0
  __int64 v6; // x19
  __int64 v7; // x20
  int32_t v8; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4B1D22E & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BCAFF8(&UserCommandCodeCollectionManager_TypeInfo, v4);
    byte_4B1D22E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B165D1 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  if ( v5->static_fields->userIdNumber == this->fields.userId && this->fields.status )
  {
    v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v7;
    *(_QWORD *)&v9.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v9, 0LL);
    if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    UserCommandCodeCollectionManager__SetOld(v8, 0LL);
  }
}