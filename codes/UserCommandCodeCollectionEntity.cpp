void __fastcall UserCommandCodeCollectionEntity___ctor(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16DDC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16DDC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserCommandCodeCollectionEntity___ctor_40770896(
        UserCommandCodeCollectionEntity_o *this,
        UserCommandCodeCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4B16DDD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, e, method);
    byte_4B16DDD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  if ( !e )
    sub_1BCAA3C(v5, v6);
  this->fields.userId = e->fields.userId;
  this->fields.commandCodeId = e->fields.commandCodeId;
  *(_QWORD *)&this->fields.status = *(_QWORD *)&e->fields.status;
  this->fields.createdAt = e->fields.createdAt;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserCommandCodeCollectionEntity___ctor_40771024(
        UserCommandCodeCollectionEntity_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1

  if ( (byte_4B16DDE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, userId, *(_QWORD *)&commandCodeId);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    byte_4B16DDE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  this->fields.commandCodeId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(commandCodeId, 0LL);
  this->fields.status = 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserCommandCodeCollectionEntity__CreatePK(
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  if ( (byte_4B16DDB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&commandCodeId, method);
    byte_4B16DDB = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           commandCodeId,
           (const MethodInfo_2F10FBC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserCommandCodeCollectionEntity__CreatePrimaryKey(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t userId; // x20
  __int64 v5; // x21
  __int64 v6; // x19
  int32_t v7; // w1
  const MethodInfo *v8; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4B16DDA & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B16DDA = 1;
  }
  userId = this->fields.userId;
  v5 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v10, 0LL);
  return UserCommandCodeCollectionEntity__CreatePK(userId, v7, v8);
}


int32_t __fastcall UserCommandCodeCollectionEntity__GetCommandCodeId(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B16DDF & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B16DDF = 1;
  }
  v5 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v7, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x0
  __int64 v17; // x0
  Il2CppObject *Entity; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v20; // x1
  __int64 v21; // x23
  __int64 v22; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B16DE2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, idList, titleList);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14, v15);
    byte_4B16DE2 = 1;
  }
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC(v5);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC(v5);
  Entity = **(Il2CppObject ***)(v17 + 184);
  if ( !Entity )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entity,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v22 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v24.fields.currentCryptoKey = v22;
  *(_QWORD *)&v24.fields.fakeValue = v21;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v24, 0LL);
  if ( !v23
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v23,
                   (int32_t)Entity,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_13:
    sub_1BCAA3C(Entity, idList);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x20
  __int64 v11; // x1
  int32_t v12; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4B16DE0 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v6, v7);
    byte_4B16DE0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( NetworkManager__get_UserId(0LL) != this->fields.userId || !this->fields.status )
    return 0;
  v10 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v11);
  return UserCommandCodeCollectionManager__IsNew(v12, 0LL);
}


void __fastcall UserCommandCodeCollectionEntity__SetOld(
        UserCommandCodeCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x20
  __int64 v11; // x1
  int32_t v12; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B16DE1 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v6, v7);
    byte_4B16DE1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( NetworkManager__get_UserId(0LL) == this->fields.userId && this->fields.status )
  {
    v10 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    *(_QWORD *)&v13.fields.currentCryptoKey = v10;
    *(_QWORD *)&v13.fields.fakeValue = v9;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v13, 0LL);
    if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v11);
    UserCommandCodeCollectionManager__SetOld(v12, 0LL);
  }
}