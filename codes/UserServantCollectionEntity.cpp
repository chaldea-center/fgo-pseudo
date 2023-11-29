void __fastcall UserServantCollectionEntity___ctor(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F815E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F815E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserServantCollectionEntity___ctor_21403380(
        UserServantCollectionEntity_o *this,
        UserServantCollectionEntity_o *e,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Int32_array *tdPlayed; // x1

  if ( (byte_40F815F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, e);
    byte_40F815F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
  if ( !e )
    sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tdPlayed,
    (System_Int32_array **)tdPlayed,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.createdAt = e->fields.createdAt;
}


void __fastcall UserServantCollectionEntity___ctor_21403640(
        UserServantCollectionEntity_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int128 v8; // q0

  if ( (byte_40F8160 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, userId);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40F8160 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_40F815D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&svtId);
    byte_40F815D = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_18C22D0 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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

  if ( (byte_40F815C & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F815C = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v9, 0LL);
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
  int32_t v19; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40F8177 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, idList);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    byte_40F8177 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (ServantAppendPassiveSkillMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v17;
  *(_QWORD *)&v20.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
  if ( !v18 )
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  ServantSkillReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_T__o *EntryListFromCondType; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_int__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct System_Int32_array *costumeIds; // x24
  unsigned __int64 v25; // x25
  __int64 v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x23

  if ( (byte_40F8176 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_ServantSkillReleaseEntity___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___, v3);
    sub_B16FFC(&Method_System_Func_ServantSkillReleaseEntity__bool___ctor__, v4);
    sub_B16FFC(&System_Func_ServantSkillReleaseEntity__bool__TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&Method_UserServantCollectionEntity___c__DisplayClass61_0__GetSkillChangeCostumeList_b__0__, v10);
    sub_B16FFC(&UserServantCollectionEntity___c__DisplayClass61_0_TypeInfo, v11);
    byte_40F8176 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (ServantSkillReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  EntryListFromCondType = (System_Collections_Generic_List_T__o *)ServantSkillReleaseMaster__GetEntryListFromCondType(
                                                                    MasterData_WarQuestSelectionMaster,
                                                                    70,
                                                                    0LL);
  v19 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17,
                                                    v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    goto LABEL_15;
  if ( (int)costumeIds->max_length >= 1 )
  {
    v25 = 0LL;
    while ( 1 )
    {
      v26 = sub_B170CC(UserServantCollectionEntity___c__DisplayClass61_0_TypeInfo, v20, v21, v22, v23);
      UserServantCollectionEntity___c__DisplayClass61_0___ctor(
        (UserServantCollectionEntity___c__DisplayClass61_0_o *)v26,
        0LL);
      if ( !v26 )
        break;
      *(_QWORD *)(v26 + 24) = this;
      sub_B16F98((BattleServantConfConponent_o *)(v26 + 24), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
      if ( v25 >= costumeIds->max_length )
      {
        sub_B17100(v33, v34, v35);
        sub_B170A0();
      }
      *(_DWORD *)(v26 + 16) = costumeIds->m_Items[v25 + 1];
      v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                 System_Func_ServantSkillReleaseEntity__bool__TypeInfo,
                                                                                 v34,
                                                                                 v35,
                                                                                 v36,
                                                                                 v37);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v38,
        (Il2CppObject *)v26,
        Method_UserServantCollectionEntity___c__DisplayClass61_0__GetSkillChangeCostumeList_b__0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_ServantSkillReleaseEntity__bool___ctor__);
      if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
             EntryListFromCondType,
             (System_Func_T__bool__o *)v38,
             (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_ServantSkillReleaseEntity___) )
      {
        if ( !v19 )
          break;
        System_Collections_Generic_List_int___Add(
          v19,
          *(_DWORD *)(v26 + 16),
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v25 >= (int)costumeIds->max_length )
        return v19;
    }
LABEL_15:
    sub_B170D4();
  }
  return v19;
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
  int32_t v13; // w0
  const MethodInfo *v14; // x4
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_40F8173 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_40F8173 = 1;
  }
  entity = 0LL;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AAFCFC(v6);
  v7 = **(DataManager_o ***)(v6 + 184);
  if ( !v7 )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v7,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  userId = this->fields.userId;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (UserServantCommandCardMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v17, 0LL);
  if ( !v12 )
LABEL_13:
    sub_B170D4();
  UserServantCommandCardMaster__TryGetEntity(v12, &entity, userId, v13, v14);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x20
  __int64 v11; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x19
  int32_t v13; // w0
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v15; // x19
  __int64 v17; // x20
  __int64 v18; // x20
  DataManager_o *v19; // x0
  ServantCollectionMaster_o *v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_40F8174 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F8174 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL);
  if ( !v12 )
    goto LABEL_18;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v12,
                                v13,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_18;
  v15 = Entity;
  if ( ServantEntity__get_IsServantEquip(Entity, 0LL) )
    return 0;
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v18 = **(_QWORD **)(v17 + 192);
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AAFCFC(v18);
  v19 = **(DataManager_o ***)(v18 + 184);
  if ( !v19
    || (v20 = (ServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             v19,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_18:
    sub_B170D4();
  }
  return ServantCollectionMaster__GetOverrideDisplayType_30439688(v20, v15->fields.collectionNo, 0LL) == 1;
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x20
  __int64 v11; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x19
  int32_t v13; // w0
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v15; // x19
  __int64 v17; // x20
  __int64 v18; // x20
  DataManager_o *v19; // x0
  ServantCollectionMaster_o *v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_40F8175 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCollectionMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F8175 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL);
  if ( !v12 )
    goto LABEL_18;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v12,
                                v13,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_18;
  v15 = Entity;
  if ( ServantEntity__get_IsServantEquip(Entity, 0LL) )
    return 0;
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v18 = **(_QWORD **)(v17 + 192);
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AAFCFC(v18);
  v19 = **(DataManager_o ***)(v18 + 184);
  if ( !v19
    || (v20 = (ServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             v19,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_18:
    sub_B170D4();
  }
  return ServantCollectionMaster__GetOverrideDisplayType_30439688(v20, v15->fields.collectionNo, 0LL) == 2;
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x21
  __int64 v15; // t1
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x20
  __int64 v17; // x22
  int32_t v18; // w0
  WarEntity_o *Entity; // x0
  __int64 v20; // x20
  __int64 v21; // x21
  const MethodInfo *v22; // x1
  int32_t v23; // w20
  WebViewManager_o *v26; // x0
  WarQuestSelectionMaster_o *v27; // x0
  __int64 v28; // x21
  __int64 v29; // x20
  ServantCommentMaster_o *v30; // x19
  int32_t v31; // w0
  System_Int32_array *priorityList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_40F8163 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&UserServantCollectionManager_TypeInfo, v8);
    byte_40F8163 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
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
    *(_QWORD *)&v34.fields.currentCryptoKey = v17;
    *(_QWORD *)&v34.fields.fakeValue = v14;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v34, 0LL);
    if ( !v16 )
      goto LABEL_33;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v16,
               v18,
               (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_33;
    if ( SvtType__IsEnemyCollectionDetail(*(&Entity->fields.startType + 1), 0LL) )
      goto LABEL_17;
    return 0;
  }
  p_svtId = &this->fields.svtId;
  p_fakeValue = &this->fields.svtId.fields.fakeValue;
LABEL_17:
  v20 = *(_QWORD *)&p_svtId->fields.currentCryptoKey;
  v21 = *(_QWORD *)p_fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v20;
  *(_QWORD *)&v35.fields.fakeValue = v21;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v35, 0LL);
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  if ( !UserServantCollectionManager__IsNew(v23, v22) )
  {
    v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v26 )
    {
      v27 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v26,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
      v28 = *(_QWORD *)&p_svtId->fields.currentCryptoKey;
      v29 = *(_QWORD *)p_fakeValue;
      v30 = (ServantCommentMaster_o *)v27;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v36.fields.currentCryptoKey = v28;
      *(_QWORD *)&v36.fields.fakeValue = v29;
      v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v36, 0LL);
      if ( v30 )
        return ServantCommentMaster__GetNewList(v30, &idList, &priorityList, v31, 0LL);
    }
LABEL_33:
    sub_B170D4();
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
  int32_t v17; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_40F816D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___, *(_QWORD *)&flagNum);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40F816D = 1;
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
  Master_WarQuestSelectionMaster = (UserServantVoicePlayedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
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
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B170D4();
  if ( UserServantVoicePlayedMaster__TryGetEntity(
         Master_WarQuestSelectionMaster,
         p_userServantVoicePlayedEntity,
         v16,
         v17,
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v13; // x21
  __int64 v14; // t1
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x20
  __int64 v16; // x22
  int32_t v17; // w0
  WarEntity_o *Entity; // x0
  __int64 v19; // x20
  __int64 v20; // x19
  const MethodInfo *v21; // x1
  int32_t v22; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_40F8164 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&UserServantCollectionManager_TypeInfo, v7);
    byte_40F8164 = 1;
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
        v19 = *(_QWORD *)&p_svtId->fields.currentCryptoKey;
        v20 = *(_QWORD *)p_fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v24.fields.currentCryptoKey = v19;
        *(_QWORD *)&v24.fields.fakeValue = v20;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v24, 0LL);
        if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        }
        UserServantCollectionManager__SetOld(v22, v21);
        return;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      p_fakeValue = &this->fields.svtId.fields.fakeValue;
      v13 = v14;
      v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
      p_svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(p_fakeValue - 2);
      v16 = *((_QWORD *)p_fakeValue - 1);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v23.fields.currentCryptoKey = v16;
      *(_QWORD *)&v23.fields.fakeValue = v13;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v23, 0LL);
      if ( !v15
        || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v15,
                       v17,
                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
      {
LABEL_25:
        sub_B170D4();
      }
      if ( SvtType__IsEnemyCollectionDetail(*(&Entity->fields.startType + 1), 0LL) )
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
  int32_t v15; // w0
  int64_t voicePlayed; // x8
  int64_t voicePlayed2; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_40F816E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___, *(_QWORD *)&flagNum);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40F816E = 1;
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
      Master_WarQuestSelectionMaster = (UserServantVoicePlayedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
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
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL);
      if ( !Master_WarQuestSelectionMaster )
LABEL_25:
        sub_B170D4();
      if ( UserServantVoicePlayedMaster__TryGetEntity(
             Master_WarQuestSelectionMaster,
             p_userServantVoicePlayedEntity,
             v14,
             v15,
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x24
  __int64 v17; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x23
  int32_t v19; // w0
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v21; // x23
  WebViewManager_o *v22; // x0
  WarQuestSelectionMaster_o *v23; // x0
  __int64 v24; // x25
  __int64 v25; // x26
  ServantLimitMaster_o *v26; // x24
  int32_t v27; // w0
  ServantLimitEntity_o *v28; // x0
  ServantLimitEntity_o *v29; // x22
  int32_t v30; // w8
  WebViewManager_o *v31; // x0
  ServantExpMaster_o *v32; // x0
  ServantExpEntity_o *v33; // x0
  int32_t atkBase; // w8
  __int64 v35; // x9
  int32_t hpBase; // w8
  int32_t curve; // w10
  bool result; // w0
  __int64 v39; // x9
  int32_t hpMax; // w8
  int32_t status; // w28
  WebViewManager_o *v42; // x0
  WarQuestSelectionMaster_o *v43; // x0
  __int64 v44; // x24
  __int64 v45; // x25
  ServantLimitMaster_o *v46; // x22
  int32_t v47; // w0
  ServantLimitEntity_o *v48; // x0
  int32_t v49; // w0
  ServantLimitEntity_o *v50; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_40F8165 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExpMaster___, lv);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40F8165 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v51.fields.currentCryptoKey = v17;
  *(_QWORD *)&v51.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v51, 0LL);
  if ( !v18 )
    goto LABEL_38;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v18,
                                v19,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_38;
  v21 = Entity;
  if ( !ServantEntity__checkIsHeroineSvt(Entity, 0LL) )
  {
    status = this->fields.status;
    v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v42 )
    {
      v43 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v42,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      v45 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v44 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v46 = (ServantLimitMaster_o *)v43;
      if ( status == 2 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v53.fields.currentCryptoKey = v45;
        *(_QWORD *)&v53.fields.fakeValue = v44;
        v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v53, 0LL);
        if ( v46 )
        {
          v48 = ServantLimitMaster__GetEntity(v46, v47, v21->fields.limitMax, 0LL);
          if ( v48 )
          {
            *lv = v48->fields.lvMax;
            *atk = v48->fields.atkMax;
            hpMax = v48->fields.hpMax;
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
        *(_QWORD *)&v54.fields.currentCryptoKey = v45;
        *(_QWORD *)&v54.fields.fakeValue = v44;
        v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v54, 0LL);
        if ( v46 )
        {
          v50 = ServantLimitMaster__GetEntity(v46, v49, 0, 0LL);
          *lv = 1;
          if ( v50 )
          {
            *atk = v50->fields.atkBase;
            hpMax = v50->fields.hpBase;
            result = 0;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_38:
    sub_B170D4();
  }
  v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v22 )
    goto LABEL_38;
  v23 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v22,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v25 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v26 = (ServantLimitMaster_o *)v23;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v52.fields.currentCryptoKey = v25;
  *(_QWORD *)&v52.fields.fakeValue = v24;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v52, 0LL);
  if ( !v26 )
    goto LABEL_38;
  v28 = ServantLimitMaster__GetEntity(v26, v27, this->fields.maxLimitCount, 0LL);
  if ( !v28 )
    goto LABEL_38;
  v29 = v28;
  v30 = v28->fields.rarity == 4 ? 80 : 70;
  *lv = v30;
  v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v31 )
    goto LABEL_38;
  v32 = (ServantExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v31,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !v32 )
    goto LABEL_38;
  v33 = ServantExpMaster__GetEntity(v32, v21->fields.expType, *lv, 0LL);
  if ( !v33 )
    goto LABEL_38;
  atkBase = v29->fields.atkBase;
  v35 = 274877907LL * v33->fields.curve * (v29->fields.atkMax - atkBase);
  *atk = (v35 >> 38) + ((unsigned __int64)v35 >> 63) + atkBase;
  hpBase = v29->fields.hpBase;
  curve = v33->fields.curve;
  result = 1;
  v39 = 274877907LL * curve * (v29->fields.hpMax - hpBase);
  hpMax = (v39 >> 38) + ((unsigned __int64)v39 >> 63) + hpBase;
LABEL_37:
  *hp = hpMax;
  return result;
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCommandCodeIdList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t userId; // x20
  __int64 v8; // x22
  __int64 v9; // x21
  WarQuestSelectionMaster_o *v10; // x19
  UserServantCommandCodeMaster_o *v11; // x0
  const MethodInfo *v12; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F8171 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F8171 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v11 = (UserServantCommandCodeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  if ( !v10 )
LABEL_9:
    sub_B170D4();
  return UserServantCommandCodeMaster__getCommandCodeIdList(v11, userId, (int32_t)v11, v12);
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
  WebViewManager_o *Instance; // x0
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x19
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  unsigned __int64 v32; // x25
  signed __int64 v33; // x26
  struct System_Int32_array *v34; // x8
  int32_t v35; // w22
  __int64 v36; // x23
  __int64 v37; // x24
  int32_t v38; // w0
  UserServantCollectionEntity___c_c *v39; // x0
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__49_0; // x20
  Il2CppObject *v42; // x21
  struct UserServantCollectionEntity___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int size; // w21
  __int64 v51; // x2
  System_Int32_array *v52; // x20
  __int64 v53; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v54; // x8
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_40F816F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_ServantCostumeEntity___ctor__, method);
    sub_B16FFC(&System_Comparison_ServantCostumeEntity__TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v5);
    sub_B16FFC(&int___TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&Method_UserServantCollectionEntity___c__getCostumeList_b__49_0__, v15);
    sub_B16FFC(&UserServantCollectionEntity___c_TypeInfo, v16);
    byte_40F816F = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v18 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v18 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v21 )
    goto LABEL_39;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)v21,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCostumeEntity__TypeInfo,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)v18 >= 1 )
  {
    v32 = 0LL;
    v33 = (int)v18;
    while ( 1 )
    {
      v34 = this->fields.costumeIds;
      if ( !v34 )
        break;
      if ( v32 >= v34->max_length )
      {
LABEL_40:
        sub_B17100(v27, v28, v29);
        sub_B170A0();
      }
      v35 = v34->m_Items[v32 + 1];
      v37 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v36 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v57.fields.currentCryptoKey = v37;
      *(_QWORD *)&v57.fields.fakeValue = v36;
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v57, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      v27 = ServantCostumeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, v38, v35, 0LL);
      if ( (v27 & 1) != 0 )
      {
        if ( !v26 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v26,
          (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
      }
      if ( (__int64)++v32 >= v33 )
        goto LABEL_19;
    }
LABEL_39:
    sub_B170D4();
  }
LABEL_19:
  v39 = UserServantCollectionEntity___c_TypeInfo;
  if ( (BYTE3(UserServantCollectionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo);
    v39 = UserServantCollectionEntity___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__49_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_ServantCostumeEntity__TypeInfo,
                                                                           v28,
                                                                           v29,
                                                                           v30,
                                                                           v31);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__49_0,
      v42,
      Method_UserServantCollectionEntity___c__getCostumeList_b__49_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantCostumeEntity___ctor__);
    v43 = UserServantCollectionEntity___c_TypeInfo->static_fields;
    v43->__9__49_0 = (struct System_Comparison_ServantCostumeEntity__o *)_9__49_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v43->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  if ( !v26 )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v26,
    (System_Comparison_T__o *)_9__49_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  size = v26->fields._size;
  v27 = sub_B17014(int___TypeInfo, (unsigned int)size, v51);
  v52 = (System_Int32_array *)v27;
  if ( size >= 1 )
  {
    v53 = 0LL;
    while ( 1 )
    {
      if ( v26->fields._size <= (unsigned int)v53 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v54 = v26->fields._items->m_Items[v53];
      if ( !v54 || !v27 )
        goto LABEL_39;
      if ( (unsigned int)v53 >= *(_DWORD *)(v27 + 24) )
        goto LABEL_40;
      *(_DWORD *)(v27 + 32 + 4 * v53++) = v54->fields.missionConditionDetailId;
      if ( (int)v53 >= size )
        return v52;
    }
  }
  return v52;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall UserServantCollectionEntity__getCostumeList_21413440(
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
  WebViewManager_o *Instance; // x0
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x23
  WebViewManager_o *v23; // x0
  ServantCostumeReleaseMaster_o *v24; // x24
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 isEnableMountCostume; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  unsigned __int64 v35; // x28
  struct System_Int32_array *v36; // x8
  int32_t v37; // w25
  __int64 v38; // x26
  __int64 v39; // x27
  int32_t v40; // w0
  __int64 v41; // x26
  __int64 v42; // x27
  int32_t v43; // w0
  UserServantCollectionEntity___c_c *v44; // x0
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__50_0; // x20
  Il2CppObject *v47; // x21
  struct UserServantCollectionEntity___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int size; // w21
  __int64 v56; // x2
  System_Int32_array *v57; // x20
  __int64 v58; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v59; // x8
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_40F8170 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_ServantCostumeEntity___ctor__, *(_QWORD *)&lv);
    sub_B16FFC(&System_Comparison_ServantCostumeEntity__TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v7);
    sub_B16FFC(&int___TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__, v13);
    sub_B16FFC(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&Method_UserServantCollectionEntity___c__getCostumeList_b__50_0__, v17);
    sub_B16FFC(&UserServantCollectionEntity___c_TypeInfo, v18);
    byte_40F8170 = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v20 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v20 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v23 )
    goto LABEL_44;
  v24 = (ServantCostumeReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v23,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCostumeEntity__TypeInfo,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)v20 >= 1 )
  {
    v35 = 0LL;
    while ( 1 )
    {
      v36 = this->fields.costumeIds;
      if ( !v36 )
        break;
      if ( v35 >= v36->max_length )
      {
LABEL_45:
        sub_B17100(isEnableMountCostume, v31, v32);
        sub_B170A0();
      }
      v37 = v36->m_Items[v35 + 1];
      v39 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v64.fields.currentCryptoKey = v39;
      *(_QWORD *)&v64.fields.fakeValue = v38;
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v64, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      isEnableMountCostume = ServantCostumeMaster__TryGetEntity(
                               MasterData_WarQuestSelectionMaster,
                               &entity,
                               v40,
                               v37,
                               0LL);
      if ( (isEnableMountCostume & 1) != 0 )
      {
        v42 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v41 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v65.fields.currentCryptoKey = v42;
        *(_QWORD *)&v65.fields.fakeValue = v41;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v65, 0LL);
        if ( !v24 )
          break;
        isEnableMountCostume = ServantCostumeReleaseMaster__isEnableMountCostume(v24, v43, v37, lv, limitCount, 0LL);
        if ( (isEnableMountCostume & 1) != 0 )
        {
          if ( !v29 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
        }
      }
      if ( (__int64)++v35 >= (int)v20 )
        goto LABEL_24;
    }
LABEL_44:
    sub_B170D4();
  }
LABEL_24:
  v44 = UserServantCollectionEntity___c_TypeInfo;
  if ( (BYTE3(UserServantCollectionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionEntity___c_TypeInfo);
    v44 = UserServantCollectionEntity___c_TypeInfo;
  }
  static_fields = v44->static_fields;
  _9__50_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      static_fields = UserServantCollectionEntity___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_ServantCostumeEntity__TypeInfo,
                                                                           v31,
                                                                           v32,
                                                                           v33,
                                                                           v34);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__50_0,
      v47,
      Method_UserServantCollectionEntity___c__getCostumeList_b__50_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantCostumeEntity___ctor__);
    v48 = UserServantCollectionEntity___c_TypeInfo->static_fields;
    v48->__9__50_0 = (struct System_Comparison_ServantCostumeEntity__o *)_9__50_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v48->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  if ( !v29 )
    goto LABEL_44;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v29,
    (System_Comparison_T__o *)_9__50_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  size = v29->fields._size;
  isEnableMountCostume = sub_B17014(int___TypeInfo, (unsigned int)size, v56);
  v57 = (System_Int32_array *)isEnableMountCostume;
  if ( size >= 1 )
  {
    v58 = 0LL;
    while ( 1 )
    {
      if ( v29->fields._size <= (unsigned int)v58 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v59 = v29->fields._items->m_Items[v58];
      if ( !v59 || !isEnableMountCostume )
        goto LABEL_44;
      if ( (unsigned int)v58 >= *(_DWORD *)(isEnableMountCostume + 24) )
        goto LABEL_45;
      *(_DWORD *)(isEnableMountCostume + 32 + 4 * v58++) = v59->fields.missionConditionDetailId;
      if ( (int)v58 >= size )
        return v57;
    }
  }
  return v57;
}


int32_t __fastcall UserServantCollectionEntity__getFriendShipRank(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_40F8162 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F8162 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v6, 0LL);
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x23
  __int64 v13; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x22
  int32_t v15; // w0
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  bool result; // w0
  int32_t v21; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_40F816A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, friendshipRank);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F816A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22, 0LL);
  if ( !v14 )
LABEL_16:
    sub_B170D4();
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v14,
                                v15,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    *friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v23, 0LL);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  int32_t v12; // w0
  WarEntity_o *Entity; // x20
  WebViewManager_o *v14; // x0
  WarQuestSelectionMaster_o *v15; // x0
  __int64 v16; // x8
  ServantLimitMaster_o *v17; // x19
  int32_t v18; // w0
  ServantLimitEntity_o *v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_40F816B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F816B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v10;
  *(_QWORD *)&v21.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL);
  if ( !v11 )
    goto LABEL_13;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v11,
             v12,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v14
    || (v15 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v14,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___),
        v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v22.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue,
        v17 = (ServantLimitMaster_o *)v15,
        *(_QWORD *)&v22.fields.currentCryptoKey = v16,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22, 0LL),
        !Entity)
    || !v17
    || (v19 = ServantLimitMaster__GetEntity(v17, v18, Entity->fields.targetId, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  return v19->fields.lvMax;
}


int32_t __fastcall UserServantCollectionEntity__getLimitCountMax(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  int32_t v11; // w0
  WarEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F816C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F816C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  if ( !v10
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v10,
                   v11,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  return Entity->fields.targetId;
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
  DataManager_o *v37; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v39; // x19
  __int64 v40; // x20
  ServantPassiveSkillMaster_o *v41; // x26
  int32_t v42; // w0
  int32_t v43; // w4
  ServantPassiveSkillMaster_o *v44; // x0
  BattleServantConfConponent_o *v45; // x26
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x19
  int32_t v48; // w0
  ServantEntity_o *v49; // x0
  __int64 v50; // x2
  char v51; // w23
  BalanceConfig_c *v52; // x0
  System_Int32_array *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x2
  System_Int32_array **v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x2
  System_String_array *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  WarQuestSelectionMaster_o *v76; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v77; // x25
  EventMaster_o *v78; // x0
  int *EnableEntityList; // x0
  __int64 v80; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  int v87; // w8
  int v88; // w24
  __int64 v89; // x8
  int32_t v90; // w27
  System_String_array **v91; // x26
  int64_t UserId; // x0
  __int64 v93; // x19
  __int64 v94; // x20
  int64_t v95; // x28
  int32_t v96; // w4
  int32_t BuddyPoint; // w28
  __int64 v98; // x19
  __int64 v99; // x20
  int32_t v100; // w3
  __int64 v101; // x19
  __int64 v102; // x8
  unsigned __int64 v103; // x20
  System_Int32_array *v104; // x8
  int max_length; // w9
  unsigned int v106; // w10
  __int64 v107; // x27
  char *v108; // x10
  _DWORD *v109; // x10
  int v110; // t1
  System_String_array *v111; // x8
  System_String_array *v112; // x9
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  int *v125; // [xsp+28h] [xbp-78h]
  EventServantPointRankMaster_o *v126; // [xsp+30h] [xbp-70h]
  UserEventServantPointMaster_o *Master_WarQuestSelectionMaster; // [xsp+38h] [xbp-68h]
  System_String_array **titleLista; // [xsp+40h] [xbp-60h]
  UserEventServantPointEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16

  if ( (byte_40F8168 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, idList);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v18);
    sub_B16FFC(&DataManager_TypeInfo, v19);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v21);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v22);
    sub_B16FFC(&int___TypeInfo, v23);
    sub_B16FFC(&NetworkManager_TypeInfo, v24);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v26);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B16FFC(&string___TypeInfo, v28);
    byte_40F8168 = 1;
  }
  entity = 0LL;
  if ( isOwner )
  {
    friendshipRank = BasicHelper__DecryptValue_19259816(this->fields.friendshipRank, 0LL);
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
  *(_QWORD *)&v130.fields.currentCryptoKey = v30;
  *(_QWORD *)&v130.fields.fakeValue = v31;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v130, 0LL);
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
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v36 = **(_QWORD **)(v35 + 192);
  if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
    sub_AAFCFC(v36);
  titleLista = titleList;
  v37 = **(DataManager_o ***)(v36 + 184);
  if ( !v37 )
    goto LABEL_85;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v37,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  v40 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v41 = (ServantPassiveSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v131.fields.currentCryptoKey = v40;
  *(_QWORD *)&v131.fields.fakeValue = v39;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v131, 0LL);
  if ( !v41 )
    goto LABEL_85;
  v43 = v42;
  v44 = v41;
  v45 = (BattleServantConfConponent_o *)titleLista;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    v44,
    idList,
    titleLista,
    explanationList,
    v43,
    this->fields.userId,
    this->fields.maxLv,
    this->fields.maxLimitCount,
    dispLimitCount,
    friendshipRank,
    -1,
    isOwner,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.svtId, 0LL);
  if ( !v47 )
    goto LABEL_85;
  v49 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v47,
                             v48,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !isOwner )
    return;
  if ( !v49 )
    goto LABEL_85;
  if ( !ServantEntity__get_IsServant(v49, 0LL) )
    return;
  if ( *idList )
  {
    v51 = 0;
  }
  else
  {
    v52 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v52 = BalanceConfig_TypeInfo;
    }
    v53 = (System_Int32_array *)sub_B17014(
                                  int___TypeInfo,
                                  (unsigned int)v52->static_fields->SvtPassiveSkillListMax,
                                  v50);
    *idList = v53;
    sub_B16F98((BattleServantConfConponent_o *)idList, (System_Int32_array **)v53, v54, v55, v56, v57, v58, v59);
    v61 = (System_Int32_array **)sub_B17014(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax,
                                   v60);
    *titleLista = (System_String_array *)v61;
    sub_B16F98((BattleServantConfConponent_o *)titleLista, v61, v62, v63, v64, v65, v66, v67);
    v69 = (System_String_array *)sub_B17014(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax,
                                   v68);
    *explanationList = v69;
    sub_B16F98(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v69,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
    v51 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v76 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v77 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
  v78 = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !v78 || (EnableEntityList = (int *)EventMaster__GetEnableEntityList(v78, 12, 0, 0LL)) == 0LL )
LABEL_85:
    sub_B170D4();
  v87 = EnableEntityList[6];
  if ( v87 >= 1 )
  {
    v88 = 0;
    v125 = EnableEntityList;
    v126 = (EventServantPointRankMaster_o *)v76;
    do
    {
      if ( v88 >= (unsigned int)v87 )
        goto LABEL_84;
      v89 = *(_QWORD *)&EnableEntityList[2 * v88 + 8];
      if ( !v89 )
        goto LABEL_85;
      v90 = *(_DWORD *)(v89 + 16);
      v91 = explanationList;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v94 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v93 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v95 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v132.fields.currentCryptoKey = v94;
      *(_QWORD *)&v132.fields.fakeValue = v93;
      v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v132, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_85;
      if ( UserEventServantPointMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v95, v90, v96, 0LL) )
      {
        if ( !entity )
          goto LABEL_85;
        BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
      }
      else
      {
        BuddyPoint = 0;
      }
      v99 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v98 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v133.fields.currentCryptoKey = v99;
      *(_QWORD *)&v133.fields.fakeValue = v98;
      v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v133, 0LL);
      if ( !v126 )
        goto LABEL_85;
      EnableEntityList = (int *)EventServantPointRankMaster__GetEnableEntity(v126, v90, BuddyPoint, v100, 0LL);
      if ( EnableEntityList )
      {
        v101 = *((_QWORD *)EnableEntityList + 4);
        if ( !v101 )
          goto LABEL_85;
        v102 = *(_QWORD *)(v101 + 24);
        explanationList = v91;
        v45 = (BattleServantConfConponent_o *)titleLista;
        if ( (int)v102 >= 1 )
        {
          v103 = 0LL;
          while ( v103 < (unsigned int)v102 )
          {
            v104 = *idList;
            if ( !*idList )
              goto LABEL_85;
            max_length = v104->max_length;
            if ( max_length >= 1 )
            {
              v80 = *(unsigned int *)(v101 + 4 * v103 + 32);
              v106 = 0;
              while ( 1 )
              {
                if ( v106 >= max_length )
                  goto LABEL_84;
                v107 = (int)v106;
                v108 = (char *)v104 + 4 * (int)v106;
                v110 = *((_DWORD *)v108 + 8);
                v109 = v108 + 32;
                if ( !v110 )
                  break;
                v106 = v107 + 1;
                if ( (int)v107 + 1 >= max_length )
                  goto LABEL_77;
              }
              *v109 = v80;
              if ( !v77 )
                goto LABEL_85;
              EnableEntityList = (int *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v77,
                                          v80,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              v111 = *titleLista;
              if ( !*titleLista )
                goto LABEL_85;
              v112 = *explanationList;
              if ( !*explanationList || !EnableEntityList )
                goto LABEL_85;
              if ( (unsigned int)v107 >= v111->max_length || (unsigned int)v107 >= v112->max_length )
                break;
              SkillEntity__getSkillMessageInfo(
                (SkillEntity_o *)EnableEntityList,
                &v111->m_Items[v107],
                &v112->m_Items[v107],
                0,
                0LL);
              v51 = 0;
            }
LABEL_77:
            LODWORD(v102) = *(_DWORD *)(v101 + 24);
            if ( (__int64)++v103 >= (int)v102 )
              goto LABEL_80;
          }
LABEL_84:
          sub_B17100(EnableEntityList, v80, v81);
          sub_B170A0();
        }
      }
      else
      {
        explanationList = v91;
        v45 = (BattleServantConfConponent_o *)titleLista;
      }
LABEL_80:
      EnableEntityList = v125;
      ++v88;
      v87 = v125[6];
    }
    while ( v88 < v87 );
  }
  if ( (v51 & 1) != 0 )
  {
    *idList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)idList, 0LL, v81, v82, v83, v84, v85, v86);
    v45->klass = 0LL;
    sub_B16F98(v45, 0LL, v113, v114, v115, v116, v117, v118);
    *explanationList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)explanationList, 0LL, v119, v120, v121, v122, v123, v124);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v19; // x19
  __int64 v20; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x23
  int32_t v22; // w0
  ServantEntity_o *Entity; // x24
  __int64 v24; // x19
  __int64 v25; // x19
  DataManager_o *v26; // x0
  WarQuestSelectionMaster_o *v27; // x0
  ServantSkillMaster_o *v28; // x23
  const MethodInfo *v29; // x1
  __int64 v30; // x2
  System_Int32_array *SkillLevelList; // x25
  __int64 v32; // x22
  __int64 v33; // x27
  int32_t v34; // w0
  int32_t maxLimitCount; // w22
  int32_t v36; // w19
  BalanceConfig_c *v37; // x0
  BalanceConfig_c *v38; // x0
  SkillInfo_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  unsigned __int64 v50; // x20
  int32_t *v51; // x22
  __int64 v52; // x24
  SkillInfo_o *v53; // x26
  __int64 v54; // x27
  __int64 v55; // x28
  int32_t v56; // w0
  signed __int64 v57; // x27
  ServantSkillEntity_o *UseEntity; // x0
  __int64 v59; // x1
  System_String_array **v60; // x2
  ServantSkillEntity_o *v61; // x28
  int32_t skillNum; // w8
  __int64 v63; // x19
  __int64 v64; // x28
  int32_t v65; // w0
  ServantSkillEntity_o *LowPriorityEntity; // x0
  SkillInfo_array *v67; // x19
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  signed __int64 v73; // [xsp+20h] [xbp-70h]
  bool IsServantEquip; // [xsp+2Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_40F8167 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&SkillInfo___TypeInfo, v15);
    sub_B16FFC(&SkillInfo_TypeInfo, v16);
    byte_40F8167 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v78.fields.currentCryptoKey = v19;
  *(_QWORD *)&v78.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v78, 0LL);
  if ( !v21 )
    goto LABEL_56;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v21,
                                v22,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v25 = **(_QWORD **)(v24 + 192);
  if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
    sub_AAFCFC(v25);
  v26 = **(DataManager_o ***)(v25 + 184);
  if ( !v26 )
    goto LABEL_56;
  v27 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          v26,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !Entity )
    goto LABEL_56;
  v28 = (ServantSkillMaster_o *)v27;
  IsServantEquip = ServantEntity__get_IsServantEquip(Entity, 0LL);
  SkillLevelList = UserServantCollectionEntity__getSkillLevelList(this, v29);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    v33 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v32 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v79.fields.currentCryptoKey = v33;
    *(_QWORD *)&v79.fields.fakeValue = v32;
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v79, 0LL);
    maxLimitCount = this->fields.maxLimitCount;
    v36 = v34;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    dispLimitCount = ImageLimitCount__GetImageLimitCount(v36, maxLimitCount, 0LL);
  }
  if ( skillListNum <= 0 )
  {
    v37 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v37 = BalanceConfig_TypeInfo;
    }
    skillListNum = v37->static_fields->SvtSkillListMax;
  }
  if ( IsServantEquip )
  {
    v38 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v38 = BalanceConfig_TypeInfo;
    }
    skillListNum = v38->static_fields->SvtEquipSkillListMax;
  }
  v39 = (SkillInfo_array *)sub_B17014(SkillInfo___TypeInfo, (unsigned int)skillListNum, v30);
  *skillInfoList = v39;
  sub_B16F98((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
  if ( skillListNum >= 1 )
  {
    v50 = 0LL;
    v51 = &SkillLevelList->m_Items[1];
    v52 = 32LL;
    v73 = skillListNum;
    while ( 1 )
    {
      v53 = (SkillInfo_o *)sub_B170CC(SkillInfo_TypeInfo, v46, v47, v48, v49);
      SkillInfo___ctor(v53, 0LL);
      v55 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v54 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v80.fields.currentCryptoKey = v55;
      *(_QWORD *)&v80.fields.fakeValue = v54;
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v80, 0LL);
      if ( !v28 )
        break;
      v57 = v50 + 1;
      UseEntity = ServantSkillMaster__getUseEntity(
                    v28,
                    v56,
                    (int)v50 + 1,
                    this->fields.userId,
                    this->fields.maxLv,
                    this->fields.maxLimitCount,
                    dispLimitCount,
                    beforeClearQuestId,
                    -1,
                    -1LL,
                    0,
                    0LL);
      if ( UseEntity )
      {
        if ( !v53 )
          break;
        v61 = UseEntity;
        v53->fields.id = UseEntity->fields.skillId;
        if ( !SkillLevelList )
          break;
        if ( v50 >= SkillLevelList->max_length )
          goto LABEL_57;
        v53->fields.lv = v51[v50];
        if ( v50 >= SkillLevelList->max_length )
          goto LABEL_57;
        ServantSkillEntity__getEffectExplanation(
          UseEntity,
          &v53->fields.charge,
          &v53->fields.title,
          &v53->fields.explanation,
          v51[v50],
          IsServantEquip,
          0LL);
        v53->fields.strengthStatus = ServantSkillEntity__GetStrengthStatus(v61, 0LL);
        skillNum = v61->fields.skillNum;
        v53->fields.isUse = 1;
        v53->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v53 )
          break;
        v53->fields.lv = -1;
        if ( !IsServantEquip )
        {
          v63 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v64 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v81.fields.currentCryptoKey = v63;
          *(_QWORD *)&v81.fields.fakeValue = v64;
          v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v81, 0LL);
          LowPriorityEntity = ServantSkillMaster__getLowPriorityEntity(v28, v65, v57, 0LL);
          if ( LowPriorityEntity )
          {
            v53->fields.id = LowPriorityEntity->fields.skillId;
            ServantSkillEntity__getAcquisitionMethodExplanation(
              LowPriorityEntity,
              &v53->fields.title,
              &v53->fields.explanation,
              0LL);
          }
        }
      }
      v67 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      UseEntity = (ServantSkillEntity_o *)sub_B170BC(v53, v67->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
      if ( v50 >= v67->max_length )
      {
LABEL_57:
        sub_B17100(UseEntity, v59, v60);
        sub_B170A0();
      }
      *(Il2CppClass **)((char *)&v67->obj.klass + v52) = (Il2CppClass *)v53;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)v67 + v52),
        (System_Int32_array **)v53,
        v60,
        v68,
        v69,
        v70,
        v71,
        v72);
      v52 += 8LL;
      ++v50;
      if ( v57 >= v73 )
        return;
    }
LABEL_56:
    sub_B170D4();
  }
}


System_Int32_array *__fastcall UserServantCollectionEntity__getSkillLevelList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  BalanceConfig_c *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  unsigned int namespaze; // w8
  System_Int32_array *v10; // x19
  int32_t skillLv3; // w8
  __int64 v12; // x20
  unsigned __int64 v13; // x23

  if ( (byte_40F8166 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&int___TypeInfo, v4);
    byte_40F8166 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (BalanceConfig_c *)sub_B17014(int___TypeInfo, (unsigned int)v5->static_fields->SvtEquipSkillListMax, v2);
  if ( !v6 )
    sub_B170D4();
  namespaze = (unsigned int)v6->_1.namespaze;
  v10 = (System_Int32_array *)v6;
  if ( !namespaze
    || (LODWORD(v6->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v6->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_18:
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  skillLv3 = this->fields.skillLv3;
  v12 = 11LL;
  v6->_1.byval_arg.bits = skillLv3;
  while ( 1 )
  {
    v6 = BalanceConfig_TypeInfo;
    v13 = v12 - 8;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v13 >= v6->static_fields->SvtEquipSkillListMax )
      return v10;
    if ( v13 >= v10->max_length )
      goto LABEL_18;
    *((_DWORD *)&v10->obj.klass + v12++) = 1;
  }
}


int32_t __fastcall UserServantCollectionEntity__getSvtId(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_40F8161 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F8161 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionEntity__getTreasureDeviceInfo(
        UserServantCollectionEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w22
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
  int32_t v32; // w0
  ServantTreasureDvcEntity_o *UseEntity; // x0
  TreasureDvcInfo_o *v34; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  ImageLimitCount = dispLimitCount;
  if ( (byte_40F8169 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, tdInfo);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&TreasureDvcInfo_TypeInfo, v12);
    byte_40F8169 = 1;
  }
  v13 = (TreasureDvcInfo_o *)sub_B170CC(
                               TreasureDvcInfo_TypeInfo,
                               tdInfo,
                               *(_QWORD *)&beforeClearQuestId,
                               *(_QWORD *)&dispLimitCount,
                               method);
  TreasureDvcInfo___ctor(v13, 0LL);
  *tdInfo = v13;
  sub_B16F98((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
  v20 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v20;
  *(_QWORD *)&v36.fields.fakeValue = v21;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v36, 0LL);
  if ( (ImageLimitCount & 0x80000000) != 0 )
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
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v37, 0LL);
    maxLimitCount = this->fields.maxLimitCount;
    v27 = v25;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(v27, maxLimitCount, 0LL);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
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
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v38, 0LL);
  if ( !v31 )
    goto LABEL_28;
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                v31,
                v32,
                this->fields.userId,
                this->fields.maxLv,
                this->fields.maxLimitCount,
                ImageLimitCount,
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
        if ( *tdInfo )
        {
          v34 = *tdInfo;
          v34->fields.isUse = ServantTreasureDvcEntity__getEffectExplanation(
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
          if ( *tdInfo )
          {
            LOBYTE(UseEntity) = (*tdInfo)->fields.isUse;
            return (char)UseEntity;
          }
        }
      }
    }
LABEL_28:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t userId; // x21
  __int64 v10; // x23
  __int64 v11; // x22
  UserServantCommandCodeMaster_o *v12; // x20
  int32_t v13; // w0
  const MethodInfo *v14; // x4
  const MethodInfo *v15; // x2
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_40F8172 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, *(_QWORD *)&index);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F8172 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (UserServantCommandCodeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
  if ( !v12 )
    goto LABEL_12;
  if ( UserServantCommandCodeMaster__TryGetEntity(v12, &entity, userId, v13, v14) )
  {
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v15);
LABEL_12:
    sub_B170D4();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F79AD & 1) == 0 )
  {
    sub_B16FFC(&UserServantCollectionEntity___c_TypeInfo, v1);
    byte_40F79AD = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(UserServantCollectionEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserServantCollectionEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall UserServantCollectionEntity___c___getCostumeList_b__50_0(
        UserServantCollectionEntity___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
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
  struct UserServantCollectionEntity_o *_4__this; // x8
  int32_t condTargetId; // w23
  __int64 v7; // x21
  __int64 v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_40F79AE & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, d);
    byte_40F79AE = 1;
  }
  if ( !d || (_4__this = this->fields.__4__this) == 0LL )
    sub_B170D4();
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
  return condTargetId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL)
      && d->fields.condNum == this->fields.costumeId;
}