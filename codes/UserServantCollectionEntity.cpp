void __fastcall UserServantCollectionEntity___ctor(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE1C2 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AE1C2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserServantCollectionEntity___ctor_21466236(
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

  if ( (byte_42AE1C3 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AE1C3 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
  if ( !e )
    sub_B52A5C(v5, v6);
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
  sub_B52920(
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


void __fastcall UserServantCollectionEntity___ctor_21466496(
        UserServantCollectionEntity_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int128 v7; // q0

  if ( (byte_42AE1C4 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE1C4 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  *(_QWORD *)&v7 = 0x100000001LL;
  *((_QWORD *)&v7 + 1) = 0x100000001LL;
  this->fields.status = 0;
  *(_OWORD *)&this->fields.skillLv1 = v7;
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


System_String_o *__fastcall UserServantCollectionEntity__CreatePK(
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  if ( (byte_42AE1C1 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_42AE1C1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_1A4E080 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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

  if ( (byte_42AE1C0 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE1C0 = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v9, 0LL);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v14; // x26
  __int64 v15; // x27
  ServantAppendPassiveSkillMaster_o *v16; // x25
  __int64 v17; // x0
  __int64 v18; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_42AE1DC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE1DC = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (ServantAppendPassiveSkillMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v15;
  *(_QWORD *)&v19.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v19, 0LL);
  if ( !v16 )
    sub_B52A5C(v17, v18);
  ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
    v16,
    idList,
    titleList,
    explanationList,
    releaseStateList,
    lvList,
    v17,
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_T__o *EntryListFromCondType; // x20
  System_Collections_Generic_List_int__o *v6; // x21
  struct System_Int32_array *costumeIds; // x24
  unsigned __int64 v8; // x25
  __int64 v9; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x23
  __int64 v19; // x0

  if ( (byte_42AE1DB & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_ServantSkillReleaseEntity___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
    sub_B52984(&Method_System_Func_ServantSkillReleaseEntity__bool___ctor__);
    sub_B52984(&System_Func_ServantSkillReleaseEntity__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_UserServantCollectionEntity___c__DisplayClass62_0__GetSkillChangeCostumeList_b__0__);
    sub_B52984(&UserServantCollectionEntity___c__DisplayClass62_0_TypeInfo);
    byte_42AE1DB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
  if ( !Instance )
    goto LABEL_15;
  EntryListFromCondType = (System_Collections_Generic_List_T__o *)ServantSkillReleaseMaster__GetEntryListFromCondType(
                                                                    (ServantSkillReleaseMaster_o *)Instance,
                                                                    70,
                                                                    0LL);
  v6 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    goto LABEL_15;
  if ( (int)costumeIds->max_length >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v9 = sub_B52A54(UserServantCollectionEntity___c__DisplayClass62_0_TypeInfo);
      UserServantCollectionEntity___c__DisplayClass62_0___ctor(
        (UserServantCollectionEntity___c__DisplayClass62_0_o *)v9,
        0LL);
      if ( !v9 )
        break;
      *(_QWORD *)(v9 + 24) = this;
      sub_B52920((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
      if ( v8 >= costumeIds->max_length )
      {
        v19 = sub_B52A88(v16);
        sub_B52A28(v19, 0LL);
      }
      *(_DWORD *)(v9 + 16) = costumeIds->m_Items[v8 + 1];
      v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ServantSkillReleaseEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v17,
        (Il2CppObject *)v9,
        Method_UserServantCollectionEntity___c__DisplayClass62_0__GetSkillChangeCostumeList_b__0__,
        (const MethodInfo_2BC90BC *)Method_System_Func_ServantSkillReleaseEntity__bool___ctor__);
      Instance = (DataManager_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                    EntryListFromCondType,
                                    (System_Func_T__bool__o *)v17,
                                    (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_ServantSkillReleaseEntity___);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v6 )
          break;
        System_Collections_Generic_List_int___Add(
          v6,
          *(_DWORD *)(v9 + 16),
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v8 >= (int)costumeIds->max_length )
        return v6;
    }
LABEL_15:
    sub_B52A5C(Instance, v4);
  }
  return v6;
}


UserServantCommandCardEntity_o *__fastcall UserServantCollectionEntity__GetUserCommandCardEntity(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  DataManager_o *v5; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t userId; // x20
  __int64 v8; // x22
  __int64 v9; // x21
  UserServantCommandCardMaster_o *v10; // x19
  const MethodInfo *v11; // x4
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42AE1D7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42AE1D7 = 1;
  }
  entity = 0LL;
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AEB684(v4);
  v5 = **(DataManager_o ***)(v4 + 184);
  if ( !v5 )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v5,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  userId = this->fields.userId;
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (UserServantCommandCardMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v5 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v14, 0LL);
  if ( !v10 )
LABEL_13:
    sub_B52A5C(v5, method);
  UserServantCommandCardMaster__TryGetEntity(v10, &entity, userId, (int)v5, v11);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  DataManager_o *v9; // x19
  __int64 v11; // x20
  __int64 v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42AE1D8 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE1D8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v13, 0LL);
  if ( !v8 )
    goto LABEL_18;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v8,
                                (int32_t)Instance,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_18;
  v9 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AEB684(v12);
  Instance = **(DataManager_o ***)(v12 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_18:
    sub_B52A5C(Instance, v4);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_27183244(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v9[1].fields.masterCheckName,
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  DataManager_o *v9; // x19
  __int64 v11; // x20
  __int64 v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42AE1D9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE1D9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v13, 0LL);
  if ( !v8 )
    goto LABEL_18;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v8,
                                (int32_t)Instance,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_18;
  v9 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AEB684(v12);
  Instance = **(DataManager_o ***)(v12 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_18:
    sub_B52A5C(Instance, v4);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_27183244(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v9[1].fields.masterCheckName,
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


bool __fastcall UserServantCollectionEntity__IsLinkLostStateServant(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  DataManager_o *v9; // x19
  __int64 v11; // x20
  __int64 v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42AE1DA & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE1DA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v13, 0LL);
  if ( !v8 )
    goto LABEL_18;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v8,
                                (int32_t)Instance,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_18;
  v9 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AEB684(v12);
  Instance = **(DataManager_o ***)(v12 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_18:
    sub_B52A5C(Instance, v4);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_27183244(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v9[1].fields.masterCheckName,
           0LL) == 3;
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
  int32_t status; // w8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x23
  int32_t *p_fakeValue; // x19
  void *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // t1
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  __int64 v12; // x22
  __int64 v13; // x20
  __int64 v14; // x21
  const MethodInfo *v15; // x1
  int32_t v16; // w20
  WarQuestSelectionMaster_o *v19; // x0
  __int64 v20; // x21
  __int64 v21; // x20
  ServantCommentMaster_o *v22; // x19
  System_Int32_array *priorityList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42AE1C7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantCollectionManager_TypeInfo);
    byte_42AE1C7 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
    v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    p_fakeValue = &this->fields.svtId.fields.fakeValue;
    v9 = v10;
    v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    p_svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(p_fakeValue - 2);
    v12 = *((_QWORD *)p_fakeValue - 1);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v25.fields.currentCryptoKey = v12;
    *(_QWORD *)&v25.fields.fakeValue = v9;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v25, 0LL);
    if ( !v11 )
      goto LABEL_33;
    Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v11,
                 (int32_t)Instance,
                 (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_33;
    if ( SvtType__IsEnemyCollectionDetail(*((_DWORD *)Instance + 21), 0LL) )
      goto LABEL_17;
    return 0;
  }
  p_svtId = &this->fields.svtId;
  p_fakeValue = &this->fields.svtId.fields.fakeValue;
LABEL_17:
  v13 = *(_QWORD *)&p_svtId->fields.currentCryptoKey;
  v14 = *(_QWORD *)p_fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v13;
  *(_QWORD *)&v26.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v26, 0LL);
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  if ( !UserServantCollectionManager__IsNew(v16, v15) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v19 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)Instance,
              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
      v20 = *(_QWORD *)&p_svtId->fields.currentCryptoKey;
      v21 = *(_QWORD *)p_fakeValue;
      v22 = (ServantCommentMaster_o *)v19;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v27.fields.currentCryptoKey = v20;
      *(_QWORD *)&v27.fields.fakeValue = v21;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v27, 0LL);
      if ( v22 )
        return ServantCommentMaster__GetNewList(v22, &idList, &priorityList, (int32_t)Instance, 0LL);
    }
LABEL_33:
    sub_B52A5C(Instance, v7);
  }
  return 1;
}


bool __fastcall UserServantCollectionEntity__IsPlayed(
        UserServantCollectionEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  int64_t voicePlayed; // x8
  UserServantVoicePlayedEntity_o *userServantVoicePlayedEntity; // x0
  UserServantVoicePlayedEntity_o **p_userServantVoicePlayedEntity; // x20
  UserServantVoicePlayedMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  __int64 v11; // x23
  __int64 v12; // x24
  int64_t v13; // x21
  __int64 v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_42AE1D1 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE1D1 = 1;
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
  Master_WarQuestSelectionMaster = (UserServantVoicePlayedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = UserId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v12;
  *(_QWORD *)&v15.fields.fakeValue = v11;
  userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                     v15,
                                                                     0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B52A5C(userServantVoicePlayedEntity, v14);
  if ( UserServantVoicePlayedMaster__TryGetEntity(
         Master_WarQuestSelectionMaster,
         p_userServantVoicePlayedEntity,
         v13,
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
  int32_t status; // w8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x23
  int32_t *p_fakeValue; // x19
  void *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x21
  __int64 v10; // t1
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  __int64 v12; // x22
  __int64 v13; // x20
  __int64 v14; // x19
  const MethodInfo *v15; // x1
  int32_t v16; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_42AE1C8 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantCollectionManager_TypeInfo);
    byte_42AE1C8 = 1;
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
        v13 = *(_QWORD *)&p_svtId->fields.currentCryptoKey;
        v14 = *(_QWORD *)p_fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v18.fields.currentCryptoKey = v13;
        *(_QWORD *)&v18.fields.fakeValue = v14;
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v18, 0LL);
        if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        }
        UserServantCollectionManager__SetOld(v16, v15);
        return;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
      v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      p_fakeValue = &this->fields.svtId.fields.fakeValue;
      v9 = v10;
      v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
      p_svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(p_fakeValue - 2);
      v12 = *((_QWORD *)p_fakeValue - 1);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v17.fields.currentCryptoKey = v12;
      *(_QWORD *)&v17.fields.fakeValue = v9;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v17, 0LL);
      if ( !v11
        || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         v11,
                         (int32_t)Instance,
                         (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
      {
LABEL_25:
        sub_B52A5C(Instance, v7);
      }
      if ( SvtType__IsEnemyCollectionDetail(*((_DWORD *)Instance + 21), 0LL) )
        goto LABEL_17;
    }
  }
}


bool __fastcall UserServantCollectionEntity__SetPlayed(
        UserServantCollectionEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  UserServantVoicePlayedEntity_o *userServantVoicePlayedEntity; // x0
  UserServantVoicePlayedEntity_o **p_userServantVoicePlayedEntity; // x21
  UserServantVoicePlayedMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  __int64 v9; // x23
  __int64 v10; // x24
  int64_t v11; // x20
  __int64 v12; // x1
  int64_t voicePlayed; // x8
  int64_t voicePlayed2; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42AE1D2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE1D2 = 1;
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
      Master_WarQuestSelectionMaster = (UserServantVoicePlayedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v11 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v16.fields.currentCryptoKey = v10;
      *(_QWORD *)&v16.fields.fakeValue = v9;
      userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                         v16,
                                                                         0LL);
      if ( !Master_WarQuestSelectionMaster )
LABEL_25:
        sub_B52A5C(userServantVoicePlayedEntity, v12);
      if ( UserServantVoicePlayedMaster__TryGetEntity(
             Master_WarQuestSelectionMaster,
             p_userServantVoicePlayedEntity,
             v11,
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
  void *Instance; // x0
  __int64 v10; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x24
  __int64 v13; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x23
  _DWORD *v15; // x23
  WarQuestSelectionMaster_o *v16; // x0
  __int64 v17; // x25
  __int64 v18; // x26
  ServantLimitMaster_o *v19; // x24
  _DWORD *v20; // x22
  int32_t v21; // w8
  int v22; // w8
  __int64 v23; // x9
  int v24; // w8
  int v25; // w10
  bool result; // w0
  __int64 v27; // x9
  int32_t v28; // w8
  int32_t status; // w28
  WarQuestSelectionMaster_o *v30; // x0
  __int64 v31; // x24
  __int64 v32; // x25
  ServantLimitMaster_o *v33; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42AE1C9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE1C9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v34.fields.currentCryptoKey = v13;
  *(_QWORD *)&v34.fields.fakeValue = v12;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v34, 0LL);
  if ( !v14 )
    goto LABEL_38;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v14,
               (int32_t)Instance,
               (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_38;
  v15 = Instance;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
  {
    status = this->fields.status;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v30 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)Instance,
              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      v32 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v31 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v33 = (ServantLimitMaster_o *)v30;
      if ( status == 2 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v36.fields.currentCryptoKey = v32;
        *(_QWORD *)&v36.fields.fakeValue = v31;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v36, 0LL);
        if ( v33 )
        {
          Instance = ServantLimitMaster__GetEntity(v33, (int32_t)Instance, v15[22], 0LL);
          if ( Instance )
          {
            *lv = *((_DWORD *)Instance + 7);
            *atk = *((_DWORD *)Instance + 12);
            v28 = *((_DWORD *)Instance + 10);
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
        *(_QWORD *)&v37.fields.currentCryptoKey = v32;
        *(_QWORD *)&v37.fields.fakeValue = v31;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v37, 0LL);
        if ( v33 )
        {
          Instance = ServantLimitMaster__GetEntity(v33, (int32_t)Instance, 0, 0LL);
          *lv = 1;
          if ( Instance )
          {
            *atk = *((_DWORD *)Instance + 11);
            v28 = *((_DWORD *)Instance + 9);
            result = 0;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_38:
    sub_B52A5C(Instance, v10);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v16 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (ServantLimitMaster_o *)v16;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v18;
  *(_QWORD *)&v35.fields.fakeValue = v17;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v35, 0LL);
  if ( !v19 )
    goto LABEL_38;
  Instance = ServantLimitMaster__GetEntity(v19, (int32_t)Instance, this->fields.maxLimitCount, 0LL);
  if ( !Instance )
    goto LABEL_38;
  v20 = Instance;
  v21 = *((_DWORD *)Instance + 6) == 4 ? 80 : 70;
  *lv = v21;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Instance )
    goto LABEL_38;
  Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, v15[33], *lv, 0LL);
  if ( !Instance )
    goto LABEL_38;
  v22 = v20[11];
  v23 = 274877907LL * *((_DWORD *)Instance + 7) * (v20[12] - v22);
  *atk = (v23 >> 38) + ((unsigned __int64)v23 >> 63) + v22;
  v24 = v20[9];
  v25 = *((_DWORD *)Instance + 7);
  result = 1;
  v27 = 274877907LL * v25 * (v20[10] - v24);
  v28 = (v27 >> 38) + ((unsigned __int64)v27 >> 63) + v24;
LABEL_37:
  *hp = v28;
  return result;
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCommandCodeIdList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t userId; // x20
  __int64 v7; // x22
  __int64 v8; // x21
  WarQuestSelectionMaster_o *v9; // x19
  const MethodInfo *v10; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42AE1D5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE1D5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v9 = MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
  if ( !v9 )
LABEL_9:
    sub_B52A5C(Instance, v4);
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           userId,
           (int32_t)Instance,
           v10);
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCostumeList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *costumeIds; // x8
  __int64 v4; // x22
  __int64 Instance; // x0
  __int64 v6; // x1
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x19
  unsigned __int64 v9; // x25
  signed __int64 v10; // x26
  struct System_Int32_array *v11; // x8
  int32_t v12; // w22
  __int64 v13; // x23
  __int64 v14; // x24
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__49_0; // x20
  Il2CppObject *v17; // x21
  struct UserServantCollectionEntity___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int size; // w21
  System_Int32_array *v26; // x20
  __int64 v27; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x8
  __int64 v30; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_42AE1D3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_ServantCostumeEntity___ctor__);
    sub_B52984(&System_Comparison_ServantCostumeEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_UserServantCollectionEntity___c__getCostumeList_b__49_0__);
    sub_B52984(&UserServantCollectionEntity___c_TypeInfo);
    byte_42AE1D3 = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v4 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v4 )
    return 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)v4 >= 1 )
  {
    v9 = 0LL;
    v10 = (int)v4;
    while ( 1 )
    {
      v11 = this->fields.costumeIds;
      if ( !v11 )
        break;
      if ( v9 >= v11->max_length )
      {
LABEL_40:
        v30 = sub_B52A88(Instance);
        sub_B52A28(v30, 0LL);
      }
      v12 = v11->m_Items[v9 + 1];
      v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v32.fields.currentCryptoKey = v14;
      *(_QWORD *)&v32.fields.fakeValue = v13;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v32, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = ServantCostumeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v12, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !v8 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
      }
      if ( (__int64)++v9 >= v10 )
        goto LABEL_19;
    }
LABEL_39:
    sub_B52A5C(Instance, v6);
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
    v17 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__49_0,
      v17,
      Method_UserServantCollectionEntity___c__getCostumeList_b__49_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ServantCostumeEntity___ctor__);
    v18 = UserServantCollectionEntity___c_TypeInfo->static_fields;
    v18->__9__49_0 = (struct System_Comparison_ServantCostumeEntity__o *)_9__49_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v18->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !v8 )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v8,
    (System_Comparison_T__o *)_9__49_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  size = v8->fields._size;
  Instance = sub_B5299C(int___TypeInfo, (unsigned int)size);
  v26 = (System_Int32_array *)Instance;
  if ( size >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( v8->fields._size <= (unsigned int)v27 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v28 = v8->fields._items->m_Items[v27];
      if ( !v28 || !Instance )
        goto LABEL_39;
      if ( (unsigned int)v27 >= *(_DWORD *)(Instance + 24) )
        goto LABEL_40;
      *(_DWORD *)(Instance + 32 + 4 * v27++) = v28->fields.missionConditionDetailId;
      if ( (int)v27 >= size )
        return v26;
    }
  }
  return v26;
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCostumeList_21476296(
        UserServantCollectionEntity_o *this,
        int32_t lv,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct System_Int32_array *costumeIds; // x8
  __int64 v6; // x20
  __int64 Instance; // x0
  __int64 v8; // x1
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x23
  ServantCostumeReleaseMaster_o *v10; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  unsigned __int64 v12; // x28
  struct System_Int32_array *v13; // x8
  int32_t v14; // w25
  __int64 v15; // x26
  __int64 v16; // x27
  __int64 v17; // x26
  __int64 v18; // x27
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__50_0; // x20
  Il2CppObject *v21; // x21
  struct UserServantCollectionEntity___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int size; // w21
  System_Int32_array *v30; // x20
  __int64 v31; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x8
  __int64 v34; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_42AE1D4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_ServantCostumeEntity___ctor__);
    sub_B52984(&System_Comparison_ServantCostumeEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_UserServantCollectionEntity___c__getCostumeList_b__50_0__);
    sub_B52984(&UserServantCollectionEntity___c_TypeInfo);
    byte_42AE1D4 = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v6 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v6 )
    return 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  v10 = (ServantCostumeReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)v6 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = this->fields.costumeIds;
      if ( !v13 )
        break;
      if ( v12 >= v13->max_length )
      {
LABEL_45:
        v34 = sub_B52A88(Instance);
        sub_B52A28(v34, 0LL);
      }
      v14 = v13->m_Items[v12 + 1];
      v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v38.fields.currentCryptoKey = v16;
      *(_QWORD *)&v38.fields.fakeValue = v15;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v38, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = ServantCostumeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v14, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v39.fields.currentCryptoKey = v18;
        *(_QWORD *)&v39.fields.fakeValue = v17;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v39, 0LL);
        if ( !v10 )
          break;
        Instance = ServantCostumeReleaseMaster__isEnableMountCostume(v10, Instance, v14, lv, limitCount, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
        }
      }
      if ( (__int64)++v12 >= (int)v6 )
        goto LABEL_24;
    }
LABEL_44:
    sub_B52A5C(Instance, v8);
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
    v21 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__50_0,
      v21,
      Method_UserServantCollectionEntity___c__getCostumeList_b__50_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ServantCostumeEntity___ctor__);
    v22 = UserServantCollectionEntity___c_TypeInfo->static_fields;
    v22->__9__50_0 = (struct System_Comparison_ServantCostumeEntity__o *)_9__50_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v22->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !v11 )
    goto LABEL_44;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v11,
    (System_Comparison_T__o *)_9__50_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  size = v11->fields._size;
  Instance = sub_B5299C(int___TypeInfo, (unsigned int)size);
  v30 = (System_Int32_array *)Instance;
  if ( size >= 1 )
  {
    v31 = 0LL;
    while ( 1 )
    {
      if ( v11->fields._size <= (unsigned int)v31 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v32 = v11->fields._items->m_Items[v31];
      if ( !v32 || !Instance )
        goto LABEL_44;
      if ( (unsigned int)v31 >= *(_DWORD *)(Instance + 24) )
        goto LABEL_45;
      *(_DWORD *)(Instance + 32 + 4 * v31++) = v32->fields.missionConditionDetailId;
      if ( (int)v31 >= size )
        return v30;
    }
  }
  return v30;
}


int32_t __fastcall UserServantCollectionEntity__getFriendShipRank(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_42AE1C6 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE1C6 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v6, 0LL);
}


bool __fastcall UserServantCollectionEntity__getFriendShipRankInfo(
        UserServantCollectionEntity_o *this,
        int32_t *friendshipRank,
        int32_t *maxFriendshipRank,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x22
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v14; // x22
  __int64 v15; // x23
  __int64 v16; // x24
  bool result; // w0
  int32_t v18; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_42AE1CE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE1CE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v19, 0LL);
  if ( !v12 )
LABEL_16:
    sub_B52A5C(Instance, v8);
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v12,
                                (int32_t)Instance,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity && (v14 = Entity, ServantEntity__get_IsServant(Entity, 0LL)) )
  {
    v15 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
    v16 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v20.fields.currentCryptoKey = v15;
    *(_QWORD *)&v20.fields.fakeValue = v16;
    *friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v20, 0LL);
    result = 1;
    v18 = this->fields.friendshipExceedCount + v14->fields.maxFriendshipRank;
  }
  else
  {
    v18 = 0;
    result = 0;
    *friendshipRank = -1;
  }
  *maxFriendshipRank = v18;
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
  void *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  WarEntity_o *Entity; // x20
  WarQuestSelectionMaster_o *v10; // x0
  __int64 v11; // x8
  ServantLimitMaster_o *v12; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_42AE1CF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE1CF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v14, 0LL);
  if ( !v8 )
    goto LABEL_13;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v8,
             (int32_t)Instance,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v10 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)Instance,
                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___),
        v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue,
        v12 = (ServantLimitMaster_o *)v10,
        *(_QWORD *)&v15.fields.currentCryptoKey = v11,
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15, 0LL),
        !Entity)
    || !v12
    || (Instance = ServantLimitMaster__GetEntity(v12, (int32_t)Instance, Entity->fields.targetId, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B52A5C(Instance, v4);
  }
  return *((_DWORD *)Instance + 7);
}


int32_t __fastcall UserServantCollectionEntity__getLimitCountMax(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42AE1D0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE1D0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
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
  int32_t friendshipRank; // w25
  __int64 v14; // x19
  __int64 v15; // x24
  int32_t v16; // w0
  int32_t maxLimitCount; // w24
  int32_t v18; // w19
  __int64 v19; // x19
  __int64 v20; // x19
  void *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v23; // x19
  __int64 v24; // x20
  ServantPassiveSkillMaster_o *v25; // x26
  int32_t v26; // w4
  ServantPassiveSkillMaster_o *v27; // x0
  BattleServantConfConponent_o *v28; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x19
  char v30; // w23
  BalanceConfig_c *v31; // x0
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  WarQuestSelectionMaster_o *v53; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v54; // x25
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  int v61; // w8
  int v62; // w24
  __int64 v63; // x8
  int32_t v64; // w27
  System_String_array **v65; // x26
  int64_t UserId; // x0
  __int64 v67; // x19
  __int64 v68; // x20
  int64_t v69; // x28
  int32_t v70; // w4
  int32_t BuddyPoint; // w28
  __int64 v72; // x19
  __int64 v73; // x20
  int32_t v74; // w3
  __int64 v75; // x19
  __int64 v76; // x8
  unsigned __int64 v77; // x20
  System_Int32_array *v78; // x8
  int max_length; // w9
  unsigned int v80; // w10
  __int64 v81; // x27
  char *v82; // x10
  _DWORD *v83; // x10
  int v84; // t1
  System_String_array *v85; // x8
  System_String_array *v86; // x9
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  __int64 v99; // x0
  int *v100; // [xsp+28h] [xbp-78h]
  EventServantPointRankMaster_o *v101; // [xsp+30h] [xbp-70h]
  UserEventServantPointMaster_o *Master_WarQuestSelectionMaster; // [xsp+38h] [xbp-68h]
  System_String_array **titleLista; // [xsp+40h] [xbp-60h]
  UserEventServantPointEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  v11 = idList;
  if ( (byte_42AE1CC & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string___TypeInfo);
    byte_42AE1CC = 1;
  }
  entity = 0LL;
  if ( isOwner )
  {
    friendshipRank = BasicHelper__DecryptValue_19348088(this->fields.friendshipRank, 0LL);
    if ( (dispLimitCount & 0x80000000) == 0 )
      goto LABEL_14;
  }
  else
  {
    friendshipRank = 0;
    if ( (dispLimitCount & 0x80000000) == 0 )
      goto LABEL_14;
  }
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v105.fields.currentCryptoKey = v14;
  *(_QWORD *)&v105.fields.fakeValue = v15;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v105, 0LL);
  maxLimitCount = this->fields.maxLimitCount;
  v18 = v16;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  dispLimitCount = ImageLimitCount__GetImageLimitCount(v18, maxLimitCount, 0LL);
LABEL_14:
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v20 = **(_QWORD **)(v19 + 192);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    sub_AEB684(v20);
  titleLista = titleList;
  Instance = **(void ***)(v20 + 184);
  if ( !Instance )
    goto LABEL_85;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v25 = (ServantPassiveSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v106.fields.currentCryptoKey = v24;
  *(_QWORD *)&v106.fields.fakeValue = v23;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v106, 0LL);
  if ( !v25 )
    goto LABEL_85;
  v26 = (int)Instance;
  v27 = v25;
  v28 = (BattleServantConfConponent_o *)titleLista;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    v27,
    v11,
    titleLista,
    explanationList,
    v26,
    this->fields.userId,
    this->fields.maxLv,
    this->fields.maxLimitCount,
    dispLimitCount,
    friendshipRank,
    -1,
    isOwner,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.svtId, 0LL);
  if ( !v29 )
    goto LABEL_85;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v29,
               (int32_t)Instance,
               (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !isOwner )
    return;
  if ( !Instance )
    goto LABEL_85;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
    return;
  if ( *v11 )
  {
    v30 = 0;
  }
  else
  {
    v31 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v31 = BalanceConfig_TypeInfo;
    }
    v32 = (System_Int32_array **)sub_B5299C(int___TypeInfo, (unsigned int)v31->static_fields->SvtPassiveSkillListMax);
    *v11 = (System_Int32_array *)v32;
    sub_B52920((BattleServantConfConponent_o *)v11, v32, v33, v34, v35, v36, v37, v38);
    v39 = (System_Int32_array **)sub_B5299C(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleLista = (System_String_array *)v39;
    sub_B52920((BattleServantConfConponent_o *)titleLista, v39, v40, v41, v42, v43, v44, v45);
    v46 = (System_String_array *)sub_B5299C(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v46;
    sub_B52920(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    v30 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v53 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v54 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillMaster___);
  Instance = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance || (Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL)) == 0LL )
LABEL_85:
    sub_B52A5C(Instance, idList);
  v61 = *((_DWORD *)Instance + 6);
  if ( v61 >= 1 )
  {
    v62 = 0;
    v100 = (int *)Instance;
    v101 = (EventServantPointRankMaster_o *)v53;
    do
    {
      if ( v62 >= (unsigned int)v61 )
        goto LABEL_84;
      v63 = *((_QWORD *)Instance + v62 + 4);
      if ( !v63 )
        goto LABEL_85;
      v64 = *(_DWORD *)(v63 + 16);
      v65 = explanationList;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v68 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v67 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v69 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v107.fields.currentCryptoKey = v68;
      *(_QWORD *)&v107.fields.fakeValue = v67;
      v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v107, 0LL);
      Instance = Master_WarQuestSelectionMaster;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_85;
      if ( UserEventServantPointMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v69, v64, v70, 0LL) )
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
      v73 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v72 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v108.fields.currentCryptoKey = v73;
      *(_QWORD *)&v108.fields.fakeValue = v72;
      v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v108, 0LL);
      Instance = v101;
      if ( !v101 )
        goto LABEL_85;
      Instance = EventServantPointRankMaster__GetEnableEntity(v101, v64, BuddyPoint, v74, 0LL);
      if ( Instance )
      {
        v75 = *((_QWORD *)Instance + 4);
        if ( !v75 )
          goto LABEL_85;
        v76 = *(_QWORD *)(v75 + 24);
        explanationList = v65;
        v28 = (BattleServantConfConponent_o *)titleLista;
        if ( (int)v76 >= 1 )
        {
          v77 = 0LL;
          while ( v77 < (unsigned int)v76 )
          {
            v78 = *v11;
            if ( !*v11 )
              goto LABEL_85;
            max_length = v78->max_length;
            if ( max_length >= 1 )
            {
              idList = (System_Int32_array **)*(unsigned int *)(v75 + 4 * v77 + 32);
              v80 = 0;
              while ( 1 )
              {
                if ( v80 >= max_length )
                  goto LABEL_84;
                v81 = (int)v80;
                v82 = (char *)v78 + 4 * (int)v80;
                v84 = *((_DWORD *)v82 + 8);
                v83 = v82 + 32;
                if ( !v84 )
                  break;
                v80 = v81 + 1;
                if ( (int)v81 + 1 >= max_length )
                  goto LABEL_77;
              }
              *v83 = (_DWORD)idList;
              if ( !v54 )
                goto LABEL_85;
              Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           v54,
                           (int32_t)idList,
                           (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              v85 = *titleLista;
              if ( !*titleLista )
                goto LABEL_85;
              v86 = *explanationList;
              if ( !*explanationList || !Instance )
                goto LABEL_85;
              if ( (unsigned int)v81 >= v85->max_length || (unsigned int)v81 >= v86->max_length )
                break;
              SkillEntity__getSkillMessageInfo(
                (SkillEntity_o *)Instance,
                &v85->m_Items[v81],
                &v86->m_Items[v81],
                0,
                0LL);
              v30 = 0;
            }
LABEL_77:
            LODWORD(v76) = *(_DWORD *)(v75 + 24);
            if ( (__int64)++v77 >= (int)v76 )
              goto LABEL_80;
          }
LABEL_84:
          v99 = sub_B52A88(Instance);
          sub_B52A28(v99, 0LL);
        }
      }
      else
      {
        explanationList = v65;
        v28 = (BattleServantConfConponent_o *)titleLista;
      }
LABEL_80:
      Instance = v100;
      ++v62;
      v61 = v100[6];
    }
    while ( v62 < v61 );
  }
  if ( (v30 & 1) != 0 )
  {
    *v11 = 0LL;
    sub_B52920((BattleServantConfConponent_o *)v11, 0LL, v55, v56, v57, v58, v59, v60);
    v28->klass = 0LL;
    sub_B52920(v28, 0LL, v87, v88, v89, v90, v91, v92);
    *explanationList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)explanationList, 0LL, v93, v94, v95, v96, v97, v98);
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
  __int64 Instance; // x0
  __int64 v9; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x19
  __int64 v12; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x23
  ServantEntity_o *Entity; // x24
  __int64 v15; // x19
  __int64 v16; // x19
  ServantSkillMaster_o *v17; // x23
  const MethodInfo *v18; // x1
  System_Int32_array *SkillLevelList; // x25
  __int64 v20; // x22
  __int64 v21; // x27
  int32_t v22; // w0
  int32_t maxLimitCount; // w22
  int32_t v24; // w19
  BalanceConfig_c *v25; // x0
  BalanceConfig_c *v26; // x0
  SkillInfo_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  unsigned __int64 v34; // x20
  int32_t *v35; // x22
  __int64 v36; // x24
  SkillInfo_o *v37; // x26
  __int64 v38; // x27
  __int64 v39; // x28
  signed __int64 v40; // x27
  ServantSkillEntity_o *v41; // x28
  int32_t skillNum; // w8
  __int64 v43; // x19
  __int64 v44; // x28
  int32_t v45; // w0
  SkillInfo_array *v46; // x19
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x0
  __int64 v54; // x0
  signed __int64 v55; // [xsp+20h] [xbp-70h]
  bool IsServantEquip; // [xsp+2Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_42AE1CB & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SkillInfo___TypeInfo);
    sub_B52984(&SkillInfo_TypeInfo);
    byte_42AE1CB = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v60.fields.currentCryptoKey = v11;
  *(_QWORD *)&v60.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v60, 0LL);
  if ( !v13 )
    goto LABEL_56;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v13,
                                Instance,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v16 = **(_QWORD **)(v15 + 192);
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AEB684(v16);
  Instance = **(_QWORD **)(v16 + 184);
  if ( !Instance )
    goto LABEL_56;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !Entity )
    goto LABEL_56;
  v17 = (ServantSkillMaster_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip(Entity, 0LL);
  SkillLevelList = UserServantCollectionEntity__getSkillLevelList(this, v18);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v61.fields.currentCryptoKey = v21;
    *(_QWORD *)&v61.fields.fakeValue = v20;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v61, 0LL);
    maxLimitCount = this->fields.maxLimitCount;
    v24 = v22;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    dispLimitCount = ImageLimitCount__GetImageLimitCount(v24, maxLimitCount, 0LL);
  }
  if ( skillListNum <= 0 )
  {
    v25 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    skillListNum = v25->static_fields->SvtSkillListMax;
  }
  if ( IsServantEquip )
  {
    v26 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    skillListNum = v26->static_fields->SvtEquipSkillListMax;
  }
  v27 = (SkillInfo_array *)sub_B5299C(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v27;
  sub_B52920((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  if ( skillListNum >= 1 )
  {
    v34 = 0LL;
    v35 = &SkillLevelList->m_Items[1];
    v36 = 32LL;
    v55 = skillListNum;
    while ( 1 )
    {
      v37 = (SkillInfo_o *)sub_B52A54(SkillInfo_TypeInfo);
      SkillInfo___ctor(v37, 0LL);
      v39 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v62.fields.currentCryptoKey = v39;
      *(_QWORD *)&v62.fields.fakeValue = v38;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v62, 0LL);
      if ( !v17 )
        break;
      v40 = v34 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            v17,
                            Instance,
                            (int)v34 + 1,
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
        if ( !v37 )
          break;
        v41 = (ServantSkillEntity_o *)Instance;
        v37->fields.id = *(_DWORD *)(Instance + 28);
        if ( !SkillLevelList )
          break;
        if ( v34 >= SkillLevelList->max_length )
          goto LABEL_57;
        v37->fields.lv = v35[v34];
        if ( v34 >= SkillLevelList->max_length )
          goto LABEL_57;
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v37->fields.charge,
          &v37->fields.title,
          &v37->fields.explanation,
          v35[v34],
          IsServantEquip,
          0LL);
        Instance = ServantSkillEntity__GetStrengthStatus(v41, 0LL);
        v37->fields.strengthStatus = Instance;
        skillNum = v41->fields.skillNum;
        v37->fields.isUse = 1;
        v37->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v37 )
          break;
        v37->fields.lv = -1;
        if ( !IsServantEquip )
        {
          v43 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v44 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v63.fields.currentCryptoKey = v43;
          *(_QWORD *)&v63.fields.fakeValue = v44;
          v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v63, 0LL);
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(v17, v45, v40, 0LL);
          if ( Instance )
          {
            v37->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v37->fields.title,
              &v37->fields.explanation,
              0LL);
          }
        }
      }
      v46 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_B52A44(v37, v46->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v54 = sub_B52A7C();
        sub_B52A28(v54, 0LL);
      }
      if ( v34 >= v46->max_length )
      {
LABEL_57:
        v53 = sub_B52A88(Instance);
        sub_B52A28(v53, 0LL);
      }
      *(Il2CppClass **)((char *)&v46->obj.klass + v36) = (Il2CppClass *)v37;
      sub_B52920(
        (BattleServantConfConponent_o *)((char *)v46 + v36),
        (System_Int32_array **)v37,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
      v36 += 8LL;
      ++v34;
      if ( v40 >= v55 )
        return;
    }
LABEL_56:
    sub_B52A5C(Instance, v9);
  }
}


System_Int32_array *__fastcall UserServantCollectionEntity__getSkillLevelList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v7; // x19
  int32_t skillLv3; // w8
  __int64 v9; // x20
  unsigned __int64 v10; // x23
  __int64 v12; // x0

  if ( (byte_42AE1CA & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&int___TypeInfo);
    byte_42AE1CA = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_B5299C(int___TypeInfo, (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  if ( !v4 )
    sub_B52A5C(0LL, v5);
  namespaze = (unsigned int)v4->_1.namespaze;
  v7 = (System_Int32_array *)v4;
  if ( !namespaze
    || (LODWORD(v4->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v4->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_18:
    v12 = sub_B52A88(v4);
    sub_B52A28(v12, 0LL);
  }
  skillLv3 = this->fields.skillLv3;
  v9 = 11LL;
  v4->_1.byval_arg.bits = skillLv3;
  while ( 1 )
  {
    v4 = BalanceConfig_TypeInfo;
    v10 = v9 - 8;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v10 >= v4->static_fields->SvtEquipSkillListMax )
      return v7;
    if ( v10 >= v7->max_length )
      goto LABEL_18;
    *((_DWORD *)&v7->obj.klass + v9++) = 1;
  }
}


int32_t __fastcall UserServantCollectionEntity__getSvtId(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_42AE1C5 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE1C5 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v6, 0LL);
}


bool __fastcall UserServantCollectionEntity__getTreasureDeviceInfo(
        UserServantCollectionEntity_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  TreasureDvcInfo_o *v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x23
  __int64 v17; // x24
  int32_t v18; // w23
  __int64 v19; // x22
  __int64 v20; // x24
  int32_t v21; // w0
  int32_t maxLimitCount; // w22
  int32_t v23; // w24
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v25; // x25
  __int64 v26; // x26
  ServantTreasureDvcMaster_o *v27; // x24
  ServantTreasureDvcEntity_o *UseEntity; // x0
  __int64 v29; // x1
  TreasureDvcInfo_o *v30; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_42AE1CD & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&TreasureDvcInfo_TypeInfo);
    byte_42AE1CD = 1;
  }
  v9 = (TreasureDvcInfo_o *)sub_B52A54(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v9, 0LL);
  *tdInfo = v9;
  sub_B52920((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  v16 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v16;
  *(_QWORD *)&v32.fields.fakeValue = v17;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v32, 0LL);
  if ( (dispLimitCount & 0x80000000) != 0 )
  {
    v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v33.fields.currentCryptoKey = v20;
    *(_QWORD *)&v33.fields.fakeValue = v19;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v33, 0LL);
    maxLimitCount = this->fields.maxLimitCount;
    v23 = v21;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    dispLimitCount = ImageLimitCount__GetImageLimitCount(v23, maxLimitCount, 0LL);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v27 = (ServantTreasureDvcMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v34.fields.currentCryptoKey = v26;
  *(_QWORD *)&v34.fields.fakeValue = v25;
  UseEntity = (ServantTreasureDvcEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                              v34,
                                              0LL);
  if ( !v27 )
    goto LABEL_28;
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                v27,
                (int32_t)UseEntity,
                this->fields.userId,
                this->fields.maxLv,
                this->fields.maxLimitCount,
                dispLimitCount,
                v18,
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
        v30 = *tdInfo;
        if ( *tdInfo )
        {
          UseEntity = (ServantTreasureDvcEntity_o *)ServantTreasureDvcEntity__getEffectExplanation(
                                                      UseEntity,
                                                      &v30->fields.name,
                                                      &v30->fields.explanation,
                                                      &v30->fields.maxLv,
                                                      &v30->fields.guageCount,
                                                      &v30->fields.cardId,
                                                      &v30->fields.strengthStatus,
                                                      &v30->fields.treasureDeviceNum,
                                                      v30->fields.lv,
                                                      0LL);
          v30->fields.isUse = (unsigned __int8)UseEntity & 1;
          if ( *tdInfo )
          {
            LOBYTE(UseEntity) = (*tdInfo)->fields.isUse;
            return (char)UseEntity;
          }
        }
      }
    }
LABEL_28:
    sub_B52A5C(UseEntity, v29);
  }
  return (char)UseEntity;
}


UserCommandCodeEntity_o *__fastcall UserServantCollectionEntity__getUserCommandCodeEntity(
        UserServantCollectionEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t userId; // x21
  __int64 v9; // x23
  __int64 v10; // x22
  UserServantCommandCodeMaster_o *v11; // x20
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x2
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42AE1D6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE1D6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (UserServantCommandCodeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v16, 0LL);
  if ( !v11 )
    goto LABEL_12;
  if ( UserServantCommandCodeMaster__TryGetEntity(v11, &entity, userId, (int)Instance, v12) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v13);
LABEL_12:
    sub_B52A5C(Instance, v6);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE5B4 & 1) == 0 )
  {
    sub_B52984(&UserServantCollectionEntity___c_TypeInfo);
    byte_42AE5B4 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(UserServantCollectionEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserServantCollectionEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall UserServantCollectionEntity___c___getCostumeList_b__50_0(
        UserServantCollectionEntity___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall UserServantCollectionEntity___c__DisplayClass62_0___ctor(
        UserServantCollectionEntity___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantCollectionEntity___c__DisplayClass62_0___GetSkillChangeCostumeList_b__0(
        UserServantCollectionEntity___c__DisplayClass62_0_o *this,
        ServantSkillReleaseEntity_o *d,
        const MethodInfo *method)
{
  UserServantCollectionEntity___c__DisplayClass62_0_o *v4; // x20
  struct UserServantCollectionEntity_o *_4__this; // x8
  int32_t condTargetId; // w23
  __int64 v7; // x21
  __int64 v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_42AE5B5 & 1) == 0 )
  {
    this = (UserServantCollectionEntity___c__DisplayClass62_0_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AE5B5 = 1;
  }
  if ( !d || (_4__this = v4->fields.__4__this) == 0LL )
    sub_B52A5C(this, d);
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
  return condTargetId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL)
      && d->fields.condNum == v4->fields.costumeId;
}