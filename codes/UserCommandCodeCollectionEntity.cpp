void UserCommandCodeCollectionEntity___ctor(UserCommandCodeCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593946C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_593946C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


void UserCommandCodeCollectionEntity___ctor_49956736(
        UserCommandCodeCollectionEntity_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v8; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // kr00_16

  if ( (byte_593946D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593946D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  this->fields.userId = userId;
  if ( !*(&v8->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v8, v7);
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(commandCodeId, 0);
  this->fields.status = 0;
  this->fields.commandCodeId = v9;
}


System_String_o *UserCommandCodeCollectionEntity__CreatePK(
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  if ( (byte_593946B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_593946B = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           commandCodeId,
           (const MethodInfo_3821070 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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

  if ( (byte_593946A & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593946A = 1;
  }
  userId = this->fields.userId;
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v9, 0);
  return UserCommandCodeCollectionEntity__CreatePK(userId, v6, v7);
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
  __int64 v14; // x1
  __int64 v15; // x23
  __int64 v16; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_5939470 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_5939470 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_2237AF8(v5);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_2237AF8(v5);
  Entity = **(Il2CppObject ***)(v11 + 184);
  if ( !Entity )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entity,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v15 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v16;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v18, 0);
  if ( !v17
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v17,
                   (int32_t)Entity,
                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_13:
    sub_21FFECC(Entity, idList);
  }
  CommandCodeEntity__GetSkillInfo((CommandCodeEntity_o *)Entity, idList, titleList, explanationList, 0);
}


bool UserCommandCodeCollectionEntity__IsNew(UserCommandCodeCollectionEntity_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  __int64 v4; // x19
  __int64 v5; // x20
  __int64 v6; // x1
  int32_t v7; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_593946E & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&UserCommandCodeCollectionManager_TypeInfo);
    byte_593946E = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v3 = NetworkManager_TypeInfo;
  }
  if ( v3->static_fields->userIdNumber != this->fields.userId || !this->fields.status )
    return 0;
  v5 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v4;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v9, 0);
  if ( !*(&UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v6);
  return UserCommandCodeCollectionManager__IsNew(v7, 0);
}


void UserCommandCodeCollectionEntity__SetOld(UserCommandCodeCollectionEntity_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  __int64 v4; // x19
  __int64 v5; // x20
  __int64 v6; // x1
  int32_t v7; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_593946F & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&UserCommandCodeCollectionManager_TypeInfo);
    byte_593946F = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v3 = NetworkManager_TypeInfo;
  }
  if ( v3->static_fields->userIdNumber == this->fields.userId && this->fields.status )
  {
    v5 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
    v4 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v8.fields.currentCryptoKey = v5;
    *(_QWORD *)&v8.fields.fakeValue = v4;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v8, 0);
    if ( !*(&UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v6);
    UserCommandCodeCollectionManager__SetOld(v7, 0);
  }
}