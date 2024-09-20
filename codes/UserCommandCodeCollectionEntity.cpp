void __fastcall UserCommandCodeCollectionEntity___ctor(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5BD27 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BD27 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserCommandCodeCollectionEntity___ctor_40041148(
        UserCommandCodeCollectionEntity_o *this,
        UserCommandCodeCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5BD28 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BD28 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  if ( !e )
    sub_1B8880C(v5, v6);
  this->fields.userId = e->fields.userId;
  this->fields.commandCodeId = e->fields.commandCodeId;
  *(_QWORD *)&this->fields.status = *(_QWORD *)&e->fields.status;
  this->fields.createdAt = e->fields.createdAt;
}


void __fastcall UserCommandCodeCollectionEntity___ctor_40041276(
        UserCommandCodeCollectionEntity_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  if ( (byte_4A5BD29 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BD29 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.commandCodeId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(commandCodeId, 0LL);
  this->fields.status = 0;
}


System_String_o *__fastcall UserCommandCodeCollectionEntity__CreatePK(
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  if ( (byte_4A5BD26 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4A5BD26 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           commandCodeId,
           (const MethodInfo_2E7DC34 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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

  if ( (byte_4A5BD25 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BD25 = 1;
  }
  userId = this->fields.userId;
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
  return UserCommandCodeCollectionEntity__CreatePK(userId, v6, v7);
}


int32_t __fastcall UserCommandCodeCollectionEntity__GetCommandCodeId(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A5BD2A & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5BD2A = 1;
  }
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
}


void __fastcall UserCommandCodeCollectionEntity__GetSkillInfo(
        UserCommandCodeCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x0
  Il2CppObject *Entity; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x23
  __int64 v14; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5BD2D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5BD2D = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  Entity = **(Il2CppObject ***)(v10 + 184);
  if ( !Entity )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entity,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v14 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v14;
  *(_QWORD *)&v16.fields.fakeValue = v13;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  if ( !v15
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v15,
                   (int32_t)Entity,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_13:
    sub_1B8880C(Entity, idList);
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
  __int64 v3; // x19
  __int64 v4; // x20
  int32_t v5; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4A5BD2B & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&UserCommandCodeCollectionManager_TypeInfo);
    byte_4A5BD2B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( NetworkManager__get_UserId(0LL) != this->fields.userId || !this->fields.status )
    return 0;
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v4;
  *(_QWORD *)&v7.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v7, 0LL);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  return UserCommandCodeCollectionManager__IsNew(v5, 0LL);
}


void __fastcall UserCommandCodeCollectionEntity__SetOld(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  int32_t v5; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A5BD2C & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&UserCommandCodeCollectionManager_TypeInfo);
    byte_4A5BD2C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( NetworkManager__get_UserId(0LL) == this->fields.userId && this->fields.status )
  {
    v4 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
    v3 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v6.fields.currentCryptoKey = v4;
    *(_QWORD *)&v6.fields.fakeValue = v3;
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
    if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    UserCommandCodeCollectionManager__SetOld(v5, 0LL);
  }
}