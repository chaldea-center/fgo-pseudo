void UserCommandCodeCollectionEntity___ctor(UserCommandCodeCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8167 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC8167 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


void UserCommandCodeCollectionEntity___ctor_43285612(
        UserCommandCodeCollectionEntity_o *this,
        UserCommandCodeCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CC8168 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC8168 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
  if ( !e )
    sub_1C71608(v5, v6);
  this->fields.userId = e->fields.userId;
  this->fields.commandCodeId = e->fields.commandCodeId;
  *(_QWORD *)&this->fields.status = *(_QWORD *)&e->fields.status;
  this->fields.createdAt = e->fields.createdAt;
}


void UserCommandCodeCollectionEntity___ctor_43285740(
        UserCommandCodeCollectionEntity_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  if ( (byte_4CC8169 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC8169 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.commandCodeId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(commandCodeId, 0);
  this->fields.status = 0;
}


System_String_o *UserCommandCodeCollectionEntity__CreatePK(
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  if ( (byte_4CC8166 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4CC8166 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           commandCodeId,
           (const MethodInfo_314939C *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserCommandCodeCollectionEntity__CreatePrimaryKey(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  int64_t userId; // x20
  __int64 v4; // x21
  __int64 v5; // x19
  int32_t v6; // w1
  const MethodInfo *v7; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4CC8165 & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC8165 = 1;
  }
  userId = this->fields.userId;
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v9, 0);
  return UserCommandCodeCollectionEntity__CreatePK(userId, v6, v7);
}


int32_t UserCommandCodeCollectionEntity__GetCommandCodeId(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4CC816A & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC816A = 1;
  }
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v6, 0);
}


void UserCommandCodeCollectionEntity__GetSkillInfo(
        UserCommandCodeCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        const MethodInfo *method)
{
  long double v5; // q0
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *Entity; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x23
  __int64 v15; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4CC816D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C713B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4CC816D = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C47444(v5);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C47444(v5);
  Entity = **(Il2CppObject ***)(v11 + 184);
  if ( !Entity )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entity,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v15 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v15;
  *(_QWORD *)&v17.fields.fakeValue = v14;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v17, 0);
  if ( !v16
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v16,
                   (int32_t)Entity,
                   (const MethodInfo_3408E80 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_13:
    sub_1C71608(Entity, idList);
  }
  CommandCodeEntity__GetSkillInfo((CommandCodeEntity_o *)Entity, idList, titleList, explanationList, 0);
}


int64_t UserCommandCodeCollectionEntity__GetUserId(UserCommandCodeCollectionEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


bool UserCommandCodeCollectionEntity__IsFinded(UserCommandCodeCollectionEntity_o *this, const MethodInfo *method)
{
  return this->fields.status != 0;
}


bool UserCommandCodeCollectionEntity__IsGet(UserCommandCodeCollectionEntity_o *this, const MethodInfo *method)
{
  return this->fields.status == 2;
}


bool UserCommandCodeCollectionEntity__IsNew(UserCommandCodeCollectionEntity_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  __int64 v4; // x19
  __int64 v5; // x20
  int32_t v6; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4CC816B & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&UserCommandCodeCollectionManager_TypeInfo);
    byte_4CC816B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  if ( v3->static_fields->userIdNumber != this->fields.userId || !this->fields.status )
    return 0;
  v5 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v5;
  *(_QWORD *)&v8.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v8, 0);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  return UserCommandCodeCollectionManager__IsNew(v6, 0);
}


void UserCommandCodeCollectionEntity__SetOld(UserCommandCodeCollectionEntity_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  __int64 v4; // x19
  __int64 v5; // x20
  int32_t v6; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4CC816C & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&UserCommandCodeCollectionManager_TypeInfo);
    byte_4CC816C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  if ( v3->static_fields->userIdNumber == this->fields.userId && this->fields.status )
  {
    v5 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
    v4 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v7.fields.currentCryptoKey = v5;
    *(_QWORD *)&v7.fields.fakeValue = v4;
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v7, 0);
    if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    UserCommandCodeCollectionManager__SetOld(v6, 0);
  }
}