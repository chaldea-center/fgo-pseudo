void __fastcall QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.questId = questId;
}


void __fastcall QuestRestrictionInfo___ctor_41696616(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct RestrictionEntity_array *RestrictionList_40806780; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int32_t v18; // w1
  const MethodInfo *v19; // x4

  if ( (byte_4BDD726 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD726 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v10);
  }
  RestrictionList_40806780 = QuestRestrictionMaster__getRestrictionList_40806780(
                               (QuestRestrictionMaster_o *)Instance,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               0LL);
  this->fields.restrictionEntityList = RestrictionList_40806780;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.restrictionEntityList,
    (int64_t)RestrictionList_40806780,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  QuestRestrictionInfo__Setup(this, v18, questId, questPhase, v19);
}


void __fastcall QuestRestrictionInfo___ctor_41706220(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        RestrictionEntity_o *overwriteRestiction,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x23
  __int64 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int32_t v35; // w1
  const MethodInfo *v36; // x4
  __int64 v37; // x0

  if ( (byte_4BDD727 & 1) == 0 )
  {
    sub_1C21E38(&QuestRestrictionEntity___TypeInfo);
    sub_1C21E38(&RestrictionEntity___TypeInfo);
    byte_4BDD727 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v11 = (struct QuestRestrictionEntity_array *)sub_1C21EE0(QuestRestrictionEntity___TypeInfo, 0LL);
  this->fields.questRestrictionEntityList = v11;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionEntityList,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( overwriteRestiction )
  {
    v18 = sub_1C21EE0(RestrictionEntity___TypeInfo, 1LL);
    if ( !v18 )
      sub_1C22094(0LL, v19);
    v20 = v18;
    v21 = sub_1C21F74(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v21 )
    {
      v37 = sub_1C220B8(0LL);
      sub_1C21F60(v37, 0LL);
    }
    if ( !*(_DWORD *)(v20 + 24) )
      sub_1C2209C(v21, v22);
    *(_QWORD *)(v20 + 32) = overwriteRestiction;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)overwriteRestiction, v23, v24, v25, v26, v27, v28);
  }
  else
  {
    v20 = sub_1C21EE0(RestrictionEntity___TypeInfo, 0LL);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v20;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.restrictionEntityList, v20, v29, v30, v31, v32, v33, v34);
  QuestRestrictionInfo__Setup(this, v35, questId, questPhase, v36);
}


void __fastcall QuestRestrictionInfo__CheckFixedServantPosition(
        QuestRestrictionInfo_o *this,
        bool *isFixedServantPositionRestriction,
        bool *isFixedServantPositionAgreement,
        bool *isRestrictionMyServantPos,
        bool *isRestrictionNeedStarting,
        bool *isRestrictionServantPos,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimit,
        int32_t num,
        bool isFollower,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  int32_t v23; // w26
  System_Collections_Generic_IEnumerable_TSource__o *FixedServantPositionSvtIdList; // x0
  BalanceConfig_c *v25; // x0
  int v26; // w8
  System_Collections_Generic_IEnumerable_TSource__o *FixedMyServantPositionSvtIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  char v29; // w27
  System_Collections_Generic_IEnumerable_TSource__o *NeedStartingSvtIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  BalanceConfig_c *v32; // x0
  int32_t v33; // w23
  System_Collections_Generic_IEnumerable_TSource__o *FixedPositionSvtIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_List_object__o *positionsList; // x8
  char v37; // w22
  System_Collections_Generic_IEnumerable_TSource__o *second; // [xsp+8h] [xbp-68h]

  if ( (byte_4BDD748 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_bool____get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_bool____get_Item__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD748 = 1;
  }
  *isFixedServantPositionRestriction = 0;
  *isFixedServantPositionAgreement = 0;
  *isRestrictionMyServantPos = 0;
  *isRestrictionNeedStarting = 0;
  *isRestrictionServantPos = 0;
  if ( !this->fields.restrictionBaseEntity )
  {
    FixedServantPositionSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                                                           this,
                                                                                           (const MethodInfo *)isFixedServantPositionRestriction);
    if ( FixedServantPositionSvtIdList )
    {
      if ( System_Linq_Enumerable__Contains_int_(
             FixedServantPositionSvtIdList,
             svtId,
             (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        v25 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v25 = BalanceConfig_TypeInfo;
        }
        *isFixedServantPositionRestriction = v25->static_fields->DeckMainMemberMax <= num;
        *isFixedServantPositionAgreement = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax > num;
      }
      else
      {
        *isFixedServantPositionRestriction = 0;
        *isFixedServantPositionAgreement = 0;
      }
    }
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_15;
  second = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                  (ServantEntity_o *)Instance,
                                                                  limitCount,
                                                                  dispLimit,
                                                                  0LL);
  if ( !this->fields.isFixedMyServantPosition )
    goto LABEL_37;
  Instance = (DataManager_o *)this->fields.myServantPositionsList;
  if ( !Instance )
    goto LABEL_15;
  v23 = 0;
  while ( v23 < SLODWORD(Instance->fields.m_CancellationTokenSource) )
  {
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v23,
                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_67;
    if ( *(&Instance->fields._DispLog + num) )
      goto LABEL_22;
    Instance = (DataManager_o *)this->fields.myServantPositionsList;
    ++v23;
    if ( !Instance )
      goto LABEL_15;
  }
  v23 = 0;
LABEL_22:
  if ( isFollower )
  {
    Instance = (DataManager_o *)this->fields.myServantPositionsList;
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v23,
                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_67;
    v26 = *((unsigned __int8 *)&Instance->fields._DispLog + num);
  }
  else
  {
    FixedMyServantPositionSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetFixedMyServantPositionSvtIdList(
                                                                                             this,
                                                                                             (int32_t)v21,
                                                                                             v22);
    if ( !FixedMyServantPositionSvtIdList )
      goto LABEL_37;
    v28 = System_Linq_Enumerable__Intersect_int_(
            FixedMyServantPositionSvtIdList,
            second,
            (const MethodInfo_2FD4278 *)Method_System_Linq_Enumerable_Intersect_int___);
    Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                  v28,
                                  (const MethodInfo_2FBAD74 *)Method_System_Linq_Enumerable_Any_int___);
    if ( !this->fields.myServantPositionsList )
      goto LABEL_15;
    v29 = (char)Instance;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this->fields.myServantPositionsList,
                                  v23,
                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_67;
    v26 = *((unsigned __int8 *)&Instance->fields._DispLog + num);
    if ( (v29 & 1) != 0 )
    {
      if ( !*(&Instance->fields._DispLog + num) )
        goto LABEL_37;
      *isFixedServantPositionAgreement = 1;
      goto LABEL_36;
    }
  }
  if ( !v26 )
    goto LABEL_37;
  *isFixedServantPositionRestriction = 1;
  *isFixedServantPositionAgreement = 0;
LABEL_36:
  *isRestrictionMyServantPos = 1;
LABEL_37:
  if ( *isFixedServantPositionRestriction )
    return;
  if ( this->fields.isNeedStarting )
  {
    NeedStartingSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetNeedStartingSvtIdList(
                                                                                   this,
                                                                                   v21);
    if ( NeedStartingSvtIdList )
    {
      v31 = System_Linq_Enumerable__Intersect_int_(
              NeedStartingSvtIdList,
              second,
              (const MethodInfo_2FD4278 *)Method_System_Linq_Enumerable_Intersect_int___);
      if ( System_Linq_Enumerable__Any_int_(v31, (const MethodInfo_2FBAD74 *)Method_System_Linq_Enumerable_Any_int___) )
      {
        v32 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v32 = BalanceConfig_TypeInfo;
        }
        *isFixedServantPositionRestriction = v32->static_fields->DeckMainMemberMax <= num;
        *isFixedServantPositionAgreement = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax > num;
        *isRestrictionNeedStarting = 1;
      }
    }
  }
  if ( *isFixedServantPositionRestriction || !this->fields.isFixedPosition )
    return;
  Instance = (DataManager_o *)this->fields.positionsList;
  if ( !Instance )
    goto LABEL_15;
  v33 = 0;
  while ( v33 < SLODWORD(Instance->fields.m_CancellationTokenSource) )
  {
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v33,
                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_67;
    if ( *(&Instance->fields._DispLog + num) )
      goto LABEL_57;
    Instance = (DataManager_o *)this->fields.positionsList;
    ++v33;
    if ( !Instance )
      goto LABEL_15;
  }
  v33 = 0;
LABEL_57:
  FixedPositionSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetFixedPositionSvtIdList(
                                                                                  this,
                                                                                  (int32_t)v21,
                                                                                  v22);
  if ( !FixedPositionSvtIdList )
    return;
  v35 = System_Linq_Enumerable__Intersect_int_(
          FixedPositionSvtIdList,
          second,
          (const MethodInfo_2FD4278 *)Method_System_Linq_Enumerable_Intersect_int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                v35,
                                (const MethodInfo_2FBAD74 *)Method_System_Linq_Enumerable_Any_int___);
  positionsList = (System_Collections_Generic_List_object__o *)this->fields.positionsList;
  if ( !positionsList
    || (v37 = (char)Instance,
        (Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                       positionsList,
                                       v33,
                                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_bool____get_Item__)) == 0LL) )
  {
LABEL_15:
    sub_1C22094(Instance, v21);
  }
  if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
LABEL_67:
    sub_1C2209C(Instance, v21);
  if ( (v37 & 1) != 0 )
  {
    if ( *(&Instance->fields._DispLog + num) )
    {
      *isFixedServantPositionAgreement = 1;
LABEL_66:
      *isRestrictionServantPos = 1;
    }
  }
  else if ( *(&Instance->fields._DispLog + num) )
  {
    *isFixedServantPositionRestriction = 1;
    *isFixedServantPositionAgreement = 0;
    goto LABEL_66;
  }
}


bool __fastcall QuestRestrictionInfo__CheckMyServantNumRestriction(
        QuestRestrictionInfo_o *this,
        int32_t myServantNum,
        const MethodInfo *method)
{
  RestrictionEntity_o *myServantNumRestrictionEntity; // x0

  if ( this->fields.restrictionBaseEntity )
  {
    return this->fields.myServantNumMax >= myServantNum;
  }
  else
  {
    myServantNumRestrictionEntity = this->fields.myServantNumRestrictionEntity;
    return myServantNumRestrictionEntity
        && !RestrictionEntity__IsRestriction(myServantNumRestrictionEntity, myServantNum, 0LL);
  }
}


int32_t __fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCount(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Int32_array *overwriteLimitCountSvtIds; // x9
  struct System_Int32_array *overwriteLimitCounts; // x8
  int max_length; // w10
  il2cpp_array_size_t v6; // w11

  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( !overwriteLimitCountSvtIds )
    return -1;
  overwriteLimitCounts = this->fields.overwriteLimitCounts;
  if ( !overwriteLimitCounts )
    return -1;
  max_length = overwriteLimitCountSvtIds->max_length;
  if ( max_length < 1 )
    return -1;
  v6 = 0;
  while ( overwriteLimitCountSvtIds->m_Items[v6 + 1] != svtId )
  {
    if ( max_length == ++v6 )
      return -1;
  }
  if ( v6 >= overwriteLimitCounts->max_length )
    sub_1C2209C(this, svtId);
  return overwriteLimitCounts->m_Items[v6 + 1];
}


int32_t __fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41734096(
        QuestRestrictionInfo_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x8
  QuestRestrictionInfo_o *v10; // x20
  __int64 v11; // x25
  int32_t v12; // w21
  __int64 v13; // x22
  __int64 v14; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v4 = this;
  if ( (byte_4BDD751 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDD751 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_20;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v16, 0LL);
  this = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(v4, v7, v8);
  if ( !this )
LABEL_20:
    sub_1C22094(this, userServantEntity);
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  v10 = this;
  if ( !dialogMessageInfoDictionary )
    return -1;
  if ( (int)dialogMessageInfoDictionary >= 1 )
  {
    v11 = 0LL;
    while ( (unsigned int)v11 < (unsigned int)dialogMessageInfoDictionary )
    {
      v12 = *(&v10->fields.eventId + v11);
      v14 = *(_QWORD *)&userServantEntity->fields.dispLimitCount.fields.currentCryptoKey;
      v13 = *(_QWORD *)&userServantEntity->fields.dispLimitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v17.fields.currentCryptoKey = v14;
      *(_QWORD *)&v17.fields.fakeValue = v13;
      this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v17, 0LL);
      if ( (_DWORD)this == v12 )
        return v12;
      dialogMessageInfoDictionary = v10->fields.dialogMessageInfoDictionary;
      if ( (int)++v11 >= (int)dialogMessageInfoDictionary )
        goto LABEL_15;
    }
LABEL_19:
    sub_1C2209C(this, userServantEntity);
  }
LABEL_15:
  if ( !(_DWORD)dialogMessageInfoDictionary )
    goto LABEL_19;
  return v10->fields.eventId;
}


System_Int32_array *__fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Int32_array *overwriteLimitCountSvtIds; // x8
  unsigned __int64 v9; // x22
  __int64 v10; // x23
  struct System_Int32_array *overwriteLimitCounts; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4BDD750 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDD750 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( overwriteLimitCountSvtIds
    && this->fields.overwriteLimitCounts
    && (int)*(_QWORD *)&overwriteLimitCountSvtIds->max_length >= 1 )
  {
    v9 = 0LL;
    v10 = (unsigned int)*(_QWORD *)&overwriteLimitCountSvtIds->max_length - 1LL;
    do
    {
      if ( v9 >= overwriteLimitCountSvtIds->max_length )
LABEL_21:
        sub_1C2209C(v6, v7);
      if ( overwriteLimitCountSvtIds->m_Items[v9 + 1] == svtId )
      {
        overwriteLimitCounts = this->fields.overwriteLimitCounts;
        if ( !overwriteLimitCounts )
          break;
        if ( v9 >= overwriteLimitCounts->max_length )
          goto LABEL_21;
        if ( !v5 )
          break;
        v7 = (unsigned int)overwriteLimitCounts->m_Items[v9 + 1];
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            v7,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size + 1] = v7;
        }
      }
      if ( v10 == v9 )
        goto LABEL_19;
      overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
      ++v9;
    }
    while ( overwriteLimitCountSvtIds );
LABEL_18:
    sub_1C22094(v6, v7);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestRestrictionInfo__GetAllOutBattleGroupNo(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.allOutBattleGroupNo;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetConfirmRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        int32_t pos,
        bool isCheckPosForWhole,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v8; // x20
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  __int64 v10; // x21
  QuestRestrictionInfo_SlotInfo_o *v11; // x8
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x21
  int max_length; // w8
  unsigned int v14; // w22
  __int64 v15; // x23
  RestrictionWholeEntity_o *v16; // x25
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x26
  unsigned __int64 v19; // x27
  int v20; // w8
  unsigned int v21; // w9
  struct QuestRestrictionInfo_SlotInfo_array *v22; // x8
  QuestRestrictionInfo_SlotInfo_o *v23; // x8
  System_Collections_Generic_IEnumerable_RestrictionEntity__o *RestrictionMessageEntityList; // x19
  QuestRestrictionInfo___c_c *v26; // x8
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__107_0; // x20
  Il2CppObject *v29; // x21
  struct QuestRestrictionInfo___c_StaticFields *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  QuestRestrictionInfo___c_c *v38; // x8
  System_Func_TSource__TResult__o *_9__107_2; // x20
  Il2CppObject *v40; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct QuestRestrictionInfo___c_StaticFields *v47; // x0
  PartyOrganizationUtility_o *p__9__107_2; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v49; // x8
  QuestRestrictionInfo_SlotInfo_o *v50; // x8
  Il2CppObject *v51; // x21
  struct QuestRestrictionInfo___c_StaticFields *v52; // x0
  System_Collections_Generic_IEnumerable_string__o *v53; // x0

  v8 = this;
  if ( (byte_4BDD73A & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C21E38(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C21E38(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_0__);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_1__);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_2__);
    sub_1C21E38(&QuestRestrictionInfo___c_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD73A = 1;
  }
  if ( !v8->fields.restrictionBaseEntity )
  {
    RestrictionMessageEntityList = QuestRestrictionInfo__GetRestrictionMessageEntityList(
                                     v8,
                                     *(const MethodInfo **)&initPos);
    v26 = QuestRestrictionInfo___c_TypeInfo;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v26 = QuestRestrictionInfo___c_TypeInfo;
    }
    static_fields = v26->static_fields;
    if ( initPos < 1 )
    {
      _9__107_2 = (System_Func_TSource__TResult__o *)static_fields->__9__107_2;
      if ( _9__107_2 )
      {
LABEL_61:
        v53 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                                    _9__107_2,
                                                                    (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
        return System_String__Join_63131132((System_String_o *)StringLiteral_43/*"\n"*/, v53, 0LL);
      }
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = QuestRestrictionInfo___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v26->static_fields->__9;
      _9__107_2 = (System_Func_TSource__TResult__o *)sub_1C22084(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__107_2,
        v51,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_2__,
        0LL);
      v52 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v52->__9__107_2 = (struct System_Func_RestrictionEntity__string__o *)_9__107_2;
      p__9__107_2 = (PartyOrganizationUtility_o *)&v52->__9__107_2;
    }
    else
    {
      _9__107_0 = (System_Func_object__bool__o *)static_fields->__9__107_0;
      if ( !_9__107_0 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = QuestRestrictionInfo___c_TypeInfo;
        }
        v29 = (Il2CppObject *)v26->static_fields->__9;
        _9__107_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__107_0,
          v29,
          Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_0__,
          0LL);
        v30 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v30->__9__107_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__107_0;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v30->__9__107_0, (int64_t)_9__107_0, v31, v32, v33, v34, v35, v36);
      }
      v37 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
              (System_Func_TSource__bool__o *)_9__107_0,
              (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v38 = QuestRestrictionInfo___c_TypeInfo;
      RestrictionMessageEntityList = (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)v37;
      if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v38 = QuestRestrictionInfo___c_TypeInfo;
      }
      _9__107_2 = (System_Func_TSource__TResult__o *)v38->static_fields->__9__107_1;
      if ( _9__107_2 )
        goto LABEL_61;
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = QuestRestrictionInfo___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v38->static_fields->__9;
      _9__107_2 = (System_Func_TSource__TResult__o *)sub_1C22084(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__107_2,
        v40,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_1__,
        0LL);
      v47 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v47->__9__107_1 = (struct System_Func_RestrictionEntity__string__o *)_9__107_2;
      p__9__107_2 = (PartyOrganizationUtility_o *)&v47->__9__107_1;
    }
    sub_1C21DDC(p__9__107_2, (int64_t)_9__107_2, v41, v42, v43, v44, v45, v46);
    goto LABEL_61;
  }
  if ( initPos >= 1 )
  {
    slotInfos = v8->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_64;
    v10 = initPos - 1LL;
    if ( (unsigned int)v10 >= slotInfos->max_length )
      goto LABEL_63;
    v11 = slotInfos->m_Items[v10];
    if ( !v11 )
      goto LABEL_64;
    this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v11->fields.summary, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v49 = v8->fields.slotInfos;
      if ( v49 )
      {
        if ( (unsigned int)v10 >= v49->max_length )
          goto LABEL_63;
        v50 = v49->m_Items[v10];
        if ( v50 )
          return v50->fields.summary;
      }
      goto LABEL_64;
    }
  }
  if ( !isCheckPosForWhole )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( pos < 1 )
    return v8->fields.confirmRestrictionMessage;
  restrictionWholeEntities = v8->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_64:
    sub_1C22094(this, *(_QWORD *)&initPos);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return v8->fields.confirmRestrictionMessage;
  v14 = 0;
  v15 = pos - 1LL;
  while ( 1 )
  {
    if ( v14 >= max_length )
      goto LABEL_63;
    v16 = restrictionWholeEntities->m_Items[v14];
    if ( !v16 )
      goto LABEL_64;
    type = v16->fields.type;
    if ( (unsigned int)(type - 4) >= 4 )
    {
      if ( type != 8 )
        goto LABEL_36;
      this = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
      }
      if ( this->fields.uniqueSvtRestrictionEntity[2].fields.type >= pos )
      {
        v22 = v8->fields.slotInfos;
        if ( !v22 )
          goto LABEL_64;
        if ( (unsigned int)v15 >= v22->max_length )
          goto LABEL_63;
        v23 = v22->m_Items[v15];
        if ( !v23 )
          goto LABEL_64;
        if ( v23->fields.slotType != 5 )
        {
          this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v16->fields.summary, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            return v16->fields.summary;
        }
      }
    }
    targetVals2 = v16->fields.targetVals2;
    if ( !targetVals2 )
      goto LABEL_64;
    if ( (unsigned int)*(_QWORD *)&targetVals2->max_length == 1 )
    {
      v19 = 0LL;
      v20 = 1;
      v21 = 1;
      while ( v19 < v21 )
      {
        if ( targetVals2->m_Items[v19 + 1] == pos )
        {
          this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v16->fields.summary, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            return v16->fields.summary;
          v20 = targetVals2->max_length;
        }
        ++v19;
        v21 = v20;
        if ( (__int64)v19 >= v20 )
          goto LABEL_36;
      }
LABEL_63:
      sub_1C2209C(this, *(_QWORD *)&initPos);
    }
LABEL_36:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v14 >= max_length )
      return v8->fields.confirmRestrictionMessage;
  }
}


int32_t __fastcall QuestRestrictionInfo__GetCorrectionIconId(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        bool isFollower,
        const MethodInfo *method)
{
  struct System_Int32_array *overwriteLimitCountSvtIds; // x9
  struct System_Int32_array *overwriteLimitCountIconIds; // x8
  int max_length; // w10
  il2cpp_array_size_t v7; // w11
  int32_t *p_correctionIconId; // x8

  if ( !isFollower
    && (overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds) != 0LL
    && (overwriteLimitCountIconIds = this->fields.overwriteLimitCountIconIds) != 0LL
    && (max_length = overwriteLimitCountSvtIds->max_length, max_length >= 1) )
  {
    v7 = 0;
    while ( overwriteLimitCountSvtIds->m_Items[v7 + 1] != svtId )
    {
      if ( max_length == ++v7 )
        goto LABEL_8;
    }
    if ( v7 >= overwriteLimitCountIconIds->max_length )
      sub_1C2209C(this, svtId);
    p_correctionIconId = &overwriteLimitCountIconIds->m_Items[v7 + 1];
  }
  else
  {
LABEL_8:
    p_correctionIconId = &this->fields.correctionIconId;
  }
  return *p_correctionIconId;
}


int32_t __fastcall QuestRestrictionInfo__GetDataLostBattleId(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.dataLostBattleId;
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetDialogList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  PartyOrganizationUtility_o *Instance; // x0
  __int64 id; // x1
  struct RestrictionMessageEntity_array *restrictionMessageEntities; // x23
  int v7; // w8
  unsigned int v8; // w24
  RestrictionMessageEntity_o *v9; // x25
  int32_t frequencyType; // w8
  Il2CppObject *v11; // x22
  UserQuestEntity_o *v12; // x22
  struct System_Int32_array *v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  int max_length; // w9
  int v18; // w24
  int32_t v19; // w21
  int32_t *v20; // x25
  int32_t v21; // w8
  Il2CppObject *MasterData_object; // x23
  UserQuestEntity_o *v23; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10

  if ( (byte_4BDD74D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BDD74D = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !this->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
      goto LABEL_67;
    max_length = questRestrictionEntityList->max_length;
    v18 = max_length - 1;
    if ( max_length < 1 )
      goto LABEL_65;
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= questRestrictionEntityList->max_length )
LABEL_68:
        sub_1C2209C(Instance, id);
      v20 = (int32_t *)questRestrictionEntityList->m_Items[v19];
      if ( !v20 )
        goto LABEL_67;
      v21 = v20[7];
      if ( v21 == 1 )
        break;
      if ( v21 == 2 )
      {
        Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !Instance )
          goto LABEL_67;
        Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                                   Instance,
                                                   v20[4],
                                                   v20[5],
                                                   v20[6],
                                                   1,
                                                   0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_57;
      }
      else if ( v21 == 3 )
      {
        goto LABEL_57;
      }
LABEL_62:
      if ( v18 == v19 )
        goto LABEL_65;
      questRestrictionEntityList = this->fields.questRestrictionEntityList;
      ++v19;
      if ( !questRestrictionEntityList )
        goto LABEL_67;
    }
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    Instance = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_67;
    Instance = (PartyOrganizationUtility_o *)UserQuestMaster__getEntityFromId(
                                               (UserQuestMaster_o *)MasterData_object,
                                               *(_QWORD *)&Instance[1].fields.restrictionDialogHistoryList[1].fields._size,
                                               v20[4],
                                               0LL);
    if ( Instance )
    {
      v23 = (UserQuestEntity_o *)Instance;
      Instance = (PartyOrganizationUtility_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
      if ( (_DWORD)Instance )
        goto LABEL_62;
      Instance = (PartyOrganizationUtility_o *)UserQuestEntity__HasStatus(v23, 16, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_62;
    }
LABEL_57:
    if ( !v3 )
      goto LABEL_67;
    items = v3->fields._items;
    v25 = Method_System_Collections_Generic_List_int__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_67;
    size = v3->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v3,
        v19,
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v3->fields._size = size + 1;
      items->m_Items[size + 1] = v19;
    }
    goto LABEL_62;
  }
  restrictionMessageEntities = this->fields.restrictionMessageEntities;
  if ( !restrictionMessageEntities )
    goto LABEL_67;
  v7 = restrictionMessageEntities->max_length;
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v7 )
        goto LABEL_68;
      v9 = restrictionMessageEntities->m_Items[v8];
      if ( !v9 )
        goto LABEL_67;
      frequencyType = v9->fields.frequencyType;
      if ( frequencyType != 1 )
        break;
      Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      v11 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      Instance = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
      }
      if ( !v11 )
        goto LABEL_67;
      Instance = (PartyOrganizationUtility_o *)UserQuestMaster__getEntityFromId(
                                                 (UserQuestMaster_o *)v11,
                                                 *(_QWORD *)&Instance[1].fields.restrictionDialogHistoryList[1].fields._size,
                                                 this->fields.questId,
                                                 0LL);
      if ( !Instance )
        goto LABEL_27;
      v12 = (UserQuestEntity_o *)Instance;
      Instance = (PartyOrganizationUtility_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
      if ( !(_DWORD)Instance )
      {
        Instance = (PartyOrganizationUtility_o *)UserQuestEntity__HasStatus(v12, 16, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_27;
      }
LABEL_32:
      v7 = restrictionMessageEntities->max_length;
      if ( (int)++v8 >= v7 )
        goto LABEL_65;
    }
    if ( frequencyType == 2 )
    {
      Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                                 Instance,
                                                 this->fields.questId,
                                                 this->fields.questPhase,
                                                 v9->fields.id,
                                                 1,
                                                 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_32;
    }
    else if ( frequencyType != 3 )
    {
      goto LABEL_32;
    }
LABEL_27:
    if ( !v3 )
      goto LABEL_67;
    id = (unsigned int)v9->fields.id;
    v13 = v3->fields._items;
    v14 = Method_System_Collections_Generic_List_int__Add__;
    ++v3->fields._version;
    if ( !v13 )
      goto LABEL_67;
    v15 = v3->fields._size;
    if ( (unsigned int)v15 >= v13->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v3,
        id,
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v3->fields._size = v15 + 1;
      v13->m_Items[v15 + 1] = id;
    }
    goto LABEL_32;
  }
LABEL_65:
  if ( !v3 )
LABEL_67:
    sub_1C22094(Instance, id);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessage(
        QuestRestrictionInfo_o *this,
        int32_t n,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x20
  struct RestrictionMessageEntity_array *restrictionMessageEntities; // x9
  int max_length; // w10
  System_String_o **p_dialogMessage; // x8
  int v8; // w11
  RestrictionMessageEntity_o *v9; // x12
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  QuestRestrictionEntity_o *v11; // x8

  v4 = this;
  if ( (byte_4BDD74E & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD74E = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
LABEL_20:
        sub_1C2209C(this, *(_QWORD *)&n);
      v11 = questRestrictionEntityList->m_Items[n];
      if ( v11 )
      {
        p_dialogMessage = &v11->fields.dialogMessage;
        return *p_dialogMessage;
      }
    }
LABEL_19:
    sub_1C22094(this, *(_QWORD *)&n);
  }
  restrictionMessageEntities = v4->fields.restrictionMessageEntities;
  if ( !restrictionMessageEntities )
    goto LABEL_19;
  max_length = restrictionMessageEntities->max_length;
  if ( max_length < 1 )
  {
    p_dialogMessage = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    p_dialogMessage = (System_String_o **)&StringLiteral_1/*""*/;
    v8 = 0;
    while ( 1 )
    {
      if ( max_length == v8 )
        goto LABEL_20;
      v9 = restrictionMessageEntities->m_Items[v8];
      if ( !v9 )
        goto LABEL_19;
      if ( v9->fields.id == n )
        break;
      if ( max_length == ++v8 )
        return *p_dialogMessage;
    }
    p_dialogMessage = &v9->fields.dialogMessage;
  }
  return *p_dialogMessage;
}


QuestRestrictionInfo_DialogMessageInfo_o *__fastcall QuestRestrictionInfo__GetDialogMessageInfo(
        QuestRestrictionInfo_o *this,
        int32_t messageId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *v7; // x0

  if ( (byte_4BDD764 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
    byte_4BDD764 = 1;
  }
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary
    || !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
          messageId,
          (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
  {
    return 0LL;
  }
  v7 = this->fields.dialogMessageInfoDictionary;
  if ( !v7 )
    sub_1C22094(0LL, v6);
  return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_int__object__o *)v7,
                                                       messageId,
                                                       (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageMySvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_monitor; // x20
  unsigned int v6; // w21
  RestrictionWholeEntity_o *v7; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4BDD767 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD767 = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v2->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_19;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C2209C(this, method);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_19;
      if ( v7->fields.type == 5 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_325BE14 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v6 >= max_length )
        return *p_monitor;
    }
    if ( entity )
    {
      p_monitor = (System_String_o **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_19:
    sub_1C22094(this, method);
  }
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_monitor;
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageSupportSvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_monitor; // x20
  unsigned int v6; // w21
  RestrictionWholeEntity_o *v7; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4BDD769 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD769 = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v2->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_19;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C2209C(this, method);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_19;
      if ( v7->fields.type == 6 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_325BE14 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v6 >= max_length )
        return *p_monitor;
    }
    if ( entity )
    {
      p_monitor = (System_String_o **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_19:
    sub_1C22094(this, method);
  }
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_monitor;
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageSvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_monitor; // x20
  unsigned int v6; // w21
  RestrictionWholeEntity_o *v7; // x25
  int32_t type; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4BDD766 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD766 = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v2->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_20;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C2209C(this, method);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_20;
      type = v7->fields.type;
      if ( type == 8 || type == 4 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_325BE14 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v6 >= max_length )
        return *p_monitor;
    }
    if ( entity )
    {
      p_monitor = (System_String_o **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_20:
    sub_1C22094(this, method);
  }
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_monitor;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetDialogTargetName(
        QuestRestrictionInfo_o *this,
        int32_t n,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x20
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v6; // x19
  System_String_o **p_title; // x20
  unsigned int v8; // w21
  __int64 v9; // x22
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  QuestRestrictionEntity_o *v11; // x8

  v4 = this;
  if ( (byte_4BDD74F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD74F = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
LABEL_21:
        sub_1C2209C(this, *(_QWORD *)&n);
      v11 = questRestrictionEntityList->m_Items[n];
      if ( v11 )
      {
        p_title = &v11->fields.title;
        return *p_title;
      }
    }
LABEL_20:
    sub_1C22094(this, *(_QWORD *)&n);
  }
  this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
  if ( !this )
    goto LABEL_20;
  this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)this,
                                     n,
                                     (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
  if ( !this )
    goto LABEL_20;
  dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
  v6 = this;
  if ( dialogMessageInfoDictionary < 1 )
  {
    p_title = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    p_title = (System_String_o **)&StringLiteral_1/*""*/;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= dialogMessageInfoDictionary )
        goto LABEL_21;
      v9 = *((_QWORD *)&v6->fields.eventId + (int)v8);
      if ( !v9 )
        goto LABEL_20;
      this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v9 + 32), 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      dialogMessageInfoDictionary = (int)v6->fields.dialogMessageInfoDictionary;
      if ( (int)++v8 >= dialogMessageInfoDictionary )
        return *p_title;
    }
    p_title = (System_String_o **)(v9 + 32);
  }
  return *p_title;
}


int32_t __fastcall QuestRestrictionInfo__GetDialogType(
        QuestRestrictionInfo_o *this,
        int32_t n,
        const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8
  RestrictionEntity_o *v5; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_7;
  if ( restrictionEntityList->max_length <= n )
    sub_1C2209C(this, n);
  v5 = restrictionEntityList->m_Items[n];
  if ( !v5 )
LABEL_7:
    sub_1C22094(this, n);
  return v5->fields.type;
}


bool __fastcall QuestRestrictionInfo__GetExplanationMessage(
        QuestRestrictionInfo_o *this,
        System_String_o **message,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  QuestRestrictionInfo_o *v9; // x20
  struct RestrictionBaseEntity_o *v11; // x8
  System_String_o *noticeMessage; // x1
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  int max_length; // w21
  il2cpp_array_size_t v15; // w22
  QuestRestrictionEntity_o *v16; // x23

  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  v9 = this;
  if ( !restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
LABEL_13:
      sub_1C22094(this, message);
    max_length = questRestrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= questRestrictionEntityList->max_length )
          sub_1C2209C(this, message);
        v16 = questRestrictionEntityList->m_Items[v15];
        if ( !v16 )
          goto LABEL_13;
        this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v16->fields.noticeMessage, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        if ( max_length == ++v15 )
          goto LABEL_14;
        questRestrictionEntityList = v9->fields.questRestrictionEntityList;
        if ( !questRestrictionEntityList )
          goto LABEL_13;
      }
      noticeMessage = v16->fields.noticeMessage;
      goto LABEL_16;
    }
LABEL_14:
    *message = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)message, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    return 0;
  }
  this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(restrictionBaseEntity->fields.subMessage, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_14;
  v11 = v9->fields.restrictionBaseEntity;
  if ( !v11 )
    goto LABEL_13;
  noticeMessage = v11->fields.subMessage;
LABEL_16:
  *message = noticeMessage;
  sub_1C21DDC((PartyOrganizationUtility_o *)message, (int64_t)noticeMessage, (int64_t)method, v3, v4, v5, v6, v7);
  return 1;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDD759 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10517/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/);
    byte_4BDD759 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10517/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDD758 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10518/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/);
    byte_4BDD758 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10518/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetFixedMyServantPositionCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDD76F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4BDD76F = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_1C22094(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v8.fields._current[1].monitor) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C22094(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i;
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedMyServantPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x19
  __int64 v5; // x1
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDD76C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDD76C = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_1C22094(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v10.fields._current,
      (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_1C22094(fixedMyServantIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__GetFixedMyServantSingleRestriction(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t num,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v10; // x21
  struct System_Int32_array *fixedMyServantSingleIndividualities; // x8
  int32_t ServantImageLimitSealAfter; // w22
  ServantEntity_o *v13; // x20
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v15; // x21
  unsigned int v16; // w24
  RestrictionSlotDetailEntity_o *v17; // x23
  System_Int32_array *Individuality; // x0
  struct RestrictionEntity_o *fixedMyServantSingleRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  int32_t max_length; // w9

  v10 = this;
  if ( (byte_4BDD74A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD74A = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !*(_QWORD *)&fixedMyServantSingleIndividualities->max_length )
      return 0;
    this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       svtId,
                                       dispLimitCount,
                                       0LL);
        this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( this )
          {
            this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               svtId,
                                               (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v13 = (ServantEntity_o *)this;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
              if ( this )
              {
                dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
                v15 = this;
                if ( dialogMessageInfoDictionary >= 1 )
                {
                  v16 = 0;
                  while ( 1 )
                  {
                    if ( v16 >= dialogMessageInfoDictionary )
                      goto LABEL_30;
                    v17 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v15->fields.eventId + (int)v16);
                    if ( !v17 )
                      goto LABEL_29;
                    if ( v17->fields.type == 1 )
                    {
                      if ( !v13 )
                        goto LABEL_29;
                      Individuality = ServantEntity__getIndividuality(v13, limitCount, ServantImageLimitSealAfter, 0LL);
                      this = (QuestRestrictionInfo_o *)RestrictionSlotDetailEntity__IsIndividuality(
                                                         v17,
                                                         Individuality,
                                                         0LL);
                      if ( ((unsigned __int8)this & 1) == 0 )
                        return 1;
                    }
                    dialogMessageInfoDictionary = (int)v15->fields.dialogMessageInfoDictionary;
                    if ( (int)++v16 >= dialogMessageInfoDictionary )
                      return 0;
                  }
                }
                return 0;
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_1C22094(this, *(_QWORD *)&svtId);
  }
  fixedMyServantSingleRestrictionEntity = v10->fields.fixedMyServantSingleRestrictionEntity;
  if ( !fixedMyServantSingleRestrictionEntity )
    goto LABEL_29;
  targetVals = fixedMyServantSingleRestrictionEntity->fields.targetVals;
  if ( !targetVals )
    return 0;
  max_length = targetVals->max_length;
  if ( max_length <= num )
    return 0;
  if ( max_length <= (unsigned int)num )
LABEL_30:
    sub_1C2209C(this, *(_QWORD *)&svtId);
  return targetVals->m_Items[num + 1] != svtId;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDD74B & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10516/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/);
    byte_4BDD74B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10516/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, 0LL);
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  struct RestrictionEntity_o *fixedMyServantSingleRestrictionEntity; // x8

  if ( !this->fields.isFixedMyServantSingle )
    return 0LL;
  if ( this->fields.restrictionBaseEntity )
    return this->fields.fixedMyServantSingleIndividualities;
  fixedMyServantSingleRestrictionEntity = this->fields.fixedMyServantSingleRestrictionEntity;
  if ( fixedMyServantSingleRestrictionEntity )
    return fixedMyServantSingleRestrictionEntity->fields.targetVals;
  else
    return 0LL;
}


int32_t __fastcall QuestRestrictionInfo__GetFixedPositionCount(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *fixedIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDD771 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4BDD771 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_1C22094(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v8.fields._current[1].monitor) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C22094(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i;
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x19
  __int64 v5; // x1
  struct System_Collections_Generic_List_int____o *fixedIndividualitiesList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDD76E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDD76E = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_1C22094(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v10.fields._current,
      (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_1C22094(fixedIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestRestrictionInfo__GetFixedServantPositionCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int v4; // w22
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  int32_t v10; // w20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BDD747 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4BDD747 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !this->fields.restrictionBaseEntity )
  {
    if ( this->fields.isFixedMyServantPosition )
    {
      fixedMyServantPositionRestrictionEntity = this->fields.fixedMyServantPositionRestrictionEntity;
      if ( fixedMyServantPositionRestrictionEntity )
      {
        targetVals = fixedMyServantPositionRestrictionEntity->fields.targetVals;
        if ( targetVals )
          return targetVals->max_length;
      }
    }
    if ( this->fields.isNeedStarting
      && (fixedServantPositionRestrictionEntity = this->fields.fixedServantPositionRestrictionEntity) != 0LL
      && (targetVals = fixedServantPositionRestrictionEntity->fields.targetVals) != 0LL )
    {
      return targetVals->max_length;
    }
    else
    {
      return 0;
    }
  }
  if ( this->fields.isFixedMyServantPosition )
  {
    fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
    if ( !fixedMyServantIndividualitiesList )
      goto LABEL_30;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v4 = 0;
    for ( i = v14; ; v4 += LODWORD(i.fields._current[1].monitor) )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v5 )
        break;
      if ( !i.fields._current )
        sub_1C22094(v5, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  }
  else
  {
    v4 = 0;
  }
  v10 = v4 + this->fields.isNeedStarting;
  if ( !this->fields.isFixedPosition )
    return v10;
  fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
LABEL_30:
    sub_1C22094(fixedMyServantIndividualitiesList, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v14; ; v10 += LODWORD(i.fields._current[1].monitor) )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v11 )
      break;
    if ( !i.fields._current )
      sub_1C22094(v11, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v10;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDD749 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10515/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/);
    byte_4BDD749 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10515/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, 0LL);
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BDD746 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDD746 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( this->fields.restrictionBaseEntity )
  {
    v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v3,
      (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
    if ( this->fields.isFixedMyServantPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &i,
               (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v6 )
          break;
        if ( !v3 )
          sub_1C22094(v6, v7);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isNeedStarting )
    {
      fixedMyServantIndividualitiesList = this->fields.needStartingIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &i,
               (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v8 )
          break;
        if ( !v3 )
          sub_1C22094(v8, v9);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isFixedPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v10 )
          break;
        if ( !v3 )
          sub_1C22094(v10, v11);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( v3 )
    {
      if ( v3->fields._size > 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v3,
                 (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
      return 0LL;
    }
LABEL_38:
    sub_1C22094(fixedMyServantIndividualitiesList, v5);
  }
  if ( this->fields.isFixedMyServantPosition )
  {
    fixedMyServantPositionRestrictionEntity = this->fields.fixedMyServantPositionRestrictionEntity;
    if ( fixedMyServantPositionRestrictionEntity )
      return fixedMyServantPositionRestrictionEntity->fields.targetVals;
  }
  if ( this->fields.isNeedStarting )
  {
    fixedMyServantPositionRestrictionEntity = this->fields.fixedServantPositionRestrictionEntity;
    if ( fixedMyServantPositionRestrictionEntity )
      return fixedMyServantPositionRestrictionEntity->fields.targetVals;
  }
  return 0LL;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedSupportPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDD745 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10520/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/);
    byte_4BDD745 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10520/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, 0LL);
}


RestrictionEntity_array *__fastcall QuestRestrictionInfo__GetList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.restrictionEntityList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetMessage(
        QuestRestrictionInfo_o *this,
        int32_t restrictionWholeType,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x20
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x9
  int max_length; // w10
  System_String_o **p_summary; // x8
  int v8; // w11
  RestrictionWholeEntity_o *v9; // x12

  v4 = this;
  if ( (byte_4BDD731 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD731 = 1;
  }
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_15:
    sub_1C22094(this, *(_QWORD *)&restrictionWholeType);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
  {
    p_summary = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    p_summary = (System_String_o **)&StringLiteral_1/*""*/;
    v8 = 0;
    while ( 1 )
    {
      if ( max_length == v8 )
        sub_1C2209C(this, *(_QWORD *)&restrictionWholeType);
      v9 = restrictionWholeEntities->m_Items[v8];
      if ( !v9 )
        goto LABEL_15;
      if ( v9->fields.type == restrictionWholeType )
        break;
      if ( max_length == ++v8 )
        return *p_summary;
    }
    p_summary = &v9->fields.summary;
  }
  return *p_summary;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetMessage_41715732(
        QuestRestrictionInfo_o *this,
        int32_t restrictionType,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x20
  struct RestrictionEntity_array *restrictionEntityList; // x9
  int max_length; // w10
  System_String_o **p_name; // x8
  int v8; // w11
  RestrictionEntity_o *v9; // x12

  v4 = this;
  if ( (byte_4BDD732 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD732 = 1;
  }
  restrictionEntityList = v4->fields.restrictionEntityList;
  if ( !restrictionEntityList )
LABEL_15:
    sub_1C22094(this, *(_QWORD *)&restrictionType);
  max_length = restrictionEntityList->max_length;
  if ( max_length < 1 )
  {
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
    v8 = 0;
    while ( 1 )
    {
      if ( max_length == v8 )
        sub_1C2209C(this, *(_QWORD *)&restrictionType);
      v9 = restrictionEntityList->m_Items[v8];
      if ( !v9 )
        goto LABEL_15;
      if ( v9->fields.type == restrictionType )
        break;
      if ( max_length == ++v8 )
        return *p_name;
    }
    p_name = &v9->fields.name;
  }
  return *p_name;
}


System_String_array *__fastcall QuestRestrictionInfo__GetMessages(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        bool isNoneTitle,
        bool isSlotOnly,
        bool uniqueServant,
        bool uniqueIndividuality,
        bool individuality,
        bool allOutBattle,
        bool dataLostBattle,
        bool fatigue,
        bool servantPos,
        bool myServantPos,
        bool needStarting,
        bool supportPos,
        bool singleSupport,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v21; // x20
  void *IsNullOrEmpty; // x0
  System_String_o *summary; // x1
  System_String_o *v24; // x26
  System_String_o *v25; // x27
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x22
  int max_length; // w8
  unsigned int v58; // w23
  RestrictionWholeEntity_o *v59; // x29
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  int v70; // w8
  void *v71; // x21
  unsigned int v72; // w22
  __int64 v73; // x26
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_String_o *v80; // x0
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0

  if ( (byte_4BDD72F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10489/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C21E38(&StringLiteral_11294/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/);
    sub_1C21E38(&StringLiteral_11295/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1C21E38(&StringLiteral_11291/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_1C21E38(&StringLiteral_6589/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_4BDD72F = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_98;
  if ( !isSlotOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6589/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11295/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
    v25 = (System_String_o *)IsNullOrEmpty;
    if ( !this->fields.isUniqueServant )
      goto LABEL_20;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11294/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0LL);
    summary = (System_String_o *)IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( uniqueServant )
        goto LABEL_12;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v24, (Il2CppObject *)IsNullOrEmpty, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( uniqueServant )
      {
LABEL_12:
        IsNullOrEmpty = System_String__Concat_63115476(summary, v25, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v21 )
          goto LABEL_100;
        goto LABEL_16;
      }
    }
    if ( !v21 )
      goto LABEL_100;
LABEL_16:
    items = v21->fields._items;
    v33 = Method_System_Collections_Generic_List_string__Add__;
    ++v21->fields._version;
    if ( !items )
      goto LABEL_100;
    size = v21->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)summary,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      v21->fields._size = size + 1;
      v35[4] = (Il2CppClass *)summary;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)summary, v26, v27, v28, v29, v30, v31);
    }
LABEL_20:
    if ( !this->fields.isFatigure )
      goto LABEL_33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11291/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
    summary = (System_String_o *)IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( fatigue )
        goto LABEL_25;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v24, (Il2CppObject *)IsNullOrEmpty, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( fatigue )
      {
LABEL_25:
        IsNullOrEmpty = System_String__Concat_63115476(summary, v25, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v21 )
          goto LABEL_100;
        goto LABEL_29;
      }
    }
    if ( !v21 )
      goto LABEL_100;
LABEL_29:
    v42 = v21->fields._items;
    v43 = Method_System_Collections_Generic_List_string__Add__;
    ++v21->fields._version;
    if ( !v42 )
      goto LABEL_100;
    v44 = v21->fields._size;
    if ( (unsigned int)v44 >= v42->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)summary,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v42->obj.klass + v44;
      v21->fields._size = v44 + 1;
      v45[4] = (Il2CppClass *)summary;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)summary, v36, v37, v38, v39, v40, v41);
    }
LABEL_33:
    if ( !this->fields.isNotSingleSupportOnly )
      goto LABEL_46;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10489/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
    summary = (System_String_o *)IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( singleSupport )
        goto LABEL_38;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v24, (Il2CppObject *)IsNullOrEmpty, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( singleSupport )
      {
LABEL_38:
        IsNullOrEmpty = System_String__Concat_63115476(summary, v25, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v21 )
          goto LABEL_100;
        goto LABEL_42;
      }
    }
    if ( !v21 )
      goto LABEL_100;
LABEL_42:
    v52 = v21->fields._items;
    v53 = Method_System_Collections_Generic_List_string__Add__;
    ++v21->fields._version;
    if ( !v52 )
      goto LABEL_100;
    v54 = v21->fields._size;
    if ( (unsigned int)v54 >= v52->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)summary,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &v52->obj.klass + v54;
      v21->fields._size = v54 + 1;
      v55[4] = (Il2CppClass *)summary;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)summary, v46, v47, v48, v49, v50, v51);
    }
LABEL_46:
    restrictionWholeEntities = this->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_100;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v58 = 0;
      while ( v58 < max_length )
      {
        v59 = restrictionWholeEntities->m_Items[v58];
        if ( !v59 )
          goto LABEL_100;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(v59->fields.summary, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            summary = v59->fields.summary;
          }
          else
          {
            IsNullOrEmpty = System_String__Format(v24, (Il2CppObject *)v59->fields.summary, 0LL);
            summary = (System_String_o *)IsNullOrEmpty;
          }
          switch ( v59->fields.type )
          {
            case 1:
              if ( individuality )
                goto LABEL_57;
              break;
            case 2:
              if ( allOutBattle )
                goto LABEL_57;
              break;
            case 4:
              if ( servantPos )
                goto LABEL_57;
              break;
            case 5:
              if ( myServantPos )
                goto LABEL_57;
              break;
            case 6:
            case 7:
              if ( supportPos )
                goto LABEL_57;
              break;
            case 8:
              if ( needStarting )
                goto LABEL_57;
              break;
            case 9:
              if ( uniqueIndividuality )
                goto LABEL_57;
              break;
            case 0xA:
              if ( dataLostBattle )
              {
LABEL_57:
                IsNullOrEmpty = System_String__Concat_63115476(summary, v25, 0LL);
                summary = (System_String_o *)IsNullOrEmpty;
              }
              break;
            default:
              break;
          }
          if ( !v21 )
            goto LABEL_100;
          v66 = v21->fields._items;
          v67 = Method_System_Collections_Generic_List_string__Add__;
          ++v21->fields._version;
          if ( !v66 )
            goto LABEL_100;
          v68 = v21->fields._size;
          if ( (unsigned int)v68 >= v66->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              (Il2CppObject *)summary,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &v66->obj.klass + v68;
            v21->fields._size = v68 + 1;
            v69[4] = (Il2CppClass *)summary;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v69 + 4), (int64_t)summary, v60, v61, v62, v63, v64, v65);
          }
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v58 >= max_length )
          goto LABEL_79;
      }
LABEL_101:
      sub_1C2209C(IsNullOrEmpty, summary);
    }
  }
LABEL_79:
  if ( pos )
  {
    IsNullOrEmpty = this->fields.restrictionSlotDetailDictionary;
    if ( !IsNullOrEmpty
      || (IsNullOrEmpty = System_Collections_Generic_Dictionary_int__object___get_Item(
                            (System_Collections_Generic_Dictionary_int__object__o *)IsNullOrEmpty,
                            pos,
                            (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0LL )
    {
LABEL_100:
      sub_1C22094(IsNullOrEmpty, summary);
    }
    v70 = *((_DWORD *)IsNullOrEmpty + 6);
    v71 = IsNullOrEmpty;
    if ( v70 >= 1 )
    {
      v72 = 0;
      while ( v72 < v70 )
      {
        v73 = *((_QWORD *)v71 + (int)v72 + 4);
        if ( !v73 )
          goto LABEL_100;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(*(System_String_o **)(v73 + 24), 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            summary = *(System_String_o **)(v73 + 24);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v80 = LocalizationManager__Get((System_String_o *)StringLiteral_6589/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
            IsNullOrEmpty = System_String__Format(v80, *(Il2CppObject **)(v73 + 24), 0LL);
            summary = (System_String_o *)IsNullOrEmpty;
          }
          if ( !v21 )
            goto LABEL_100;
          v81 = v21->fields._items;
          v82 = Method_System_Collections_Generic_List_string__Add__;
          ++v21->fields._version;
          if ( !v81 )
            goto LABEL_100;
          v83 = v21->fields._size;
          if ( (unsigned int)v83 >= v81->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              (Il2CppObject *)summary,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
          }
          else
          {
            v84 = &v81->obj.klass + v83;
            v21->fields._size = v83 + 1;
            v84[4] = (Il2CppClass *)summary;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v84 + 4), (int64_t)summary, v74, v75, v76, v77, v78, v79);
          }
        }
        v70 = *((_DWORD *)v71 + 6);
        if ( (int)++v72 >= v70 )
          goto LABEL_98;
      }
      goto LABEL_101;
    }
  }
LABEL_98:
  if ( !v21 )
    goto LABEL_100;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v21,
                                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *__fastcall QuestRestrictionInfo__GetMessages_41714464(
        QuestRestrictionInfo_o *this,
        RestrictionEntity_array *entities,
        bool isNoneTitle,
        bool isSlotOnly,
        bool uniqueServant,
        bool uniqueIndividuality,
        bool individuality,
        bool allOutBattle,
        bool dataLostBattle,
        bool fatigue,
        bool fixedPos,
        bool supportPos,
        bool singleSupport,
        const MethodInfo *method)
{
  System_String_o *v18; // x28
  System_String_o *v19; // x25
  System_Collections_Generic_List_object__o *v20; // x26
  System_String_o *IsNullOrEmpty; // x0
  System_String_o *name; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  signed int max_length; // w8
  unsigned int v44; // w19
  RestrictionEntity_o *v45; // x27
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0

  if ( (byte_4BDD730 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10489/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C21E38(&StringLiteral_11295/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1C21E38(&StringLiteral_11291/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_1C21E38(&StringLiteral_6589/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_4BDD730 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6589/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11295/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isSlotOnly || !this->fields.isFatigure )
    goto LABEL_19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11291/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
  name = IsNullOrEmpty;
  if ( isNoneTitle )
  {
    if ( !fatigue )
      goto LABEL_11;
  }
  else
  {
    IsNullOrEmpty = System_String__Format(v18, (Il2CppObject *)IsNullOrEmpty, 0LL);
    name = IsNullOrEmpty;
    if ( !fatigue )
    {
LABEL_11:
      if ( !v20 )
        goto LABEL_64;
      goto LABEL_15;
    }
  }
  IsNullOrEmpty = System_String__Concat_63115476(name, v19, 0LL);
  name = IsNullOrEmpty;
  if ( !v20 )
    goto LABEL_64;
LABEL_15:
  items = v20->fields._items;
  v30 = Method_System_Collections_Generic_List_string__Add__;
  ++v20->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v20->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)name,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v32[4] = (Il2CppClass *)name;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)name, v23, v24, v25, v26, v27, v28);
  }
LABEL_19:
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10489/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
    name = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = System_String__Format(v18, (Il2CppObject *)IsNullOrEmpty, 0LL);
      name = IsNullOrEmpty;
    }
    if ( singleSupport )
    {
      IsNullOrEmpty = System_String__Concat_63115476(name, v19, 0LL);
      name = IsNullOrEmpty;
    }
    if ( !v20 )
      goto LABEL_64;
    v39 = v20->fields._items;
    v40 = Method_System_Collections_Generic_List_string__Add__;
    ++v20->fields._version;
    if ( !v39 )
      goto LABEL_64;
    v41 = v20->fields._size;
    if ( (unsigned int)v41 >= v39->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)name,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &v39->obj.klass + v41;
      v20->fields._size = v41 + 1;
      v42[4] = (Il2CppClass *)name;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)name, v33, v34, v35, v36, v37, v38);
    }
  }
  if ( !entities )
    goto LABEL_64;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v44 = 0;
    while ( 1 )
    {
      if ( v44 >= max_length )
        sub_1C2209C(IsNullOrEmpty, name);
      v45 = entities->m_Items[v44];
      if ( !v45 )
        break;
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v45->fields.name, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( isNoneTitle )
        {
          name = v45->fields.name;
        }
        else
        {
          IsNullOrEmpty = RestrictionEntity__getTitle(v45, 0LL);
          name = IsNullOrEmpty;
        }
        switch ( v45->fields.type )
        {
          case 1:
            if ( individuality )
              goto LABEL_42;
            break;
          case 6:
            if ( uniqueServant )
              goto LABEL_42;
            break;
          case 7:
            if ( supportPos )
              goto LABEL_42;
            break;
          case 8:
          case 9:
          case 0xE:
            if ( fixedPos )
              goto LABEL_42;
            break;
          case 0xD:
            if ( allOutBattle )
              goto LABEL_42;
            break;
          case 0xF:
            if ( uniqueIndividuality )
              goto LABEL_42;
            break;
          case 0x11:
            if ( dataLostBattle )
            {
LABEL_42:
              IsNullOrEmpty = System_String__Concat_63115476(name, v19, 0LL);
              name = IsNullOrEmpty;
            }
            break;
          default:
            break;
        }
        if ( !v20 )
          break;
        v52 = v20->fields._items;
        v53 = Method_System_Collections_Generic_List_string__Add__;
        ++v20->fields._version;
        if ( !v52 )
          break;
        v54 = v20->fields._size;
        if ( (unsigned int)v54 >= v52->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)name,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &v52->obj.klass + v54;
          v20->fields._size = v54 + 1;
          v55[4] = (Il2CppClass *)name;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)name, v46, v47, v48, v49, v50, v51);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_62;
    }
LABEL_64:
    sub_1C22094(IsNullOrEmpty, name);
  }
LABEL_62:
  if ( !v20 )
    goto LABEL_64;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v20,
                                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall QuestRestrictionInfo__GetMyServantNumRestriction(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.myServantNumMax;
}


System_String_o *__fastcall QuestRestrictionInfo__GetMyServantNumRestrictionDialogMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestRestrictionInfo_o *v3; // x19
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  unsigned int v6; // w21
  RestrictionWholeEntity_o *v7; // x25
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int32_t v9; // w20
  int32_t v10; // w9
  QuestRestrictionInfo_SlotInfo_o *v11; // x8
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v13; // x21
  unsigned int v14; // w27
  __int64 v15; // x28
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int v17; // w9
  unsigned int v18; // w10
  RestrictionEntity_o *v19; // x11
  Il2CppObject *v21; // x8
  Il2CppObject *v22; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_4BDD757 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD757 = 1;
  }
  entity = 0LL;
  v22 = 0LL;
  if ( v3->fields.restrictionBaseEntity )
  {
    restrictionWholeEntities = v3->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_55;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length < 1 )
    {
LABEL_15:
      slotInfos = v3->fields.slotInfos;
      if ( !slotInfos )
        goto LABEL_55;
      v9 = 0;
      while ( 1 )
      {
        v10 = slotInfos->max_length;
        if ( v9 >= v10 )
          return (System_String_o *)StringLiteral_1/*""*/;
        if ( v9 >= (unsigned int)v10 )
          goto LABEL_56;
        v11 = slotInfos->m_Items[v9];
        if ( !v11 )
          goto LABEL_55;
        if ( v11->fields.slotType )
        {
          ++v9;
        }
        else
        {
          this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
          if ( !this )
            goto LABEL_55;
          this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                             (System_Collections_Generic_Dictionary_int__object__o *)this,
                                             ++v9,
                                             (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
            if ( !this )
              goto LABEL_55;
            this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                               (System_Collections_Generic_Dictionary_int__object__o *)this,
                                               v9,
                                               (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
            if ( !this )
              goto LABEL_55;
            dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
            v13 = this;
            if ( dialogMessageInfoDictionary >= 1 )
            {
              v14 = 0;
              while ( 1 )
              {
                if ( v14 >= dialogMessageInfoDictionary )
                  goto LABEL_56;
                v15 = *((_QWORD *)&v13->fields.eventId + (int)v14);
                if ( !v15 )
                  goto LABEL_55;
                if ( *(_DWORD *)(v15 + 44) && !*(_DWORD *)(v15 + 40) )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
                  if ( !this )
                    goto LABEL_55;
                  this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     &v22,
                                                     *(_DWORD *)(v15 + 44),
                                                     (const MethodInfo_325BE14 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    break;
                }
                dialogMessageInfoDictionary = (int)v13->fields.dialogMessageInfoDictionary;
                if ( (int)++v14 >= dialogMessageInfoDictionary )
                  goto LABEL_37;
              }
              v21 = v22;
              if ( v22 )
                return (System_String_o *)v21[1].monitor;
LABEL_55:
              sub_1C22094(this, method);
            }
          }
        }
LABEL_37:
        slotInfos = v3->fields.slotInfos;
        if ( !slotInfos )
          goto LABEL_55;
      }
    }
    v6 = 0;
    while ( v6 < max_length )
    {
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_55;
      if ( v7->fields.type == 3 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_55;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_325BE14 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v21 = entity;
          if ( entity )
            return (System_String_o *)v21[1].monitor;
          goto LABEL_55;
        }
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_15;
    }
    goto LABEL_56;
  }
  restrictionEntityList = v3->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_55;
  v17 = restrictionEntityList->max_length;
  if ( v17 >= 1 )
  {
    v18 = 0;
    method = 0LL;
    while ( v18 < v17 )
    {
      v19 = restrictionEntityList->m_Items[v18];
      if ( !v19 )
        goto LABEL_55;
      if ( v19->fields.type == 11 )
        method = (const MethodInfo *)v18;
      else
        method = (const MethodInfo *)(unsigned int)method;
      if ( (int)++v18 >= v17 )
        return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v2);
    }
LABEL_56:
    sub_1C2209C(this, method);
  }
  LODWORD(method) = 0;
  return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetMyServantOrNpcRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        bool haveIndividualityServant,
        const MethodInfo *method)
{
  Il2CppObject *RestrictedName; // x20
  System_String_o **v8; // x8
  System_String_o *v9; // x0

  if ( (byte_4BDD760 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10522/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/);
    sub_1C21E38(&StringLiteral_10525/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/);
    byte_4BDD760 = 1;
  }
  RestrictedName = (Il2CppObject *)QuestRestrictionInfo__GetRestrictedName(
                                     this,
                                     pos,
                                     (const MethodInfo *)haveIndividualityServant);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( haveIndividualityServant )
    v8 = (System_String_o **)&StringLiteral_10522/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/;
  else
    v8 = (System_String_o **)&StringLiteral_10525/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/;
  v9 = LocalizationManager__Get(*v8, 0LL);
  return System_String__Format(v9, RestrictedName, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetMyServantOrNpcRestrictionNum(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x8

  v2 = this;
  if ( (byte_4BDD774 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    byte_4BDD774 = 1;
  }
  if ( !v2->fields.isMyServantOrNpc && !v2->fields.isMyServantOrSupport )
    return 0;
  myServantOrNpcRestrictionEntityList = v2->fields.myServantOrNpcRestrictionEntityList;
  if ( !myServantOrNpcRestrictionEntityList )
    sub_1C22094(this, method);
  return myServantOrNpcRestrictionEntityList->fields._size;
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  void *restrictionSlotDetailDictionary; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_int__o *v14; // x20
  int v15; // w8
  void *v16; // x19
  unsigned int v17; // w21
  __int64 v18; // x8
  System_Int32_array *CollectionList; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x1
  const MethodInfo_2FD4278 *v22; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v25; // x20
  Il2CppObject *v26; // x0
  Il2CppObject *v27; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4BDD762 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__DisplayClass187_0__GetMyServantOrNpcSvtIdList_b__0__);
    sub_1C21E38(&QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo);
    byte_4BDD762 = 1;
  }
  v5 = sub_1C22084(QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass187_0___ctor((QuestRestrictionInfo___c__DisplayClass187_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
  {
    v14 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v5 + 24),
                                        (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    v15 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v16 = restrictionSlotDetailDictionary;
    if ( v15 >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= v15 )
          sub_1C2209C(restrictionSlotDetailDictionary, v7);
        v18 = *((_QWORD *)v16 + (int)v17 + 4);
        if ( !v18 )
          break;
        if ( *(_DWORD *)(v18 + 32) == 1 )
        {
          if ( !v14 )
            break;
          System_Collections_Generic_List_int___AddRange(
            v14,
            *(System_Collections_Generic_IEnumerable_T__o **)(v18 + 40),
            (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v15 = *((_DWORD *)v16 + 6);
        if ( (int)++v17 >= v15 )
          goto LABEL_15;
      }
LABEL_29:
      sub_1C22094(restrictionSlotDetailDictionary, v7);
    }
LABEL_15:
    if ( !v14 )
      goto LABEL_29;
    if ( v14->fields._size >= 1 )
    {
      restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                          (DataManager_o *)restrictionSlotDetailDictionary,
                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList((ServantMaster_o *)restrictionSlotDetailDictionary, 0LL);
      monitor = System_Linq_Enumerable__Distinct_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                  (const MethodInfo_2FCD204 *)Method_System_Linq_Enumerable_Distinct_int___);
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v22 = (const MethodInfo_2FD4278 *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v28 = System_Linq_Enumerable__Intersect_int_(monitor, v21, v22);
      return System_Linq_Enumerable__ToArray_int_(
               v28,
               (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
  }
  else
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
      goto LABEL_29;
    if ( (signed int)questRestrictionEntityList->max_length > index )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
      v25 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v25,
        (Il2CppObject *)v5,
        Method_QuestRestrictionInfo___c__DisplayClass187_0__GetMyServantOrNpcSvtIdList_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      v26 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v25,
              (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v26 )
      {
        v27 = v26;
        restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                            (DataManager_o *)restrictionSlotDetailDictionary,
                                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        v21 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                     (ServantMaster_o *)restrictionSlotDetailDictionary,
                                                                     0LL);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v27[2].monitor;
        v22 = (const MethodInfo_2FD4278 *)Method_System_Linq_Enumerable_Intersect_int___;
        goto LABEL_27;
      }
    }
  }
  return 0LL;
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
        QuestRestrictionInfo_o *this,
        System_Collections_Generic_Dictionary_int__FollowerInfo__o **npcInfoDictionary,
        int32_t index,
        bool indexIsPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass201_0_o *v9; // x22
  void *Instance; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_int__object__o *v12; // x23
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2
  long double inited; // q0
  _QWORD *v21; // x23
  __int64 v22; // x8
  __int64 v23; // x0
  __int64 v24; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x23
  System_Int32_array *MyServantOrNpcSvtIdList; // x27
  System_Predicate_object__o *v27; // x24
  Il2CppObject *v28; // x0
  Il2CppObject *v29; // x23
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  int32_t MyServantOrSupportTargetPos; // w22
  const MethodInfo *v33; // x2
  long double v34; // q0
  _QWORD *v35; // x21
  __int64 v36; // x8
  __int64 v37; // x0
  __int64 v38; // x0
  System_Collections_Generic_List_int__o *v39; // x23
  int v40; // w8
  void *v41; // x24
  unsigned int v42; // w29
  FollowerInfo_o *v43; // x25
  ServantLeaderInfo_o *v44; // x26
  int32_t ReturnTypeByQuestId; // w0
  System_Int32_array *NpcServantIndividualityFull; // x27
  int32_t Rarity; // w0
  const MethodInfo *v48; // x7
  const MethodInfo *v49; // x3
  __int64 v50; // x27
  __int64 v51; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v55; // x27
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v56; // x27
  __int64 v57; // x26
  __int64 v58; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Collections_Generic_IEnumerable_TSource__o *first; // [xsp+0h] [xbp-70h]
  bool isWhole; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4BDD76B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_int___);
    sub_1C21E38(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Union_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__DisplayClass201_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__);
    sub_1C21E38(&QuestRestrictionInfo___c__DisplayClass201_0_TypeInfo);
    byte_4BDD76B = 1;
  }
  isWhole = 0;
  v9 = (QuestRestrictionInfo___c__DisplayClass201_0_o *)sub_1C22084(QuestRestrictionInfo___c__DisplayClass201_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass201_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_56;
  v9->fields.index = index;
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)npcInfoDictionary, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  v21 = Method_System_Array_Empty_int___;
  v22 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v22 )
  {
    sub_1C73D70(Method_System_Array_Empty_int___);
    v22 = v21[7];
  }
  v23 = *(_QWORD *)(v22 + 16);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C73D14(inited);
  if ( !*(_DWORD *)(v23 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v23);
  v24 = *(_QWORD *)(v21[7] + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C73D14(inited);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v24 + 184);
    v27 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v27,
      (Il2CppObject *)v9,
      Method_QuestRestrictionInfo___c__DisplayClass201_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      0LL);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_56;
    v28 = System_Collections_Generic_List_object___Find(
            myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v27,
            (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v28 )
    {
      v29 = v28;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_56;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_56;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)Instance,
                                                                              0LL);
      v31 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v29[2].monitor,
              CollectionList,
              (const MethodInfo_2FD4278 *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v31,
                                  (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    MyServantOrSupportTargetPos = v9->fields.index;
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(this, v9->fields.index, v19);
    if ( !MyServantOrNpcSvtIdList )
    {
      v35 = Method_System_Array_Empty_int___;
      v36 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v36 )
      {
        sub_1C73D70(Method_System_Array_Empty_int___);
        v36 = v35[7];
      }
      v37 = *(_QWORD *)(v36 + 16);
      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
        v37 = sub_1C73D14(v34);
      if ( !*(_DWORD *)(v37 + 224) )
        v34 = j_il2cpp_runtime_class_init_0(v37);
      v38 = *(_QWORD *)(v35[7] + 16LL);
      if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
        v38 = sub_1C73D14(v34);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v38 + 184);
    }
    MyServantOrSupportTargetPos = v9->fields.index;
    if ( !this->fields.restrictionBaseEntity )
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
                                      this,
                                      MyServantOrSupportTargetPos,
                                      v33);
  }
  v39 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !Instance )
    goto LABEL_56;
  Instance = NpcFollowerMaster__GetQuestFollowerList(
               (NpcFollowerMaster_o *)Instance,
               this->fields.questId,
               this->fields.questPhase,
               0LL);
  if ( !Instance )
    goto LABEL_56;
  v40 = *((_DWORD *)Instance + 6);
  v41 = Instance;
  if ( v40 >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      if ( v42 >= v40 )
        sub_1C2209C(Instance, v11);
      v43 = (FollowerInfo_o *)*((_QWORD *)v41 + (int)v42 + 4);
      Instance = (void *)FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
      if ( !v43 )
        break;
      Instance = FollowerInfo__getServantLeaderInfo(v43, 0, (int32_t)Instance, 0LL);
      if ( Instance )
      {
        v44 = (ServantLeaderInfo_o *)Instance;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
        NpcServantIndividualityFull = FollowerInfo__GetNpcServantIndividualityFull(v43, 0, ReturnTypeByQuestId, 0LL);
        Rarity = ServantLeaderInfo__getRarity(v44, 0LL);
        Instance = (void *)QuestRestrictionInfo__IsRestriction_41718544(
                             this,
                             &isWhole,
                             NpcServantIndividualityFull,
                             Rarity,
                             v44->fields.lv,
                             MyServantOrSupportTargetPos,
                             3,
                             v48);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_41739952(
                               this,
                               NpcServantIndividualityFull,
                               MyServantOrSupportTargetPos,
                               v49);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v51 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
            v50 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v63.fields.currentCryptoKey = v51;
            *(_QWORD *)&v63.fields.fakeValue = v50;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v63, 0LL);
            if ( !v39 )
              break;
            items = v39->fields._items;
            v53 = Method_System_Collections_Generic_List_int__Add__;
            ++v39->fields._version;
            if ( !items )
              break;
            size = v39->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v39,
                (int32_t)Instance,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
            }
            else
            {
              v39->fields._size = size + 1;
              items->m_Items[size + 1] = (int)Instance;
            }
            v55 = *npcInfoDictionary;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                 v44->fields.svtId,
                                 0LL);
            if ( !v55 )
              break;
            Instance = (void *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                 (System_Collections_Generic_Dictionary_int__object__o *)v55,
                                 (int32_t)Instance,
                                 (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              v56 = *npcInfoDictionary;
              v58 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
              v57 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v64.fields.currentCryptoKey = v58;
              *(_QWORD *)&v64.fields.fakeValue = v57;
              Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v64, 0LL);
              if ( !v56 )
                break;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)v56,
                (int32_t)Instance,
                (Il2CppObject *)v43,
                (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
            }
          }
        }
      }
      v40 = *((_DWORD *)v41 + 6);
      if ( (int)++v42 >= v40 )
        goto LABEL_55;
    }
LABEL_56:
    sub_1C22094(Instance, v11);
  }
LABEL_55:
  v59 = System_Linq_Enumerable__Union_int_(
          first,
          (System_Collections_Generic_IEnumerable_TSource__o *)v39,
          (const MethodInfo_2FEDA84 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v59,
           (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetMyServantOrSupportRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        bool haveIndividualityServant,
        const MethodInfo *method)
{
  __int64 *v7; // x8
  int *MyServantOrNpcSvtIdList; // x0
  __int64 v9; // x1
  int v10; // w8
  int *v11; // x19
  __int64 v12; // x20
  int v13; // w23

  if ( (byte_4BDD761 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10527/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/);
    sub_1C21E38(&StringLiteral_10526/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/);
    sub_1C21E38(&StringLiteral_10524/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/);
    sub_1C21E38(&StringLiteral_10523/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/);
    byte_4BDD761 = 1;
  }
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_10524/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/;
  }
  else if ( haveIndividualityServant )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_10523/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/;
  }
  else
  {
    MyServantOrNpcSvtIdList = (int *)QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(
                                       this,
                                       pos,
                                       (const MethodInfo *)haveIndividualityServant);
    if ( MyServantOrNpcSvtIdList && (v10 = MyServantOrNpcSvtIdList[6], v11 = MyServantOrNpcSvtIdList, v10 >= 1) )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= v10 )
          sub_1C2209C(MyServantOrNpcSvtIdList, v9);
        MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
        v13 = v11[v12 + 8];
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
        }
        if ( v13 < *(_DWORD *)(*((_QWORD *)MyServantOrNpcSvtIdList + 23) + 876LL) )
          break;
        v10 = v11[6];
        if ( (int)++v12 >= v10 )
          goto LABEL_20;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_10526/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/;
    }
    else
    {
LABEL_20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_10527/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/;
    }
  }
  return LocalizationManager__Get((System_String_o *)*v7, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
        QuestRestrictionInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v16; // x20
  Il2CppClass *klass; // x8

  if ( (byte_4BDD763 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C21E38(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__DisplayClass188_0__GetMyServantOrSupportTargetPos_b__0__);
    sub_1C21E38(&QuestRestrictionInfo___c__DisplayClass188_0_TypeInfo);
    byte_4BDD763 = 1;
  }
  v5 = sub_1C22084(QuestRestrictionInfo___c__DisplayClass188_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass188_0___ctor((QuestRestrictionInfo___c__DisplayClass188_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
    goto LABEL_12;
  questRestrictionEntityList = this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_14;
  if ( (signed int)questRestrictionEntityList->max_length <= index )
  {
LABEL_12:
    LODWORD(v6) = 0;
    return (int)v6;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v16 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass188_0__GetMyServantOrSupportTargetPos_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  v6 = System_Collections_Generic_List_object___Find(
         myServantOrNpcRestrictionEntityList,
         (System_Predicate_T__o *)v16,
         (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v6 )
    return (int)v6;
  klass = v6[3].klass;
  if ( !klass )
LABEL_14:
    sub_1C22094(v6, v7);
  if ( !LODWORD(klass->_1.namespaze) )
    sub_1C2209C(v6, v7);
  LODWORD(v6) = klass->_1.byval_arg.data;
  return (int)v6;
}


System_Collections_Generic_List_int____o *__fastcall QuestRestrictionInfo__GetNeedIndividualityList(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v4; // x8

  if ( !this->fields.restrictionBaseEntity )
    return 0LL;
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_7;
  if ( pos - 1 >= slotInfos->max_length )
    sub_1C2209C(this, pos);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C22094(this, pos);
  return v4->fields.individualityList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetNeedIndividualityMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_String_o *DialogMessage; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v11; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4BDD765 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD765 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.restrictionBaseEntity )
  {
    dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
    if ( !dialogMessageInfoDictionary )
      sub_1C22094(0LL, *(_QWORD *)&pos);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v11,
      (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
      (const MethodInfo_32B5E84 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
             &v11,
             (const MethodInfo_3404840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
      if ( !v6 )
        break;
      if ( !v11.fields._current.fields.value )
        sub_1C22094(v6, v7);
      if ( LODWORD(v11.fields._current.fields.value[1].klass) == pos )
      {
        DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v11.fields._current.fields.key, v8);
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
          &v11,
          (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
        return DialogMessage;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v11,
      (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall QuestRestrictionInfo__GetNeedStartingSvtCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *needStartingIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDD770 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4BDD770 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    sub_1C22094(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v8.fields._current[1].monitor) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C22094(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i;
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetNeedStartingSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_int____o *needStartingIndividualitiesList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDD76D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDD76D = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0LL;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v6 )
      break;
    if ( !v3 )
      sub_1C22094(v6, v7);
    System_Collections_Generic_List_int___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)v9.fields._current,
      (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v3 )
LABEL_15:
    sub_1C22094(needStartingIndividualitiesList, v4);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_array *__fastcall QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int32_t FixedServantPositionCount; // w0
  const MethodInfo *v4; // x1
  int v5; // w21
  int64_t FixedServantPositionSvtIdList; // x0
  __int64 v7; // x1
  int64_t v8; // x20
  System_String_array *v9; // x19
  unsigned __int64 v10; // x25
  __int64 v11; // x26
  PartyOrganizationUtility_o *i; // x21
  int32_t v13; // w23
  Il2CppObject *MasterData_object; // x24
  int32_t maxLimitCount; // w23
  int32_t v16; // w1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UserServantCollectionEntity_o *v24; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BDD752 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&string___TypeInfo);
    byte_4BDD752 = 1;
  }
  v24 = 0LL;
  entity = 0LL;
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0LL;
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(this, method);
  if ( !FixedServantPositionCount )
    return 0LL;
  v5 = FixedServantPositionCount;
  FixedServantPositionSvtIdList = (int64_t)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(this, v4);
  if ( !FixedServantPositionSvtIdList )
    goto LABEL_41;
  v8 = FixedServantPositionSvtIdList;
  FixedServantPositionSvtIdList = sub_1C21EE0(string___TypeInfo, *(unsigned int *)(FixedServantPositionSvtIdList + 24));
  v9 = (System_String_array *)FixedServantPositionSvtIdList;
  if ( v5 >= 1 )
  {
    v10 = 0LL;
    v11 = (unsigned int)v5;
    for ( i = (PartyOrganizationUtility_o *)(FixedServantPositionSvtIdList + 32);
          ;
          i = (PartyOrganizationUtility_o *)((char *)i + 8) )
    {
      if ( v10 >= *(unsigned int *)(v8 + 24) )
LABEL_42:
        sub_1C2209C(FixedServantPositionSvtIdList, v7);
      v13 = *(_DWORD *)(v8 + 32 + 4 * v10);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      FixedServantPositionSvtIdList = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !FixedServantPositionSvtIdList )
        break;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)FixedServantPositionSvtIdList,
              &entity,
              v13,
              (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0LL;
      FixedServantPositionSvtIdList = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !FixedServantPositionSvtIdList )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)FixedServantPositionSvtIdList,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      FixedServantPositionSvtIdList = (int64_t)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        FixedServantPositionSvtIdList = (int64_t)NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        break;
      if ( !UserServantCollectionMaster__TryGetEntity(
              (UserServantCollectionMaster_o *)MasterData_object,
              &v24,
              *(_QWORD *)(*(_QWORD *)(FixedServantPositionSvtIdList + 184) + 64LL),
              v13,
              0LL) )
        goto LABEL_28;
      FixedServantPositionSvtIdList = (int64_t)v24;
      if ( !v24 )
        break;
      FixedServantPositionSvtIdList = UserServantCollectionEntity__IsGet(v24, 0LL);
      if ( (FixedServantPositionSvtIdList & 1) != 0 )
      {
        if ( !v24 )
          break;
        maxLimitCount = v24->fields.maxLimitCount;
      }
      else
      {
LABEL_28:
        maxLimitCount = -1;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      FixedServantPositionSvtIdList = OptionManager__GetSpoilerSetting(0LL);
      if ( !entity )
        break;
      v16 = ((maxLimitCount == -1) & ((unsigned int)FixedServantPositionSvtIdList ^ 1)) != 0 ? 0 : maxLimitCount;
      FixedServantPositionSvtIdList = (int64_t)ServantEntity__getName((ServantEntity_o *)entity, v16, -1, 0, 0LL);
      if ( !v9 )
        break;
      if ( v10 >= v9->max_length )
        goto LABEL_42;
      i->klass = (PartyOrganizationUtility_c *)FixedServantPositionSvtIdList;
      sub_1C21DDC(i, FixedServantPositionSvtIdList, v17, v18, v19, v20, v21, v22);
      if ( v11 == ++v10 )
        return v9;
    }
LABEL_41:
    sub_1C22094(FixedServantPositionSvtIdList, v7);
  }
  return v9;
}


System_Collections_Generic_List_Restriction_RangeType__o *__fastcall QuestRestrictionInfo__GetRangeTypeList(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v4; // x8

  if ( !this->fields.restrictionBaseEntity )
    return 0LL;
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_7;
  if ( pos - 1 >= slotInfos->max_length )
    sub_1C2209C(this, pos);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C22094(this, pos);
  return v4->fields.rangeTypeList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetRestrictedName(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x21
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v6; // x20
  unsigned int v7; // w19
  __int64 v8; // x21
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x26
  unsigned __int64 v10; // x27
  __int64 v11; // x23
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x1
  __int64 v19; // x22
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x24
  System_Predicate_object__o *v21; // x25
  struct System_Int32_array *deckSvtIdList; // x8
  System_String_o *v24; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4BDD75F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C21E38(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__DisplayClass184_0__GetRestrictedName_b__0__);
    sub_1C21E38(&QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD75F = 1;
  }
  v24 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v4->fields.restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         pos,
                                         (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( this )
      {
        dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
        v6 = this;
        if ( dialogMessageInfoDictionary >= 1 )
        {
          v7 = 0;
          while ( 1 )
          {
            if ( v7 >= dialogMessageInfoDictionary )
              goto LABEL_30;
            v8 = *((_QWORD *)&v6->fields.eventId + (int)v7);
            if ( !v8 )
              goto LABEL_29;
            this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v8 + 32), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              return *(System_String_o **)(v8 + 32);
            dialogMessageInfoDictionary = (int)v6->fields.dialogMessageInfoDictionary;
            if ( (int)++v7 >= dialogMessageInfoDictionary )
              return v24;
          }
        }
        return v24;
      }
    }
LABEL_29:
    sub_1C22094(this, *(_QWORD *)&pos);
  }
  questRestrictionEntityList = v4->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_29;
  if ( (int)questRestrictionEntityList->max_length >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = sub_1C22084(QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo);
      QuestRestrictionInfo___c__DisplayClass184_0___ctor((QuestRestrictionInfo___c__DisplayClass184_0_o *)v11, 0LL);
      if ( v10 >= questRestrictionEntityList->max_length )
        break;
      if ( !v11 )
        goto LABEL_29;
      v18 = (int64_t)questRestrictionEntityList->m_Items[v10];
      *(_QWORD *)(v11 + 16) = v18;
      v19 = v11 + 16;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 16), v18, v12, v13, v14, v15, v16, v17);
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v4->fields.myServantOrNpcRestrictionEntityList;
      v21 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v21,
        (Il2CppObject *)v11,
        Method_QuestRestrictionInfo___c__DisplayClass184_0__GetRestrictedName_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_object___Find(
                                         myServantOrNpcRestrictionEntityList,
                                         (System_Predicate_T__o *)v21,
                                         (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( this )
      {
        deckSvtIdList = this->fields.deckSvtIdList;
        if ( !deckSvtIdList )
          goto LABEL_29;
        if ( !deckSvtIdList->max_length )
          break;
        if ( deckSvtIdList->m_Items[1] == pos )
        {
          if ( !*(_QWORD *)v19 )
            goto LABEL_29;
          v24 = *(System_String_o **)(*(_QWORD *)v19 + 48LL);
        }
      }
      if ( (__int64)++v10 >= (int)questRestrictionEntityList->max_length )
        return v24;
    }
LABEL_30:
    sub_1C2209C(this, *(_QWORD *)&pos);
  }
  return v24;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x19
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  __int64 v6; // x20
  QuestRestrictionInfo_SlotInfo_o *v7; // x8
  System_Collections_Generic_IEnumerable_RestrictionEntity__o *RestrictionMessageEntityList; // x19
  QuestRestrictionInfo___c_c *v10; // x8
  System_Func_object__object__o *_9__108_0; // x20
  Il2CppObject *v12; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  Il2CppObject *v21; // x0
  System_Collections_Generic_IEnumerable_string__o *v22; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v23; // x8
  QuestRestrictionInfo_SlotInfo_o *v24; // x8

  v4 = this;
  if ( (byte_4BDD73B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Prepend_string___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_1C21E38(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__108_0__);
    sub_1C21E38(&QuestRestrictionInfo___c_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&StringLiteral_10485/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_4BDD73B = 1;
  }
  if ( v4->fields.restrictionBaseEntity )
  {
    if ( initPos < 1 )
      return v4->fields.restrictionMessage;
    slotInfos = v4->fields.slotInfos;
    if ( slotInfos )
    {
      v6 = initPos - 1LL;
      if ( (unsigned int)v6 >= slotInfos->max_length )
        goto LABEL_26;
      v7 = slotInfos->m_Items[v6];
      if ( !v7 )
        goto LABEL_25;
      if ( System_String__IsNullOrEmpty(v7->fields.summary, 0LL) )
        return v4->fields.restrictionMessage;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10485/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v23 = v4->fields.slotInfos;
      if ( !v23 )
        goto LABEL_25;
      if ( (unsigned int)v6 >= v23->max_length )
LABEL_26:
        sub_1C2209C(this, *(_QWORD *)&initPos);
      v24 = v23->m_Items[v6];
      if ( v24 )
        return System_String__Concat_63126736(
                 (System_String_o *)this,
                 (System_String_o *)StringLiteral_43/*"\n"*/,
                 v24->fields.summary,
                 0LL);
    }
LABEL_25:
    sub_1C22094(this, *(_QWORD *)&initPos);
  }
  RestrictionMessageEntityList = QuestRestrictionInfo__GetRestrictionMessageEntityList(
                                   v4,
                                   *(const MethodInfo **)&initPos);
  v10 = QuestRestrictionInfo___c_TypeInfo;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v10 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__108_0 = (System_Func_object__object__o *)v10->static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = QuestRestrictionInfo___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__108_0 = (System_Func_object__object__o *)sub_1C22084(System_Func_RestrictionEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__108_0,
      v12,
      Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__108_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__108_0 = (struct System_Func_RestrictionEntity__string__o *)_9__108_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__108_0,
      (int64_t)_9__108_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                               (System_Func_TSource__TResult__o *)_9__108_0,
                                                               (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10485/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
  v22 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Prepend_object_(
                                                              v20,
                                                              v21,
                                                              (const MethodInfo_2FD9698 *)Method_System_Linq_Enumerable_Prepend_string___);
  return System_String__Join_63131132((System_String_o *)StringLiteral_43/*"\n"*/, v22, 0LL);
}


System_Collections_Generic_IEnumerable_RestrictionEntity__o *__fastcall QuestRestrictionInfo__GetRestrictionMessageEntityList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x19
  System_Func_object__bool__o *_9__109_0; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDD73C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C21E38(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__109_0__);
    sub_1C21E38(&QuestRestrictionInfo___c_TypeInfo);
    byte_4BDD73C = 1;
  }
  v3 = QuestRestrictionInfo___c_TypeInfo;
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v3 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__109_0 = (System_Func_object__bool__o *)v3->static_fields->__9__109_0;
  if ( !_9__109_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestRestrictionInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__109_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__109_0,
      v6,
      Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__109_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__109_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__109_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__109_0,
      (int64_t)_9__109_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                          restrictionEntityList,
                                                                          (System_Func_TSource__bool__o *)_9__109_0,
                                                                          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetServantIndividuality(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t ServantImageLimitSealAfter; // w21

  if ( (byte_4BDD736 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD736 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL
    || (ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)Instance,
                                       svtId,
                                       dispLimitCount,
                                       0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C22094(Instance, v9);
  }
  return ServantEntity__getIndividuality((ServantEntity_o *)Instance, limitCount, ServantImageLimitSealAfter, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetServantNumMinRestriction(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.servantNumMin;
}


int32_t __fastcall QuestRestrictionInfo__GetServantNumRangeType(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  RestrictionBaseEntity_o *restrictionBaseEntity; // x0
  struct RestrictionEntity_o *servantNumRestrictionEntity; // x8
  int32_t servantNumMax; // w19
  BalanceConfig_c *v7; // x0

  if ( (byte_4BDD753 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BDD753 = 1;
  }
  if ( this->fields.servantNumMax < 1 )
    return 0;
  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  if ( restrictionBaseEntity )
  {
    if ( RestrictionBaseEntity__HasFlag(restrictionBaseEntity, 8LL, 0LL) )
    {
      return 5;
    }
    else
    {
      servantNumMax = this->fields.servantNumMax;
      v7 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v7 = BalanceConfig_TypeInfo;
      }
      if ( servantNumMax <= v7->static_fields->DeckMainMemberMax )
        return 1;
      else
        return 4;
    }
  }
  else
  {
    servantNumRestrictionEntity = this->fields.servantNumRestrictionEntity;
    if ( !servantNumRestrictionEntity )
      sub_1C22094(0LL, method);
    return servantNumRestrictionEntity->fields.rangeType;
  }
}


int32_t __fastcall QuestRestrictionInfo__GetServantNumRestriction(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.servantNumMax;
}


System_String_o *__fastcall QuestRestrictionInfo__GetServantNumRestrictionDialogMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestRestrictionInfo_o *v3; // x19
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  unsigned int v6; // w21
  RestrictionWholeEntity_o *v7; // x25
  int32_t v8; // w20
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v10; // x21
  unsigned int v11; // w26
  __int64 v12; // x27
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int v15; // w9
  unsigned int v16; // w10
  RestrictionEntity_o *v17; // x11
  Il2CppObject *v18; // x8
  Il2CppObject *v19; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_4BDD755 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD755 = 1;
  }
  v19 = 0LL;
  entity = 0LL;
  if ( v3->fields.restrictionBaseEntity )
  {
    restrictionWholeEntities = v3->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_49;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length < 1 )
    {
LABEL_16:
      if ( v3->fields.servantNumMin < 1 )
        return (System_String_o *)StringLiteral_1/*""*/;
      v8 = 1;
      while ( 1 )
      {
        this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
        if ( !this )
          goto LABEL_49;
        this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                           v8,
                                           (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
        if ( !this )
          goto LABEL_49;
        dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
        v10 = this;
        if ( dialogMessageInfoDictionary >= 1 )
          break;
LABEL_31:
        if ( ++v8 > v3->fields.servantNumMin )
          return (System_String_o *)StringLiteral_1/*""*/;
      }
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= dialogMessageInfoDictionary )
          goto LABEL_50;
        v12 = *((_QWORD *)&v10->fields.eventId + (int)v11);
        if ( !v12 )
          goto LABEL_49;
        if ( *(_DWORD *)(v12 + 44) && !*(_DWORD *)(v12 + 40) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_49;
          this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             &v19,
                                             *(_DWORD *)(v12 + 44),
                                             (const MethodInfo_325BE14 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        dialogMessageInfoDictionary = (int)v10->fields.dialogMessageInfoDictionary;
        if ( (int)++v11 >= dialogMessageInfoDictionary )
          goto LABEL_31;
      }
      v18 = v19;
      if ( !v19 )
        goto LABEL_49;
    }
    else
    {
      v6 = 0;
      while ( 1 )
      {
        if ( v6 >= max_length )
          goto LABEL_50;
        v7 = restrictionWholeEntities->m_Items[v6];
        if ( !v7 )
          goto LABEL_49;
        if ( v7->fields.restrictionMessageId && v7->fields.type == 3 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_49;
          this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             &entity,
                                             v7->fields.restrictionMessageId,
                                             (const MethodInfo_325BE14 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v6 >= max_length )
          goto LABEL_16;
      }
      v18 = entity;
      if ( !entity )
        goto LABEL_49;
    }
    return (System_String_o *)v18[1].monitor;
  }
  else
  {
    restrictionEntityList = v3->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_49;
    v15 = restrictionEntityList->max_length;
    if ( v15 >= 1 )
    {
      v16 = 0;
      method = 0LL;
      while ( 1 )
      {
        if ( v16 >= v15 )
LABEL_50:
          sub_1C2209C(this, method);
        v17 = restrictionEntityList->m_Items[v16];
        if ( !v17 )
          break;
        if ( v17->fields.type == 10 )
          method = (const MethodInfo *)v16;
        else
          method = (const MethodInfo *)(unsigned int)method;
        if ( (int)++v16 >= v15 )
          return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v2);
      }
LABEL_49:
      sub_1C22094(this, method);
    }
    LODWORD(method) = 0;
    return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v2);
  }
}


System_String_o *__fastcall QuestRestrictionInfo__GetServantNumRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int32_t ServantNumRangeType; // w0
  int32_t servantNumMax; // w20
  BalanceConfig_c *v5; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_String_o *v9; // x20
  int32_t *v10; // x1
  Il2CppObject *v11; // x0
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDD754 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10529/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/);
    sub_1C21E38(&StringLiteral_10528/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/);
    byte_4BDD754 = 1;
  }
  ServantNumRangeType = QuestRestrictionInfo__GetServantNumRangeType(this, method);
  if ( ServantNumRangeType == 5 )
    goto LABEL_17;
  if ( ServantNumRangeType != 4 )
    goto LABEL_18;
  servantNumMax = this->fields.servantNumMax;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( servantNumMax > v5->static_fields->DeckMainMemberMax )
  {
LABEL_17:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10529/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, 0LL);
    v10 = &v14;
    v14 = this->fields.servantNumMax;
  }
  else
  {
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10528/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, 0LL);
    v10 = &v13;
    v13 = this->fields.servantNumMax;
  }
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v10, v6, v7, v8);
  return System_String__Format(v9, v11, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetServantRarity(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4BDD735 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD735 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL)) == 0LL )
  {
    sub_1C22094(Instance, v7);
  }
  return *((_DWORD *)Instance + 6);
}


int32_t __fastcall QuestRestrictionInfo__GetSupportInitIndex(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.supportInitIndex;
}


System_String_o *__fastcall QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDD73D & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10530/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/);
    byte_4BDD73D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10530/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, 0LL);
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetSvtIdBattleList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.svtIdForceBattleList;
}


int32_t __fastcall QuestRestrictionInfo__GetTotalCostRestriction(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  RestrictionEntity_o *totalCostRestrictionEntity; // x0

  totalCostRestrictionEntity = this->fields.totalCostRestrictionEntity;
  if ( totalCostRestrictionEntity )
    LODWORD(totalCostRestrictionEntity) = RestrictionEntity__getTotalCost(totalCostRestrictionEntity, 0LL);
  return (int)totalCostRestrictionEntity;
}


System_String_o *__fastcall QuestRestrictionInfo__GetTotalCostRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  System_String_c *klass; // x19
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  Il2CppObject *v8; // x0
  int32_t TotalCost; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4BDD74C & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    byte_4BDD74C = 1;
  }
  result = (System_String_o *)this->fields.totalCostRestrictionEntity;
  if ( result )
  {
    klass = result[1].klass;
    TotalCost = RestrictionEntity__getTotalCost((RestrictionEntity_o *)result, 0LL);
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalCost, v5, v6, v7);
    return System_String__Format((System_String_o *)klass, v8, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetUniqueIndividualityRestrictionMessage(
        QuestRestrictionInfo_o *this,
        bool isFixMessage,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x20
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x8
  int max_length; // w9
  int v7; // w10
  RestrictionWholeEntity_o *v8; // x11

  v4 = this;
  if ( (byte_4BDD743 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10532/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/);
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD743 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_10532/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, 0LL);
  }
  else
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_18:
      sub_1C22094(this, isFixMessage);
    max_length = restrictionWholeEntities->max_length;
    if ( max_length < 1 )
    {
      return (System_String_o *)StringLiteral_1/*""*/;
    }
    else
    {
      v7 = 0;
      while ( 1 )
      {
        if ( max_length == v7 )
          sub_1C2209C(this, isFixMessage);
        v8 = restrictionWholeEntities->m_Items[v7];
        if ( !v8 )
          goto LABEL_18;
        if ( v8->fields.type == 9 )
          return v8->fields.summary;
        if ( max_length == ++v7 )
          return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
  }
}


System_String_o *__fastcall QuestRestrictionInfo__GetUniqueServantRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDD742 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10531/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/);
    byte_4BDD742 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10531/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetUserEventDeckNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.eventDeckNum;
}


bool __fastcall QuestRestrictionInfo__IsAllOutBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isAllOutBattle;
}


bool __fastcall QuestRestrictionInfo__IsConvertOverwriteImage(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Int32_array *overwriteLimitCountSvtIds; // x8
  il2cpp_array_size_t max_length; // w9
  bool v5; // vf
  int v6; // w9
  int v7; // w10
  int32_t v8; // w11
  bool result; // w0

  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( !overwriteLimitCountSvtIds )
    return 0;
  if ( !this->fields.overwriteLimitCounts )
    return 0;
  max_length = overwriteLimitCountSvtIds->max_length;
  v5 = __OFSUB__(max_length, 1);
  v6 = max_length - 1;
  if ( v6 < 0 != v5 )
    return 0;
  v7 = 0;
  do
  {
    v8 = overwriteLimitCountSvtIds->m_Items[v7 + 1];
    result = v8 == svtId;
    if ( v8 == svtId )
      break;
  }
  while ( v6 != v7++ );
  return result;
}


bool __fastcall QuestRestrictionInfo__IsDataLostBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isDataLostBattle;
}


bool __fastcall QuestRestrictionInfo__IsEditablePos(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v4; // x8

  if ( !this->fields.restrictionBaseEntity )
    return 1;
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_7;
  if ( initPos - 1 >= slotInfos->max_length )
    sub_1C2209C(this, initPos);
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C22094(this, initPos);
  return v4->fields.isMoved;
}


bool __fastcall QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_1C22094(this, method);
  return restrictionEntityList->max_length == 0;
}


bool __fastcall QuestRestrictionInfo__IsFatigure(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isFatigure;
}


bool __fastcall QuestRestrictionInfo__IsFirstServantNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x12
  int max_length; // w10
  __int64 v4; // x11
  int v5; // w8
  int v6; // w9
  RestrictionEntity_o **m_Items; // x12
  RestrictionEntity_o *v8; // x13
  int32_t type; // w13

  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_16;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0LL;
    v5 = 0;
    v6 = 0;
    m_Items = restrictionEntityList->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v4 >= max_length )
        sub_1C2209C(this, method);
      v8 = m_Items[v4];
      if ( !v8 )
        break;
      type = v8->fields.type;
      switch ( type )
      {
        case 8:
          v5 = v4;
          break;
        case 10:
          v6 = v4;
          break;
        case 14:
          v5 = v4;
          break;
      }
      if ( (int)++v4 >= max_length )
        return v5 != 0 && v5 > v6;
    }
LABEL_16:
    sub_1C22094(this, method);
  }
  v6 = 0;
  v5 = 0;
  return v5 != 0 && v5 > v6;
}


bool __fastcall QuestRestrictionInfo__IsFixedMyServantPosition(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isFixedMyServantPosition;
}


bool __fastcall QuestRestrictionInfo__IsFixedMyServantSingleRestriction(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.isFixedMyServantSingle;
}


bool __fastcall QuestRestrictionInfo__IsFixedServantPosition(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isFixedMyServantPosition || this->fields.isNeedStarting || this->fields.isFixedPosition;
}


bool __fastcall QuestRestrictionInfo__IsFixedServantPositionIncludeSupport(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.isNeedStarting || this->fields.isFixedPosition;
}


bool __fastcall QuestRestrictionInfo__IsFixedSupportPosition(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isFixedSupportPosition || this->fields.isFixedNpcPosition;
}


bool __fastcall QuestRestrictionInfo__IsFixedSupportPositionIndividuality(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_int____o *fixedSupportIndividualitiesList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BDD768 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDD768 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !this->fields.isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.isFixedSupportPosition )
  {
    fixedSupportIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)fixedSupportIndividualitiesList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v11;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v6 )
        break;
      if ( !v3 )
        sub_1C22094(v6, v7);
    }
  }
  else
  {
    fixedSupportIndividualitiesList = this->fields.fixedNpcIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)fixedSupportIndividualitiesList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v11;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v9 )
        break;
      if ( !v3 )
        sub_1C22094(v9, v10);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v3 )
LABEL_23:
    sub_1C22094(fixedSupportIndividualitiesList, v4);
  return v3->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsFixedSupportPosition_41724636(
        QuestRestrictionInfo_o *this,
        int32_t num,
        ServantLeaderInfo_o *servantInfo,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x20
  System_Collections_Generic_List_int__o *v7; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x23
  __int64 v14; // x24
  __int64 v15; // x25
  Il2CppObject *Entity; // x23
  int32_t current; // w22
  int32_t limitCount; // w24
  __int64 DispLimitCount; // x0
  __int64 v20; // x1
  struct System_Boolean_array *supportPositionList; // x8
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v6 = this;
  if ( (byte_4BDD744 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDD744 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v23, 0, sizeof(v23));
  if ( v6->fields.isFixedSupportPosition )
  {
    if ( !v6->fields.isFixedNpcPosition )
      goto LABEL_9;
  }
  else if ( !v6->fields.isFixedNpcPosition )
  {
    return 0;
  }
  if ( !servantInfo )
    goto LABEL_42;
  this = (QuestRestrictionInfo_o *)ServantLeaderInfo__IsNpc(servantInfo, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
LABEL_9:
  if ( !v6->fields.restrictionBaseEntity )
    goto LABEL_36;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v6->fields.isFixedSupportPosition )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedSupportIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v22;
          ;
          System_Collections_Generic_List_int___AddRange(
            v7,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v8 )
        break;
      if ( !v7 )
        sub_1C22094(v8, v9);
    }
  }
  else
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedNpcIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v22;
          ;
          System_Collections_Generic_List_int___AddRange(
            v7,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v11 )
        break;
      if ( !v7 )
        sub_1C22094(v11, v12);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v7 )
    goto LABEL_42;
  if ( v7->fields._size < 1 )
    goto LABEL_36;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_42;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v15 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  *(_QWORD *)&v25.fields.fakeValue = v14;
  this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v25, 0LL);
  if ( !v13 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v13,
             (int32_t)this,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    v7,
    (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = v22;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v23,
            (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v23,
        (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      return 1;
    }
    current = (int32_t)v23.fields._current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, 0LL);
    if ( !Entity )
      sub_1C22094(DispLimitCount, v20);
  }
  while ( !ServantEntity__IsIndividuality((ServantEntity_o *)Entity, limitCount, DispLimitCount, current, 0LL) );
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v23,
    (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_36:
  supportPositionList = v6->fields.supportPositionList;
  if ( !supportPositionList )
LABEL_42:
    sub_1C22094(this, *(_QWORD *)&num);
  if ( supportPositionList->max_length <= num )
    sub_1C2209C(this, *(_QWORD *)&num);
  return !supportPositionList->m_Items[num + 4];
}


bool __fastcall QuestRestrictionInfo__IsMyServantNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  if ( this->fields.restrictionBaseEntity )
    return this->fields.myServantNumMax > 0;
  else
    return this->fields.myServantNumRestrictionEntity != 0LL;
}


bool __fastcall QuestRestrictionInfo__IsMyServantOrNpcRestriction(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.isMyServantOrNpc || this->fields.isMyServantOrSupport;
}


bool __fastcall QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass179_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v9; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4BDD75A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
    sub_1C21E38(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__DisplayClass179_0__IsMyServantOrNpcRestriction_b__0__);
    sub_1C21E38(&QuestRestrictionInfo___c__DisplayClass179_0_TypeInfo);
    byte_4BDD75A = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass179_0_o *)sub_1C22084(QuestRestrictionInfo___c__DisplayClass179_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass179_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  v5->fields.pos = pos;
  if ( !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  if ( this->fields.restrictionBaseEntity )
  {
    slotInfos = this->fields.slotInfos;
    if ( slotInfos )
    {
      if ( pos - 1 >= slotInfos->max_length )
        sub_1C2209C(v6, v7);
      v9 = slotInfos->m_Items[pos - 1];
      if ( v9 )
        return (unsigned int)(v9->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_1C22094(v6, v7);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v12 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass179_0__IsMyServantOrNpcRestriction_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  return System_Collections_Generic_List_object___Exists(
           myServantOrNpcRestrictionEntityList,
           (System_Predicate_T__o *)v12,
           (const MethodInfo_364F6E0 *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
}


bool __fastcall QuestRestrictionInfo__IsNoSupportBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNoSupportBattle;
}


bool __fastcall QuestRestrictionInfo__IsNotIndividuality(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass181_0_o *v5; // x21
  void *restrictionSlotDetailDictionary; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int v9; // w8
  int v10; // w9
  __int64 v11; // x10
  __int64 v12; // x10
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v14; // x20
  __int64 v15; // x8

  if ( (byte_4BDD75C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C21E38(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__DisplayClass181_0__IsNotIndividuality_b__0__);
    sub_1C21E38(&QuestRestrictionInfo___c__DisplayClass181_0_TypeInfo);
    byte_4BDD75C = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass181_0_o *)sub_1C22084(QuestRestrictionInfo___c__DisplayClass181_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass181_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_23;
  v5->fields.pos = pos;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(this, pos, v8) )
  {
    if ( this->fields.restrictionBaseEntity )
    {
      restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                          (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                          v5->fields.pos,
                                          (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      v9 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
      if ( v9 >= 1 )
      {
        v10 = 0;
        while ( 1 )
        {
          if ( v9 == v10 )
            sub_1C2209C(restrictionSlotDetailDictionary, v7);
          v11 = *((_QWORD *)restrictionSlotDetailDictionary + v10 + 4);
          if ( !v11 )
            break;
          if ( *(_DWORD *)(v11 + 32) == 1 )
          {
            v12 = *(_QWORD *)(v11 + 40);
            if ( v12 )
            {
              if ( *(_QWORD *)(v12 + 24) )
                goto LABEL_17;
            }
          }
          if ( v9 == ++v10 )
            goto LABEL_16;
        }
LABEL_23:
        sub_1C22094(restrictionSlotDetailDictionary, v7);
      }
LABEL_16:
      LOBYTE(restrictionSlotDetailDictionary) = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
      v14 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v14,
        (Il2CppObject *)v5,
        Method_QuestRestrictionInfo___c__DisplayClass181_0__IsNotIndividuality_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                          myServantOrNpcRestrictionEntityList,
                                          (System_Predicate_T__o *)v14,
                                          (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( restrictionSlotDetailDictionary )
      {
        v15 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
        if ( !v15 )
          goto LABEL_23;
        LOBYTE(restrictionSlotDetailDictionary) = *(_DWORD *)(v15 + 24) == 0;
      }
    }
  }
  else
  {
LABEL_17:
    LOBYTE(restrictionSlotDetailDictionary) = 0;
  }
  return (char)restrictionSlotDetailDictionary;
}


bool __fastcall QuestRestrictionInfo__IsNotSingleSupportOnly(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNotSingleSupportOnly;
}


bool __fastcall QuestRestrictionInfo__IsNotTransitionSupportList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotTransitionSupportList;
}


bool __fastcall QuestRestrictionInfo__IsNpcEditablePos(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNpcEditablePos;
}


bool __fastcall QuestRestrictionInfo__IsNpcMulitipleOrOnly(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNpcMultipleBattle || this->fields.isNpcOnlyBattle;
}


bool __fastcall QuestRestrictionInfo__IsNpcMulitpleBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNpcMultipleBattle;
}


bool __fastcall QuestRestrictionInfo__IsNpcOnlyBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNpcOnlyBattle;
}


bool __fastcall QuestRestrictionInfo__IsPositionFixNpc(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v4; // x8

  if ( this->fields.restrictionBaseEntity )
  {
    slotInfos = this->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_10;
    if ( initPos - 1 >= slotInfos->max_length )
      sub_1C2209C(this, initPos);
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_1C22094(this, initPos);
    return v4->fields.slotType == 1 && !QuestRestrictionInfo__IsEditablePos(this, initPos, method);
  }
  else
  {
    return 1;
  }
}


bool __fastcall QuestRestrictionInfo__IsRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isRestriction;
}


bool __fastcall QuestRestrictionInfo__IsRestrictionIndividualitySlot(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  System_Object_array *slotInfos; // x19
  QuestRestrictionInfo___c_c *v4; // x0
  System_Func_object__bool__o *_9__98_0; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDD734 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
    sub_1C21E38(&System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__98_0__);
    sub_1C21E38(&QuestRestrictionInfo___c_TypeInfo);
    byte_4BDD734 = 1;
  }
  if ( !this->fields.restrictionBaseEntity )
    return 0;
  slotInfos = (System_Object_array *)this->fields.slotInfos;
  v4 = QuestRestrictionInfo___c_TypeInfo;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v4 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__98_0 = (System_Func_object__bool__o *)v4->static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = QuestRestrictionInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__98_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__98_0,
      v6,
      Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__98_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = (struct System_Func_QuestRestrictionInfo_SlotInfo__bool__o *)_9__98_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__98_0, (int64_t)_9__98_0, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_object__49917468(
           slotInfos,
           (System_Func_T__bool__o *)_9__98_0,
           (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
}


bool __fastcall QuestRestrictionInfo__IsRestrictionIndividualityWhole(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c_c *v3; // x0
  System_Object_array *restrictionWholeEntities; // x19
  System_Func_object__bool__o *_9__97_1; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo_2F9AE1C *v14; // x2
  QuestRestrictionInfo___c_c *v15; // x0
  Il2CppObject *v16; // x21
  struct QuestRestrictionInfo___c_StaticFields *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BDD733 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_RestrictionEntity___);
    sub_1C21E38(&Method_BasicHelper_Any_RestrictionWholeEntity___);
    sub_1C21E38(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C21E38(&System_Func_RestrictionWholeEntity__bool__TypeInfo);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__97_0__);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__97_1__);
    sub_1C21E38(&QuestRestrictionInfo___c_TypeInfo);
    byte_4BDD733 = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    v3 = QuestRestrictionInfo___c_TypeInfo;
    restrictionWholeEntities = (System_Object_array *)this->fields.restrictionWholeEntities;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v3 = QuestRestrictionInfo___c_TypeInfo;
    }
    _9__97_1 = (System_Func_object__bool__o *)v3->static_fields->__9__97_1;
    if ( !_9__97_1 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = QuestRestrictionInfo___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v3->static_fields->__9;
      _9__97_1 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RestrictionWholeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__97_1,
        v6,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__97_1__,
        0LL);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__97_1 = (struct System_Func_RestrictionWholeEntity__bool__o *)_9__97_1;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__97_1,
        (int64_t)_9__97_1,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    v14 = (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_RestrictionWholeEntity___;
  }
  else
  {
    v15 = QuestRestrictionInfo___c_TypeInfo;
    restrictionWholeEntities = (System_Object_array *)this->fields.restrictionEntityList;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v15 = QuestRestrictionInfo___c_TypeInfo;
    }
    _9__97_1 = (System_Func_object__bool__o *)v15->static_fields->__9__97_0;
    if ( !_9__97_1 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = QuestRestrictionInfo___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v15->static_fields->__9;
      _9__97_1 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RestrictionEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__97_1,
        v16,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__97_0__,
        0LL);
      v17 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v17->__9__97_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__97_1;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v17->__9__97_0, (int64_t)_9__97_1, v18, v19, v20, v21, v22, v23);
    }
    v14 = (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_RestrictionEntity___;
  }
  return BasicHelper__Any_object__49917468(restrictionWholeEntities, (System_Func_T__bool__o *)_9__97_1, v14);
}


bool __fastcall QuestRestrictionInfo__IsRestrictionServantIndividuality(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t pos,
        bool isChkSupport,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass182_0_o *v13; // x24
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  int32_t ServantImageLimitSealAfter; // w20
  Il2CppObject *Entity; // x21
  int v19; // w25
  __int64 m_CancellationTokenSource; // x8
  bool *p_DispLog; // x9
  __int64 v22; // x10
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x22
  System_Predicate_object__o *v24; // x23
  struct DataMasterBase_array *datalist; // x8
  RestrictionEntity_o *v26; // x22
  __int64 v27; // x8
  System_Int32_array *v28; // x0
  struct System_Threading_CancellationTokenSource_o *v29; // x9
  DataManager_o *v30; // x22
  unsigned __int64 v31; // x24
  RestrictionSlotDetailEntity_o *v32; // x23
  struct System_Int32_array *targetVals; // x9
  System_Int32_array *Individuality; // x0

  if ( (byte_4BDD75D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C21E38(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__DisplayClass182_0__IsRestrictionServantIndividuality_b__0__);
    sub_1C21E38(&QuestRestrictionInfo___c__DisplayClass182_0_TypeInfo);
    byte_4BDD75D = 1;
  }
  v13 = (QuestRestrictionInfo___c__DisplayClass182_0_o *)sub_1C22084(QuestRestrictionInfo___c__DisplayClass182_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass182_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_51;
  v13->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(this, pos, v16) )
    goto LABEL_49;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_51;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_51;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)this->fields.restrictionSlotDictionary;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                    v13->fields.pos,
                                    (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( Instance )
      {
        v19 = -1;
        if ( (int)Instance->fields.m_CancellationTokenSource >= 1 )
        {
          m_CancellationTokenSource = (unsigned int)Instance->fields.m_CancellationTokenSource;
          p_DispLog = &Instance->fields._DispLog;
          while ( 1 )
          {
            v22 = *(_QWORD *)p_DispLog;
            if ( isChkSupport )
            {
              if ( !v22 )
                goto LABEL_51;
              if ( *(_DWORD *)(v22 + 28) == 2 )
                goto LABEL_30;
            }
            else
            {
              if ( !v22 )
                goto LABEL_51;
              if ( *(_DWORD *)(v22 + 28) == 1 )
              {
LABEL_30:
                v19 = *(_DWORD *)(v22 + 40);
                break;
              }
            }
            --m_CancellationTokenSource;
            p_DispLog += 8;
            if ( !m_CancellationTokenSource )
            {
              v19 = -1;
              break;
            }
          }
        }
        Instance = (DataManager_o *)this->fields.restrictionSlotDetailDictionary;
        if ( Instance )
        {
          Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                        v13->fields.pos,
                                        (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
          if ( Instance )
          {
            v29 = Instance->fields.m_CancellationTokenSource;
            v30 = Instance;
            if ( (int)v29 >= 1 )
            {
              LOBYTE(v27) = 0;
              v31 = 0LL;
              while ( 1 )
              {
                if ( v31 >= (unsigned int)v29 )
                  sub_1C2209C(Instance, v15);
                v32 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v30->fields._DispLog + v31);
                if ( (v19 & 0x80000000) != 0 )
                {
                  if ( !v32 )
                    goto LABEL_51;
                }
                else
                {
                  if ( !v32 )
                    goto LABEL_51;
                  if ( v19 != v32->fields.id )
                    goto LABEL_47;
                }
                if ( v32->fields.type == 1 )
                {
                  targetVals = v32->fields.targetVals;
                  if ( targetVals )
                  {
                    if ( *(_QWORD *)&targetVals->max_length )
                    {
                      if ( !Entity )
                        goto LABEL_51;
                      Individuality = ServantEntity__getIndividuality(
                                        (ServantEntity_o *)Entity,
                                        limitCount,
                                        ServantImageLimitSealAfter,
                                        0LL);
                      Instance = (DataManager_o *)RestrictionSlotDetailEntity__IsIndividuality(v32, Individuality, 0LL);
                      if ( ((unsigned __int8)Instance & 1) != 0 )
                        goto LABEL_49;
                      LOBYTE(v27) = 1;
                    }
                  }
                }
LABEL_47:
                LODWORD(v29) = v30->fields.m_CancellationTokenSource;
                if ( (__int64)++v31 >= (int)v29 )
                  return v27;
              }
            }
            goto LABEL_49;
          }
        }
      }
    }
LABEL_51:
    sub_1C22094(Instance, v15);
  }
  if ( isChkSupport )
    goto LABEL_49;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v24 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v24,
    (Il2CppObject *)v13,
    Method_QuestRestrictionInfo___c__DisplayClass182_0__IsRestrictionServantIndividuality_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_51;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                myServantOrNpcRestrictionEntityList,
                                (System_Predicate_T__o *)v24,
                                (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !Instance )
    goto LABEL_49;
  datalist = Instance->fields.datalist;
  v26 = (RestrictionEntity_o *)Instance;
  if ( !datalist )
    goto LABEL_51;
  v27 = *(_QWORD *)&datalist->max_length;
  if ( v27 )
  {
    if ( !Entity )
      goto LABEL_51;
    v28 = ServantEntity__getIndividuality((ServantEntity_o *)Entity, limitCount, ServantImageLimitSealAfter, 0LL);
    if ( RestrictionEntity__IsRestriction_40845148(v26, v28, 0LL) )
    {
      LOBYTE(v27) = 1;
      return v27;
    }
LABEL_49:
    LOBYTE(v27) = 0;
  }
  return v27;
}


bool __fastcall QuestRestrictionInfo__IsRestrictionServantIndividuality_41739952(
        QuestRestrictionInfo_o *this,
        System_Int32_array *individuality,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass183_0_o *v7; // x22
  void *restrictionSlotDetailDictionary; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int v11; // w9
  void *v12; // x20
  unsigned int v13; // w21
  __int64 v14; // x8
  __int64 v15; // x9
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x20
  System_Predicate_object__o *v17; // x21
  __int64 v18; // x8

  if ( (byte_4BDD75E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C21E38(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__DisplayClass183_0__IsRestrictionServantIndividuality_b__0__);
    sub_1C21E38(&QuestRestrictionInfo___c__DisplayClass183_0_TypeInfo);
    byte_4BDD75E = 1;
  }
  v7 = (QuestRestrictionInfo___c__DisplayClass183_0_o *)sub_1C22084(QuestRestrictionInfo___c__DisplayClass183_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass183_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_26;
  v7->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(this, pos, v10) )
    goto LABEL_24;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        v7->fields.pos,
                                        (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    v11 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v12 = restrictionSlotDetailDictionary;
    if ( v11 >= 1 )
    {
      v13 = 0;
      LOBYTE(v14) = 0;
      while ( 1 )
      {
        if ( v13 >= v11 )
          sub_1C2209C(restrictionSlotDetailDictionary, v9);
        restrictionSlotDetailDictionary = (void *)*((_QWORD *)v12 + (int)v13 + 4);
        if ( !restrictionSlotDetailDictionary )
          break;
        if ( *((_DWORD *)restrictionSlotDetailDictionary + 8) == 1 )
        {
          v15 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
          if ( v15 )
          {
            if ( *(_QWORD *)(v15 + 24) )
            {
              restrictionSlotDetailDictionary = (void *)RestrictionSlotDetailEntity__IsIndividuality(
                                                          (RestrictionSlotDetailEntity_o *)restrictionSlotDetailDictionary,
                                                          individuality,
                                                          0LL);
              if ( ((unsigned __int8)restrictionSlotDetailDictionary & 1) != 0 )
                goto LABEL_24;
              LOBYTE(v14) = 1;
            }
          }
        }
        v11 = *((_DWORD *)v12 + 6);
        if ( (int)++v13 >= v11 )
          return v14 & 1;
      }
LABEL_26:
      sub_1C22094(restrictionSlotDetailDictionary, v9);
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v17 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_QuestRestrictionInfo___c__DisplayClass183_0__IsRestrictionServantIndividuality_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_26;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                      myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v17,
                                      (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !restrictionSlotDetailDictionary )
  {
LABEL_24:
    LOBYTE(v14) = 0;
    return v14 & 1;
  }
  v18 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
  if ( !v18 )
    goto LABEL_26;
  v14 = *(_QWORD *)(v18 + 24);
  if ( v14 )
    return RestrictionEntity__IsRestriction_40845148(
             (RestrictionEntity_o *)restrictionSlotDetailDictionary,
             individuality,
             0LL);
  return v14 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestrictionSlot(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t initPos,
        const MethodInfo *method)
{
  _BOOL8 IsRestrictionIndividualitySlot; // x0
  const MethodInfo *v12; // x4
  System_Int32_array *ServantIndividuality; // x1
  const MethodInfo *v14; // x3

  if ( initPos < 1 )
    return 0;
  IsRestrictionIndividualitySlot = QuestRestrictionInfo__IsRestrictionIndividualitySlot(
                                     this,
                                     *(const MethodInfo **)&svtId);
  if ( !IsRestrictionIndividualitySlot )
    return 0;
  ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                           (QuestRestrictionInfo_o *)IsRestrictionIndividualitySlot,
                           svtId,
                           limitCount,
                           dispLimitCount,
                           v12);
  return QuestRestrictionInfo__IsRestrictionSlot_41717756(this, ServantIndividuality, initPos, v14);
}


bool __fastcall QuestRestrictionInfo__IsRestrictionSlot_41717756(
        QuestRestrictionInfo_o *this,
        System_Int32_array *svtIndividuality,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x20
  unsigned int v7; // w23
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  bool v9; // w22
  int32_t v10; // w21
  QuestRestrictionInfo_SlotInfo_o *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v13; // x8
  QuestRestrictionInfo_SlotInfo_o *v14; // x8
  QuestRestrictionInfo_o *v15; // x22
  struct QuestRestrictionInfo_SlotInfo_array *v16; // x8
  QuestRestrictionInfo_SlotInfo_o *v17; // x8

  v6 = this;
  if ( (byte_4BDD739 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    byte_4BDD739 = 1;
  }
  v7 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v6->fields.slotInfos;
    if ( !slotInfos )
LABEL_27:
      sub_1C22094(this, svtIndividuality);
    v9 = 0;
    v10 = 0;
    while ( v7 < slotInfos->max_length )
    {
      v11 = slotInfos->m_Items[v7];
      if ( !v11 )
        goto LABEL_27;
      this = (QuestRestrictionInfo_o *)v11->fields.individualityList;
      if ( !this )
        goto LABEL_27;
      if ( v10 >= SLODWORD(this->fields.dialogMessageInfoDictionary) )
        return v9;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v10,
                                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_int____get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->fields.dialogMessageInfoDictionary )
      {
        v12 = System_Linq_Enumerable__Intersect_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this,
                (System_Collections_Generic_IEnumerable_TSource__o *)svtIndividuality,
                (const MethodInfo_2FD4278 *)Method_System_Linq_Enumerable_Intersect_int___);
        this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_int_(
                                           v12,
                                           (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
        v13 = v6->fields.slotInfos;
        if ( !v13 )
          goto LABEL_27;
        if ( v7 >= v13->max_length )
          break;
        v14 = v13->m_Items[v7];
        if ( !v14 )
          goto LABEL_27;
        v15 = this;
        this = (QuestRestrictionInfo_o *)v14->fields.rangeTypeList;
        if ( !this )
          goto LABEL_27;
        this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                           (System_Collections_Generic_List_T__o *)this,
                                           v10,
                                           (const MethodInfo_36345CC *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
        if ( (_DWORD)this == 1 )
        {
          this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                             (const MethodInfo_2FBAD74 *)Method_System_Linq_Enumerable_Any_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 0;
        }
        else
        {
          v16 = v6->fields.slotInfos;
          if ( !v16 )
            goto LABEL_27;
          if ( v7 >= v16->max_length )
            break;
          v17 = v16->m_Items[v7];
          if ( !v17 )
            goto LABEL_27;
          this = (QuestRestrictionInfo_o *)v17->fields.rangeTypeList;
          if ( !this )
            goto LABEL_27;
          this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                             (System_Collections_Generic_List_T__o *)this,
                                             v10,
                                             (const MethodInfo_36345CC *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)this == 2 )
          {
            this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                               (const MethodInfo_2FBAD74 *)Method_System_Linq_Enumerable_Any_int___);
            if ( ((unsigned __int8)this & 1) == 0 )
              return 0;
          }
        }
        v9 = 1;
      }
      slotInfos = v6->fields.slotInfos;
      ++v10;
      if ( !slotInfos )
        goto LABEL_27;
    }
    sub_1C2209C(this, svtIndividuality);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestriction_41717016(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t lv,
        int32_t targetType,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v12; // x21
  int32_t ServantRarity; // w22
  const MethodInfo *v14; // x1
  _BOOL8 IsRestrictionIndividualityWhole; // x0
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x6
  long double inited; // q0
  System_Int32_array *ServantIndividuality; // x2
  _QWORD *v20; // x23
  __int64 v21; // x8
  __int64 v22; // x0
  __int64 v23; // x0
  bool isWhole; // [xsp+Ch] [xbp-44h] BYREF

  v12 = this;
  if ( (byte_4BDD737 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&Method_System_Array_Empty_int___);
    byte_4BDD737 = 1;
  }
  isWhole = 0;
  ServantRarity = QuestRestrictionInfo__GetServantRarity(this, svtId, limitCount, *(const MethodInfo **)&dispLimitCount);
  IsRestrictionIndividualityWhole = QuestRestrictionInfo__IsRestrictionIndividualityWhole(v12, v14);
  if ( IsRestrictionIndividualityWhole )
  {
    ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                             (QuestRestrictionInfo_o *)IsRestrictionIndividualityWhole,
                             svtId,
                             limitCount,
                             dispLimitCount,
                             v16);
  }
  else
  {
    v20 = Method_System_Array_Empty_int___;
    v21 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v21 )
    {
      sub_1C73D70(Method_System_Array_Empty_int___);
      v21 = v20[7];
    }
    v22 = *(_QWORD *)(v21 + 16);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C73D14(inited);
    if ( !*(_DWORD *)(v22 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v22);
    v23 = *(_QWORD *)(v20[7] + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C73D14(inited);
    ServantIndividuality = **(System_Int32_array ***)(v23 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_41717288(
           v12,
           &isWhole,
           ServantIndividuality,
           ServantRarity,
           lv,
           targetType,
           v17);
}


bool __fastcall QuestRestrictionInfo__IsRestriction_41717288(
        QuestRestrictionInfo_o *this,
        bool *isWhole,
        System_Int32_array *svtIndividuality,
        int32_t rarity,
        int32_t lv,
        int32_t targetType,
        const MethodInfo *method)
{
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int v9; // w8
  unsigned int v11; // w21
  struct RestrictionEntity_array *restrictionEntityList; // x24
  int max_length; // w8
  unsigned int v17; // w25
  RestrictionEntity_o *v18; // x23
  int32_t type; // w8
  RestrictionEntity_o *v20; // x0
  int32_t v21; // w1
  bool result; // w0

  *isWhole = 0;
  if ( !this->fields.restrictionBaseEntity )
  {
    restrictionEntityList = this->fields.restrictionEntityList;
    if ( !restrictionEntityList )
LABEL_30:
      sub_1C22094(this, isWhole);
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
      return 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
LABEL_29:
        sub_1C2209C(this, isWhole);
      v18 = restrictionEntityList->m_Items[v17];
      if ( !v18 )
        goto LABEL_30;
      type = v18->fields.type;
      if ( type == 4 )
        break;
      if ( type == 2 )
      {
        v20 = restrictionEntityList->m_Items[v17];
        v21 = rarity;
LABEL_24:
        this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction(v20, v21, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
        goto LABEL_25;
      }
      if ( type == 1 )
      {
        this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestrictionTarget(v18, targetType, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction_40845148(v18, svtIndividuality, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 1;
        }
      }
LABEL_25:
      max_length = restrictionEntityList->max_length;
      if ( (int)++v17 >= max_length )
        return 0;
    }
    v20 = restrictionEntityList->m_Items[v17];
    v21 = lv;
    goto LABEL_24;
  }
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_30;
  v9 = restrictionWholeEntities->max_length;
  if ( v9 < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= v9 )
      goto LABEL_29;
    this = (QuestRestrictionInfo_o *)restrictionWholeEntities->m_Items[v11];
    if ( !this )
      goto LABEL_30;
    if ( this->fields.eventId == 1 )
    {
      this = (QuestRestrictionInfo_o *)RestrictionWholeEntity__IsIndividuality(
                                         (RestrictionWholeEntity_o *)this,
                                         svtIndividuality,
                                         0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
    }
    v9 = restrictionWholeEntities->max_length;
    if ( (int)++v11 >= v9 )
      return 0;
  }
  result = 1;
  *isWhole = 1;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestriction_41718260(
        QuestRestrictionInfo_o *this,
        bool *isWhole,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t lv,
        int32_t initPos,
        int32_t targetType,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v16; // x23
  int32_t ServantRarity; // w24
  const MethodInfo *v18; // x1
  _BOOL8 IsRestrictionIndividualityWhole; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x7
  long double inited; // q0
  System_Int32_array *ServantIndividuality; // x2
  _QWORD *v25; // x25
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 v28; // x0

  v16 = this;
  if ( (byte_4BDD738 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&Method_System_Array_Empty_int___);
    byte_4BDD738 = 1;
  }
  ServantRarity = QuestRestrictionInfo__GetServantRarity(this, svtId, limitCount, *(const MethodInfo **)&limitCount);
  IsRestrictionIndividualityWhole = QuestRestrictionInfo__IsRestrictionIndividualityWhole(v16, v18);
  if ( IsRestrictionIndividualityWhole
    || (IsRestrictionIndividualityWhole = QuestRestrictionInfo__IsRestrictionIndividualitySlot(v16, v20)) )
  {
    ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                             (QuestRestrictionInfo_o *)IsRestrictionIndividualityWhole,
                             svtId,
                             limitCount,
                             dispLimitCount,
                             v21);
  }
  else
  {
    v25 = Method_System_Array_Empty_int___;
    v26 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v26 )
    {
      sub_1C73D70(Method_System_Array_Empty_int___);
      v26 = v25[7];
    }
    v27 = *(_QWORD *)(v26 + 16);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C73D14(inited);
    if ( !*(_DWORD *)(v27 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v27);
    v28 = *(_QWORD *)(v25[7] + 16LL);
    if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
      v28 = sub_1C73D14(inited);
    ServantIndividuality = **(System_Int32_array ***)(v28 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_41718544(
           v16,
           isWhole,
           ServantIndividuality,
           ServantRarity,
           lv,
           initPos,
           targetType,
           v22);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestriction_41718544(
        QuestRestrictionInfo_o *this,
        bool *isWhole,
        System_Int32_array *svtIndividuality,
        int32_t rarity,
        int32_t lv,
        int32_t initPos,
        int32_t targetType,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3

  if ( QuestRestrictionInfo__IsRestriction_41717288(
         this,
         isWhole,
         svtIndividuality,
         rarity,
         lv,
         targetType,
         *(const MethodInfo **)&targetType) )
  {
    return 1;
  }
  if ( this->fields.restrictionBaseEntity )
    return QuestRestrictionInfo__IsRestrictionSlot_41717756(this, svtIndividuality, initPos, v11);
  return 0;
}


bool __fastcall QuestRestrictionInfo__IsSelectableNormalSupport(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass180_0_o *v5; // x21
  _BOOL8 IsMyServantOrNpcRestriction_41736952; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v10; // w9
  QuestRestrictionInfo_SlotInfo_o *v11; // x8
  bool v12; // zf
  Il2CppObject *v13; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_4BDD75B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C21E38(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__DisplayClass180_0__IsSelectableNormalSupport_b__0__);
    sub_1C21E38(&QuestRestrictionInfo___c__DisplayClass180_0_TypeInfo);
    byte_4BDD75B = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass180_0_o *)sub_1C22084(QuestRestrictionInfo___c__DisplayClass180_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass180_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_18;
  v5->fields.pos = pos;
  IsMyServantOrNpcRestriction_41736952 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(this, pos, v8);
  if ( !IsMyServantOrNpcRestriction_41736952 )
  {
    LOBYTE(v13) = 0;
    return (char)v13;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    v15 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v15,
      (Il2CppObject *)v5,
      Method_QuestRestrictionInfo___c__DisplayClass180_0__IsSelectableNormalSupport_b__0__,
      0LL);
    if ( myServantOrNpcRestrictionEntityList )
    {
      v13 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v15,
              (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v13 )
        return (char)v13;
      v12 = LODWORD(v13[2].klass) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_1C22094(IsMyServantOrNpcRestriction_41736952, v7);
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v10 = v5->fields.pos - 1;
  if ( v10 >= slotInfos->max_length )
    sub_1C2209C(IsMyServantOrNpcRestriction_41736952, v7);
  v11 = slotInfos->m_Items[v10];
  if ( !v11 )
    goto LABEL_18;
  v12 = v11->fields.slotType == 4;
LABEL_14:
  LOBYTE(v13) = v12;
  return (char)v13;
}


bool __fastcall QuestRestrictionInfo__IsServantNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.servantNumMax > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsServantNumAndFixedServantPositionRestriction(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t pos,
        const MethodInfo *method)
{
  int32_t servantNumMax; // w8
  void *IsMyServantOrNpcRestriction_41736952; // x0
  int32_t *p_myServantNumMax; // x8
  int32_t v10; // w8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x9
  int v13; // w8
  int v14; // w9
  int v15; // w8
  int v16; // w10
  int v17; // w11
  bool v18; // zf
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  int max_length; // w9
  int v22; // w10
  int v23; // w9
  int32_t v24; // w11
  int v25; // w12

  if ( (byte_4BDD756 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    byte_4BDD756 = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  IsMyServantOrNpcRestriction_41736952 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    IsMyServantOrNpcRestriction_41736952 = BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    p_myServantNumMax = (int32_t *)(*((_QWORD *)IsMyServantOrNpcRestriction_41736952 + 23) + 156LL);
  }
  else
  {
    p_myServantNumMax = &this->fields.myServantNumMax;
    if ( this->fields.myServantNumMax <= 0 )
      p_myServantNumMax = &this->fields.servantNumMax;
  }
  v10 = *p_myServantNumMax;
  if ( this->fields.isMyServantOrNpc || this->fields.isMyServantOrSupport )
  {
    myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_44;
    v10 -= myServantOrNpcRestrictionEntityList->fields._size;
  }
  if ( v10 != 1 )
    return 0;
  IsMyServantOrNpcRestriction_41736952 = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(
                                                   this,
                                                   pos,
                                                   *(const MethodInfo **)&pos);
  if ( ((unsigned __int8)IsMyServantOrNpcRestriction_41736952 & 1) != 0 )
    return 0;
  if ( !this->fields.isFixedMyServantPosition )
  {
    fixedServantPositionRestrictionEntity = this->fields.fixedServantPositionRestrictionEntity;
    if ( !fixedServantPositionRestrictionEntity )
      return 1;
    targetVals = fixedServantPositionRestrictionEntity->fields.targetVals;
    if ( targetVals )
    {
      max_length = targetVals->max_length;
      if ( max_length >= 1 )
      {
        v22 = 0;
        v23 = -max_length;
        do
        {
          if ( !(v23 + v22) )
LABEL_43:
            sub_1C2209C(IsMyServantOrNpcRestriction_41736952, *(_QWORD *)&svtId);
          v24 = targetVals->m_Items[v22 + 1];
          if ( v24 == svtId )
            break;
          v25 = v23 + v22++;
        }
        while ( v25 != -1 );
        v18 = v24 == svtId;
        return !v18;
      }
      return 1;
    }
LABEL_44:
    sub_1C22094(IsMyServantOrNpcRestriction_41736952, *(_QWORD *)&svtId);
  }
  IsMyServantOrNpcRestriction_41736952 = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                           this,
                                           *(const MethodInfo **)&svtId);
  if ( !IsMyServantOrNpcRestriction_41736952 )
    goto LABEL_44;
  v13 = *((_DWORD *)IsMyServantOrNpcRestriction_41736952 + 6);
  if ( v13 < 1 )
    return 1;
  v14 = 0;
  v15 = -v13;
  do
  {
    if ( !(v15 + v14) )
      goto LABEL_43;
    v16 = *((_DWORD *)IsMyServantOrNpcRestriction_41736952 + v14 + 8);
    if ( v16 == svtId )
      break;
    v17 = v15 + v14++;
  }
  while ( v17 != -1 );
  v18 = v16 == svtId;
  return !v18;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsSetRequired(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x20
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v8; // x8
  int servantNumMax; // w22
  BalanceConfig_c *v11; // x0
  int32_t DeckMainMemberMax; // w8

  v6 = this;
  if ( (byte_4BDD76A & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BDD76A = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( slotInfos )
  {
    if ( initPos - 1 >= slotInfos->max_length )
      sub_1C2209C(this, *(_QWORD *)&pos);
    v8 = slotInfos->m_Items[initPos - 1];
    if ( !v8 )
      sub_1C22094(this, *(_QWORD *)&pos);
    if ( v8->fields.isRequired )
      return 1;
  }
  servantNumMax = v6->fields.servantNumMax;
  if ( servantNumMax < 1 || v6->fields.servantNumMin > 0 )
    return 0;
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  DeckMainMemberMax = v11->static_fields->DeckMainMemberMax;
  if ( servantNumMax <= DeckMainMemberMax )
  {
    DeckMainMemberMax = v6->fields.servantNumMax;
  }
  else if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    DeckMainMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
  }
  return DeckMainMemberMax >= pos;
}


bool __fastcall QuestRestrictionInfo__IsSlotRestrictionForSupport(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  __int64 v10; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x22
  int max_length; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  unsigned int v14; // w23
  bool v15; // w21
  QuestRestrictionInfo_SlotInfo_o *v16; // x29
  int32_t v17; // w20
  Il2CppObject *Item; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21

  if ( (byte_4BDD773 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD773 = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       svtId,
                                       (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_33;
    Instance = ServantEntity__getIndividuality((ServantEntity_o *)Instance, limitCount, dispLimitCount, 0LL);
    slotInfos = this->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_33;
    max_length = slotInfos->max_length;
    if ( max_length >= 1 )
    {
      v13 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          sub_1C2209C(Instance, v10);
        v16 = slotInfos->m_Items[v14];
        if ( !v16 )
          break;
        if ( v16->fields.slotType == 2 )
        {
          Instance = (System_Int32_array *)v16->fields.individualityList;
          if ( !Instance )
            break;
          v17 = 0;
          while ( v17 < (signed int)Instance->max_length )
          {
            Instance = (System_Int32_array *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)Instance,
                                               v17,
                                               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_int____get_Item__);
            if ( !Instance )
              goto LABEL_33;
            if ( *(_QWORD *)&Instance->max_length )
            {
              Instance = (System_Int32_array *)v16->fields.individualityList;
              if ( !Instance )
                goto LABEL_33;
              Item = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Instance,
                       v17,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_int____get_Item__);
              v19 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)Item,
                      v13,
                      (const MethodInfo_2FD4278 *)Method_System_Linq_Enumerable_Intersect_int___);
              Instance = System_Linq_Enumerable__ToArray_int_(
                           v19,
                           (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
              if ( !v16->fields.rangeTypeList )
                goto LABEL_33;
              v20 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              if ( System_Collections_Generic_List_Int32Enum___get_Item(
                     (System_Collections_Generic_List_T__o *)v16->fields.rangeTypeList,
                     v17,
                     (const MethodInfo_36345CC *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
              {
                if ( System_Linq_Enumerable__Any_int_(
                       v20,
                       (const MethodInfo_2FBAD74 *)Method_System_Linq_Enumerable_Any_int___) )
                {
                  return 0;
                }
              }
              else
              {
                Instance = (System_Int32_array *)v16->fields.rangeTypeList;
                if ( !Instance )
                  goto LABEL_33;
                if ( System_Collections_Generic_List_Int32Enum___get_Item(
                       (System_Collections_Generic_List_T__o *)Instance,
                       v17,
                       (const MethodInfo_36345CC *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 2
                  && !System_Linq_Enumerable__Any_int_(
                        v20,
                        (const MethodInfo_2FBAD74 *)Method_System_Linq_Enumerable_Any_int___) )
                {
                  return 0;
                }
              }
              v15 = 1;
            }
            Instance = (System_Int32_array *)v16->fields.individualityList;
            ++v17;
            if ( !Instance )
              goto LABEL_33;
          }
        }
        max_length = slotInfos->max_length;
        if ( (int)++v14 >= max_length )
          return v15;
      }
LABEL_33:
      sub_1C22094(Instance, v10);
    }
  }
  return 0;
}


bool __fastcall QuestRestrictionInfo__IsSupportOnly(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.supportOnlyRestrictionEntity != 0LL;
}


bool __fastcall QuestRestrictionInfo__IsSupportOnlyForceBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isSupportOnlyForceBattle;
}


bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isUniqueIndividuality;
}


bool __fastcall QuestRestrictionInfo__IsUniqueIndividualityServant(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x19
  unsigned int v8; // w21
  RestrictionWholeEntity_o *v9; // x8
  struct System_Int32_array *targetVals; // x23
  __int64 v11; // x8
  unsigned __int64 v12; // x24
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDD772 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_4BDD772 = 1;
  }
  entity = 0LL;
  if ( !this->fields.restrictionBaseEntity )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_23:
    sub_1C22094(Master_object, v4);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return 1;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
LABEL_24:
      sub_1C2209C(Master_object, v4);
    v9 = restrictionWholeEntities->m_Items[v8];
    if ( !v9 )
      goto LABEL_23;
    if ( v9->fields.type == 9 )
    {
      targetVals = v9->fields.targetVals;
      if ( !targetVals )
        goto LABEL_23;
      v11 = *(_QWORD *)&targetVals->max_length;
      if ( (int)v11 >= 1 )
        break;
    }
LABEL_19:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v8 >= max_length )
      return 1;
  }
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v11 )
      goto LABEL_24;
    if ( !v7 )
      goto LABEL_23;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      v7,
                                      &entity,
                                      targetVals->m_Items[v12 + 1],
                                      (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      return 0;
    LODWORD(v11) = targetVals->max_length;
    if ( (__int64)++v12 >= (int)v11 )
      goto LABEL_19;
  }
}


bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_41721336(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        FollowerInfo_o *npcFollowerInfo,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  Il2CppObject *v12; // x23
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  System_Int32_array *OverwriteIndividuality; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x25
  struct System_Int32_array *uniqueIndividualitys; // x9
  __int64 v18; // x8
  BalanceConfig_c **v19; // x20
  const MethodInfo_325E370 **v20; // x26
  const MethodInfo_2FC7E00 **v21; // x24
  unsigned __int64 v22; // x10
  int32_t v23; // w27
  unsigned __int64 i; // x19
  struct FollowerInfo_array *deckNpcInfoList; // x8
  FollowerInfo_o *v26; // x8
  struct FollowerInfo_array *v27; // x8
  FollowerInfo_o *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *NpcServantIndividuality; // x0
  struct FollowerInfo_array *v30; // x8
  int32_t v31; // w21
  const MethodInfo_2FC7E00 **v32; // x27
  Il2CppObject *v33; // x24
  BalanceConfig_c **v34; // x23
  Il2CppObject *v35; // x20
  const MethodInfo_325E370 **v36; // x22
  DataManager_o *v37; // x28
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x26
  struct System_Byte_array *masterDataBytes; // x29
  int32_t v40; // w0
  Il2CppObject *v41; // x0
  int32_t saveNameList; // w29
  int32_t monitor_high; // w26
  ServantEntity_o *v44; // x28
  struct System_Int32_array *deckSvtIdList; // x8
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x9
  int32_t v49; // [xsp+8h] [xbp-A8h]
  int32_t v50; // [xsp+Ch] [xbp-A4h]
  ServantEntity_o *v51; // [xsp+10h] [xbp-A0h]
  struct System_Int32_array *v52; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+20h] [xbp-90h]
  unsigned __int64 v54; // [xsp+28h] [xbp-88h]
  QuestRestrictionInfo_o *v55; // [xsp+30h] [xbp-80h]
  Il2CppObject *v56; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v57; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4BDD740 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD740 = 1;
  }
  v57 = 0LL;
  entity = 0LL;
  v56 = 0LL;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_71;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo
    || (Instance = (DataManager_o *)FollowerInfo__get_IsNpc(npcFollowerInfo, 0LL), ((unsigned __int8)Instance & 1) == 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_82;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_82;
    dispLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                       (ServantLimitImageMaster_o *)Instance,
                       svtId,
                       dispLimitCount,
                       0LL);
    goto LABEL_16;
  }
  if ( !v12 )
    goto LABEL_82;
  Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                                &entity,
                                npcFollowerInfo->fields.npcFollowerSvtId,
                                (const MethodInfo_325E370 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !Master_object )
      goto LABEL_82;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &v57,
           npcFollowerInfo->fields.npcFollowerSvtId,
           (const MethodInfo_325E370 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
    {
      Instance = (DataManager_o *)v57;
      if ( !v57 )
        goto LABEL_82;
      if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v57, 0LL) )
      {
        Instance = (DataManager_o *)v57;
        if ( !v57 )
          goto LABEL_82;
        OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                   (NpcServantFollowerEntity_o *)v57,
                                   0LL);
        goto LABEL_80;
      }
    }
LABEL_16:
    source = 0LL;
    goto LABEL_17;
  }
  OverwriteIndividuality = FollowerInfo__GetNpcServantIndividuality(npcFollowerInfo, 0, 0, 0LL);
LABEL_80:
  source = (System_Collections_Generic_IEnumerable_TSource__o *)OverwriteIndividuality;
LABEL_17:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      svtId,
                                      (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_82:
    sub_1C22094(Instance, v14);
  }
  v18 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v18 < 1 )
  {
LABEL_71:
    LOBYTE(Instance) = 0;
    return (char)Instance;
  }
  v51 = (ServantEntity_o *)Instance;
  v49 = dispLimitCount;
  v50 = limitCount;
  v19 = &BalanceConfig_TypeInfo;
  v20 = (const MethodInfo_325E370 **)&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__;
  v21 = (const MethodInfo_2FC7E00 **)&Method_System_Linq_Enumerable_Contains_int___;
  v22 = 0LL;
  v52 = this->fields.uniqueIndividualitys;
  v55 = this;
  while ( 1 )
  {
    if ( v22 >= (unsigned int)v18 )
LABEL_83:
      sub_1C2209C(Instance, v14);
    v23 = uniqueIndividualitys->m_Items[v22 + 1];
    v54 = v22;
    if ( !source )
      break;
    if ( System_Linq_Enumerable__Contains_int_(source, v23, *v21) )
      goto LABEL_29;
LABEL_69:
    uniqueIndividualitys = v52;
    Instance = 0LL;
    LODWORD(v18) = v52->max_length;
    v22 = v54 + 1;
    if ( (__int64)(v54 + 1) >= (int)v18 )
      return (char)Instance;
  }
  Instance = (DataManager_o *)v51;
  if ( !v51 )
    goto LABEL_82;
  if ( !ServantEntity__IsIndividuality(v51, v50, v49, v23, 0LL) )
    goto LABEL_69;
LABEL_29:
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)*v19;
    if ( !(*v19)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (DataManager_o *)*v19;
    }
    if ( (__int64)i >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 156LL) )
      goto LABEL_69;
    deckNpcInfoList = this->fields.deckNpcInfoList;
    if ( !deckNpcInfoList )
      goto LABEL_82;
    if ( i >= deckNpcInfoList->max_length )
      goto LABEL_83;
    v26 = deckNpcInfoList->m_Items[i];
    if ( v26 )
    {
      if ( !v12 )
        goto LABEL_82;
      Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                                    &entity,
                                    v26->fields.npcFollowerSvtId,
                                    *v20);
      v27 = this->fields.deckNpcInfoList;
      if ( !v27 )
        goto LABEL_82;
      if ( i >= v27->max_length )
        goto LABEL_83;
      v28 = v27->m_Items[i];
      if ( !v28 )
        goto LABEL_82;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)FollowerInfo__GetNpcServantIndividuality(
                                                                                         v28,
                                                                                         0,
                                                                                         0,
                                                                                         0LL);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_82;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &v56,
                                      v28->fields.npcFollowerSvtId,
                                      (const MethodInfo_325E370 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_48;
        Instance = (DataManager_o *)v56;
        if ( !v56 )
          goto LABEL_82;
        Instance = (DataManager_o *)NpcServantFollowerEntity__IsOverwriteIndividuality(
                                      (NpcServantFollowerEntity_o *)v56,
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)v56;
          if ( !v56 )
            goto LABEL_82;
          NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantFollowerEntity__GetOverwriteIndividuality(
                                                                                           (NpcServantFollowerEntity_o *)v56,
                                                                                           0LL);
        }
        else
        {
LABEL_48:
          v30 = this->fields.deckNpcInfoList;
          if ( !v30 )
            goto LABEL_82;
          if ( i >= v30->max_length )
            goto LABEL_83;
          Instance = (DataManager_o *)v30->m_Items[i];
          if ( !Instance )
            goto LABEL_82;
          v31 = v23;
          v32 = v21;
          v33 = v12;
          v34 = v19;
          v35 = Master_object;
          v36 = v20;
          Instance = (DataManager_o *)FollowerInfo__getServantLeaderInfo((FollowerInfo_o *)Instance, 0, 0, 0LL);
          if ( !Instance )
            goto LABEL_82;
          v37 = Instance;
          lookup = Instance->fields.lookup;
          masterDataBytes = Instance->fields.masterDataBytes;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v59.fields.currentCryptoKey = lookup;
          *(_QWORD *)&v59.fields.fakeValue = masterDataBytes;
          v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v59, 0LL);
          v41 = DataMasterBase_object__object__int___GetEntity(
                  v16,
                  v40,
                  (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          saveNameList = (int32_t)v37->fields.saveNameList;
          monitor_high = HIDWORD(v37[1].monitor);
          v44 = (ServantEntity_o *)v41;
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          Instance = (DataManager_o *)ImageLimitCount__ConvertDispLimitCountForClient(monitor_high, 0LL);
          if ( !v44 )
            goto LABEL_82;
          NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                           v44,
                                                                                           saveNameList,
                                                                                           (int32_t)Instance,
                                                                                           0LL);
          v20 = v36;
          Master_object = v35;
          v19 = v34;
          v12 = v33;
          v21 = v32;
          v23 = v31;
          this = v55;
        }
      }
      Instance = (DataManager_o *)System_Linq_Enumerable__Contains_int_(NpcServantIndividuality, v23, *v21);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
    }
    deckSvtIdList = this->fields.deckSvtIdList;
    if ( !deckSvtIdList )
      goto LABEL_82;
    if ( i >= deckSvtIdList->max_length )
      goto LABEL_83;
    v14 = (unsigned int)deckSvtIdList->m_Items[i + 1];
    if ( (int)v14 >= 1 )
    {
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    v16,
                                    v14,
                                    (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      deckLimitCountList = this->fields.deckLimitCountList;
      if ( !deckLimitCountList )
        goto LABEL_82;
      if ( i >= deckLimitCountList->max_length )
        goto LABEL_83;
      deckDispLimitCountList = this->fields.deckDispLimitCountList;
      if ( !deckDispLimitCountList )
        goto LABEL_82;
      if ( i >= deckDispLimitCountList->max_length )
        goto LABEL_83;
      if ( !Instance )
        goto LABEL_82;
      if ( ServantEntity__IsIndividuality(
             (ServantEntity_o *)Instance,
             deckLimitCountList->m_Items[i + 1],
             deckDispLimitCountList->m_Items[i + 1],
             v23,
             0LL) )
      {
        break;
      }
    }
  }
  LOBYTE(Instance) = 1;
  return (char)Instance;
}


bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_41722820(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        FollowerInfo_o *npcFollowerInfo,
        const MethodInfo *method)
{
  __int64 v17; // x1
  void *Instance; // x0
  System_Int32_array *OverwriteIndividuality; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x27
  struct System_Int32_array *uniqueIndividualitys; // x9
  __int64 v22; // x8
  unsigned __int64 v23; // x26
  int32_t v24; // w29
  int32_t i; // w22
  FollowerInfo_o *v26; // x23
  PartyOrganizationListViewItem_o *v27; // x28
  System_Collections_Generic_IEnumerable_TSource__o *NpcServantIndividuality; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // kr00_16
  int32_t v30; // w0
  Il2CppObject *v31; // x23
  int32_t svtLimitCount; // w24
  _DWORD *v33; // x23
  __int64 v34; // x24
  __int64 v35; // x28
  int32_t v36; // w0
  Il2CppObject *v37; // x0
  int32_t v38; // w28
  int32_t v39; // w24
  ServantEntity_o *v40; // x23
  int32_t v42; // [xsp+4h] [xbp-ACh]
  ServantEntity_o *v43; // [xsp+8h] [xbp-A8h]
  struct System_Int32_array *v44; // [xsp+10h] [xbp-A0h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // [xsp+28h] [xbp-88h]
  Il2CppObject *v48; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *v49; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v50; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4BDD741 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD741 = 1;
  }
  v50 = 0LL;
  entity = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo || !FollowerInfo__get_IsNpc(npcFollowerInfo, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_75;
    dispLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                       (ServantLimitImageMaster_o *)Instance,
                       svtId,
                       dispLimitCount,
                       0LL);
    goto LABEL_16;
  }
  Instance = v47;
  if ( !v47 )
    goto LABEL_75;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          v47,
          &entity,
          npcFollowerInfo->fields.npcFollowerSvtId,
          (const MethodInfo_325E370 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    Instance = Master_object;
    if ( !Master_object )
      goto LABEL_75;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           Master_object,
           &v50,
           npcFollowerInfo->fields.npcFollowerSvtId,
           (const MethodInfo_325E370 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
    {
      Instance = v50;
      if ( !v50 )
        goto LABEL_75;
      if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v50, 0LL) )
      {
        Instance = v50;
        if ( !v50 )
          goto LABEL_75;
        OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                   (NpcServantFollowerEntity_o *)v50,
                                   0LL);
        goto LABEL_73;
      }
    }
LABEL_16:
    source = 0LL;
    goto LABEL_17;
  }
  OverwriteIndividuality = FollowerInfo__GetNpcServantIndividuality(npcFollowerInfo, 0, 0, 0LL);
LABEL_73:
  source = (System_Collections_Generic_IEnumerable_TSource__o *)OverwriteIndividuality;
LABEL_17:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_75:
    sub_1C22094(Instance, v17);
  }
  v22 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v22 >= 1 )
  {
    v43 = (ServantEntity_o *)Instance;
    v42 = limitCount;
    v23 = 0LL;
    v44 = this->fields.uniqueIndividualitys;
    do
    {
      if ( v23 >= (unsigned int)v22 )
        sub_1C2209C(Instance, v17);
      v24 = uniqueIndividualitys->m_Items[v23 + 1];
      if ( source )
      {
        Instance = (void *)System_Linq_Enumerable__Contains_int_(
                             source,
                             v24,
                             (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          goto LABEL_29;
      }
      else
      {
        Instance = v43;
        if ( !v43 )
          goto LABEL_75;
        Instance = (void *)ServantEntity__IsIndividuality(v43, v42, dispLimitCount, v24, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
LABEL_29:
          for ( i = 0; ; ++i )
          {
            Instance = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( i >= *(_DWORD *)(*((_QWORD *)Instance + 23) + 156LL) )
              break;
            if ( num != i && partyIndex != i )
            {
              if ( !partyItem )
                goto LABEL_75;
              Instance = PartyListViewItem__GetMember(partyItem, i, 0LL);
              if ( !Instance )
                goto LABEL_75;
              v26 = (FollowerInfo_o *)*((_QWORD *)Instance + 15);
              v27 = (PartyOrganizationListViewItem_o *)Instance;
              if ( v26 && FollowerInfo__get_IsNpc(*((FollowerInfo_o **)Instance + 15), 0LL) )
              {
                Instance = v47;
                if ( !v47 )
                  goto LABEL_75;
                if ( DataMasterBase_object__object__long___TryGetEntity(
                       v47,
                       &entity,
                       v26->fields.npcFollowerSvtId,
                       (const MethodInfo_325E370 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
                {
                  NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)FollowerInfo__GetNpcServantIndividuality(
                                                                                                   v26,
                                                                                                   0,
                                                                                                   0,
                                                                                                   0LL);
                }
                else
                {
                  Instance = Master_object;
                  if ( !Master_object )
                    goto LABEL_75;
                  if ( !DataMasterBase_object__object__long___TryGetEntity(
                          Master_object,
                          &v49,
                          v26->fields.npcFollowerSvtId,
                          (const MethodInfo_325E370 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
                    goto LABEL_54;
                  Instance = v49;
                  if ( !v49 )
                    goto LABEL_75;
                  if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v49, 0LL) )
                  {
                    Instance = v49;
                    if ( !v49 )
                      goto LABEL_75;
                    NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantFollowerEntity__GetOverwriteIndividuality(
                                                                                                     (NpcServantFollowerEntity_o *)v49,
                                                                                                     0LL);
                  }
                  else
                  {
LABEL_54:
                    Instance = FollowerInfo__getServantLeaderInfo(v26, 0, 0, 0LL);
                    if ( !Instance )
                      goto LABEL_75;
                    v33 = Instance;
                    v35 = *((_QWORD *)Instance + 6);
                    v34 = *((_QWORD *)Instance + 7);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v52.fields.currentCryptoKey = v35;
                    *(_QWORD *)&v52.fields.fakeValue = v34;
                    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v52, 0LL);
                    v37 = DataMasterBase_object__object__int___GetEntity(
                            v20,
                            v36,
                            (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                    v38 = v33[16];
                    v39 = v33[41];
                    v40 = (ServantEntity_o *)v37;
                    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                    Instance = (void *)ImageLimitCount__ConvertDispLimitCountForClient(v39, 0LL);
                    if ( !v40 )
                      goto LABEL_75;
                    NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                                     v40,
                                                                                                     v38,
                                                                                                     (int32_t)Instance,
                                                                                                     0LL);
                  }
                }
                if ( System_Linq_Enumerable__Contains_int_(
                       NpcServantIndividuality,
                       v24,
                       (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___) )
                {
                  return 1;
                }
              }
              else
              {
                v29 = PartyOrganizationListViewItem__get_SvtId(v27, 0LL);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v29, 0LL);
                if ( DataMasterBase_object__object__int___TryGetEntity(
                       v20,
                       &v48,
                       v30,
                       (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
                {
                  v31 = v48;
                  svtLimitCount = v27->fields.svtLimitCount;
                  Instance = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(v27, 0LL);
                  if ( !v31 )
                    goto LABEL_75;
                  if ( ServantEntity__IsIndividuality(
                         (ServantEntity_o *)v31,
                         svtLimitCount,
                         (int32_t)Instance,
                         v24,
                         0LL) )
                  {
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
      uniqueIndividualitys = v44;
      ++v23;
      LODWORD(v22) = v44->max_length;
    }
    while ( (__int64)v23 < (int)v22 );
  }
  return 0;
}


bool __fastcall QuestRestrictionInfo__IsUniqueServant(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueServant_41720808(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  bool isUniqueServant; // w8
  signed int v6; // w22
  BalanceConfig_c *v7; // x0
  struct System_Int32_array *deckSvtIdList; // x9
  int32_t v9; // w9

  if ( (byte_4BDD73E & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BDD73E = 1;
  }
  isUniqueServant = this->fields.isUniqueServant;
  if ( isUniqueServant )
  {
    isUniqueServant = 0;
    if ( svtId >= 1 )
    {
      if ( this->fields.deckSvtIdList )
      {
        v6 = 0;
        v7 = BalanceConfig_TypeInfo;
        do
        {
          if ( !v7->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v7);
            v7 = BalanceConfig_TypeInfo;
          }
          isUniqueServant = v6 < v7->static_fields->DeckMemberMax;
          if ( v6 >= v7->static_fields->DeckMemberMax )
            break;
          deckSvtIdList = this->fields.deckSvtIdList;
          if ( !deckSvtIdList )
            sub_1C22094(v7, *(_QWORD *)&svtId);
          if ( v6 >= deckSvtIdList->max_length )
            sub_1C2209C(v7, *(_QWORD *)&svtId);
          v9 = deckSvtIdList->m_Items[++v6];
        }
        while ( v9 != svtId );
      }
    }
  }
  return isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueServant_41721008(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  bool v11; // w24
  int32_t i; // w23
  PartyOrganizationListViewItem_o *Member; // x0
  int32_t v14; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // kr00_16

  if ( (byte_4BDD73F & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDD73F = 1;
  }
  if ( !this->fields.isUniqueServant )
    return 0;
  v11 = 0;
  if ( svtId >= 1 && this->fields.deckSvtIdList )
  {
    for ( i = 0; ; ++i )
    {
      Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      v14 = *(_DWORD *)(*(_QWORD *)&Member->fields.classId + 156LL);
      v11 = i < v14;
      if ( i >= v14 )
        break;
      if ( num != i && partyIndex != i )
      {
        if ( !partyItem || (Member = PartyListViewItem__GetMember(partyItem, i, 0LL)) == 0LL )
          sub_1C22094(Member, *(_QWORD *)&svtId);
        v15 = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v15, 0LL) == svtId )
          break;
      }
    }
  }
  return v11;
}


bool __fastcall QuestRestrictionInfo__IsUseEventDeck(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.eventDeckNum > 0;
}


bool __fastcall QuestRestrictionInfo__IsUseOldMaster(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.restrictionBaseEntity == 0LL;
}


void __fastcall QuestRestrictionInfo__ResetDeckInfo(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int32_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct FollowerInfo_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x1

  if ( (byte_4BDD72D & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&FollowerInfo___TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    byte_4BDD72D = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.deckSvtIdList = v4;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.deckSvtIdList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct FollowerInfo_array *)sub_1C21EE0(
                                       FollowerInfo___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
  this->fields.deckNpcInfoList = v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.deckNpcInfoList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, v18);
}


void __fastcall QuestRestrictionInfo__SetDeckInfo(
        QuestRestrictionInfo_o *this,
        UserDeckEntity_o *userDeckEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  unsigned __int64 v6; // x22
  __int64 v7; // x26
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x28
  __int64 NpcFollowerServantId; // x0
  struct System_Int32_array *deckSvtIdList; // x8
  struct FollowerInfo_array *deckNpcInfoList; // x8
  unsigned __int64 max_length; // x9
  struct FollowerInfo_array *v20; // x8
  struct FollowerInfo_array *v21; // x24
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x23
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v30; // x23
  struct System_Int32_array *v31; // x29
  __int64 v32; // x24
  __int64 v33; // x25
  struct System_Int32_array *deckLimitCountList; // x29
  __int64 v35; // x24
  __int64 v36; // x25
  struct System_Int32_array *deckDispLimitCountList; // x24
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4BDD72A & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDD72A = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtIdList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v6 = 0LL;
    v7 = 32LL;
    v15 = (unsigned int)UserDeckEntity__GetFollowerIndex(userDeckEntity, 0LL) - 1LL;
    while ( 1 )
    {
      NpcFollowerServantId = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        NpcFollowerServantId = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v6 >= *(int *)(*(_QWORD *)(NpcFollowerServantId + 184) + 156LL) )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_44;
      if ( v6 >= deckSvtIdList->max_length )
        goto LABEL_43;
      deckSvtIdList->m_Items[v6 + 1] = 0;
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList )
      {
        max_length = deckNpcInfoList->max_length;
        if ( (__int64)v6 < (int)max_length )
        {
          if ( v6 >= max_length )
            goto LABEL_43;
          deckNpcInfoList->m_Items[v6] = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)((char *)deckNpcInfoList + v7), 0LL, v9, v10, v11, v12, v13, v14);
        }
      }
      if ( v15 != v6 )
      {
        v20 = this->fields.deckNpcInfoList;
        if ( v20 )
        {
          if ( (__int64)v6 < (int)v20->max_length )
          {
            NpcFollowerServantId = UserDeckEntity__GetNpcFollowerServantId(userDeckEntity, v6, 0LL);
            if ( NpcFollowerServantId >= 1 )
            {
              if ( !Master_object )
                goto LABEL_44;
              NpcFollowerServantId = (__int64)NpcFollowerMaster__GetEntity_40696044(
                                                (NpcFollowerMaster_o *)Master_object,
                                                this->fields.questId,
                                                this->fields.questPhase,
                                                NpcFollowerServantId,
                                                0LL);
              if ( !NpcFollowerServantId )
                goto LABEL_44;
              v21 = this->fields.deckNpcInfoList;
              NpcFollowerServantId = (__int64)NpcFollowerMaster__GetFollower(
                                                (NpcFollowerMaster_o *)Master_object,
                                                this->fields.questId,
                                                this->fields.questPhase,
                                                *(_QWORD *)(NpcFollowerServantId + 16),
                                                0LL);
              if ( !v21 )
                goto LABEL_44;
              v28 = NpcFollowerServantId;
              if ( NpcFollowerServantId )
              {
                NpcFollowerServantId = sub_1C21F74(NpcFollowerServantId, v21->obj.klass->_1.element_class);
                if ( !NpcFollowerServantId )
                {
                  v38 = sub_1C220B8(0LL);
                  sub_1C21F60(v38, 0LL);
                }
              }
              if ( v6 >= v21->max_length )
LABEL_43:
                sub_1C2209C(NpcFollowerServantId, v8);
              v21->m_Items[v6] = (FollowerInfo_o *)v28;
              sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v21 + v7), v28, v22, v23, v24, v25, v26, v27);
            }
          }
        }
        UserServant = UserDeckEntity__GetUserServant(userDeckEntity, v6, 0LL);
        if ( UserServant )
        {
          v30 = UserServant;
          v31 = this->fields.deckSvtIdList;
          v33 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v32 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v39.fields.currentCryptoKey = v33;
          *(_QWORD *)&v39.fields.fakeValue = v32;
          NpcFollowerServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v39, 0LL);
          if ( !v31 )
LABEL_44:
            sub_1C22094(NpcFollowerServantId, v8);
          if ( v6 >= v31->max_length )
            goto LABEL_43;
          v31->m_Items[v6 + 1] = NpcFollowerServantId;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v36 = *(_QWORD *)&v30->fields.limitCount.fields.currentCryptoKey;
            v35 = *(_QWORD *)&v30->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v40.fields.currentCryptoKey = v36;
            *(_QWORD *)&v40.fields.fakeValue = v35;
            NpcFollowerServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v40, 0LL);
            if ( v6 >= deckLimitCountList->max_length )
              goto LABEL_43;
            deckLimitCountList->m_Items[v6 + 1] = NpcFollowerServantId;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            NpcFollowerServantId = UserServantEntity__getDispLimitCount(v30, 0, 0LL);
            if ( v6 >= deckDispLimitCountList->max_length )
              goto LABEL_43;
            deckDispLimitCountList->m_Items[v6 + 1] = NpcFollowerServantId;
          }
        }
      }
      ++v6;
      v7 += 8LL;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_41710580(
        QuestRestrictionInfo_o *this,
        UserEventDeckEntity_o *eventDeckEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *fixed; // x0
  System_Collections_Generic_List_int__o *v6; // x21
  unsigned __int64 v7; // x23
  __int64 v8; // x27
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 Follower; // x0
  struct System_Int32_array *deckSvtIdList; // x8
  struct FollowerInfo_array *deckNpcInfoList; // x8
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct FollowerInfo_array *v20; // x8
  struct FollowerInfo_array *v21; // x8
  int64_t NpcFollowerServantId; // x0
  int64_t v23; // x3
  NpcFollowerEntity_o *Entity_40696044; // x0
  struct FollowerInfo_array *v25; // x25
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x24
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v34; // x24
  struct System_Int32_array *v35; // x29
  __int64 v36; // x25
  __int64 v37; // x26
  struct System_Int32_array *deckLimitCountList; // x29
  __int64 v39; // x25
  __int64 v40; // x26
  struct System_Int32_array *deckDispLimitCountList; // x25
  __int64 v42; // x0
  NpcFollowerMaster_o *Master_object; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4BDD72B & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDD72B = 1;
  }
  fixed = QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, (const MethodInfo *)eventDeckEntity);
  if ( eventDeckEntity && this->fields.deckSvtIdList )
  {
    v6 = fixed;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v7 = 0LL;
    v8 = 32LL;
    v10 = (unsigned int)UserEventDeckEntity__GetFollowerIndex(eventDeckEntity, 0LL) - 1LL;
    while ( 1 )
    {
      Follower = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Follower = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v7 >= *(int *)(*(_QWORD *)(Follower + 184) + 156LL) )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_48;
      if ( v7 >= deckSvtIdList->max_length )
        goto LABEL_49;
      deckSvtIdList->m_Items[v7 + 1] = 0;
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList && (__int64)v7 < (int)deckNpcInfoList->max_length )
      {
        if ( !v6 )
          goto LABEL_48;
        Follower = System_Collections_Generic_List_int___Contains(
                     v6,
                     v7,
                     (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Follower & 1) == 0 )
        {
          v20 = this->fields.deckNpcInfoList;
          if ( !v20 )
            goto LABEL_48;
          if ( v7 >= v20->max_length )
            goto LABEL_49;
          v20->m_Items[v7] = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v20 + v8), 0LL, v14, v15, v16, v17, v18, v19);
        }
      }
      if ( v10 != v7 )
      {
        v21 = this->fields.deckNpcInfoList;
        if ( v21 && (__int64)v7 < (int)v21->max_length )
        {
          if ( !v6 )
            goto LABEL_48;
          if ( !System_Collections_Generic_List_int___Contains(
                  v6,
                  v7,
                  (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            NpcFollowerServantId = UserEventDeckEntity__GetNpcFollowerServantId(eventDeckEntity, v7, 0LL);
            if ( NpcFollowerServantId >= 1 )
            {
              v23 = NpcFollowerServantId;
              Follower = (__int64)Master_object;
              if ( !Master_object )
                goto LABEL_48;
              Entity_40696044 = NpcFollowerMaster__GetEntity_40696044(
                                  Master_object,
                                  this->fields.questId,
                                  this->fields.questPhase,
                                  v23,
                                  0LL);
              if ( Entity_40696044 )
              {
                v25 = this->fields.deckNpcInfoList;
                Follower = (__int64)NpcFollowerMaster__GetFollower(
                                      Master_object,
                                      this->fields.questId,
                                      this->fields.questPhase,
                                      Entity_40696044->fields.id,
                                      0LL);
                if ( !v25 )
                  goto LABEL_48;
                v32 = Follower;
                if ( Follower )
                {
                  Follower = sub_1C21F74(Follower, v25->obj.klass->_1.element_class);
                  if ( !Follower )
                  {
                    v42 = sub_1C220B8(0LL);
                    sub_1C21F60(v42, 0LL);
                  }
                }
                if ( v7 >= v25->max_length )
                  goto LABEL_49;
                v25->m_Items[v7] = (FollowerInfo_o *)v32;
                sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v25 + v8), v32, v26, v27, v28, v29, v30, v31);
              }
            }
          }
        }
        UserServant = UserEventDeckEntity__GetUserServant(eventDeckEntity, v7, 0LL);
        if ( UserServant )
        {
          v34 = UserServant;
          v35 = this->fields.deckSvtIdList;
          v37 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v36 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v44.fields.currentCryptoKey = v37;
          *(_QWORD *)&v44.fields.fakeValue = v36;
          Follower = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v44, 0LL);
          if ( !v35 )
LABEL_48:
            sub_1C22094(Follower, v9);
          if ( v7 >= v35->max_length )
LABEL_49:
            sub_1C2209C(Follower, v9);
          v35->m_Items[v7 + 1] = Follower;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v40 = *(_QWORD *)&v34->fields.limitCount.fields.currentCryptoKey;
            v39 = *(_QWORD *)&v34->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v45.fields.currentCryptoKey = v40;
            *(_QWORD *)&v45.fields.fakeValue = v39;
            Follower = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v45, 0LL);
            if ( v7 >= deckLimitCountList->max_length )
              goto LABEL_49;
            deckLimitCountList->m_Items[v7 + 1] = Follower;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            Follower = UserServantEntity__getDispLimitCount(v34, 0, 0LL);
            if ( v7 >= deckDispLimitCountList->max_length )
              goto LABEL_49;
            deckDispLimitCountList->m_Items[v7 + 1] = Follower;
          }
        }
      }
      ++v7;
      v8 += 8LL;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo__SetDeckInfo_41711932(
        QuestRestrictionInfo_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  unsigned __int64 v11; // x21
  unsigned __int64 v12; // x27
  __int64 i; // x28
  __int64 Member; // x0
  struct FollowerInfo_array *deckNpcInfoList; // x8
  unsigned __int64 max_length; // x9
  struct System_Int32_array *deckSvtIdList; // x8
  struct System_Int32_array *v18; // x29
  PartyOrganizationListViewItem_o *v19; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x23
  struct FollowerInfo_array *v23; // x8
  FollowerInfo_o *followerInfo; // x0
  struct FollowerInfo_array *v25; // x23
  int64_t v26; // x22
  __int64 v27; // x0

  if ( (byte_4BDD72C & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDD72C = 1;
  }
  if ( this->fields.deckSvtIdList )
  {
    v11 = 0LL;
    v12 = (unsigned int)num;
    for ( i = 32LL; ; i += 8LL )
    {
      Member = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Member = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v11 >= *(int *)(*(_QWORD *)(Member + 184) + 156LL) )
        break;
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList )
      {
        max_length = deckNpcInfoList->max_length;
        if ( (__int64)v11 < (int)max_length )
        {
          if ( v11 >= max_length )
            goto LABEL_40;
          deckNpcInfoList->m_Items[v11] = 0LL;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)((char *)deckNpcInfoList + i),
            0LL,
            *(int64_t *)&num,
            (int32_t)method,
            v4,
            v5,
            v6,
            v7);
        }
      }
      if ( v12 == v11 )
      {
        deckSvtIdList = this->fields.deckSvtIdList;
        if ( !deckSvtIdList )
          goto LABEL_39;
        if ( deckSvtIdList->max_length <= v12 )
          goto LABEL_40;
        deckSvtIdList->m_Items[v12 + 1] = 0;
      }
      else
      {
        if ( !partyItem )
          goto LABEL_39;
        Member = (__int64)PartyListViewItem__GetMember(partyItem, v11, 0LL);
        if ( !Member )
          goto LABEL_39;
        v18 = this->fields.deckSvtIdList;
        v19 = (PartyOrganizationListViewItem_o *)Member;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Member, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(SvtId, 0LL);
        if ( !v18 )
LABEL_39:
          sub_1C22094(Member, partyItem);
        if ( v11 >= v18->max_length )
          goto LABEL_40;
        v18->m_Items[v11 + 1] = Member;
        deckLimitCountList = this->fields.deckLimitCountList;
        if ( deckLimitCountList )
        {
          if ( v11 >= deckLimitCountList->max_length )
            goto LABEL_40;
          deckLimitCountList->m_Items[v11 + 1] = v19->fields.svtLimitCount;
        }
        deckDispLimitCountList = this->fields.deckDispLimitCountList;
        if ( deckDispLimitCountList )
        {
          Member = PartyOrganizationListViewItem__GetDispImageLimitCount(v19, 0LL);
          if ( v11 >= deckDispLimitCountList->max_length )
            goto LABEL_40;
          deckDispLimitCountList->m_Items[v11 + 1] = Member;
        }
        v23 = this->fields.deckNpcInfoList;
        if ( v23 )
        {
          if ( (__int64)v11 < (int)v23->max_length )
          {
            followerInfo = v19->fields.followerInfo;
            if ( followerInfo )
            {
              Member = FollowerInfo__get_IsNpc(followerInfo, 0LL);
              if ( (Member & 1) != 0 )
              {
                v25 = this->fields.deckNpcInfoList;
                if ( !v25 )
                  goto LABEL_39;
                v26 = (int64_t)v19->fields.followerInfo;
                if ( v26 )
                {
                  Member = sub_1C21F74(v26, v25->obj.klass->_1.element_class);
                  if ( !Member )
                  {
                    v27 = sub_1C220B8(0LL);
                    sub_1C21F60(v27, 0LL);
                  }
                }
                if ( v11 >= v25->max_length )
LABEL_40:
                  sub_1C2209C(Member, partyItem);
                v25->m_Items[v11] = (FollowerInfo_o *)v26;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)((char *)v25 + i),
                  v26,
                  *(int64_t *)&num,
                  (int32_t)method,
                  v4,
                  v5,
                  v6,
                  v7);
              }
            }
          }
        }
      }
      ++v11;
    }
  }
}


System_Collections_Generic_List_int__o *__fastcall QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  FollowerInfo_array *Master_object; // x0
  __int64 v5; // x1
  int max_length; // w8
  FollowerInfo_array *v7; // x21
  unsigned int v8; // w23
  int64_t v9; // x22
  struct FollowerInfo_array *deckNpcInfoList; // x25
  int v11; // w26
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  char *v18; // x0
  int v19; // w9
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x10
  __int64 size; // x11
  __int64 v24; // x0

  if ( (byte_4BDD72E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDD72E = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.deckNpcInfoList && this->fields.isNpcMultipleBattle && !this->fields.isNpcEditablePos )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (FollowerInfo_array *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object
      || (Master_object = NpcFollowerMaster__GetQuestFollowerList(
                            (NpcFollowerMaster_o *)Master_object,
                            this->fields.questId,
                            this->fields.questPhase,
                            0LL)) == 0LL )
    {
LABEL_25:
      sub_1C22094(Master_object, v5);
    }
    max_length = Master_object->max_length;
    v7 = Master_object;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( v8 < max_length )
      {
        v9 = (int64_t)v7->m_Items[v8];
        if ( !v9 )
          goto LABEL_25;
        if ( *(_BYTE *)(v9 + 105) )
        {
          deckNpcInfoList = this->fields.deckNpcInfoList;
          if ( !deckNpcInfoList )
            goto LABEL_25;
          v11 = *(_DWORD *)(v9 + 88);
          Master_object = (FollowerInfo_array *)sub_1C21F74(v9, deckNpcInfoList->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v24 = sub_1C220B8(0LL);
            sub_1C21F60(v24, 0LL);
          }
          if ( v11 - 1 >= deckNpcInfoList->max_length )
            break;
          v18 = (char *)deckNpcInfoList + 8 * v11 - 8;
          *((_QWORD *)v18 + 4) = v9;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 32), v9, v12, v13, v14, v15, v16, v17);
          if ( !v3 )
            goto LABEL_25;
          v19 = *(_DWORD *)(v9 + 88);
          items = v3->fields._items;
          v21 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v3->fields._size;
          v5 = (unsigned int)(v19 - 1);
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              v5,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size + 1] = v5;
          }
        }
        max_length = v7->max_length;
        if ( (int)++v8 >= max_length )
          return v3;
      }
      sub_1C2209C(Master_object, v5);
    }
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo__Setup(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o *v9; // x20
  void *v10; // x1
  QuestRestrictionInfo_o *v11; // x29
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  PartyOrganizationUtility_o *p_supportPositionList; // x24
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int32_t *p_eventDeckNum; // x27
  System_Collections_Generic_List_object__o *v80; // x20
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  System_Collections_Generic_List_int__o *v87; // x20
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  System_Collections_Generic_List_object__o *v118; // x20
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  System_Collections_Generic_List_object__o *v125; // x20
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  System_Collections_Generic_List_object__o *v132; // x20
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  System_Collections_Generic_List_object__o *v139; // x20
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  System_Collections_Generic_List_object__o *v146; // x20
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  System_Collections_Generic_List_object__o *v153; // x20
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  System_Collections_Generic_List_object__o *v166; // x20
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  System_Collections_Generic_Dictionary_K__V__o **p_dialogMessageInfoDictionary; // x26
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  int64_t Master_object; // x0
  int64_t monitor_low; // x1
  const MethodInfo *v188; // x4
  const MethodInfo *v189; // x1
  System_Collections_Generic_Dictionary_int__object__o *v190; // x20
  int64_t v191; // x2
  int32_t v192; // w3
  System_String_o *v193; // x4
  BattleSetupInfo_o *v194; // x5
  FollowerInfo_o *v195; // x6
  PartyListViewItem_o *v196; // x7
  System_Collections_Generic_Dictionary_int__object__o *v197; // x20
  int64_t v198; // x2
  int32_t v199; // w3
  System_String_o *v200; // x4
  BattleSetupInfo_o *v201; // x5
  FollowerInfo_o *v202; // x6
  PartyListViewItem_o *v203; // x7
  System_Collections_Generic_Dictionary_int__object__o *v204; // x20
  int64_t v205; // x2
  int32_t v206; // w3
  System_String_o *v207; // x4
  BattleSetupInfo_o *v208; // x5
  FollowerInfo_o *v209; // x6
  PartyListViewItem_o *v210; // x7
  System_Collections_Generic_List_object__o *v211; // x29
  RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  bool HasFlag; // w0
  BalanceConfig_c *v214; // x0
  int64_t v215; // x0
  int64_t v216; // x2
  int32_t v217; // w3
  System_String_o *v218; // x4
  BattleSetupInfo_o *v219; // x5
  FollowerInfo_o *v220; // x6
  PartyListViewItem_o *v221; // x7
  RestrictionBaseEntity_o *v222; // x8
  Il2CppObject *v223; // x20
  RestrictionWholeEntity_array *Entities; // x0
  int64_t v225; // x2
  int32_t v226; // w3
  System_String_o *v227; // x4
  BattleSetupInfo_o *v228; // x5
  FollowerInfo_o *v229; // x6
  PartyListViewItem_o *v230; // x7
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  unsigned int v233; // w25
  RestrictionWholeEntity_o *v234; // x21
  System_Boolean_array *SetPossiblePosition; // x0
  int64_t v236; // x2
  int32_t v237; // w3
  System_String_o *v238; // x4
  BattleSetupInfo_o *v239; // x5
  FollowerInfo_o *v240; // x6
  PartyListViewItem_o *v241; // x7
  Il2CppObject *v242; // x23
  int64_t v243; // x0
  int64_t v244; // x2
  int32_t v245; // w3
  System_String_o *v246; // x4
  BattleSetupInfo_o *v247; // x5
  FollowerInfo_o *v248; // x6
  PartyListViewItem_o *v249; // x7
  System_Collections_Generic_List_object__o *v250; // x23
  int64_t v251; // x2
  int32_t v252; // w3
  System_String_o *v253; // x4
  BattleSetupInfo_o *v254; // x5
  FollowerInfo_o *v255; // x6
  PartyListViewItem_o *v256; // x7
  struct System_Object_array *v257; // x8
  _QWORD *v258; // x9
  __int64 v259; // x10
  int64_t v260; // x1
  Il2CppClass **v261; // x0
  System_Collections_Generic_List_object__o *v262; // x23
  int64_t v263; // x2
  int32_t v264; // w3
  System_String_o *v265; // x4
  BattleSetupInfo_o *v266; // x5
  FollowerInfo_o *v267; // x6
  PartyListViewItem_o *v268; // x7
  struct System_Object_array *items; // x8
  _QWORD *v270; // x9
  __int64 size; // x10
  int64_t v272; // x1
  Il2CppClass **v273; // x0
  System_Collections_Generic_List_object__o *v274; // x23
  int64_t v275; // x2
  int32_t v276; // w3
  System_String_o *v277; // x4
  BattleSetupInfo_o *v278; // x5
  FollowerInfo_o *v279; // x6
  PartyListViewItem_o *v280; // x7
  struct System_Object_array *v281; // x8
  _QWORD *v282; // x9
  __int64 v283; // x10
  int64_t v284; // x1
  Il2CppClass **v285; // x0
  Il2CppObject *v286; // x23
  int64_t v287; // x0
  int64_t v288; // x2
  int32_t v289; // w3
  System_String_o *v290; // x4
  BattleSetupInfo_o *v291; // x5
  FollowerInfo_o *v292; // x6
  PartyListViewItem_o *v293; // x7
  BalanceConfig_c *v294; // x0
  int64_t v295; // x0
  int64_t v296; // x2
  int32_t v297; // w3
  System_String_o *v298; // x4
  BattleSetupInfo_o *v299; // x5
  FollowerInfo_o *v300; // x6
  PartyListViewItem_o *v301; // x7
  int64_t v302; // x0
  int64_t v303; // x2
  int32_t v304; // w3
  System_String_o *v305; // x4
  BattleSetupInfo_o *v306; // x5
  FollowerInfo_o *v307; // x6
  PartyListViewItem_o *v308; // x7
  int64_t v309; // x0
  int64_t v310; // x2
  int32_t v311; // w3
  System_String_o *v312; // x4
  BattleSetupInfo_o *v313; // x5
  FollowerInfo_o *v314; // x6
  PartyListViewItem_o *v315; // x7
  int64_t v316; // x0
  int64_t v317; // x2
  int32_t v318; // w3
  System_String_o *v319; // x4
  BattleSetupInfo_o *v320; // x5
  FollowerInfo_o *v321; // x6
  PartyListViewItem_o *v322; // x7
  System_Boolean_array *v323; // x0
  int64_t v324; // x2
  int32_t v325; // w3
  System_String_o *v326; // x4
  BattleSetupInfo_o *v327; // x5
  FollowerInfo_o *v328; // x6
  PartyListViewItem_o *v329; // x7
  Il2CppObject *v330; // x23
  int64_t v331; // x0
  int64_t v332; // x2
  int32_t v333; // w3
  System_String_o *v334; // x4
  BattleSetupInfo_o *v335; // x5
  FollowerInfo_o *v336; // x6
  PartyListViewItem_o *v337; // x7
  System_Collections_Generic_List_object__o *v338; // x23
  int64_t v339; // x2
  int32_t v340; // w3
  System_String_o *v341; // x4
  BattleSetupInfo_o *v342; // x5
  FollowerInfo_o *v343; // x6
  PartyListViewItem_o *v344; // x7
  struct System_Object_array *v345; // x8
  _QWORD *v346; // x9
  __int64 v347; // x10
  int64_t v348; // x1
  Il2CppClass **v349; // x0
  Il2CppObject *v350; // x23
  int64_t v351; // x0
  int64_t v352; // x2
  int32_t v353; // w3
  System_String_o *v354; // x4
  BattleSetupInfo_o *v355; // x5
  FollowerInfo_o *v356; // x6
  PartyListViewItem_o *v357; // x7
  System_Collections_Generic_List_object__o *v358; // x23
  int64_t v359; // x2
  int32_t v360; // w3
  System_String_o *v361; // x4
  BattleSetupInfo_o *v362; // x5
  FollowerInfo_o *v363; // x6
  PartyListViewItem_o *v364; // x7
  struct System_Object_array *v365; // x8
  _QWORD *v366; // x9
  __int64 v367; // x10
  int64_t v368; // x1
  Il2CppClass **v369; // x0
  struct System_Int32_array *targetVals; // x8
  System_Collections_Generic_List_object__o *v371; // x23
  int64_t v372; // x2
  int32_t v373; // w3
  System_String_o *v374; // x4
  BattleSetupInfo_o *v375; // x5
  FollowerInfo_o *v376; // x6
  PartyListViewItem_o *v377; // x7
  struct System_Object_array *v378; // x8
  _QWORD *v379; // x9
  __int64 v380; // x10
  int64_t v381; // x1
  Il2CppClass **v382; // x0
  System_Collections_Generic_List_object__o *v383; // x23
  int64_t v384; // x2
  int32_t v385; // w3
  System_String_o *v386; // x4
  BattleSetupInfo_o *v387; // x5
  FollowerInfo_o *v388; // x6
  PartyListViewItem_o *v389; // x7
  struct System_Object_array *v390; // x8
  _QWORD *v391; // x9
  __int64 v392; // x10
  int64_t v393; // x1
  Il2CppClass **v394; // x0
  int32_t restrictionMessageId; // w2
  int64_t v396; // x2
  int32_t v397; // w3
  System_String_o *v398; // x4
  BattleSetupInfo_o *v399; // x5
  FollowerInfo_o *v400; // x6
  PartyListViewItem_o *v401; // x7
  struct System_Object_array *v402; // x8
  _QWORD *v403; // x9
  __int64 v404; // x10
  Il2CppClass **v405; // x0
  QuestRestrictionInfo_DialogMessageInfo_o *v406; // x23
  QuestRestrictionInfo_o *v407; // x28
  char isAllOutBattle; // w8
  int64_t v409; // x21
  int64_t v410; // x2
  int32_t v411; // w3
  System_String_o *v412; // x4
  BattleSetupInfo_o *v413; // x5
  FollowerInfo_o *v414; // x6
  PartyListViewItem_o *v415; // x7
  BalanceConfig_c *v416; // x0
  int64_t v417; // x0
  int64_t v418; // x2
  int32_t v419; // w3
  System_String_o *v420; // x4
  BattleSetupInfo_o *v421; // x5
  FollowerInfo_o *v422; // x6
  PartyListViewItem_o *v423; // x7
  int32_t v424; // w21
  int v425; // w24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v426; // x8
  System_Object_array *v427; // x22
  System_Collections_Generic_List_int__o *v428; // x24
  int v429; // w8
  __int64 v430; // x19
  Il2CppObject *v431; // x23
  struct System_Int32_array *v432; // x8
  _QWORD *v433; // x9
  __int64 v434; // x10
  int32_t monitor_high; // w2
  int64_t v436; // x2
  int32_t v437; // w3
  System_String_o *v438; // x4
  BattleSetupInfo_o *v439; // x5
  FollowerInfo_o *v440; // x6
  PartyListViewItem_o *v441; // x7
  struct System_Object_array *v442; // x8
  _QWORD *v443; // x9
  __int64 v444; // x10
  Il2CppClass **v445; // x0
  QuestRestrictionInfo_DialogMessageInfo_o *v446; // x23
  System_Object_array *v447; // x24
  PartyOrganizationUtility_c *klass; // x25
  QuestRestrictionInfo_SlotInfo_o *v449; // x23
  int64_t v450; // x2
  int32_t v451; // w3
  System_String_o *v452; // x4
  BattleSetupInfo_o *v453; // x5
  FollowerInfo_o *v454; // x6
  PartyListViewItem_o *v455; // x7
  int v456; // w19
  void **v457; // x0
  int servantNumMax; // w8
  PartyOrganizationUtility_c *v459; // x8
  int32_t v460; // w24
  __int64 v461; // x8
  QuestRestrictionInfo___c_c *v462; // x0
  System_Func_object__bool__o *_9__83_0; // x23
  Il2CppObject *v464; // x25
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int64_t v466; // x2
  int32_t v467; // w3
  System_String_o *v468; // x4
  BattleSetupInfo_o *v469; // x5
  FollowerInfo_o *v470; // x6
  PartyListViewItem_o *v471; // x7
  _BOOL4 v472; // w0
  QuestRestrictionInfo___c_c *v473; // x8
  _BOOL4 v474; // w23
  System_Func_object__bool__o *_9__83_1; // x25
  Il2CppObject *v476; // x28
  struct QuestRestrictionInfo___c_StaticFields *v477; // x0
  int64_t v478; // x2
  int32_t v479; // w3
  System_String_o *v480; // x4
  BattleSetupInfo_o *v481; // x5
  FollowerInfo_o *v482; // x6
  PartyListViewItem_o *v483; // x7
  _BOOL4 v484; // w0
  QuestRestrictionInfo___c_c *v485; // x8
  _BOOL4 v486; // w25
  System_Func_object__bool__o *_9__83_2; // x28
  Il2CppObject *v488; // x27
  struct QuestRestrictionInfo___c_StaticFields *v489; // x0
  int64_t v490; // x2
  int32_t v491; // w3
  System_String_o *v492; // x4
  BattleSetupInfo_o *v493; // x5
  FollowerInfo_o *v494; // x6
  PartyListViewItem_o *v495; // x7
  PartyOrganizationUtility_c *v496; // x8
  __int64 v497; // x8
  PartyOrganizationUtility_c *v498; // x8
  __int64 v499; // x8
  PartyOrganizationUtility_c *v500; // x8
  __int64 v501; // x8
  int v502; // w8
  unsigned int v503; // w27
  Il2CppObject *v504; // x25
  Il2CppObject *v505; // x8
  PartyOrganizationUtility_c *v506; // x8
  __int64 v507; // x8
  System_Collections_Generic_List_object__o *v508; // x23
  int64_t v509; // x2
  int32_t v510; // w3
  System_String_o *v511; // x4
  BattleSetupInfo_o *v512; // x5
  FollowerInfo_o *v513; // x6
  PartyListViewItem_o *v514; // x7
  struct System_Object_array *v515; // x8
  _QWORD *v516; // x9
  __int64 v517; // x10
  int64_t v518; // x1
  Il2CppClass **v519; // x0
  PartyOrganizationUtility_c *v520; // x8
  __int64 v521; // x8
  struct System_Int32_array *v522; // x8
  _QWORD *v523; // x9
  __int64 v524; // x10
  System_String_o *monitor; // x23
  PartyOrganizationUtility_c *v526; // x8
  __int64 v527; // x8
  int64_t v528; // x2
  int32_t v529; // w3
  System_String_o *v530; // x4
  BattleSetupInfo_o *v531; // x5
  FollowerInfo_o *v532; // x6
  PartyListViewItem_o *v533; // x7
  PartyOrganizationUtility_c *v534; // x8
  __int64 v535; // x8
  System_String_o **v536; // x25
  PartyOrganizationUtility_c *v537; // x8
  QuestRestrictionInfo___c_c *v538; // x0
  __int64 v539; // x27
  System_Func_object__bool__o *_9__83_3; // x23
  Il2CppObject *v541; // x25
  struct QuestRestrictionInfo___c_StaticFields *v542; // x0
  int64_t v543; // x2
  int32_t v544; // w3
  System_String_o *v545; // x4
  BattleSetupInfo_o *v546; // x5
  FollowerInfo_o *v547; // x6
  PartyListViewItem_o *v548; // x7
  PartyOrganizationUtility_c *v549; // x8
  __int64 v550; // x8
  PartyOrganizationUtility_c *v551; // x8
  __int64 v552; // x8
  PartyOrganizationUtility_c *v553; // x8
  __int64 v554; // x8
  System_Object_array *v555; // x0
  int64_t v556; // x2
  int32_t v557; // w3
  System_String_o *v558; // x4
  BattleSetupInfo_o *v559; // x5
  FollowerInfo_o *v560; // x6
  PartyListViewItem_o *v561; // x7
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v563; // w10
  int v564; // w11
  int v565; // w9
  int v566; // w20
  int32_t v567; // w19
  QuestRestrictionInfo_SlotInfo_o *v568; // x13
  int v569; // w21
  int v570; // w22
  __int64 v571; // x8
  bool HasFlag_40740584; // w0
  bool v573; // w0
  Il2CppObject *Value_int__object; // x0
  int v575; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v577; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v578; // x8
  __int64 v579; // x8
  Il2CppObject *v580; // x20
  int64_t v581; // x0
  int64_t v582; // x2
  int32_t v583; // w3
  System_String_o *v584; // x4
  BattleSetupInfo_o *v585; // x5
  FollowerInfo_o *v586; // x6
  PartyListViewItem_o *v587; // x7
  System_Collections_Generic_Dictionary_int__object__o *restrictionSlotDictionary; // x8
  _BOOL8 v589; // x0
  __int64 v590; // x1
  int v591; // w9
  int v592; // w10
  __int64 v593; // x11
  System_Text_StringBuilder_o *v594; // x20
  System_Text_StringBuilder_o *v595; // x21
  struct RestrictionWholeEntity_array *v596; // x19
  int v597; // w8
  unsigned int v598; // w22
  RestrictionWholeEntity_o *v599; // x24
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  int v602; // w25
  _BOOL4 v603; // w8
  int64_t v604; // x0
  int64_t v605; // x2
  int32_t v606; // w3
  System_String_o *v607; // x4
  BattleSetupInfo_o *v608; // x5
  FollowerInfo_o *v609; // x6
  PartyListViewItem_o *v610; // x7
  System_String_o *v611; // x19
  System_String_o *v612; // x0
  System_String_o *v613; // x0
  int64_t v614; // x2
  int32_t v615; // w3
  System_String_o *v616; // x4
  BattleSetupInfo_o *v617; // x5
  FollowerInfo_o *v618; // x6
  PartyListViewItem_o *v619; // x7
  __int64 v620; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // [xsp+8h] [xbp-198h]
  PartyOrganizationUtility_o *p_svtIdForceBattleList; // [xsp+10h] [xbp-190h]
  PartyOrganizationUtility_o *p_restrictionMessage; // [xsp+18h] [xbp-188h]
  PartyOrganizationUtility_o *p_confirmRestrictionMessage; // [xsp+20h] [xbp-180h]
  struct RestrictionWholeEntity_array *v625; // [xsp+28h] [xbp-178h]
  PartyOrganizationUtility_o *p_fixedSupportIndividualities; // [xsp+30h] [xbp-170h]
  PartyOrganizationUtility_o *p_fixedNpcIndividualities; // [xsp+38h] [xbp-168h]
  PartyOrganizationUtility_o *p_needStartingIndividualities; // [xsp+40h] [xbp-160h]
  PartyOrganizationUtility_o *p_uniqueIndividualitys; // [xsp+48h] [xbp-158h]
  System_Collections_Generic_List_object__o **p_fixedMyServantIndividualitiesList; // [xsp+50h] [xbp-150h]
  System_Collections_Generic_List_object__o **p_fixedIndividualitiesList; // [xsp+58h] [xbp-148h]
  System_Collections_Generic_List_object__o **p_needStartingIndividualitiesList; // [xsp+60h] [xbp-140h]
  System_Collections_Generic_List_object__o **p_fixedNpcIndividualitiesList; // [xsp+68h] [xbp-138h]
  System_Collections_Generic_List_object__o **p_fixedSupportIndividualitiesList; // [xsp+70h] [xbp-130h]
  PartyOrganizationUtility_o *p_deckDispLimitCountList; // [xsp+78h] [xbp-128h]
  PartyOrganizationUtility_o *p_deckLimitCountList; // [xsp+80h] [xbp-120h]
  struct FollowerInfo_array **p_deckNpcInfoList; // [xsp+88h] [xbp-118h]
  System_Collections_Generic_List_object__o **p_myServantPositionsList; // [xsp+90h] [xbp-110h]
  System_Collections_Generic_List_object__o **p_positionsList; // [xsp+A0h] [xbp-100h]
  System_Collections_Generic_Dictionary_K__V__o **v641; // [xsp+A8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o **p_restrictionSlotDetailDictionary; // [xsp+B0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_K__V__o **p_restrictionSlotDictionary; // [xsp+B8h] [xbp-E8h]
  struct RestrictionBaseEntity_o **p_restrictionBaseEntity; // [xsp+C0h] [xbp-E0h]
  QuestRestrictionInfo_o *v645; // [xsp+C8h] [xbp-D8h]
  PartyOrganizationUtility_o *p_deckSvtIdList; // [xsp+D0h] [xbp-D0h]
  _BOOL4 v647; // [xsp+D0h] [xbp-D0h]
  int32_t questIdb; // [xsp+DCh] [xbp-C4h]
  PartyOrganizationUtility_o *p_fields; // [xsp+E0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v651; // [xsp+E8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v652; // [xsp+100h] [xbp-A0h] BYREF
  Il2CppObject *item; // [xsp+120h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+128h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v655; // [xsp+130h] [xbp-70h] BYREF
  Il2CppObject *v656; // [xsp+138h] [xbp-68h] BYREF

  if ( (byte_4BDD728 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
    sub_1C21E38(&Method_BasicHelper_Any_RestrictionSlotEntity___);
    sub_1C21E38(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
    sub_1C21E38(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_RestrictionBaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_RestrictionSlotMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_RestrictionWholeMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1C21E38(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__);
    sub_1C21E38(&FollowerInfo___TypeInfo);
    sub_1C21E38(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
    sub_1C21E38(&System_Func_RestrictionSlotEntity__bool__TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_bool____Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_bool_____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_bool____TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&QuestRestrictionInfo_SlotInfo___TypeInfo);
    sub_1C21E38(&QuestRestrictionInfo_SlotInfo_TypeInfo);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__Setup_b__83_0__);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__Setup_b__83_1__);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__Setup_b__83_2__);
    sub_1C21E38(&Method_QuestRestrictionInfo___c__Setup_b__83_3__);
    sub_1C21E38(&QuestRestrictionInfo___c_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_10519/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/);
    sub_1C21E38(&StringLiteral_10485/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD728 = 1;
  }
  v655 = 0LL;
  v656 = 0LL;
  item = 0LL;
  entity = 0LL;
  memset(&v652, 0, sizeof(v652));
  this->fields.isRestriction = 0;
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  v10 = StringLiteral_1/*""*/;
  v11 = this;
  this->fields.restrictionMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  p_restrictionMessage = (PartyOrganizationUtility_o *)&this->fields.restrictionMessage;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.restrictionMessage,
    (int64_t)v10,
    *(int64_t *)&questId,
    questPhase,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.confirmRestrictionMessage = v9;
  p_confirmRestrictionMessage = (PartyOrganizationUtility_o *)&this->fields.confirmRestrictionMessage;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.confirmRestrictionMessage,
    (int64_t)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.supportOnlyRestrictionEntity = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.supportOnlyRestrictionEntity,
    0LL,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.uniqueSvtRestrictionEntity = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.uniqueSvtRestrictionEntity, 0LL, v24, v25, v26, v27, v28, v29);
  this->fields.deckSvtIdList = 0LL;
  p_deckSvtIdList = (PartyOrganizationUtility_o *)&this->fields.deckSvtIdList;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.deckSvtIdList, 0LL, v30, v31, v32, v33, v34, v35);
  this->fields.deckNpcInfoList = 0LL;
  p_deckNpcInfoList = &this->fields.deckNpcInfoList;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.deckNpcInfoList, 0LL, v36, v37, v38, v39, v40, v41);
  this->fields.fixedSupportPositionRestrictionEntity = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.fixedSupportPositionRestrictionEntity,
    0LL,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.supportPositionList = 0LL;
  p_supportPositionList = (PartyOrganizationUtility_o *)&this->fields.supportPositionList;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.supportPositionList, 0LL, v49, v50, v51, v52, v53, v54);
  this->fields.fixedMyServantPositionRestrictionEntity = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
    0LL,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.servantNumRestrictionEntity = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.servantNumRestrictionEntity,
    0LL,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  this->fields.servantNumMax = 0;
  this->fields.myServantNumRestrictionEntity = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.myServantNumRestrictionEntity,
    0LL,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  this->fields.myServantNumMax = 0;
  *(_WORD *)&this->fields.isSupportOnlyForceBattle = 0;
  this->fields.svtIdForceBattleList = 0LL;
  p_svtIdForceBattleList = (PartyOrganizationUtility_o *)&this->fields.svtIdForceBattleList;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.svtIdForceBattleList, 0LL, v73, v74, v75, v76, v77, v78);
  this->fields.isFatigure = 0;
  p_eventDeckNum = &this->fields.eventDeckNum;
  v11->fields.eventDeckNum = 0;
  *(int32_t *)((char *)p_eventDeckNum + 3) = 0;
  v80 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v80,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v11->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v80;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v11->fields.myServantOrNpcRestrictionEntityList,
    (int64_t)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v87 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v87,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v11->fields.specifiedPositionList = v87;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v11->fields.specifiedPositionList,
    (int64_t)v87,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  v11->fields.isNotTransitionSupportList = 0;
  v11->fields.supportInitIndex = 0;
  v11->fields.fixedServantPositionRestrictionEntity = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v11->fields.fixedServantPositionRestrictionEntity,
    0LL,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  v11->fields.uniqueIndividualityEntity = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v11->fields.uniqueIndividualityEntity,
    0LL,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  v11->fields.isAllOutBattle = 0;
  v11->fields.isDataLostBattle = 0;
  v11->fields.allOutBattleGroupNo = -1;
  v11->fields.dataLostBattleId = -1;
  v11->fields.deckLimitCountList = 0LL;
  p_deckLimitCountList = (PartyOrganizationUtility_o *)&v11->fields.deckLimitCountList;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11->fields.deckLimitCountList, 0LL, v106, v107, v108, v109, v110, v111);
  v11->fields.deckDispLimitCountList = 0LL;
  p_deckDispLimitCountList = (PartyOrganizationUtility_o *)&v11->fields.deckDispLimitCountList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v11->fields.deckDispLimitCountList,
    0LL,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  v11->fields.isNotSingleSupportOnly = 0;
  *(_DWORD *)&v11->fields.isUniqueServant = 0;
  v118 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v118,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_bool_____ctor__);
  v11->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v118;
  p_positionsList = (System_Collections_Generic_List_object__o **)&v11->fields.positionsList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v11->fields.positionsList,
    (int64_t)v118,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  v125 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v125,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_int_____ctor__);
  v11->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v125;
  p_fixedIndividualitiesList = (System_Collections_Generic_List_object__o **)&v11->fields.fixedIndividualitiesList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v11->fields.fixedIndividualitiesList,
    (int64_t)v125,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  v11->fields.isFixedMyServantPosition = 0;
  v132 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v132,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_bool_____ctor__);
  v11->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v132;
  p_myServantPositionsList = (System_Collections_Generic_List_object__o **)&v11->fields.myServantPositionsList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v11->fields.myServantPositionsList,
    (int64_t)v132,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  v139 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v139,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_int_____ctor__);
  v11->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v139;
  p_fixedMyServantIndividualitiesList = (System_Collections_Generic_List_object__o **)&v11->fields.fixedMyServantIndividualitiesList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v11->fields.fixedMyServantIndividualitiesList,
    (int64_t)v139,
    v140,
    v141,
    v142,
    v143,
    v144,
    v145);
  v11->fields.isFixedSupportPosition = 0;
  v146 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v146,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_int_____ctor__);
  v11->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v146;
  p_fixedSupportIndividualitiesList = (System_Collections_Generic_List_object__o **)&v11->fields.fixedSupportIndividualitiesList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v11->fields.fixedSupportIndividualitiesList,
    (int64_t)v146,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152);
  v11->fields.isFixedNpcPosition = 0;
  v153 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v153,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_int_____ctor__);
  v11->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v153;
  p_fixedNpcIndividualitiesList = (System_Collections_Generic_List_object__o **)&v11->fields.fixedNpcIndividualitiesList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v11->fields.fixedNpcIndividualitiesList,
    (int64_t)v153,
    v154,
    v155,
    v156,
    v157,
    v158,
    v159);
  v11->fields.npcPositionList = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11->fields.npcPositionList, 0LL, v160, v161, v162, v163, v164, v165);
  v166 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v166,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_int_____ctor__);
  v11->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v166;
  p_needStartingIndividualitiesList = (System_Collections_Generic_List_object__o **)&v11->fields.needStartingIndividualitiesList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v11->fields.needStartingIndividualitiesList,
    (int64_t)v166,
    v167,
    v168,
    v169,
    v170,
    v171,
    v172);
  v11->fields.isNeedStarting = 0;
  v11->fields.isFixedMyServantSingle = 0;
  *(_WORD *)&v11->fields.isMyServantOrNpc = 0;
  v11->fields.slotInfos = 0LL;
  p_fields = (PartyOrganizationUtility_o *)&v11->fields;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11->fields, 0LL, v173, v174, v175, v176, v177, v178);
  v11->fields.dialogMessageInfoDictionary = 0LL;
  p_dialogMessageInfoDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&v11->fields.dialogMessageInfoDictionary;
  v645 = v11;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v11->fields.dialogMessageInfoDictionary,
    0LL,
    v180,
    v181,
    v182,
    v183,
    v184,
    v185);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !Master_object )
    goto LABEL_387;
  p_restrictionBaseEntity = &v11->fields.restrictionBaseEntity;
  if ( RestrictionBaseMaster__TryGetEntity(
         (RestrictionBaseMaster_o *)Master_object,
         &v11->fields.restrictionBaseEntity,
         v11->fields.questId,
         v11->fields.questPhase,
         v188) )
  {
    v11->fields.isRestriction = 1;
    v190 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v190,
      (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    v11->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v190;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&v11->fields.restrictionSlotDictionary;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v11->fields.restrictionSlotDictionary,
      (int64_t)v190,
      v191,
      v192,
      v193,
      v194,
      v195,
      v196);
    v197 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v197,
      (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    v11->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v197;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v11->fields.restrictionSlotDetailDictionary,
      (int64_t)v197,
      v198,
      v199,
      v200,
      v201,
      v202,
      v203);
    v204 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v204,
      (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    v11->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v204;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v11->fields.dialogMessageInfoDictionary,
      (int64_t)v204,
      v205,
      v206,
      v207,
      v208,
      v209,
      v210);
    v211 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v211,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    Master_object = (int64_t)v645->fields.restrictionBaseEntity;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__object__o **)&v645->fields.restrictionSlotDetailDictionary;
    if ( !Master_object )
      goto LABEL_387;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 2LL, 0LL);
    restrictionBaseEntity = v645->fields.restrictionBaseEntity;
    v645->fields.isNotTransitionSupportList = Master_object & 1;
    if ( !restrictionBaseEntity )
      goto LABEL_387;
    if ( RestrictionBaseEntity__HasFlag(restrictionBaseEntity, 4LL, 0LL) )
    {
      Master_object = (int64_t)*p_restrictionBaseEntity;
      if ( !*p_restrictionBaseEntity )
        goto LABEL_387;
      *p_eventDeckNum = RestrictionBaseEntity__GetUserEventDeckNo((RestrictionBaseEntity_o *)Master_object, 0LL);
    }
    Master_object = (int64_t)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    HasFlag = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 16LL, 0LL);
    v645->fields.isUniqueServant = HasFlag;
    if ( HasFlag )
    {
      v214 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v214 = BalanceConfig_TypeInfo;
      }
      v215 = sub_1C21EE0(int___TypeInfo, (unsigned int)v214->static_fields->DeckMemberMax);
      p_deckSvtIdList->klass = (PartyOrganizationUtility_c *)v215;
      sub_1C21DDC(p_deckSvtIdList, v215, v216, v217, v218, v219, v220, v221);
    }
    Master_object = (int64_t)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 32LL, 0LL);
    v222 = v645->fields.restrictionBaseEntity;
    v645->fields.isNotSingleSupportOnly = Master_object & 1;
    if ( !v222 )
      goto LABEL_387;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      v222,
      &v645->fields.overwriteLimitCountSvtIds,
      &v645->fields.overwriteLimitCounts,
      &v645->fields.overwriteLimitCountIconIds,
      0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v223 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    if ( !Master_object )
      goto LABEL_387;
    Entities = RestrictionWholeMaster__GetEntities(
                 (RestrictionWholeMaster_o *)Master_object,
                 (*p_restrictionBaseEntity)->fields.restrictionWholeId,
                 0LL);
    v645->fields.restrictionWholeEntities = Entities;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v645->fields.restrictionWholeEntities,
      (int64_t)Entities,
      v225,
      v226,
      v227,
      v228,
      v229,
      v230);
    restrictionWholeEntities = v645->fields.restrictionWholeEntities;
    p_restrictionWholeEntities = &v645->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_387;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v233 = 0;
      p_needStartingIndividualities = (PartyOrganizationUtility_o *)&v645->fields.needStartingIndividualities;
      p_uniqueIndividualitys = (PartyOrganizationUtility_o *)&v645->fields.uniqueIndividualitys;
      p_fixedSupportIndividualities = (PartyOrganizationUtility_o *)&v645->fields.fixedSupportIndividualities;
      p_fixedNpcIndividualities = (PartyOrganizationUtility_o *)&v645->fields.fixedNpcIndividualities;
      v625 = v645->fields.restrictionWholeEntities;
      while ( 2 )
      {
        if ( v233 >= max_length )
          goto LABEL_388;
        v234 = restrictionWholeEntities->m_Items[v233];
        if ( v234 )
        {
          switch ( v234->fields.type )
          {
            case 2:
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
              if ( !Master_object )
                goto LABEL_387;
              Master_object = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Master_object, questId, 17, 0LL);
              v645->fields.allOutBattleGroupNo = Master_object;
              v645->fields.isAllOutBattle = 1;
              goto LABEL_89;
            case 3:
              Master_object = System_Linq_Enumerable__Min(
                                (System_Collections_Generic_IEnumerable_int__o *)v234->fields.targetVals,
                                0LL);
              v645->fields.servantNumMax = Master_object - 1;
              goto LABEL_89;
            case 4:
              v262 = *p_positionsList;
              Master_object = (int64_t)RestrictionWholeEntity__GetSetPossiblePosition(v234, 0LL);
              if ( !v262 )
                goto LABEL_387;
              items = v262->fields._items;
              v270 = Method_System_Collections_Generic_List_bool____Add__;
              ++v262->fields._version;
              if ( !items )
                goto LABEL_387;
              size = v262->fields._size;
              v272 = Master_object;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v262,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v270[4] + 192LL) + 112LL));
              }
              else
              {
                v273 = &items->obj.klass + size;
                v262->fields._size = size + 1;
                v273[4] = (Il2CppClass *)v272;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v273 + 4), v272, v263, v264, v265, v266, v267, v268);
              }
              Master_object = (int64_t)v234->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v371 = *p_fixedIndividualitiesList;
              Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v371 )
                goto LABEL_387;
              Master_object = sub_1C21F74(Master_object, int___TypeInfo);
              v378 = v371->fields._items;
              v379 = Method_System_Collections_Generic_List_int____Add__;
              ++v371->fields._version;
              if ( !v378 )
                goto LABEL_387;
              v380 = v371->fields._size;
              v381 = Master_object;
              if ( (unsigned int)v380 >= v378->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v371,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v379[4] + 192LL) + 112LL));
              }
              else
              {
                v382 = &v378->obj.klass + v380;
                v371->fields._size = v380 + 1;
                v382[4] = (Il2CppClass *)v381;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v382 + 4), v381, v372, v373, v374, v375, v376, v377);
              }
              v645->fields.isFixedPosition = 1;
              goto LABEL_89;
            case 5:
              v274 = *p_myServantPositionsList;
              Master_object = (int64_t)RestrictionWholeEntity__GetSetPossiblePosition(v234, 0LL);
              if ( !v274 )
                goto LABEL_387;
              v281 = v274->fields._items;
              v282 = Method_System_Collections_Generic_List_bool____Add__;
              ++v274->fields._version;
              if ( !v281 )
                goto LABEL_387;
              v283 = v274->fields._size;
              v284 = Master_object;
              if ( (unsigned int)v283 >= v281->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v274,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v282[4] + 192LL) + 112LL));
              }
              else
              {
                v285 = &v281->obj.klass + v283;
                v274->fields._size = v283 + 1;
                v285[4] = (Il2CppClass *)v284;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v285 + 4), v284, v275, v276, v277, v278, v279, v280);
              }
              Master_object = (int64_t)v234->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v383 = *p_fixedMyServantIndividualitiesList;
              Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v383 )
                goto LABEL_387;
              Master_object = sub_1C21F74(Master_object, int___TypeInfo);
              v390 = v383->fields._items;
              v391 = Method_System_Collections_Generic_List_int____Add__;
              ++v383->fields._version;
              if ( !v390 )
                goto LABEL_387;
              v392 = v383->fields._size;
              v393 = Master_object;
              if ( (unsigned int)v392 >= v390->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v383,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v391[4] + 192LL) + 112LL));
              }
              else
              {
                v394 = &v390->obj.klass + v392;
                v383->fields._size = v392 + 1;
                v394[4] = (Il2CppClass *)v393;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v394 + 4), v393, v384, v385, v386, v387, v388, v389);
              }
              v645->fields.isFixedMyServantPosition = 1;
              goto LABEL_89;
            case 6:
              SetPossiblePosition = RestrictionWholeEntity__GetSetPossiblePosition(v234, 0LL);
              p_supportPositionList->klass = (PartyOrganizationUtility_c *)SetPossiblePosition;
              sub_1C21DDC(p_supportPositionList, (int64_t)SetPossiblePosition, v236, v237, v238, v239, v240, v241);
              Master_object = (int64_t)v234->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v242 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_fixedSupportIndividualities->klass = (PartyOrganizationUtility_c *)sub_1C21F74(v242, int___TypeInfo);
              v243 = sub_1C21F74(v242, int___TypeInfo);
              sub_1C21DDC(p_fixedSupportIndividualities, v243, v244, v245, v246, v247, v248, v249);
              Master_object = (int64_t)v234->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v250 = *p_fixedSupportIndividualitiesList;
              Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v250 )
                goto LABEL_387;
              Master_object = sub_1C21F74(Master_object, int___TypeInfo);
              v257 = v250->fields._items;
              v258 = Method_System_Collections_Generic_List_int____Add__;
              ++v250->fields._version;
              if ( !v257 )
                goto LABEL_387;
              v259 = v250->fields._size;
              v260 = Master_object;
              if ( (unsigned int)v259 >= v257->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v250,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v258[4] + 192LL) + 112LL));
              }
              else
              {
                v261 = &v257->obj.klass + v259;
                v250->fields._size = v259 + 1;
                v261[4] = (Il2CppClass *)v260;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v261 + 4), v260, v251, v252, v253, v254, v255, v256);
              }
              v645->fields.isFixedSupportPosition = 1;
              goto LABEL_89;
            case 7:
              v323 = RestrictionWholeEntity__GetSetPossiblePosition(v234, 0LL);
              p_supportPositionList->klass = (PartyOrganizationUtility_c *)v323;
              sub_1C21DDC(p_supportPositionList, (int64_t)v323, v324, v325, v326, v327, v328, v329);
              Master_object = (int64_t)v234->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v330 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_fixedNpcIndividualities->klass = (PartyOrganizationUtility_c *)sub_1C21F74(v330, int___TypeInfo);
              v331 = sub_1C21F74(v330, int___TypeInfo);
              sub_1C21DDC(p_fixedNpcIndividualities, v331, v332, v333, v334, v335, v336, v337);
              Master_object = (int64_t)v234->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v338 = *p_fixedNpcIndividualitiesList;
              Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v338 )
                goto LABEL_387;
              Master_object = sub_1C21F74(Master_object, int___TypeInfo);
              v345 = v338->fields._items;
              v346 = Method_System_Collections_Generic_List_int____Add__;
              ++v338->fields._version;
              if ( !v345 )
                goto LABEL_387;
              v347 = v338->fields._size;
              v348 = Master_object;
              if ( (unsigned int)v347 >= v345->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v338,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v346[4] + 192LL) + 112LL));
              }
              else
              {
                v349 = &v345->obj.klass + v347;
                v338->fields._size = v347 + 1;
                v349[4] = (Il2CppClass *)v348;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v349 + 4), v348, v339, v340, v341, v342, v343, v344);
              }
              v645->fields.isFixedNpcPosition = 1;
              goto LABEL_89;
            case 8:
              Master_object = (int64_t)v234->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v350 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_needStartingIndividualities->klass = (PartyOrganizationUtility_c *)sub_1C21F74(v350, int___TypeInfo);
              v351 = sub_1C21F74(v350, int___TypeInfo);
              sub_1C21DDC(p_needStartingIndividualities, v351, v352, v353, v354, v355, v356, v357);
              Master_object = (int64_t)v234->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v358 = *p_needStartingIndividualitiesList;
              Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v358 )
                goto LABEL_387;
              Master_object = sub_1C21F74(Master_object, int___TypeInfo);
              v365 = v358->fields._items;
              v366 = Method_System_Collections_Generic_List_int____Add__;
              ++v358->fields._version;
              if ( !v365 )
                goto LABEL_387;
              v367 = v358->fields._size;
              v368 = Master_object;
              if ( (unsigned int)v367 >= v365->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v358,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v366[4] + 192LL) + 112LL));
              }
              else
              {
                v369 = &v365->obj.klass + v367;
                v358->fields._size = v367 + 1;
                v369[4] = (Il2CppClass *)v368;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v369 + 4), v368, v359, v360, v361, v362, v363, v364);
              }
              v645->fields.isNeedStarting = 1;
              goto LABEL_89;
            case 9:
              Master_object = (int64_t)v234->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v286 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_uniqueIndividualitys->klass = (PartyOrganizationUtility_c *)sub_1C21F74(v286, int___TypeInfo);
              v287 = sub_1C21F74(v286, int___TypeInfo);
              sub_1C21DDC(p_uniqueIndividualitys, v287, v288, v289, v290, v291, v292, v293);
              v294 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v294 = BalanceConfig_TypeInfo;
              }
              v295 = sub_1C21EE0(int___TypeInfo, (unsigned int)v294->static_fields->DeckMemberMax);
              v645->fields.deckSvtIdList = (struct System_Int32_array *)v295;
              sub_1C21DDC(p_deckSvtIdList, v295, v296, v297, v298, v299, v300, v301);
              v302 = sub_1C21EE0(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v645->fields.deckLimitCountList = (struct System_Int32_array *)v302;
              sub_1C21DDC(p_deckLimitCountList, v302, v303, v304, v305, v306, v307, v308);
              v309 = sub_1C21EE0(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v645->fields.deckDispLimitCountList = (struct System_Int32_array *)v309;
              sub_1C21DDC(p_deckDispLimitCountList, v309, v310, v311, v312, v313, v314, v315);
              v316 = sub_1C21EE0(
                       FollowerInfo___TypeInfo,
                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v645->fields.deckNpcInfoList = (struct FollowerInfo_array *)v316;
              sub_1C21DDC((PartyOrganizationUtility_o *)p_deckNpcInfoList, v316, v317, v318, v319, v320, v321, v322);
              restrictionWholeEntities = v625;
              v645->fields.isUniqueIndividuality = 1;
              goto LABEL_89;
            case 0xA:
              v645->fields.isDataLostBattle = 1;
              targetVals = v234->fields.targetVals;
              if ( !targetVals )
                goto LABEL_387;
              if ( !targetVals->max_length )
                goto LABEL_388;
              v645->fields.dataLostBattleId = targetVals->m_Items[1];
LABEL_89:
              restrictionMessageId = v234->fields.restrictionMessageId;
              if ( restrictionMessageId < 1 )
                goto LABEL_102;
              if ( !v223 )
                goto LABEL_387;
              Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v223,
                                &entity,
                                restrictionMessageId,
                                (const MethodInfo_325BE14 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
              if ( (Master_object & 1) == 0 )
                goto LABEL_102;
              if ( !v211 )
                goto LABEL_387;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v211,
                                entity,
                                (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) != 0 )
                goto LABEL_102;
              monitor_low = (int64_t)entity;
              v402 = v211->fields._items;
              v403 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
              ++v211->fields._version;
              if ( !v402 )
                goto LABEL_387;
              v404 = v211->fields._size;
              if ( (unsigned int)v404 >= v402->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v211,
                  (Il2CppObject *)monitor_low,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v403[4] + 192LL) + 112LL));
              }
              else
              {
                v405 = &v402->obj.klass + v404;
                v211->fields._size = v404 + 1;
                v405[4] = (Il2CppClass *)monitor_low;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v405 + 4), monitor_low, v396, v397, v398, v399, v400, v401);
              }
              v406 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_1C22084(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
              QuestRestrictionInfo_DialogMessageInfo___ctor(v406, 0LL);
              if ( !v406 )
                goto LABEL_387;
              v406->fields.restrictionType = v234->fields.type;
              if ( !entity )
                goto LABEL_387;
              Master_object = (int64_t)*p_dialogMessageInfoDictionary;
              if ( !*p_dialogMessageInfoDictionary )
                goto LABEL_387;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                (int32_t)entity[1].klass,
                (Il2CppObject *)v406,
                (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
LABEL_102:
              max_length = restrictionWholeEntities->max_length;
              if ( (int)++v233 >= max_length )
                goto LABEL_103;
              continue;
            default:
              goto LABEL_89;
          }
        }
        goto LABEL_387;
      }
    }
LABEL_103:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestMaster___);
    v407 = v645;
    if ( !Master_object )
      goto LABEL_387;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
      &v656,
      questId,
      (const MethodInfo_325BE14 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    Master_object = (int64_t)v656;
    if ( !v656 )
      goto LABEL_387;
    Master_object = QuestEntity__HasFlag_40740584((QuestEntity_o *)v656, 0x100000LL, questPhase, 0LL);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v645 )
        goto LABEL_387;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = v645->fields.isAllOutBattle;
    }
    v645->fields.isNoSupportBattle = isAllOutBattle;
    Master_object = (int64_t)v656;
    if ( !v656 )
      goto LABEL_387;
    v645->fields.isSupportOnlyForceBattle = QuestEntity__HasFlag_40740584(
                                              (QuestEntity_o *)v656,
                                              0x80000LL,
                                              questPhase,
                                              0LL);
    Master_object = (int64_t)v656;
    if ( !v656 )
      goto LABEL_387;
    v645->fields.isFatigure = QuestEntity__HasFlag_40740584((QuestEntity_o *)v656, 0x200000LL, questPhase, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_387;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v655, questId, questPhase, 0LL) )
    {
      Master_object = sub_1C21EE0(int___TypeInfo, 1LL);
      if ( !v655 )
        goto LABEL_387;
      v409 = Master_object;
      Master_object = QuestPhaseEntity__GetSingleForceSvtId(v655, 0LL);
      if ( !v409 )
        goto LABEL_387;
      if ( !*(_DWORD *)(v409 + 24) )
        goto LABEL_388;
      *(_DWORD *)(v409 + 32) = Master_object;
      p_svtIdForceBattleList->klass = (PartyOrganizationUtility_c *)v409;
      sub_1C21DDC(p_svtIdForceBattleList, v409, v410, v411, v412, v413, v414, v415);
      Master_object = (int64_t)v655;
      if ( !v655 )
        goto LABEL_387;
      v645->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v655, 0LL);
      Master_object = (int64_t)v655;
      if ( !v655 )
        goto LABEL_387;
      v645->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v655, 0LL);
    }
    else
    {
      v645->fields.correctionIconId = -1;
    }
    v416 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v416 = BalanceConfig_TypeInfo;
    }
    v417 = sub_1C21EE0(QuestRestrictionInfo_SlotInfo___TypeInfo, (unsigned int)v416->static_fields->DeckMemberMax);
    p_fields->klass = (PartyOrganizationUtility_c *)v417;
    sub_1C21DDC(p_fields, v417, v418, v419, v420, v421, v422, v423);
    Master_object = (int64_t)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_387;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_32B5BD4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    Master_object = (int64_t)*p_restrictionSlotDetailDictionary;
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_387;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_32B5BD4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v424 = 1;
    v425 = 1;
    v641 = p_dialogMessageInfoDictionary;
    while ( 1 )
    {
      Master_object = (int64_t)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Master_object = (int64_t)BalanceConfig_TypeInfo;
      }
      if ( v424 > *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 156LL) )
        break;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      if ( !*p_restrictionBaseEntity )
        goto LABEL_387;
      if ( !Master_object )
        goto LABEL_387;
      Master_object = (int64_t)RestrictionSlotMaster__GetEntities(
                                 (RestrictionSlotMaster_o *)Master_object,
                                 (*p_restrictionBaseEntity)->fields.restrictionSlotId,
                                 v424,
                                 0LL);
      if ( !Master_object )
        goto LABEL_387;
      v426 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
      v427 = (System_Object_array *)Master_object;
      questIdb = v425;
      Master_object = (int64_t)*p_restrictionSlotDictionary;
      v647 = v426 != 0LL;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_387;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
        v424,
        &v427->obj,
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v428 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v428,
        (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
      v429 = v427->max_length;
      if ( v429 >= 1 )
      {
        v430 = 0LL;
        while ( (unsigned int)v430 < v429 )
        {
          v431 = v427->m_Items[v430];
          if ( !v431 || !v428 )
            goto LABEL_387;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v428,
                            (int32_t)v431[2].monitor,
                            (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            monitor_low = LODWORD(v431[2].monitor);
            v432 = v428->fields._items;
            v433 = Method_System_Collections_Generic_List_int__Add__;
            ++v428->fields._version;
            if ( !v432 )
              goto LABEL_387;
            v434 = v428->fields._size;
            if ( (unsigned int)v434 >= v432->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v428,
                monitor_low,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v433[4] + 192LL) + 112LL));
            }
            else
            {
              v428->fields._size = v434 + 1;
              v432->m_Items[v434 + 1] = monitor_low;
            }
          }
          monitor_high = HIDWORD(v431[2].monitor);
          if ( monitor_high >= 1 )
          {
            if ( !v223 )
              goto LABEL_387;
            Master_object = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v223,
                              &item,
                              monitor_high,
                              (const MethodInfo_325BE14 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (Master_object & 1) != 0 )
            {
              if ( !v211 )
                goto LABEL_387;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v211,
                                item,
                                (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) == 0 )
              {
                monitor_low = (int64_t)item;
                v442 = v211->fields._items;
                v443 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
                ++v211->fields._version;
                if ( !v442 )
                  goto LABEL_387;
                v444 = v211->fields._size;
                if ( (unsigned int)v444 >= v442->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v211,
                    (Il2CppObject *)monitor_low,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v443[4] + 192LL) + 112LL));
                }
                else
                {
                  v445 = &v442->obj.klass + v444;
                  v211->fields._size = v444 + 1;
                  v445[4] = (Il2CppClass *)monitor_low;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v445 + 4), monitor_low, v436, v437, v438, v439, v440, v441);
                }
                v446 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_1C22084(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
                QuestRestrictionInfo_DialogMessageInfo___ctor(v446, 0LL);
                if ( !v446 )
                  goto LABEL_387;
                v446->fields.slotNo = v424;
                if ( !item )
                  goto LABEL_387;
                Master_object = (int64_t)*p_dialogMessageInfoDictionary;
                if ( !*p_dialogMessageInfoDictionary )
                  goto LABEL_387;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  (int32_t)item[1].klass,
                  (Il2CppObject *)v446,
                  (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v429 = v427->max_length;
          if ( (int)++v430 >= v429 )
            goto LABEL_163;
        }
        goto LABEL_388;
      }
LABEL_163:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !Master_object )
        goto LABEL_387;
      Master_object = (int64_t)RestrictionSlotDetailMaster__GetEntities(
                                 (RestrictionSlotDetailMaster_o *)Master_object,
                                 v428,
                                 0LL);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_387;
      v447 = (System_Object_array *)Master_object;
      System_Collections_Generic_Dictionary_int__object___Add(
        *p_restrictionSlotDetailDictionary,
        v424,
        (Il2CppObject *)Master_object,
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v449 = (QuestRestrictionInfo_SlotInfo_o *)sub_1C22084(QuestRestrictionInfo_SlotInfo_TypeInfo);
      QuestRestrictionInfo_SlotInfo___ctor(v449, 0LL);
      if ( !klass )
        goto LABEL_387;
      if ( v449 )
      {
        Master_object = sub_1C21F74(v449, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_object )
        {
          v620 = sub_1C220B8(0LL);
          sub_1C21F60(v620, 0LL);
        }
      }
      v456 = v424 - 1;
      if ( (unsigned int)(v424 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_388;
      v457 = &klass->_1.image + v456;
      v457[4] = v449;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v457 + 4), (int64_t)v449, v450, v451, v452, v453, v454, v455);
      servantNumMax = v407->fields.servantNumMax;
      if ( servantNumMax < 1 || v456 < servantNumMax )
      {
        v462 = QuestRestrictionInfo___c_TypeInfo;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v462 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__83_0 = (System_Func_object__bool__o *)v462->static_fields->__9__83_0;
        if ( !_9__83_0 )
        {
          if ( !v462->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v462);
            v462 = QuestRestrictionInfo___c_TypeInfo;
          }
          v464 = (Il2CppObject *)v462->static_fields->__9;
          _9__83_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__83_0, v464, Method_QuestRestrictionInfo___c__Setup_b__83_0__, 0LL);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
          static_fields->__9__83_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__83_0;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&static_fields->__9__83_0,
            (int64_t)_9__83_0,
            v466,
            v467,
            v468,
            v469,
            v470,
            v471);
        }
        v472 = BasicHelper__Any_object__49917468(
                 v427,
                 (System_Func_T__bool__o *)_9__83_0,
                 (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v473 = QuestRestrictionInfo___c_TypeInfo;
        v474 = v472;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v473 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__83_1 = (System_Func_object__bool__o *)v473->static_fields->__9__83_1;
        if ( !_9__83_1 )
        {
          if ( !v473->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v473);
            v473 = QuestRestrictionInfo___c_TypeInfo;
          }
          v476 = (Il2CppObject *)v473->static_fields->__9;
          _9__83_1 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__83_1, v476, Method_QuestRestrictionInfo___c__Setup_b__83_1__, 0LL);
          v477 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v477->__9__83_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__83_1;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v477->__9__83_1,
            (int64_t)_9__83_1,
            v478,
            v479,
            v480,
            v481,
            v482,
            v483);
        }
        v484 = BasicHelper__Any_object__49917468(
                 v427,
                 (System_Func_T__bool__o *)_9__83_1,
                 (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v485 = QuestRestrictionInfo___c_TypeInfo;
        v486 = v484;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v485 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__83_2 = (System_Func_object__bool__o *)v485->static_fields->__9__83_2;
        if ( !_9__83_2 )
        {
          if ( !v485->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v485);
            v485 = QuestRestrictionInfo___c_TypeInfo;
          }
          v488 = (Il2CppObject *)v485->static_fields->__9;
          _9__83_2 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__83_2, v488, Method_QuestRestrictionInfo___c__Setup_b__83_2__, 0LL);
          v489 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v489->__9__83_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__83_2;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v489->__9__83_2,
            (int64_t)_9__83_2,
            v490,
            v491,
            v492,
            v493,
            v494,
            v495);
        }
        Master_object = BasicHelper__Any_object__49917468(
                          v427,
                          (System_Func_T__bool__o *)_9__83_2,
                          (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        if ( v486 || !v474 || (Master_object & 1) != 0 )
        {
          v407 = v645;
          if ( (v474 || !v486) | Master_object & 1 )
          {
            if ( v474 || v486 || (((unsigned int)Master_object ^ 1) & 1) != 0 )
            {
              if ( Master_object & 1 | (!v474 || !v486) )
              {
                if ( ((v474 || v486) & (unsigned int)Master_object & 1) != 0 )
                {
                  v551 = p_fields->klass;
                  if ( !p_fields->klass )
                    goto LABEL_387;
                  if ( (unsigned int)v456 >= LODWORD(v551->_1.namespaze) )
                    goto LABEL_388;
                  v552 = *((_QWORD *)&v551->_1.byval_arg.data + v456);
                  if ( !v552 )
                    goto LABEL_387;
                  *(_DWORD *)(v552 + 16) = 4;
                  v645->fields.isMyServantOrSupport = 1;
                }
              }
              else
              {
                v553 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_387;
                if ( (unsigned int)v456 >= LODWORD(v553->_1.namespaze) )
                  goto LABEL_388;
                v554 = *((_QWORD *)&v553->_1.byval_arg.data + v456);
                if ( !v554 )
                  goto LABEL_387;
                *(_DWORD *)(v554 + 16) = 3;
                v645->fields.isMyServantOrNpc = 1;
              }
            }
            else
            {
              v498 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v456 >= LODWORD(v498->_1.namespaze) )
                goto LABEL_388;
              v499 = *((_QWORD *)&v498->_1.byval_arg.data + v456);
              if ( !v499 )
                goto LABEL_387;
              *(_DWORD *)(v499 + 16) = 2;
              v645->fields.supportInitIndex = v424;
            }
          }
          else
          {
            v500 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_387;
            if ( (unsigned int)v456 >= LODWORD(v500->_1.namespaze) )
              goto LABEL_388;
            v501 = *((_QWORD *)&v500->_1.byval_arg.data + v456);
            if ( !v501 )
              goto LABEL_387;
            *(_DWORD *)(v501 + 16) = 1;
          }
        }
        else
        {
          v407 = v645;
          v496 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_387;
          if ( (unsigned int)v456 >= LODWORD(v496->_1.namespaze) )
            goto LABEL_388;
          v497 = *((_QWORD *)&v496->_1.byval_arg.data + v456);
          if ( !v497 )
            goto LABEL_387;
          *(_DWORD *)(v497 + 16) = 0;
        }
        if ( !v447 )
          goto LABEL_387;
        v502 = v447->max_length;
        if ( v502 >= 1 )
        {
          v503 = 0;
          while ( v503 < v502 )
          {
            v504 = v447->m_Items[v503];
            if ( !v504 )
              goto LABEL_387;
            if ( !v427->max_length )
              break;
            v505 = v427->m_Items[0];
            if ( !v505 )
              goto LABEL_387;
            if ( LODWORD(v504[1].klass) == LODWORD(v505[2].monitor) )
            {
              v506 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v456 >= LODWORD(v506->_1.namespaze) )
                goto LABEL_388;
              v507 = *((_QWORD *)&v506->_1.byval_arg.data + v456);
              if ( !v507 )
                goto LABEL_387;
              if ( *(_DWORD *)(v507 + 16) <= 2u )
              {
                Master_object = (int64_t)v504[2].monitor;
                if ( !Master_object )
                  goto LABEL_387;
                v508 = *(System_Collections_Generic_List_object__o **)(v507 + 24);
                Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
                if ( !v508 )
                  goto LABEL_387;
                Master_object = sub_1C21F74(Master_object, int___TypeInfo);
                v515 = v508->fields._items;
                v516 = Method_System_Collections_Generic_List_int____Add__;
                ++v508->fields._version;
                if ( !v515 )
                  goto LABEL_387;
                v517 = v508->fields._size;
                v518 = Master_object;
                if ( (unsigned int)v517 >= v515->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v508,
                    (Il2CppObject *)Master_object,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v516[4] + 192LL) + 112LL));
                }
                else
                {
                  v519 = &v515->obj.klass + v517;
                  v508->fields._size = v517 + 1;
                  v519[4] = (Il2CppClass *)v518;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v519 + 4), v518, v509, v510, v511, v512, v513, v514);
                }
                v520 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_387;
                if ( (unsigned int)v456 >= LODWORD(v520->_1.namespaze) )
                  goto LABEL_388;
                v521 = *((_QWORD *)&v520->_1.byval_arg.data + v456);
                if ( !v521 )
                  goto LABEL_387;
                Master_object = *(_QWORD *)(v521 + 32);
                if ( !Master_object )
                  goto LABEL_387;
                monitor_low = LODWORD(v504[3].klass);
                v522 = *(struct System_Int32_array **)(Master_object + 16);
                v523 = Method_System_Collections_Generic_List_Restriction_RangeType__Add__;
                ++*(_DWORD *)(Master_object + 28);
                if ( !v522 )
                  goto LABEL_387;
                v524 = *(int *)(Master_object + 24);
                if ( (unsigned int)v524 >= v522->max_length )
                {
                  System_Collections_Generic_List_Int32Enum___AddWithResize(
                    (System_Collections_Generic_List_T__o *)Master_object,
                    monitor_low,
                    *(const MethodInfo_36348BC **)(*(_QWORD *)(v523[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Master_object + 24) = v524 + 1;
                  v522->m_Items[v524 + 1] = monitor_low;
                }
              }
              if ( LODWORD(v504[2].klass) == 2 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10519/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, 0LL);
                monitor = (System_String_o *)Master_object;
              }
              else
              {
                monitor = (System_String_o *)v504[1].monitor;
              }
              v526 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v456 >= LODWORD(v526->_1.namespaze) )
                goto LABEL_388;
              v527 = *((_QWORD *)&v526->_1.byval_arg.data + v456);
              if ( !v527 )
                goto LABEL_387;
              Master_object = System_String__IsNullOrEmpty(*(System_String_o **)(v527 + 40), 0LL);
              v534 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v456 >= LODWORD(v534->_1.namespaze) )
                goto LABEL_388;
              v535 = *((_QWORD *)&v534->_1.byval_arg.data + v456);
              if ( !v535 )
                goto LABEL_387;
              v536 = (System_String_o **)(v535 + 40);
              if ( (Master_object & 1) == 0 )
                monitor = System_String__Concat_63126736(*v536, (System_String_o *)StringLiteral_43/*"\n"*/, monitor, 0LL);
              *v536 = monitor;
              sub_1C21DDC((PartyOrganizationUtility_o *)v536, (int64_t)monitor, v528, v529, v530, v531, v532, v533);
            }
            v502 = v447->max_length;
            if ( (int)++v503 >= v502 )
              goto LABEL_253;
          }
          goto LABEL_388;
        }
LABEL_253:
        v537 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_387;
        if ( (unsigned int)v456 >= LODWORD(v537->_1.namespaze) )
          goto LABEL_388;
        v538 = QuestRestrictionInfo___c_TypeInfo;
        v539 = *((_QWORD *)&v537->_1.byval_arg.data + v456);
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v538 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__83_3 = (System_Func_object__bool__o *)v538->static_fields->__9__83_3;
        if ( !_9__83_3 )
        {
          if ( !v538->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v538);
            v538 = QuestRestrictionInfo___c_TypeInfo;
          }
          v541 = (Il2CppObject *)v538->static_fields->__9;
          _9__83_3 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__83_3, v541, Method_QuestRestrictionInfo___c__Setup_b__83_3__, 0LL);
          v542 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v542->__9__83_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__83_3;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v542->__9__83_3,
            (int64_t)_9__83_3,
            v543,
            v544,
            v545,
            v546,
            v547,
            v548);
          v407 = v645;
        }
        Master_object = BasicHelper__Any_object__49917468(
                          v447,
                          (System_Func_T__bool__o *)_9__83_3,
                          (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
        if ( !v539 )
          goto LABEL_387;
        *(_BYTE *)(v539 + 48) = (Master_object & 1) == 0;
        v549 = p_fields->klass;
        v460 = questIdb;
        if ( !p_fields->klass )
          goto LABEL_387;
        if ( (unsigned int)v456 >= LODWORD(v549->_1.namespaze) )
          goto LABEL_388;
        v550 = *((_QWORD *)&v549->_1.byval_arg.data + v456);
        if ( !v550 )
          goto LABEL_387;
        p_dialogMessageInfoDictionary = v641;
        if ( *(_DWORD *)(v550 + 16) == 1 )
        {
          if ( *(_BYTE *)(v550 + 48) )
            v407->fields.isNpcEditablePos = 1;
        }
        *(_BYTE *)(v550 + 49) = v427->max_length != 0;
      }
      else
      {
        v459 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_387;
        v460 = questIdb;
        if ( (unsigned int)v456 >= LODWORD(v459->_1.namespaze) )
          goto LABEL_388;
        v461 = *((_QWORD *)&v459->_1.byval_arg.data + v456);
        if ( !v461 )
          goto LABEL_387;
        p_dialogMessageInfoDictionary = v641;
        *(_DWORD *)(v461 + 16) = 5;
        *(_BYTE *)(v461 + 48) = 0;
      }
      ++v424;
      v425 = v460 & v647;
    }
    if ( !v211
      || (v555 = System_Collections_Generic_List_object___ToArray(
                   v211,
                   (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__),
          v407->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v555,
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v407->fields.restrictionMessageEntities,
            (int64_t)v555,
            v556,
            v557,
            v558,
            v559,
            v560,
            v561),
          (slotInfos = v407->fields.slotInfos) == 0LL) )
    {
LABEL_387:
      sub_1C22094(Master_object, monitor_low);
    }
    v563 = slotInfos->max_length;
    if ( v563 >= 1 )
    {
      v564 = 0;
      v565 = 0;
      v566 = 0;
      v567 = 0;
      while ( v563 != v564 )
      {
        v568 = slotInfos->m_Items[v564];
        if ( !v568 )
          goto LABEL_387;
        switch ( v568->fields.slotType )
        {
          case 0:
          case 3:
          case 4:
            ++v567;
            break;
          case 1:
            ++v566;
            break;
          case 2:
            ++v565;
            break;
          default:
            break;
        }
        if ( v563 == ++v564 )
          goto LABEL_293;
      }
LABEL_388:
      sub_1C2209C(Master_object, monitor_low);
    }
    v567 = 0;
    v566 = 0;
    v565 = 0;
LABEL_293:
    if ( v565 == 0 && (v425 & 1) != 0 )
      v407->fields.isNoSupportBattle = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object )
      goto LABEL_387;
    Master_object = (int64_t)NpcFollowerMaster__GetQuestFollowerList(
                               (NpcFollowerMaster_o *)Master_object,
                               v407->fields.questId,
                               v407->fields.questPhase,
                               0LL);
    if ( !Master_object )
      goto LABEL_387;
    v569 = *(_DWORD *)(Master_object + 24);
    if ( v569 >= 1 )
    {
      v570 = 0;
      while ( v569 != v570 )
      {
        v571 = *(_QWORD *)(Master_object + 8LL * v570 + 32);
        if ( !v571 )
          goto LABEL_387;
        if ( !*(_BYTE *)(v571 + 105) && v569 != ++v570 )
          continue;
        goto LABEL_307;
      }
      goto LABEL_388;
    }
    v570 = 0;
LABEL_307:
    Master_object = (int64_t)v656;
    if ( !v656 )
      goto LABEL_387;
    HasFlag_40740584 = QuestEntity__HasFlag_40740584((QuestEntity_o *)v656, 0x10000000LL, questPhase, 0LL);
    v407->fields.isNpcMultipleBattle = HasFlag_40740584;
    if ( !HasFlag_40740584 )
      v407->fields.isNpcMultipleBattle = v570 < v569 && v567 > 0 && v566 > 0;
    Master_object = (int64_t)v656;
    if ( !v656 )
      goto LABEL_387;
    v573 = QuestEntity__HasFlag_40740584((QuestEntity_o *)v656, 0x20000000LL, questPhase, 0LL);
    v407->fields.isNpcOnlyBattle = v573;
    if ( !v573 )
      v407->fields.isNpcOnlyBattle = v570 < v569 && v567 == 0 && v566 > 0;
    Master_object = (int64_t)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 8LL, 0LL) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            *p_restrictionSlotDictionary,
                            2,
                            0LL,
                            (const MethodInfo_2F9E178 *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v575 = 2;
      else
        v575 = 1;
      DeckMemberMax = v407->fields.servantNumMax;
      v407->fields.servantNumMin = v575;
      if ( !DeckMemberMax )
      {
        v577 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v577 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v577->static_fields->DeckMemberMax;
        v407->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v407->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v407->fields.isNpcMultipleBattle )
        v407->fields.myServantNumMax = v567;
    }
    else
    {
      v407->fields.myServantNumMax = v567;
      if ( v567 == 1 && DeckMemberMax == 1 )
      {
        Master_object = (int64_t)v407->fields.restrictionSlotDetailDictionary;
        v407->fields.isFixedMyServantSingle = 1;
        if ( !Master_object )
          goto LABEL_387;
        Master_object = (int64_t)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                                   1,
                                   (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( Master_object )
        {
          v578 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
          if ( v578 )
          {
            if ( !(_DWORD)v578 )
              goto LABEL_388;
            v579 = *(_QWORD *)(Master_object + 32);
            if ( !v579 )
              goto LABEL_387;
            Master_object = *(_QWORD *)(v579 + 40);
            if ( !Master_object )
              goto LABEL_387;
            v580 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
            v407->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)sub_1C21F74(
                                                                                              v580,
                                                                                              int___TypeInfo);
            v581 = sub_1C21F74(v580, int___TypeInfo);
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v407->fields.fixedMyServantSingleIndividualities,
              v581,
              v582,
              v583,
              v584,
              v585,
              v586,
              v587);
          }
        }
      }
    }
    Master_object = (int64_t)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_387;
    Master_object = System_Collections_Generic_Dictionary_int__object___get_Count(
                      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                      (const MethodInfo_32B56FC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__object__o *)v407->fields.restrictionSlotDictionary;
    v407->fields.isSupportOnly = (int)Master_object > 0;
    if ( !restrictionSlotDictionary )
      goto LABEL_387;
    Master_object = (int64_t)System_Collections_Generic_Dictionary_int__object___get_Values(
                               restrictionSlotDictionary,
                               (const MethodInfo_32B585C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Master_object )
      goto LABEL_387;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v651,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Master_object,
      (const MethodInfo_397E064 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v652 = v651;
    do
    {
      v589 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
               &v652,
               (const MethodInfo_34054B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v589 )
        break;
      if ( !v652.fields._currentValue )
        sub_1C22094(v589, v590);
      v591 = (int)v652.fields._currentValue[1].monitor;
      if ( v591 >= 1 )
      {
        v592 = 0;
        while ( 1 )
        {
          if ( v591 == v592 )
            sub_1C2209C(v589, v590);
          v593 = *((_QWORD *)&v652.fields._currentValue[2].klass + v592);
          if ( !v593 )
            sub_1C22094(v589, v590);
          if ( *(_DWORD *)(v593 + 28) == 1 )
            break;
          if ( v591 == ++v592 )
            goto LABEL_348;
        }
        v407->fields.isSupportOnly = 0;
        break;
      }
LABEL_348:
      ;
    }
    while ( v407->fields.isSupportOnly );
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &v652,
      (const MethodInfo_34054B0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    v594 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v594, 0LL);
    v595 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v595, 0LL);
    v596 = *p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_387;
    v597 = v596->max_length;
    if ( v597 >= 1 )
    {
      v598 = 0;
      while ( 1 )
      {
        if ( v598 >= v597 )
          goto LABEL_388;
        v599 = v596->m_Items[v598];
        if ( !v599 )
          goto LABEL_387;
        Master_object = System_String__IsNullOrEmpty(v599->fields.summary, 0LL);
        if ( (Master_object & 1) == 0 )
          break;
LABEL_377:
        v597 = v596->max_length;
        if ( (int)++v598 >= v597 )
          goto LABEL_378;
      }
      type = v599->fields.type;
      if ( type == 10 || type == 2 )
      {
        v602 = 1;
      }
      else
      {
        if ( type == 1 )
        {
          targetVals2 = v599->fields.targetVals2;
          if ( !targetVals2 )
            goto LABEL_387;
          v602 = 1;
          v603 = targetVals2->max_length == 1;
LABEL_365:
          if ( (v603 & v602) != 0 )
          {
            if ( v407->fields.isRestriction )
            {
              if ( !v595 )
                goto LABEL_387;
              System_Text_StringBuilder__Append_62276628(v595, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            }
            else if ( !v595 )
            {
              goto LABEL_387;
            }
            Master_object = (int64_t)System_Text_StringBuilder__Append_62276628(v595, v599->fields.summary, 0LL);
            v407->fields.isRestriction = 1;
          }
          if ( v602 )
          {
            if ( v407->fields.isRestriction )
            {
              if ( !v594 )
                goto LABEL_387;
              System_Text_StringBuilder__Append_62276628(v594, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            }
            else if ( !v594 )
            {
              goto LABEL_387;
            }
            Master_object = (int64_t)System_Text_StringBuilder__Append_62276628(v594, v599->fields.summary, 0LL);
            v407->fields.isRestriction = 1;
          }
          goto LABEL_377;
        }
        v602 = 0;
      }
      v603 = 1;
      goto LABEL_365;
    }
LABEL_378:
    if ( !v595 )
      goto LABEL_387;
    Master_object = System_Text_StringBuilder__get_Length(v595, 0LL);
    if ( (int)Master_object >= 1 )
    {
      v604 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v595->klass->vtable._3_ToString.method)(
               v595,
               v595->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      p_confirmRestrictionMessage->klass = (PartyOrganizationUtility_c *)v604;
      sub_1C21DDC(p_confirmRestrictionMessage, v604, v605, v606, v607, v608, v609, v610);
    }
    if ( !v594 )
      goto LABEL_387;
    if ( System_Text_StringBuilder__get_Length(v594, 0LL) >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v611 = LocalizationManager__Get((System_String_o *)StringLiteral_10485/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v612 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v594->klass->vtable._3_ToString.method)(
                                  v594,
                                  v594->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v613 = System_String__Concat_63126736(v611, (System_String_o *)StringLiteral_43/*"\n"*/, v612, 0LL);
      p_restrictionMessage->klass = (PartyOrganizationUtility_c *)v613;
      sub_1C21DDC(p_restrictionMessage, (int64_t)v613, v614, v615, v616, v617, v618, v619);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(v11, v189);
  }
}


void __fastcall QuestRestrictionInfo__SetupOldRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x20
  System_Text_StringBuilder_o *v4; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct RestrictionEntity_array *restrictionEntityList; // x21
  int max_length; // w8
  unsigned int v15; // w22
  struct RestrictionEntity_o *v16; // x27
  BalanceConfig_c *v17; // x0
  struct System_Int32_array *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Boolean_array *DeckPositionList; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int *targetVals; // x8
  int32_t v33; // w8
  struct System_Int32_array *v34; // x8
  __int64 v35; // x9
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  Il2CppObject *v40; // x25
  int64_t v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  BalanceConfig_c *v48; // x0
  struct System_Int32_array *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Int32_array *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct System_Int32_array *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct FollowerInfo_array *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x8
  struct System_Int32_array *v81; // x8
  _BOOL4 isRestriction; // w9
  __int64 v83; // x9
  struct System_Collections_Generic_List_int__o *specifiedPositionList; // x25
  struct System_Int32_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  struct System_Collections_Generic_List_int__o *v88; // x25
  struct System_Int32_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  struct System_String_o *v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  System_String_o *v99; // x0
  struct System_String_o *v100; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  long double v107; // q0
  __int64 v108; // x0
  __int64 v109; // x0
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  bool HasFlag; // w0
  bool v117; // w0
  struct System_Int32_array *v118; // x20
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  bool v125; // w0
  bool HasFlag_40740584; // w0
  bool v127; // w0
  struct System_Int32_array *v128; // x20
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  bool v135; // w0
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  PartyOrganizationUtility_o *p_totalCostRestrictionEntity; // [xsp+20h] [xbp-D0h]
  PartyOrganizationUtility_o *p_uniqueSvtRestrictionEntity; // [xsp+30h] [xbp-C0h]
  PartyOrganizationUtility_o *p_servantNumRestrictionEntity; // [xsp+58h] [xbp-98h]
  PartyOrganizationUtility_o *p_myServantNumRestrictionEntity; // [xsp+60h] [xbp-90h]
  PartyOrganizationUtility_o *p_uniqueIndividualityEntity; // [xsp+70h] [xbp-80h]
  QuestRestrictionInfoEntity_o *v153; // [xsp+78h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v154; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4BDD729 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C21E38(&FollowerInfo___TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_10485/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_4BDD729 = 1;
  }
  v154 = 0LL;
  entity = 0LL;
  v153 = 0LL;
  v3 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0LL);
  v4 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0LL);
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_149;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    p_uniqueIndividualityEntity = (PartyOrganizationUtility_o *)&this->fields.uniqueIndividualityEntity;
    p_servantNumRestrictionEntity = (PartyOrganizationUtility_o *)&this->fields.servantNumRestrictionEntity;
    p_myServantNumRestrictionEntity = (PartyOrganizationUtility_o *)&this->fields.myServantNumRestrictionEntity;
    v15 = 0;
    p_uniqueSvtRestrictionEntity = (PartyOrganizationUtility_o *)&this->fields.uniqueSvtRestrictionEntity;
    p_totalCostRestrictionEntity = (PartyOrganizationUtility_o *)&this->fields.totalCostRestrictionEntity;
    while ( 1 )
    {
      if ( v15 >= max_length )
        goto LABEL_150;
      v16 = restrictionEntityList->m_Items[v15];
      if ( !v16 )
        goto LABEL_149;
      switch ( v16->fields.type )
      {
        case 3:
          p_totalCostRestrictionEntity->klass = (PartyOrganizationUtility_c *)v16;
          sub_1C21DDC(p_totalCostRestrictionEntity, (int64_t)v16, v7, v8, v9, v10, v11, v12);
          goto LABEL_66;
        case 5:
          this->fields.supportOnlyRestrictionEntity = v16;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.supportOnlyRestrictionEntity,
            (int64_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isSupportOnly = 1;
          goto LABEL_66;
        case 6:
          p_uniqueSvtRestrictionEntity->klass = (PartyOrganizationUtility_c *)v16;
          sub_1C21DDC(p_uniqueSvtRestrictionEntity, (int64_t)v16, v7, v8, v9, v10, v11, v12);
          v17 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v17 = BalanceConfig_TypeInfo;
          }
          v18 = (struct System_Int32_array *)sub_1C21EE0(
                                               int___TypeInfo,
                                               (unsigned int)v17->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v18;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.deckSvtIdList,
            (int64_t)v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          this->fields.isUniqueServant = 1;
          goto LABEL_66;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v16;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.fixedSupportPositionRestrictionEntity,
            (int64_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          DeckPositionList = RestrictionEntity__getDeckPositionList(v16, 0LL);
          this->fields.supportPositionList = DeckPositionList;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.supportPositionList,
            (int64_t)DeckPositionList,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
          this->fields.isFixedSupportPosition = 1;
          goto LABEL_66;
        case 8:
          this->fields.fixedMyServantPositionRestrictionEntity = v16;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
            (int64_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isFixedMyServantPosition = 1;
          goto LABEL_66;
        case 9:
          this->fields.fixedMyServantSingleRestrictionEntity = v16;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.fixedMyServantSingleRestrictionEntity,
            (int64_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isFixedMyServantSingle = 1;
          goto LABEL_66;
        case 0xA:
          p_servantNumRestrictionEntity->klass = (PartyOrganizationUtility_c *)v16;
          sub_1C21DDC(p_servantNumRestrictionEntity, (int64_t)v16, v7, v8, v9, v10, v11, v12);
          targetVals = (int *)v16->fields.targetVals;
          if ( v16->fields.rangeType == 5 )
          {
            if ( targetVals && targetVals[6] >= 2 )
            {
              this->fields.servantNumMin = targetVals[8];
              v33 = targetVals[9];
LABEL_51:
              this->fields.servantNumMax = v33;
            }
          }
          else if ( targetVals )
          {
            v83 = *((_QWORD *)targetVals + 3);
            if ( v83 )
            {
              if ( !(_DWORD)v83 )
                goto LABEL_150;
              v33 = targetVals[8];
              goto LABEL_51;
            }
          }
LABEL_66:
          max_length = restrictionEntityList->max_length;
          if ( (int)++v15 >= max_length )
            goto LABEL_67;
          break;
        case 0xB:
          p_myServantNumRestrictionEntity->klass = (PartyOrganizationUtility_c *)v16;
          sub_1C21DDC(p_myServantNumRestrictionEntity, (int64_t)v16, v7, v8, v9, v10, v11, v12);
          v34 = v16->fields.targetVals;
          if ( !v34 )
            goto LABEL_66;
          v35 = *(_QWORD *)&v34->max_length;
          if ( !v35 )
            goto LABEL_66;
          if ( !(_DWORD)v35 )
            goto LABEL_150;
          this->fields.myServantNumMax = v34->m_Items[1];
          goto LABEL_66;
        case 0xC:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          items = myServantOrNpcRestrictionEntityList->fields._items;
          v37 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !items )
            goto LABEL_149;
          size = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v16,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &items->obj.klass + size;
            myServantOrNpcRestrictionEntityList->fields._size = size + 1;
            v39[4] = (Il2CppClass *)v16;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)v16, v7, v8, v9, v10, v11, v12);
          }
          specifiedPositionList = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v16,
                                                                                               0LL);
          if ( !specifiedPositionList )
            goto LABEL_149;
          v85 = specifiedPositionList->fields._items;
          v86 = Method_System_Collections_Generic_List_int__Add__;
          ++specifiedPositionList->fields._version;
          if ( !v85 )
            goto LABEL_149;
          v87 = specifiedPositionList->fields._size;
          v6 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v87 >= v85->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              specifiedPositionList,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
          }
          else
          {
            specifiedPositionList->fields._size = v87 + 1;
            v85->m_Items[v87 + 1] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrNpc = 1;
          goto LABEL_66;
        case 0xE:
          this->fields.fixedServantPositionRestrictionEntity = v16;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.fixedServantPositionRestrictionEntity,
            (int64_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isNeedStarting = 1;
          goto LABEL_66;
        case 0xF:
          p_uniqueIndividualityEntity->klass = (PartyOrganizationUtility_c *)v16;
          sub_1C21DDC(p_uniqueIndividualityEntity, (int64_t)v16, v7, v8, v9, v10, v11, v12);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v16->fields.targetVals;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          v40 = System_Array__Clone((System_Array_o *)myServantOrNpcRestrictionEntityList, 0LL);
          this->fields.uniqueIndividualitys = (struct System_Int32_array *)sub_1C21F74(v40, int___TypeInfo);
          v41 = sub_1C21F74(v40, int___TypeInfo);
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.uniqueIndividualitys,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
          v48 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v48 = BalanceConfig_TypeInfo;
          }
          v49 = (struct System_Int32_array *)sub_1C21EE0(
                                               int___TypeInfo,
                                               (unsigned int)v48->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v49;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.deckSvtIdList,
            (int64_t)v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55);
          v56 = (struct System_Int32_array *)sub_1C21EE0(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckLimitCountList = v56;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.deckLimitCountList,
            (int64_t)v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62);
          v63 = (struct System_Int32_array *)sub_1C21EE0(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckDispLimitCountList = v63;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.deckDispLimitCountList,
            (int64_t)v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69);
          v70 = (struct FollowerInfo_array *)sub_1C21EE0(
                                               FollowerInfo___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckNpcInfoList = v70;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.deckNpcInfoList,
            (int64_t)v70,
            v71,
            v72,
            v73,
            v74,
            v75,
            v76);
          this->fields.isUniqueIndividuality = 1;
          goto LABEL_66;
        case 0x10:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          v77 = myServantOrNpcRestrictionEntityList->fields._items;
          v78 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v77 )
            goto LABEL_149;
          v79 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v79 >= v77->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v16,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
          }
          else
          {
            v80 = &v77->obj.klass + v79;
            myServantOrNpcRestrictionEntityList->fields._size = v79 + 1;
            v80[4] = (Il2CppClass *)v16;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 4), (int64_t)v16, v7, v8, v9, v10, v11, v12);
          }
          v88 = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v16,
                                                                                               0LL);
          if ( !v88 )
            goto LABEL_149;
          v89 = v88->fields._items;
          v90 = Method_System_Collections_Generic_List_int__Add__;
          ++v88->fields._version;
          if ( !v89 )
            goto LABEL_149;
          v91 = v88->fields._size;
          v6 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v91 >= v89->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v88,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
          }
          else
          {
            v88->fields._size = v91 + 1;
            v89->m_Items[v91 + 1] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrSupport = 1;
          goto LABEL_66;
        case 0x11:
          this->fields.isDataLostBattle = 1;
          v81 = v16->fields.targetVals;
          if ( !v81 )
            goto LABEL_149;
          if ( !v81->max_length )
            goto LABEL_150;
          isRestriction = this->fields.isRestriction;
          this->fields.dataLostBattleId = v81->m_Items[1];
          if ( isRestriction )
          {
LABEL_44:
            if ( !v3 )
              goto LABEL_149;
            System_Text_StringBuilder__Append_62276628(v3, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
          }
          else
          {
LABEL_11:
            if ( !v3 )
              goto LABEL_149;
          }
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_62276628(
                                                                                               v3,
                                                                                               v16->fields.name,
                                                                                               0LL);
          this->fields.isRestriction = 1;
          goto LABEL_66;
        default:
          if ( !this->fields.isRestriction )
            goto LABEL_11;
          goto LABEL_44;
      }
    }
  }
LABEL_67:
  if ( this->fields.isRestriction )
  {
    if ( !v3 )
      goto LABEL_149;
    v92 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v3->klass->vtable._3_ToString.method)(
                                      v3,
                                      v3->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    this->fields.confirmRestrictionMessage = v92;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.confirmRestrictionMessage,
      (int64_t)v92,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v99 = LocalizationManager__Get((System_String_o *)StringLiteral_10485/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    v100 = System_String__Concat_63126736(
             v99,
             (System_String_o *)StringLiteral_43/*"\n"*/,
             this->fields.confirmRestrictionMessage,
             0LL);
    this->fields.restrictionMessage = v100;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.restrictionMessage,
      (int64_t)v100,
      v101,
      v102,
      v103,
      v104,
      v105,
      v106);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)myServantOrNpcRestrictionEntityList,
    &entity,
    this->fields.questId,
    (const MethodInfo_325BE14 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)myServantOrNpcRestrictionEntityList,
    &v154,
    this->fields.questId,
    this->fields.questPhase,
    0LL);
  v108 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v108 + 309) & 1) == 0 )
    v108 = sub_1C73D14(v107);
  v109 = *(_QWORD *)(*(_QWORD *)(v108 + 192) + 16LL);
  if ( (*(_BYTE *)(v109 + 309) & 1) == 0 )
    v109 = sub_1C73D14(v107);
  myServantOrNpcRestrictionEntityList = **(System_Collections_Generic_List_object__o ***)(v109 + 184);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         (QuestRestrictionInfoMaster_o *)myServantOrNpcRestrictionEntityList,
         &v153,
         this->fields.questId,
         this->fields.questPhase,
         0LL) )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
    if ( !v153 )
      goto LABEL_149;
    if ( QuestRestrictionInfoEntity__HasFlag(v153, 0x100000LL, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
      goto LABEL_101;
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
    if ( !v153 )
      goto LABEL_149;
    HasFlag = QuestRestrictionInfoEntity__HasFlag(v153, 0x400000000000000LL, 0LL);
    this->fields.isNoSupportBattle = HasFlag;
    if ( HasFlag )
      goto LABEL_101;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
    if ( !v153 )
      goto LABEL_149;
    v117 = QuestRestrictionInfoEntity__HasFlag(v153, 0x80000LL, 0LL);
    this->fields.isSupportOnlyForceBattle = v117;
    if ( v117 )
    {
LABEL_101:
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
      if ( v153 )
      {
        this->fields.isNpcMultipleBattle = QuestRestrictionInfoEntity__HasFlag(v153, 0x10000000LL, 0LL);
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
        if ( v153 )
        {
          this->fields.isNpcOnlyBattle = QuestRestrictionInfoEntity__HasFlag(v153, 0x20000000LL, 0LL);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
          if ( v153 )
          {
            this->fields.isNpcEditablePos = QuestRestrictionInfoEntity__HasFlag(v153, 0x800000000LL, 0LL);
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
            if ( v153 )
            {
              this->fields.isNotTransitionSupportList = QuestRestrictionInfoEntity__HasFlag(
                                                          v153,
                                                          0x80000000000000LL,
                                                          0LL);
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
              if ( v153 )
              {
                QuestRestrictionInfoEntity__GetOverwriteLimitCountSvtIds(
                  v153,
                  &this->fields.overwriteLimitCountSvtIds,
                  &this->fields.overwriteLimitCounts,
                  &this->fields.overwriteLimitCountIconIds,
                  0LL);
                myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
                if ( v153 )
                {
                  v125 = QuestRestrictionInfoEntity__HasFlag(v153, 0x400000000000000LL, 0LL);
                  this->fields.isAllOutBattle = v125;
                  if ( v125 )
                  {
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_149;
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_((DataManager_o *)myServantOrNpcRestrictionEntityList, (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_149;
                    this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                                         (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                                         this->fields.questId,
                                                         17,
                                                         0LL);
                  }
                  if ( entity )
                    this->fields.isFatigure = QuestEntity__HasFlag_40740584(
                                                (QuestEntity_o *)entity,
                                                0x200000LL,
                                                this->fields.questPhase,
                                                0LL);
                  if ( v154 )
                  {
                    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v154, 0LL);
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v154;
                    if ( !v154 )
                      goto LABEL_149;
                    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v154, 0LL);
                  }
                  else
                  {
                    this->fields.correctionIconId = -1;
                  }
                  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
                  if ( v153 )
                  {
                    this->fields.isNotSingleSupportOnly = QuestRestrictionInfoEntity__HasFlag(
                                                            v153,
                                                            0x1000000000000000LL,
                                                            0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_149:
      sub_1C22094(myServantOrNpcRestrictionEntityList, v6);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
    if ( !v153 )
      goto LABEL_149;
    if ( QuestRestrictionInfoEntity__HasFlag(v153, 0x1000000LL, 0LL) )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
      if ( !v153 )
        goto LABEL_149;
      this->fields.eventDeckNum = QuestRestrictionInfoEntity__GetUserEventDeckNo(v153, 0LL);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1C21EE0(int___TypeInfo, 1LL);
    if ( !v153 )
      goto LABEL_149;
    v118 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetSingleForceSvtId(
                                                                                         v153,
                                                                                         0LL);
    if ( !v118 )
      goto LABEL_149;
    if ( v118->max_length )
    {
      v118->m_Items[1] = (int)myServantOrNpcRestrictionEntityList;
      this->fields.svtIdForceBattleList = v118;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.svtIdForceBattleList,
        (int64_t)v118,
        v119,
        v120,
        v121,
        v122,
        v123,
        v124);
      goto LABEL_101;
    }
LABEL_150:
    sub_1C2209C(myServantOrNpcRestrictionEntityList, v6);
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_40740584((QuestEntity_o *)entity, 0x100000LL, this->fields.questPhase, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
      if ( !entity )
        goto LABEL_149;
      HasFlag_40740584 = QuestEntity__HasFlag_40740584(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0LL);
      this->fields.isNoSupportBattle = HasFlag_40740584;
      if ( !HasFlag_40740584 )
      {
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
        if ( !entity )
          goto LABEL_149;
        v127 = QuestEntity__HasFlag_40740584((QuestEntity_o *)entity, 0x80000LL, this->fields.questPhase, 0LL);
        this->fields.isSupportOnlyForceBattle = v127;
        if ( !v127 )
        {
          if ( v154 )
          {
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
            if ( !entity )
              goto LABEL_149;
            if ( QuestEntity__HasFlag_40740584((QuestEntity_o *)entity, 0x1000000LL, this->fields.questPhase, 0LL) )
            {
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v154;
              if ( !v154 )
                goto LABEL_149;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v154, 0LL);
            }
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1C21EE0(
                                                                                                 int___TypeInfo,
                                                                                                 1LL);
            if ( !v154 )
              goto LABEL_149;
            v128 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__GetSingleForceSvtId(
                                                                                                 v154,
                                                                                                 0LL);
            if ( !v128 )
              goto LABEL_149;
            if ( !v128->max_length )
              goto LABEL_150;
            v128->m_Items[1] = (int)myServantOrNpcRestrictionEntityList;
            this->fields.svtIdForceBattleList = v128;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&this->fields.svtIdForceBattleList,
              (int64_t)v128,
              v129,
              v130,
              v131,
              v132,
              v133,
              v134);
          }
        }
      }
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isFatigure = QuestEntity__HasFlag_40740584(
                                (QuestEntity_o *)entity,
                                0x200000LL,
                                this->fields.questPhase,
                                0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    v135 = QuestEntity__HasFlag_40740584((QuestEntity_o *)entity, 0x400000000000000LL, this->fields.questPhase, 0LL);
    this->fields.isAllOutBattle = v135;
    if ( v135 )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_149;
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                           (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_149;
      this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                           (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                           this->fields.questId,
                                           17,
                                           0LL);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNpcMultipleBattle = QuestEntity__HasFlag_40740584(
                                         (QuestEntity_o *)entity,
                                         0x10000000LL,
                                         this->fields.questPhase,
                                         0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNpcOnlyBattle = QuestEntity__HasFlag_40740584(
                                     (QuestEntity_o *)entity,
                                     0x20000000LL,
                                     this->fields.questPhase,
                                     0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNpcEditablePos = QuestEntity__HasFlag_40740584(
                                      (QuestEntity_o *)entity,
                                      0x800000000LL,
                                      this->fields.questPhase,
                                      0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNotTransitionSupportList = QuestEntity__HasFlag_40740584(
                                                (QuestEntity_o *)entity,
                                                0x80000000000000LL,
                                                this->fields.questPhase,
                                                0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_40740584(
                                            (QuestEntity_o *)entity,
                                            0x1000000000000000LL,
                                            this->fields.questPhase,
                                            0LL);
  }
  if ( v154 )
  {
    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v154, 0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v154;
    if ( !v154 )
      goto LABEL_149;
    QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
      v154,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v154;
    if ( !v154 )
      goto LABEL_149;
    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v154, 0LL);
  }
  else
  {
    this->fields.correctionIconId = -1;
    this->fields.overwriteLimitCountSvtIds = 0LL;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.overwriteLimitCountSvtIds,
      0LL,
      v110,
      v111,
      v112,
      v113,
      v114,
      v115);
    this->fields.overwriteLimitCounts = 0LL;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.overwriteLimitCounts,
      0LL,
      v136,
      v137,
      v138,
      v139,
      v140,
      v141);
    this->fields.overwriteLimitCountIconIds = 0LL;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.overwriteLimitCountIconIds,
      0LL,
      v142,
      v143,
      v144,
      v145,
      v146,
      v147);
  }
}


void __fastcall QuestRestrictionInfo_DialogMessageInfo___ctor(
        QuestRestrictionInfo_DialogMessageInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields = 0LL;
}


void __fastcall QuestRestrictionInfo_SlotInfo___ctor(QuestRestrictionInfo_SlotInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_List_T__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  void *v17; // x1
  struct System_String_o **p_summary; // x19
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BDD775 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD775 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.slotType = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.individualityList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_3634068 *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.rangeTypeList, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  this->fields.summary = (struct System_String_o *)StringLiteral_1/*""*/;
  p_summary = &this->fields.summary;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_summary, (int64_t)v17, v19, v20, v21, v22, v23, v24);
  *((_WORD *)p_summary + 4) = 1;
}


void __fastcall QuestRestrictionInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDD776 & 1) == 0 )
  {
    sub_1C21E38(&QuestRestrictionInfo___c_TypeInfo);
    byte_4BDD776 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(QuestRestrictionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestRestrictionInfo___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionInfo___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)QuestRestrictionInfo___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall QuestRestrictionInfo___c___ctor(QuestRestrictionInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__107_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C22094(this, 0LL);
  return e->fields.type != 1 || RestrictionEntity__IsRestrictionTarget(e, 1, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__107_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C22094(this, 0LL);
  return e->fields.name;
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__107_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C22094(this, 0LL);
  return e->fields.name;
}


bool __fastcall QuestRestrictionInfo___c___GetRestrictionMessageEntityList_b__109_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  unsigned int v3; // w8
  _BOOL4 v4; // w0

  if ( !e )
    sub_1C22094(this, 0LL);
  v3 = e->fields.type - 1;
  if ( v3 > 0x10 )
    LOBYTE(v4) = 0;
  else
    return (0x1100Bu >> v3) & 1;
  return v4;
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetRestrictionMessage_b__108_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C22094(this, 0LL);
  return e->fields.name;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualitySlot_b__98_0(
        QuestRestrictionInfo___c_o *this,
        QuestRestrictionInfo_SlotInfo_o *s,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *individualityList; // x8

  if ( (byte_4BDD777 & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_1C21E38(&Method_System_Collections_Generic_List_int____get_Count__);
    byte_4BDD777 = 1;
  }
  if ( !s || (individualityList = s->fields.individualityList) == 0LL )
    sub_1C22094(this, s);
  return individualityList->fields._size > 0;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__97_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C22094(this, 0LL);
  return e->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__97_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionWholeEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C22094(this, 0LL);
  return e->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__83_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__83_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.type == 3;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__83_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.type == 2;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__83_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.type == 2;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass179_0___ctor(
        QuestRestrictionInfo___c__DisplayClass179_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass179_0___IsMyServantOrNpcRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass179_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass180_0___ctor(
        QuestRestrictionInfo___c__DisplayClass180_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass180_0___IsSelectableNormalSupport_b__0(
        QuestRestrictionInfo___c__DisplayClass180_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass181_0___ctor(
        QuestRestrictionInfo___c__DisplayClass181_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass181_0___IsNotIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass181_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass182_0___ctor(
        QuestRestrictionInfo___c__DisplayClass182_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass182_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass182_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass183_0___ctor(
        QuestRestrictionInfo___c__DisplayClass183_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass183_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass183_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass184_0___ctor(
        QuestRestrictionInfo___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass184_0___GetRestrictedName_b__0(
        QuestRestrictionInfo___c__DisplayClass184_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_o *questRestrictionEntity; // x8

  if ( !x || (questRestrictionEntity = this->fields.questRestrictionEntity) == 0LL )
    sub_1C22094(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass187_0___ctor(
        QuestRestrictionInfo___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass187_0___GetMyServantOrNpcSvtIdList_b__0(
        QuestRestrictionInfo___c__DisplayClass187_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *_4__this; // x8
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  __int64 index; // x9
  QuestRestrictionEntity_o *v6; // x8

  if ( !x )
    goto LABEL_7;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_7;
  questRestrictionEntityList = _4__this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_7;
  index = this->fields.index;
  if ( (unsigned int)index >= questRestrictionEntityList->max_length )
    sub_1C2209C(this, x);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1C22094(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass188_0___ctor(
        QuestRestrictionInfo___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass188_0___GetMyServantOrSupportTargetPos_b__0(
        QuestRestrictionInfo___c__DisplayClass188_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *_4__this; // x8
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  __int64 index; // x9
  QuestRestrictionEntity_o *v6; // x8

  if ( !x )
    goto LABEL_7;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_7;
  questRestrictionEntityList = _4__this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_7;
  index = this->fields.index;
  if ( (unsigned int)index >= questRestrictionEntityList->max_length )
    sub_1C2209C(this, x);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1C22094(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass201_0___ctor(
        QuestRestrictionInfo___c__DisplayClass201_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass201_0___GetMyServantOrNpcSvtIdUnionNpcList_b__0(
        QuestRestrictionInfo___c__DisplayClass201_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.index;
}