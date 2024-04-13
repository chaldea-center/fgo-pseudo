void __fastcall UserServantCollectionEntity___ctor(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6B29 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E6B29 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserServantCollectionEntity___ctor_21797428(
        UserServantCollectionEntity_o *this,
        UserServantCollectionEntity_o *e,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Int32_array *tdPlayed; // x1

  if ( (byte_42E6B2A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)e, (_DWORD)method, v3);
    byte_42E6B2A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  if ( !e )
    sub_B5D69C(v6, v7);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tdPlayed,
    (System_Int32_array **)tdPlayed,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.createdAt = e->fields.createdAt;
}


void __fastcall UserServantCollectionEntity___ctor_21797688(
        UserServantCollectionEntity_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int128 v10; // q0

  if ( (byte_42E6B2B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, userId, svtId, method);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8, v9);
    byte_42E6B2B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  *(_QWORD *)&v10 = 0x100000001LL;
  *((_QWORD *)&v10 + 1) = 0x100000001LL;
  this->fields.status = 0;
  *(_OWORD *)&this->fields.skillLv1 = v10;
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
  __int64 v3; // x3

  if ( (byte_42E6B28 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__int___, svtId, (_DWORD)method, v3);
    byte_42E6B28 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           svtId,
           (const MethodInfo_1AE3148 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserServantCollectionEntity__CreatePrimaryKey(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t userId; // x19
  __int64 v6; // x21
  __int64 v7; // x20
  int32_t v8; // w1
  const MethodInfo *v9; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_42E6B27 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6B27 = 1;
  }
  userId = this->fields.userId;
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v11, 0LL);
  return UserServantCollectionEntity__CreatePK(userId, v8, v9);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v20; // x26
  __int64 v21; // x27
  ServantAppendPassiveSkillMaster_o *v22; // x25
  __int64 v23; // x0
  __int64 v24; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42E6B44 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___,
      (_DWORD)idList,
      (_DWORD)titleList,
      explanationList);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17, v18);
    byte_42E6B44 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
  v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v22 = (ServantAppendPassiveSkillMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v21;
  *(_QWORD *)&v25.fields.fakeValue = v20;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25, 0LL);
  if ( !v22 )
    sub_B5D69C(v23, v24);
  ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo(
    v22,
    idList,
    titleList,
    explanationList,
    releaseStateList,
    lvList,
    v23,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  DataManager_o *Instance; // x0
  __int64 v33; // x1
  System_Collections_Generic_List_T__o *EntryListFromCondType; // x20
  System_Collections_Generic_List_int__o *v35; // x21
  struct System_Int32_array *costumeIds; // x24
  unsigned __int64 v37; // x25
  __int64 v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v46; // x23
  __int64 v48; // x0

  if ( (byte_42E6B43 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_ServantSkillReleaseEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_ServantSkillReleaseEntity__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_ServantSkillReleaseEntity__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(
      &Method_UserServantCollectionEntity___c__DisplayClass63_0__GetSkillChangeCostumeList_b__0__,
      v26,
      v27,
      v28);
    sub_B5D5C4(&UserServantCollectionEntity___c__DisplayClass63_0_TypeInfo, v29, v30, v31);
    byte_42E6B43 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
  if ( !Instance )
    goto LABEL_15;
  EntryListFromCondType = (System_Collections_Generic_List_T__o *)ServantSkillReleaseMaster__GetEntryListFromCondType(
                                                                    (ServantSkillReleaseMaster_o *)Instance,
                                                                    70,
                                                                    0LL);
  v35 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v35,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    goto LABEL_15;
  if ( (int)costumeIds->max_length >= 1 )
  {
    v37 = 0LL;
    while ( 1 )
    {
      v38 = sub_B5D694(UserServantCollectionEntity___c__DisplayClass63_0_TypeInfo);
      UserServantCollectionEntity___c__DisplayClass63_0___ctor(
        (UserServantCollectionEntity___c__DisplayClass63_0_o *)v38,
        0LL);
      if ( !v38 )
        break;
      *(_QWORD *)(v38 + 24) = this;
      sub_B5D560((BattleServantConfConponent_o *)(v38 + 24), (System_Int32_array **)this, v39, v40, v41, v42, v43, v44);
      if ( v37 >= costumeIds->max_length )
      {
        v48 = sub_B5D6C8(v45);
        sub_B5D668(v48, 0LL);
      }
      *(_DWORD *)(v38 + 16) = costumeIds->m_Items[v37 + 1];
      v46 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ServantSkillReleaseEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v46,
        (Il2CppObject *)v38,
        Method_UserServantCollectionEntity___c__DisplayClass63_0__GetSkillChangeCostumeList_b__0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_ServantSkillReleaseEntity__bool___ctor__);
      Instance = (DataManager_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                    EntryListFromCondType,
                                    (System_Func_T__bool__o *)v46,
                                    (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_ServantSkillReleaseEntity___);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v35 )
          break;
        System_Collections_Generic_List_int___Add(
          v35,
          *(_DWORD *)(v38 + 16),
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( (__int64)++v37 >= (int)costumeIds->max_length )
        return v35;
    }
LABEL_15:
    sub_B5D69C(Instance, v33);
  }
  return v35;
}


UserServantCommandCardEntity_o *__fastcall UserServantCollectionEntity__GetUserCommandCardEntity(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x20
  __int64 v12; // x20
  DataManager_o *v13; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t userId; // x20
  __int64 v16; // x22
  __int64 v17; // x21
  UserServantCommandCardMaster_o *v18; // x19
  const MethodInfo *v19; // x4
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_42E6B3E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8, v9, v10);
    byte_42E6B3E = 1;
  }
  entity = 0LL;
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AF52C4(v12);
  v13 = **(DataManager_o ***)(v12 + 184);
  if ( !v13 )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v13,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  userId = this->fields.userId;
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (UserServantCommandCardMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v16;
  *(_QWORD *)&v22.fields.fakeValue = v17;
  v13 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v22, 0LL);
  if ( !v18 )
LABEL_13:
    sub_B5D69C(v13, method);
  UserServantCommandCardMaster__TryGetEntity(v18, &entity, userId, (int)v13, v19);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v23; // x20
  __int64 v24; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x19
  DataManager_o *v26; // x19
  __int64 v28; // x20
  __int64 v29; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42E6B3F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCollectionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E6B3F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v24;
  *(_QWORD *)&v30.fields.fakeValue = v23;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
  if ( !v25 )
    goto LABEL_18;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v25,
                                (int32_t)Instance,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_18;
  v26 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v29 = **(_QWORD **)(v28 + 192);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AF52C4(v29);
  Instance = **(DataManager_o ***)(v29 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_18:
    sub_B5D69C(Instance, v21);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_27496032(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v26[1].fields.masterCheckName,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v23; // x20
  __int64 v24; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x19
  DataManager_o *v26; // x19
  __int64 v28; // x20
  __int64 v29; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42E6B40 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCollectionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E6B40 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v24;
  *(_QWORD *)&v30.fields.fakeValue = v23;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
  if ( !v25 )
    goto LABEL_18;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v25,
                                (int32_t)Instance,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_18;
  v26 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v29 = **(_QWORD **)(v28 + 192);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AF52C4(v29);
  Instance = **(DataManager_o ***)(v29 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_18:
    sub_B5D69C(Instance, v21);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_27496032(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v26[1].fields.masterCheckName,
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


bool __fastcall UserServantCollectionEntity__IsLinkBadStateServant(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v23; // x20
  __int64 v24; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x19
  DataManager_o *v26; // x19
  __int64 v28; // x20
  __int64 v29; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42E6B42 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCollectionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E6B42 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v24;
  *(_QWORD *)&v30.fields.fakeValue = v23;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
  if ( !v25 )
    goto LABEL_18;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v25,
                                (int32_t)Instance,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_18;
  v26 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v29 = **(_QWORD **)(v28 + 192);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AF52C4(v29);
  Instance = **(DataManager_o ***)(v29 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_18:
    sub_B5D69C(Instance, v21);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_27496032(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v26[1].fields.masterCheckName,
           0LL) == 4;
}


bool __fastcall UserServantCollectionEntity__IsLinkLostStateServant(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v23; // x20
  __int64 v24; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x19
  DataManager_o *v26; // x19
  __int64 v28; // x20
  __int64 v29; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42E6B41 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCollectionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E6B41 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v24;
  *(_QWORD *)&v30.fields.fakeValue = v23;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
  if ( !v25 )
    goto LABEL_18;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v25,
                                (int32_t)Instance,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_18;
  v26 = Instance;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL) )
    return 0;
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v29 = **(_QWORD **)(v28 + 192);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AF52C4(v29);
  Instance = **(DataManager_o ***)(v29 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCollectionMaster___)) == 0LL )
  {
LABEL_18:
    sub_B5D69C(Instance, v21);
  }
  return ServantCollectionMaster__GetOverrideDisplayType_27496032(
           (ServantCollectionMaster_o *)Instance,
           (int32_t)v26[1].fields.masterCheckName,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int32_t status; // w8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x23
  int32_t *p_fakeValue; // x19
  void *Instance; // x0
  __int64 v27; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v29; // x21
  __int64 v30; // t1
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x20
  __int64 v32; // x22
  __int64 v33; // x20
  __int64 v34; // x21
  const MethodInfo *v35; // x1
  int32_t v36; // w20
  WarQuestSelectionMaster_o *v39; // x0
  __int64 v40; // x21
  __int64 v41; // x20
  ServantCommentMaster_o *v42; // x19
  System_Int32_array *priorityList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_42E6B2E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCommentMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&UserServantCollectionManager_TypeInfo, v20, v21, v22);
    byte_42E6B2E = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    v30 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    p_fakeValue = &this->fields.svtId.fields.fakeValue;
    v29 = v30;
    v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    p_svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(p_fakeValue - 2);
    v32 = *((_QWORD *)p_fakeValue - 1);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v45.fields.currentCryptoKey = v32;
    *(_QWORD *)&v45.fields.fakeValue = v29;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v45, 0LL);
    if ( !v31 )
      goto LABEL_33;
    Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v31,
                 (int32_t)Instance,
                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_33;
    if ( SvtType__IsEnemyCollectionDetail(*((_DWORD *)Instance + 21), 0LL) )
      goto LABEL_17;
    return 0;
  }
  p_svtId = &this->fields.svtId;
  p_fakeValue = &this->fields.svtId.fields.fakeValue;
LABEL_17:
  v33 = *(_QWORD *)&p_svtId->fields.currentCryptoKey;
  v34 = *(_QWORD *)p_fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  *(_QWORD *)&v46.fields.fakeValue = v34;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v46, 0LL);
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  if ( !UserServantCollectionManager__IsNew(v36, v35) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v39 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)Instance,
              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
      v40 = *(_QWORD *)&p_svtId->fields.currentCryptoKey;
      v41 = *(_QWORD *)p_fakeValue;
      v42 = (ServantCommentMaster_o *)v39;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v47.fields.currentCryptoKey = v40;
      *(_QWORD *)&v47.fields.fakeValue = v41;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v47, 0LL);
      if ( v42 )
        return ServantCommentMaster__GetNewList(v42, &idList, &priorityList, (int32_t)Instance, 0LL);
    }
LABEL_33:
    sub_B5D69C(Instance, v27);
  }
  return 1;
}


bool __fastcall UserServantCollectionEntity__IsPlayed(
        UserServantCollectionEntity_o *this,
        int32_t flagNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int64_t voicePlayed; // x8
  UserServantVoicePlayedEntity_o *userServantVoicePlayedEntity; // x0
  UserServantVoicePlayedEntity_o **p_userServantVoicePlayedEntity; // x20
  UserServantVoicePlayedMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  __int64 v21; // x23
  __int64 v22; // x24
  int64_t v23; // x21
  __int64 v24; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42E6B38 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___, flagNum, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    byte_42E6B38 = 1;
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
  Master_WarQuestSelectionMaster = (UserServantVoicePlayedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v23 = UserId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v22;
  *(_QWORD *)&v25.fields.fakeValue = v21;
  userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                     v25,
                                                                     0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B5D69C(userServantVoicePlayedEntity, v24);
  if ( UserServantVoicePlayedMaster__TryGetEntity(
         Master_WarQuestSelectionMaster,
         p_userServantVoicePlayedEntity,
         v23,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int32_t status; // w8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x23
  int32_t *p_fakeValue; // x19
  void *Instance; // x0
  __int64 v24; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v26; // x21
  __int64 v27; // t1
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x20
  __int64 v29; // x22
  __int64 v30; // x20
  __int64 v31; // x19
  const MethodInfo *v32; // x1
  int32_t v33; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_42E6B2F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&UserServantCollectionManager_TypeInfo, v17, v18, v19);
    byte_42E6B2F = 1;
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
        v30 = *(_QWORD *)&p_svtId->fields.currentCryptoKey;
        v31 = *(_QWORD *)p_fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v35.fields.currentCryptoKey = v30;
        *(_QWORD *)&v35.fields.fakeValue = v31;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v35, 0LL);
        if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        }
        UserServantCollectionManager__SetOld(v33, v32);
        return;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_25;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      v27 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      p_fakeValue = &this->fields.svtId.fields.fakeValue;
      v26 = v27;
      v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
      p_svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(p_fakeValue - 2);
      v29 = *((_QWORD *)p_fakeValue - 1);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v34.fields.currentCryptoKey = v29;
      *(_QWORD *)&v34.fields.fakeValue = v26;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v34, 0LL);
      if ( !v28
        || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         v28,
                         (int32_t)Instance,
                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
      {
LABEL_25:
        sub_B5D69C(Instance, v24);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UserServantVoicePlayedEntity_o *userServantVoicePlayedEntity; // x0
  UserServantVoicePlayedEntity_o **p_userServantVoicePlayedEntity; // x21
  UserServantVoicePlayedMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  __int64 v19; // x23
  __int64 v20; // x24
  int64_t v21; // x20
  __int64 v22; // x1
  int64_t voicePlayed; // x8
  int64_t voicePlayed2; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_42E6B39 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantVoicePlayedMaster___, flagNum, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    byte_42E6B39 = 1;
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
      Master_WarQuestSelectionMaster = (UserServantVoicePlayedMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantVoicePlayedMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v21 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v26.fields.currentCryptoKey = v20;
      *(_QWORD *)&v26.fields.fakeValue = v19;
      userServantVoicePlayedEntity = (UserServantVoicePlayedEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                         v26,
                                                                         0LL);
      if ( !Master_WarQuestSelectionMaster )
LABEL_25:
        sub_B5D69C(userServantVoicePlayedEntity, v22);
      if ( UserServantVoicePlayedMaster__TryGetEntity(
             Master_WarQuestSelectionMaster,
             p_userServantVoicePlayedEntity,
             v21,
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  void *Instance; // x0
  __int64 v25; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v27; // x24
  __int64 v28; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x23
  _DWORD *v30; // x23
  WarQuestSelectionMaster_o *v31; // x0
  __int64 v32; // x25
  __int64 v33; // x26
  ServantLimitMaster_o *v34; // x24
  _DWORD *v35; // x22
  int32_t v36; // w8
  int v37; // w8
  __int64 v38; // x9
  int v39; // w8
  int v40; // w10
  bool result; // w0
  __int64 v42; // x9
  int32_t v43; // w8
  int32_t status; // w28
  WarQuestSelectionMaster_o *v45; // x0
  __int64 v46; // x24
  __int64 v47; // x25
  ServantLimitMaster_o *v48; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_42E6B30 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExpMaster___, (_DWORD)lv, (_DWORD)hp, atk);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42E6B30 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v28 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v49.fields.currentCryptoKey = v28;
  *(_QWORD *)&v49.fields.fakeValue = v27;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v49, 0LL);
  if ( !v29 )
    goto LABEL_38;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v29,
               (int32_t)Instance,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_38;
  v30 = Instance;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
  {
    status = this->fields.status;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v45 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)Instance,
              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      v47 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v46 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v48 = (ServantLimitMaster_o *)v45;
      if ( status == 2 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v51.fields.currentCryptoKey = v47;
        *(_QWORD *)&v51.fields.fakeValue = v46;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v51, 0LL);
        if ( v48 )
        {
          Instance = ServantLimitMaster__GetEntity(v48, (int32_t)Instance, v30[22], 0LL);
          if ( Instance )
          {
            *lv = *((_DWORD *)Instance + 7);
            *atk = *((_DWORD *)Instance + 12);
            v43 = *((_DWORD *)Instance + 10);
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
        *(_QWORD *)&v52.fields.currentCryptoKey = v47;
        *(_QWORD *)&v52.fields.fakeValue = v46;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v52, 0LL);
        if ( v48 )
        {
          Instance = ServantLimitMaster__GetEntity(v48, (int32_t)Instance, 0, 0LL);
          *lv = 1;
          if ( Instance )
          {
            *atk = *((_DWORD *)Instance + 11);
            v43 = *((_DWORD *)Instance + 9);
            result = 0;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_38:
    sub_B5D69C(Instance, v25);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v31 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v33 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v34 = (ServantLimitMaster_o *)v31;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v50.fields.currentCryptoKey = v33;
  *(_QWORD *)&v50.fields.fakeValue = v32;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v50, 0LL);
  if ( !v34 )
    goto LABEL_38;
  Instance = ServantLimitMaster__GetEntity(v34, (int32_t)Instance, this->fields.maxLimitCount, 0LL);
  if ( !Instance )
    goto LABEL_38;
  v35 = Instance;
  v36 = *((_DWORD *)Instance + 6) == 4 ? 80 : 70;
  *lv = v36;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExpMaster___);
  if ( !Instance )
    goto LABEL_38;
  Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, v30[33], *lv, 0LL);
  if ( !Instance )
    goto LABEL_38;
  v37 = v35[11];
  v38 = 274877907LL * *((_DWORD *)Instance + 7) * (v35[12] - v37);
  *atk = (v38 >> 38) + ((unsigned __int64)v38 >> 63) + v37;
  v39 = v35[9];
  v40 = *((_DWORD *)Instance + 7);
  result = 1;
  v42 = 274877907LL * v40 * (v35[10] - v39);
  v43 = (v42 >> 38) + ((unsigned __int64)v42 >> 63) + v39;
LABEL_37:
  *hp = v43;
  return result;
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCommandCodeIdList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t userId; // x20
  __int64 v15; // x22
  __int64 v16; // x21
  WarQuestSelectionMaster_o *v17; // x19
  const MethodInfo *v18; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_42E6B3C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E6B3C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v15;
  *(_QWORD *)&v20.fields.fakeValue = v16;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v20, 0LL);
  if ( !v17 )
LABEL_9:
    sub_B5D69C(Instance, v12);
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           userId,
           (int32_t)Instance,
           v18);
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCostumeList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  struct System_Int32_array *costumeIds; // x8
  __int64 v48; // x22
  __int64 Instance; // x0
  __int64 v50; // x1
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x19
  unsigned __int64 v53; // x25
  signed __int64 v54; // x26
  struct System_Int32_array *v55; // x8
  int32_t v56; // w22
  __int64 v57; // x23
  __int64 v58; // x24
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__49_0; // x20
  Il2CppObject *v61; // x21
  struct UserServantCollectionEntity___c_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  int size; // w21
  System_Int32_array *v70; // x20
  __int64 v71; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v72; // x8
  __int64 v74; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_42E6B3A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_ServantCostumeEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_ServantCostumeEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&Method_UserServantCollectionEntity___c__getCostumeList_b__49_0__, v41, v42, v43);
    sub_B5D5C4(&UserServantCollectionEntity___c_TypeInfo, v44, v45, v46);
    byte_42E6B3A = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v48 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v48 )
    return 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v52,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)v48 >= 1 )
  {
    v53 = 0LL;
    v54 = (int)v48;
    while ( 1 )
    {
      v55 = this->fields.costumeIds;
      if ( !v55 )
        break;
      if ( v53 >= v55->max_length )
      {
LABEL_40:
        v74 = sub_B5D6C8(Instance);
        sub_B5D668(v74, 0LL);
      }
      v56 = v55->m_Items[v53 + 1];
      v58 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v57 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v76.fields.currentCryptoKey = v58;
      *(_QWORD *)&v76.fields.fakeValue = v57;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v76, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = ServantCostumeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v56, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !v52 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v52,
          (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
      }
      if ( (__int64)++v53 >= v54 )
        goto LABEL_19;
    }
LABEL_39:
    sub_B5D69C(Instance, v50);
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
    v61 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__49_0,
      v61,
      Method_UserServantCollectionEntity___c__getCostumeList_b__49_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ServantCostumeEntity___ctor__);
    v62 = UserServantCollectionEntity___c_TypeInfo->static_fields;
    v62->__9__49_0 = (struct System_Comparison_ServantCostumeEntity__o *)_9__49_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v62->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
  }
  if ( !v52 )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v52,
    (System_Comparison_T__o *)_9__49_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  size = v52->fields._size;
  Instance = sub_B5D5DC(int___TypeInfo, (unsigned int)size);
  v70 = (System_Int32_array *)Instance;
  if ( size >= 1 )
  {
    v71 = 0LL;
    while ( 1 )
    {
      if ( v52->fields._size <= (unsigned int)v71 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v72 = v52->fields._items->m_Items[v71];
      if ( !v72 || !Instance )
        goto LABEL_39;
      if ( (unsigned int)v71 >= *(_DWORD *)(Instance + 24) )
        goto LABEL_40;
      *(_DWORD *)(Instance + 32 + 4 * v71++) = v72->fields.missionConditionDetailId;
      if ( (int)v71 >= size )
        return v70;
    }
  }
  return v70;
}


System_Int32_array *__fastcall UserServantCollectionEntity__getCostumeList_21807488(
        UserServantCollectionEntity_o *this,
        int32_t lv,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  struct System_Int32_array *costumeIds; // x8
  __int64 v48; // x20
  __int64 Instance; // x0
  __int64 v50; // x1
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x23
  ServantCostumeReleaseMaster_o *v52; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x19
  unsigned __int64 v54; // x28
  struct System_Int32_array *v55; // x8
  int32_t v56; // w25
  __int64 v57; // x26
  __int64 v58; // x27
  __int64 v59; // x26
  __int64 v60; // x27
  struct UserServantCollectionEntity___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__50_0; // x20
  Il2CppObject *v63; // x21
  struct UserServantCollectionEntity___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  int size; // w21
  System_Int32_array *v72; // x20
  __int64 v73; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v74; // x8
  __int64 v76; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_42E6B3B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_ServantCostumeEntity___ctor__, lv, limitCount, method);
    sub_B5D5C4(&System_Comparison_ServantCostumeEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Count__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCostumeEntity__get_Item__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_ServantCostumeEntity__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&Method_UserServantCollectionEntity___c__getCostumeList_b__50_0__, v41, v42, v43);
    sub_B5D5C4(&UserServantCollectionEntity___c_TypeInfo, v44, v45, v46);
    byte_42E6B3B = 1;
  }
  entity = 0LL;
  costumeIds = this->fields.costumeIds;
  if ( !costumeIds )
    return 0LL;
  v48 = *(_QWORD *)&costumeIds->max_length;
  if ( !(_DWORD)v48 )
    return 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  v52 = (ServantCostumeReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantCostumeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v53,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantCostumeEntity___ctor__);
  if ( (int)v48 >= 1 )
  {
    v54 = 0LL;
    while ( 1 )
    {
      v55 = this->fields.costumeIds;
      if ( !v55 )
        break;
      if ( v54 >= v55->max_length )
      {
LABEL_45:
        v76 = sub_B5D6C8(Instance);
        sub_B5D668(v76, 0LL);
      }
      v56 = v55->m_Items[v54 + 1];
      v58 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v57 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v80.fields.currentCryptoKey = v58;
      *(_QWORD *)&v80.fields.fakeValue = v57;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v80, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = ServantCostumeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v56, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v60 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v59 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v81.fields.currentCryptoKey = v60;
        *(_QWORD *)&v81.fields.fakeValue = v59;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v81, 0LL);
        if ( !v52 )
          break;
        Instance = ServantCostumeReleaseMaster__isEnableMountCostume(v52, Instance, v56, lv, limitCount, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( !v53 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v53,
            (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantCostumeEntity__Add__);
        }
      }
      if ( (__int64)++v54 >= (int)v48 )
        goto LABEL_24;
    }
LABEL_44:
    sub_B5D69C(Instance, v50);
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
    v63 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantCostumeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__50_0,
      v63,
      Method_UserServantCollectionEntity___c__getCostumeList_b__50_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ServantCostumeEntity___ctor__);
    v64 = UserServantCollectionEntity___c_TypeInfo->static_fields;
    v64->__9__50_0 = (struct System_Comparison_ServantCostumeEntity__o *)_9__50_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v64->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  if ( !v53 )
    goto LABEL_44;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v53,
    (System_Comparison_T__o *)_9__50_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantCostumeEntity__Sort__);
  size = v53->fields._size;
  Instance = sub_B5D5DC(int___TypeInfo, (unsigned int)size);
  v72 = (System_Int32_array *)Instance;
  if ( size >= 1 )
  {
    v73 = 0LL;
    while ( 1 )
    {
      if ( v53->fields._size <= (unsigned int)v73 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v74 = v53->fields._items->m_Items[v73];
      if ( !v74 || !Instance )
        goto LABEL_44;
      if ( (unsigned int)v73 >= *(_DWORD *)(Instance + 24) )
        goto LABEL_45;
      *(_DWORD *)(Instance + 32 + 4 * v73++) = v74->fields.missionConditionDetailId;
      if ( (int)v73 >= size )
        return v72;
    }
  }
  return v72;
}


int32_t __fastcall UserServantCollectionEntity__getFriendShipRank(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42E6B2D & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6B2D = 1;
  }
  v5 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v5;
  *(_QWORD *)&v8.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v8, 0LL);
}


bool __fastcall UserServantCollectionEntity__getFriendShipRankInfo(
        UserServantCollectionEntity_o *this,
        int32_t *friendshipRank,
        int32_t *maxFriendshipRank,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  WebViewManager_o *Instance; // x0
  __int64 v17; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v19; // x23
  __int64 v20; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x22
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v23; // x22
  __int64 v24; // x23
  __int64 v25; // x24
  bool result; // w0
  int32_t v27; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_42E6B35 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantMaster___,
      (_DWORD)friendshipRank,
      (_DWORD)maxFriendshipRank,
      method);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42E6B35 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v20;
  *(_QWORD *)&v28.fields.fakeValue = v19;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v28, 0LL);
  if ( !v21 )
LABEL_16:
    sub_B5D69C(Instance, v17);
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v21,
                                (int32_t)Instance,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity && (v23 = Entity, ServantEntity__get_IsServant(Entity, 0LL)) )
  {
    v24 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
    v25 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v29.fields.currentCryptoKey = v24;
    *(_QWORD *)&v29.fields.fakeValue = v25;
    *friendshipRank = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v29, 0LL);
    result = 1;
    v27 = this->fields.friendshipExceedCount + v23->fields.maxFriendshipRank;
  }
  else
  {
    v27 = 0;
    result = 0;
    *friendshipRank = -1;
  }
  *maxFriendshipRank = v27;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  void *Instance; // x0
  __int64 v18; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v20; // x21
  __int64 v21; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x20
  WarEntity_o *Entity; // x20
  WarQuestSelectionMaster_o *v24; // x0
  __int64 v25; // x8
  ServantLimitMaster_o *v26; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_42E6B36 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E6B36 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v21;
  *(_QWORD *)&v28.fields.fakeValue = v20;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v28, 0LL);
  if ( !v22 )
    goto LABEL_13;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v22,
             (int32_t)Instance,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v24 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)Instance,
                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___),
        v25 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey,
        *(_QWORD *)&v29.fields.fakeValue = *(_QWORD *)&this->fields.svtId.fields.fakeValue,
        v26 = (ServantLimitMaster_o *)v24,
        *(_QWORD *)&v29.fields.currentCryptoKey = v25,
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v29, 0LL),
        !Entity)
    || !v26
    || (Instance = ServantLimitMaster__GetEntity(v26, (int32_t)Instance, Entity->fields.targetId, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(Instance, v18);
  }
  return *((_DWORD *)Instance + 7);
}


int32_t __fastcall UserServantCollectionEntity__getLimitCountMax(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42E6B37 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E6B37 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
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
  System_String_array **v9; // x28
  System_Int32_array **v11; // x21
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int32_t friendshipRank; // w25
  __int64 v62; // x19
  __int64 v63; // x24
  int32_t v64; // w0
  int32_t maxLimitCount; // w24
  int32_t v66; // w19
  __int64 v67; // x19
  __int64 v68; // x19
  void *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v71; // x19
  __int64 v72; // x20
  ServantPassiveSkillMaster_o *v73; // x26
  int32_t v74; // w4
  ServantPassiveSkillMaster_o *v75; // x0
  BattleServantConfConponent_o *v76; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v77; // x19
  char v78; // w23
  BalanceConfig_c *v79; // x0
  System_Int32_array **v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  WarQuestSelectionMaster_o *v101; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v102; // x25
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  int v109; // w8
  int v110; // w24
  __int64 v111; // x8
  int32_t v112; // w27
  System_String_array **v113; // x26
  int64_t UserId; // x0
  __int64 v115; // x19
  __int64 v116; // x20
  int64_t v117; // x28
  int32_t v118; // w4
  int32_t BuddyPoint; // w28
  __int64 v120; // x19
  __int64 v121; // x20
  int32_t v122; // w3
  __int64 v123; // x19
  __int64 v124; // x8
  unsigned __int64 v125; // x20
  System_Int32_array *v126; // x8
  int max_length; // w9
  unsigned int v128; // w10
  __int64 v129; // x27
  char *v130; // x10
  _DWORD *v131; // x10
  int v132; // t1
  System_String_array *v133; // x8
  System_String_array *v134; // x9
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  __int64 v147; // x0
  int *v148; // [xsp+28h] [xbp-78h]
  EventServantPointRankMaster_o *v149; // [xsp+30h] [xbp-70h]
  UserEventServantPointMaster_o *Master_WarQuestSelectionMaster; // [xsp+38h] [xbp-68h]
  System_String_array **titleLista; // [xsp+40h] [xbp-60h]
  UserEventServantPointEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16

  v9 = explanationList;
  v11 = idList;
  if ( (byte_42E6B33 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)idList, (_DWORD)titleList, explanationList);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantPassiveSkillMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v28, v29, v30);
    sub_B5D5C4(&DataManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v34, v35, v36);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v37, v38, v39);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&int___TypeInfo, v43, v44, v45);
    sub_B5D5C4(&NetworkManager_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v52, v53, v54);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v55, v56, v57);
    sub_B5D5C4(&string___TypeInfo, v58, v59, v60);
    byte_42E6B33 = 1;
  }
  entity = 0LL;
  if ( isOwner )
  {
    friendshipRank = BasicHelper__DecryptValue_21084824(this->fields.friendshipRank, 0LL);
    if ( (dispLimitCount & 0x80000000) == 0 )
      goto LABEL_14;
  }
  else
  {
    friendshipRank = 0;
    if ( (dispLimitCount & 0x80000000) == 0 )
      goto LABEL_14;
  }
  v62 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v63 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v153.fields.currentCryptoKey = v62;
  *(_QWORD *)&v153.fields.fakeValue = v63;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v153, 0LL);
  maxLimitCount = this->fields.maxLimitCount;
  v66 = v64;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  dispLimitCount = ImageLimitCount__GetImageLimitCount(v66, maxLimitCount, 0LL);
LABEL_14:
  v67 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v67 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v68 = **(_QWORD **)(v67 + 192);
  if ( (*(_BYTE *)(v68 + 306) & 1) == 0 )
    sub_AF52C4(v68);
  titleLista = titleList;
  Instance = **(void ***)(v68 + 184);
  if ( !Instance )
    goto LABEL_85;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantPassiveSkillMaster___);
  v72 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v71 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v73 = (ServantPassiveSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v154.fields.currentCryptoKey = v72;
  *(_QWORD *)&v154.fields.fakeValue = v71;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v154, 0LL);
  if ( !v73 )
    goto LABEL_85;
  v74 = (int)Instance;
  v75 = v73;
  v76 = (BattleServantConfConponent_o *)titleLista;
  ServantPassiveSkillMaster__getPassiveSkillInfo(
    v75,
    v11,
    titleLista,
    v9,
    v74,
    this->fields.userId,
    this->fields.maxLv,
    this->fields.maxLimitCount,
    dispLimitCount,
    friendshipRank,
    -1,
    isOwner,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v77 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(this->fields.svtId, 0LL);
  if ( !v77 )
    goto LABEL_85;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v77,
               (int32_t)Instance,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !isOwner )
    return;
  if ( !Instance )
    goto LABEL_85;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) )
    return;
  if ( *v11 )
  {
    v78 = 0;
  }
  else
  {
    v79 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v79 = BalanceConfig_TypeInfo;
    }
    v80 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, (unsigned int)v79->static_fields->SvtPassiveSkillListMax);
    *v11 = (System_Int32_array *)v80;
    sub_B5D560((BattleServantConfConponent_o *)v11, v80, v81, v82, v83, v84, v85, v86);
    v87 = (System_Int32_array **)sub_B5D5DC(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleLista = (System_String_array *)v87;
    sub_B5D560((BattleServantConfConponent_o *)titleLista, v87, v88, v89, v90, v91, v92, v93);
    v94 = (System_Int32_array **)sub_B5D5DC(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *v9 = (System_String_array *)v94;
    sub_B5D560((BattleServantConfConponent_o *)v9, v94, v95, v96, v97, v98, v99, v100);
    v78 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v101 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v102 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
  Instance = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance || (Instance = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 12, 0, 0LL)) == 0LL )
LABEL_85:
    sub_B5D69C(Instance, idList);
  v109 = *((_DWORD *)Instance + 6);
  if ( v109 >= 1 )
  {
    v110 = 0;
    v148 = (int *)Instance;
    v149 = (EventServantPointRankMaster_o *)v101;
    do
    {
      if ( v110 >= (unsigned int)v109 )
        goto LABEL_84;
      v111 = *((_QWORD *)Instance + v110 + 4);
      if ( !v111 )
        goto LABEL_85;
      v112 = *(_DWORD *)(v111 + 16);
      v113 = v9;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v116 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v115 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v117 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v155.fields.currentCryptoKey = v116;
      *(_QWORD *)&v155.fields.fakeValue = v115;
      v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v155, 0LL);
      Instance = Master_WarQuestSelectionMaster;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_85;
      if ( UserEventServantPointMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v117, v112, v118, 0LL) )
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
      v121 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v120 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v156.fields.currentCryptoKey = v121;
      *(_QWORD *)&v156.fields.fakeValue = v120;
      v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v156, 0LL);
      Instance = v149;
      if ( !v149 )
        goto LABEL_85;
      Instance = EventServantPointRankMaster__GetEnableEntity(v149, v112, BuddyPoint, v122, 0LL);
      if ( Instance )
      {
        v123 = *((_QWORD *)Instance + 4);
        if ( !v123 )
          goto LABEL_85;
        v124 = *(_QWORD *)(v123 + 24);
        v9 = v113;
        v76 = (BattleServantConfConponent_o *)titleLista;
        if ( (int)v124 >= 1 )
        {
          v125 = 0LL;
          while ( v125 < (unsigned int)v124 )
          {
            v126 = *v11;
            if ( !*v11 )
              goto LABEL_85;
            max_length = v126->max_length;
            if ( max_length >= 1 )
            {
              idList = (System_Int32_array **)*(unsigned int *)(v123 + 4 * v125 + 32);
              v128 = 0;
              while ( 1 )
              {
                if ( v128 >= max_length )
                  goto LABEL_84;
                v129 = (int)v128;
                v130 = (char *)v126 + 4 * (int)v128;
                v132 = *((_DWORD *)v130 + 8);
                v131 = v130 + 32;
                if ( !v132 )
                  break;
                v128 = v129 + 1;
                if ( (int)v129 + 1 >= max_length )
                  goto LABEL_77;
              }
              *v131 = (_DWORD)idList;
              if ( !v102 )
                goto LABEL_85;
              Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           v102,
                           (int32_t)idList,
                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              v133 = *titleLista;
              if ( !*titleLista )
                goto LABEL_85;
              v134 = *v9;
              if ( !*v9 || !Instance )
                goto LABEL_85;
              if ( (unsigned int)v129 >= v133->max_length || (unsigned int)v129 >= v134->max_length )
                break;
              SkillEntity__getSkillMessageInfo(
                (SkillEntity_o *)Instance,
                &v133->m_Items[v129],
                &v134->m_Items[v129],
                0,
                0LL);
              v78 = 0;
            }
LABEL_77:
            LODWORD(v124) = *(_DWORD *)(v123 + 24);
            if ( (__int64)++v125 >= (int)v124 )
              goto LABEL_80;
          }
LABEL_84:
          v147 = sub_B5D6C8(Instance);
          sub_B5D668(v147, 0LL);
        }
      }
      else
      {
        v9 = v113;
        v76 = (BattleServantConfConponent_o *)titleLista;
      }
LABEL_80:
      Instance = v148;
      ++v110;
      v109 = v148[6];
    }
    while ( v110 < v109 );
  }
  if ( (v78 & 1) != 0 )
  {
    *v11 = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)v11, 0LL, v103, v104, v105, v106, v107, v108);
    v76->klass = 0LL;
    sub_B5D560(v76, 0LL, v135, v136, v137, v138, v139, v140);
    *v9 = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)v9, 0LL, v141, v142, v143, v144, v145, v146);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCollectionEntity__getSkillInfo(
        UserServantCollectionEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t beforeClearQuestId,
        int32_t dispLimitCount,
        int32_t skillListNum,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  __int64 Instance; // x0
  __int64 v36; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v38; // x19
  __int64 v39; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v40; // x23
  ServantEntity_o *Entity; // x24
  __int64 v42; // x19
  __int64 v43; // x19
  ServantSkillMaster_o *v44; // x23
  const MethodInfo *v45; // x1
  System_Int32_array *SkillLevelList; // x25
  __int64 v47; // x22
  __int64 v48; // x27
  int32_t v49; // w0
  int32_t maxLimitCount; // w22
  int32_t v51; // w19
  BalanceConfig_c *v52; // x0
  BalanceConfig_c *v53; // x0
  SkillInfo_array *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  unsigned __int64 v61; // x20
  int32_t *v62; // x22
  __int64 v63; // x24
  SkillInfo_o *v64; // x26
  __int64 v65; // x27
  __int64 v66; // x28
  signed __int64 v67; // x27
  ServantSkillEntity_o *v68; // x28
  int32_t skillNum; // w8
  __int64 v70; // x19
  __int64 v71; // x28
  int32_t v72; // w0
  SkillInfo_array *v73; // x19
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 v80; // x0
  __int64 v81; // x0
  signed __int64 v82; // [xsp+20h] [xbp-70h]
  bool IsServantEquip; // [xsp+2Ch] [xbp-64h]
  int32_t dispLimitCounta; // [xsp+3Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16

  dispLimitCounta = dispLimitCount;
  if ( (byte_42E6B32 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)skillInfoList, beforeClearQuestId, *(_QWORD *)&dispLimitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&SkillInfo___TypeInfo, v29, v30, v31);
    sub_B5D5C4(&SkillInfo_TypeInfo, v32, v33, v34);
    byte_42E6B32 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v38 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v40 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v87.fields.currentCryptoKey = v38;
  *(_QWORD *)&v87.fields.fakeValue = v39;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v87, 0LL);
  if ( !v40 )
    goto LABEL_56;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v40,
                                Instance,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v42 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v43 = **(_QWORD **)(v42 + 192);
  if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
    sub_AF52C4(v43);
  Instance = **(_QWORD **)(v43 + 184);
  if ( !Instance )
    goto LABEL_56;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !Entity )
    goto LABEL_56;
  v44 = (ServantSkillMaster_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip(Entity, 0LL);
  SkillLevelList = UserServantCollectionEntity__getSkillLevelList(this, v45);
  if ( (dispLimitCounta & 0x80000000) != 0 )
  {
    v48 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v47 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v88.fields.currentCryptoKey = v48;
    *(_QWORD *)&v88.fields.fakeValue = v47;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v88, 0LL);
    maxLimitCount = this->fields.maxLimitCount;
    v51 = v49;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    dispLimitCounta = ImageLimitCount__GetImageLimitCount(v51, maxLimitCount, 0LL);
  }
  if ( skillListNum <= 0 )
  {
    v52 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v52 = BalanceConfig_TypeInfo;
    }
    skillListNum = v52->static_fields->SvtSkillListMax;
  }
  if ( IsServantEquip )
  {
    v53 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v53 = BalanceConfig_TypeInfo;
    }
    skillListNum = v53->static_fields->SvtEquipSkillListMax;
  }
  v54 = (SkillInfo_array *)sub_B5D5DC(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v54;
  sub_B5D560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v54, v55, v56, v57, v58, v59, v60);
  if ( skillListNum >= 1 )
  {
    v61 = 0LL;
    v62 = &SkillLevelList->m_Items[1];
    v63 = 32LL;
    v82 = skillListNum;
    while ( 1 )
    {
      v64 = (SkillInfo_o *)sub_B5D694(SkillInfo_TypeInfo);
      SkillInfo___ctor(v64, 0LL);
      v66 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v65 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v89.fields.currentCryptoKey = v66;
      *(_QWORD *)&v89.fields.fakeValue = v65;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v89, 0LL);
      if ( !v44 )
        break;
      v67 = v61 + 1;
      Instance = (__int64)ServantSkillMaster__getUseEntity(
                            v44,
                            Instance,
                            (int)v61 + 1,
                            this->fields.userId,
                            this->fields.maxLv,
                            this->fields.maxLimitCount,
                            dispLimitCounta,
                            beforeClearQuestId,
                            -1,
                            -1LL,
                            0,
                            0LL);
      if ( Instance )
      {
        if ( !v64 )
          break;
        v68 = (ServantSkillEntity_o *)Instance;
        v64->fields.id = *(_DWORD *)(Instance + 28);
        if ( !SkillLevelList )
          break;
        if ( v61 >= SkillLevelList->max_length )
          goto LABEL_57;
        v64->fields.lv = v62[v61];
        if ( v61 >= SkillLevelList->max_length )
          goto LABEL_57;
        ServantSkillEntity__getEffectExplanation(
          (ServantSkillEntity_o *)Instance,
          &v64->fields.charge,
          &v64->fields.title,
          &v64->fields.explanation,
          v62[v61],
          IsServantEquip,
          0LL);
        Instance = ServantSkillEntity__GetStrengthStatus(v68, 0LL);
        v64->fields.strengthStatus = Instance;
        skillNum = v68->fields.skillNum;
        v64->fields.isUse = 1;
        v64->fields.skillRecord = skillNum;
      }
      else
      {
        if ( !v64 )
          break;
        v64->fields.lv = -1;
        if ( !IsServantEquip )
        {
          v70 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v71 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v90.fields.currentCryptoKey = v70;
          *(_QWORD *)&v90.fields.fakeValue = v71;
          v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v90, 0LL);
          Instance = (__int64)ServantSkillMaster__getLowPriorityEntity(v44, v72, v67, 0LL);
          if ( Instance )
          {
            v64->fields.id = *(_DWORD *)(Instance + 28);
            ServantSkillEntity__getAcquisitionMethodExplanation(
              (ServantSkillEntity_o *)Instance,
              &v64->fields.title,
              &v64->fields.explanation,
              0LL);
          }
        }
      }
      v73 = *skillInfoList;
      if ( !*skillInfoList )
        break;
      Instance = sub_B5D684(v64, v73->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v81 = sub_B5D6BC();
        sub_B5D668(v81, 0LL);
      }
      if ( v61 >= v73->max_length )
      {
LABEL_57:
        v80 = sub_B5D6C8(Instance);
        sub_B5D668(v80, 0LL);
      }
      *(Il2CppClass **)((char *)&v73->obj.klass + v63) = (Il2CppClass *)v64;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)v73 + v63),
        (System_Int32_array **)v64,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
      v63 += 8LL;
      ++v61;
      if ( v67 >= v82 )
        return;
    }
LABEL_56:
    sub_B5D69C(Instance, v36);
  }
}


System_Int32_array *__fastcall UserServantCollectionEntity__getSkillLevelList(
        UserServantCollectionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  BalanceConfig_c *v9; // x0
  __int64 v10; // x1
  unsigned int namespaze; // w8
  System_Int32_array *v12; // x19
  int32_t skillLv3; // w8
  __int64 v14; // x20
  unsigned __int64 v15; // x23
  __int64 v17; // x0

  if ( (byte_42E6B31 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    byte_42E6B31 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (BalanceConfig_c *)sub_B5D5DC(int___TypeInfo, (unsigned int)v8->static_fields->SvtEquipSkillListMax);
  if ( !v9 )
    sub_B5D69C(0LL, v10);
  namespaze = (unsigned int)v9->_1.namespaze;
  v12 = (System_Int32_array *)v9;
  if ( !namespaze
    || (LODWORD(v9->_1.byval_arg.data) = this->fields.skillLv1, namespaze == 1)
    || (HIDWORD(v9->_1.byval_arg.data) = this->fields.skillLv2, namespaze <= 2) )
  {
LABEL_18:
    v17 = sub_B5D6C8(v9);
    sub_B5D668(v17, 0LL);
  }
  skillLv3 = this->fields.skillLv3;
  v14 = 11LL;
  v9->_1.byval_arg.bits = skillLv3;
  while ( 1 )
  {
    v9 = BalanceConfig_TypeInfo;
    v15 = v14 - 8;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v15 >= v9->static_fields->SvtEquipSkillListMax )
      return v12;
    if ( v15 >= v12->max_length )
      goto LABEL_18;
    *((_DWORD *)&v12->obj.klass + v14++) = 1;
  }
}


int32_t __fastcall UserServantCollectionEntity__getSvtId(UserServantCollectionEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42E6B2C & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6B2C = 1;
  }
  v6 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v8, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  TreasureDvcInfo_o *v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x23
  __int64 v29; // x24
  int32_t v30; // w23
  __int64 v31; // x22
  __int64 v32; // x24
  int32_t v33; // w0
  int32_t maxLimitCount; // w22
  int32_t v35; // w24
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v37; // x25
  __int64 v38; // x26
  ServantTreasureDvcMaster_o *v39; // x24
  ServantTreasureDvcEntity_o *UseEntity; // x0
  __int64 v41; // x1
  TreasureDvcInfo_o *v42; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  ImageLimitCount = dispLimitCount;
  if ( (byte_42E6B34 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_ServantTreasureDvcMaster___,
      (_DWORD)tdInfo,
      beforeClearQuestId,
      *(_QWORD *)&dispLimitCount);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&TreasureDvcInfo_TypeInfo, v18, v19, v20);
    byte_42E6B34 = 1;
  }
  v21 = (TreasureDvcInfo_o *)sub_B5D694(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v21, 0LL);
  *tdInfo = v21;
  sub_B5D560((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
  v28 = *(_QWORD *)&this->fields.friendshipRank.fields.currentCryptoKey;
  v29 = *(_QWORD *)&this->fields.friendshipRank.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v44.fields.currentCryptoKey = v28;
  *(_QWORD *)&v44.fields.fakeValue = v29;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v44, 0LL);
  if ( (ImageLimitCount & 0x80000000) != 0 )
  {
    v32 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v31 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v45.fields.currentCryptoKey = v32;
    *(_QWORD *)&v45.fields.fakeValue = v31;
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v45, 0LL);
    maxLimitCount = this->fields.maxLimitCount;
    v35 = v33;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(v35, maxLimitCount, 0LL);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v38 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v39 = (ServantTreasureDvcMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v38;
  *(_QWORD *)&v46.fields.fakeValue = v37;
  UseEntity = (ServantTreasureDvcEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                              v46,
                                              0LL);
  if ( !v39 )
    goto LABEL_28;
  UseEntity = ServantTreasureDvcMaster__getUseEntity(
                v39,
                (int32_t)UseEntity,
                this->fields.userId,
                this->fields.maxLv,
                this->fields.maxLimitCount,
                ImageLimitCount,
                v30,
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
        v42 = *tdInfo;
        if ( *tdInfo )
        {
          UseEntity = (ServantTreasureDvcEntity_o *)ServantTreasureDvcEntity__getEffectExplanation(
                                                      UseEntity,
                                                      &v42->fields.name,
                                                      &v42->fields.explanation,
                                                      &v42->fields.maxLv,
                                                      &v42->fields.guageCount,
                                                      &v42->fields.cardId,
                                                      &v42->fields.strengthStatus,
                                                      &v42->fields.treasureDeviceNum,
                                                      v42->fields.lv,
                                                      0LL);
          v42->fields.isUse = (unsigned __int8)UseEntity & 1;
          if ( *tdInfo )
          {
            LOBYTE(UseEntity) = (*tdInfo)->fields.isUse;
            return (char)UseEntity;
          }
        }
      }
    }
LABEL_28:
    sub_B5D69C(UseEntity, v41);
  }
  return (char)UseEntity;
}


UserCommandCodeEntity_o *__fastcall UserServantCollectionEntity__getUserCommandCodeEntity(
        UserServantCollectionEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t userId; // x21
  __int64 v16; // x23
  __int64 v17; // x22
  UserServantCommandCodeMaster_o *v18; // x20
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x2
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42E6B3D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, index, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E6B3D = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  userId = this->fields.userId;
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v18 = (UserServantCommandCodeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v16;
  *(_QWORD *)&v23.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v23, 0LL);
  if ( !v18 )
    goto LABEL_12;
  if ( UserServantCommandCodeMaster__TryGetEntity(v18, &entity, userId, (int)Instance, v19) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserServantCommandCodeEntity__GetUserCommandCodeEntity(entity, index, v20);
LABEL_12:
    sub_B5D69C(Instance, v13);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7027 & 1) == 0 )
  {
    sub_B5D5C4(&UserServantCollectionEntity___c_TypeInfo, v1, v2, v3);
    byte_42E7027 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(UserServantCollectionEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserServantCollectionEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall UserServantCollectionEntity___c___getCostumeList_b__50_0(
        UserServantCollectionEntity___c_o *this,
        ServantCostumeEntity_o *a,
        ServantCostumeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall UserServantCollectionEntity___c__DisplayClass63_0___ctor(
        UserServantCollectionEntity___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantCollectionEntity___c__DisplayClass63_0___GetSkillChangeCostumeList_b__0(
        UserServantCollectionEntity___c__DisplayClass63_0_o *this,
        ServantSkillReleaseEntity_o *d,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserServantCollectionEntity___c__DisplayClass63_0_o *v5; // x20
  struct UserServantCollectionEntity_o *_4__this; // x8
  int32_t condTargetId; // w23
  __int64 v8; // x21
  __int64 v9; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v5 = this;
  if ( (byte_42E7028 & 1) == 0 )
  {
    this = (UserServantCollectionEntity___c__DisplayClass63_0_o *)sub_B5D5C4(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                    (_DWORD)d,
                                                                    (_DWORD)method,
                                                                    v3);
    byte_42E7028 = 1;
  }
  if ( !d || (_4__this = v5->fields.__4__this) == 0LL )
    sub_B5D69C(this, d);
  condTargetId = d->fields.condTargetId;
  v9 = *(_QWORD *)&_4__this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&_4__this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v9;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  return condTargetId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v11, 0LL)
      && d->fields.condNum == v5->fields.costumeId;
}