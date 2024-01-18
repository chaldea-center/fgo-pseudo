void __fastcall UserServantCollectionEntity___ctor(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4185E76 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4185E76 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserServantCollectionEntity___ctor_21609996(
        UserServantCollectionEntity_o *this,
        UserServantCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Int32_array *tdPlayed; // x1

  if ( (byte_4185E77 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, e);
    byte_4185E77 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
  if ( !e )
    sub_B2C434(v5, v6);
  this->fields.userId = e->fields.userId;
  this->fields.svtId = e->fields.svtId;
  this->fields.status = e->fields.status;
  this->fields.maxLv = e->fields.maxLv;
  this->fields.maxHp = e->fields.maxHp;
  this->fields.maxAtk = e->fields.maxAtk;
  this->fields.maxLimitCount = e->fields.maxLimitCount;
  this->fields.skillLv1 = e->fields.skillLv1;
  this->fields.skillLv2 = e->fields.skillLv2;
  this->fields.skillLv3 = e->fields.skillLv3;
  this->fields.treasureDeviceLv1 = e->fields.treasureDeviceLv1;
  this->fields.svtCommonFlag = e->fields.svtCommonFlag;
  this->fields.flag = e->fields.flag;
  this->fields.friendship = e->fields.friendship;
  this->fields.friendshipRank = e->fields.friendshipRank;
  this->fields.voicePlayed = e->fields.voicePlayed;
  this->fields.voicePlayed2 = e->fields.voicePlayed2;
  tdPlayed = e->fields.tdPlayed;
  this->fields.tdPlayed = tdPlayed;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tdPlayed,
    (System_Int32_array **)tdPlayed,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.createdAt = e->fields.createdAt;
}


void __fastcall UserServantCollectionEntity___ctor_21610256(
        UserServantCollectionEntity_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int128 v8; // q0

  if ( (byte_4185E78 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, userId);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4185E78 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  *(_QWORD *)&v8 = 0x100000001LL;
  *((_QWORD *)&v8 + 1) = 0x100000001LL;
  this->fields.status = 0;
  *(_OWORD *)&this->fields.skillLv1 = v8;
  this->fields.svtCommonFlag = 0;
  this->fields.friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
}


bool __fastcall UserServantCollectionEntity__CheckSvtCommonFlag(
        int32_t svtCommonFlag,
        int32_t flagKind,
        const MethodInfo *method)
{
  return (flagKind & svtCommonFlag) != 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserServantCollectionEntity__CreatePK(
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_4185E75 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&svtId);
    byte_4185E75 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_1732A38 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserServantCollectionEntity__CreatePrimaryKey(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  int64_t userId; // x19
  __int64 v4; // x21
  __int64 v5; // x20
  int32_t v6; // w1
  const MethodInfo *v7; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4185E74 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185E74 = 1;
  }
  userId = this->fields.userId;
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v9, 0LL);
  return UserServantCollectionEntity__CreatePK(userId, v6, v7);
}


void __fastcall UserServantCollectionEntity__GetAppendPassiveSkillInfo(
        UserServantCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x26
  __int64 v17; // x27
  ServantAppendPassiveSkillMaster_o *v18; // x25
  __int64 v19; // x0
  __int64 v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4185E8F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, idList);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    byte_4185E8F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (ServantAppendPassiveSkillMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v17;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v21, 0LL);
  if ( !v18 )
    sub_B2C434(v19, v20);
  ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
    v18,
    idList,
    titleList,
    explanationList,
    releaseStateList,
    lvList,
    v19,
    this->fields.userId,
    0LL,
    0LL);
}


System_Int32_array *__fastcall UserServantCollectionEntity__GetCommandCardParam(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0

  result = (System_Int32_array *)UserServantCollectionEntity__GetUserCommandCardEntity(this, method);
  if ( result )
    return *(System_Int32_array **)&result->m_Items[13];
  return result;
}


System_Collections_Generic_List_int__o *__fastcall UserServantCollectionEntity__GetSkillChangeCostumeList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_T__o *EntryListFromCondType; // x20
  System_Collections_Generic_List_int__o *v15; // x21
  struct System_Int32_array *costumeIds; // x24
  unsigned __int64 v17; // x25
  __int64 v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x23
  __int64 v28; // x0

  if ( (byte_4185E8E & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_ServantSkillReleaseEntity___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___, v3);
    sub_B2C35C(&Method_System_Func_ServantSkillReleaseEntity__bool___ctor__, v4);
    sub_B2C35C(&System_Func_ServantSkillReleaseEntity__bool__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_UserServantCollectionEntity___c__DisplayClass61_0__GetSkillChangeCostumeList_b__0__, v10);
    sub_B2C35C(&UserServantCollectionEntity___c__DisplayClass61_0_TypeInfo, v11);
    byte_4185E8E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
  if ( !Instance )
    goto LABEL_15;
  EntryListFromCondType = (System_Collections_Generic_List_T__o *)ServantSkillReleaseMaster__GetEntryListFromCondType(
                                                                    (ServantSkillReleaseMaster_o *)Instance,
                                                                    70,
                                                                    0LL);
  v15 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    goto LABEL_15;
  if ( (int)costumeIds->max_length >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      v18 = sub_B2C42C(UserServantCollectionEntity___c__DisplayClass61_0_TypeInfo);
      UserServantCollectionEntity___c__DisplayClass61_0___ctor(
        (UserServantCollectionEntity___c__DisplayClass61_0_o *)v18,
        0LL);
      if ( !v18 )
        break;
      *(_QWORD *)(v18 + 24) = this;
      sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
      if ( v17 >= costumeIds->max_length )
      {
        v28 = sub_B2C460(v25);
        sub_B2C400(v28, 0LL);
      }
      *(_DWORD *)(v18 + 16) = costumeIds->m_Items[v17 + 1];
      v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ServantSkillReleaseEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v26,
        (Il2CppObject *)v18,
        Method_UserServantCollectionEntity___c__DisplayClass61_0__GetSkillChangeCostumeList_b__0__,
        (const MethodInfo_2711C04 *)Method_System_Func_ServantSkillReleaseEntity__bool___ctor__);
      Instance = (DataManager_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                    EntryListFromCondType,
                                    (System_Func_T__bool__o *)v26,
                                    (const MethodInfo_17266AC *)Method_BasicHelper_Any_ServantSkillReleaseEntity___);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v15 )
          break;
        System_Collections_Generic_List_int___Add(
          v15,
          *(_DWORD *)(v18 + 16),
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v17 >= (int)costumeIds->max_length )
        return v15;
    }
LABEL_15:
    sub_B2C434(Instance, v13);
  }
  return v15;
}


UserServantCommandCardEntity_o *__fastcall UserServantCollectionEntity__GetUserCommandCardEntity(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x20
  DataManager_o *v7; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t userId; // x20
  __int64 v10; // x22
  __int64 v11; // x21
  UserServantCommandCardMaster_o *v12; // x19
  const MethodInfo *v13; // x4
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4185E8B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_4185E8B = 1;
  }
  entity = 0LL;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AC505C(v6);
  v7 = **(DataManager_o ***)(v6 + 184);
  if ( !v7 )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v7,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  userId = this->fields.userId;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (UserServantCommandCardMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v11;
  v7 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v16, 0LL);
  if ( !v12 )
LABEL_13:
    sub_B2C434(v7, method);
  UserServantCommandCardMaster__TryGetEntity(v12, &entity, userId, (int)v7, v13);
  return entity;
}


bool __fastcall UserServantCollectionEntity__HasFlag(
        UserServantCollectionEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  return (this->fields.flag & type) != 0;
}


bool __fastcall UserServantCollectionEntity__IsCostumeGet(
        UserServantCollectionEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  struct System_Int32_array *costumeIds; // x10
  int max_length; // w8
  __int64 v5; // x9
  int32_t *v6; // x10

  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0;
  max_length = costumeIds->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0LL;
  v6 = &costumeIds->m_Items[1];
  while ( v6[v5] != costumeId )
  {
    if ( (int)++v5 >= max_length )
      return 0;
  }
  return 1;
}


bool __fastcall UserServantCollectionEntity__IsDataLostStateServant(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x19
  DataManager_o *v14; // x19
  __int64 v16; // x20
  __int64 v17; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4185E8C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4185E8C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL);
  if ( !v13 )
    goto LABEL_18;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v13,
                                (int32_t)Instance,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_18;
  v14 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v17 = **(_QWORD **)(v16 + 192);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AC505C(v17);
  Instance = **(DataManager_o ***)(v17 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_18:
    sub_B2C434(Instance, v9);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_29196388(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v14[1].fields.masterCheckName,
           0LL) == 1;
}


bool __fastcall UserServantCollectionEntity__IsFinded(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  return this->fields.status != 0;
}


bool __fastcall UserServantCollectionEntity__IsGet(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  return this->fields.status == 2;
}


bool __fastcall UserServantCollectionEntity__IsHideStateServant(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x19
  DataManager_o *v14; // x19
  __int64 v16; // x20
  __int64 v17; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4185E8D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4185E8D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL);
  if ( !v13 )
    goto LABEL_18;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v13,
                                (int32_t)Instance,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_18;
  v14 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v17 = **(_QWORD **)(v16 + 192);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AC505C(v17);
  Instance = **(DataManager_o ***)(v17 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_18:
    sub_B2C434(Instance, v9);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_29196388(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v14[1].fields.masterCheckName,
           0LL) == 2;
}


bool __fastcall UserServantCollectionEntity__IsLevelMax(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  return UserServantCollectionEntity__getLevelMax(this, method) == this->fields.maxLv;
}


bool __fastcall UserServantCollectionEntity__IsLimitCountMax(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  return UserServantCollectionEntity__getLimitCountMax(this, method) == this->fields.maxLimitCount;
}


bool __fastcall UserServantCollectionEntity__IsModifySvtCommonFlag(
        UserServantCollectionEntity_o *this,
        int32_t value,
        const MethodInfo *method)
{
  return this->fields.svtCommonFlag != value;
}


bool __fastcall UserServantCollectionEntity__IsNew(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t status; // w8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x23
  int32_t *p_fakeValue; // x19
  void *Instance; // x0
  __int64 v13; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x21
  __int64 v16; // t1
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x20
  __int64 v18; // x22
  __int64 v19; // x20
  __int64 v20; // x21
  const MethodInfo *v21; // x1
  int32_t v22; // w20
  WarQuestSelectionMaster_o *v25; // x0
  __int64 v26; // x21
  __int64 v27; // x20
  ServantCommentMaster_o *v28; // x19
  System_Int32_array *priorityList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4185E7B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&UserServantCollectionManager_TypeInfo, v8);
    byte_4185E7B = 1;
  }
  idList = 0LL;
  priorityList = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( NetworkManager__get_UserId(0LL) != this->fields.userId )
    return 0;
  status = this->fields.status;
  if ( !status )
    return 0;
  if ( status != 2 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    p_fakeValue = &this->fields.svtId.fields.fakeValue;
    v15 = v16;
    v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    p_svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(p_fakeValue - 2);
    v18 = *((_QWORD *)p_fakeValue - 1);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v31.fields.currentCryptoKey = v18;
    *(_QWORD *)&v31.fields.fakeValue = v15;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v31, 0LL);
    if ( !v17 )
      goto LABEL_33;
    Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v17,
                 (int32_t)Instance,
                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_33;
    if ( SvtType__IsEnemyCollectionDetail(*((_DWORD *)Instance + 21), 0LL) )
      goto LABEL_17;
    return 0;
  }
  p_svtId = &this->fields.svtId;
  p_fakeValue = &this->fields.svtId.fields.fakeValue;
LABEL_17:
  v19 = *(_QWORD *)&p_svtId->fields.currentCryptoKey;
  v20 = *(_QWORD *)p_fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v19;
  *(_QWORD *)&v32.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  if ( !UserServantCollectionManager__IsNew(v22, v21) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v25 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)Instance,
              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
      v26 = *(_QWORD *)&p_svtId->fields.currentCryptoKey;
      v27 = *(_QWORD *)p_fakeValue;
      v28 = (ServantCommentMaster_o *)v25;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v33.fields.currentCryptoKey = v26;
      *(_QWORD *)&v33.fields.fakeValue = v27;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v33, 0LL);
      if ( v28 )
        return ServantCommentMaster__GetNewList(v28, &idList, &priorityList, (int32_t)Instance, 0LL);
    }
LABEL_33:
    sub_B2C434(Instance, v13);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionEntity__IsPlayed(
        UserServantCollectionEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t voicePlayed; // x8
  UserServantVoicePlayedEntity_o *userServantVoicePlayedEntity; // x0
  UserServantVoicePlayedEntity_o **p_userServantVoicePlayedEntity; // x20
  UserServantVoicePlayedMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  __int64 v14; // x23
  __int64 v15; // x24
  int64_t v16; // x21
  __int64 v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4185E85 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___, *(_QWORD *)&flagNum);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4185E85 = 1;
  }
  if ( flagNum <= 63 )
  {
    voicePlayed = this->fields.voicePlayed;
    return (voicePlayed & (1LL << flagNum)) != 0;
  }
  if ( flagNum <= 127 )
  {
    voicePlayed = this->fields.voicePlayed2;
    return (voicePlayed & (1LL << flagNum)) != 0;
  }
  p_userServantVoicePlayedEntity = &this->fields.userServantVoicePlayedEntity;
  userServantVoicePlayedEntity = this->fields.userServantVoicePlayedEntity;
  if ( userServantVoicePlayedEntity )
    return UserServantVoicePlayedEntity__IsPlayed(userServantVoicePlayedEntity, flagNum, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantVoicePlayedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = UserId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                     v18,
                                                                     0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B2C434(userServantVoicePlayedEntity, v17);
  if ( UserServantVoicePlayedMaster__TryGetEntity(
         Master_WarQuestSelectionMaster,
         p_userServantVoicePlayedEntity,
         v16,
         (int32_t)userServantVoicePlayedEntity,
         0LL) )
  {
    userServantVoicePlayedEntity = *p_userServantVoicePlayedEntity;
    if ( *p_userServantVoicePlayedEntity )
      return UserServantVoicePlayedEntity__IsPlayed(userServantVoicePlayedEntity, flagNum, 0LL);
    goto LABEL_23;
  }
  return 0;
}


void __fastcall UserServantCollectionEntity__SetOld(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t status; // w8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x23
  int32_t *p_fakeValue; // x19
  void *Instance; // x0
  __int64 v12; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x21
  __int64 v15; // t1
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x20
  __int64 v17; // x22
  __int64 v18; // x20
  __int64 v19; // x19
  const MethodInfo *v20; // x1
  int32_t v21; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4185E7C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&UserServantCollectionManager_TypeInfo, v7);
    byte_4185E7C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( NetworkManager__get_UserId(0LL) == this->fields.userId )
  {
    status = this->fields.status;
    if ( status )
    {
      if ( status == 2 )
      {
        p_svtId = &this->fields.svtId;
        p_fakeValue = &this->fields.svtId.fields.fakeValue;
LABEL_17:
        v18 = *(_QWORD *)&p_svtId->fields.currentCryptoKey;
        v19 = *(_QWORD *)p_fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v23.fields.currentCryptoKey = v18;
        *(_QWORD *)&v23.fields.fakeValue = v19;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v23, 0LL);
        if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        }
        UserServantCollectionManager__SetOld(v21, v20);
        return;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      p_fakeValue = &this->fields.svtId.fields.fakeValue;
      v14 = v15;
      v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
      p_svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(p_fakeValue - 2);
      v17 = *((_QWORD *)p_fakeValue - 1);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v22.fields.currentCryptoKey = v17;
      *(_QWORD *)&v22.fields.fakeValue = v14;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22, 0LL);
      if ( !v16
        || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         v16,
                         (int32_t)Instance,
                         (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
      {
LABEL_25:
        sub_B2C434(Instance, v12);
      }
      if ( SvtType__IsEnemyCollectionDetail(*((_DWORD *)Instance + 21), 0LL) )
        goto LABEL_17;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionEntity__SetPlayed(
        UserServantCollectionEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserServantVoicePlayedEntity_o *userServantVoicePlayedEntity; // x0
  UserServantVoicePlayedEntity_o **p_userServantVoicePlayedEntity; // x21
  UserServantVoicePlayedMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  __int64 v12; // x23
  __int64 v13; // x24
  int64_t v14; // x20
  __int64 v15; // x1
  int64_t voicePlayed; // x8
  int64_t voicePlayed2; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4185E86 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___, *(_QWORD *)&flagNum);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4185E86 = 1;
  }
  if ( flagNum <= 63 )
  {
    voicePlayed = this->fields.voicePlayed;
    if ( (voicePlayed & (1LL << flagNum)) != 0 )
      return 0;
    this->fields.voicePlayed = voicePlayed | (1LL << flagNum);
  }
  else
  {
    if ( flagNum > 127 )
    {
      p_userServantVoicePlayedEntity = &this->fields.userServantVoicePlayedEntity;
      userServantVoicePlayedEntity = this->fields.userServantVoicePlayedEntity;
      if ( userServantVoicePlayedEntity )
        return UserServantVoicePlayedEntity__SetPlayed(userServantVoicePlayedEntity, flagNum, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserServantVoicePlayedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v14 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v19.fields.currentCryptoKey = v13;
      *(_QWORD *)&v19.fields.fakeValue = v12;
      userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                         v19,
                                                                         0LL);
      if ( !Master_WarQuestSelectionMaster )
LABEL_25:
        sub_B2C434(userServantVoicePlayedEntity, v15);
      if ( UserServantVoicePlayedMaster__TryGetEntity(
             Master_WarQuestSelectionMaster,
             p_userServantVoicePlayedEntity,
             v14,
             (int32_t)userServantVoicePlayedEntity,
             0LL) )
      {
        userServantVoicePlayedEntity = *p_userServantVoicePlayedEntity;
        if ( *p_userServantVoicePlayedEntity )
          return UserServantVoicePlayedEntity__SetPlayed(userServantVoicePlayedEntity, flagNum, 0LL);
        goto LABEL_25;
      }
      return 1;
    }
    voicePlayed2 = this->fields.voicePlayed2;
    if ( (voicePlayed2 & (1LL << flagNum)) != 0 )
      return 0;
    this->fields.voicePlayed2 = voicePlayed2 | (1LL << flagNum);
  }
  return 1;
}


bool __fastcall UserServantCollectionEntity__getCollectionStatus(
        UserServantCollectionEntity_o *this,
        int32_t *lv,
        int32_t *hp,
        int32_t *atk,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x24
  __int64 v18; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x23
  _DWORD *v20; // x23
  WarQuestSelectionMaster_o *v21; // x0
  __int64 v22; // x25
  __int64 v23; // x26
  ServantLimitMaster_o *v24; // x24
  _DWORD *v25; // x22
  int32_t v26; // w8
  int v27; // w8
  __int64 v28; // x9
  int v29; // w8
  int v30; // w10
  bool result; // w0
  __int64 v32; // x9
  int32_t v33; // w8
  int32_t status; // w28
  WarQuestSelectionMaster_o *v35; // x0
  __int64 v36; // x24
  __int64 v37; // x25
  ServantLimitMaster_o *v38; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4185E7D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExpMaster___, lv);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4185E7D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v39.fields.currentCryptoKey = v18;
  *(_QWORD *)&v39.fields.fakeValue = v17;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v39, 0LL);
  if ( !v19 )
    goto LABEL_38;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v19,
               (int32_t)Instance,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_38;
  v20 = Instance;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
  {
    status = this->fields.status;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v35 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)Instance,
              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      v37 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v36 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v38 = (ServantLimitMaster_o *)v35;
      if ( status == 2 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v41.fields.currentCryptoKey = v37;
        *(_QWORD *)&v41.fields.fakeValue = v36;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v41, 0LL);
        if ( v38 )
        {
          Instance = ServantLimitMaster__GetEntity(v38, (int32_t)Instance, v20[22], 0LL);
          if ( Instance )
          {
            *lv = *((_DWORD *)Instance + 7);
            *atk = *((_DWORD *)Instance + 12);
            v33 = *((_DWORD *)Instance + 10);
            result = 1;
            goto LABEL_37;
          }
        }
      }
      else
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v42.fields.currentCryptoKey = v37;
        *(_QWORD *)&v42.fields.fakeValue = v36;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v42, 0LL);
        if ( v38 )
        {
          Instance = ServantLimitMaster__GetEntity(v38, (int32_t)Instance, 0, 0LL);
          *lv = 1;
          if ( Instance )
          {
            *atk = *((_DWORD *)Instance + 11);
            v33 = *((_DWORD *)Instance + 9);
            result = 0;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_38:
    sub_B2C434(Instance, v15);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v21 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v24 = (ServantLimitMaster_o *)v21;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v40.fields.currentCryptoKey = v23;
  *(_QWORD *)&v40.fields.fakeValue = v22;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v40, 0LL);
  if ( !v24 )
    goto LABEL_38;
  Instance = ServantLimitMaster__GetEntity(v24, (int32_t)Instance, this->fields.maxLimitCount, 0LL);
  if ( !Instance )
    goto LABEL_38;
  v25 = Instance;
  v26 = *((_DWORD *)Instance + 6) == 4 ? 80 : 70;
  *lv = v26;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Instance )
    goto LABEL_38;
  Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, v20[33], *lv, 0LL);
  if ( !Instance )
    goto LABEL_38;
  v27 = v25[11];
  v28 = 274877907LL * *((_DWORD *)Instance + 7) * (v25[12] - v27);
  *atk = (v28 >> 38) + ((unsigned __int64)v28 >> 63) + v27;
  v29 = v25[9];
  v30 = *((_DWORD *)Instance + 7);
  result = 1;
  v32 = 274877907LL * v30 * (v25[10] - v29);
  v33 = (v32 >> 38) + ((unsigned __int64)v32 >> 63) + v29;
LABEL_37:
  *hp = v33;
  return result;
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCommandCodeIdList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t userId; // x20
  __int64 v9; // x22
  __int64 v10; // x21
  WarQuestSelectionMaster_o *v11; // x19
  const MethodInfo *v12; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4185E89 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4185E89 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v14, 0LL);
  if ( !v11 )
LABEL_9:
    sub_B2C434(Instance, v6);
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           userId,
           (int32_t)Instance,
           v12);
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCostumeList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct System_Int32_array *costumeIds; // x8
  __int64 v18; // x22
  __int64 Instance; // x0
  __int64 v20; // x1
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x19
  unsigned __int64 v23; // x25
  signed __int64 v24; // x26
  struct System_Int32_array *v25; // x8
  int32_t v26; // w22
  __int64 v27; // x23
  __int64 v28; // x24
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__49_0; // x20
  Il2CppObject *v31; // x21
  struct UserServantCollectionEntity___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int size; // w21
  System_Int32_array *v40; // x20
  __int64 v41; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x8
  __int64 v44; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4185E87 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_ServantCostumeEntity___ctor__, method);
    sub_B2C35C(&System_Comparison_ServantCostumeEntity__TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&Method_UserServantCollectionEntity___c__getCostumeList_b__49_0__, v15);
    sub_B2C35C(&UserServantCollectionEntity___c_TypeInfo, v16);
    byte_4185E87 = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v18 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v18 )
    return 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)v18 >= 1 )
  {
    v23 = 0LL;
    v24 = (int)v18;
    while ( 1 )
    {
      v25 = this->fields.costumeIds;
      if ( !v25 )
        break;
      if ( v23 >= v25->max_length )
      {
LABEL_40:
        v44 = sub_B2C460(Instance);
        sub_B2C400(v44, 0LL);
      }
      v26 = v25->m_Items[v23 + 1];
      v28 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v27 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v46.fields.currentCryptoKey = v28;
      *(_QWORD *)&v46.fields.fakeValue = v27;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v46, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = ServantCostumeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v26, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !v22 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v22,
          (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
      }
      if ( (__int64)++v23 >= v24 )
        goto LABEL_19;
    }
LABEL_39:
    sub_B2C434(Instance, v20);
  }
LABEL_19:
  Instance = (__int64)UserServantCollectionEntity___c_TypeInfo;
  if ( (BYTE3(UserServantCollectionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo);
    Instance = (__int64)UserServantCollectionEntity___c_TypeInfo;
  }
  static_fields = *(struct UserServantCollectionEntity___c_StaticFields **)(Instance + 184);
  _9__49_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__49_0,
      v31,
      Method_UserServantCollectionEntity___c__getCostumeList_b__49_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantCostumeEntity___ctor__);
    v32 = UserServantCollectionEntity___c_TypeInfo->static_fields;
    v32->__9__49_0 = (struct System_Comparison_ServantCostumeEntity__o *)_9__49_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v32->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  if ( !v22 )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__49_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  size = v22->fields._size;
  Instance = sub_B2C374(int___TypeInfo, (unsigned int)size);
  v40 = (System_Int32_array *)Instance;
  if ( size >= 1 )
  {
    v41 = 0LL;
    while ( 1 )
    {
      if ( v22->fields._size <= (unsigned int)v41 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v42 = v22->fields._items->m_Items[v41];
      if ( !v42 || !Instance )
        goto LABEL_39;
      if ( (unsigned int)v41 >= *(_DWORD *)(Instance + 24) )
        goto LABEL_40;
      *(_DWORD *)(Instance + 32 + 4 * v41++) = v42->fields.missionConditionDetailId;
      if ( (int)v41 >= size )
        return v40;
    }
  }
  return v40;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantCollectionEntity__getCostumeList_21620056(
        UserServantCollectionEntity_o *this,
        int32_t lv,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct System_Int32_array *costumeIds; // x8
  __int64 v20; // x20
  __int64 Instance; // x0
  __int64 v22; // x1
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x23
  ServantCostumeReleaseMaster_o *v24; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x19
  unsigned __int64 v26; // x28
  struct System_Int32_array *v27; // x8
  int32_t v28; // w25
  __int64 v29; // x26
  __int64 v30; // x27
  __int64 v31; // x26
  __int64 v32; // x27
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__50_0; // x20
  Il2CppObject *v35; // x21
  struct UserServantCollectionEntity___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int size; // w21
  System_Int32_array *v44; // x20
  __int64 v45; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v46; // x8
  __int64 v48; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4185E88 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_ServantCostumeEntity___ctor__, *(_QWORD *)&lv);
    sub_B2C35C(&System_Comparison_ServantCostumeEntity__TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v7);
    sub_B2C35C(&int___TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__, v13);
    sub_B2C35C(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_UserServantCollectionEntity___c__getCostumeList_b__50_0__, v17);
    sub_B2C35C(&UserServantCollectionEntity___c_TypeInfo, v18);
    byte_4185E88 = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v20 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v20 )
    return 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  v24 = (ServantCostumeReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)v20 >= 1 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      v27 = this->fields.costumeIds;
      if ( !v27 )
        break;
      if ( v26 >= v27->max_length )
      {
LABEL_45:
        v48 = sub_B2C460(Instance);
        sub_B2C400(v48, 0LL);
      }
      v28 = v27->m_Items[v26 + 1];
      v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v52.fields.currentCryptoKey = v30;
      *(_QWORD *)&v52.fields.fakeValue = v29;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v52, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = ServantCostumeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v28, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v32 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v31 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v53.fields.currentCryptoKey = v32;
        *(_QWORD *)&v53.fields.fakeValue = v31;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v53, 0LL);
        if ( !v24 )
          break;
        Instance = ServantCostumeReleaseMaster__isEnableMountCostume(v24, Instance, v28, lv, limitCount, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v25 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v25,
            (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
        }
      }
      if ( (__int64)++v26 >= (int)v20 )
        goto LABEL_24;
    }
LABEL_44:
    sub_B2C434(Instance, v22);
  }
LABEL_24:
  Instance = (__int64)UserServantCollectionEntity___c_TypeInfo;
  if ( (BYTE3(UserServantCollectionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo);
    Instance = (__int64)UserServantCollectionEntity___c_TypeInfo;
  }
  static_fields = *(struct UserServantCollectionEntity___c_StaticFields **)(Instance + 184);
  _9__50_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__50_0,
      v35,
      Method_UserServantCollectionEntity___c__getCostumeList_b__50_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantCostumeEntity___ctor__);
    v36 = UserServantCollectionEntity___c_TypeInfo->static_fields;
    v36->__9__50_0 = (struct System_Comparison_ServantCostumeEntity__o *)_9__50_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v36->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  if ( !v25 )
    goto LABEL_44;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v25,
    (System_Comparison_T__o *)_9__50_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  size = v25->fields._size;
  Instance = sub_B2C374(int___TypeInfo, (unsigned int)size);
  v44 = (System_Int32_array *)Instance;
  if ( size >= 1 )
  {
    v45 = 0LL;
    while ( 1 )
    {
      if ( v25->fields._size <= (unsigned int)v45 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v46 = v25->fields._items->m_Items[v45];
      if ( !v46 || !Instance )
        goto LABEL_44;
      if ( (unsigned int)v45 >= *(_DWORD *)(Instance + 24) )
        goto LABEL_45;
      *(_DWORD *)(Instance + 32 + 4 * v45++) = v46->fields.missionConditionDetailId;
      if ( (int)v45 >= size )
        return v44;
    }
  }
  return v44;
}


int32_t __fastcall UserServantCollectionEntity__getFriendShipRank(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4185E7A & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185E7A = 1;
  }
  v3 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v3;
  *(_QWORD *)&v6.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL);
}


bool __fastcall UserServantCollectionEntity__getFriendShipRankInfo(
        UserServantCollectionEntity_o *this,
        int32_t *friendshipRank,
        int32_t *maxFriendshipRank,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  __int64 v11; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v13; // x23
  __int64 v14; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x22
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  bool result; // w0
  int32_t v21; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4185E82 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, friendshipRank);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4185E82 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v14;
  *(_QWORD *)&v22.fields.fakeValue = v13;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22, 0LL);
  if ( !v15 )
LABEL_16:
    sub_B2C434(Instance, v11);
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v15,
                                (int32_t)Instance,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity && (v17 = Entity, ServantEntity__get_IsServant(Entity, 0LL)) )
  {
    v18 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
    v19 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v23.fields.currentCryptoKey = v18;
    *(_QWORD *)&v23.fields.fakeValue = v19;
    *friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v23, 0LL);
    result = 1;
    v21 = this->fields.friendshipExceedCount + v17->fields.maxFriendshipRank;
  }
  else
  {
    v21 = 0;
    result = 0;
    *friendshipRank = -1;
  }
  *maxFriendshipRank = v21;
  return result;
}


int32_t __fastcall UserServantCollectionEntity__getFriendshipExceedCount(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.friendshipExceedCount;
}


int32_t __fastcall UserServantCollectionEntity__getLevelMax(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *Instance; // x0
  __int64 v8; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x20
  WarEntity_o *Entity; // x20
  WarQuestSelectionMaster_o *v14; // x0
  __int64 v15; // x8
  ServantLimitMaster_o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4185E83 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4185E83 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL);
  if ( !v12 )
    goto LABEL_13;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v12,
             (int32_t)Instance,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v14 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)Instance,
                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___),
        v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v19.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue,
        v16 = (ServantLimitMaster_o *)v14,
        *(_QWORD *)&v19.fields.currentCryptoKey = v15,
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL),
        !Entity)
    || !v16
    || (Instance = ServantLimitMaster__GetEntity(v16, (int32_t)Instance, Entity->fields.targetId, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B2C434(Instance, v8);
  }
  return *((_DWORD *)Instance + 7);
}


int32_t __fastcall UserServantCollectionEntity__getLimitCountMax(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4185E84 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185E84 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      (int32_t)Instance,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
  }
  return Instance->fields.nowLoadCount;
}


void __fastcall UserServantCollectionEntity__getPassiveSkillInfo(
        UserServantCollectionEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispLimitCount,
        bool isOwner,
        const MethodInfo *method)
{
  System_Int32_array **v11; // x21
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  int32_t friendshipRank; // w25
  __int64 v30; // x19
  __int64 v31; // x24
  int32_t v32; // w0
  int32_t maxLimitCount; // w24
  int32_t v34; // w19
  __int64 v35; // x19
  __int64 v36; // x19
  void *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v39; // x19
  __int64 v40; // x20
  ServantPassiveSkillMaster_o *v41; // x26
  int32_t v42; // w4
  ServantPassiveSkillMaster_o *v43; // x0
  BattleServantConfConponent_o *v44; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v45; // x19
  char v46; // w23
  BalanceConfig_c *v47; // x0
  System_Int32_array **v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  WarQuestSelectionMaster_o *v69; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v70; // x25
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  int v77; // w8
  int v78; // w24
  __int64 v79; // x8
  int32_t v80; // w27
  System_String_array **v81; // x26
  int64_t UserId; // x0
  __int64 v83; // x19
  __int64 v84; // x20
  int64_t v85; // x28
  int32_t v86; // w4
  int32_t BuddyPoint; // w28
  __int64 v88; // x19
  __int64 v89; // x20
  int32_t v90; // w3
  __int64 v91; // x19
  __int64 v92; // x8
  unsigned __int64 v93; // x20
  System_Int32_array *v94; // x8
  int max_length; // w9
  unsigned int v96; // w10
  __int64 v97; // x27
  char *v98; // x10
  _DWORD *v99; // x10
  int v100; // t1
  System_String_array *v101; // x8
  System_String_array *v102; // x9
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  __int64 v115; // x0
  int *v116; // [xsp+28h] [xbp-78h]
  EventServantPointRankMaster_o *v117; // [xsp+30h] [xbp-70h]
  UserEventServantPointMaster_o *Master_WarQuestSelectionMaster; // [xsp+38h] [xbp-68h]
  System_String_array **titleLista; // [xsp+40h] [xbp-60h]
  UserEventServantPointEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16

  v11 = idList;
  if ( (byte_4185E80 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, idList);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v18);
    sub_B2C35C(&DataManager_TypeInfo, v19);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v21);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v22);
    sub_B2C35C(&int___TypeInfo, v23);
    sub_B2C35C(&NetworkManager_TypeInfo, v24);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B2C35C(&string___TypeInfo, v28);
    byte_4185E80 = 1;
  }
  entity = 0LL;
  if ( isOwner )
  {
    friendshipRank = BasicHelper__DecryptValue_19216120(this->fields.friendshipRank, 0LL);
    if ( (dispLimitCount & 0x80000000) == 0 )
      goto LABEL_14;
  }
  else
  {
    friendshipRank = 0;
    if ( (dispLimitCount & 0x80000000) == 0 )
      goto LABEL_14;
  }
  v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v121.fields.currentCryptoKey = v30;
  *(_QWORD *)&v121.fields.fakeValue = v31;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v121, 0LL);
  maxLimitCount = this->fields.maxLimitCount;
  v34 = v32;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  dispLimitCount = ImageLimitCount__GetImageLimitCount(v34, maxLimitCount, 0LL);
LABEL_14:
  v35 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v35 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v36 = **(_QWORD **)(v35 + 192);
  if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
    sub_AC505C(v36);
  titleLista = titleList;
  Instance = **(void ***)(v36 + 184);
  if ( !Instance )
    goto LABEL_85;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  v40 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v41 = (ServantPassiveSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v122.fields.currentCryptoKey = v40;
  *(_QWORD *)&v122.fields.fakeValue = v39;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v122, 0LL);
  if ( !v41 )
    goto LABEL_85;
  v42 = (int)Instance;
  v43 = v41;
  v44 = (BattleServantConfConponent_o *)titleLista;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    v43,
    v11,
    titleLista,
    explanationList,
    v42,
    this->fields.userId,
    this->fields.maxLv,
    this->fields.maxLimitCount,
    dispLimitCount,
    friendshipRank,
    -1,
    isOwner,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v45 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.svtId, 0LL);
  if ( !v45 )
    goto LABEL_85;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v45,
               (int32_t)Instance,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !isOwner )
    return;
  if ( !Instance )
    goto LABEL_85;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
    return;
  if ( *v11 )
  {
    v46 = 0;
  }
  else
  {
    v47 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v47 = BalanceConfig_TypeInfo;
    }
    v48 = (System_Int32_array **)sub_B2C374(int___TypeInfo, (unsigned int)v47->static_fields->SvtPassiveSkillListMax);
    *v11 = (System_Int32_array *)v48;
    sub_B2C2F8((BattleServantConfConponent_o *)v11, v48, v49, v50, v51, v52, v53, v54);
    v55 = (System_Int32_array **)sub_B2C374(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleLista = (System_String_array *)v55;
    sub_B2C2F8((BattleServantConfConponent_o *)titleLista, v55, v56, v57, v58, v59, v60, v61);
    v62 = (System_String_array *)sub_B2C374(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v62;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v62,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    v46 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v69 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v70 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
  Instance = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance || (Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL)) == 0LL )
LABEL_85:
    sub_B2C434(Instance, idList);
  v77 = *((_DWORD *)Instance + 6);
  if ( v77 >= 1 )
  {
    v78 = 0;
    v116 = (int *)Instance;
    v117 = (EventServantPointRankMaster_o *)v69;
    do
    {
      if ( v78 >= (unsigned int)v77 )
        goto LABEL_84;
      v79 = *((_QWORD *)Instance + v78 + 4);
      if ( !v79 )
        goto LABEL_85;
      v80 = *(_DWORD *)(v79 + 16);
      v81 = explanationList;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v84 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v83 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v85 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v123.fields.currentCryptoKey = v84;
      *(_QWORD *)&v123.fields.fakeValue = v83;
      v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v123, 0LL);
      Instance = Master_WarQuestSelectionMaster;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_85;
      if ( UserEventServantPointMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v85, v80, v86, 0LL) )
      {
        Instance = entity;
        if ( !entity )
          goto LABEL_85;
        BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
      }
      else
      {
        BuddyPoint = 0;
      }
      v89 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v88 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v124.fields.currentCryptoKey = v89;
      *(_QWORD *)&v124.fields.fakeValue = v88;
      v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v124, 0LL);
      Instance = v117;
      if ( !v117 )
        goto LABEL_85;
      Instance = EventServantPointRankMaster__GetEnableEntity(v117, v80, BuddyPoint, v90, 0LL);
      if ( Instance )
      {
        v91 = *((_QWORD *)Instance + 4);
        if ( !v91 )
          goto LABEL_85;
        v92 = *(_QWORD *)(v91 + 24);
        explanationList = v81;
        v44 = (BattleServantConfConponent_o *)titleLista;
        if ( (int)v92 >= 1 )
        {
          v93 = 0LL;
          while ( v93 < (unsigned int)v92 )
          {
            v94 = *v11;
            if ( !*v11 )
              goto LABEL_85;
            max_length = v94->max_length;
            if ( max_length >= 1 )
            {
              idList = (System_Int32_array **)*(unsigned int *)(v91 + 4 * v93 + 32);
              v96 = 0;
              while ( 1 )
              {
                if ( v96 >= max_length )
                  goto LABEL_84;
                v97 = (int)v96;
                v98 = (char *)v94 + 4 * (int)v96;
                v100 = *((_DWORD *)v98 + 8);
                v99 = v98 + 32;
                if ( !v100 )
                  break;
                v96 = v97 + 1;
                if ( (int)v97 + 1 >= max_length )
                  goto LABEL_77;
              }
              *v99 = (_DWORD)idList;
              if ( !v70 )
                goto LABEL_85;
              Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           v70,
                           (int32_t)idList,
                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              v101 = *titleLista;
              if ( !*titleLista )
                goto LABEL_85;
              v102 = *explanationList;
              if ( !*explanationList || !Instance )
                goto LABEL_85;
              if ( (unsigned int)v97 >= v101->max_length || (unsigned int)v97 >= v102->max_length )
                break;
              SkillEntity__getSkillMessageInfo(
                (SkillEntity_o *)Instance,
                &v101->m_Items[v97],
                &v102->m_Items[v97],
                0,
                0LL);
              v46 = 0;
            }
LABEL_77:
            LODWORD(v92) = *(_DWORD *)(v91 + 24);
            if ( (__int64)++v93 >= (int)v92 )
              goto LABEL_80;
          }
LABEL_84:
          v115 = sub_B2C460(Instance);
          sub_B2C400(v115, 0LL);
        }
      }
      else
      {
        explanationList = v81;
        v44 = (BattleServantConfConponent_o *)titleLista;
      }
LABEL_80:
      Instance = v116;
      ++v78;
      v77 = v116[6];
    }
    while ( v78 < v77 );
  }
  if ( (v46 & 1) != 0 )
  {
    *v11 = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)v11, 0LL, v71, v72, v73, v74, v75, v76);
    v44->klass = 0LL;
    sub_B2C2F8(v44, 0LL, v103, v104, v105, v106, v107, v108);
    *explanationList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)explanationList, 0LL, v109, v110, v111, v112, v113, v114);
  }
}


void __fastcall UserServantCollectionEntity__getSkillInfo(
        UserServantCollectionEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        int32_t skillListNum,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 Instance; // x0
  __int64 v18; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v20; // x19
  __int64 v21; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x23
  ServantEntity_o *Entity; // x24
  __int64 v24; // x19
  __int64 v25; // x19
  ServantSkillMaster_o *v26; // x23
  const MethodInfo *v27; // x1
  System_Int32_array *SkillLevelList; // x25
  __int64 v29; // x22
  __int64 v30; // x27
  int32_t v31; // w0
  int32_t maxLimitCount; // w22
  int32_t v33; // w19
  BalanceConfig_c *v34; // x0
  BalanceConfig_c *v35; // x0
  SkillInfo_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  unsigned __int64 v43; // x20
  int32_t *v44; // x22
  __int64 v45; // x24
  SkillInfo_o *v46; // x26
  __int64 v47; // x27
  __int64 v48; // x28
  signed __int64 v49; // x27
  ServantSkillEntity_o *v50; // x28
  int32_t skillNum; // w8
  __int64 v52; // x19
  __int64 v53; // x28
  int32_t v54; // w0
  SkillInfo_array *v55; // x19
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x0
  __int64 v63; // x0
  signed __int64 v64; // [xsp+20h] [xbp-70h]
  bool IsServantEquip; // [xsp+2Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_4185E7F & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&SkillInfo___TypeInfo, v15);
    sub_B2C35C(&SkillInfo_TypeInfo, v16);
    byte_4185E7F = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v69.fields.currentCryptoKey = v20;
  *(_QWORD *)&v69.fields.fakeValue = v21;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v69, 0LL);
  if ( !v22 )
    goto LABEL_56;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v22,
                                Instance,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v25 = **(_QWORD **)(v24 + 192);
  if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
    sub_AC505C(v25);
  Instance = **(_QWORD **)(v25 + 184);
  if ( !Instance )
    goto LABEL_56;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !Entity )
    goto LABEL_56;
  v26 = (ServantSkillMaster_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip(Entity, 0LL);
  SkillLevelList = UserServantCollectionEntity__getSkillLevelList(this, v27);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v70.fields.currentCryptoKey = v30;
    *(_QWORD *)&v70.fields.fakeValue = v29;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v70, 0LL);
    maxLimitCount = this->fields.maxLimitCount;
    v33 = v31;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    dispLimitCount = ImageLimitCount__GetImageLimitCount(v33, maxLimitCount, 0LL);
  }
  if ( skillListNum <= 0 )
  {
    v34 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v34 = BalanceConfig_TypeInfo;
    }
    skillListNum = v34->static_fields->SvtSkillListMax;
  }
  if ( IsServantEquip )
  {
    v35 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v35 = BalanceConfig_TypeInfo;
    }
    skillListNum = v35->static_fields->SvtEquipSkillListMax;
  }
  v36 = (SkillInfo_array *)sub_B2C374(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v36;
  sub_B2C2F8((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
  if ( skillListNum >= 1 )
  {
    v43 = 0LL;
    v44 = &SkillLevelList->m_Items[1];
    v45 = 32LL;
    v64 = skillListNum;
    while ( 1 )
    {
      v46 = (SkillInfo_o *)sub_B2C42C(SkillInfo_TypeInfo);
      SkillInfo___ctor(v46, 0LL);
      v48 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v47 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v71.fields.currentCryptoKey = v48;
      *(_QWORD *)&v71.fields.fakeValue = v47;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v71, 0LL);
      if ( !v26 )
        break;
      v49 = v43 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            v26,
                            Instance,
                            (int)v43 + 1,
                            this->fields.userId,
                            this->fields.maxLv,
                            this->fields.maxLimitCount,
                            dispLimitCount,
                            beforeClearQuestId,
                            -1,
                            -1LL,
                            0,
                            0LL);
      if ( Instance )
      {
        if ( !v46 )
          break;
        v50 = (ServantSkillEntity_o *)Instance;
        v46->fields.id = *(_DWORD *)(Instance + 28);
        if ( !SkillLevelList )
          break;
        if ( v43 >= SkillLevelList->max_length )
          goto LABEL_57;
        v46->fields.lv = v44[v43];
        if ( v43 >= SkillLevelList->max_length )
          goto LABEL_57;
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v46->fields.charge,
          &v46->fields.title,
          &v46->fields.explanation,
          v44[v43],
          IsServantEquip,
          0LL);
        Instance = ServantSkillEntity__GetStrengthStatus(v50, 0LL);
        v46->fields.strengthStatus = Instance;
        skillNum = v50->fields.skillNum;
        v46->fields.isUse = 1;
        v46->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v46 )
          break;
        v46->fields.lv = -1;
        if ( !IsServantEquip )
        {
          v52 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v53 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v72.fields.currentCryptoKey = v52;
          *(_QWORD *)&v72.fields.fakeValue = v53;
          v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v72, 0LL);
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(v26, v54, v49, 0LL);
          if ( Instance )
          {
            v46->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v46->fields.title,
              &v46->fields.explanation,
              0LL);
          }
        }
      }
      v55 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_B2C41C(v46, v55->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v63 = sub_B2C454();
        sub_B2C400(v63, 0LL);
      }
      if ( v43 >= v55->max_length )
      {
LABEL_57:
        v62 = sub_B2C460(Instance);
        sub_B2C400(v62, 0LL);
      }
      *(Il2CppClass **)((char *)&v55->obj.klass + v45) = (Il2CppClass *)v46;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)((char *)v55 + v45),
        (System_Int32_array **)v46,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      v45 += 8LL;
      ++v43;
      if ( v49 >= v64 )
        return;
    }
LABEL_56:
    sub_B2C434(Instance, v18);
  }
}


System_Int32_array *__fastcall UserServantCollectionEntity__getSkillLevelList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  BalanceConfig_c *v5; // x0
  __int64 v6; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v8; // x19
  int32_t skillLv3; // w8
  __int64 v10; // x20
  unsigned __int64 v11; // x23
  __int64 v13; // x0

  if ( (byte_4185E7E & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&int___TypeInfo, v3);
    byte_4185E7E = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_B2C374(int___TypeInfo, (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  if ( !v5 )
    sub_B2C434(0LL, v6);
  namespaze = (unsigned int)v5->_1.namespaze;
  v8 = (System_Int32_array *)v5;
  if ( !namespaze
    || (LODWORD(v5->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v5->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_18:
    v13 = sub_B2C460(v5);
    sub_B2C400(v13, 0LL);
  }
  skillLv3 = this->fields.skillLv3;
  v10 = 11LL;
  v5->_1.byval_arg.bits = skillLv3;
  while ( 1 )
  {
    v5 = BalanceConfig_TypeInfo;
    v11 = v10 - 8;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v11 >= v5->static_fields->SvtEquipSkillListMax )
      return v8;
    if ( v11 >= v8->max_length )
      goto LABEL_18;
    *((_DWORD *)&v8->obj.klass + v10++) = 1;
  }
}


int32_t __fastcall UserServantCollectionEntity__getSvtId(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4185E79 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185E79 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL);
}


bool __fastcall UserServantCollectionEntity__getTreasureDeviceInfo(
        UserServantCollectionEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  TreasureDvcInfo_o *v13; // x23
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x23
  __int64 v21; // x24
  int32_t v22; // w23
  __int64 v23; // x22
  __int64 v24; // x24
  int32_t v25; // w0
  int32_t maxLimitCount; // w22
  int32_t v27; // w24
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v29; // x25
  __int64 v30; // x26
  ServantTreasureDvcMaster_o *v31; // x24
  ServantTreasureDvcEntity_o *UseEntity; // x0
  __int64 v33; // x1
  TreasureDvcInfo_o *v34; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4185E81 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, tdInfo);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&TreasureDvcInfo_TypeInfo, v12);
    byte_4185E81 = 1;
  }
  v13 = (TreasureDvcInfo_o *)sub_B2C42C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v13, 0LL);
  *tdInfo = v13;
  sub_B2C2F8((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
  v20 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v20;
  *(_QWORD *)&v36.fields.fakeValue = v21;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v36, 0LL);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v37.fields.currentCryptoKey = v24;
    *(_QWORD *)&v37.fields.fakeValue = v23;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v37, 0LL);
    maxLimitCount = this->fields.maxLimitCount;
    v27 = v25;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    dispLimitCount = ImageLimitCount__GetImageLimitCount(v27, maxLimitCount, 0LL);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v31 = (ServantTreasureDvcMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v38.fields.currentCryptoKey = v30;
  *(_QWORD *)&v38.fields.fakeValue = v29;
  UseEntity = (ServantTreasureDvcEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                              v38,
                                              0LL);
  if ( !v31 )
    goto LABEL_28;
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                v31,
                (int32_t)UseEntity,
                this->fields.userId,
                this->fields.maxLv,
                this->fields.maxLimitCount,
                dispLimitCount,
                v22,
                beforeClearQuestId,
                0LL);
  if ( UseEntity )
  {
    if ( *tdInfo )
    {
      (*tdInfo)->fields.id = UseEntity->fields.treasureDeviceId;
      if ( *tdInfo )
      {
        (*tdInfo)->fields.lv = this->fields.treasureDeviceLv1;
        v34 = *tdInfo;
        if ( *tdInfo )
        {
          UseEntity = (ServantTreasureDvcEntity_o *)ServantTreasureDvcEntity__getEffectExplanation(
                                                      UseEntity,
                                                      &v34->fields.name,
                                                      &v34->fields.explanation,
                                                      &v34->fields.maxLv,
                                                      &v34->fields.guageCount,
                                                      &v34->fields.cardId,
                                                      &v34->fields.strengthStatus,
                                                      &v34->fields.treasureDeviceNum,
                                                      v34->fields.lv,
                                                      0LL);
          v34->fields.isUse = (unsigned __int8)UseEntity & 1;
          if ( *tdInfo )
          {
            LOBYTE(UseEntity) = (*tdInfo)->fields.isUse;
            return (char)UseEntity;
          }
        }
      }
    }
LABEL_28:
    sub_B2C434(UseEntity, v33);
  }
  return (char)UseEntity;
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeEntity_o *__fastcall UserServantCollectionEntity__getUserCommandCodeEntity(
        UserServantCollectionEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t userId; // x21
  __int64 v11; // x23
  __int64 v12; // x22
  UserServantCommandCodeMaster_o *v13; // x20
  const MethodInfo *v14; // x4
  const MethodInfo *v15; // x2
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4185E8A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&index);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4185E8A = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (UserServantCommandCodeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL);
  if ( !v13 )
    goto LABEL_12;
  if ( UserServantCommandCodeMaster__TryGetEntity(v13, &entity, userId, (int)Instance, v14) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v15);
LABEL_12:
    sub_B2C434(Instance, v8);
  }
  return 0LL;
}


int64_t __fastcall UserServantCollectionEntity__getUserId(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userId;
}


void __fastcall UserServantCollectionEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x0

  if ( (byte_41856D5 & 1) == 0 )
  {
    sub_B2C35C(&UserServantCollectionEntity___c_TypeInfo, v1);
    byte_41856D5 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(UserServantCollectionEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserServantCollectionEntity___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall UserServantCollectionEntity___c___ctor(
        UserServantCollectionEntity___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserServantCollectionEntity___c___getCostumeList_b__49_0(
        UserServantCollectionEntity___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall UserServantCollectionEntity___c___getCostumeList_b__50_0(
        UserServantCollectionEntity___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall UserServantCollectionEntity___c__DisplayClass61_0___ctor(
        UserServantCollectionEntity___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantCollectionEntity___c__DisplayClass61_0___GetSkillChangeCostumeList_b__0(
        UserServantCollectionEntity___c__DisplayClass61_0_o *this,
        ServantSkillReleaseEntity_o *d,
        const MethodInfo *method)
{
  UserServantCollectionEntity___c__DisplayClass61_0_o *v4; // x20
  struct UserServantCollectionEntity_o *_4__this; // x8
  int32_t condTargetId; // w23
  __int64 v7; // x21
  __int64 v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_41856D6 & 1) == 0 )
  {
    this = (UserServantCollectionEntity___c__DisplayClass61_0_o *)sub_B2C35C(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                    d);
    byte_41856D6 = 1;
  }
  if ( !d || (_4__this = v4->fields.__4__this) == 0LL )
    sub_B2C434(this, d);
  condTargetId = d->fields.condTargetId;
  v8 = *(_QWORD *)&_4__this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&_4__this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return condTargetId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL)
      && d->fields.condNum == v4->fields.costumeId;
}