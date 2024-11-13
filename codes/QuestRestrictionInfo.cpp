void __fastcall QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.questId = questId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo___ctor_41151748(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  struct RestrictionEntity_array *RestrictionList_40265240; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int32_t v20; // w1
  const MethodInfo *v21; // x4

  if ( (byte_4B17367 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestRestrictionMaster___, *(_QWORD *)&eventId, *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B17367 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v12);
  }
  RestrictionList_40265240 = QuestRestrictionMaster__getRestrictionList_40265240(
                               (QuestRestrictionMaster_o *)Instance,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               0LL);
  this->fields.restrictionEntityList = RestrictionList_40265240;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.restrictionEntityList,
    (int64_t)RestrictionList_40265240,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  QuestRestrictionInfo__Setup(this, v20, questId, questPhase, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo___ctor_41161348(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        RestrictionEntity_o *overwriteRestiction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  struct QuestRestrictionEntity_array *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x23
  __int64 v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int32_t v37; // w1
  const MethodInfo *v38; // x4
  __int64 v39; // x0

  if ( (byte_4B17368 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestRestrictionEntity___TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&questId);
    sub_1BCA7E0(&RestrictionEntity___TypeInfo, v11, v12);
    byte_4B17368 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v13 = (struct QuestRestrictionEntity_array *)sub_1BCA888(QuestRestrictionEntity___TypeInfo, 0LL);
  this->fields.questRestrictionEntityList = v13;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionEntityList,
    (int64_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( overwriteRestiction )
  {
    v20 = sub_1BCA888(RestrictionEntity___TypeInfo, 1LL);
    if ( !v20 )
      sub_1BCAA3C(0LL, v21);
    v22 = v20;
    v23 = sub_1BCA91C(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
    if ( !v23 )
    {
      v39 = sub_1BCAA60(0LL);
      sub_1BCA908(v39, 0LL);
    }
    if ( !*(_DWORD *)(v22 + 24) )
      sub_1BCAA44(v23, v24);
    *(_QWORD *)(v22 + 32) = overwriteRestiction;
    sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 32), (int64_t)overwriteRestiction, v25, v26, v27, v28, v29, v30);
  }
  else
  {
    v22 = sub_1BCA888(RestrictionEntity___TypeInfo, 0LL);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.restrictionEntityList, v22, v31, v32, v33, v34, v35, v36);
  QuestRestrictionInfo__Setup(this, v37, questId, questPhase, v38);
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  DataManager_o *Instance; // x0
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x2
  int32_t v39; // w26
  System_Collections_Generic_IEnumerable_TSource__o *FixedServantPositionSvtIdList; // x0
  __int64 v41; // x1
  BalanceConfig_c *v42; // x0
  int v43; // w8
  System_Collections_Generic_IEnumerable_TSource__o *FixedMyServantPositionSvtIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  char v46; // w27
  System_Collections_Generic_IEnumerable_TSource__o *NeedStartingSvtIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  BalanceConfig_c *v49; // x0
  int32_t v50; // w23
  System_Collections_Generic_IEnumerable_TSource__o *FixedPositionSvtIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Collections_Generic_List_object__o *positionsList; // x8
  char v54; // w22
  System_Collections_Generic_IEnumerable_TSource__o *second; // [xsp+8h] [xbp-68h]

  if ( (byte_4B17389 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, isFixedServantPositionRestriction, isFixedServantPositionAgreement);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22, v23);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_int___, v24, v25);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v26, v27);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Intersect_int___, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool____get_Count__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool____get_Item__, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35);
    byte_4B17389 = 1;
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
             (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        v42 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v41);
          v42 = BalanceConfig_TypeInfo;
        }
        *isFixedServantPositionRestriction = v42->static_fields->DeckMainMemberMax <= num;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  v39 = 0;
  while ( v39 < SLODWORD(Instance->fields.m_CancellationTokenSource) )
  {
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v39,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_67;
    if ( *(&Instance->fields._DispLog + num) )
      goto LABEL_22;
    Instance = (DataManager_o *)this->fields.myServantPositionsList;
    ++v39;
    if ( !Instance )
      goto LABEL_15;
  }
  v39 = 0;
LABEL_22:
  if ( isFollower )
  {
    Instance = (DataManager_o *)this->fields.myServantPositionsList;
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v39,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_67;
    v43 = *((unsigned __int8 *)&Instance->fields._DispLog + num);
  }
  else
  {
    FixedMyServantPositionSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetFixedMyServantPositionSvtIdList(
                                                                                             this,
                                                                                             (int32_t)v37,
                                                                                             v38);
    if ( !FixedMyServantPositionSvtIdList )
      goto LABEL_37;
    v45 = System_Linq_Enumerable__Intersect_int_(
            FixedMyServantPositionSvtIdList,
            second,
            (const MethodInfo_2F36730 *)Method_System_Linq_Enumerable_Intersect_int___);
    Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                  v45,
                                  (const MethodInfo_2F1E314 *)Method_System_Linq_Enumerable_Any_int___);
    if ( !this->fields.myServantPositionsList )
      goto LABEL_15;
    v46 = (char)Instance;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this->fields.myServantPositionsList,
                                  v39,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_67;
    v43 = *((unsigned __int8 *)&Instance->fields._DispLog + num);
    if ( (v46 & 1) != 0 )
    {
      if ( !*(&Instance->fields._DispLog + num) )
        goto LABEL_37;
      *isFixedServantPositionAgreement = 1;
      goto LABEL_36;
    }
  }
  if ( !v43 )
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
                                                                                   v37);
    if ( NeedStartingSvtIdList )
    {
      v48 = System_Linq_Enumerable__Intersect_int_(
              NeedStartingSvtIdList,
              second,
              (const MethodInfo_2F36730 *)Method_System_Linq_Enumerable_Intersect_int___);
      if ( System_Linq_Enumerable__Any_int_(v48, (const MethodInfo_2F1E314 *)Method_System_Linq_Enumerable_Any_int___) )
      {
        v49 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v37);
          v49 = BalanceConfig_TypeInfo;
        }
        *isFixedServantPositionRestriction = v49->static_fields->DeckMainMemberMax <= num;
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
  v50 = 0;
  while ( v50 < SLODWORD(Instance->fields.m_CancellationTokenSource) )
  {
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v50,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_67;
    if ( *(&Instance->fields._DispLog + num) )
      goto LABEL_57;
    Instance = (DataManager_o *)this->fields.positionsList;
    ++v50;
    if ( !Instance )
      goto LABEL_15;
  }
  v50 = 0;
LABEL_57:
  FixedPositionSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetFixedPositionSvtIdList(
                                                                                  this,
                                                                                  (int32_t)v37,
                                                                                  v38);
  if ( !FixedPositionSvtIdList )
    return;
  v52 = System_Linq_Enumerable__Intersect_int_(
          FixedPositionSvtIdList,
          second,
          (const MethodInfo_2F36730 *)Method_System_Linq_Enumerable_Intersect_int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                v52,
                                (const MethodInfo_2F1E314 *)Method_System_Linq_Enumerable_Any_int___);
  positionsList = (System_Collections_Generic_List_object__o *)this->fields.positionsList;
  if ( !positionsList
    || (v54 = (char)Instance,
        (Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                       positionsList,
                                       v50,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_bool____get_Item__)) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(Instance, v37);
  }
  if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
LABEL_67:
    sub_1BCAA44(Instance, v37);
  if ( (v54 & 1) != 0 )
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
    sub_1BCAA44(this, svtId);
  return overwriteLimitCounts->m_Items[v6 + 1];
}


int32_t __fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41189504(
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
  if ( (byte_4B17392 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(
                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                       userServantEntity,
                                       method);
    byte_4B17392 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_20;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
  this = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(v4, v7, v8);
  if ( !this )
LABEL_20:
    sub_1BCAA3C(this, userServantEntity);
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
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
      *(_QWORD *)&v17.fields.currentCryptoKey = v14;
      *(_QWORD *)&v17.fields.fakeValue = v13;
      this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
      if ( (_DWORD)this == v12 )
        return v12;
      dialogMessageInfoDictionary = v10->fields.dialogMessageInfoDictionary;
      if ( (int)++v11 >= (int)dialogMessageInfoDictionary )
        goto LABEL_15;
    }
LABEL_19:
    sub_1BCAA44(this, userServantEntity);
  }
LABEL_15:
  if ( !(_DWORD)dialogMessageInfoDictionary )
    goto LABEL_19;
  return v10->fields.eventId;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_int__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  struct System_Int32_array *overwriteLimitCountSvtIds; // x8
  unsigned __int64 v16; // x22
  __int64 v17; // x23
  struct System_Int32_array *overwriteLimitCounts; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_4B17391 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v10, v11);
    byte_4B17391 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svtId,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( overwriteLimitCountSvtIds
    && this->fields.overwriteLimitCounts
    && (int)*(_QWORD *)&overwriteLimitCountSvtIds->max_length >= 1 )
  {
    v16 = 0LL;
    v17 = (unsigned int)*(_QWORD *)&overwriteLimitCountSvtIds->max_length - 1LL;
    do
    {
      if ( v16 >= overwriteLimitCountSvtIds->max_length )
LABEL_21:
        sub_1BCAA44(v13, v14);
      if ( overwriteLimitCountSvtIds->m_Items[v16 + 1] == svtId )
      {
        overwriteLimitCounts = this->fields.overwriteLimitCounts;
        if ( !overwriteLimitCounts )
          break;
        if ( v16 >= overwriteLimitCounts->max_length )
          goto LABEL_21;
        if ( !v12 )
          break;
        v14 = (unsigned int)overwriteLimitCounts->m_Items[v16 + 1];
        items = v12->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            v14,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = size + 1;
          items->m_Items[size + 1] = v14;
        }
      }
      if ( v17 == v16 )
        goto LABEL_19;
      overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
      ++v16;
    }
    while ( overwriteLimitCountSvtIds );
LABEL_18:
    sub_1BCAA3C(v13, v14);
  }
LABEL_19:
  if ( !v12 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  __int64 v30; // x21
  QuestRestrictionInfo_SlotInfo_o *v31; // x8
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x21
  int max_length; // w8
  unsigned int v34; // w22
  __int64 v35; // x23
  RestrictionWholeEntity_o *v36; // x25
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x26
  unsigned __int64 v39; // x27
  int v40; // w8
  unsigned int v41; // w9
  struct QuestRestrictionInfo_SlotInfo_array *v42; // x8
  QuestRestrictionInfo_SlotInfo_o *v43; // x8
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Collections_Generic_IEnumerable_RestrictionEntity__o *RestrictionMessageEntityList; // x19
  QuestRestrictionInfo___c_c *v49; // x8
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__106_0; // x20
  Il2CppObject *v52; // x21
  struct QuestRestrictionInfo___c_StaticFields *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  QuestRestrictionInfo___c_c *v64; // x8
  System_Func_TSource__TResult__o *_9__106_2; // x20
  Il2CppObject *v66; // x21
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct QuestRestrictionInfo___c_StaticFields *v73; // x0
  PartyOrganizationUtility_o *p__9__106_2; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v75; // x8
  QuestRestrictionInfo_SlotInfo_o *v76; // x8
  Il2CppObject *v77; // x21
  struct QuestRestrictionInfo___c_StaticFields *v78; // x0
  System_Collections_Generic_IEnumerable_string__o *v79; // x0

  v8 = this;
  if ( (byte_4B1737B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&initPos, *(_QWORD *)&pos);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v11, v12);
    sub_1BCA7E0(&System_Func_RestrictionEntity__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Func_RestrictionEntity__string__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__106_0__, v17, v18);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__106_1__, v19, v20);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__106_2__, v21, v22);
    sub_1BCA7E0(&QuestRestrictionInfo___c_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v25, v26);
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28);
    byte_4B1737B = 1;
  }
  if ( !v8->fields.restrictionBaseEntity )
  {
    RestrictionMessageEntityList = QuestRestrictionInfo__GetRestrictionMessageEntityList(
                                     v8,
                                     *(const MethodInfo **)&initPos);
    v49 = QuestRestrictionInfo___c_TypeInfo;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, v45);
      v49 = QuestRestrictionInfo___c_TypeInfo;
    }
    static_fields = v49->static_fields;
    if ( initPos < 1 )
    {
      _9__106_2 = (System_Func_TSource__TResult__o *)static_fields->__9__106_2;
      if ( _9__106_2 )
      {
LABEL_61:
        v79 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                                    _9__106_2,
                                                                    (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
        return System_String__Join_62416876((System_String_o *)StringLiteral_43/*"\n"*/, v79, 0LL);
      }
      if ( !v49->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v49, v45);
        v49 = QuestRestrictionInfo___c_TypeInfo;
      }
      v77 = (Il2CppObject *)v49->static_fields->__9;
      _9__106_2 = (System_Func_TSource__TResult__o *)sub_1BCAA2C(
                                                       System_Func_RestrictionEntity__string__TypeInfo,
                                                       v45,
                                                       v46,
                                                       v47);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__106_2,
        v77,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__106_2__,
        0LL);
      v78 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v78->__9__106_2 = (struct System_Func_RestrictionEntity__string__o *)_9__106_2;
      p__9__106_2 = (PartyOrganizationUtility_o *)&v78->__9__106_2;
    }
    else
    {
      _9__106_0 = (System_Func_object__bool__o *)static_fields->__9__106_0;
      if ( !_9__106_0 )
      {
        if ( !v49->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v49, v45);
          v49 = QuestRestrictionInfo___c_TypeInfo;
        }
        v52 = (Il2CppObject *)v49->static_fields->__9;
        _9__106_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                     System_Func_RestrictionEntity__bool__TypeInfo,
                                                     v45,
                                                     v46,
                                                     v47);
        System_Func_object__bool____ctor(
          _9__106_0,
          v52,
          Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__106_0__,
          0LL);
        v53 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v53->__9__106_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__106_0;
        sub_1BCA784((PartyOrganizationUtility_o *)&v53->__9__106_0, (int64_t)_9__106_0, v54, v55, v56, v57, v58, v59);
      }
      v60 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
              (System_Func_TSource__bool__o *)_9__106_0,
              (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v64 = QuestRestrictionInfo___c_TypeInfo;
      RestrictionMessageEntityList = (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)v60;
      if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, v61);
        v64 = QuestRestrictionInfo___c_TypeInfo;
      }
      _9__106_2 = (System_Func_TSource__TResult__o *)v64->static_fields->__9__106_1;
      if ( _9__106_2 )
        goto LABEL_61;
      if ( !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64, v61);
        v64 = QuestRestrictionInfo___c_TypeInfo;
      }
      v66 = (Il2CppObject *)v64->static_fields->__9;
      _9__106_2 = (System_Func_TSource__TResult__o *)sub_1BCAA2C(
                                                       System_Func_RestrictionEntity__string__TypeInfo,
                                                       v61,
                                                       v62,
                                                       v63);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__106_2,
        v66,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__106_1__,
        0LL);
      v73 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v73->__9__106_1 = (struct System_Func_RestrictionEntity__string__o *)_9__106_2;
      p__9__106_2 = (PartyOrganizationUtility_o *)&v73->__9__106_1;
    }
    sub_1BCA784(p__9__106_2, (int64_t)_9__106_2, v67, v68, v69, v70, v71, v72);
    goto LABEL_61;
  }
  if ( initPos >= 1 )
  {
    slotInfos = v8->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_64;
    v30 = initPos - 1LL;
    if ( (unsigned int)v30 >= slotInfos->max_length )
      goto LABEL_63;
    v31 = slotInfos->m_Items[v30];
    if ( !v31 )
      goto LABEL_64;
    this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v31->fields.summary, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v75 = v8->fields.slotInfos;
      if ( v75 )
      {
        if ( (unsigned int)v30 >= v75->max_length )
          goto LABEL_63;
        v76 = v75->m_Items[v30];
        if ( v76 )
          return v76->fields.summary;
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
    sub_1BCAA3C(this, *(_QWORD *)&initPos);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return v8->fields.confirmRestrictionMessage;
  v34 = 0;
  v35 = pos - 1LL;
  while ( 1 )
  {
    if ( v34 >= max_length )
      goto LABEL_63;
    v36 = restrictionWholeEntities->m_Items[v34];
    if ( !v36 )
      goto LABEL_64;
    type = v36->fields.type;
    if ( (unsigned int)(type - 4) >= 4 )
    {
      if ( type != 8 )
        goto LABEL_36;
      this = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&initPos);
        this = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
      }
      if ( this->fields.uniqueSvtRestrictionEntity[2].fields.type >= pos )
      {
        v42 = v8->fields.slotInfos;
        if ( !v42 )
          goto LABEL_64;
        if ( (unsigned int)v35 >= v42->max_length )
          goto LABEL_63;
        v43 = v42->m_Items[v35];
        if ( !v43 )
          goto LABEL_64;
        if ( v43->fields.slotType != 5 )
        {
          this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v36->fields.summary, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            return v36->fields.summary;
        }
      }
    }
    targetVals2 = v36->fields.targetVals2;
    if ( !targetVals2 )
      goto LABEL_64;
    if ( (unsigned int)*(_QWORD *)&targetVals2->max_length == 1 )
    {
      v39 = 0LL;
      v40 = 1;
      v41 = 1;
      while ( v39 < v41 )
      {
        if ( targetVals2->m_Items[v39 + 1] == pos )
        {
          this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v36->fields.summary, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            return v36->fields.summary;
          v40 = targetVals2->max_length;
        }
        ++v39;
        v41 = v40;
        if ( (__int64)v39 >= v40 )
          goto LABEL_36;
      }
LABEL_63:
      sub_1BCAA44(this, *(_QWORD *)&initPos);
    }
LABEL_36:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v34 >= max_length )
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
      sub_1BCAA44(this, svtId);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x20
  int64_t Instance; // x0
  __int64 id; // x1
  struct RestrictionMessageEntity_array *restrictionMessageEntities; // x22
  int v23; // w8
  unsigned int v24; // w23
  RestrictionMessageEntity_o *v25; // x29
  int32_t frequencyType; // w8
  __int64 v27; // x1
  Il2CppObject *v28; // x21
  UserQuestEntity_o *v29; // x21
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  int max_length; // w9
  int v35; // w23
  int32_t v36; // w21
  int32_t *v37; // x29
  int32_t v38; // w8
  __int64 v39; // x1
  Il2CppObject *MasterData_object; // x22
  UserQuestEntity_o *v41; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10

  if ( (byte_4B1738E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v17, v18);
    byte_4B1738E = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !this->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
      goto LABEL_59;
    max_length = questRestrictionEntityList->max_length;
    v35 = max_length - 1;
    if ( max_length < 1 )
      goto LABEL_57;
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= questRestrictionEntityList->max_length )
LABEL_60:
        sub_1BCAA44(Instance, id);
      v37 = (int32_t *)questRestrictionEntityList->m_Items[v36];
      if ( !v37 )
        goto LABEL_59;
      v38 = v37[7];
      if ( v38 == 1 )
        break;
      if ( v38 == 2 )
      {
        Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !Instance )
          goto LABEL_59;
        Instance = PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                     (PartyOrganizationUtility_o *)Instance,
                     v37[4],
                     v37[5],
                     v37[6],
                     1,
                     0LL);
        if ( (Instance & 1) == 0 )
          goto LABEL_49;
      }
      else if ( v38 == 3 )
      {
        goto LABEL_49;
      }
LABEL_54:
      if ( v35 == v36 )
        goto LABEL_57;
      questRestrictionEntityList = this->fields.questRestrictionEntityList;
      ++v36;
      if ( !questRestrictionEntityList )
        goto LABEL_59;
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_59;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v39);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_59;
    Instance = (int64_t)UserQuestMaster__getEntityFromId((UserQuestMaster_o *)MasterData_object, Instance, v37[4], 0LL);
    if ( Instance )
    {
      v41 = (UserQuestEntity_o *)Instance;
      Instance = UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
      if ( (_DWORD)Instance )
        goto LABEL_54;
      Instance = UserQuestEntity__HasStatus(v41, 16, 0LL);
      if ( (Instance & 1) != 0 )
        goto LABEL_54;
    }
LABEL_49:
    if ( !v19 )
      goto LABEL_59;
    items = v19->fields._items;
    v43 = Method_System_Collections_Generic_List_int__Add__;
    ++v19->fields._version;
    if ( !items )
      goto LABEL_59;
    size = v19->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v19,
        v36,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v19->fields._size = size + 1;
      items->m_Items[size + 1] = v36;
    }
    goto LABEL_54;
  }
  restrictionMessageEntities = this->fields.restrictionMessageEntities;
  if ( !restrictionMessageEntities )
    goto LABEL_59;
  v23 = restrictionMessageEntities->max_length;
  if ( v23 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= v23 )
        goto LABEL_60;
      v25 = restrictionMessageEntities->m_Items[v24];
      if ( !v25 )
        goto LABEL_59;
      frequencyType = v25->fields.frequencyType;
      if ( frequencyType != 1 )
        break;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_59;
      v28 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v28 )
        goto LABEL_59;
      Instance = (int64_t)UserQuestMaster__getEntityFromId(
                            (UserQuestMaster_o *)v28,
                            Instance,
                            this->fields.questId,
                            0LL);
      if ( !Instance )
        goto LABEL_23;
      v29 = (UserQuestEntity_o *)Instance;
      Instance = UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
      if ( !(_DWORD)Instance )
      {
        Instance = UserQuestEntity__HasStatus(v29, 16, 0LL);
        if ( (Instance & 1) == 0 )
          goto LABEL_23;
      }
LABEL_28:
      v23 = restrictionMessageEntities->max_length;
      if ( (int)++v24 >= v23 )
        goto LABEL_57;
    }
    if ( frequencyType == 2 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_59;
      Instance = PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                   (PartyOrganizationUtility_o *)Instance,
                   this->fields.questId,
                   this->fields.questPhase,
                   v25->fields.id,
                   1,
                   0LL);
      if ( (Instance & 1) != 0 )
        goto LABEL_28;
    }
    else if ( frequencyType != 3 )
    {
      goto LABEL_28;
    }
LABEL_23:
    if ( !v19 )
      goto LABEL_59;
    id = (unsigned int)v25->fields.id;
    v30 = v19->fields._items;
    v31 = Method_System_Collections_Generic_List_int__Add__;
    ++v19->fields._version;
    if ( !v30 )
      goto LABEL_59;
    v32 = v19->fields._size;
    if ( (unsigned int)v32 >= v30->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v19,
        id,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v19->fields._size = v32 + 1;
      v30->m_Items[v32 + 1] = id;
    }
    goto LABEL_28;
  }
LABEL_57:
  if ( !v19 )
LABEL_59:
    sub_1BCAA3C(Instance, id);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4B1738F & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, *(_QWORD *)&n, method);
    byte_4B1738F = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
LABEL_20:
        sub_1BCAA44(this, *(_QWORD *)&n);
      v11 = questRestrictionEntityList->m_Items[n];
      if ( v11 )
      {
        p_dialogMessage = &v11->fields.dialogMessage;
        return *p_dialogMessage;
      }
    }
LABEL_19:
    sub_1BCAA3C(this, *(_QWORD *)&n);
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


// local variable allocation has failed, the output may be wrong!
QuestRestrictionInfo_DialogMessageInfo_o *__fastcall QuestRestrictionInfo__GetDialogMessageInfo(
        QuestRestrictionInfo_o *this,
        int32_t messageId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *v9; // x0

  if ( (byte_4B173A5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__,
      *(_QWORD *)&messageId,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__,
      v5,
      v6);
    byte_4B173A5 = 1;
  }
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary
    || !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
          messageId,
          (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
  {
    return 0LL;
  }
  v9 = this->fields.dialogMessageInfoDictionary;
  if ( !v9 )
    sub_1BCAA3C(0LL, v8);
  return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_int__object__o *)v9,
                                                       messageId,
                                                       (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageMySvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRestrictionInfo_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_monitor; // x20
  unsigned int v13; // w21
  RestrictionWholeEntity_o *v14; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4B173A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v6, v7);
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B173A8 = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v3->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_19;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1BCAA44(this, method);
      v14 = restrictionWholeEntities->m_Items[v13];
      if ( !v14 )
        goto LABEL_19;
      if ( v14->fields.type == 5 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v14->fields.restrictionMessageId,
                                           (const MethodInfo_31B2E94 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v13 >= max_length )
        return *p_monitor;
    }
    if ( entity )
    {
      p_monitor = (System_String_o **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_19:
    sub_1BCAA3C(this, method);
  }
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_monitor;
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageSupportSvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRestrictionInfo_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_monitor; // x20
  unsigned int v13; // w21
  RestrictionWholeEntity_o *v14; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4B173AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v6, v7);
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B173AA = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v3->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_19;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1BCAA44(this, method);
      v14 = restrictionWholeEntities->m_Items[v13];
      if ( !v14 )
        goto LABEL_19;
      if ( v14->fields.type == 6 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v14->fields.restrictionMessageId,
                                           (const MethodInfo_31B2E94 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v13 >= max_length )
        return *p_monitor;
    }
    if ( entity )
    {
      p_monitor = (System_String_o **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_19:
    sub_1BCAA3C(this, method);
  }
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_monitor;
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageSvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRestrictionInfo_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_monitor; // x20
  unsigned int v13; // w21
  RestrictionWholeEntity_o *v14; // x25
  int32_t type; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4B173A7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v6, v7);
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B173A7 = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v3->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_20;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1BCAA44(this, method);
      v14 = restrictionWholeEntities->m_Items[v13];
      if ( !v14 )
        goto LABEL_20;
      type = v14->fields.type;
      if ( type == 8 || type == 4 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v14->fields.restrictionMessageId,
                                           (const MethodInfo_31B2E94 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v13 >= max_length )
        return *p_monitor;
    }
    if ( entity )
    {
      p_monitor = (System_String_o **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_20:
    sub_1BCAA3C(this, method);
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
  __int64 v5; // x1
  __int64 v6; // x2
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v8; // x19
  System_String_o **p_title; // x20
  unsigned int v10; // w21
  __int64 v11; // x22
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  QuestRestrictionEntity_o *v13; // x8

  v4 = this;
  if ( (byte_4B17390 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__,
      *(_QWORD *)&n,
      method);
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B17390 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
LABEL_21:
        sub_1BCAA44(this, *(_QWORD *)&n);
      v13 = questRestrictionEntityList->m_Items[n];
      if ( v13 )
      {
        p_title = &v13->fields.title;
        return *p_title;
      }
    }
LABEL_20:
    sub_1BCAA3C(this, *(_QWORD *)&n);
  }
  this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
  if ( !this )
    goto LABEL_20;
  this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)this,
                                     n,
                                     (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
  if ( !this )
    goto LABEL_20;
  dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
  v8 = this;
  if ( dialogMessageInfoDictionary < 1 )
  {
    p_title = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    p_title = (System_String_o **)&StringLiteral_1/*""*/;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= dialogMessageInfoDictionary )
        goto LABEL_21;
      v11 = *((_QWORD *)&v8->fields.eventId + (int)v10);
      if ( !v11 )
        goto LABEL_20;
      this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v11 + 32), 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      dialogMessageInfoDictionary = (int)v8->fields.dialogMessageInfoDictionary;
      if ( (int)++v10 >= dialogMessageInfoDictionary )
        return *p_title;
    }
    p_title = (System_String_o **)(v11 + 32);
  }
  return *p_title;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA44(this, n);
  v5 = restrictionEntityList->m_Items[n];
  if ( !v5 )
LABEL_7:
    sub_1BCAA3C(this, *(_QWORD *)&n);
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
      sub_1BCAA3C(this, message);
    max_length = questRestrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= questRestrictionEntityList->max_length )
          sub_1BCAA44(this, message);
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
    sub_1BCA784((PartyOrganizationUtility_o *)message, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1BCA784((PartyOrganizationUtility_o *)message, (int64_t)noticeMessage, (int64_t)method, v3, v4, v5, v6, v7);
  return 1;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B1739A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10446/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, v3, v4);
    byte_4B1739A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10446/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B17399 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10447/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, v3, v4);
    byte_4B17399 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10447/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetFixedMyServantPositionCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B173B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____GetEnumerator__, v8, v9);
    byte_4B173B0 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v15.fields._current[1].monitor) )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v12 )
      break;
    if ( !v15.fields._current )
      sub_1BCAA3C(v12, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedMyServantPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x19
  __int64 v20; // x1
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B173AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&idx, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    byte_4B173AD = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0LL;
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&idx,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v22 )
      break;
    if ( !v19 )
      sub_1BCAA3C(v22, v23);
    System_Collections_Generic_List_int___AddRange(
      v19,
      (System_Collections_Generic_IEnumerable_T__o *)v25.fields._current,
      (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v19 )
LABEL_15:
    sub_1BCAA3C(fixedMyServantIndividualitiesList, v20);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Int32_array *fixedMyServantSingleIndividualities; // x8
  int32_t ServantImageLimitSealAfter; // w22
  ServantEntity_o *v21; // x20
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v23; // x21
  unsigned int v24; // w24
  RestrictionSlotDetailEntity_o *v25; // x23
  System_Int32_array *Individuality; // x0
  struct RestrictionEntity_o *fixedMyServantSingleRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  int32_t max_length; // w9

  v10 = this;
  if ( (byte_4B1738B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v15, v16);
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B1738B = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !*(_QWORD *)&fixedMyServantSingleIndividualities->max_length )
      return 0;
    this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       svtId,
                                       dispLimitCount,
                                       0LL);
        this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( this )
          {
            this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               svtId,
                                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v21 = (ServantEntity_o *)this;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
              if ( this )
              {
                dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
                v23 = this;
                if ( dialogMessageInfoDictionary >= 1 )
                {
                  v24 = 0;
                  while ( 1 )
                  {
                    if ( v24 >= dialogMessageInfoDictionary )
                      goto LABEL_30;
                    v25 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v23->fields.eventId + (int)v24);
                    if ( !v25 )
                      goto LABEL_29;
                    if ( v25->fields.type == 1 )
                    {
                      if ( !v21 )
                        goto LABEL_29;
                      Individuality = ServantEntity__getIndividuality(v21, limitCount, ServantImageLimitSealAfter, 0LL);
                      this = (QuestRestrictionInfo_o *)RestrictionSlotDetailEntity__IsIndividuality(
                                                         v25,
                                                         Individuality,
                                                         0LL);
                      if ( ((unsigned __int8)this & 1) == 0 )
                        return 1;
                    }
                    dialogMessageInfoDictionary = (int)v23->fields.dialogMessageInfoDictionary;
                    if ( (int)++v24 >= dialogMessageInfoDictionary )
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
    sub_1BCAA3C(this, *(_QWORD *)&svtId);
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
    sub_1BCAA44(this, *(_QWORD *)&svtId);
  return targetVals->m_Items[num + 1] != svtId;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B1738C & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10445/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, v3, v4);
    byte_4B1738C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10445/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_int____o *fixedIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B173B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____GetEnumerator__, v8, v9);
    byte_4B173B2 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v15.fields._current[1].monitor) )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v12 )
      break;
    if ( !v15.fields._current )
      sub_1BCAA3C(v12, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x19
  __int64 v20; // x1
  struct System_Collections_Generic_List_int____o *fixedIndividualitiesList; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B173AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&idx, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    byte_4B173AF = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0LL;
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&idx,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v22 )
      break;
    if ( !v19 )
      sub_1BCAA3C(v22, v23);
    System_Collections_Generic_List_int___AddRange(
      v19,
      (System_Collections_Generic_IEnumerable_T__o *)v25.fields._current,
      (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v19 )
LABEL_15:
    sub_1BCAA3C(fixedIndividualitiesList, v20);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestRestrictionInfo__GetFixedServantPositionCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int v11; // w22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  int32_t v17; // w20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B17388 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____GetEnumerator__, v8, v9);
    byte_4B17388 = 1;
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v11 = 0;
    for ( i = v21; ; v11 += LODWORD(i.fields._current[1].monitor) )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v12 )
        break;
      if ( !i.fields._current )
        sub_1BCAA3C(v12, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  }
  else
  {
    v11 = 0;
  }
  v17 = v11 + this->fields.isNeedStarting;
  if ( !this->fields.isFixedPosition )
    return v17;
  fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
LABEL_30:
    sub_1BCAA3C(fixedMyServantIndividualitiesList, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v21; ; v17 += LODWORD(i.fields._current[1].monitor) )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v18 )
      break;
    if ( !i.fields._current )
      sub_1BCAA3C(v18, v19);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v17;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B1738A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10444/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, v3, v4);
    byte_4B1738A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10444/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, 0LL);
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *v21; // x19
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  __int64 v23; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B17387 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v19, v20);
    byte_4B17387 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( this->fields.restrictionBaseEntity )
  {
    v21 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
    System_Collections_Generic_List_int____ctor(
      v21,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( this->fields.isFixedMyServantPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v32,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v32;
            ;
            System_Collections_Generic_List_int___AddRange(
              v21,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v24 )
          break;
        if ( !v21 )
          sub_1BCAA3C(v24, v25);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isNeedStarting )
    {
      fixedMyServantIndividualitiesList = this->fields.needStartingIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v32,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v32;
            ;
            System_Collections_Generic_List_int___AddRange(
              v21,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v26 )
          break;
        if ( !v21 )
          sub_1BCAA3C(v26, v27);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isFixedPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v32,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v32;
            ;
            System_Collections_Generic_List_int___AddRange(
              v21,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v28 )
          break;
        if ( !v21 )
          sub_1BCAA3C(v28, v29);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( v21 )
    {
      if ( v21->fields._size > 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v21,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
      return 0LL;
    }
LABEL_38:
    sub_1BCAA3C(fixedMyServantIndividualitiesList, v23);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B17386 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10449/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, v3, v4);
    byte_4B17386 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10449/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, 0LL);
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
  if ( (byte_4B17372 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, *(_QWORD *)&restrictionWholeType, method);
    byte_4B17372 = 1;
  }
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_15:
    sub_1BCAA3C(this, *(_QWORD *)&restrictionWholeType);
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
        sub_1BCAA44(this, *(_QWORD *)&restrictionWholeType);
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
System_String_o *__fastcall QuestRestrictionInfo__GetMessage_41171160(
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
  if ( (byte_4B17373 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, *(_QWORD *)&restrictionType, method);
    byte_4B17373 = 1;
  }
  restrictionEntityList = v4->fields.restrictionEntityList;
  if ( !restrictionEntityList )
LABEL_15:
    sub_1BCAA3C(this, *(_QWORD *)&restrictionType);
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
        sub_1BCAA44(this, *(_QWORD *)&restrictionType);
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_object__o *v41; // x20
  void *IsNullOrEmpty; // x0
  System_String_o *summary; // x1
  System_String_o *v44; // x26
  System_String_o *v45; // x27
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x22
  int max_length; // w8
  unsigned int v78; // w23
  RestrictionWholeEntity_o *v79; // x29
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  int v90; // w8
  void *v91; // x21
  unsigned int v92; // w22
  __int64 v93; // x26
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  System_String_o *v100; // x0
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  Il2CppClass **v104; // x0

  if ( (byte_4B17370 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      *(_QWORD *)&pos,
      isNoneTitle);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v27, v28);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_10419/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_11217/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_11218/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_11214/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_6541/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v39, v40);
    byte_4B17370 = 1;
  }
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       *(_QWORD *)&pos,
                                                       isNoneTitle,
                                                       isSlotOnly);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_98;
  if ( !isSlotOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, summary);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_6541/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11218/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
    v45 = (System_String_o *)IsNullOrEmpty;
    if ( !this->fields.isUniqueServant )
      goto LABEL_20;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, summary);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11217/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0LL);
    summary = (System_String_o *)IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( uniqueServant )
        goto LABEL_12;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v44, (Il2CppObject *)IsNullOrEmpty, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( uniqueServant )
      {
LABEL_12:
        IsNullOrEmpty = System_String__Concat_62401220(summary, v45, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v41 )
          goto LABEL_100;
        goto LABEL_16;
      }
    }
    if ( !v41 )
      goto LABEL_100;
LABEL_16:
    items = v41->fields._items;
    v53 = Method_System_Collections_Generic_List_string__Add__;
    ++v41->fields._version;
    if ( !items )
      goto LABEL_100;
    size = v41->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v41,
        (Il2CppObject *)summary,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &items->obj.klass + size;
      v41->fields._size = size + 1;
      v55[4] = (Il2CppClass *)summary;
      sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)summary, v46, v47, v48, v49, v50, v51);
    }
LABEL_20:
    if ( !this->fields.isFatigure )
      goto LABEL_33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, summary);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11214/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
    summary = (System_String_o *)IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( fatigue )
        goto LABEL_25;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v44, (Il2CppObject *)IsNullOrEmpty, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( fatigue )
      {
LABEL_25:
        IsNullOrEmpty = System_String__Concat_62401220(summary, v45, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v41 )
          goto LABEL_100;
        goto LABEL_29;
      }
    }
    if ( !v41 )
      goto LABEL_100;
LABEL_29:
    v62 = v41->fields._items;
    v63 = Method_System_Collections_Generic_List_string__Add__;
    ++v41->fields._version;
    if ( !v62 )
      goto LABEL_100;
    v64 = v41->fields._size;
    if ( (unsigned int)v64 >= v62->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v41,
        (Il2CppObject *)summary,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    }
    else
    {
      v65 = &v62->obj.klass + v64;
      v41->fields._size = v64 + 1;
      v65[4] = (Il2CppClass *)summary;
      sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 4), (int64_t)summary, v56, v57, v58, v59, v60, v61);
    }
LABEL_33:
    if ( !this->fields.isNotSingleSupportOnly )
      goto LABEL_46;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, summary);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10419/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
    summary = (System_String_o *)IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( singleSupport )
        goto LABEL_38;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v44, (Il2CppObject *)IsNullOrEmpty, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( singleSupport )
      {
LABEL_38:
        IsNullOrEmpty = System_String__Concat_62401220(summary, v45, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v41 )
          goto LABEL_100;
        goto LABEL_42;
      }
    }
    if ( !v41 )
      goto LABEL_100;
LABEL_42:
    v72 = v41->fields._items;
    v73 = Method_System_Collections_Generic_List_string__Add__;
    ++v41->fields._version;
    if ( !v72 )
      goto LABEL_100;
    v74 = v41->fields._size;
    if ( (unsigned int)v74 >= v72->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v41,
        (Il2CppObject *)summary,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = &v72->obj.klass + v74;
      v41->fields._size = v74 + 1;
      v75[4] = (Il2CppClass *)summary;
      sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 4), (int64_t)summary, v66, v67, v68, v69, v70, v71);
    }
LABEL_46:
    restrictionWholeEntities = this->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_100;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v78 = 0;
      while ( v78 < max_length )
      {
        v79 = restrictionWholeEntities->m_Items[v78];
        if ( !v79 )
          goto LABEL_100;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(v79->fields.summary, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            summary = v79->fields.summary;
          }
          else
          {
            IsNullOrEmpty = System_String__Format(v44, (Il2CppObject *)v79->fields.summary, 0LL);
            summary = (System_String_o *)IsNullOrEmpty;
          }
          switch ( v79->fields.type )
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
                IsNullOrEmpty = System_String__Concat_62401220(summary, v45, 0LL);
                summary = (System_String_o *)IsNullOrEmpty;
              }
              break;
            default:
              break;
          }
          if ( !v41 )
            goto LABEL_100;
          v86 = v41->fields._items;
          v87 = Method_System_Collections_Generic_List_string__Add__;
          ++v41->fields._version;
          if ( !v86 )
            goto LABEL_100;
          v88 = v41->fields._size;
          if ( (unsigned int)v88 >= v86->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v41,
              (Il2CppObject *)summary,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
          }
          else
          {
            v89 = &v86->obj.klass + v88;
            v41->fields._size = v88 + 1;
            v89[4] = (Il2CppClass *)summary;
            sub_1BCA784((PartyOrganizationUtility_o *)(v89 + 4), (int64_t)summary, v80, v81, v82, v83, v84, v85);
          }
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v78 >= max_length )
          goto LABEL_79;
      }
LABEL_101:
      sub_1BCAA44(IsNullOrEmpty, summary);
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
                            (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0LL )
    {
LABEL_100:
      sub_1BCAA3C(IsNullOrEmpty, summary);
    }
    v90 = *((_DWORD *)IsNullOrEmpty + 6);
    v91 = IsNullOrEmpty;
    if ( v90 >= 1 )
    {
      v92 = 0;
      while ( v92 < v90 )
      {
        v93 = *((_QWORD *)v91 + (int)v92 + 4);
        if ( !v93 )
          goto LABEL_100;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(*(System_String_o **)(v93 + 24), 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            summary = *(System_String_o **)(v93 + 24);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, summary);
            v100 = LocalizationManager__Get((System_String_o *)StringLiteral_6541/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
            IsNullOrEmpty = System_String__Format(v100, *(Il2CppObject **)(v93 + 24), 0LL);
            summary = (System_String_o *)IsNullOrEmpty;
          }
          if ( !v41 )
            goto LABEL_100;
          v101 = v41->fields._items;
          v102 = Method_System_Collections_Generic_List_string__Add__;
          ++v41->fields._version;
          if ( !v101 )
            goto LABEL_100;
          v103 = v41->fields._size;
          if ( (unsigned int)v103 >= v101->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v41,
              (Il2CppObject *)summary,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
          }
          else
          {
            v104 = &v101->obj.klass + v103;
            v41->fields._size = v103 + 1;
            v104[4] = (Il2CppClass *)summary;
            sub_1BCA784((PartyOrganizationUtility_o *)(v104 + 4), (int64_t)summary, v94, v95, v96, v97, v98, v99);
          }
        }
        v90 = *((_DWORD *)v91 + 6);
        if ( (int)++v92 >= v90 )
          goto LABEL_98;
      }
      goto LABEL_101;
    }
  }
LABEL_98:
  if ( !v41 )
    goto LABEL_100;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v41,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall QuestRestrictionInfo__GetMessages_41169892(
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  System_String_o *v34; // x28
  System_String_o *v35; // x25
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x26
  System_String_o *IsNullOrEmpty; // x0
  System_String_o *name; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0
  signed int max_length; // w8
  unsigned int v63; // w19
  RestrictionEntity_o *v64; // x27
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0

  if ( (byte_4B17371 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, entities, isNoneTitle);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v22, v23);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_10419/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_11218/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_11214/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_6541/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v32, v33);
    byte_4B17371 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, entities);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_6541/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11218/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isSlotOnly || !this->fields.isFatigure )
    goto LABEL_19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, name);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11214/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
  name = IsNullOrEmpty;
  if ( isNoneTitle )
  {
    if ( !fatigue )
      goto LABEL_11;
  }
  else
  {
    IsNullOrEmpty = System_String__Format(v34, (Il2CppObject *)IsNullOrEmpty, 0LL);
    name = IsNullOrEmpty;
    if ( !fatigue )
    {
LABEL_11:
      if ( !v39 )
        goto LABEL_64;
      goto LABEL_15;
    }
  }
  IsNullOrEmpty = System_String__Concat_62401220(name, v35, 0LL);
  name = IsNullOrEmpty;
  if ( !v39 )
    goto LABEL_64;
LABEL_15:
  items = v39->fields._items;
  v49 = Method_System_Collections_Generic_List_string__Add__;
  ++v39->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v39->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v39,
      (Il2CppObject *)name,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = &items->obj.klass + size;
    v39->fields._size = size + 1;
    v51[4] = (Il2CppClass *)name;
    sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)name, v42, v43, v44, v45, v46, v47);
  }
LABEL_19:
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, name);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10419/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
    name = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = System_String__Format(v34, (Il2CppObject *)IsNullOrEmpty, 0LL);
      name = IsNullOrEmpty;
    }
    if ( singleSupport )
    {
      IsNullOrEmpty = System_String__Concat_62401220(name, v35, 0LL);
      name = IsNullOrEmpty;
    }
    if ( !v39 )
      goto LABEL_64;
    v58 = v39->fields._items;
    v59 = Method_System_Collections_Generic_List_string__Add__;
    ++v39->fields._version;
    if ( !v58 )
      goto LABEL_64;
    v60 = v39->fields._size;
    if ( (unsigned int)v60 >= v58->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v39,
        (Il2CppObject *)name,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &v58->obj.klass + v60;
      v39->fields._size = v60 + 1;
      v61[4] = (Il2CppClass *)name;
      sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)name, v52, v53, v54, v55, v56, v57);
    }
  }
  if ( !entities )
    goto LABEL_64;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v63 = 0;
    while ( 1 )
    {
      if ( v63 >= max_length )
        sub_1BCAA44(IsNullOrEmpty, name);
      v64 = entities->m_Items[v63];
      if ( !v64 )
        break;
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v64->fields.name, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( isNoneTitle )
        {
          name = v64->fields.name;
        }
        else
        {
          IsNullOrEmpty = RestrictionEntity__getTitle(v64, 0LL);
          name = IsNullOrEmpty;
        }
        switch ( v64->fields.type )
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
              IsNullOrEmpty = System_String__Concat_62401220(name, v35, 0LL);
              name = IsNullOrEmpty;
            }
            break;
          default:
            break;
        }
        if ( !v39 )
          break;
        v71 = v39->fields._items;
        v72 = Method_System_Collections_Generic_List_string__Add__;
        ++v39->fields._version;
        if ( !v71 )
          break;
        v73 = v39->fields._size;
        if ( (unsigned int)v73 >= v71->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v39,
            (Il2CppObject *)name,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v74 = &v71->obj.klass + v73;
          v39->fields._size = v73 + 1;
          v74[4] = (Il2CppClass *)name;
          sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 4), (int64_t)name, v65, v66, v67, v68, v69, v70);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v63 >= max_length )
        goto LABEL_62;
    }
LABEL_64:
    sub_1BCAA3C(IsNullOrEmpty, name);
  }
LABEL_62:
  if ( !v39 )
    goto LABEL_64;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v39,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  unsigned int v16; // w21
  RestrictionWholeEntity_o *v17; // x25
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int32_t v19; // w20
  int32_t v20; // w9
  QuestRestrictionInfo_SlotInfo_o *v21; // x8
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v23; // x21
  unsigned int v24; // w27
  __int64 v25; // x28
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int v27; // w9
  unsigned int v28; // w10
  RestrictionEntity_o *v29; // x11
  Il2CppObject *v31; // x8
  Il2CppObject *v32; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_4B17398 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v10, v11);
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    byte_4B17398 = 1;
  }
  entity = 0LL;
  v32 = 0LL;
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
      v19 = 0;
      while ( 1 )
      {
        v20 = slotInfos->max_length;
        if ( v19 >= v20 )
          return (System_String_o *)StringLiteral_1/*""*/;
        if ( v19 >= (unsigned int)v20 )
          goto LABEL_56;
        v21 = slotInfos->m_Items[v19];
        if ( !v21 )
          goto LABEL_55;
        if ( v21->fields.slotType )
        {
          ++v19;
        }
        else
        {
          this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
          if ( !this )
            goto LABEL_55;
          this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                             (System_Collections_Generic_Dictionary_int__object__o *)this,
                                             ++v19,
                                             (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
            if ( !this )
              goto LABEL_55;
            this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                               (System_Collections_Generic_Dictionary_int__object__o *)this,
                                               v19,
                                               (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
            if ( !this )
              goto LABEL_55;
            dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
            v23 = this;
            if ( dialogMessageInfoDictionary >= 1 )
            {
              v24 = 0;
              while ( 1 )
              {
                if ( v24 >= dialogMessageInfoDictionary )
                  goto LABEL_56;
                v25 = *((_QWORD *)&v23->fields.eventId + (int)v24);
                if ( !v25 )
                  goto LABEL_55;
                if ( *(_DWORD *)(v25 + 44) && !*(_DWORD *)(v25 + 40) )
                {
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
                  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
                  if ( !this )
                    goto LABEL_55;
                  this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     &v32,
                                                     *(_DWORD *)(v25 + 44),
                                                     (const MethodInfo_31B2E94 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    break;
                }
                dialogMessageInfoDictionary = (int)v23->fields.dialogMessageInfoDictionary;
                if ( (int)++v24 >= dialogMessageInfoDictionary )
                  goto LABEL_37;
              }
              v31 = v32;
              if ( v32 )
                return (System_String_o *)v31[1].monitor;
LABEL_55:
              sub_1BCAA3C(this, method);
            }
          }
        }
LABEL_37:
        slotInfos = v3->fields.slotInfos;
        if ( !slotInfos )
          goto LABEL_55;
      }
    }
    v16 = 0;
    while ( v16 < max_length )
    {
      v17 = restrictionWholeEntities->m_Items[v16];
      if ( !v17 )
        goto LABEL_55;
      if ( v17->fields.type == 3 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_55;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v17->fields.restrictionMessageId,
                                           (const MethodInfo_31B2E94 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v31 = entity;
          if ( entity )
            return (System_String_o *)v31[1].monitor;
          goto LABEL_55;
        }
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_15;
    }
    goto LABEL_56;
  }
  restrictionEntityList = v3->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_55;
  v27 = restrictionEntityList->max_length;
  if ( v27 >= 1 )
  {
    v28 = 0;
    method = 0LL;
    while ( v28 < v27 )
    {
      v29 = restrictionEntityList->m_Items[v28];
      if ( !v29 )
        goto LABEL_55;
      if ( v29->fields.type == 11 )
        method = (const MethodInfo *)v28;
      else
        method = (const MethodInfo *)(unsigned int)method;
      if ( (int)++v28 >= v27 )
        return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v2);
    }
LABEL_56:
    sub_1BCAA44(this, method);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *RestrictedName; // x20
  System_String_o **v13; // x8
  System_String_o *v14; // x0

  if ( (byte_4B173A1 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&pos, haveIndividualityServant);
    sub_1BCA7E0(&StringLiteral_10451/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_10454/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/, v9, v10);
    byte_4B173A1 = 1;
  }
  RestrictedName = (Il2CppObject *)QuestRestrictionInfo__GetRestrictedName(
                                     this,
                                     pos,
                                     (const MethodInfo *)haveIndividualityServant);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
  if ( haveIndividualityServant )
    v13 = (System_String_o **)&StringLiteral_10451/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/;
  else
    v13 = (System_String_o **)&StringLiteral_10454/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/;
  v14 = LocalizationManager__Get(*v13, 0LL);
  return System_String__Format(v14, RestrictedName, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetMyServantOrNpcRestrictionNum(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRestrictionInfo_o *v3; // x19
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x8

  v3 = this;
  if ( (byte_4B173B5 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(
                                       &Method_System_Collections_Generic_List_RestrictionEntity__get_Count__,
                                       method,
                                       v2);
    byte_4B173B5 = 1;
  }
  if ( !v3->fields.isMyServantOrNpc && !v3->fields.isMyServantOrSupport )
    return 0;
  myServantOrNpcRestrictionEntityList = v3->fields.myServantOrNpcRestrictionEntityList;
  if ( !myServantOrNpcRestrictionEntityList )
    sub_1BCAA3C(this, method);
  return myServantOrNpcRestrictionEntityList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x21
  void *restrictionSlotDetailDictionary; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_List_int__o *v43; // x20
  int v44; // w8
  void *v45; // x19
  unsigned int v46; // w21
  __int64 v47; // x8
  System_Int32_array *CollectionList; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x1
  const MethodInfo_2F36730 *v51; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v54; // x20
  Il2CppObject *v55; // x0
  Il2CppObject *v56; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0

  if ( (byte_4B173A3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_int___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Intersect_int___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Predicate_RestrictionEntity__TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__DisplayClass186_0__GetMyServantOrNpcSvtIdList_b__0__, v28, v29);
    sub_1BCA7E0(&QuestRestrictionInfo___c__DisplayClass186_0_TypeInfo, v30, v31);
    byte_4B173A3 = 1;
  }
  v32 = sub_1BCAA2C(QuestRestrictionInfo___c__DisplayClass186_0_TypeInfo, *(_QWORD *)&index, method, v3);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !v32 )
    goto LABEL_29;
  *(_QWORD *)(v32 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 16), (int64_t)this, v35, v36, v37, v38, v39, v40);
  *(_DWORD *)(v32 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
  {
    v43 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v34,
                                                      v41,
                                                      v42);
    System_Collections_Generic_List_int____ctor(
      v43,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v32 + 24),
                                        (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    v44 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v45 = restrictionSlotDetailDictionary;
    if ( v44 >= 1 )
    {
      v46 = 0;
      while ( 1 )
      {
        if ( v46 >= v44 )
          sub_1BCAA44(restrictionSlotDetailDictionary, v34);
        v47 = *((_QWORD *)v45 + (int)v46 + 4);
        if ( !v47 )
          break;
        if ( *(_DWORD *)(v47 + 32) == 1 )
        {
          if ( !v43 )
            break;
          System_Collections_Generic_List_int___AddRange(
            v43,
            *(System_Collections_Generic_IEnumerable_T__o **)(v47 + 40),
            (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v44 = *((_DWORD *)v45 + 6);
        if ( (int)++v46 >= v44 )
          goto LABEL_15;
      }
LABEL_29:
      sub_1BCAA3C(restrictionSlotDetailDictionary, v34);
    }
LABEL_15:
    if ( !v43 )
      goto LABEL_29;
    if ( v43->fields._size >= 1 )
    {
      restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                          (DataManager_o *)restrictionSlotDetailDictionary,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList((ServantMaster_o *)restrictionSlotDetailDictionary, 0LL);
      monitor = System_Linq_Enumerable__Distinct_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v43,
                  (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___);
      v50 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v51 = (const MethodInfo_2F36730 *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v57 = System_Linq_Enumerable__Intersect_int_(monitor, v50, v51);
      return System_Linq_Enumerable__ToArray_int_(
               v57,
               (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
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
      v54 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_RestrictionEntity__TypeInfo, v34, v41, v42);
      System_Predicate_object____ctor(
        v54,
        (Il2CppObject *)v32,
        Method_QuestRestrictionInfo___c__DisplayClass186_0__GetMyServantOrNpcSvtIdList_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      v55 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v54,
              (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v55 )
      {
        v56 = v55;
        restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                            (DataManager_o *)restrictionSlotDetailDictionary,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        v50 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                     (ServantMaster_o *)restrictionSlotDetailDictionary,
                                                                     0LL);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v56[2].monitor;
        v51 = (const MethodInfo_2F36730 *)Method_System_Linq_Enumerable_Intersect_int___;
        goto LABEL_27;
      }
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
        QuestRestrictionInfo_o *this,
        System_Collections_Generic_Dictionary_int__FollowerInfo__o **npcInfoDictionary,
        int32_t index,
        bool indexIsPos,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x22
  DataManager_o *Instance; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_Generic_Dictionary_int__object__o *v59; // x23
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x1
  const MethodInfo *v67; // x2
  __int64 v68; // x3
  long double inited; // q0
  _QWORD *v70; // x23
  __int64 v71; // x8
  __int64 v72; // x0
  __int64 v73; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x23
  System_Int32_array *MyServantOrNpcSvtIdList; // x26
  System_Predicate_object__o *v76; // x24
  Il2CppObject *v77; // x0
  __int64 v78; // x1
  const MethodInfo *v79; // x2
  __int64 v80; // x3
  Il2CppObject *v81; // x23
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  int32_t MyServantOrSupportTargetPos; // w22
  long double v85; // q0
  _QWORD *v86; // x21
  __int64 v87; // x8
  __int64 v88; // x0
  __int64 v89; // x0
  System_Collections_Generic_List_int__o *v90; // x23
  __int64 v91; // x1
  FollowerInfo_array *QuestFollowerList; // x24
  Il2CppObject *Master_object; // x25
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v95; // x26
  int i; // w19
  FollowerInfo_o *v97; // x27
  DataManager_o *v98; // x28
  int32_t ReturnTypeByQuestId; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  const MethodInfo *v101; // x3
  System_Int32_array *OverwriteIndividuality; // x0
  const MethodInfo *v103; // x3
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x21
  struct System_Byte_array *masterDataBytes; // x29
  int32_t v106; // w0
  const MethodInfo *v107; // x6
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v108; // x21
  struct System_Byte_array *v109; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v111; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v113; // x29
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v114; // x21
  struct System_Byte_array *v115; // x28
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v116; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x0
  System_Collections_Generic_IEnumerable_TSource__o *first; // [xsp+0h] [xbp-80h]
  Il2CppObject *v121; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16

  if ( (byte_4B173AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, npcInfoDictionary, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v14, v15);
    sub_1BCA7E0(&DataManager_TypeInfo, v16, v17);
    sub_1BCA7E0(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v18,
      v19);
    sub_1BCA7E0(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__,
      v20,
      v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Intersect_int___, v30, v31);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v32, v33);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Union_int___, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v40, v41);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v42, v43);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44, v45);
    sub_1BCA7E0(&System_Predicate_RestrictionEntity__TypeInfo, v46, v47);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v48, v49);
    sub_1BCA7E0(
      &Method_QuestRestrictionInfo___c__DisplayClass200_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      v50,
      v51);
    sub_1BCA7E0(&QuestRestrictionInfo___c__DisplayClass200_0_TypeInfo, v52, v53);
    byte_4B173AC = 1;
  }
  v121 = 0LL;
  entity = 0LL;
  v54 = sub_1BCAA2C(
          QuestRestrictionInfo___c__DisplayClass200_0_TypeInfo,
          npcInfoDictionary,
          *(_QWORD *)&index,
          indexIsPos);
  System_Object___ctor((Il2CppObject *)v54, 0LL);
  if ( !v54 )
    goto LABEL_70;
  *(_DWORD *)(v54 + 16) = index;
  v59 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo,
                                                                  v56,
                                                                  v57,
                                                                  v58);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v59,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v59;
  sub_1BCA784((PartyOrganizationUtility_o *)npcInfoDictionary, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  v70 = Method_System_Array_Empty_int___;
  v71 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v71 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, v66);
    v71 = v70[7];
  }
  v72 = *(_QWORD *)(v71 + 16);
  if ( (*(_BYTE *)(v72 + 309) & 1) == 0 )
    v72 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v72 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v72, v66);
  v73 = *(_QWORD *)(v70[7] + 16LL);
  if ( (*(_BYTE *)(v73 + 309) & 1) == 0 )
    v73 = sub_1C1C6BC(inited);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v73 + 184);
    v76 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_RestrictionEntity__TypeInfo, v66, v67, v68);
    System_Predicate_object____ctor(
      v76,
      (Il2CppObject *)v54,
      Method_QuestRestrictionInfo___c__DisplayClass200_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      0LL);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_70;
    v77 = System_Collections_Generic_List_object___Find(
            myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v76,
            (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v77 )
    {
      v81 = v77;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_70;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_70;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)Instance,
                                                                              0LL);
      v83 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v81[2].monitor,
              CollectionList,
              (const MethodInfo_2F36730 *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v83,
                                  (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    MyServantOrSupportTargetPos = *(_DWORD *)(v54 + 16);
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(this, *(_DWORD *)(v54 + 16), v67);
    if ( !MyServantOrNpcSvtIdList )
    {
      v86 = Method_System_Array_Empty_int___;
      v87 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v87 )
      {
        sub_1C1C718(Method_System_Array_Empty_int___, v78);
        v87 = v86[7];
      }
      v88 = *(_QWORD *)(v87 + 16);
      if ( (*(_BYTE *)(v88 + 309) & 1) == 0 )
        v88 = sub_1C1C6BC(v85);
      if ( !*(_DWORD *)(v88 + 224) )
        v85 = j_il2cpp_runtime_class_init_0(v88, v78);
      v89 = *(_QWORD *)(v86[7] + 16LL);
      if ( (*(_BYTE *)(v89 + 309) & 1) == 0 )
        v89 = sub_1C1C6BC(v85);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v89 + 184);
    }
    MyServantOrSupportTargetPos = *(_DWORD *)(v54 + 16);
    if ( !this->fields.restrictionBaseEntity )
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
                                      this,
                                      MyServantOrSupportTargetPos,
                                      v79);
  }
  v90 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v78,
                                                    v79,
                                                    v80);
  System_Collections_Generic_List_int____ctor(
    v90,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !Instance )
    goto LABEL_70;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Instance,
                        this->fields.questId,
                        this->fields.questPhase,
                        0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v91);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList,
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___),
        !QuestFollowerList) )
  {
LABEL_70:
    sub_1BCAA3C(Instance, v56);
  }
  max_length = QuestFollowerList->max_length;
  if ( max_length >= 1 )
  {
    v95 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1BCAA44(Instance, v56);
      v97 = QuestFollowerList->m_Items[i];
      Instance = (DataManager_o *)FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
      if ( !v97 )
        goto LABEL_70;
      Instance = (DataManager_o *)FollowerInfo__getServantLeaderInfo(v97, 0, (int32_t)Instance, 0LL);
      if ( Instance )
      {
        if ( !v95 )
          goto LABEL_70;
        v98 = Instance;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                      v95,
                                      &entity,
                                      v97->fields.npcFollowerSvtId,
                                      (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
          NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v97, 0, ReturnTypeByQuestId, 0LL);
          Instance = (DataManager_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_41195344(
                                        this,
                                        NpcServantIndividuality,
                                        MyServantOrSupportTargetPos,
                                        v101);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            goto LABEL_68;
        }
        else
        {
          if ( !Master_object )
            goto LABEL_70;
          if ( !DataMasterBase_object__object__long___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                  &v121,
                  v97->fields.npcFollowerSvtId,
                  (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
            goto LABEL_74;
          Instance = (DataManager_o *)v121;
          if ( !v121 )
            goto LABEL_70;
          if ( !NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v121, 0LL) )
            goto LABEL_74;
          Instance = (DataManager_o *)v121;
          if ( !v121 )
            goto LABEL_70;
          OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                     (NpcServantFollowerEntity_o *)v121,
                                     0LL);
          if ( QuestRestrictionInfo__IsRestrictionServantIndividuality_41195344(
                 this,
                 OverwriteIndividuality,
                 MyServantOrSupportTargetPos,
                 v103) )
          {
LABEL_74:
            lookup = v98->fields.lookup;
            masterDataBytes = v98->fields.masterDataBytes;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v56);
            *(_QWORD *)&v123.fields.currentCryptoKey = lookup;
            *(_QWORD *)&v123.fields.fakeValue = masterDataBytes;
            v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v123, 0LL);
            Instance = (DataManager_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                          this,
                                          v106,
                                          (int32_t)v98->fields.saveNameList,
                                          HIDWORD(v98[1].monitor),
                                          MyServantOrSupportTargetPos,
                                          0,
                                          v107);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_68;
          }
        }
        v108 = v98->fields.lookup;
        v109 = v98->fields.masterDataBytes;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v56);
        *(_QWORD *)&v124.fields.currentCryptoKey = v108;
        *(_QWORD *)&v124.fields.fakeValue = v109;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v124, 0LL);
        if ( !v90 )
          goto LABEL_70;
        items = v90->fields._items;
        v111 = Method_System_Collections_Generic_List_int__Add__;
        ++v90->fields._version;
        if ( !items )
          goto LABEL_70;
        size = v90->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v90,
            (int32_t)Instance,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
        }
        else
        {
          v90->fields._size = size + 1;
          items->m_Items[size + 1] = (int)Instance;
        }
        v113 = *npcInfoDictionary;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v98->fields.lookup,
                                      0LL);
        if ( !v113 )
          goto LABEL_70;
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                      (System_Collections_Generic_Dictionary_int__object__o *)v113,
                                      (int32_t)Instance,
                                      (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v114 = v98->fields.lookup;
          v115 = v98->fields.masterDataBytes;
          v116 = *npcInfoDictionary;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v56);
          *(_QWORD *)&v125.fields.currentCryptoKey = v114;
          *(_QWORD *)&v125.fields.fakeValue = v115;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v125, 0LL);
          if ( !v116 )
            goto LABEL_70;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)v116,
            (int32_t)Instance,
            (Il2CppObject *)v97,
            (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
        }
      }
LABEL_68:
      max_length = QuestFollowerList->max_length;
    }
  }
  v117 = System_Linq_Enumerable__Union_int_(
           first,
           (System_Collections_Generic_IEnumerable_TSource__o *)v90,
           (const MethodInfo_2F4FC20 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v117,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetMyServantOrSupportRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        bool haveIndividualityServant,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 *v17; // x8
  int *MyServantOrNpcSvtIdList; // x0
  __int64 v19; // x1
  int v20; // w8
  int *v21; // x19
  __int64 v22; // x20
  int v23; // w23

  if ( (byte_4B173A2 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&pos, haveIndividualityServant);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_10456/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_10455/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_10453/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_10452/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/, v15, v16);
    byte_4B173A2 = 1;
  }
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&pos);
    v17 = &StringLiteral_10453/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/;
  }
  else if ( haveIndividualityServant )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&pos);
    v17 = &StringLiteral_10452/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/;
  }
  else
  {
    MyServantOrNpcSvtIdList = (int *)QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(
                                       this,
                                       pos,
                                       (const MethodInfo *)haveIndividualityServant);
    if ( MyServantOrNpcSvtIdList && (v20 = MyServantOrNpcSvtIdList[6], v21 = MyServantOrNpcSvtIdList, v20 >= 1) )
    {
      v22 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v22 >= v20 )
          sub_1BCAA44(MyServantOrNpcSvtIdList, v19);
        MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
        v23 = v21[v22 + 8];
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
          MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
        }
        if ( v23 < *(_DWORD *)(*((_QWORD *)MyServantOrNpcSvtIdList + 23) + 868LL) )
          break;
        v20 = v21[6];
        if ( (int)++v22 >= v20 )
          goto LABEL_20;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v17 = &StringLiteral_10455/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/;
    }
    else
    {
LABEL_20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v17 = &StringLiteral_10456/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/;
    }
  }
  return LocalizationManager__Get((System_String_o *)*v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
        QuestRestrictionInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x2
  __int64 v22; // x3
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v25; // x20
  Il2CppClass *klass; // x8

  if ( (byte_4B173A4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&System_Predicate_RestrictionEntity__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__DisplayClass187_0__GetMyServantOrSupportTargetPos_b__0__, v8, v9);
    sub_1BCA7E0(&QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo, v10, v11);
    byte_4B173A4 = 1;
  }
  v12 = sub_1BCAA2C(QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo, *(_QWORD *)&index, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
    goto LABEL_12;
  questRestrictionEntityList = this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_14;
  if ( (signed int)questRestrictionEntityList->max_length <= index )
  {
LABEL_12:
    LODWORD(v13) = 0;
    return (int)v13;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v25 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_RestrictionEntity__TypeInfo, v14, v21, v22);
  System_Predicate_object____ctor(
    v25,
    (Il2CppObject *)v12,
    Method_QuestRestrictionInfo___c__DisplayClass187_0__GetMyServantOrSupportTargetPos_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  v13 = System_Collections_Generic_List_object___Find(
          myServantOrNpcRestrictionEntityList,
          (System_Predicate_T__o *)v25,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v13 )
    return (int)v13;
  klass = v13[3].klass;
  if ( !klass )
LABEL_14:
    sub_1BCAA3C(v13, v14);
  if ( !LODWORD(klass->_1.namespaze) )
    sub_1BCAA44(v13, v14);
  LODWORD(v13) = klass->_1.byval_arg.data;
  return (int)v13;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA44(this, pos);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1BCAA3C(this, *(_QWORD *)&pos);
  return v4->fields.individualityList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetNeedIndividualityMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  System_String_o *DialogMessage; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4B173A6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__,
      *(_QWORD *)&pos,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__,
      v13,
      v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B173A6 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( this->fields.restrictionBaseEntity )
  {
    dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
    if ( !dialogMessageInfoDictionary )
      sub_1BCAA3C(0LL, *(_QWORD *)&pos);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v23,
      (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
      (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    while ( 1 )
    {
      v18 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v23,
              (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
      if ( !v18 )
        break;
      if ( !v23.fields._current.fields.value )
        sub_1BCAA3C(v18, v19);
      if ( LODWORD(v23.fields._current.fields.value[1].klass) == pos )
      {
        DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v23.fields._current.fields.key, v20);
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
          &v23,
          (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
        return DialogMessage;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v23,
      (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall QuestRestrictionInfo__GetNeedStartingSvtCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_int____o *needStartingIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B173B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____GetEnumerator__, v8, v9);
    byte_4B173B1 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v15.fields._current[1].monitor) )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v12 )
      break;
    if ( !v15.fields._current )
      sub_1BCAA3C(v12, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i;
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetNeedStartingSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x19
  __int64 v20; // x1
  struct System_Collections_Generic_List_int____o *needStartingIndividualitiesList; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B173AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    byte_4B173AE = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0LL;
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v22 )
      break;
    if ( !v19 )
      sub_1BCAA3C(v22, v23);
    System_Collections_Generic_List_int___AddRange(
      v19,
      (System_Collections_Generic_IEnumerable_T__o *)v25.fields._current,
      (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v19 )
LABEL_15:
    sub_1BCAA3C(needStartingIndividualitiesList, v20);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_array *__fastcall QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t FixedServantPositionCount; // w0
  const MethodInfo *v19; // x1
  int v20; // w21
  __int64 FixedServantPositionSvtIdList; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  System_String_array *v24; // x19
  unsigned __int64 v25; // x24
  __int64 v26; // x25
  PartyOrganizationUtility_o *i; // x21
  int32_t v28; // w22
  __int64 v29; // x1
  Il2CppObject *MasterData_object; // x23
  int32_t maxLimitCount; // w22
  int32_t v32; // w1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  UserServantCollectionEntity_o *v40; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B17393 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&OptionManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&string___TypeInfo, v16, v17);
    byte_4B17393 = 1;
  }
  v40 = 0LL;
  entity = 0LL;
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0LL;
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(this, method);
  if ( !FixedServantPositionCount )
    return 0LL;
  v20 = FixedServantPositionCount;
  FixedServantPositionSvtIdList = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(this, v19);
  if ( !FixedServantPositionSvtIdList )
    goto LABEL_37;
  v23 = FixedServantPositionSvtIdList;
  FixedServantPositionSvtIdList = sub_1BCA888(string___TypeInfo, *(unsigned int *)(FixedServantPositionSvtIdList + 24));
  v24 = (System_String_array *)FixedServantPositionSvtIdList;
  if ( v20 >= 1 )
  {
    v25 = 0LL;
    v26 = (unsigned int)v20;
    for ( i = (PartyOrganizationUtility_o *)(FixedServantPositionSvtIdList + 32);
          ;
          i = (PartyOrganizationUtility_o *)((char *)i + 8) )
    {
      if ( v25 >= *(unsigned int *)(v23 + 24) )
LABEL_38:
        sub_1BCAA44(FixedServantPositionSvtIdList, v22);
      v28 = *(_DWORD *)(v23 + 32 + 4 * v25);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
      FixedServantPositionSvtIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !FixedServantPositionSvtIdList )
        break;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)FixedServantPositionSvtIdList,
              &entity,
              v28,
              (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0LL;
      FixedServantPositionSvtIdList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !FixedServantPositionSvtIdList )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)FixedServantPositionSvtIdList,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29);
      FixedServantPositionSvtIdList = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        break;
      if ( !UserServantCollectionMaster__TryGetEntity(
              (UserServantCollectionMaster_o *)MasterData_object,
              &v40,
              FixedServantPositionSvtIdList,
              v28,
              0LL) )
        goto LABEL_24;
      FixedServantPositionSvtIdList = (__int64)v40;
      if ( !v40 )
        break;
      FixedServantPositionSvtIdList = UserServantCollectionEntity__IsGet(v40, 0LL);
      if ( (FixedServantPositionSvtIdList & 1) != 0 )
      {
        if ( !v40 )
          break;
        maxLimitCount = v40->fields.maxLimitCount;
      }
      else
      {
LABEL_24:
        maxLimitCount = -1;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v22);
      FixedServantPositionSvtIdList = OptionManager__GetSpoilerSetting(0LL);
      if ( !entity )
        break;
      v32 = ((maxLimitCount == -1) & ((unsigned int)FixedServantPositionSvtIdList ^ 1)) != 0 ? 0 : maxLimitCount;
      FixedServantPositionSvtIdList = (__int64)ServantEntity__getName((ServantEntity_o *)entity, v32, -1, 0LL);
      if ( !v24 )
        break;
      if ( v25 >= v24->max_length )
        goto LABEL_38;
      i->klass = (PartyOrganizationUtility_c *)FixedServantPositionSvtIdList;
      sub_1BCA784(i, FixedServantPositionSvtIdList, v33, v34, v35, v36, v37, v38);
      if ( v26 == ++v25 )
        return v24;
    }
LABEL_37:
    sub_1BCAA3C(FixedServantPositionSvtIdList, v22);
  }
  return v24;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA44(this, pos);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1BCAA3C(this, *(_QWORD *)&pos);
  return v4->fields.rangeTypeList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetRestrictedName(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestRestrictionInfo_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v17; // x20
  unsigned int v18; // w19
  __int64 v19; // x21
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x26
  unsigned __int64 v21; // x27
  __int64 v22; // x23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  __int64 v30; // x22
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x24
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Predicate_object__o *v35; // x25
  struct System_Int32_array *deckSvtIdList; // x8
  System_String_o *v38; // [xsp+8h] [xbp-68h]

  v5 = this;
  if ( (byte_4B173A0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__,
      *(_QWORD *)&pos,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v6, v7);
    sub_1BCA7E0(&System_Predicate_RestrictionEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__DisplayClass183_0__GetRestrictedName_b__0__, v10, v11);
    sub_1BCA7E0(&QuestRestrictionInfo___c__DisplayClass183_0_TypeInfo, v12, v13);
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B173A0 = 1;
  }
  v38 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v5->fields.restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)v5->fields.restrictionSlotDictionary;
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         pos,
                                         (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( this )
      {
        dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
        v17 = this;
        if ( dialogMessageInfoDictionary >= 1 )
        {
          v18 = 0;
          while ( 1 )
          {
            if ( v18 >= dialogMessageInfoDictionary )
              goto LABEL_30;
            v19 = *((_QWORD *)&v17->fields.eventId + (int)v18);
            if ( !v19 )
              goto LABEL_29;
            this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v19 + 32), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              return *(System_String_o **)(v19 + 32);
            dialogMessageInfoDictionary = (int)v17->fields.dialogMessageInfoDictionary;
            if ( (int)++v18 >= dialogMessageInfoDictionary )
              return v38;
          }
        }
        return v38;
      }
    }
LABEL_29:
    sub_1BCAA3C(this, *(_QWORD *)&pos);
  }
  questRestrictionEntityList = v5->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_29;
  if ( (int)questRestrictionEntityList->max_length >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      v22 = sub_1BCAA2C(QuestRestrictionInfo___c__DisplayClass183_0_TypeInfo, *(_QWORD *)&pos, method, v3);
      System_Object___ctor((Il2CppObject *)v22, 0LL);
      if ( v21 >= questRestrictionEntityList->max_length )
        break;
      if ( !v22 )
        goto LABEL_29;
      v29 = (int64_t)questRestrictionEntityList->m_Items[v21];
      *(_QWORD *)(v22 + 16) = v29;
      v30 = v22 + 16;
      sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 16), v29, v23, v24, v25, v26, v27, v28);
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v5->fields.myServantOrNpcRestrictionEntityList;
      v35 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_RestrictionEntity__TypeInfo, v32, v33, v34);
      System_Predicate_object____ctor(
        v35,
        (Il2CppObject *)v22,
        Method_QuestRestrictionInfo___c__DisplayClass183_0__GetRestrictedName_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_object___Find(
                                         myServantOrNpcRestrictionEntityList,
                                         (System_Predicate_T__o *)v35,
                                         (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( this )
      {
        deckSvtIdList = this->fields.deckSvtIdList;
        if ( !deckSvtIdList )
          goto LABEL_29;
        if ( !deckSvtIdList->max_length )
          break;
        if ( deckSvtIdList->m_Items[1] == pos )
        {
          if ( !*(_QWORD *)v30 )
            goto LABEL_29;
          v38 = *(System_String_o **)(*(_QWORD *)v30 + 48LL);
        }
      }
      if ( (__int64)++v21 >= (int)questRestrictionEntityList->max_length )
        return v38;
    }
LABEL_30:
    sub_1BCAA44(this, *(_QWORD *)&pos);
  }
  return v38;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  __int64 v20; // x20
  QuestRestrictionInfo_SlotInfo_o *v21; // x8
  __int64 v22; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_IEnumerable_RestrictionEntity__o *RestrictionMessageEntityList; // x19
  QuestRestrictionInfo___c_c *v28; // x8
  System_Func_object__object__o *_9__107_0; // x20
  Il2CppObject *v30; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x19
  Il2CppObject *v40; // x0
  System_Collections_Generic_IEnumerable_string__o *v41; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v42; // x8
  QuestRestrictionInfo_SlotInfo_o *v43; // x8

  v4 = this;
  if ( (byte_4B1737C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Prepend_string___, *(_QWORD *)&initPos, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___, v5, v6);
    sub_1BCA7E0(&System_Func_RestrictionEntity__string__TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__107_0__, v11, v12);
    sub_1BCA7E0(&QuestRestrictionInfo___c_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v15, v16);
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&StringLiteral_10415/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v17, v18);
    byte_4B1737C = 1;
  }
  if ( v4->fields.restrictionBaseEntity )
  {
    if ( initPos < 1 )
      return v4->fields.restrictionMessage;
    slotInfos = v4->fields.slotInfos;
    if ( slotInfos )
    {
      v20 = initPos - 1LL;
      if ( (unsigned int)v20 >= slotInfos->max_length )
        goto LABEL_26;
      v21 = slotInfos->m_Items[v20];
      if ( !v21 )
        goto LABEL_25;
      if ( System_String__IsNullOrEmpty(v21->fields.summary, 0LL) )
        return v4->fields.restrictionMessage;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
      this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10415/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v42 = v4->fields.slotInfos;
      if ( !v42 )
        goto LABEL_25;
      if ( (unsigned int)v20 >= v42->max_length )
LABEL_26:
        sub_1BCAA44(this, *(_QWORD *)&initPos);
      v43 = v42->m_Items[v20];
      if ( v43 )
        return System_String__Concat_62412480(
                 (System_String_o *)this,
                 (System_String_o *)StringLiteral_43/*"\n"*/,
                 v43->fields.summary,
                 0LL);
    }
LABEL_25:
    sub_1BCAA3C(this, *(_QWORD *)&initPos);
  }
  RestrictionMessageEntityList = QuestRestrictionInfo__GetRestrictionMessageEntityList(
                                   v4,
                                   *(const MethodInfo **)&initPos);
  v28 = QuestRestrictionInfo___c_TypeInfo;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, v24);
    v28 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__107_0 = (System_Func_object__object__o *)v28->static_fields->__9__107_0;
  if ( !_9__107_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28, v24);
      v28 = QuestRestrictionInfo___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__107_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                   System_Func_RestrictionEntity__string__TypeInfo,
                                                   v24,
                                                   v25,
                                                   v26);
    System_Func_object__object____ctor(
      _9__107_0,
      v30,
      Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__107_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__107_0 = (struct System_Func_RestrictionEntity__string__o *)_9__107_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__107_0,
      (int64_t)_9__107_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                               (System_Func_TSource__TResult__o *)_9__107_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
  v40 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10415/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
  v41 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Prepend_object_(
                                                              v39,
                                                              v40,
                                                              (const MethodInfo_2F3BB50 *)Method_System_Linq_Enumerable_Prepend_string___);
  return System_String__Join_62416876((System_String_o *)StringLiteral_43/*"\n"*/, v41, 0LL);
}


System_Collections_Generic_IEnumerable_RestrictionEntity__o *__fastcall QuestRestrictionInfo__GetRestrictionMessageEntityList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  QuestRestrictionInfo___c_c *v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x19
  System_Func_object__bool__o *_9__108_0; // x20
  Il2CppObject *v14; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B1737D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, method, v2);
    sub_1BCA7E0(&System_Func_RestrictionEntity__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__108_0__, v7, v8);
    sub_1BCA7E0(&QuestRestrictionInfo___c_TypeInfo, v9, v10);
    byte_4B1737D = 1;
  }
  v11 = QuestRestrictionInfo___c_TypeInfo;
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, method);
    v11 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__108_0 = (System_Func_object__bool__o *)v11->static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = QuestRestrictionInfo___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__108_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_RestrictionEntity__bool__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__bool____ctor(
      _9__108_0,
      v14,
      Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__108_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__108_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__108_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__108_0,
      (int64_t)_9__108_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                          restrictionEntityList,
                                                                          (System_Func_TSource__bool__o *)_9__108_0,
                                                                          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestRestrictionInfo__GetServantIndividuality(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  int32_t ServantImageLimitSealAfter; // w21

  if ( (byte_4B17377 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B17377 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL
    || (ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)Instance,
                                       svtId,
                                       dispLimitCount,
                                       0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v15);
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
  __int64 v2; // x2
  RestrictionBaseEntity_o *restrictionBaseEntity; // x0
  __int64 v5; // x1
  struct RestrictionEntity_o *servantNumRestrictionEntity; // x8
  int32_t servantNumMax; // w19
  BalanceConfig_c *v9; // x0

  if ( (byte_4B17394 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B17394 = 1;
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
      v9 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
        v9 = BalanceConfig_TypeInfo;
      }
      if ( servantNumMax <= v9->static_fields->DeckMainMemberMax )
        return 1;
      else
        return 4;
    }
  }
  else
  {
    servantNumRestrictionEntity = this->fields.servantNumRestrictionEntity;
    if ( !servantNumRestrictionEntity )
      sub_1BCAA3C(0LL, method);
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
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  unsigned int v14; // w21
  RestrictionWholeEntity_o *v15; // x25
  int32_t v16; // w20
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v18; // x21
  unsigned int v19; // w26
  __int64 v20; // x27
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int v23; // w9
  unsigned int v24; // w10
  RestrictionEntity_o *v25; // x11
  Il2CppObject *v26; // x8
  Il2CppObject *v27; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_4B17396 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v8, v9);
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B17396 = 1;
  }
  v27 = 0LL;
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
      v16 = 1;
      while ( 1 )
      {
        this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
        if ( !this )
          goto LABEL_49;
        this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                           v16,
                                           (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
        if ( !this )
          goto LABEL_49;
        dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
        v18 = this;
        if ( dialogMessageInfoDictionary >= 1 )
          break;
LABEL_31:
        if ( ++v16 > v3->fields.servantNumMin )
          return (System_String_o *)StringLiteral_1/*""*/;
      }
      v19 = 0;
      while ( 1 )
      {
        if ( v19 >= dialogMessageInfoDictionary )
          goto LABEL_50;
        v20 = *((_QWORD *)&v18->fields.eventId + (int)v19);
        if ( !v20 )
          goto LABEL_49;
        if ( *(_DWORD *)(v20 + 44) && !*(_DWORD *)(v20 + 40) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_49;
          this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             &v27,
                                             *(_DWORD *)(v20 + 44),
                                             (const MethodInfo_31B2E94 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        dialogMessageInfoDictionary = (int)v18->fields.dialogMessageInfoDictionary;
        if ( (int)++v19 >= dialogMessageInfoDictionary )
          goto LABEL_31;
      }
      v26 = v27;
      if ( !v27 )
        goto LABEL_49;
    }
    else
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          goto LABEL_50;
        v15 = restrictionWholeEntities->m_Items[v14];
        if ( !v15 )
          goto LABEL_49;
        if ( v15->fields.restrictionMessageId && v15->fields.type == 3 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_49;
          this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             &entity,
                                             v15->fields.restrictionMessageId,
                                             (const MethodInfo_31B2E94 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_16;
      }
      v26 = entity;
      if ( !entity )
        goto LABEL_49;
    }
    return (System_String_o *)v26[1].monitor;
  }
  else
  {
    restrictionEntityList = v3->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_49;
    v23 = restrictionEntityList->max_length;
    if ( v23 >= 1 )
    {
      v24 = 0;
      method = 0LL;
      while ( 1 )
      {
        if ( v24 >= v23 )
LABEL_50:
          sub_1BCAA44(this, method);
        v25 = restrictionEntityList->m_Items[v24];
        if ( !v25 )
          break;
        if ( v25->fields.type == 10 )
          method = (const MethodInfo *)v24;
        else
          method = (const MethodInfo *)(unsigned int)method;
        if ( (int)++v24 >= v23 )
          return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v2);
      }
LABEL_49:
      sub_1BCAA3C(this, method);
    }
    LODWORD(method) = 0;
    return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v2);
  }
}


System_String_o *__fastcall QuestRestrictionInfo__GetServantNumRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t ServantNumRangeType; // w0
  __int64 v13; // x1
  int32_t servantNumMax; // w20
  BalanceConfig_c *v15; // x0
  System_String_o *v16; // x20
  int32_t *v17; // x1
  Il2CppObject *v18; // x0
  int32_t v20; // [xsp+8h] [xbp-28h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B17395 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_10458/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_10457/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, v10, v11);
    byte_4B17395 = 1;
  }
  ServantNumRangeType = QuestRestrictionInfo__GetServantNumRangeType(this, method);
  if ( ServantNumRangeType == 5 )
    goto LABEL_17;
  if ( ServantNumRangeType != 4 )
    goto LABEL_18;
  servantNumMax = this->fields.servantNumMax;
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
    v15 = BalanceConfig_TypeInfo;
  }
  if ( servantNumMax > v15->static_fields->DeckMainMemberMax )
  {
LABEL_17:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10458/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, 0LL);
    v17 = &v21;
    v21 = this->fields.servantNumMax;
  }
  else
  {
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10457/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, 0LL);
    v17 = &v20;
    v20 = this->fields.servantNumMax;
  }
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v17);
  return System_String__Format(v16, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestRestrictionInfo__GetServantRarity(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  void *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B17376 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B17376 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B1737E & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10459/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, v3, v4);
    byte_4B1737E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10459/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, 0LL);
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
  __int64 v2; // x2
  System_String_o *result; // x0
  System_String_c *klass; // x19
  Il2CppObject *v6; // x0
  int32_t TotalCost; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B1738D & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    byte_4B1738D = 1;
  }
  result = (System_String_o *)this->fields.totalCostRestrictionEntity;
  if ( result )
  {
    klass = result[1].klass;
    TotalCost = RestrictionEntity__getTotalCost((RestrictionEntity_o *)result, 0LL);
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalCost);
    return System_String__Format((System_String_o *)klass, v6, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x8
  int max_length; // w9
  int v11; // w10
  RestrictionWholeEntity_o *v12; // x11

  v4 = this;
  if ( (byte_4B17384 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, isFixMessage, method);
    sub_1BCA7E0(&StringLiteral_10461/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, v5, v6);
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B17384 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isFixMessage);
    return LocalizationManager__Get((System_String_o *)StringLiteral_10461/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, 0LL);
  }
  else
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_18:
      sub_1BCAA3C(this, isFixMessage);
    max_length = restrictionWholeEntities->max_length;
    if ( max_length < 1 )
    {
      return (System_String_o *)StringLiteral_1/*""*/;
    }
    else
    {
      v11 = 0;
      while ( 1 )
      {
        if ( max_length == v11 )
          sub_1BCAA44(this, isFixMessage);
        v12 = restrictionWholeEntities->m_Items[v11];
        if ( !v12 )
          goto LABEL_18;
        if ( v12->fields.type == 9 )
          return v12->fields.summary;
        if ( max_length == ++v11 )
          return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
  }
}


System_String_o *__fastcall QuestRestrictionInfo__GetUniqueServantRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B17383 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10460/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, v3, v4);
    byte_4B17383 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10460/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, 0LL);
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA44(this, initPos);
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_7:
    sub_1BCAA3C(this, *(_QWORD *)&initPos);
  return v4->fields.isMoved;
}


bool __fastcall QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_1BCAA3C(this, method);
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
        sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x19
  __int64 v20; // x1
  struct System_Collections_Generic_List_int____o *fixedSupportIndividualitiesList; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  _BOOL8 v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B173A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    byte_4B173A9 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !this->fields.isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.isFixedSupportPosition )
  {
    fixedSupportIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)fixedSupportIndividualitiesList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v27;
          ;
          System_Collections_Generic_List_int___AddRange(
            v19,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v22 )
        break;
      if ( !v19 )
        sub_1BCAA3C(v22, v23);
    }
  }
  else
  {
    fixedSupportIndividualitiesList = this->fields.fixedNpcIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)fixedSupportIndividualitiesList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v27;
          ;
          System_Collections_Generic_List_int___AddRange(
            v19,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v25 )
        break;
      if ( !v19 )
        sub_1BCAA3C(v25, v26);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v19 )
LABEL_23:
    sub_1BCAA3C(fixedSupportIndividualitiesList, v20);
  return v19->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsFixedSupportPosition_41179888(
        QuestRestrictionInfo_o *this,
        int32_t num,
        ServantLeaderInfo_o *servantInfo,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_int__o *v37; // x22
  _BOOL8 v38; // x0
  __int64 v39; // x1
  _BOOL8 v41; // x0
  __int64 v42; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x23
  __int64 v44; // x24
  __int64 v45; // x25
  Il2CppObject *Entity; // x23
  const MethodInfo *v47; // x1
  int32_t current; // w22
  int32_t limitCount; // w24
  __int64 DispLimitCount; // x0
  __int64 v51; // x1
  struct System_Boolean_array *supportPositionList; // x8
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  v6 = this;
  if ( (byte_4B17385 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&num, servantInfo);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____GetEnumerator__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v33, v34);
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v36);
    byte_4B17385 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v54, 0, sizeof(v54));
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
  this = (QuestRestrictionInfo_o *)NpcServantFollowerEntity__IsNpc(servantInfo->fields.npcFlag, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
LABEL_9:
  if ( !v6->fields.restrictionBaseEntity )
    goto LABEL_36;
  v37 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&num,
                                                    servantInfo,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v6->fields.isFixedSupportPosition )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedSupportIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v53,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v53;
          ;
          System_Collections_Generic_List_int___AddRange(
            v37,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v38 )
        break;
      if ( !v37 )
        sub_1BCAA3C(v38, v39);
    }
  }
  else
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedNpcIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v53,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v53;
          ;
          System_Collections_Generic_List_int___AddRange(
            v37,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v41 )
        break;
      if ( !v37 )
        sub_1BCAA3C(v41, v42);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v37 )
    goto LABEL_42;
  if ( v37->fields._size < 1 )
    goto LABEL_36;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&num);
  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_42;
  v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v45 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&num);
  *(_QWORD *)&v56.fields.currentCryptoKey = v45;
  *(_QWORD *)&v56.fields.fakeValue = v44;
  this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v56, 0LL);
  if ( !v43 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v43,
             (int32_t)this,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    v37,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v54 = v53;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v54,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v54,
        (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      return 1;
    }
    current = (int32_t)v54.fields._current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, v47);
    if ( !Entity )
      sub_1BCAA3C(DispLimitCount, v51);
  }
  while ( !ServantEntity__IsIndividuality((ServantEntity_o *)Entity, limitCount, DispLimitCount, current, 0LL) );
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v54,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_36:
  supportPositionList = v6->fields.supportPositionList;
  if ( !supportPositionList )
LABEL_42:
    sub_1BCAA3C(this, *(_QWORD *)&num);
  if ( supportPositionList->max_length <= num )
    sub_1BCAA44(this, *(_QWORD *)&num);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v18; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v21; // x20

  if ( (byte_4B1739B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__, *(_QWORD *)&pos, method);
    sub_1BCA7E0(&System_Predicate_RestrictionEntity__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__DisplayClass178_0__IsMyServantOrNpcRestriction_b__0__, v8, v9);
    sub_1BCA7E0(&QuestRestrictionInfo___c__DisplayClass178_0_TypeInfo, v10, v11);
    byte_4B1739B = 1;
  }
  v12 = sub_1BCAA2C(QuestRestrictionInfo___c__DisplayClass178_0_TypeInfo, *(_QWORD *)&pos, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_14;
  *(_DWORD *)(v12 + 16) = pos;
  if ( !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  if ( this->fields.restrictionBaseEntity )
  {
    slotInfos = this->fields.slotInfos;
    if ( slotInfos )
    {
      if ( pos - 1 >= slotInfos->max_length )
        sub_1BCAA44(v13, v14);
      v18 = slotInfos->m_Items[pos - 1];
      if ( v18 )
        return (unsigned int)(v18->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_1BCAA3C(v13, v14);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v21 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_RestrictionEntity__TypeInfo, v14, v15, v16);
  System_Predicate_object____ctor(
    v21,
    (Il2CppObject *)v12,
    Method_QuestRestrictionInfo___c__DisplayClass178_0__IsMyServantOrNpcRestriction_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  return System_Collections_Generic_List_object___Exists(
           myServantOrNpcRestrictionEntityList,
           (System_Predicate_T__o *)v21,
           (const MethodInfo_35A2288 *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
}


bool __fastcall QuestRestrictionInfo__IsNoSupportBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNoSupportBattle;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsNotIndividuality(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  void *restrictionSlotDetailDictionary; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x2
  __int64 v19; // x3
  int v20; // w8
  int v21; // w9
  __int64 v22; // x10
  __int64 v23; // x10
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v25; // x20
  __int64 v26; // x8

  if ( (byte_4B1739D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      *(_QWORD *)&pos,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v6, v7);
    sub_1BCA7E0(&System_Predicate_RestrictionEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__DisplayClass180_0__IsNotIndividuality_b__0__, v10, v11);
    sub_1BCA7E0(&QuestRestrictionInfo___c__DisplayClass180_0_TypeInfo, v12, v13);
    byte_4B1739D = 1;
  }
  v14 = sub_1BCAA2C(QuestRestrictionInfo___c__DisplayClass180_0_TypeInfo, *(_QWORD *)&pos, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_23;
  *(_DWORD *)(v14 + 16) = pos;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(this, pos, v17) )
  {
    if ( this->fields.restrictionBaseEntity )
    {
      restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                          (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                          *(_DWORD *)(v14 + 16),
                                          (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      v20 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
      if ( v20 >= 1 )
      {
        v21 = 0;
        while ( 1 )
        {
          if ( v20 == v21 )
            sub_1BCAA44(restrictionSlotDetailDictionary, v16);
          v22 = *((_QWORD *)restrictionSlotDetailDictionary + v21 + 4);
          if ( !v22 )
            break;
          if ( *(_DWORD *)(v22 + 32) == 1 )
          {
            v23 = *(_QWORD *)(v22 + 40);
            if ( v23 )
            {
              if ( *(_QWORD *)(v23 + 24) )
                goto LABEL_17;
            }
          }
          if ( v20 == ++v21 )
            goto LABEL_16;
        }
LABEL_23:
        sub_1BCAA3C(restrictionSlotDetailDictionary, v16);
      }
LABEL_16:
      LOBYTE(restrictionSlotDetailDictionary) = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
      v25 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_RestrictionEntity__TypeInfo, v16, v18, v19);
      System_Predicate_object____ctor(
        v25,
        (Il2CppObject *)v14,
        Method_QuestRestrictionInfo___c__DisplayClass180_0__IsNotIndividuality_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                          myServantOrNpcRestrictionEntityList,
                                          (System_Predicate_T__o *)v25,
                                          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( restrictionSlotDetailDictionary )
      {
        v26 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
        if ( !v26 )
          goto LABEL_23;
        LOBYTE(restrictionSlotDetailDictionary) = *(_DWORD *)(v26 + 24) == 0;
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


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA44(this, initPos);
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_1BCAA3C(this, *(_QWORD *)&initPos);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Object_array *slotInfos; // x19
  QuestRestrictionInfo___c_c *v12; // x0
  System_Func_object__bool__o *_9__98_0; // x20
  Il2CppObject *v14; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B17375 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___, method, v2);
    sub_1BCA7E0(&System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__98_0__, v7, v8);
    sub_1BCA7E0(&QuestRestrictionInfo___c_TypeInfo, v9, v10);
    byte_4B17375 = 1;
  }
  if ( !this->fields.restrictionBaseEntity )
    return 0;
  slotInfos = (System_Object_array *)this->fields.slotInfos;
  v12 = QuestRestrictionInfo___c_TypeInfo;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, method);
    v12 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__98_0 = (System_Func_object__bool__o *)v12->static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12, method);
      v12 = QuestRestrictionInfo___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__98_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo,
                                                method,
                                                v2,
                                                v3);
    System_Func_object__bool____ctor(
      _9__98_0,
      v14,
      Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__98_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = (struct System_Func_QuestRestrictionInfo_SlotInfo__bool__o *)_9__98_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__98_0,
      (int64_t)_9__98_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return BasicHelper__Any_object__49274176(
           slotInfos,
           (System_Func_T__bool__o *)_9__98_0,
           (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
}


bool __fastcall QuestRestrictionInfo__IsRestrictionIndividualityWhole(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  QuestRestrictionInfo___c_c *v17; // x0
  System_Object_array *restrictionWholeEntities; // x19
  System_Func_object__bool__o *_9__97_1; // x20
  Il2CppObject *v20; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo_2EFDD40 *v28; // x2
  QuestRestrictionInfo___c_c *v29; // x0
  Il2CppObject *v30; // x21
  struct QuestRestrictionInfo___c_StaticFields *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4B17374 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_RestrictionEntity___, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_Any_RestrictionWholeEntity___, v5, v6);
    sub_1BCA7E0(&System_Func_RestrictionEntity__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Func_RestrictionWholeEntity__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__97_0__, v11, v12);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__97_1__, v13, v14);
    sub_1BCA7E0(&QuestRestrictionInfo___c_TypeInfo, v15, v16);
    byte_4B17374 = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    v17 = QuestRestrictionInfo___c_TypeInfo;
    restrictionWholeEntities = (System_Object_array *)this->fields.restrictionWholeEntities;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, method);
      v17 = QuestRestrictionInfo___c_TypeInfo;
    }
    _9__97_1 = (System_Func_object__bool__o *)v17->static_fields->__9__97_1;
    if ( !_9__97_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17, method);
        v17 = QuestRestrictionInfo___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v17->static_fields->__9;
      _9__97_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_RestrictionWholeEntity__bool__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
      System_Func_object__bool____ctor(
        _9__97_1,
        v20,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__97_1__,
        0LL);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__97_1 = (struct System_Func_RestrictionWholeEntity__bool__o *)_9__97_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__97_1,
        (int64_t)_9__97_1,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    v28 = (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_RestrictionWholeEntity___;
  }
  else
  {
    v29 = QuestRestrictionInfo___c_TypeInfo;
    restrictionWholeEntities = (System_Object_array *)this->fields.restrictionEntityList;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, method);
      v29 = QuestRestrictionInfo___c_TypeInfo;
    }
    _9__97_1 = (System_Func_object__bool__o *)v29->static_fields->__9__97_0;
    if ( !_9__97_1 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29, method);
        v29 = QuestRestrictionInfo___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v29->static_fields->__9;
      _9__97_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_RestrictionEntity__bool__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
      System_Func_object__bool____ctor(
        _9__97_1,
        v30,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__97_0__,
        0LL);
      v31 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v31->__9__97_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__97_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v31->__9__97_0, (int64_t)_9__97_1, v32, v33, v34, v35, v36, v37);
    }
    v28 = (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_RestrictionEntity___;
  }
  return BasicHelper__Any_object__49274176(restrictionWholeEntities, (System_Func_T__bool__o *)_9__97_1, v28);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestrictionServantIndividuality(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t pos,
        bool isChkSupport,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x24
  DataManager_o *Instance; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  int32_t ServantImageLimitSealAfter; // w20
  __int64 v36; // x2
  __int64 v37; // x3
  Il2CppObject *Entity; // x21
  int v39; // w25
  __int64 m_CancellationTokenSource; // x8
  bool *p_DispLog; // x9
  __int64 v42; // x10
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x22
  System_Predicate_object__o *v44; // x23
  struct DataMasterBase_array *datalist; // x8
  RestrictionEntity_o *v46; // x22
  __int64 v47; // x8
  System_Int32_array *v48; // x0
  struct System_Threading_CancellationTokenSource_o *v49; // x9
  DataManager_o *v50; // x22
  unsigned __int64 v51; // x24
  RestrictionSlotDetailEntity_o *v52; // x23
  struct System_Int32_array *targetVals; // x9
  System_Int32_array *Individuality; // x0

  if ( (byte_4B1739E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v21, v22);
    sub_1BCA7E0(&System_Predicate_RestrictionEntity__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__DisplayClass181_0__IsRestrictionServantIndividuality_b__0__, v27, v28);
    sub_1BCA7E0(&QuestRestrictionInfo___c__DisplayClass181_0_TypeInfo, v29, v30);
    byte_4B1739E = 1;
  }
  v31 = sub_1BCAA2C(
          QuestRestrictionInfo___c__DisplayClass181_0_TypeInfo,
          *(_QWORD *)&svtId,
          *(_QWORD *)&limitCount,
          *(_QWORD *)&dispLimitCount);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_51;
  *(_DWORD *)(v31 + 16) = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(this, pos, v34) )
    goto LABEL_49;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_51;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_51;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)this->fields.restrictionSlotDictionary;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                    *(_DWORD *)(v31 + 16),
                                    (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( Instance )
      {
        v39 = -1;
        if ( (int)Instance->fields.m_CancellationTokenSource >= 1 )
        {
          m_CancellationTokenSource = (unsigned int)Instance->fields.m_CancellationTokenSource;
          p_DispLog = &Instance->fields._DispLog;
          while ( 1 )
          {
            v42 = *(_QWORD *)p_DispLog;
            if ( isChkSupport )
            {
              if ( !v42 )
                goto LABEL_51;
              if ( *(_DWORD *)(v42 + 28) == 2 )
                goto LABEL_30;
            }
            else
            {
              if ( !v42 )
                goto LABEL_51;
              if ( *(_DWORD *)(v42 + 28) == 1 )
              {
LABEL_30:
                v39 = *(_DWORD *)(v42 + 40);
                break;
              }
            }
            --m_CancellationTokenSource;
            p_DispLog += 8;
            if ( !m_CancellationTokenSource )
            {
              v39 = -1;
              break;
            }
          }
        }
        Instance = (DataManager_o *)this->fields.restrictionSlotDetailDictionary;
        if ( Instance )
        {
          Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                        *(_DWORD *)(v31 + 16),
                                        (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
          if ( Instance )
          {
            v49 = Instance->fields.m_CancellationTokenSource;
            v50 = Instance;
            if ( (int)v49 >= 1 )
            {
              LOBYTE(v47) = 0;
              v51 = 0LL;
              while ( 1 )
              {
                if ( v51 >= (unsigned int)v49 )
                  sub_1BCAA44(Instance, v33);
                v52 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v50->fields._DispLog + v51);
                if ( (v39 & 0x80000000) != 0 )
                {
                  if ( !v52 )
                    goto LABEL_51;
                }
                else
                {
                  if ( !v52 )
                    goto LABEL_51;
                  if ( v39 != v52->fields.id )
                    goto LABEL_47;
                }
                if ( v52->fields.type == 1 )
                {
                  targetVals = v52->fields.targetVals;
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
                      Instance = (DataManager_o *)RestrictionSlotDetailEntity__IsIndividuality(v52, Individuality, 0LL);
                      if ( ((unsigned __int8)Instance & 1) != 0 )
                        goto LABEL_49;
                      LOBYTE(v47) = 1;
                    }
                  }
                }
LABEL_47:
                LODWORD(v49) = v50->fields.m_CancellationTokenSource;
                if ( (__int64)++v51 >= (int)v49 )
                  return v47;
              }
            }
            goto LABEL_49;
          }
        }
      }
    }
LABEL_51:
    sub_1BCAA3C(Instance, v33);
  }
  if ( isChkSupport )
    goto LABEL_49;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v44 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_RestrictionEntity__TypeInfo, v33, v36, v37);
  System_Predicate_object____ctor(
    v44,
    (Il2CppObject *)v31,
    Method_QuestRestrictionInfo___c__DisplayClass181_0__IsRestrictionServantIndividuality_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_51;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                myServantOrNpcRestrictionEntityList,
                                (System_Predicate_T__o *)v44,
                                (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !Instance )
    goto LABEL_49;
  datalist = Instance->fields.datalist;
  v46 = (RestrictionEntity_o *)Instance;
  if ( !datalist )
    goto LABEL_51;
  v47 = *(_QWORD *)&datalist->max_length;
  if ( v47 )
  {
    if ( !Entity )
      goto LABEL_51;
    v48 = ServantEntity__getIndividuality((ServantEntity_o *)Entity, limitCount, ServantImageLimitSealAfter, 0LL);
    if ( RestrictionEntity__IsRestriction_40304868(v46, v48, 0LL) )
    {
      LOBYTE(v47) = 1;
      return v47;
    }
LABEL_49:
    LOBYTE(v47) = 0;
  }
  return v47;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestrictionServantIndividuality_41195344(
        QuestRestrictionInfo_o *this,
        System_Int32_array *individuality,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x22
  void *restrictionSlotDetailDictionary; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  __int64 v19; // x2
  __int64 v20; // x3
  int v21; // w9
  void *v22; // x20
  unsigned int v23; // w21
  __int64 v24; // x8
  __int64 v25; // x9
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x20
  System_Predicate_object__o *v27; // x21
  __int64 v28; // x8

  if ( (byte_4B1739F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      individuality,
      *(_QWORD *)&pos);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v7, v8);
    sub_1BCA7E0(&System_Predicate_RestrictionEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__DisplayClass182_0__IsRestrictionServantIndividuality_b__0__, v11, v12);
    sub_1BCA7E0(&QuestRestrictionInfo___c__DisplayClass182_0_TypeInfo, v13, v14);
    byte_4B1739F = 1;
  }
  v15 = sub_1BCAA2C(QuestRestrictionInfo___c__DisplayClass182_0_TypeInfo, individuality, *(_QWORD *)&pos, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_26;
  *(_DWORD *)(v15 + 16) = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(this, pos, v18) )
    goto LABEL_24;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v15 + 16),
                                        (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    v21 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v22 = restrictionSlotDetailDictionary;
    if ( v21 >= 1 )
    {
      v23 = 0;
      LOBYTE(v24) = 0;
      while ( 1 )
      {
        if ( v23 >= v21 )
          sub_1BCAA44(restrictionSlotDetailDictionary, v17);
        restrictionSlotDetailDictionary = (void *)*((_QWORD *)v22 + (int)v23 + 4);
        if ( !restrictionSlotDetailDictionary )
          break;
        if ( *((_DWORD *)restrictionSlotDetailDictionary + 8) == 1 )
        {
          v25 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
          if ( v25 )
          {
            if ( *(_QWORD *)(v25 + 24) )
            {
              restrictionSlotDetailDictionary = (void *)RestrictionSlotDetailEntity__IsIndividuality(
                                                          (RestrictionSlotDetailEntity_o *)restrictionSlotDetailDictionary,
                                                          individuality,
                                                          0LL);
              if ( ((unsigned __int8)restrictionSlotDetailDictionary & 1) != 0 )
                goto LABEL_24;
              LOBYTE(v24) = 1;
            }
          }
        }
        v21 = *((_DWORD *)v22 + 6);
        if ( (int)++v23 >= v21 )
          return v24 & 1;
      }
LABEL_26:
      sub_1BCAA3C(restrictionSlotDetailDictionary, v17);
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v27 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_RestrictionEntity__TypeInfo, v17, v19, v20);
  System_Predicate_object____ctor(
    v27,
    (Il2CppObject *)v15,
    Method_QuestRestrictionInfo___c__DisplayClass182_0__IsRestrictionServantIndividuality_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_26;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                      myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v27,
                                      (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !restrictionSlotDetailDictionary )
  {
LABEL_24:
    LOBYTE(v24) = 0;
    return v24 & 1;
  }
  v28 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
  if ( !v28 )
    goto LABEL_26;
  v24 = *(_QWORD *)(v28 + 24);
  if ( v24 )
    return RestrictionEntity__IsRestriction_40304868(
             (RestrictionEntity_o *)restrictionSlotDetailDictionary,
             individuality,
             0LL);
  return v24 & 1;
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
  return QuestRestrictionInfo__IsRestrictionSlot_41173184(this, ServantIndividuality, initPos, v14);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestrictionSlot_41173184(
        QuestRestrictionInfo_o *this,
        System_Int32_array *svtIndividuality,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  unsigned int v17; // w23
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  bool v19; // w22
  int32_t v20; // w21
  QuestRestrictionInfo_SlotInfo_o *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v23; // x8
  QuestRestrictionInfo_SlotInfo_o *v24; // x8
  QuestRestrictionInfo_o *v25; // x22
  struct QuestRestrictionInfo_SlotInfo_array *v26; // x8
  QuestRestrictionInfo_SlotInfo_o *v27; // x8

  v6 = this;
  if ( (byte_4B1737A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_int___, svtIndividuality, *(_QWORD *)&initPos);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Intersect_int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____get_Item__, v13, v14);
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(
                                       &Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__,
                                       v15,
                                       v16);
    byte_4B1737A = 1;
  }
  v17 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v6->fields.slotInfos;
    if ( !slotInfos )
LABEL_27:
      sub_1BCAA3C(this, svtIndividuality);
    v19 = 0;
    v20 = 0;
    while ( v17 < slotInfos->max_length )
    {
      v21 = slotInfos->m_Items[v17];
      if ( !v21 )
        goto LABEL_27;
      this = (QuestRestrictionInfo_o *)v21->fields.individualityList;
      if ( !this )
        goto LABEL_27;
      if ( v20 >= SLODWORD(this->fields.dialogMessageInfoDictionary) )
        return v19;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v20,
                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_int____get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->fields.dialogMessageInfoDictionary )
      {
        v22 = System_Linq_Enumerable__Intersect_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this,
                (System_Collections_Generic_IEnumerable_TSource__o *)svtIndividuality,
                (const MethodInfo_2F36730 *)Method_System_Linq_Enumerable_Intersect_int___);
        this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_int_(
                                           v22,
                                           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
        v23 = v6->fields.slotInfos;
        if ( !v23 )
          goto LABEL_27;
        if ( v17 >= v23->max_length )
          break;
        v24 = v23->m_Items[v17];
        if ( !v24 )
          goto LABEL_27;
        v25 = this;
        this = (QuestRestrictionInfo_o *)v24->fields.rangeTypeList;
        if ( !this )
          goto LABEL_27;
        this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                           (System_Collections_Generic_List_T__o *)this,
                                           v20,
                                           (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
        if ( (_DWORD)this == 1 )
        {
          this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                             (const MethodInfo_2F1E314 *)Method_System_Linq_Enumerable_Any_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 0;
        }
        else
        {
          v26 = v6->fields.slotInfos;
          if ( !v26 )
            goto LABEL_27;
          if ( v17 >= v26->max_length )
            break;
          v27 = v26->m_Items[v17];
          if ( !v27 )
            goto LABEL_27;
          this = (QuestRestrictionInfo_o *)v27->fields.rangeTypeList;
          if ( !this )
            goto LABEL_27;
          this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                             (System_Collections_Generic_List_T__o *)this,
                                             v20,
                                             (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)this == 2 )
          {
            this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                               (const MethodInfo_2F1E314 *)Method_System_Linq_Enumerable_Any_int___);
            if ( ((unsigned __int8)this & 1) == 0 )
              return 0;
          }
        }
        v19 = 1;
      }
      slotInfos = v6->fields.slotInfos;
      ++v20;
      if ( !slotInfos )
        goto LABEL_27;
    }
    sub_1BCAA44(this, svtIndividuality);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestriction_41172444(
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
  __int64 v16; // x1
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x6
  long double inited; // q0
  System_Int32_array *ServantIndividuality; // x2
  _QWORD *v21; // x23
  __int64 v22; // x8
  __int64 v23; // x0
  __int64 v24; // x0
  bool isWhole; // [xsp+Ch] [xbp-44h] BYREF

  v12 = this;
  if ( (byte_4B17378 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(
                                       &Method_System_Array_Empty_int___,
                                       *(_QWORD *)&svtId,
                                       *(_QWORD *)&limitCount);
    byte_4B17378 = 1;
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
                             v17);
  }
  else
  {
    v21 = Method_System_Array_Empty_int___;
    v22 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v22 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, v16);
      v22 = v21[7];
    }
    v23 = *(_QWORD *)(v22 + 16);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v23 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v23, v16);
    v24 = *(_QWORD *)(v21[7] + 16LL);
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1C1C6BC(inited);
    ServantIndividuality = **(System_Int32_array ***)(v24 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_41172716(
           v12,
           &isWhole,
           ServantIndividuality,
           ServantRarity,
           lv,
           targetType,
           v18);
}


bool __fastcall QuestRestrictionInfo__IsRestriction_41172716(
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
      sub_1BCAA3C(this, isWhole);
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
      return 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
LABEL_29:
        sub_1BCAA44(this, isWhole);
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
          this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction_40304868(v18, svtIndividuality, 0LL);
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
bool __fastcall QuestRestrictionInfo__IsRestriction_41173688(
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
  QuestRestrictionInfo_o *v16; // x21
  int32_t ServantRarity; // w24
  const MethodInfo *v18; // x1
  _BOOL8 IsRestrictionIndividualityWhole; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x4
  __int64 v22; // x1
  const MethodInfo *v23; // x6
  long double inited; // q0
  System_Int32_array *ServantIndividuality; // x25
  _QWORD *v26; // x25
  __int64 v27; // x8
  __int64 v28; // x0
  __int64 v29; // x0
  const MethodInfo *v30; // x3

  v16 = this;
  if ( (byte_4B17379 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&Method_System_Array_Empty_int___, isWhole, *(_QWORD *)&svtId);
    byte_4B17379 = 1;
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
    v26 = Method_System_Array_Empty_int___;
    v27 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v27 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, v22);
      v27 = v26[7];
    }
    v28 = *(_QWORD *)(v27 + 16);
    if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
      v28 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v28 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v28, v22);
    v29 = *(_QWORD *)(v26[7] + 16LL);
    if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
      v29 = sub_1C1C6BC(inited);
    ServantIndividuality = **(System_Int32_array ***)(v29 + 184);
  }
  if ( QuestRestrictionInfo__IsRestriction_41172716(
         v16,
         isWhole,
         ServantIndividuality,
         ServantRarity,
         lv,
         targetType,
         v23) )
  {
    return 1;
  }
  if ( v16->fields.restrictionBaseEntity )
    return QuestRestrictionInfo__IsRestrictionSlot_41173184(v16, ServantIndividuality, initPos, v30);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsSelectableNormalSupport(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  _BOOL8 IsMyServantOrNpcRestriction_41192312; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  __int64 v16; // x2
  __int64 v17; // x3
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v19; // w9
  QuestRestrictionInfo_SlotInfo_o *v20; // x8
  bool v21; // zf
  Il2CppObject *v22; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v24; // x20

  if ( (byte_4B1739C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, *(_QWORD *)&pos, method);
    sub_1BCA7E0(&System_Predicate_RestrictionEntity__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__DisplayClass179_0__IsSelectableNormalSupport_b__0__, v8, v9);
    sub_1BCA7E0(&QuestRestrictionInfo___c__DisplayClass179_0_TypeInfo, v10, v11);
    byte_4B1739C = 1;
  }
  v12 = sub_1BCAA2C(QuestRestrictionInfo___c__DisplayClass179_0_TypeInfo, *(_QWORD *)&pos, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  *(_DWORD *)(v12 + 16) = pos;
  IsMyServantOrNpcRestriction_41192312 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(this, pos, v15);
  if ( !IsMyServantOrNpcRestriction_41192312 )
  {
    LOBYTE(v22) = 0;
    return (char)v22;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    v24 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_RestrictionEntity__TypeInfo, v14, v16, v17);
    System_Predicate_object____ctor(
      v24,
      (Il2CppObject *)v12,
      Method_QuestRestrictionInfo___c__DisplayClass179_0__IsSelectableNormalSupport_b__0__,
      0LL);
    if ( myServantOrNpcRestrictionEntityList )
    {
      v22 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v24,
              (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v22 )
        return (char)v22;
      v21 = LODWORD(v22[2].klass) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_1BCAA3C(IsMyServantOrNpcRestriction_41192312, v14);
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v19 = *(_DWORD *)(v12 + 16) - 1;
  if ( v19 >= slotInfos->max_length )
    sub_1BCAA44(IsMyServantOrNpcRestriction_41192312, v14);
  v20 = slotInfos->m_Items[v19];
  if ( !v20 )
    goto LABEL_18;
  v21 = v20->fields.slotType == 4;
LABEL_14:
  LOBYTE(v22) = v21;
  return (char)v22;
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
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t servantNumMax; // w8
  void *IsMyServantOrNpcRestriction_41192312; // x0
  int32_t *p_myServantNumMax; // x8
  int32_t v12; // w8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x9
  int v15; // w8
  int v16; // w9
  int v17; // w8
  int v18; // w10
  int v19; // w11
  bool v20; // zf
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  int max_length; // w9
  int v24; // w10
  int v25; // w9
  int32_t v26; // w11
  int v27; // w12

  if ( (byte_4B17397 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&pos);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__, v7, v8);
    byte_4B17397 = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  IsMyServantOrNpcRestriction_41192312 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    IsMyServantOrNpcRestriction_41192312 = BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    p_myServantNumMax = (int32_t *)(*((_QWORD *)IsMyServantOrNpcRestriction_41192312 + 23) + 156LL);
  }
  else
  {
    p_myServantNumMax = &this->fields.myServantNumMax;
    if ( this->fields.myServantNumMax <= 0 )
      p_myServantNumMax = &this->fields.servantNumMax;
  }
  v12 = *p_myServantNumMax;
  if ( this->fields.isMyServantOrNpc || this->fields.isMyServantOrSupport )
  {
    myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_44;
    v12 -= myServantOrNpcRestrictionEntityList->fields._size;
  }
  if ( v12 != 1 )
    return 0;
  IsMyServantOrNpcRestriction_41192312 = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(
                                                   this,
                                                   pos,
                                                   *(const MethodInfo **)&pos);
  if ( ((unsigned __int8)IsMyServantOrNpcRestriction_41192312 & 1) != 0 )
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
        v24 = 0;
        v25 = -max_length;
        do
        {
          if ( !(v25 + v24) )
LABEL_43:
            sub_1BCAA44(IsMyServantOrNpcRestriction_41192312, *(_QWORD *)&svtId);
          v26 = targetVals->m_Items[v24 + 1];
          if ( v26 == svtId )
            break;
          v27 = v25 + v24++;
        }
        while ( v27 != -1 );
        v20 = v26 == svtId;
        return !v20;
      }
      return 1;
    }
LABEL_44:
    sub_1BCAA3C(IsMyServantOrNpcRestriction_41192312, *(_QWORD *)&svtId);
  }
  IsMyServantOrNpcRestriction_41192312 = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                           this,
                                           *(const MethodInfo **)&svtId);
  if ( !IsMyServantOrNpcRestriction_41192312 )
    goto LABEL_44;
  v15 = *((_DWORD *)IsMyServantOrNpcRestriction_41192312 + 6);
  if ( v15 < 1 )
    return 1;
  v16 = 0;
  v17 = -v15;
  do
  {
    if ( !(v17 + v16) )
      goto LABEL_43;
    v18 = *((_DWORD *)IsMyServantOrNpcRestriction_41192312 + v16 + 8);
    if ( v18 == svtId )
      break;
    v19 = v17 + v16++;
  }
  while ( v19 != -1 );
  v20 = v18 == svtId;
  return !v20;
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
  if ( (byte_4B173AB & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&pos, *(_QWORD *)&initPos);
    byte_4B173AB = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( slotInfos )
  {
    if ( initPos - 1 >= slotInfos->max_length )
      sub_1BCAA44(this, *(_QWORD *)&pos);
    v8 = slotInfos->m_Items[initPos - 1];
    if ( !v8 )
      sub_1BCAA3C(this, *(_QWORD *)&pos);
    if ( v8->fields.isRequired )
      return 1;
  }
  servantNumMax = v6->fields.servantNumMax;
  if ( servantNumMax < 1 || v6->fields.servantNumMin > 0 )
    return 0;
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&pos);
    v11 = BalanceConfig_TypeInfo;
  }
  DeckMainMemberMax = v11->static_fields->DeckMainMemberMax;
  if ( servantNumMax <= DeckMainMemberMax )
  {
    DeckMainMemberMax = v6->fields.servantNumMax;
  }
  else if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&pos);
    DeckMainMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
  }
  return DeckMainMemberMax >= pos;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsSlotRestrictionForSupport(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Int32_array *Instance; // x0
  __int64 v26; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x22
  int max_length; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  unsigned int v30; // w23
  bool v31; // w21
  QuestRestrictionInfo_SlotInfo_o *v32; // x29
  int32_t v33; // w20
  Il2CppObject *Item; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x21

  if ( (byte_4B173B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_int___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Intersect_int___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____get_Count__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____get_Item__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B173B4 = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       svtId,
                                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_33;
    Instance = ServantEntity__getIndividuality((ServantEntity_o *)Instance, limitCount, dispLimitCount, 0LL);
    slotInfos = this->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_33;
    max_length = slotInfos->max_length;
    if ( max_length >= 1 )
    {
      v29 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      v30 = 0;
      v31 = 0;
      while ( 1 )
      {
        if ( v30 >= max_length )
          sub_1BCAA44(Instance, v26);
        v32 = slotInfos->m_Items[v30];
        if ( !v32 )
          break;
        if ( v32->fields.slotType == 2 )
        {
          Instance = (System_Int32_array *)v32->fields.individualityList;
          if ( !Instance )
            break;
          v33 = 0;
          while ( v33 < (signed int)Instance->max_length )
          {
            Instance = (System_Int32_array *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)Instance,
                                               v33,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_int____get_Item__);
            if ( !Instance )
              goto LABEL_33;
            if ( *(_QWORD *)&Instance->max_length )
            {
              Instance = (System_Int32_array *)v32->fields.individualityList;
              if ( !Instance )
                goto LABEL_33;
              Item = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Instance,
                       v33,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_int____get_Item__);
              v35 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)Item,
                      v29,
                      (const MethodInfo_2F36730 *)Method_System_Linq_Enumerable_Intersect_int___);
              Instance = System_Linq_Enumerable__ToArray_int_(
                           v35,
                           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
              if ( !v32->fields.rangeTypeList )
                goto LABEL_33;
              v36 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              if ( System_Collections_Generic_List_Int32Enum___get_Item(
                     (System_Collections_Generic_List_T__o *)v32->fields.rangeTypeList,
                     v33,
                     (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
              {
                if ( System_Linq_Enumerable__Any_int_(
                       v36,
                       (const MethodInfo_2F1E314 *)Method_System_Linq_Enumerable_Any_int___) )
                {
                  return 0;
                }
              }
              else
              {
                Instance = (System_Int32_array *)v32->fields.rangeTypeList;
                if ( !Instance )
                  goto LABEL_33;
                if ( System_Collections_Generic_List_Int32Enum___get_Item(
                       (System_Collections_Generic_List_T__o *)Instance,
                       v33,
                       (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 2
                  && !System_Linq_Enumerable__Any_int_(
                        v36,
                        (const MethodInfo_2F1E314 *)Method_System_Linq_Enumerable_Any_int___) )
                {
                  return 0;
                }
              }
              v31 = 1;
            }
            Instance = (System_Int32_array *)v32->fields.individualityList;
            ++v33;
            if ( !Instance )
              goto LABEL_33;
          }
        }
        max_length = slotInfos->max_length;
        if ( (int)++v30 >= max_length )
          return v31;
      }
LABEL_33:
      sub_1BCAA3C(Instance, v26);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x19
  unsigned int v13; // w21
  RestrictionWholeEntity_o *v14; // x8
  struct System_Int32_array *targetVals; // x23
  __int64 v16; // x8
  unsigned __int64 v17; // x24
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B173B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6, v7);
    byte_4B173B3 = 1;
  }
  entity = 0LL;
  if ( !this->fields.restrictionBaseEntity )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_23:
    sub_1BCAA3C(Master_object, v9);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return 1;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= max_length )
LABEL_24:
      sub_1BCAA44(Master_object, v9);
    v14 = restrictionWholeEntities->m_Items[v13];
    if ( !v14 )
      goto LABEL_23;
    if ( v14->fields.type == 9 )
    {
      targetVals = v14->fields.targetVals;
      if ( !targetVals )
        goto LABEL_23;
      v16 = *(_QWORD *)&targetVals->max_length;
      if ( (int)v16 >= 1 )
        break;
    }
LABEL_19:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v13 >= max_length )
      return 1;
  }
  v17 = 0LL;
  while ( 1 )
  {
    if ( v17 >= (unsigned int)v16 )
      goto LABEL_24;
    if ( !v12 )
      goto LABEL_23;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      v12,
                                      &entity,
                                      targetVals->m_Items[v17 + 1],
                                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      return 0;
    LODWORD(v16) = targetVals->max_length;
    if ( (__int64)++v17 >= (int)v16 )
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_41176740(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        FollowerInfo_o *npcFollowerInfo,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *Master_object; // x22
  Il2CppObject *v34; // x23
  DataManager_o *Instance; // x0
  __int64 v36; // x1
  System_Int32_array *OverwriteIndividuality; // x0
  struct System_Int32_array *uniqueIndividualitys; // x9
  __int64 v39; // x8
  BalanceConfig_c **v40; // x20
  const MethodInfo_31B3040 **v41; // x25
  const MethodInfo_2F2AF7C **v42; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x26
  unsigned __int64 v44; // x10
  int32_t v45; // w27
  unsigned __int64 i; // x19
  struct FollowerInfo_array *deckNpcInfoList; // x8
  FollowerInfo_o *v48; // x8
  struct FollowerInfo_array *v49; // x8
  FollowerInfo_o *v50; // x8
  System_Collections_Generic_IEnumerable_TSource__o *NpcServantIndividuality; // x0
  struct FollowerInfo_array *v52; // x8
  int32_t v53; // w21
  const MethodInfo_2F2AF7C **v54; // x27
  const MethodInfo_31B3040 **v55; // x24
  Il2CppObject *v56; // x25
  BalanceConfig_c **v57; // x23
  Il2CppObject *v58; // x20
  DataManager_o *v59; // x28
  struct System_Byte_array *masterDataBytes; // x22
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x26
  int32_t v62; // w0
  struct System_Int32_array *deckSvtIdList; // x8
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x9
  int32_t v67; // [xsp+0h] [xbp-B0h]
  int32_t v68; // [xsp+4h] [xbp-ACh]
  ServantEntity_o *v69; // [xsp+8h] [xbp-A8h]
  struct System_Int32_array *v70; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-98h]
  unsigned __int64 v72; // [xsp+20h] [xbp-90h]
  QuestRestrictionInfo_o *v73; // [xsp+28h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *v74; // [xsp+30h] [xbp-80h]
  Il2CppObject *v75; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v76; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_4B17381 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21, v22);
    sub_1BCA7E0(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v23,
      v24);
    sub_1BCA7E0(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__,
      v25,
      v26);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    byte_4B17381 = 1;
  }
  v76 = 0LL;
  entity = 0LL;
  v75 = 0LL;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_69;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v34 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo
    || (Instance = (DataManager_o *)FollowerInfo__get_IsNpc(npcFollowerInfo, 0LL), ((unsigned __int8)Instance & 1) == 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_80;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_80;
    dispLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                       (ServantLimitImageMaster_o *)Instance,
                       svtId,
                       dispLimitCount,
                       0LL);
    goto LABEL_16;
  }
  if ( !v34 )
    goto LABEL_80;
  Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v34,
                                &entity,
                                npcFollowerInfo->fields.npcFollowerSvtId,
                                (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !Master_object )
      goto LABEL_80;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &v76,
           npcFollowerInfo->fields.npcFollowerSvtId,
           (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
    {
      Instance = (DataManager_o *)v76;
      if ( !v76 )
        goto LABEL_80;
      if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v76, 0LL) )
      {
        Instance = (DataManager_o *)v76;
        if ( !v76 )
          goto LABEL_80;
        OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                   (NpcServantFollowerEntity_o *)v76,
                                   0LL);
        goto LABEL_78;
      }
    }
LABEL_16:
    source = 0LL;
    goto LABEL_17;
  }
  OverwriteIndividuality = FollowerInfo__GetNpcServantIndividuality(npcFollowerInfo, 0, 0, 0LL);
LABEL_78:
  source = (System_Collections_Generic_IEnumerable_TSource__o *)OverwriteIndividuality;
LABEL_17:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v74 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      svtId,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_80:
    sub_1BCAA3C(Instance, v36);
  }
  v39 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v39 < 1 )
  {
LABEL_69:
    LOBYTE(Instance) = 0;
    return (char)Instance;
  }
  v69 = (ServantEntity_o *)Instance;
  v67 = dispLimitCount;
  v68 = limitCount;
  v40 = &BalanceConfig_TypeInfo;
  v41 = (const MethodInfo_31B3040 **)&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__;
  v42 = (const MethodInfo_2F2AF7C **)&Method_System_Linq_Enumerable_Contains_int___;
  v43 = v74;
  v44 = 0LL;
  v70 = this->fields.uniqueIndividualitys;
  v73 = this;
  while ( 1 )
  {
    if ( v44 >= (unsigned int)v39 )
LABEL_81:
      sub_1BCAA44(Instance, v36);
    v45 = uniqueIndividualitys->m_Items[v44 + 1];
    v72 = v44;
    if ( !source )
      break;
    if ( System_Linq_Enumerable__Contains_int_(source, v45, *v42) )
      goto LABEL_29;
LABEL_67:
    uniqueIndividualitys = v70;
    Instance = 0LL;
    LODWORD(v39) = v70->max_length;
    v44 = v72 + 1;
    if ( (__int64)(v72 + 1) >= (int)v39 )
      return (char)Instance;
  }
  Instance = (DataManager_o *)v69;
  if ( !v69 )
    goto LABEL_80;
  if ( !ServantEntity__IsIndividuality(v69, v68, v67, v45, 0LL) )
    goto LABEL_67;
LABEL_29:
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)*v40;
    if ( !(*v40)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Instance, v36);
      Instance = (DataManager_o *)*v40;
    }
    if ( (__int64)i >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 156LL) )
      goto LABEL_67;
    deckNpcInfoList = this->fields.deckNpcInfoList;
    if ( !deckNpcInfoList )
      goto LABEL_80;
    if ( i >= deckNpcInfoList->max_length )
      goto LABEL_81;
    v48 = deckNpcInfoList->m_Items[i];
    if ( v48 )
    {
      if ( !v34 )
        goto LABEL_80;
      Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v34,
                                    &entity,
                                    v48->fields.npcFollowerSvtId,
                                    *v41);
      v49 = this->fields.deckNpcInfoList;
      if ( !v49 )
        goto LABEL_80;
      if ( i >= v49->max_length )
        goto LABEL_81;
      v50 = v49->m_Items[i];
      if ( !v50 )
        goto LABEL_80;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)FollowerInfo__GetNpcServantIndividuality(
                                                                                         v50,
                                                                                         0,
                                                                                         0,
                                                                                         0LL);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_80;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &v75,
                                      v50->fields.npcFollowerSvtId,
                                      (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_48;
        Instance = (DataManager_o *)v75;
        if ( !v75 )
          goto LABEL_80;
        Instance = (DataManager_o *)NpcServantFollowerEntity__IsOverwriteIndividuality(
                                      (NpcServantFollowerEntity_o *)v75,
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)v75;
          if ( !v75 )
            goto LABEL_80;
          NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantFollowerEntity__GetOverwriteIndividuality(
                                                                                           (NpcServantFollowerEntity_o *)v75,
                                                                                           0LL);
        }
        else
        {
LABEL_48:
          v52 = this->fields.deckNpcInfoList;
          if ( !v52 )
            goto LABEL_80;
          if ( i >= v52->max_length )
            goto LABEL_81;
          Instance = (DataManager_o *)v52->m_Items[i];
          if ( !Instance )
            goto LABEL_80;
          v53 = v45;
          v54 = v42;
          v55 = v41;
          v56 = v34;
          v57 = v40;
          v58 = Master_object;
          Instance = (DataManager_o *)FollowerInfo__getServantLeaderInfo((FollowerInfo_o *)Instance, 0, 0, 0LL);
          if ( !Instance )
            goto LABEL_80;
          v59 = Instance;
          lookup = Instance->fields.lookup;
          masterDataBytes = Instance->fields.masterDataBytes;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36);
          *(_QWORD *)&v78.fields.currentCryptoKey = lookup;
          *(_QWORD *)&v78.fields.fakeValue = masterDataBytes;
          v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v78, 0LL);
          v43 = v74;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        v74,
                                        v62,
                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_80;
          NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                           (ServantEntity_o *)Instance,
                                                                                           (int32_t)v59->fields.saveNameList,
                                                                                           HIDWORD(v59[1].monitor),
                                                                                           0LL);
          Master_object = v58;
          v40 = v57;
          v34 = v56;
          v41 = v55;
          v42 = v54;
          v45 = v53;
          this = v73;
        }
      }
      Instance = (DataManager_o *)System_Linq_Enumerable__Contains_int_(NpcServantIndividuality, v45, *v42);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
    }
    deckSvtIdList = this->fields.deckSvtIdList;
    if ( !deckSvtIdList )
      goto LABEL_80;
    if ( i >= deckSvtIdList->max_length )
      goto LABEL_81;
    v36 = (unsigned int)deckSvtIdList->m_Items[i + 1];
    if ( (int)v36 >= 1 )
    {
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    v43,
                                    v36,
                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      deckLimitCountList = this->fields.deckLimitCountList;
      if ( !deckLimitCountList )
        goto LABEL_80;
      if ( i >= deckLimitCountList->max_length )
        goto LABEL_81;
      deckDispLimitCountList = this->fields.deckDispLimitCountList;
      if ( !deckDispLimitCountList )
        goto LABEL_80;
      if ( i >= deckDispLimitCountList->max_length )
        goto LABEL_81;
      if ( !Instance )
        goto LABEL_80;
      if ( ServantEntity__IsIndividuality(
             (ServantEntity_o *)Instance,
             deckLimitCountList->m_Items[i + 1],
             deckDispLimitCountList->m_Items[i + 1],
             v45,
             0LL) )
      {
        break;
      }
    }
  }
  LOBYTE(Instance) = 1;
  return (char)Instance;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_41178148(
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  void *Instance; // x0
  System_Int32_array *OverwriteIndividuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x27
  struct System_Int32_array *uniqueIndividualitys; // x9
  __int64 v47; // x8
  unsigned __int64 v48; // x26
  int32_t v49; // w29
  int32_t i; // w22
  FollowerInfo_o *v51; // x23
  PartyOrganizationListViewItem_o *v52; // x28
  System_Collections_Generic_IEnumerable_TSource__o *NpcServantIndividuality; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // kr00_16
  int32_t v55; // w0
  Il2CppObject *v56; // x23
  int32_t svtLimitCount; // w24
  _DWORD *v58; // x23
  __int64 v59; // x24
  __int64 v60; // x28
  int32_t v61; // w0
  int32_t v63; // [xsp+4h] [xbp-ACh]
  ServantEntity_o *v64; // [xsp+8h] [xbp-A8h]
  struct System_Int32_array *v65; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_IEnumerable_TSource__o *v66; // [xsp+18h] [xbp-98h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *v68; // [xsp+28h] [xbp-88h]
  Il2CppObject *v69; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *v70; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v71; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_4B17382 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v23, v24);
    sub_1BCA7E0(&DataManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27, v28);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v29, v30);
    sub_1BCA7E0(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v31,
      v32);
    sub_1BCA7E0(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__,
      v33,
      v34);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v35, v36);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40);
    byte_4B17382 = 1;
  }
  v71 = 0LL;
  entity = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v68 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo || !FollowerInfo__get_IsNpc(npcFollowerInfo, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_72;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_72;
    dispLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                       (ServantLimitImageMaster_o *)Instance,
                       svtId,
                       dispLimitCount,
                       0LL);
    goto LABEL_16;
  }
  Instance = v68;
  if ( !v68 )
    goto LABEL_72;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          v68,
          &entity,
          npcFollowerInfo->fields.npcFollowerSvtId,
          (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    Instance = Master_object;
    if ( !Master_object )
      goto LABEL_72;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           Master_object,
           &v71,
           npcFollowerInfo->fields.npcFollowerSvtId,
           (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
    {
      Instance = v71;
      if ( !v71 )
        goto LABEL_72;
      if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v71, 0LL) )
      {
        Instance = v71;
        if ( !v71 )
          goto LABEL_72;
        OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                   (NpcServantFollowerEntity_o *)v71,
                                   0LL);
        goto LABEL_71;
      }
    }
LABEL_16:
    v44 = 0LL;
    goto LABEL_17;
  }
  OverwriteIndividuality = FollowerInfo__GetNpcServantIndividuality(npcFollowerInfo, 0, 0, 0LL);
LABEL_71:
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)OverwriteIndividuality;
LABEL_17:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        uniqueIndividualitys = this->fields.uniqueIndividualitys,
        v64 = (ServantEntity_o *)Instance,
        !uniqueIndividualitys) )
  {
LABEL_72:
    sub_1BCAA3C(Instance, v41);
  }
  v47 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v47 >= 1 )
  {
    v63 = limitCount;
    v48 = 0LL;
    v65 = this->fields.uniqueIndividualitys;
    v66 = v44;
    do
    {
      if ( v48 >= (unsigned int)v47 )
        sub_1BCAA44(Instance, v41);
      v49 = uniqueIndividualitys->m_Items[v48 + 1];
      if ( v44 )
      {
        Instance = (void *)System_Linq_Enumerable__Contains_int_(
                             v44,
                             v49,
                             (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          goto LABEL_29;
      }
      else
      {
        Instance = v64;
        if ( !v64 )
          goto LABEL_72;
        Instance = (void *)ServantEntity__IsIndividuality(v64, v63, dispLimitCount, v49, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
LABEL_29:
          for ( i = 0; ; ++i )
          {
            Instance = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v41);
              Instance = BalanceConfig_TypeInfo;
            }
            if ( i >= *(_DWORD *)(*((_QWORD *)Instance + 23) + 156LL) )
              break;
            if ( num != i && partyIndex != i )
            {
              if ( !partyItem )
                goto LABEL_72;
              Instance = PartyListViewItem__GetMember(partyItem, i, 0LL);
              if ( !Instance )
                goto LABEL_72;
              v51 = (FollowerInfo_o *)*((_QWORD *)Instance + 15);
              v52 = (PartyOrganizationListViewItem_o *)Instance;
              if ( v51 && FollowerInfo__get_IsNpc(*((FollowerInfo_o **)Instance + 15), 0LL) )
              {
                Instance = v68;
                if ( !v68 )
                  goto LABEL_72;
                if ( DataMasterBase_object__object__long___TryGetEntity(
                       v68,
                       &entity,
                       v51->fields.npcFollowerSvtId,
                       (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
                {
                  NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)FollowerInfo__GetNpcServantIndividuality(
                                                                                                   v51,
                                                                                                   0,
                                                                                                   0,
                                                                                                   0LL);
                }
                else
                {
                  Instance = Master_object;
                  if ( !Master_object )
                    goto LABEL_72;
                  if ( !DataMasterBase_object__object__long___TryGetEntity(
                          Master_object,
                          &v70,
                          v51->fields.npcFollowerSvtId,
                          (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
                    goto LABEL_54;
                  Instance = v70;
                  if ( !v70 )
                    goto LABEL_72;
                  if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v70, 0LL) )
                  {
                    Instance = v70;
                    if ( !v70 )
                      goto LABEL_72;
                    NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantFollowerEntity__GetOverwriteIndividuality(
                                                                                                     (NpcServantFollowerEntity_o *)v70,
                                                                                                     0LL);
                  }
                  else
                  {
LABEL_54:
                    Instance = FollowerInfo__getServantLeaderInfo(v51, 0, 0, 0LL);
                    if ( !Instance )
                      goto LABEL_72;
                    v58 = Instance;
                    v60 = *((_QWORD *)Instance + 6);
                    v59 = *((_QWORD *)Instance + 7);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
                    *(_QWORD *)&v73.fields.currentCryptoKey = v60;
                    *(_QWORD *)&v73.fields.fakeValue = v59;
                    v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v73, 0LL);
                    Instance = DataMasterBase_object__object__int___GetEntity(
                                 v45,
                                 v61,
                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                    if ( !Instance )
                      goto LABEL_72;
                    NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                                     (ServantEntity_o *)Instance,
                                                                                                     v58[16],
                                                                                                     v58[41],
                                                                                                     0LL);
                  }
                }
                if ( System_Linq_Enumerable__Contains_int_(
                       NpcServantIndividuality,
                       v49,
                       (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
                {
                  return 1;
                }
              }
              else
              {
                v54 = PartyOrganizationListViewItem__get_SvtId(v52, 0LL);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(
                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                    *(_QWORD *)&v54.fields.fakeValue);
                v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v54, 0LL);
                if ( DataMasterBase_object__object__int___TryGetEntity(
                       v45,
                       &v69,
                       v55,
                       (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
                {
                  v56 = v69;
                  svtLimitCount = v52->fields.svtLimitCount;
                  Instance = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(v52, 0LL);
                  if ( !v56 )
                    goto LABEL_72;
                  if ( ServantEntity__IsIndividuality(
                         (ServantEntity_o *)v56,
                         svtLimitCount,
                         (int32_t)Instance,
                         v49,
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
      uniqueIndividualitys = v65;
      v44 = v66;
      ++v48;
      LODWORD(v47) = v65->max_length;
    }
    while ( (__int64)v48 < (int)v47 );
  }
  return 0;
}


bool __fastcall QuestRestrictionInfo__IsUniqueServant(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueServant_41176212(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  bool isUniqueServant; // w8
  signed int v6; // w22
  BalanceConfig_c *v7; // x0
  struct System_Int32_array *deckSvtIdList; // x9
  int32_t v9; // w9

  if ( (byte_4B1737F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId, method);
    byte_4B1737F = 1;
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
            j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&svtId);
            v7 = BalanceConfig_TypeInfo;
          }
          isUniqueServant = v6 < v7->static_fields->DeckMemberMax;
          if ( v6 >= v7->static_fields->DeckMemberMax )
            break;
          deckSvtIdList = this->fields.deckSvtIdList;
          if ( !deckSvtIdList )
            sub_1BCAA3C(v7, *(_QWORD *)&svtId);
          if ( v6 >= deckSvtIdList->max_length )
            sub_1BCAA44(v7, *(_QWORD *)&svtId);
          v9 = deckSvtIdList->m_Items[++v6];
        }
        while ( v9 != svtId );
      }
    }
  }
  return isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueServant_41176412(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  bool v13; // w24
  int32_t i; // w23
  PartyOrganizationListViewItem_o *Member; // x0
  int32_t v16; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // kr00_16

  if ( (byte_4B17380 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId, partyItem);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    byte_4B17380 = 1;
  }
  if ( !this->fields.isUniqueServant )
    return 0;
  v13 = 0;
  if ( svtId >= 1 && this->fields.deckSvtIdList )
  {
    for ( i = 0; ; ++i )
    {
      Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
        Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      v16 = *(_DWORD *)(*(_QWORD *)&Member->fields.classId + 156LL);
      v13 = i < v16;
      if ( i >= v16 )
        break;
      if ( num != i && partyIndex != i )
      {
        if ( !partyItem || (Member = PartyListViewItem__GetMember(partyItem, i, 0LL)) == 0LL )
          sub_1BCAA3C(Member, *(_QWORD *)&svtId);
        v17 = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&v17.fields.fakeValue);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL) == svtId )
          break;
      }
    }
  }
  return v13;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BalanceConfig_c *v8; // x0
  struct System_Int32_array *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct FollowerInfo_array *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x1

  if ( (byte_4B1736E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&FollowerInfo___TypeInfo, v4, v5);
    sub_1BCA7E0(&int___TypeInfo, v6, v7);
    byte_4B1736E = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v8->static_fields->DeckMemberMax);
  this->fields.deckSvtIdList = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.deckSvtIdList, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (struct FollowerInfo_array *)sub_1BCA888(
                                       FollowerInfo___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
  this->fields.deckNpcInfoList = v16;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.deckNpcInfoList, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, v23);
}


void __fastcall QuestRestrictionInfo__SetDeckInfo(
        QuestRestrictionInfo_o *this,
        UserDeckEntity_o *userDeckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Master_object; // x21
  unsigned __int64 v12; // x22
  __int64 v13; // x26
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x28
  __int64 NpcFollowerServantId; // x0
  struct System_Int32_array *deckSvtIdList; // x8
  struct FollowerInfo_array *deckNpcInfoList; // x8
  unsigned __int64 max_length; // x9
  struct FollowerInfo_array *v26; // x8
  struct FollowerInfo_array *v27; // x24
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x23
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v36; // x23
  struct System_Int32_array *v37; // x29
  __int64 v38; // x24
  __int64 v39; // x25
  struct System_Int32_array *deckLimitCountList; // x29
  __int64 v41; // x24
  __int64 v42; // x25
  struct System_Int32_array *deckDispLimitCountList; // x24
  __int64 v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4B1736B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userDeckEntity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcFollowerMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B1736B = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtIdList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userDeckEntity);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v12 = 0LL;
    v13 = 32LL;
    v21 = (unsigned int)UserDeckEntity__GetFollowerIndex(userDeckEntity, 0LL) - 1LL;
    while ( 1 )
    {
      NpcFollowerServantId = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14);
        NpcFollowerServantId = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v12 >= *(int *)(*(_QWORD *)(NpcFollowerServantId + 184) + 156LL) )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_44;
      if ( v12 >= deckSvtIdList->max_length )
        goto LABEL_43;
      deckSvtIdList->m_Items[v12 + 1] = 0;
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList )
      {
        max_length = deckNpcInfoList->max_length;
        if ( (__int64)v12 < (int)max_length )
        {
          if ( v12 >= max_length )
            goto LABEL_43;
          deckNpcInfoList->m_Items[v12] = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)((char *)deckNpcInfoList + v13), 0LL, v15, v16, v17, v18, v19, v20);
        }
      }
      if ( v21 != v12 )
      {
        v26 = this->fields.deckNpcInfoList;
        if ( v26 )
        {
          if ( (__int64)v12 < (int)v26->max_length )
          {
            NpcFollowerServantId = UserDeckEntity__GetNpcFollowerServantId(userDeckEntity, v12, 0LL);
            if ( NpcFollowerServantId >= 1 )
            {
              if ( !Master_object )
                goto LABEL_44;
              NpcFollowerServantId = (__int64)NpcFollowerMaster__GetEntity_40158156(
                                                (NpcFollowerMaster_o *)Master_object,
                                                this->fields.questId,
                                                this->fields.questPhase,
                                                NpcFollowerServantId,
                                                0LL);
              if ( !NpcFollowerServantId )
                goto LABEL_44;
              v27 = this->fields.deckNpcInfoList;
              NpcFollowerServantId = (__int64)NpcFollowerMaster__GetFollower(
                                                (NpcFollowerMaster_o *)Master_object,
                                                this->fields.questId,
                                                this->fields.questPhase,
                                                *(_QWORD *)(NpcFollowerServantId + 16),
                                                0LL);
              if ( !v27 )
                goto LABEL_44;
              v34 = NpcFollowerServantId;
              if ( NpcFollowerServantId )
              {
                NpcFollowerServantId = sub_1BCA91C(NpcFollowerServantId, v27->obj.klass->_1.element_class);
                if ( !NpcFollowerServantId )
                {
                  v44 = sub_1BCAA60(0LL);
                  sub_1BCA908(v44, 0LL);
                }
              }
              if ( v12 >= v27->max_length )
LABEL_43:
                sub_1BCAA44(NpcFollowerServantId, v14);
              v27->m_Items[v12] = (FollowerInfo_o *)v34;
              sub_1BCA784((PartyOrganizationUtility_o *)((char *)v27 + v13), v34, v28, v29, v30, v31, v32, v33);
            }
          }
        }
        UserServant = UserDeckEntity__GetUserServant(userDeckEntity, v12, 0LL);
        if ( UserServant )
        {
          v36 = UserServant;
          v37 = this->fields.deckSvtIdList;
          v39 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v38 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
          *(_QWORD *)&v45.fields.currentCryptoKey = v39;
          *(_QWORD *)&v45.fields.fakeValue = v38;
          NpcFollowerServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v45, 0LL);
          if ( !v37 )
LABEL_44:
            sub_1BCAA3C(NpcFollowerServantId, v14);
          if ( v12 >= v37->max_length )
            goto LABEL_43;
          v37->m_Items[v12 + 1] = NpcFollowerServantId;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v42 = *(_QWORD *)&v36->fields.limitCount.fields.currentCryptoKey;
            v41 = *(_QWORD *)&v36->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
            *(_QWORD *)&v46.fields.currentCryptoKey = v42;
            *(_QWORD *)&v46.fields.fakeValue = v41;
            NpcFollowerServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v46, 0LL);
            if ( v12 >= deckLimitCountList->max_length )
              goto LABEL_43;
            deckLimitCountList->m_Items[v12 + 1] = NpcFollowerServantId;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            NpcFollowerServantId = UserServantEntity__getDispLimitCount(v36, 0, 0LL);
            if ( v12 >= deckDispLimitCountList->max_length )
              goto LABEL_43;
            deckDispLimitCountList->m_Items[v12 + 1] = NpcFollowerServantId;
          }
        }
      }
      ++v12;
      v13 += 8LL;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_41166008(
        QuestRestrictionInfo_o *this,
        UserEventDeckEntity_o *eventDeckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_int__o *fixed; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *v15; // x21
  unsigned __int64 v16; // x23
  __int64 v17; // x27
  __int64 v18; // x1
  __int64 v19; // x22
  __int64 Follower; // x0
  struct System_Int32_array *deckSvtIdList; // x8
  struct FollowerInfo_array *deckNpcInfoList; // x8
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct FollowerInfo_array *v29; // x8
  struct FollowerInfo_array *v30; // x8
  int64_t NpcFollowerServantId; // x0
  int64_t v32; // x3
  NpcFollowerEntity_o *Entity_40158156; // x0
  struct FollowerInfo_array *v34; // x25
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x24
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v43; // x24
  struct System_Int32_array *v44; // x29
  __int64 v45; // x25
  __int64 v46; // x26
  struct System_Int32_array *deckLimitCountList; // x29
  __int64 v48; // x25
  __int64 v49; // x26
  struct System_Int32_array *deckDispLimitCountList; // x25
  __int64 v51; // x0
  NpcFollowerMaster_o *Master_object; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4B1736C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, eventDeckEntity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcFollowerMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    byte_4B1736C = 1;
  }
  fixed = QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, (const MethodInfo *)eventDeckEntity);
  if ( eventDeckEntity && this->fields.deckSvtIdList )
  {
    v15 = fixed;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
    Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v16 = 0LL;
    v17 = 32LL;
    v19 = (unsigned int)UserEventDeckEntity__GetFollowerIndex(eventDeckEntity, 0LL) - 1LL;
    while ( 1 )
    {
      Follower = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
        Follower = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v16 >= *(int *)(*(_QWORD *)(Follower + 184) + 156LL) )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_48;
      if ( v16 >= deckSvtIdList->max_length )
        goto LABEL_49;
      deckSvtIdList->m_Items[v16 + 1] = 0;
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList && (__int64)v16 < (int)deckNpcInfoList->max_length )
      {
        if ( !v15 )
          goto LABEL_48;
        Follower = System_Collections_Generic_List_int___Contains(
                     v15,
                     v16,
                     (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Follower & 1) == 0 )
        {
          v29 = this->fields.deckNpcInfoList;
          if ( !v29 )
            goto LABEL_48;
          if ( v16 >= v29->max_length )
            goto LABEL_49;
          v29->m_Items[v16] = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)((char *)v29 + v17), 0LL, v23, v24, v25, v26, v27, v28);
        }
      }
      if ( v19 != v16 )
      {
        v30 = this->fields.deckNpcInfoList;
        if ( v30 && (__int64)v16 < (int)v30->max_length )
        {
          if ( !v15 )
            goto LABEL_48;
          if ( !System_Collections_Generic_List_int___Contains(
                  v15,
                  v16,
                  (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            NpcFollowerServantId = UserEventDeckEntity__GetNpcFollowerServantId(eventDeckEntity, v16, 0LL);
            if ( NpcFollowerServantId >= 1 )
            {
              v32 = NpcFollowerServantId;
              Follower = (__int64)Master_object;
              if ( !Master_object )
                goto LABEL_48;
              Entity_40158156 = NpcFollowerMaster__GetEntity_40158156(
                                  Master_object,
                                  this->fields.questId,
                                  this->fields.questPhase,
                                  v32,
                                  0LL);
              if ( Entity_40158156 )
              {
                v34 = this->fields.deckNpcInfoList;
                Follower = (__int64)NpcFollowerMaster__GetFollower(
                                      Master_object,
                                      this->fields.questId,
                                      this->fields.questPhase,
                                      Entity_40158156->fields.id,
                                      0LL);
                if ( !v34 )
                  goto LABEL_48;
                v41 = Follower;
                if ( Follower )
                {
                  Follower = sub_1BCA91C(Follower, v34->obj.klass->_1.element_class);
                  if ( !Follower )
                  {
                    v51 = sub_1BCAA60(0LL);
                    sub_1BCA908(v51, 0LL);
                  }
                }
                if ( v16 >= v34->max_length )
                  goto LABEL_49;
                v34->m_Items[v16] = (FollowerInfo_o *)v41;
                sub_1BCA784((PartyOrganizationUtility_o *)((char *)v34 + v17), v41, v35, v36, v37, v38, v39, v40);
              }
            }
          }
        }
        UserServant = UserEventDeckEntity__GetUserServant(eventDeckEntity, v16, 0LL);
        if ( UserServant )
        {
          v43 = UserServant;
          v44 = this->fields.deckSvtIdList;
          v46 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v45 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
          *(_QWORD *)&v53.fields.currentCryptoKey = v46;
          *(_QWORD *)&v53.fields.fakeValue = v45;
          Follower = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v53, 0LL);
          if ( !v44 )
LABEL_48:
            sub_1BCAA3C(Follower, v18);
          if ( v16 >= v44->max_length )
LABEL_49:
            sub_1BCAA44(Follower, v18);
          v44->m_Items[v16 + 1] = Follower;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v49 = *(_QWORD *)&v43->fields.limitCount.fields.currentCryptoKey;
            v48 = *(_QWORD *)&v43->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
            *(_QWORD *)&v54.fields.currentCryptoKey = v49;
            *(_QWORD *)&v54.fields.fakeValue = v48;
            Follower = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v54, 0LL);
            if ( v16 >= deckLimitCountList->max_length )
              goto LABEL_49;
            deckLimitCountList->m_Items[v16 + 1] = Follower;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            Follower = UserServantEntity__getDispLimitCount(v43, 0, 0LL);
            if ( v16 >= deckDispLimitCountList->max_length )
              goto LABEL_49;
            deckDispLimitCountList->m_Items[v16 + 1] = Follower;
          }
        }
      }
      ++v16;
      v17 += 8LL;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo__SetDeckInfo_41167360(
        QuestRestrictionInfo_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  unsigned __int64 v13; // x21
  unsigned __int64 v14; // x27
  __int64 i; // x28
  __int64 Member; // x0
  struct FollowerInfo_array *deckNpcInfoList; // x8
  unsigned __int64 max_length; // x9
  struct System_Int32_array *deckSvtIdList; // x8
  struct System_Int32_array *v20; // x29
  PartyOrganizationListViewItem_o *v21; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x23
  struct FollowerInfo_array *v25; // x8
  FollowerInfo_o *followerInfo; // x0
  struct FollowerInfo_array *v27; // x23
  int64_t v28; // x22
  __int64 v29; // x0

  if ( (byte_4B1736D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, partyItem, *(_QWORD *)&num);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    byte_4B1736D = 1;
  }
  if ( this->fields.deckSvtIdList )
  {
    v13 = 0LL;
    v14 = (unsigned int)num;
    for ( i = 32LL; ; i += 8LL )
    {
      Member = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, partyItem);
        Member = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v13 >= *(int *)(*(_QWORD *)(Member + 184) + 156LL) )
        break;
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList )
      {
        max_length = deckNpcInfoList->max_length;
        if ( (__int64)v13 < (int)max_length )
        {
          if ( v13 >= max_length )
            goto LABEL_40;
          deckNpcInfoList->m_Items[v13] = 0LL;
          sub_1BCA784(
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
      if ( v14 == v13 )
      {
        deckSvtIdList = this->fields.deckSvtIdList;
        if ( !deckSvtIdList )
          goto LABEL_39;
        if ( deckSvtIdList->max_length <= v14 )
          goto LABEL_40;
        deckSvtIdList->m_Items[v14 + 1] = 0;
      }
      else
      {
        if ( !partyItem )
          goto LABEL_39;
        Member = (__int64)PartyListViewItem__GetMember(partyItem, v13, 0LL);
        if ( !Member )
          goto LABEL_39;
        v20 = this->fields.deckSvtIdList;
        v21 = (PartyOrganizationListViewItem_o *)Member;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Member, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&SvtId.fields.fakeValue);
        Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(SvtId, 0LL);
        if ( !v20 )
LABEL_39:
          sub_1BCAA3C(Member, partyItem);
        if ( v13 >= v20->max_length )
          goto LABEL_40;
        v20->m_Items[v13 + 1] = Member;
        deckLimitCountList = this->fields.deckLimitCountList;
        if ( deckLimitCountList )
        {
          if ( v13 >= deckLimitCountList->max_length )
            goto LABEL_40;
          deckLimitCountList->m_Items[v13 + 1] = v21->fields.svtLimitCount;
        }
        deckDispLimitCountList = this->fields.deckDispLimitCountList;
        if ( deckDispLimitCountList )
        {
          Member = PartyOrganizationListViewItem__GetDispImageLimitCount(v21, 0LL);
          if ( v13 >= deckDispLimitCountList->max_length )
            goto LABEL_40;
          deckDispLimitCountList->m_Items[v13 + 1] = Member;
        }
        v25 = this->fields.deckNpcInfoList;
        if ( v25 )
        {
          if ( (__int64)v13 < (int)v25->max_length )
          {
            followerInfo = v21->fields.followerInfo;
            if ( followerInfo )
            {
              Member = FollowerInfo__get_IsNpc(followerInfo, 0LL);
              if ( (Member & 1) != 0 )
              {
                v27 = this->fields.deckNpcInfoList;
                if ( !v27 )
                  goto LABEL_39;
                v28 = (int64_t)v21->fields.followerInfo;
                if ( v28 )
                {
                  Member = sub_1BCA91C(v28, v27->obj.klass->_1.element_class);
                  if ( !Member )
                  {
                    v29 = sub_1BCAA60(0LL);
                    sub_1BCA908(v29, 0LL);
                  }
                }
                if ( v13 >= v27->max_length )
LABEL_40:
                  sub_1BCAA44(Member, partyItem);
                v27->m_Items[v13] = (FollowerInfo_o *)v28;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)((char *)v27 + i),
                  v28,
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
      ++v13;
    }
  }
}


System_Collections_Generic_List_int__o *__fastcall QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_int__o *v13; // x20
  __int64 v14; // x1
  FollowerInfo_array *Master_object; // x0
  __int64 v16; // x1
  int max_length; // w8
  FollowerInfo_array *v18; // x21
  unsigned int v19; // w23
  int64_t v20; // x22
  struct FollowerInfo_array *deckNpcInfoList; // x25
  int v22; // w26
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  char *v29; // x0
  int v30; // w9
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x10
  __int64 size; // x11
  __int64 v35; // x0

  if ( (byte_4B1736F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcFollowerMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    byte_4B1736F = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.deckNpcInfoList && this->fields.isNpcMultipleBattle && !this->fields.isNpcEditablePos )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
    Master_object = (FollowerInfo_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object
      || (Master_object = NpcFollowerMaster__GetQuestFollowerList(
                            (NpcFollowerMaster_o *)Master_object,
                            this->fields.questId,
                            this->fields.questPhase,
                            0LL)) == 0LL )
    {
LABEL_25:
      sub_1BCAA3C(Master_object, v16);
    }
    max_length = Master_object->max_length;
    v18 = Master_object;
    if ( max_length >= 1 )
    {
      v19 = 0;
      while ( v19 < max_length )
      {
        v20 = (int64_t)v18->m_Items[v19];
        if ( !v20 )
          goto LABEL_25;
        if ( *(_BYTE *)(v20 + 105) )
        {
          deckNpcInfoList = this->fields.deckNpcInfoList;
          if ( !deckNpcInfoList )
            goto LABEL_25;
          v22 = *(_DWORD *)(v20 + 88);
          Master_object = (FollowerInfo_array *)sub_1BCA91C(v20, deckNpcInfoList->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v35 = sub_1BCAA60(0LL);
            sub_1BCA908(v35, 0LL);
          }
          if ( v22 - 1 >= deckNpcInfoList->max_length )
            break;
          v29 = (char *)deckNpcInfoList + 8 * v22 - 8;
          *((_QWORD *)v29 + 4) = v20;
          sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 32), v20, v23, v24, v25, v26, v27, v28);
          if ( !v13 )
            goto LABEL_25;
          v30 = *(_DWORD *)(v20 + 88);
          items = v13->fields._items;
          v32 = Method_System_Collections_Generic_List_int__Add__;
          ++v13->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v13->fields._size;
          v16 = (unsigned int)(v30 - 1);
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v13,
              v16,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v13->fields._size = size + 1;
            items->m_Items[size + 1] = v16;
          }
        }
        max_length = v18->max_length;
        if ( (int)++v19 >= max_length )
          return v13;
      }
      sub_1BCAA44(Master_object, v16);
    }
  }
  return v13;
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x1
  __int64 v144; // x2
  __int64 v145; // x1
  __int64 v146; // x2
  struct System_String_o *v147; // x20
  void *v148; // x1
  QuestRestrictionInfo_o *v149; // x29
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  int64_t v168; // x2
  int32_t v169; // w3
  System_String_o *v170; // x4
  BattleSetupInfo_o *v171; // x5
  FollowerInfo_o *v172; // x6
  PartyListViewItem_o *v173; // x7
  int64_t v174; // x2
  int32_t v175; // w3
  System_String_o *v176; // x4
  BattleSetupInfo_o *v177; // x5
  FollowerInfo_o *v178; // x6
  PartyListViewItem_o *v179; // x7
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  PartyOrganizationUtility_o *p_supportPositionList; // x24
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  int64_t v193; // x2
  int32_t v194; // w3
  System_String_o *v195; // x4
  BattleSetupInfo_o *v196; // x5
  FollowerInfo_o *v197; // x6
  PartyListViewItem_o *v198; // x7
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  int64_t v205; // x2
  int32_t v206; // w3
  System_String_o *v207; // x4
  BattleSetupInfo_o *v208; // x5
  FollowerInfo_o *v209; // x6
  PartyListViewItem_o *v210; // x7
  int64_t v211; // x2
  int32_t v212; // w3
  System_String_o *v213; // x4
  BattleSetupInfo_o *v214; // x5
  FollowerInfo_o *v215; // x6
  PartyListViewItem_o *v216; // x7
  int32_t *p_eventDeckNum; // x27
  __int64 v218; // x1
  __int64 v219; // x2
  __int64 v220; // x3
  System_Collections_Generic_List_object__o *v221; // x20
  int64_t v222; // x2
  int32_t v223; // w3
  System_String_o *v224; // x4
  BattleSetupInfo_o *v225; // x5
  FollowerInfo_o *v226; // x6
  PartyListViewItem_o *v227; // x7
  __int64 v228; // x1
  __int64 v229; // x2
  __int64 v230; // x3
  System_Collections_Generic_List_int__o *v231; // x20
  int64_t v232; // x2
  int32_t v233; // w3
  System_String_o *v234; // x4
  BattleSetupInfo_o *v235; // x5
  FollowerInfo_o *v236; // x6
  PartyListViewItem_o *v237; // x7
  int64_t v238; // x2
  int32_t v239; // w3
  System_String_o *v240; // x4
  BattleSetupInfo_o *v241; // x5
  FollowerInfo_o *v242; // x6
  PartyListViewItem_o *v243; // x7
  int64_t v244; // x2
  int32_t v245; // w3
  System_String_o *v246; // x4
  BattleSetupInfo_o *v247; // x5
  FollowerInfo_o *v248; // x6
  PartyListViewItem_o *v249; // x7
  int64_t v250; // x2
  int32_t v251; // w3
  System_String_o *v252; // x4
  BattleSetupInfo_o *v253; // x5
  FollowerInfo_o *v254; // x6
  PartyListViewItem_o *v255; // x7
  int64_t v256; // x2
  int32_t v257; // w3
  System_String_o *v258; // x4
  BattleSetupInfo_o *v259; // x5
  FollowerInfo_o *v260; // x6
  PartyListViewItem_o *v261; // x7
  __int64 v262; // x1
  __int64 v263; // x2
  __int64 v264; // x3
  System_Collections_Generic_List_object__o *v265; // x20
  int64_t v266; // x2
  int32_t v267; // w3
  System_String_o *v268; // x4
  BattleSetupInfo_o *v269; // x5
  FollowerInfo_o *v270; // x6
  PartyListViewItem_o *v271; // x7
  __int64 v272; // x1
  __int64 v273; // x2
  __int64 v274; // x3
  System_Collections_Generic_List_object__o *v275; // x20
  int64_t v276; // x2
  int32_t v277; // w3
  System_String_o *v278; // x4
  BattleSetupInfo_o *v279; // x5
  FollowerInfo_o *v280; // x6
  PartyListViewItem_o *v281; // x7
  __int64 v282; // x1
  __int64 v283; // x2
  __int64 v284; // x3
  System_Collections_Generic_List_object__o *v285; // x20
  int64_t v286; // x2
  int32_t v287; // w3
  System_String_o *v288; // x4
  BattleSetupInfo_o *v289; // x5
  FollowerInfo_o *v290; // x6
  PartyListViewItem_o *v291; // x7
  __int64 v292; // x1
  __int64 v293; // x2
  __int64 v294; // x3
  System_Collections_Generic_List_object__o *v295; // x20
  int64_t v296; // x2
  int32_t v297; // w3
  System_String_o *v298; // x4
  BattleSetupInfo_o *v299; // x5
  FollowerInfo_o *v300; // x6
  PartyListViewItem_o *v301; // x7
  __int64 v302; // x1
  __int64 v303; // x2
  __int64 v304; // x3
  System_Collections_Generic_List_object__o *v305; // x20
  int64_t v306; // x2
  int32_t v307; // w3
  System_String_o *v308; // x4
  BattleSetupInfo_o *v309; // x5
  FollowerInfo_o *v310; // x6
  PartyListViewItem_o *v311; // x7
  __int64 v312; // x1
  __int64 v313; // x2
  __int64 v314; // x3
  System_Collections_Generic_List_object__o *v315; // x20
  int64_t v316; // x2
  int32_t v317; // w3
  System_String_o *v318; // x4
  BattleSetupInfo_o *v319; // x5
  FollowerInfo_o *v320; // x6
  PartyListViewItem_o *v321; // x7
  int64_t v322; // x2
  int32_t v323; // w3
  System_String_o *v324; // x4
  BattleSetupInfo_o *v325; // x5
  FollowerInfo_o *v326; // x6
  PartyListViewItem_o *v327; // x7
  __int64 v328; // x1
  __int64 v329; // x2
  __int64 v330; // x3
  System_Collections_Generic_List_object__o *v331; // x20
  int64_t v332; // x2
  int32_t v333; // w3
  System_String_o *v334; // x4
  BattleSetupInfo_o *v335; // x5
  FollowerInfo_o *v336; // x6
  PartyListViewItem_o *v337; // x7
  int64_t v338; // x2
  int32_t v339; // w3
  System_String_o *v340; // x4
  BattleSetupInfo_o *v341; // x5
  FollowerInfo_o *v342; // x6
  PartyListViewItem_o *v343; // x7
  System_Collections_Generic_Dictionary_K__V__o **p_dialogMessageInfoDictionary; // x26
  int64_t v345; // x2
  int32_t v346; // w3
  System_String_o *v347; // x4
  BattleSetupInfo_o *v348; // x5
  FollowerInfo_o *v349; // x6
  PartyListViewItem_o *v350; // x7
  __int64 v351; // x1
  int64_t Master_object; // x0
  int64_t monitor_low; // x1
  const MethodInfo *v354; // x1
  __int64 v355; // x2
  __int64 v356; // x3
  System_Collections_Generic_Dictionary_int__object__o *v357; // x20
  int64_t v358; // x2
  int32_t v359; // w3
  System_String_o *v360; // x4
  BattleSetupInfo_o *v361; // x5
  FollowerInfo_o *v362; // x6
  PartyListViewItem_o *v363; // x7
  __int64 v364; // x1
  __int64 v365; // x2
  __int64 v366; // x3
  System_Collections_Generic_Dictionary_int__object__o *v367; // x20
  int64_t v368; // x2
  int32_t v369; // w3
  System_String_o *v370; // x4
  BattleSetupInfo_o *v371; // x5
  FollowerInfo_o *v372; // x6
  PartyListViewItem_o *v373; // x7
  __int64 v374; // x1
  __int64 v375; // x2
  __int64 v376; // x3
  System_Collections_Generic_Dictionary_int__object__o *v377; // x20
  int64_t v378; // x2
  int32_t v379; // w3
  System_String_o *v380; // x4
  BattleSetupInfo_o *v381; // x5
  FollowerInfo_o *v382; // x6
  PartyListViewItem_o *v383; // x7
  __int64 v384; // x1
  __int64 v385; // x2
  __int64 v386; // x3
  System_Collections_Generic_List_object__o *v387; // x29
  RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  bool HasFlag; // w0
  BalanceConfig_c *v390; // x0
  int64_t v391; // x0
  int64_t v392; // x2
  int32_t v393; // w3
  System_String_o *v394; // x4
  BattleSetupInfo_o *v395; // x5
  FollowerInfo_o *v396; // x6
  PartyListViewItem_o *v397; // x7
  RestrictionBaseEntity_o *v398; // x8
  __int64 v399; // x1
  Il2CppObject *v400; // x20
  RestrictionWholeEntity_array *Entities; // x0
  int64_t v402; // x2
  int32_t v403; // w3
  System_String_o *v404; // x4
  BattleSetupInfo_o *v405; // x5
  FollowerInfo_o *v406; // x6
  PartyListViewItem_o *v407; // x7
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  unsigned int v410; // w25
  RestrictionWholeEntity_o *v411; // x21
  System_Boolean_array *SetPossiblePosition; // x0
  int64_t v413; // x2
  int32_t v414; // w3
  System_String_o *v415; // x4
  BattleSetupInfo_o *v416; // x5
  FollowerInfo_o *v417; // x6
  PartyListViewItem_o *v418; // x7
  Il2CppObject *v419; // x23
  int64_t v420; // x0
  int64_t v421; // x2
  int32_t v422; // w3
  System_String_o *v423; // x4
  BattleSetupInfo_o *v424; // x5
  FollowerInfo_o *v425; // x6
  PartyListViewItem_o *v426; // x7
  System_Collections_Generic_List_object__o *v427; // x23
  int64_t v428; // x2
  int32_t v429; // w3
  System_String_o *v430; // x4
  BattleSetupInfo_o *v431; // x5
  FollowerInfo_o *v432; // x6
  PartyListViewItem_o *v433; // x7
  struct System_Object_array *v434; // x8
  _QWORD *v435; // x9
  __int64 v436; // x10
  int64_t v437; // x1
  Il2CppClass **v438; // x0
  System_Collections_Generic_List_object__o *v439; // x23
  int64_t v440; // x2
  int32_t v441; // w3
  System_String_o *v442; // x4
  BattleSetupInfo_o *v443; // x5
  FollowerInfo_o *v444; // x6
  PartyListViewItem_o *v445; // x7
  struct System_Object_array *items; // x8
  _QWORD *v447; // x9
  __int64 size; // x10
  int64_t v449; // x1
  Il2CppClass **v450; // x0
  System_Collections_Generic_List_object__o *v451; // x23
  int64_t v452; // x2
  int32_t v453; // w3
  System_String_o *v454; // x4
  BattleSetupInfo_o *v455; // x5
  FollowerInfo_o *v456; // x6
  PartyListViewItem_o *v457; // x7
  struct System_Object_array *v458; // x8
  _QWORD *v459; // x9
  __int64 v460; // x10
  int64_t v461; // x1
  Il2CppClass **v462; // x0
  Il2CppObject *v463; // x23
  int64_t v464; // x0
  int64_t v465; // x2
  int32_t v466; // w3
  System_String_o *v467; // x4
  BattleSetupInfo_o *v468; // x5
  FollowerInfo_o *v469; // x6
  PartyListViewItem_o *v470; // x7
  __int64 v471; // x1
  BalanceConfig_c *v472; // x0
  int64_t v473; // x0
  int64_t v474; // x2
  int32_t v475; // w3
  System_String_o *v476; // x4
  BattleSetupInfo_o *v477; // x5
  FollowerInfo_o *v478; // x6
  PartyListViewItem_o *v479; // x7
  int64_t v480; // x0
  int64_t v481; // x2
  int32_t v482; // w3
  System_String_o *v483; // x4
  BattleSetupInfo_o *v484; // x5
  FollowerInfo_o *v485; // x6
  PartyListViewItem_o *v486; // x7
  int64_t v487; // x0
  int64_t v488; // x2
  int32_t v489; // w3
  System_String_o *v490; // x4
  BattleSetupInfo_o *v491; // x5
  FollowerInfo_o *v492; // x6
  PartyListViewItem_o *v493; // x7
  int64_t v494; // x0
  int64_t v495; // x2
  int32_t v496; // w3
  System_String_o *v497; // x4
  BattleSetupInfo_o *v498; // x5
  FollowerInfo_o *v499; // x6
  PartyListViewItem_o *v500; // x7
  System_Boolean_array *v501; // x0
  int64_t v502; // x2
  int32_t v503; // w3
  System_String_o *v504; // x4
  BattleSetupInfo_o *v505; // x5
  FollowerInfo_o *v506; // x6
  PartyListViewItem_o *v507; // x7
  Il2CppObject *v508; // x23
  int64_t v509; // x0
  int64_t v510; // x2
  int32_t v511; // w3
  System_String_o *v512; // x4
  BattleSetupInfo_o *v513; // x5
  FollowerInfo_o *v514; // x6
  PartyListViewItem_o *v515; // x7
  System_Collections_Generic_List_object__o *v516; // x23
  int64_t v517; // x2
  int32_t v518; // w3
  System_String_o *v519; // x4
  BattleSetupInfo_o *v520; // x5
  FollowerInfo_o *v521; // x6
  PartyListViewItem_o *v522; // x7
  struct System_Object_array *v523; // x8
  _QWORD *v524; // x9
  __int64 v525; // x10
  int64_t v526; // x1
  Il2CppClass **v527; // x0
  Il2CppObject *v528; // x23
  int64_t v529; // x0
  int64_t v530; // x2
  int32_t v531; // w3
  System_String_o *v532; // x4
  BattleSetupInfo_o *v533; // x5
  FollowerInfo_o *v534; // x6
  PartyListViewItem_o *v535; // x7
  System_Collections_Generic_List_object__o *v536; // x23
  int64_t v537; // x2
  int32_t v538; // w3
  System_String_o *v539; // x4
  BattleSetupInfo_o *v540; // x5
  FollowerInfo_o *v541; // x6
  PartyListViewItem_o *v542; // x7
  struct System_Object_array *v543; // x8
  _QWORD *v544; // x9
  __int64 v545; // x10
  int64_t v546; // x1
  Il2CppClass **v547; // x0
  struct System_Int32_array *targetVals; // x8
  System_Collections_Generic_List_object__o *v549; // x23
  int64_t v550; // x2
  int32_t v551; // w3
  System_String_o *v552; // x4
  BattleSetupInfo_o *v553; // x5
  FollowerInfo_o *v554; // x6
  PartyListViewItem_o *v555; // x7
  struct System_Object_array *v556; // x8
  _QWORD *v557; // x9
  __int64 v558; // x10
  int64_t v559; // x1
  Il2CppClass **v560; // x0
  System_Collections_Generic_List_object__o *v561; // x23
  int64_t v562; // x2
  int32_t v563; // w3
  System_String_o *v564; // x4
  BattleSetupInfo_o *v565; // x5
  FollowerInfo_o *v566; // x6
  PartyListViewItem_o *v567; // x7
  struct System_Object_array *v568; // x8
  _QWORD *v569; // x9
  __int64 v570; // x10
  int64_t v571; // x1
  Il2CppClass **v572; // x0
  int32_t restrictionMessageId; // w2
  int64_t v574; // x2
  int32_t v575; // w3
  System_String_o *v576; // x4
  BattleSetupInfo_o *v577; // x5
  FollowerInfo_o *v578; // x6
  PartyListViewItem_o *v579; // x7
  struct System_Object_array *v580; // x8
  _QWORD *v581; // x9
  __int64 v582; // x10
  Il2CppClass **v583; // x0
  __int64 v584; // x1
  __int64 v585; // x2
  __int64 v586; // x3
  __int64 v587; // x23
  QuestRestrictionInfo_o *v588; // x28
  char isAllOutBattle; // w8
  __int64 v590; // x1
  __int64 v591; // x1
  int64_t v592; // x21
  int64_t v593; // x2
  int32_t v594; // w3
  System_String_o *v595; // x4
  BattleSetupInfo_o *v596; // x5
  FollowerInfo_o *v597; // x6
  PartyListViewItem_o *v598; // x7
  BalanceConfig_c *v599; // x0
  int64_t v600; // x0
  int64_t v601; // x2
  int32_t v602; // w3
  System_String_o *v603; // x4
  BattleSetupInfo_o *v604; // x5
  FollowerInfo_o *v605; // x6
  PartyListViewItem_o *v606; // x7
  int32_t v607; // w21
  int v608; // w24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v609; // x8
  System_Object_array *v610; // x22
  __int64 v611; // x1
  __int64 v612; // x2
  __int64 v613; // x3
  System_Collections_Generic_List_int__o *v614; // x24
  int v615; // w8
  __int64 v616; // x19
  Il2CppObject *v617; // x23
  struct System_Int32_array *v618; // x8
  _QWORD *v619; // x9
  __int64 v620; // x10
  int32_t monitor_high; // w2
  int64_t v622; // x2
  int32_t v623; // w3
  System_String_o *v624; // x4
  BattleSetupInfo_o *v625; // x5
  FollowerInfo_o *v626; // x6
  PartyListViewItem_o *v627; // x7
  struct System_Object_array *v628; // x8
  _QWORD *v629; // x9
  __int64 v630; // x10
  Il2CppClass **v631; // x0
  __int64 v632; // x1
  __int64 v633; // x2
  __int64 v634; // x3
  __int64 v635; // x23
  System_Object_array *v636; // x24
  PartyOrganizationUtility_c *klass; // x25
  __int64 v638; // x1
  __int64 v639; // x2
  __int64 v640; // x3
  QuestRestrictionInfo_SlotInfo_o *v641; // x23
  const MethodInfo *v642; // x1
  int64_t v643; // x2
  int32_t v644; // w3
  System_String_o *v645; // x4
  BattleSetupInfo_o *v646; // x5
  FollowerInfo_o *v647; // x6
  PartyListViewItem_o *v648; // x7
  int v649; // w19
  void **v650; // x0
  __int64 v651; // x2
  __int64 v652; // x3
  int servantNumMax; // w8
  PartyOrganizationUtility_c *v654; // x8
  int32_t v655; // w24
  __int64 v656; // x8
  QuestRestrictionInfo___c_c *v657; // x0
  System_Func_object__bool__o *_9__83_0; // x23
  Il2CppObject *v659; // x25
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int64_t v661; // x2
  int32_t v662; // w3
  System_String_o *v663; // x4
  BattleSetupInfo_o *v664; // x5
  FollowerInfo_o *v665; // x6
  PartyListViewItem_o *v666; // x7
  _BOOL4 v667; // w0
  __int64 v668; // x1
  __int64 v669; // x2
  __int64 v670; // x3
  QuestRestrictionInfo___c_c *v671; // x8
  _BOOL4 v672; // w23
  System_Func_object__bool__o *_9__83_1; // x25
  Il2CppObject *v674; // x28
  struct QuestRestrictionInfo___c_StaticFields *v675; // x0
  int64_t v676; // x2
  int32_t v677; // w3
  System_String_o *v678; // x4
  BattleSetupInfo_o *v679; // x5
  FollowerInfo_o *v680; // x6
  PartyListViewItem_o *v681; // x7
  _BOOL4 v682; // w0
  __int64 v683; // x1
  __int64 v684; // x2
  __int64 v685; // x3
  QuestRestrictionInfo___c_c *v686; // x8
  _BOOL4 v687; // w25
  System_Func_object__bool__o *_9__83_2; // x28
  Il2CppObject *v689; // x27
  struct QuestRestrictionInfo___c_StaticFields *v690; // x0
  int64_t v691; // x2
  int32_t v692; // w3
  System_String_o *v693; // x4
  BattleSetupInfo_o *v694; // x5
  FollowerInfo_o *v695; // x6
  PartyListViewItem_o *v696; // x7
  __int64 v697; // x2
  __int64 v698; // x3
  PartyOrganizationUtility_c *v699; // x8
  __int64 v700; // x8
  PartyOrganizationUtility_c *v701; // x8
  __int64 v702; // x8
  PartyOrganizationUtility_c *v703; // x8
  __int64 v704; // x8
  int v705; // w8
  unsigned int v706; // w27
  Il2CppObject *v707; // x25
  Il2CppObject *v708; // x8
  PartyOrganizationUtility_c *v709; // x8
  __int64 v710; // x8
  System_Collections_Generic_List_object__o *v711; // x23
  int64_t v712; // x2
  int32_t v713; // w3
  System_String_o *v714; // x4
  BattleSetupInfo_o *v715; // x5
  FollowerInfo_o *v716; // x6
  PartyListViewItem_o *v717; // x7
  struct System_Object_array *v718; // x8
  _QWORD *v719; // x9
  __int64 v720; // x10
  int64_t v721; // x1
  Il2CppClass **v722; // x0
  PartyOrganizationUtility_c *v723; // x8
  __int64 v724; // x8
  struct System_Int32_array *v725; // x8
  _QWORD *v726; // x9
  __int64 v727; // x10
  System_String_o *monitor; // x23
  PartyOrganizationUtility_c *v729; // x8
  __int64 v730; // x8
  int64_t v731; // x2
  int32_t v732; // w3
  System_String_o *v733; // x4
  BattleSetupInfo_o *v734; // x5
  FollowerInfo_o *v735; // x6
  PartyListViewItem_o *v736; // x7
  PartyOrganizationUtility_c *v737; // x8
  __int64 v738; // x8
  System_String_o **v739; // x25
  PartyOrganizationUtility_c *v740; // x8
  QuestRestrictionInfo___c_c *v741; // x0
  __int64 v742; // x27
  System_Func_object__bool__o *_9__83_3; // x23
  Il2CppObject *v744; // x25
  struct QuestRestrictionInfo___c_StaticFields *v745; // x0
  int64_t v746; // x2
  int32_t v747; // w3
  System_String_o *v748; // x4
  BattleSetupInfo_o *v749; // x5
  FollowerInfo_o *v750; // x6
  PartyListViewItem_o *v751; // x7
  PartyOrganizationUtility_c *v752; // x8
  __int64 v753; // x8
  PartyOrganizationUtility_c *v754; // x8
  __int64 v755; // x8
  PartyOrganizationUtility_c *v756; // x8
  __int64 v757; // x8
  System_Object_array *v758; // x0
  int64_t v759; // x2
  int32_t v760; // w3
  System_String_o *v761; // x4
  BattleSetupInfo_o *v762; // x5
  FollowerInfo_o *v763; // x6
  PartyListViewItem_o *v764; // x7
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v766; // w10
  int v767; // w11
  int v768; // w9
  int v769; // w20
  int32_t v770; // w19
  QuestRestrictionInfo_SlotInfo_o *v771; // x13
  int v772; // w21
  int v773; // w22
  __int64 v774; // x8
  bool HasFlag_40199512; // w0
  bool v776; // w0
  Il2CppObject *Value_int__object; // x0
  int v778; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v780; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v781; // x8
  __int64 v782; // x8
  Il2CppObject *v783; // x20
  int64_t v784; // x0
  int64_t v785; // x2
  int32_t v786; // w3
  System_String_o *v787; // x4
  BattleSetupInfo_o *v788; // x5
  FollowerInfo_o *v789; // x6
  PartyListViewItem_o *v790; // x7
  System_Collections_Generic_Dictionary_int__object__o *restrictionSlotDictionary; // x8
  _BOOL8 v792; // x0
  __int64 v793; // x1
  int v794; // w9
  int v795; // w10
  __int64 v796; // x11
  __int64 v797; // x1
  __int64 v798; // x2
  __int64 v799; // x3
  System_Text_StringBuilder_o *v800; // x20
  __int64 v801; // x1
  __int64 v802; // x2
  __int64 v803; // x3
  System_Text_StringBuilder_o *v804; // x21
  struct RestrictionWholeEntity_array *v805; // x19
  int v806; // w8
  unsigned int v807; // w22
  RestrictionWholeEntity_o *v808; // x24
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  int v811; // w25
  _BOOL4 v812; // w8
  int64_t v813; // x0
  int64_t v814; // x2
  int32_t v815; // w3
  System_String_o *v816; // x4
  BattleSetupInfo_o *v817; // x5
  FollowerInfo_o *v818; // x6
  PartyListViewItem_o *v819; // x7
  __int64 v820; // x1
  System_String_o *v821; // x19
  System_String_o *v822; // x0
  System_String_o *v823; // x0
  int64_t v824; // x2
  int32_t v825; // w3
  System_String_o *v826; // x4
  BattleSetupInfo_o *v827; // x5
  FollowerInfo_o *v828; // x6
  PartyListViewItem_o *v829; // x7
  __int64 v830; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // [xsp+8h] [xbp-198h]
  PartyOrganizationUtility_o *p_svtIdForceBattleList; // [xsp+10h] [xbp-190h]
  PartyOrganizationUtility_o *p_restrictionMessage; // [xsp+18h] [xbp-188h]
  PartyOrganizationUtility_o *p_confirmRestrictionMessage; // [xsp+20h] [xbp-180h]
  struct RestrictionWholeEntity_array *v835; // [xsp+28h] [xbp-178h]
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
  System_Collections_Generic_Dictionary_K__V__o **v851; // [xsp+A8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o **p_restrictionSlotDetailDictionary; // [xsp+B0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_K__V__o **p_restrictionSlotDictionary; // [xsp+B8h] [xbp-E8h]
  struct RestrictionBaseEntity_o **p_restrictionBaseEntity; // [xsp+C0h] [xbp-E0h]
  QuestRestrictionInfo_o *v855; // [xsp+C8h] [xbp-D8h]
  PartyOrganizationUtility_o *p_deckSvtIdList; // [xsp+D0h] [xbp-D0h]
  _BOOL4 v857; // [xsp+D0h] [xbp-D0h]
  int32_t questIdb; // [xsp+DCh] [xbp-C4h]
  PartyOrganizationUtility_o *p_fields; // [xsp+E0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v861; // [xsp+E8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v862; // [xsp+100h] [xbp-A0h] BYREF
  Il2CppObject *item; // [xsp+120h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+128h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v865; // [xsp+130h] [xbp-70h] BYREF
  Il2CppObject *v866; // [xsp+138h] [xbp-68h] BYREF

  if ( (byte_4B17369 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___, v9, v10);
    sub_1BCA7E0(&Method_BasicHelper_Any_RestrictionSlotEntity___, v11, v12);
    sub_1BCA7E0(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcFollowerMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestGroupMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMaster_RestrictionBaseMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMaster_RestrictionMessageMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataManager_GetMaster_RestrictionSlotMaster___, v29, v30);
    sub_1BCA7E0(&Method_DataManager_GetMaster_RestrictionWholeMaster___, v31, v32);
    sub_1BCA7E0(&DataManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v35, v36);
    sub_1BCA7E0(
      &Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__,
      v37,
      v38);
    sub_1BCA7E0(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__, v43, v44);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__,
      v45,
      v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__, v47, v48);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__, v49, v50);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__, v51, v52);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__,
      v53,
      v54);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__, v55, v56);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__, v57, v58);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v59, v60);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__, v61, v62);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo, v63, v64);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo, v65, v66);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo, v67, v68);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__,
      v69,
      v70);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__,
      v71,
      v72);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__,
      v73,
      v74);
    sub_1BCA7E0(&FollowerInfo___TypeInfo, v75, v76);
    sub_1BCA7E0(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo, v77, v78);
    sub_1BCA7E0(&System_Func_RestrictionSlotEntity__bool__TypeInfo, v79, v80);
    sub_1BCA7E0(&int___TypeInfo, v81, v82);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v83, v84);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool____Add__, v85, v86);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__, v87, v88);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__, v89, v90);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____Add__, v91, v92);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v93, v94);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__, v95, v96);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__, v97, v98);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v99, v100);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v101, v102);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool_____ctor__, v103, v104);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__, v105, v106);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int_____ctor__, v107, v108);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v109, v110);
    sub_1BCA7E0(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo, v111, v112);
    sub_1BCA7E0(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v113, v114);
    sub_1BCA7E0(&System_Collections_Generic_List_bool____TypeInfo, v115, v116);
    sub_1BCA7E0(&System_Collections_Generic_List_int____TypeInfo, v117, v118);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v119, v120);
    sub_1BCA7E0(&QuestRestrictionInfo_SlotInfo___TypeInfo, v121, v122);
    sub_1BCA7E0(&QuestRestrictionInfo_SlotInfo_TypeInfo, v123, v124);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v125, v126);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__Setup_b__83_0__, v127, v128);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__Setup_b__83_1__, v129, v130);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__Setup_b__83_2__, v131, v132);
    sub_1BCA7E0(&Method_QuestRestrictionInfo___c__Setup_b__83_3__, v133, v134);
    sub_1BCA7E0(&QuestRestrictionInfo___c_TypeInfo, v135, v136);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__,
      v137,
      v138);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v139, v140);
    sub_1BCA7E0(&StringLiteral_10448/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, v141, v142);
    sub_1BCA7E0(&StringLiteral_10415/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v143, v144);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v145, v146);
    byte_4B17369 = 1;
  }
  v865 = 0LL;
  v866 = 0LL;
  item = 0LL;
  entity = 0LL;
  memset(&v862, 0, sizeof(v862));
  this->fields.isRestriction = 0;
  v147 = (struct System_String_o *)StringLiteral_1/*""*/;
  v148 = StringLiteral_1/*""*/;
  v149 = this;
  this->fields.restrictionMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  p_restrictionMessage = (PartyOrganizationUtility_o *)&this->fields.restrictionMessage;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.restrictionMessage,
    (int64_t)v148,
    *(int64_t *)&questId,
    questPhase,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.confirmRestrictionMessage = v147;
  p_confirmRestrictionMessage = (PartyOrganizationUtility_o *)&this->fields.confirmRestrictionMessage;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.confirmRestrictionMessage,
    (int64_t)v147,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  this->fields.supportOnlyRestrictionEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.supportOnlyRestrictionEntity,
    0LL,
    v156,
    v157,
    v158,
    v159,
    v160,
    v161);
  this->fields.uniqueSvtRestrictionEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.uniqueSvtRestrictionEntity,
    0LL,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  this->fields.deckSvtIdList = 0LL;
  p_deckSvtIdList = (PartyOrganizationUtility_o *)&this->fields.deckSvtIdList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.deckSvtIdList, 0LL, v168, v169, v170, v171, v172, v173);
  this->fields.deckNpcInfoList = 0LL;
  p_deckNpcInfoList = &this->fields.deckNpcInfoList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.deckNpcInfoList, 0LL, v174, v175, v176, v177, v178, v179);
  this->fields.fixedSupportPositionRestrictionEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.fixedSupportPositionRestrictionEntity,
    0LL,
    v180,
    v181,
    v182,
    v183,
    v184,
    v185);
  this->fields.supportPositionList = 0LL;
  p_supportPositionList = (PartyOrganizationUtility_o *)&this->fields.supportPositionList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.supportPositionList, 0LL, v187, v188, v189, v190, v191, v192);
  this->fields.fixedMyServantPositionRestrictionEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
    0LL,
    v193,
    v194,
    v195,
    v196,
    v197,
    v198);
  this->fields.servantNumRestrictionEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantNumRestrictionEntity,
    0LL,
    v199,
    v200,
    v201,
    v202,
    v203,
    v204);
  this->fields.servantNumMax = 0;
  this->fields.myServantNumRestrictionEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.myServantNumRestrictionEntity,
    0LL,
    v205,
    v206,
    v207,
    v208,
    v209,
    v210);
  this->fields.myServantNumMax = 0;
  *(_WORD *)&this->fields.isSupportOnlyForceBattle = 0;
  this->fields.svtIdForceBattleList = 0LL;
  p_svtIdForceBattleList = (PartyOrganizationUtility_o *)&this->fields.svtIdForceBattleList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtIdForceBattleList, 0LL, v211, v212, v213, v214, v215, v216);
  this->fields.isFatigure = 0;
  p_eventDeckNum = &this->fields.eventDeckNum;
  v149->fields.eventDeckNum = 0;
  *(int32_t *)((char *)p_eventDeckNum + 3) = 0;
  v221 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_RestrictionEntity__TypeInfo,
                                                        v218,
                                                        v219,
                                                        v220);
  System_Collections_Generic_List_object____ctor(
    v221,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v149->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v221;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v149->fields.myServantOrNpcRestrictionEntityList,
    (int64_t)v221,
    v222,
    v223,
    v224,
    v225,
    v226,
    v227);
  v231 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v228,
                                                     v229,
                                                     v230);
  System_Collections_Generic_List_int____ctor(
    v231,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v149->fields.specifiedPositionList = v231;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v149->fields.specifiedPositionList,
    (int64_t)v231,
    v232,
    v233,
    v234,
    v235,
    v236,
    v237);
  v149->fields.isNotTransitionSupportList = 0;
  v149->fields.supportInitIndex = 0;
  v149->fields.fixedServantPositionRestrictionEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v149->fields.fixedServantPositionRestrictionEntity,
    0LL,
    v238,
    v239,
    v240,
    v241,
    v242,
    v243);
  v149->fields.uniqueIndividualityEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v149->fields.uniqueIndividualityEntity,
    0LL,
    v244,
    v245,
    v246,
    v247,
    v248,
    v249);
  v149->fields.isAllOutBattle = 0;
  v149->fields.isDataLostBattle = 0;
  v149->fields.allOutBattleGroupNo = -1;
  v149->fields.dataLostBattleId = -1;
  v149->fields.deckLimitCountList = 0LL;
  p_deckLimitCountList = (PartyOrganizationUtility_o *)&v149->fields.deckLimitCountList;
  sub_1BCA784((PartyOrganizationUtility_o *)&v149->fields.deckLimitCountList, 0LL, v250, v251, v252, v253, v254, v255);
  v149->fields.deckDispLimitCountList = 0LL;
  p_deckDispLimitCountList = (PartyOrganizationUtility_o *)&v149->fields.deckDispLimitCountList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v149->fields.deckDispLimitCountList,
    0LL,
    v256,
    v257,
    v258,
    v259,
    v260,
    v261);
  v149->fields.isNotSingleSupportOnly = 0;
  *(_DWORD *)&v149->fields.isUniqueServant = 0;
  v265 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_bool____TypeInfo,
                                                        v262,
                                                        v263,
                                                        v264);
  System_Collections_Generic_List_object____ctor(
    v265,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_bool_____ctor__);
  v149->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v265;
  p_positionsList = (System_Collections_Generic_List_object__o **)&v149->fields.positionsList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v149->fields.positionsList,
    (int64_t)v265,
    v266,
    v267,
    v268,
    v269,
    v270,
    v271);
  v275 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_int____TypeInfo,
                                                        v272,
                                                        v273,
                                                        v274);
  System_Collections_Generic_List_object____ctor(
    v275,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_int_____ctor__);
  v149->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v275;
  p_fixedIndividualitiesList = (System_Collections_Generic_List_object__o **)&v149->fields.fixedIndividualitiesList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v149->fields.fixedIndividualitiesList,
    (int64_t)v275,
    v276,
    v277,
    v278,
    v279,
    v280,
    v281);
  v149->fields.isFixedMyServantPosition = 0;
  v285 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_bool____TypeInfo,
                                                        v282,
                                                        v283,
                                                        v284);
  System_Collections_Generic_List_object____ctor(
    v285,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_bool_____ctor__);
  v149->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v285;
  p_myServantPositionsList = (System_Collections_Generic_List_object__o **)&v149->fields.myServantPositionsList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v149->fields.myServantPositionsList,
    (int64_t)v285,
    v286,
    v287,
    v288,
    v289,
    v290,
    v291);
  v295 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_int____TypeInfo,
                                                        v292,
                                                        v293,
                                                        v294);
  System_Collections_Generic_List_object____ctor(
    v295,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_int_____ctor__);
  v149->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v295;
  p_fixedMyServantIndividualitiesList = (System_Collections_Generic_List_object__o **)&v149->fields.fixedMyServantIndividualitiesList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v149->fields.fixedMyServantIndividualitiesList,
    (int64_t)v295,
    v296,
    v297,
    v298,
    v299,
    v300,
    v301);
  v149->fields.isFixedSupportPosition = 0;
  v305 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_int____TypeInfo,
                                                        v302,
                                                        v303,
                                                        v304);
  System_Collections_Generic_List_object____ctor(
    v305,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_int_____ctor__);
  v149->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v305;
  p_fixedSupportIndividualitiesList = (System_Collections_Generic_List_object__o **)&v149->fields.fixedSupportIndividualitiesList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v149->fields.fixedSupportIndividualitiesList,
    (int64_t)v305,
    v306,
    v307,
    v308,
    v309,
    v310,
    v311);
  v149->fields.isFixedNpcPosition = 0;
  v315 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_int____TypeInfo,
                                                        v312,
                                                        v313,
                                                        v314);
  System_Collections_Generic_List_object____ctor(
    v315,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_int_____ctor__);
  v149->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v315;
  p_fixedNpcIndividualitiesList = (System_Collections_Generic_List_object__o **)&v149->fields.fixedNpcIndividualitiesList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v149->fields.fixedNpcIndividualitiesList,
    (int64_t)v315,
    v316,
    v317,
    v318,
    v319,
    v320,
    v321);
  v149->fields.npcPositionList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v149->fields.npcPositionList, 0LL, v322, v323, v324, v325, v326, v327);
  v331 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_int____TypeInfo,
                                                        v328,
                                                        v329,
                                                        v330);
  System_Collections_Generic_List_object____ctor(
    v331,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_int_____ctor__);
  v149->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v331;
  p_needStartingIndividualitiesList = (System_Collections_Generic_List_object__o **)&v149->fields.needStartingIndividualitiesList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v149->fields.needStartingIndividualitiesList,
    (int64_t)v331,
    v332,
    v333,
    v334,
    v335,
    v336,
    v337);
  v149->fields.isNeedStarting = 0;
  v149->fields.isFixedMyServantSingle = 0;
  *(_WORD *)&v149->fields.isMyServantOrNpc = 0;
  v149->fields.slotInfos = 0LL;
  p_fields = (PartyOrganizationUtility_o *)&v149->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&v149->fields, 0LL, v338, v339, v340, v341, v342, v343);
  v149->fields.dialogMessageInfoDictionary = 0LL;
  p_dialogMessageInfoDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&v149->fields.dialogMessageInfoDictionary;
  v855 = v149;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v149->fields.dialogMessageInfoDictionary,
    0LL,
    v345,
    v346,
    v347,
    v348,
    v349,
    v350);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v351);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !Master_object )
    goto LABEL_385;
  p_restrictionBaseEntity = &v149->fields.restrictionBaseEntity;
  if ( RestrictionBaseMaster__TryGetEntity(
         (RestrictionBaseMaster_o *)Master_object,
         &v149->fields.restrictionBaseEntity,
         v149->fields.questId,
         v149->fields.questPhase,
         0LL) )
  {
    v149->fields.isRestriction = 1;
    v357 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo,
                                                                     v354,
                                                                     v355,
                                                                     v356);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v357,
      (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    v149->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v357;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&v149->fields.restrictionSlotDictionary;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v149->fields.restrictionSlotDictionary,
      (int64_t)v357,
      v358,
      v359,
      v360,
      v361,
      v362,
      v363);
    v367 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo,
                                                                     v364,
                                                                     v365,
                                                                     v366);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v367,
      (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    v149->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v367;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v149->fields.restrictionSlotDetailDictionary,
      (int64_t)v367,
      v368,
      v369,
      v370,
      v371,
      v372,
      v373);
    v377 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo,
                                                                     v374,
                                                                     v375,
                                                                     v376);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v377,
      (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    v149->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v377;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v149->fields.dialogMessageInfoDictionary,
      (int64_t)v377,
      v378,
      v379,
      v380,
      v381,
      v382,
      v383);
    v387 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo,
                                                          v384,
                                                          v385,
                                                          v386);
    System_Collections_Generic_List_object____ctor(
      v387,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    Master_object = (int64_t)v855->fields.restrictionBaseEntity;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__object__o **)&v855->fields.restrictionSlotDetailDictionary;
    if ( !Master_object )
      goto LABEL_385;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 2LL, 0LL);
    restrictionBaseEntity = v855->fields.restrictionBaseEntity;
    v855->fields.isNotTransitionSupportList = Master_object & 1;
    if ( !restrictionBaseEntity )
      goto LABEL_385;
    if ( RestrictionBaseEntity__HasFlag(restrictionBaseEntity, 4LL, 0LL) )
    {
      Master_object = (int64_t)*p_restrictionBaseEntity;
      if ( !*p_restrictionBaseEntity )
        goto LABEL_385;
      *p_eventDeckNum = RestrictionBaseEntity__GetUserEventDeckNo((RestrictionBaseEntity_o *)Master_object, 0LL);
    }
    Master_object = (int64_t)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_385;
    HasFlag = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 16LL, 0LL);
    v855->fields.isUniqueServant = HasFlag;
    if ( HasFlag )
    {
      v390 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, monitor_low);
        v390 = BalanceConfig_TypeInfo;
      }
      v391 = sub_1BCA888(int___TypeInfo, (unsigned int)v390->static_fields->DeckMemberMax);
      p_deckSvtIdList->klass = (PartyOrganizationUtility_c *)v391;
      sub_1BCA784(p_deckSvtIdList, v391, v392, v393, v394, v395, v396, v397);
    }
    Master_object = (int64_t)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_385;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 32LL, 0LL);
    v398 = v855->fields.restrictionBaseEntity;
    v855->fields.isNotSingleSupportOnly = Master_object & 1;
    if ( !v398 )
      goto LABEL_385;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      v398,
      &v855->fields.overwriteLimitCountSvtIds,
      &v855->fields.overwriteLimitCounts,
      &v855->fields.overwriteLimitCountIconIds,
      0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v399);
    v400 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
    if ( !*p_restrictionBaseEntity )
      goto LABEL_385;
    if ( !Master_object )
      goto LABEL_385;
    Entities = RestrictionWholeMaster__GetEntities(
                 (RestrictionWholeMaster_o *)Master_object,
                 (*p_restrictionBaseEntity)->fields.restrictionWholeId,
                 0LL);
    v855->fields.restrictionWholeEntities = Entities;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v855->fields.restrictionWholeEntities,
      (int64_t)Entities,
      v402,
      v403,
      v404,
      v405,
      v406,
      v407);
    restrictionWholeEntities = v855->fields.restrictionWholeEntities;
    p_restrictionWholeEntities = &v855->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_385;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v410 = 0;
      p_needStartingIndividualities = (PartyOrganizationUtility_o *)&v855->fields.needStartingIndividualities;
      p_uniqueIndividualitys = (PartyOrganizationUtility_o *)&v855->fields.uniqueIndividualitys;
      p_fixedSupportIndividualities = (PartyOrganizationUtility_o *)&v855->fields.fixedSupportIndividualities;
      p_fixedNpcIndividualities = (PartyOrganizationUtility_o *)&v855->fields.fixedNpcIndividualities;
      v835 = v855->fields.restrictionWholeEntities;
      while ( 2 )
      {
        if ( v410 >= max_length )
          goto LABEL_386;
        v411 = restrictionWholeEntities->m_Items[v410];
        if ( v411 )
        {
          switch ( v411->fields.type )
          {
            case 2:
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, monitor_low);
              Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestGroupMaster___);
              if ( !Master_object )
                goto LABEL_385;
              Master_object = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Master_object, questId, 17, 0LL);
              v855->fields.allOutBattleGroupNo = Master_object;
              v855->fields.isAllOutBattle = 1;
              goto LABEL_89;
            case 3:
              Master_object = System_Linq_Enumerable__Min(
                                (System_Collections_Generic_IEnumerable_int__o *)v411->fields.targetVals,
                                0LL);
              v855->fields.servantNumMax = Master_object - 1;
              goto LABEL_89;
            case 4:
              v439 = *p_positionsList;
              Master_object = (int64_t)RestrictionWholeEntity__GetSetPossiblePosition(v411, 0LL);
              if ( !v439 )
                goto LABEL_385;
              items = v439->fields._items;
              v447 = Method_System_Collections_Generic_List_bool____Add__;
              ++v439->fields._version;
              if ( !items )
                goto LABEL_385;
              size = v439->fields._size;
              v449 = Master_object;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v439,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v447[4] + 192LL) + 112LL));
              }
              else
              {
                v450 = &items->obj.klass + size;
                v439->fields._size = size + 1;
                v450[4] = (Il2CppClass *)v449;
                sub_1BCA784((PartyOrganizationUtility_o *)(v450 + 4), v449, v440, v441, v442, v443, v444, v445);
              }
              Master_object = (int64_t)v411->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v549 = *p_fixedIndividualitiesList;
              Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v549 )
                goto LABEL_385;
              Master_object = sub_1BCA91C(Master_object, int___TypeInfo);
              v556 = v549->fields._items;
              v557 = Method_System_Collections_Generic_List_int____Add__;
              ++v549->fields._version;
              if ( !v556 )
                goto LABEL_385;
              v558 = v549->fields._size;
              v559 = Master_object;
              if ( (unsigned int)v558 >= v556->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v549,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v557[4] + 192LL) + 112LL));
              }
              else
              {
                v560 = &v556->obj.klass + v558;
                v549->fields._size = v558 + 1;
                v560[4] = (Il2CppClass *)v559;
                sub_1BCA784((PartyOrganizationUtility_o *)(v560 + 4), v559, v550, v551, v552, v553, v554, v555);
              }
              v855->fields.isFixedPosition = 1;
              goto LABEL_89;
            case 5:
              v451 = *p_myServantPositionsList;
              Master_object = (int64_t)RestrictionWholeEntity__GetSetPossiblePosition(v411, 0LL);
              if ( !v451 )
                goto LABEL_385;
              v458 = v451->fields._items;
              v459 = Method_System_Collections_Generic_List_bool____Add__;
              ++v451->fields._version;
              if ( !v458 )
                goto LABEL_385;
              v460 = v451->fields._size;
              v461 = Master_object;
              if ( (unsigned int)v460 >= v458->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v451,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v459[4] + 192LL) + 112LL));
              }
              else
              {
                v462 = &v458->obj.klass + v460;
                v451->fields._size = v460 + 1;
                v462[4] = (Il2CppClass *)v461;
                sub_1BCA784((PartyOrganizationUtility_o *)(v462 + 4), v461, v452, v453, v454, v455, v456, v457);
              }
              Master_object = (int64_t)v411->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v561 = *p_fixedMyServantIndividualitiesList;
              Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v561 )
                goto LABEL_385;
              Master_object = sub_1BCA91C(Master_object, int___TypeInfo);
              v568 = v561->fields._items;
              v569 = Method_System_Collections_Generic_List_int____Add__;
              ++v561->fields._version;
              if ( !v568 )
                goto LABEL_385;
              v570 = v561->fields._size;
              v571 = Master_object;
              if ( (unsigned int)v570 >= v568->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v561,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v569[4] + 192LL) + 112LL));
              }
              else
              {
                v572 = &v568->obj.klass + v570;
                v561->fields._size = v570 + 1;
                v572[4] = (Il2CppClass *)v571;
                sub_1BCA784((PartyOrganizationUtility_o *)(v572 + 4), v571, v562, v563, v564, v565, v566, v567);
              }
              v855->fields.isFixedMyServantPosition = 1;
              goto LABEL_89;
            case 6:
              SetPossiblePosition = RestrictionWholeEntity__GetSetPossiblePosition(v411, 0LL);
              p_supportPositionList->klass = (PartyOrganizationUtility_c *)SetPossiblePosition;
              sub_1BCA784(p_supportPositionList, (int64_t)SetPossiblePosition, v413, v414, v415, v416, v417, v418);
              Master_object = (int64_t)v411->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v419 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_fixedSupportIndividualities->klass = (PartyOrganizationUtility_c *)sub_1BCA91C(v419, int___TypeInfo);
              v420 = sub_1BCA91C(v419, int___TypeInfo);
              sub_1BCA784(p_fixedSupportIndividualities, v420, v421, v422, v423, v424, v425, v426);
              Master_object = (int64_t)v411->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v427 = *p_fixedSupportIndividualitiesList;
              Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v427 )
                goto LABEL_385;
              Master_object = sub_1BCA91C(Master_object, int___TypeInfo);
              v434 = v427->fields._items;
              v435 = Method_System_Collections_Generic_List_int____Add__;
              ++v427->fields._version;
              if ( !v434 )
                goto LABEL_385;
              v436 = v427->fields._size;
              v437 = Master_object;
              if ( (unsigned int)v436 >= v434->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v427,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v435[4] + 192LL) + 112LL));
              }
              else
              {
                v438 = &v434->obj.klass + v436;
                v427->fields._size = v436 + 1;
                v438[4] = (Il2CppClass *)v437;
                sub_1BCA784((PartyOrganizationUtility_o *)(v438 + 4), v437, v428, v429, v430, v431, v432, v433);
              }
              v855->fields.isFixedSupportPosition = 1;
              goto LABEL_89;
            case 7:
              v501 = RestrictionWholeEntity__GetSetPossiblePosition(v411, 0LL);
              p_supportPositionList->klass = (PartyOrganizationUtility_c *)v501;
              sub_1BCA784(p_supportPositionList, (int64_t)v501, v502, v503, v504, v505, v506, v507);
              Master_object = (int64_t)v411->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v508 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_fixedNpcIndividualities->klass = (PartyOrganizationUtility_c *)sub_1BCA91C(v508, int___TypeInfo);
              v509 = sub_1BCA91C(v508, int___TypeInfo);
              sub_1BCA784(p_fixedNpcIndividualities, v509, v510, v511, v512, v513, v514, v515);
              Master_object = (int64_t)v411->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v516 = *p_fixedNpcIndividualitiesList;
              Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v516 )
                goto LABEL_385;
              Master_object = sub_1BCA91C(Master_object, int___TypeInfo);
              v523 = v516->fields._items;
              v524 = Method_System_Collections_Generic_List_int____Add__;
              ++v516->fields._version;
              if ( !v523 )
                goto LABEL_385;
              v525 = v516->fields._size;
              v526 = Master_object;
              if ( (unsigned int)v525 >= v523->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v516,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v524[4] + 192LL) + 112LL));
              }
              else
              {
                v527 = &v523->obj.klass + v525;
                v516->fields._size = v525 + 1;
                v527[4] = (Il2CppClass *)v526;
                sub_1BCA784((PartyOrganizationUtility_o *)(v527 + 4), v526, v517, v518, v519, v520, v521, v522);
              }
              v855->fields.isFixedNpcPosition = 1;
              goto LABEL_89;
            case 8:
              Master_object = (int64_t)v411->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v528 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_needStartingIndividualities->klass = (PartyOrganizationUtility_c *)sub_1BCA91C(v528, int___TypeInfo);
              v529 = sub_1BCA91C(v528, int___TypeInfo);
              sub_1BCA784(p_needStartingIndividualities, v529, v530, v531, v532, v533, v534, v535);
              Master_object = (int64_t)v411->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v536 = *p_needStartingIndividualitiesList;
              Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v536 )
                goto LABEL_385;
              Master_object = sub_1BCA91C(Master_object, int___TypeInfo);
              v543 = v536->fields._items;
              v544 = Method_System_Collections_Generic_List_int____Add__;
              ++v536->fields._version;
              if ( !v543 )
                goto LABEL_385;
              v545 = v536->fields._size;
              v546 = Master_object;
              if ( (unsigned int)v545 >= v543->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v536,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v544[4] + 192LL) + 112LL));
              }
              else
              {
                v547 = &v543->obj.klass + v545;
                v536->fields._size = v545 + 1;
                v547[4] = (Il2CppClass *)v546;
                sub_1BCA784((PartyOrganizationUtility_o *)(v547 + 4), v546, v537, v538, v539, v540, v541, v542);
              }
              v855->fields.isNeedStarting = 1;
              goto LABEL_89;
            case 9:
              Master_object = (int64_t)v411->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v463 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_uniqueIndividualitys->klass = (PartyOrganizationUtility_c *)sub_1BCA91C(v463, int___TypeInfo);
              v464 = sub_1BCA91C(v463, int___TypeInfo);
              sub_1BCA784(p_uniqueIndividualitys, v464, v465, v466, v467, v468, v469, v470);
              v472 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v471);
                v472 = BalanceConfig_TypeInfo;
              }
              v473 = sub_1BCA888(int___TypeInfo, (unsigned int)v472->static_fields->DeckMemberMax);
              v855->fields.deckSvtIdList = (struct System_Int32_array *)v473;
              sub_1BCA784(p_deckSvtIdList, v473, v474, v475, v476, v477, v478, v479);
              v480 = sub_1BCA888(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v855->fields.deckLimitCountList = (struct System_Int32_array *)v480;
              sub_1BCA784(p_deckLimitCountList, v480, v481, v482, v483, v484, v485, v486);
              v487 = sub_1BCA888(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v855->fields.deckDispLimitCountList = (struct System_Int32_array *)v487;
              sub_1BCA784(p_deckDispLimitCountList, v487, v488, v489, v490, v491, v492, v493);
              v494 = sub_1BCA888(
                       FollowerInfo___TypeInfo,
                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v855->fields.deckNpcInfoList = (struct FollowerInfo_array *)v494;
              sub_1BCA784((PartyOrganizationUtility_o *)p_deckNpcInfoList, v494, v495, v496, v497, v498, v499, v500);
              restrictionWholeEntities = v835;
              v855->fields.isUniqueIndividuality = 1;
              goto LABEL_89;
            case 0xA:
              v855->fields.isDataLostBattle = 1;
              targetVals = v411->fields.targetVals;
              if ( !targetVals )
                goto LABEL_385;
              if ( !targetVals->max_length )
                goto LABEL_386;
              v855->fields.dataLostBattleId = targetVals->m_Items[1];
LABEL_89:
              restrictionMessageId = v411->fields.restrictionMessageId;
              if ( restrictionMessageId < 1 )
                goto LABEL_101;
              if ( !v400 )
                goto LABEL_385;
              Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v400,
                                &entity,
                                restrictionMessageId,
                                (const MethodInfo_31B2E94 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
              if ( (Master_object & 1) == 0 )
                goto LABEL_101;
              if ( !v387 )
                goto LABEL_385;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v387,
                                entity,
                                (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) != 0 )
                goto LABEL_101;
              monitor_low = (int64_t)entity;
              v580 = v387->fields._items;
              v581 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
              ++v387->fields._version;
              if ( !v580 )
                goto LABEL_385;
              v582 = v387->fields._size;
              if ( (unsigned int)v582 >= v580->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v387,
                  (Il2CppObject *)monitor_low,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v581[4] + 192LL) + 112LL));
              }
              else
              {
                v583 = &v580->obj.klass + v582;
                v387->fields._size = v582 + 1;
                v583[4] = (Il2CppClass *)monitor_low;
                sub_1BCA784((PartyOrganizationUtility_o *)(v583 + 4), monitor_low, v574, v575, v576, v577, v578, v579);
              }
              v587 = sub_1BCAA2C(QuestRestrictionInfo_DialogMessageInfo_TypeInfo, v584, v585, v586);
              System_Object___ctor((Il2CppObject *)v587, 0LL);
              *(_DWORD *)(v587 + 16) = 0;
              *(_DWORD *)(v587 + 20) = v411->fields.type;
              if ( !entity )
                goto LABEL_385;
              Master_object = (int64_t)*p_dialogMessageInfoDictionary;
              if ( !*p_dialogMessageInfoDictionary )
                goto LABEL_385;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                (int32_t)entity[1].klass,
                (Il2CppObject *)v587,
                (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
LABEL_101:
              max_length = restrictionWholeEntities->max_length;
              if ( (int)++v410 >= max_length )
                goto LABEL_102;
              continue;
            default:
              goto LABEL_89;
          }
        }
        goto LABEL_385;
      }
    }
LABEL_102:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, monitor_low);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
    v588 = v855;
    if ( !Master_object )
      goto LABEL_385;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
      &v866,
      questId,
      (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    Master_object = (int64_t)v866;
    if ( !v866 )
      goto LABEL_385;
    Master_object = QuestEntity__HasFlag_40199512((QuestEntity_o *)v866, 0x100000LL, questPhase, 0LL);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v855 )
        goto LABEL_385;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = v855->fields.isAllOutBattle;
    }
    v855->fields.isNoSupportBattle = isAllOutBattle;
    Master_object = (int64_t)v866;
    if ( !v866 )
      goto LABEL_385;
    v855->fields.isSupportOnlyForceBattle = QuestEntity__HasFlag_40199512(
                                              (QuestEntity_o *)v866,
                                              0x80000LL,
                                              questPhase,
                                              0LL);
    Master_object = (int64_t)v866;
    if ( !v866 )
      goto LABEL_385;
    v855->fields.isFatigure = QuestEntity__HasFlag_40199512((QuestEntity_o *)v866, 0x200000LL, questPhase, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v590);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_385;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v865, questId, questPhase, 0LL) )
    {
      Master_object = sub_1BCA888(int___TypeInfo, 1LL);
      if ( !v865 )
        goto LABEL_385;
      v592 = Master_object;
      Master_object = QuestPhaseEntity__GetSingleForceSvtId(v865, 0LL);
      if ( !v592 )
        goto LABEL_385;
      if ( !*(_DWORD *)(v592 + 24) )
        goto LABEL_386;
      *(_DWORD *)(v592 + 32) = Master_object;
      p_svtIdForceBattleList->klass = (PartyOrganizationUtility_c *)v592;
      sub_1BCA784(p_svtIdForceBattleList, v592, v593, v594, v595, v596, v597, v598);
      Master_object = (int64_t)v865;
      if ( !v865 )
        goto LABEL_385;
      v855->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v865, 0LL);
      Master_object = (int64_t)v865;
      if ( !v865 )
        goto LABEL_385;
      v855->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v865, 0LL);
    }
    else
    {
      v855->fields.correctionIconId = -1;
    }
    v599 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v591);
      v599 = BalanceConfig_TypeInfo;
    }
    v600 = sub_1BCA888(QuestRestrictionInfo_SlotInfo___TypeInfo, (unsigned int)v599->static_fields->DeckMemberMax);
    p_fields->klass = (PartyOrganizationUtility_c *)v600;
    sub_1BCA784(p_fields, v600, v601, v602, v603, v604, v605, v606);
    Master_object = (int64_t)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_385;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    Master_object = (int64_t)*p_restrictionSlotDetailDictionary;
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_385;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v607 = 1;
    v608 = 1;
    v851 = p_dialogMessageInfoDictionary;
    while ( 1 )
    {
      Master_object = (int64_t)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, monitor_low);
        Master_object = (int64_t)BalanceConfig_TypeInfo;
      }
      if ( v607 > *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 156LL) )
        break;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, monitor_low);
      Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      if ( !*p_restrictionBaseEntity )
        goto LABEL_385;
      if ( !Master_object )
        goto LABEL_385;
      Master_object = (int64_t)RestrictionSlotMaster__GetEntities(
                                 (RestrictionSlotMaster_o *)Master_object,
                                 (*p_restrictionBaseEntity)->fields.restrictionSlotId,
                                 v607,
                                 0LL);
      if ( !Master_object )
        goto LABEL_385;
      v609 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
      v610 = (System_Object_array *)Master_object;
      questIdb = v608;
      Master_object = (int64_t)*p_restrictionSlotDictionary;
      v857 = v609 != 0LL;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_385;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
        v607,
        &v610->obj,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v614 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v611,
                                                         v612,
                                                         v613);
      System_Collections_Generic_List_int____ctor(
        v614,
        (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      v615 = v610->max_length;
      if ( v615 >= 1 )
      {
        v616 = 0LL;
        while ( (unsigned int)v616 < v615 )
        {
          v617 = v610->m_Items[v616];
          if ( !v617 || !v614 )
            goto LABEL_385;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v614,
                            (int32_t)v617[2].monitor,
                            (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            monitor_low = LODWORD(v617[2].monitor);
            v618 = v614->fields._items;
            v619 = Method_System_Collections_Generic_List_int__Add__;
            ++v614->fields._version;
            if ( !v618 )
              goto LABEL_385;
            v620 = v614->fields._size;
            if ( (unsigned int)v620 >= v618->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v614,
                monitor_low,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v619[4] + 192LL) + 112LL));
            }
            else
            {
              v614->fields._size = v620 + 1;
              v618->m_Items[v620 + 1] = monitor_low;
            }
          }
          monitor_high = HIDWORD(v617[2].monitor);
          if ( monitor_high >= 1 )
          {
            if ( !v400 )
              goto LABEL_385;
            Master_object = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v400,
                              &item,
                              monitor_high,
                              (const MethodInfo_31B2E94 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (Master_object & 1) != 0 )
            {
              if ( !v387 )
                goto LABEL_385;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v387,
                                item,
                                (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) == 0 )
              {
                monitor_low = (int64_t)item;
                v628 = v387->fields._items;
                v629 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
                ++v387->fields._version;
                if ( !v628 )
                  goto LABEL_385;
                v630 = v387->fields._size;
                if ( (unsigned int)v630 >= v628->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v387,
                    (Il2CppObject *)monitor_low,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v629[4] + 192LL) + 112LL));
                }
                else
                {
                  v631 = &v628->obj.klass + v630;
                  v387->fields._size = v630 + 1;
                  v631[4] = (Il2CppClass *)monitor_low;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v631 + 4), monitor_low, v622, v623, v624, v625, v626, v627);
                }
                v635 = sub_1BCAA2C(QuestRestrictionInfo_DialogMessageInfo_TypeInfo, v632, v633, v634);
                System_Object___ctor((Il2CppObject *)v635, 0LL);
                *(_DWORD *)(v635 + 16) = v607;
                *(_DWORD *)(v635 + 20) = 0;
                if ( !item )
                  goto LABEL_385;
                Master_object = (int64_t)*p_dialogMessageInfoDictionary;
                if ( !*p_dialogMessageInfoDictionary )
                  goto LABEL_385;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  (int32_t)item[1].klass,
                  (Il2CppObject *)v635,
                  (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v615 = v610->max_length;
          if ( (int)++v616 >= v615 )
            goto LABEL_161;
        }
        goto LABEL_386;
      }
LABEL_161:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, monitor_low);
      Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !Master_object )
        goto LABEL_385;
      Master_object = (int64_t)RestrictionSlotDetailMaster__GetEntities(
                                 (RestrictionSlotDetailMaster_o *)Master_object,
                                 v614,
                                 0LL);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_385;
      v636 = (System_Object_array *)Master_object;
      System_Collections_Generic_Dictionary_int__object___Add(
        *p_restrictionSlotDetailDictionary,
        v607,
        (Il2CppObject *)Master_object,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v641 = (QuestRestrictionInfo_SlotInfo_o *)sub_1BCAA2C(QuestRestrictionInfo_SlotInfo_TypeInfo, v638, v639, v640);
      QuestRestrictionInfo_SlotInfo___ctor(v641, v642);
      if ( !klass )
        goto LABEL_385;
      if ( v641 )
      {
        Master_object = sub_1BCA91C(v641, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_object )
        {
          v830 = sub_1BCAA60(0LL);
          sub_1BCA908(v830, 0LL);
        }
      }
      v649 = v607 - 1;
      if ( (unsigned int)(v607 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_386;
      v650 = &klass->_1.image + v649;
      v650[4] = v641;
      sub_1BCA784((PartyOrganizationUtility_o *)(v650 + 4), (int64_t)v641, v643, v644, v645, v646, v647, v648);
      servantNumMax = v588->fields.servantNumMax;
      if ( servantNumMax < 1 || v649 < servantNumMax )
      {
        v657 = QuestRestrictionInfo___c_TypeInfo;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, monitor_low);
          v657 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__83_0 = (System_Func_object__bool__o *)v657->static_fields->__9__83_0;
        if ( !_9__83_0 )
        {
          if ( !v657->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v657, monitor_low);
            v657 = QuestRestrictionInfo___c_TypeInfo;
          }
          v659 = (Il2CppObject *)v657->static_fields->__9;
          _9__83_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                      System_Func_RestrictionSlotEntity__bool__TypeInfo,
                                                      monitor_low,
                                                      v651,
                                                      v652);
          System_Func_object__bool____ctor(_9__83_0, v659, Method_QuestRestrictionInfo___c__Setup_b__83_0__, 0LL);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
          static_fields->__9__83_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__83_0;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__83_0,
            (int64_t)_9__83_0,
            v661,
            v662,
            v663,
            v664,
            v665,
            v666);
        }
        v667 = BasicHelper__Any_object__49274176(
                 v610,
                 (System_Func_T__bool__o *)_9__83_0,
                 (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v671 = QuestRestrictionInfo___c_TypeInfo;
        v672 = v667;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, v668);
          v671 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__83_1 = (System_Func_object__bool__o *)v671->static_fields->__9__83_1;
        if ( !_9__83_1 )
        {
          if ( !v671->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v671, v668);
            v671 = QuestRestrictionInfo___c_TypeInfo;
          }
          v674 = (Il2CppObject *)v671->static_fields->__9;
          _9__83_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                      System_Func_RestrictionSlotEntity__bool__TypeInfo,
                                                      v668,
                                                      v669,
                                                      v670);
          System_Func_object__bool____ctor(_9__83_1, v674, Method_QuestRestrictionInfo___c__Setup_b__83_1__, 0LL);
          v675 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v675->__9__83_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__83_1;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v675->__9__83_1,
            (int64_t)_9__83_1,
            v676,
            v677,
            v678,
            v679,
            v680,
            v681);
        }
        v682 = BasicHelper__Any_object__49274176(
                 v610,
                 (System_Func_T__bool__o *)_9__83_1,
                 (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v686 = QuestRestrictionInfo___c_TypeInfo;
        v687 = v682;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, v683);
          v686 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__83_2 = (System_Func_object__bool__o *)v686->static_fields->__9__83_2;
        if ( !_9__83_2 )
        {
          if ( !v686->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v686, v683);
            v686 = QuestRestrictionInfo___c_TypeInfo;
          }
          v689 = (Il2CppObject *)v686->static_fields->__9;
          _9__83_2 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                      System_Func_RestrictionSlotEntity__bool__TypeInfo,
                                                      v683,
                                                      v684,
                                                      v685);
          System_Func_object__bool____ctor(_9__83_2, v689, Method_QuestRestrictionInfo___c__Setup_b__83_2__, 0LL);
          v690 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v690->__9__83_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__83_2;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v690->__9__83_2,
            (int64_t)_9__83_2,
            v691,
            v692,
            v693,
            v694,
            v695,
            v696);
        }
        Master_object = BasicHelper__Any_object__49274176(
                          v610,
                          (System_Func_T__bool__o *)_9__83_2,
                          (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        if ( v687 || !v672 || (Master_object & 1) != 0 )
        {
          v588 = v855;
          if ( (v672 || !v687) | Master_object & 1 )
          {
            if ( v672 || v687 || (((unsigned int)Master_object ^ 1) & 1) != 0 )
            {
              if ( Master_object & 1 | (!v672 || !v687) )
              {
                if ( ((v672 || v687) & (unsigned int)Master_object & 1) != 0 )
                {
                  v754 = p_fields->klass;
                  if ( !p_fields->klass )
                    goto LABEL_385;
                  if ( (unsigned int)v649 >= LODWORD(v754->_1.namespaze) )
                    goto LABEL_386;
                  v755 = *((_QWORD *)&v754->_1.byval_arg.data + v649);
                  if ( !v755 )
                    goto LABEL_385;
                  *(_DWORD *)(v755 + 16) = 4;
                  v855->fields.isMyServantOrSupport = 1;
                }
              }
              else
              {
                v756 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_385;
                if ( (unsigned int)v649 >= LODWORD(v756->_1.namespaze) )
                  goto LABEL_386;
                v757 = *((_QWORD *)&v756->_1.byval_arg.data + v649);
                if ( !v757 )
                  goto LABEL_385;
                *(_DWORD *)(v757 + 16) = 3;
                v855->fields.isMyServantOrNpc = 1;
              }
            }
            else
            {
              v701 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_385;
              if ( (unsigned int)v649 >= LODWORD(v701->_1.namespaze) )
                goto LABEL_386;
              v702 = *((_QWORD *)&v701->_1.byval_arg.data + v649);
              if ( !v702 )
                goto LABEL_385;
              *(_DWORD *)(v702 + 16) = 2;
              v855->fields.supportInitIndex = v607;
            }
          }
          else
          {
            v703 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_385;
            if ( (unsigned int)v649 >= LODWORD(v703->_1.namespaze) )
              goto LABEL_386;
            v704 = *((_QWORD *)&v703->_1.byval_arg.data + v649);
            if ( !v704 )
              goto LABEL_385;
            *(_DWORD *)(v704 + 16) = 1;
          }
        }
        else
        {
          v588 = v855;
          v699 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_385;
          if ( (unsigned int)v649 >= LODWORD(v699->_1.namespaze) )
            goto LABEL_386;
          v700 = *((_QWORD *)&v699->_1.byval_arg.data + v649);
          if ( !v700 )
            goto LABEL_385;
          *(_DWORD *)(v700 + 16) = 0;
        }
        if ( !v636 )
          goto LABEL_385;
        v705 = v636->max_length;
        if ( v705 >= 1 )
        {
          v706 = 0;
          while ( v706 < v705 )
          {
            v707 = v636->m_Items[v706];
            if ( !v707 )
              goto LABEL_385;
            if ( !v610->max_length )
              break;
            v708 = v610->m_Items[0];
            if ( !v708 )
              goto LABEL_385;
            if ( LODWORD(v707[1].klass) == LODWORD(v708[2].monitor) )
            {
              v709 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_385;
              if ( (unsigned int)v649 >= LODWORD(v709->_1.namespaze) )
                goto LABEL_386;
              v710 = *((_QWORD *)&v709->_1.byval_arg.data + v649);
              if ( !v710 )
                goto LABEL_385;
              if ( *(_DWORD *)(v710 + 16) <= 2u )
              {
                Master_object = (int64_t)v707[2].monitor;
                if ( !Master_object )
                  goto LABEL_385;
                v711 = *(System_Collections_Generic_List_object__o **)(v710 + 24);
                Master_object = (int64_t)System_Array__Clone((System_Array_o *)Master_object, 0LL);
                if ( !v711 )
                  goto LABEL_385;
                Master_object = sub_1BCA91C(Master_object, int___TypeInfo);
                v718 = v711->fields._items;
                v719 = Method_System_Collections_Generic_List_int____Add__;
                ++v711->fields._version;
                if ( !v718 )
                  goto LABEL_385;
                v720 = v711->fields._size;
                v721 = Master_object;
                if ( (unsigned int)v720 >= v718->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v711,
                    (Il2CppObject *)Master_object,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v719[4] + 192LL) + 112LL));
                }
                else
                {
                  v722 = &v718->obj.klass + v720;
                  v711->fields._size = v720 + 1;
                  v722[4] = (Il2CppClass *)v721;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v722 + 4), v721, v712, v713, v714, v715, v716, v717);
                }
                v723 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_385;
                if ( (unsigned int)v649 >= LODWORD(v723->_1.namespaze) )
                  goto LABEL_386;
                v724 = *((_QWORD *)&v723->_1.byval_arg.data + v649);
                if ( !v724 )
                  goto LABEL_385;
                Master_object = *(_QWORD *)(v724 + 32);
                if ( !Master_object )
                  goto LABEL_385;
                monitor_low = LODWORD(v707[3].klass);
                v725 = *(struct System_Int32_array **)(Master_object + 16);
                v726 = Method_System_Collections_Generic_List_Restriction_RangeType__Add__;
                ++*(_DWORD *)(Master_object + 28);
                if ( !v725 )
                  goto LABEL_385;
                v727 = *(int *)(Master_object + 24);
                if ( (unsigned int)v727 >= v725->max_length )
                {
                  System_Collections_Generic_List_Int32Enum___AddWithResize(
                    (System_Collections_Generic_List_T__o *)Master_object,
                    monitor_low,
                    *(const MethodInfo_3587464 **)(*(_QWORD *)(v726[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Master_object + 24) = v727 + 1;
                  v725->m_Items[v727 + 1] = monitor_low;
                }
              }
              if ( LODWORD(v707[2].klass) == 2 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, monitor_low);
                Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10448/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, 0LL);
                monitor = (System_String_o *)Master_object;
              }
              else
              {
                monitor = (System_String_o *)v707[1].monitor;
              }
              v729 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_385;
              if ( (unsigned int)v649 >= LODWORD(v729->_1.namespaze) )
                goto LABEL_386;
              v730 = *((_QWORD *)&v729->_1.byval_arg.data + v649);
              if ( !v730 )
                goto LABEL_385;
              Master_object = System_String__IsNullOrEmpty(*(System_String_o **)(v730 + 40), 0LL);
              v737 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_385;
              if ( (unsigned int)v649 >= LODWORD(v737->_1.namespaze) )
                goto LABEL_386;
              v738 = *((_QWORD *)&v737->_1.byval_arg.data + v649);
              if ( !v738 )
                goto LABEL_385;
              v739 = (System_String_o **)(v738 + 40);
              if ( (Master_object & 1) == 0 )
                monitor = System_String__Concat_62412480(*v739, (System_String_o *)StringLiteral_43/*"\n"*/, monitor, 0LL);
              *v739 = monitor;
              sub_1BCA784((PartyOrganizationUtility_o *)v739, (int64_t)monitor, v731, v732, v733, v734, v735, v736);
            }
            v705 = v636->max_length;
            if ( (int)++v706 >= v705 )
              goto LABEL_251;
          }
          goto LABEL_386;
        }
LABEL_251:
        v740 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_385;
        if ( (unsigned int)v649 >= LODWORD(v740->_1.namespaze) )
          goto LABEL_386;
        v741 = QuestRestrictionInfo___c_TypeInfo;
        v742 = *((_QWORD *)&v740->_1.byval_arg.data + v649);
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo, monitor_low);
          v741 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__83_3 = (System_Func_object__bool__o *)v741->static_fields->__9__83_3;
        if ( !_9__83_3 )
        {
          if ( !v741->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v741, monitor_low);
            v741 = QuestRestrictionInfo___c_TypeInfo;
          }
          v744 = (Il2CppObject *)v741->static_fields->__9;
          _9__83_3 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                      System_Func_RestrictionSlotDetailEntity__bool__TypeInfo,
                                                      monitor_low,
                                                      v697,
                                                      v698);
          System_Func_object__bool____ctor(_9__83_3, v744, Method_QuestRestrictionInfo___c__Setup_b__83_3__, 0LL);
          v745 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v745->__9__83_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__83_3;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v745->__9__83_3,
            (int64_t)_9__83_3,
            v746,
            v747,
            v748,
            v749,
            v750,
            v751);
          v588 = v855;
        }
        Master_object = BasicHelper__Any_object__49274176(
                          v636,
                          (System_Func_T__bool__o *)_9__83_3,
                          (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
        if ( !v742 )
          goto LABEL_385;
        *(_BYTE *)(v742 + 48) = (Master_object & 1) == 0;
        v752 = p_fields->klass;
        v655 = questIdb;
        if ( !p_fields->klass )
          goto LABEL_385;
        if ( (unsigned int)v649 >= LODWORD(v752->_1.namespaze) )
          goto LABEL_386;
        v753 = *((_QWORD *)&v752->_1.byval_arg.data + v649);
        if ( !v753 )
          goto LABEL_385;
        p_dialogMessageInfoDictionary = v851;
        if ( *(_DWORD *)(v753 + 16) == 1 )
        {
          if ( *(_BYTE *)(v753 + 48) )
            v588->fields.isNpcEditablePos = 1;
        }
        *(_BYTE *)(v753 + 49) = v610->max_length != 0;
      }
      else
      {
        v654 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_385;
        v655 = questIdb;
        if ( (unsigned int)v649 >= LODWORD(v654->_1.namespaze) )
          goto LABEL_386;
        v656 = *((_QWORD *)&v654->_1.byval_arg.data + v649);
        if ( !v656 )
          goto LABEL_385;
        p_dialogMessageInfoDictionary = v851;
        *(_DWORD *)(v656 + 16) = 5;
        *(_BYTE *)(v656 + 48) = 0;
      }
      ++v607;
      v608 = v655 & v857;
    }
    if ( !v387
      || (v758 = System_Collections_Generic_List_object___ToArray(
                   v387,
                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__),
          v588->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v758,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v588->fields.restrictionMessageEntities,
            (int64_t)v758,
            v759,
            v760,
            v761,
            v762,
            v763,
            v764),
          (slotInfos = v588->fields.slotInfos) == 0LL) )
    {
LABEL_385:
      sub_1BCAA3C(Master_object, monitor_low);
    }
    v766 = slotInfos->max_length;
    if ( v766 >= 1 )
    {
      v767 = 0;
      v768 = 0;
      v769 = 0;
      v770 = 0;
      while ( v766 != v767 )
      {
        v771 = slotInfos->m_Items[v767];
        if ( !v771 )
          goto LABEL_385;
        switch ( v771->fields.slotType )
        {
          case 0:
          case 3:
          case 4:
            ++v770;
            break;
          case 1:
            ++v769;
            break;
          case 2:
            ++v768;
            break;
          default:
            break;
        }
        if ( v766 == ++v767 )
          goto LABEL_291;
      }
LABEL_386:
      sub_1BCAA44(Master_object, monitor_low);
    }
    v770 = 0;
    v769 = 0;
    v768 = 0;
LABEL_291:
    if ( v768 == 0 && (v608 & 1) != 0 )
      v588->fields.isNoSupportBattle = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, monitor_low);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object )
      goto LABEL_385;
    Master_object = (int64_t)NpcFollowerMaster__GetQuestFollowerList(
                               (NpcFollowerMaster_o *)Master_object,
                               v588->fields.questId,
                               v588->fields.questPhase,
                               0LL);
    if ( !Master_object )
      goto LABEL_385;
    v772 = *(_DWORD *)(Master_object + 24);
    if ( v772 >= 1 )
    {
      v773 = 0;
      while ( v772 != v773 )
      {
        v774 = *(_QWORD *)(Master_object + 8LL * v773 + 32);
        if ( !v774 )
          goto LABEL_385;
        if ( !*(_BYTE *)(v774 + 105) && v772 != ++v773 )
          continue;
        goto LABEL_305;
      }
      goto LABEL_386;
    }
    v773 = 0;
LABEL_305:
    Master_object = (int64_t)v866;
    if ( !v866 )
      goto LABEL_385;
    HasFlag_40199512 = QuestEntity__HasFlag_40199512((QuestEntity_o *)v866, 0x10000000LL, questPhase, 0LL);
    v588->fields.isNpcMultipleBattle = HasFlag_40199512;
    if ( !HasFlag_40199512 )
      v588->fields.isNpcMultipleBattle = v773 < v772 && v770 > 0 && v769 > 0;
    Master_object = (int64_t)v866;
    if ( !v866 )
      goto LABEL_385;
    v776 = QuestEntity__HasFlag_40199512((QuestEntity_o *)v866, 0x20000000LL, questPhase, 0LL);
    v588->fields.isNpcOnlyBattle = v776;
    if ( !v776 )
      v588->fields.isNpcOnlyBattle = v773 < v772 && v770 == 0 && v769 > 0;
    Master_object = (int64_t)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_385;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 8LL, 0LL) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            *p_restrictionSlotDictionary,
                            2,
                            0LL,
                            (const MethodInfo_2F01004 *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v778 = 2;
      else
        v778 = 1;
      DeckMemberMax = v588->fields.servantNumMax;
      v588->fields.servantNumMin = v778;
      if ( !DeckMemberMax )
      {
        v780 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, monitor_low);
          v780 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v780->static_fields->DeckMemberMax;
        v588->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v588->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v588->fields.isNpcMultipleBattle )
        v588->fields.myServantNumMax = v770;
    }
    else
    {
      v588->fields.myServantNumMax = v770;
      if ( v770 == 1 && DeckMemberMax == 1 )
      {
        Master_object = (int64_t)v588->fields.restrictionSlotDetailDictionary;
        v588->fields.isFixedMyServantSingle = 1;
        if ( !Master_object )
          goto LABEL_385;
        Master_object = (int64_t)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                                   1,
                                   (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( Master_object )
        {
          v781 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
          if ( v781 )
          {
            if ( !(_DWORD)v781 )
              goto LABEL_386;
            v782 = *(_QWORD *)(Master_object + 32);
            if ( !v782 )
              goto LABEL_385;
            Master_object = *(_QWORD *)(v782 + 40);
            if ( !Master_object )
              goto LABEL_385;
            v783 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
            v588->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)sub_1BCA91C(
                                                                                              v783,
                                                                                              int___TypeInfo);
            v784 = sub_1BCA91C(v783, int___TypeInfo);
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v588->fields.fixedMyServantSingleIndividualities,
              v784,
              v785,
              v786,
              v787,
              v788,
              v789,
              v790);
          }
        }
      }
    }
    Master_object = (int64_t)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_385;
    Master_object = System_Collections_Generic_Dictionary_int__object___get_Count(
                      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                      (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__object__o *)v588->fields.restrictionSlotDictionary;
    v588->fields.isSupportOnly = (int)Master_object > 0;
    if ( !restrictionSlotDictionary )
      goto LABEL_385;
    Master_object = (int64_t)System_Collections_Generic_Dictionary_int__object___get_Values(
                               restrictionSlotDictionary,
                               (const MethodInfo_3205CF4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Master_object )
      goto LABEL_385;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v861,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Master_object,
      (const MethodInfo_38CE2BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v862 = v861;
    do
    {
      v792 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
               &v862,
               (const MethodInfo_3357390 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v792 )
        break;
      if ( !v862.fields._currentValue )
        sub_1BCAA3C(v792, v793);
      v794 = (int)v862.fields._currentValue[1].monitor;
      if ( v794 >= 1 )
      {
        v795 = 0;
        while ( 1 )
        {
          if ( v794 == v795 )
            sub_1BCAA44(v792, v793);
          v796 = *((_QWORD *)&v862.fields._currentValue[2].klass + v795);
          if ( !v796 )
            sub_1BCAA3C(v792, v793);
          if ( *(_DWORD *)(v796 + 28) == 1 )
            break;
          if ( v794 == ++v795 )
            goto LABEL_346;
        }
        v588->fields.isSupportOnly = 0;
        break;
      }
LABEL_346:
      ;
    }
    while ( v588->fields.isSupportOnly );
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &v862,
      (const MethodInfo_335738C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    v800 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v797, v798, v799);
    System_Text_StringBuilder___ctor(v800, 0LL);
    v804 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v801, v802, v803);
    System_Text_StringBuilder___ctor(v804, 0LL);
    v805 = *p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_385;
    v806 = v805->max_length;
    if ( v806 >= 1 )
    {
      v807 = 0;
      while ( 1 )
      {
        if ( v807 >= v806 )
          goto LABEL_386;
        v808 = v805->m_Items[v807];
        if ( !v808 )
          goto LABEL_385;
        Master_object = System_String__IsNullOrEmpty(v808->fields.summary, 0LL);
        if ( (Master_object & 1) == 0 )
          break;
LABEL_375:
        v806 = v805->max_length;
        if ( (int)++v807 >= v806 )
          goto LABEL_376;
      }
      type = v808->fields.type;
      if ( type == 10 || type == 2 )
      {
        v811 = 1;
      }
      else
      {
        if ( type == 1 )
        {
          targetVals2 = v808->fields.targetVals2;
          if ( !targetVals2 )
            goto LABEL_385;
          v811 = 1;
          v812 = targetVals2->max_length == 1;
LABEL_363:
          if ( (v812 & v811) != 0 )
          {
            if ( v588->fields.isRestriction )
            {
              if ( !v804 )
                goto LABEL_385;
              System_Text_StringBuilder__Append_61563116(v804, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            }
            else if ( !v804 )
            {
              goto LABEL_385;
            }
            Master_object = (int64_t)System_Text_StringBuilder__Append_61563116(v804, v808->fields.summary, 0LL);
            v588->fields.isRestriction = 1;
          }
          if ( v811 )
          {
            if ( v588->fields.isRestriction )
            {
              if ( !v800 )
                goto LABEL_385;
              System_Text_StringBuilder__Append_61563116(v800, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            }
            else if ( !v800 )
            {
              goto LABEL_385;
            }
            Master_object = (int64_t)System_Text_StringBuilder__Append_61563116(v800, v808->fields.summary, 0LL);
            v588->fields.isRestriction = 1;
          }
          goto LABEL_375;
        }
        v811 = 0;
      }
      v812 = 1;
      goto LABEL_363;
    }
LABEL_376:
    if ( !v804 )
      goto LABEL_385;
    Master_object = System_Text_StringBuilder__get_Length(v804, 0LL);
    if ( (int)Master_object >= 1 )
    {
      v813 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v804->klass->vtable._3_ToString.method)(
               v804,
               v804->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      p_confirmRestrictionMessage->klass = (PartyOrganizationUtility_c *)v813;
      sub_1BCA784(p_confirmRestrictionMessage, v813, v814, v815, v816, v817, v818, v819);
    }
    if ( !v800 )
      goto LABEL_385;
    if ( System_Text_StringBuilder__get_Length(v800, 0LL) >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v820);
      v821 = LocalizationManager__Get((System_String_o *)StringLiteral_10415/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v822 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v800->klass->vtable._3_ToString.method)(
                                  v800,
                                  v800->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v823 = System_String__Concat_62412480(v821, (System_String_o *)StringLiteral_43/*"\n"*/, v822, 0LL);
      p_restrictionMessage->klass = (PartyOrganizationUtility_c *)v823;
      sub_1BCA784(p_restrictionMessage, (int64_t)v823, v824, v825, v826, v827, v828, v829);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(v149, v354);
  }
}


void __fastcall QuestRestrictionInfo__SetupOldRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  System_Text_StringBuilder_o *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Text_StringBuilder_o *v39; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x0
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct RestrictionEntity_array *restrictionEntityList; // x21
  int max_length; // w8
  unsigned int v50; // w22
  struct RestrictionEntity_o *v51; // x27
  __int64 v52; // x1
  BalanceConfig_c *v53; // x0
  struct System_Int32_array *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Boolean_array *DeckPositionList; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int *targetVals; // x8
  int32_t v69; // w8
  struct System_Int32_array *v70; // x8
  __int64 v71; // x9
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x8
  Il2CppObject *v76; // x25
  int64_t v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  __int64 v84; // x1
  BalanceConfig_c *v85; // x0
  struct System_Int32_array *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct System_Int32_array *v93; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  struct System_Int32_array *v100; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  struct FollowerInfo_array *v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  struct System_Object_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  Il2CppClass **v117; // x8
  struct System_Int32_array *v118; // x8
  _BOOL4 isRestriction; // w9
  __int64 v120; // x9
  struct System_Collections_Generic_List_int__o *specifiedPositionList; // x25
  struct System_Int32_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  struct System_Collections_Generic_List_int__o *v125; // x25
  struct System_Int32_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  struct System_String_o *v129; // x0
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  __int64 v136; // x1
  System_String_o *v137; // x0
  struct System_String_o *v138; // x0
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  long double v145; // q0
  __int64 v146; // x0
  __int64 v147; // x0
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  bool HasFlag; // w0
  bool v155; // w0
  struct System_Int32_array *v156; // x20
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  bool v163; // w0
  bool HasFlag_40199512; // w0
  bool v165; // w0
  struct System_Int32_array *v166; // x20
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  bool v173; // w0
  int64_t v174; // x2
  int32_t v175; // w3
  System_String_o *v176; // x4
  BattleSetupInfo_o *v177; // x5
  FollowerInfo_o *v178; // x6
  PartyListViewItem_o *v179; // x7
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  PartyOrganizationUtility_o *p_totalCostRestrictionEntity; // [xsp+20h] [xbp-D0h]
  PartyOrganizationUtility_o *p_uniqueSvtRestrictionEntity; // [xsp+30h] [xbp-C0h]
  PartyOrganizationUtility_o *p_servantNumRestrictionEntity; // [xsp+58h] [xbp-98h]
  PartyOrganizationUtility_o *p_myServantNumRestrictionEntity; // [xsp+60h] [xbp-90h]
  PartyOrganizationUtility_o *p_uniqueIndividualityEntity; // [xsp+70h] [xbp-80h]
  QuestRestrictionInfoEntity_o *v191; // [xsp+78h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v192; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4B1736A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&FollowerInfo___TypeInfo, v15, v16);
    sub_1BCA7E0(&int___TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_10415/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v33, v34);
    byte_4B1736A = 1;
  }
  v192 = 0LL;
  entity = 0LL;
  v191 = 0LL;
  v35 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, method, v2, v3);
  System_Text_StringBuilder___ctor(v35, 0LL);
  v39 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v36, v37, v38);
  System_Text_StringBuilder___ctor(v39, 0LL);
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_149;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    p_uniqueIndividualityEntity = (PartyOrganizationUtility_o *)&this->fields.uniqueIndividualityEntity;
    p_servantNumRestrictionEntity = (PartyOrganizationUtility_o *)&this->fields.servantNumRestrictionEntity;
    p_myServantNumRestrictionEntity = (PartyOrganizationUtility_o *)&this->fields.myServantNumRestrictionEntity;
    v50 = 0;
    p_uniqueSvtRestrictionEntity = (PartyOrganizationUtility_o *)&this->fields.uniqueSvtRestrictionEntity;
    p_totalCostRestrictionEntity = (PartyOrganizationUtility_o *)&this->fields.totalCostRestrictionEntity;
    while ( 1 )
    {
      if ( v50 >= max_length )
        goto LABEL_150;
      v51 = restrictionEntityList->m_Items[v50];
      if ( !v51 )
        goto LABEL_149;
      switch ( v51->fields.type )
      {
        case 3:
          p_totalCostRestrictionEntity->klass = (PartyOrganizationUtility_c *)v51;
          sub_1BCA784(p_totalCostRestrictionEntity, (int64_t)v51, v42, v43, v44, v45, v46, v47);
          goto LABEL_66;
        case 5:
          this->fields.supportOnlyRestrictionEntity = v51;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.supportOnlyRestrictionEntity,
            (int64_t)v51,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
          this->fields.isSupportOnly = 1;
          goto LABEL_66;
        case 6:
          p_uniqueSvtRestrictionEntity->klass = (PartyOrganizationUtility_c *)v51;
          sub_1BCA784(p_uniqueSvtRestrictionEntity, (int64_t)v51, v42, v43, v44, v45, v46, v47);
          v53 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v52);
            v53 = BalanceConfig_TypeInfo;
          }
          v54 = (struct System_Int32_array *)sub_1BCA888(
                                               int___TypeInfo,
                                               (unsigned int)v53->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v54;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.deckSvtIdList,
            (int64_t)v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60);
          this->fields.isUniqueServant = 1;
          goto LABEL_66;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v51;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.fixedSupportPositionRestrictionEntity,
            (int64_t)v51,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
          DeckPositionList = RestrictionEntity__getDeckPositionList(v51, 0LL);
          this->fields.supportPositionList = DeckPositionList;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.supportPositionList,
            (int64_t)DeckPositionList,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67);
          this->fields.isFixedSupportPosition = 1;
          goto LABEL_66;
        case 8:
          this->fields.fixedMyServantPositionRestrictionEntity = v51;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
            (int64_t)v51,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
          this->fields.isFixedMyServantPosition = 1;
          goto LABEL_66;
        case 9:
          this->fields.fixedMyServantSingleRestrictionEntity = v51;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.fixedMyServantSingleRestrictionEntity,
            (int64_t)v51,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
          this->fields.isFixedMyServantSingle = 1;
          goto LABEL_66;
        case 0xA:
          p_servantNumRestrictionEntity->klass = (PartyOrganizationUtility_c *)v51;
          sub_1BCA784(p_servantNumRestrictionEntity, (int64_t)v51, v42, v43, v44, v45, v46, v47);
          targetVals = (int *)v51->fields.targetVals;
          if ( v51->fields.rangeType == 5 )
          {
            if ( targetVals && targetVals[6] >= 2 )
            {
              this->fields.servantNumMin = targetVals[8];
              v69 = targetVals[9];
LABEL_51:
              this->fields.servantNumMax = v69;
            }
          }
          else if ( targetVals )
          {
            v120 = *((_QWORD *)targetVals + 3);
            if ( v120 )
            {
              if ( !(_DWORD)v120 )
                goto LABEL_150;
              v69 = targetVals[8];
              goto LABEL_51;
            }
          }
LABEL_66:
          max_length = restrictionEntityList->max_length;
          if ( (int)++v50 >= max_length )
            goto LABEL_67;
          break;
        case 0xB:
          p_myServantNumRestrictionEntity->klass = (PartyOrganizationUtility_c *)v51;
          sub_1BCA784(p_myServantNumRestrictionEntity, (int64_t)v51, v42, v43, v44, v45, v46, v47);
          v70 = v51->fields.targetVals;
          if ( !v70 )
            goto LABEL_66;
          v71 = *(_QWORD *)&v70->max_length;
          if ( !v71 )
            goto LABEL_66;
          if ( !(_DWORD)v71 )
            goto LABEL_150;
          this->fields.myServantNumMax = v70->m_Items[1];
          goto LABEL_66;
        case 0xC:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          items = myServantOrNpcRestrictionEntityList->fields._items;
          v73 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !items )
            goto LABEL_149;
          size = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v51,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v75 = &items->obj.klass + size;
            myServantOrNpcRestrictionEntityList->fields._size = size + 1;
            v75[4] = (Il2CppClass *)v51;
            sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 4), (int64_t)v51, v42, v43, v44, v45, v46, v47);
          }
          specifiedPositionList = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v51,
                                                                                               0LL);
          if ( !specifiedPositionList )
            goto LABEL_149;
          v122 = specifiedPositionList->fields._items;
          v123 = Method_System_Collections_Generic_List_int__Add__;
          ++specifiedPositionList->fields._version;
          if ( !v122 )
            goto LABEL_149;
          v124 = specifiedPositionList->fields._size;
          v41 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v124 >= v122->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              specifiedPositionList,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
          }
          else
          {
            specifiedPositionList->fields._size = v124 + 1;
            v122->m_Items[v124 + 1] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrNpc = 1;
          goto LABEL_66;
        case 0xE:
          this->fields.fixedServantPositionRestrictionEntity = v51;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.fixedServantPositionRestrictionEntity,
            (int64_t)v51,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
          this->fields.isNeedStarting = 1;
          goto LABEL_66;
        case 0xF:
          p_uniqueIndividualityEntity->klass = (PartyOrganizationUtility_c *)v51;
          sub_1BCA784(p_uniqueIndividualityEntity, (int64_t)v51, v42, v43, v44, v45, v46, v47);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v51->fields.targetVals;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          v76 = System_Array__Clone((System_Array_o *)myServantOrNpcRestrictionEntityList, 0LL);
          this->fields.uniqueIndividualitys = (struct System_Int32_array *)sub_1BCA91C(v76, int___TypeInfo);
          v77 = sub_1BCA91C(v76, int___TypeInfo);
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.uniqueIndividualitys,
            v77,
            v78,
            v79,
            v80,
            v81,
            v82,
            v83);
          v85 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v84);
            v85 = BalanceConfig_TypeInfo;
          }
          v86 = (struct System_Int32_array *)sub_1BCA888(
                                               int___TypeInfo,
                                               (unsigned int)v85->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v86;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.deckSvtIdList,
            (int64_t)v86,
            v87,
            v88,
            v89,
            v90,
            v91,
            v92);
          v93 = (struct System_Int32_array *)sub_1BCA888(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckLimitCountList = v93;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.deckLimitCountList,
            (int64_t)v93,
            v94,
            v95,
            v96,
            v97,
            v98,
            v99);
          v100 = (struct System_Int32_array *)sub_1BCA888(
                                                int___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckDispLimitCountList = v100;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.deckDispLimitCountList,
            (int64_t)v100,
            v101,
            v102,
            v103,
            v104,
            v105,
            v106);
          v107 = (struct FollowerInfo_array *)sub_1BCA888(
                                                FollowerInfo___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckNpcInfoList = v107;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.deckNpcInfoList,
            (int64_t)v107,
            v108,
            v109,
            v110,
            v111,
            v112,
            v113);
          this->fields.isUniqueIndividuality = 1;
          goto LABEL_66;
        case 0x10:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          v114 = myServantOrNpcRestrictionEntityList->fields._items;
          v115 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v114 )
            goto LABEL_149;
          v116 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v116 >= v114->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v51,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
          }
          else
          {
            v117 = &v114->obj.klass + v116;
            myServantOrNpcRestrictionEntityList->fields._size = v116 + 1;
            v117[4] = (Il2CppClass *)v51;
            sub_1BCA784((PartyOrganizationUtility_o *)(v117 + 4), (int64_t)v51, v42, v43, v44, v45, v46, v47);
          }
          v125 = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v51,
                                                                                               0LL);
          if ( !v125 )
            goto LABEL_149;
          v126 = v125->fields._items;
          v127 = Method_System_Collections_Generic_List_int__Add__;
          ++v125->fields._version;
          if ( !v126 )
            goto LABEL_149;
          v128 = v125->fields._size;
          v41 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v128 >= v126->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v125,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
          }
          else
          {
            v125->fields._size = v128 + 1;
            v126->m_Items[v128 + 1] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrSupport = 1;
          goto LABEL_66;
        case 0x11:
          this->fields.isDataLostBattle = 1;
          v118 = v51->fields.targetVals;
          if ( !v118 )
            goto LABEL_149;
          if ( !v118->max_length )
            goto LABEL_150;
          isRestriction = this->fields.isRestriction;
          this->fields.dataLostBattleId = v118->m_Items[1];
          if ( isRestriction )
          {
LABEL_44:
            if ( !v35 )
              goto LABEL_149;
            System_Text_StringBuilder__Append_61563116(v35, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
          }
          else
          {
LABEL_11:
            if ( !v35 )
              goto LABEL_149;
          }
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_61563116(
                                                                                               v35,
                                                                                               v51->fields.name,
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
    if ( !v35 )
      goto LABEL_149;
    v129 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v35->klass->vtable._3_ToString.method)(
                                       v35,
                                       v35->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    this->fields.confirmRestrictionMessage = v129;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.confirmRestrictionMessage,
      (int64_t)v129,
      v130,
      v131,
      v132,
      v133,
      v134,
      v135);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v136);
    v137 = LocalizationManager__Get((System_String_o *)StringLiteral_10415/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    v138 = System_String__Concat_62412480(
             v137,
             (System_String_o *)StringLiteral_43/*"\n"*/,
             this->fields.confirmRestrictionMessage,
             0LL);
    this->fields.restrictionMessage = v138;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.restrictionMessage,
      (int64_t)v138,
      v139,
      v140,
      v141,
      v142,
      v143,
      v144);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)myServantOrNpcRestrictionEntityList,
    &entity,
    this->fields.questId,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)myServantOrNpcRestrictionEntityList,
    &v192,
    this->fields.questId,
    this->fields.questPhase,
    0LL);
  v146 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v146 + 309) & 1) == 0 )
    v146 = sub_1C1C6BC(v145);
  v147 = *(_QWORD *)(*(_QWORD *)(v146 + 192) + 16LL);
  if ( (*(_BYTE *)(v147 + 309) & 1) == 0 )
    v147 = sub_1C1C6BC(v145);
  myServantOrNpcRestrictionEntityList = **(System_Collections_Generic_List_object__o ***)(v147 + 184);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         (QuestRestrictionInfoMaster_o *)myServantOrNpcRestrictionEntityList,
         &v191,
         this->fields.questId,
         this->fields.questPhase,
         0LL) )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v191;
    if ( !v191 )
      goto LABEL_149;
    if ( QuestRestrictionInfoEntity__HasFlag(v191, 0x100000LL, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
      goto LABEL_101;
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v191;
    if ( !v191 )
      goto LABEL_149;
    HasFlag = QuestRestrictionInfoEntity__HasFlag(v191, 0x400000000000000LL, 0LL);
    this->fields.isNoSupportBattle = HasFlag;
    if ( HasFlag )
      goto LABEL_101;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v191;
    if ( !v191 )
      goto LABEL_149;
    v155 = QuestRestrictionInfoEntity__HasFlag(v191, 0x80000LL, 0LL);
    this->fields.isSupportOnlyForceBattle = v155;
    if ( v155 )
    {
LABEL_101:
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v191;
      if ( v191 )
      {
        this->fields.isNpcMultipleBattle = QuestRestrictionInfoEntity__HasFlag(v191, 0x10000000LL, 0LL);
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v191;
        if ( v191 )
        {
          this->fields.isNpcOnlyBattle = QuestRestrictionInfoEntity__HasFlag(v191, 0x20000000LL, 0LL);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v191;
          if ( v191 )
          {
            this->fields.isNpcEditablePos = QuestRestrictionInfoEntity__HasFlag(v191, 0x800000000LL, 0LL);
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v191;
            if ( v191 )
            {
              this->fields.isNotTransitionSupportList = QuestRestrictionInfoEntity__HasFlag(
                                                          v191,
                                                          0x80000000000000LL,
                                                          0LL);
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v191;
              if ( v191 )
              {
                QuestRestrictionInfoEntity__GetOverwriteLimitCountSvtIds(
                  v191,
                  &this->fields.overwriteLimitCountSvtIds,
                  &this->fields.overwriteLimitCounts,
                  &this->fields.overwriteLimitCountIconIds,
                  0LL);
                myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v191;
                if ( v191 )
                {
                  v163 = QuestRestrictionInfoEntity__HasFlag(v191, 0x400000000000000LL, 0LL);
                  this->fields.isAllOutBattle = v163;
                  if ( v163 )
                  {
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_149;
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_((DataManager_o *)myServantOrNpcRestrictionEntityList, (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_149;
                    this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                                         (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                                         this->fields.questId,
                                                         17,
                                                         0LL);
                  }
                  if ( entity )
                    this->fields.isFatigure = QuestEntity__HasFlag_40199512(
                                                (QuestEntity_o *)entity,
                                                0x200000LL,
                                                this->fields.questPhase,
                                                0LL);
                  if ( v192 )
                  {
                    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v192, 0LL);
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v192;
                    if ( !v192 )
                      goto LABEL_149;
                    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v192, 0LL);
                  }
                  else
                  {
                    this->fields.correctionIconId = -1;
                  }
                  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v191;
                  if ( v191 )
                  {
                    this->fields.isNotSingleSupportOnly = QuestRestrictionInfoEntity__HasFlag(
                                                            v191,
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
      sub_1BCAA3C(myServantOrNpcRestrictionEntityList, v41);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v191;
    if ( !v191 )
      goto LABEL_149;
    if ( QuestRestrictionInfoEntity__HasFlag(v191, 0x1000000LL, 0LL) )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v191;
      if ( !v191 )
        goto LABEL_149;
      this->fields.eventDeckNum = QuestRestrictionInfoEntity__GetUserEventDeckNo(v191, 0LL);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1BCA888(int___TypeInfo, 1LL);
    if ( !v191 )
      goto LABEL_149;
    v156 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetSingleForceSvtId(
                                                                                         v191,
                                                                                         0LL);
    if ( !v156 )
      goto LABEL_149;
    if ( v156->max_length )
    {
      v156->m_Items[1] = (int)myServantOrNpcRestrictionEntityList;
      this->fields.svtIdForceBattleList = v156;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.svtIdForceBattleList,
        (int64_t)v156,
        v157,
        v158,
        v159,
        v160,
        v161,
        v162);
      goto LABEL_101;
    }
LABEL_150:
    sub_1BCAA44(myServantOrNpcRestrictionEntityList, v41);
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_40199512((QuestEntity_o *)entity, 0x100000LL, this->fields.questPhase, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
      if ( !entity )
        goto LABEL_149;
      HasFlag_40199512 = QuestEntity__HasFlag_40199512(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0LL);
      this->fields.isNoSupportBattle = HasFlag_40199512;
      if ( !HasFlag_40199512 )
      {
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
        if ( !entity )
          goto LABEL_149;
        v165 = QuestEntity__HasFlag_40199512((QuestEntity_o *)entity, 0x80000LL, this->fields.questPhase, 0LL);
        this->fields.isSupportOnlyForceBattle = v165;
        if ( !v165 )
        {
          if ( v192 )
          {
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
            if ( !entity )
              goto LABEL_149;
            if ( QuestEntity__HasFlag_40199512((QuestEntity_o *)entity, 0x1000000LL, this->fields.questPhase, 0LL) )
            {
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v192;
              if ( !v192 )
                goto LABEL_149;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v192, 0LL);
            }
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1BCA888(
                                                                                                 int___TypeInfo,
                                                                                                 1LL);
            if ( !v192 )
              goto LABEL_149;
            v166 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__GetSingleForceSvtId(
                                                                                                 v192,
                                                                                                 0LL);
            if ( !v166 )
              goto LABEL_149;
            if ( !v166->max_length )
              goto LABEL_150;
            v166->m_Items[1] = (int)myServantOrNpcRestrictionEntityList;
            this->fields.svtIdForceBattleList = v166;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.svtIdForceBattleList,
              (int64_t)v166,
              v167,
              v168,
              v169,
              v170,
              v171,
              v172);
          }
        }
      }
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isFatigure = QuestEntity__HasFlag_40199512(
                                (QuestEntity_o *)entity,
                                0x200000LL,
                                this->fields.questPhase,
                                0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    v173 = QuestEntity__HasFlag_40199512((QuestEntity_o *)entity, 0x400000000000000LL, this->fields.questPhase, 0LL);
    this->fields.isAllOutBattle = v173;
    if ( v173 )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_149;
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                           (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
    this->fields.isNpcMultipleBattle = QuestEntity__HasFlag_40199512(
                                         (QuestEntity_o *)entity,
                                         0x10000000LL,
                                         this->fields.questPhase,
                                         0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNpcOnlyBattle = QuestEntity__HasFlag_40199512(
                                     (QuestEntity_o *)entity,
                                     0x20000000LL,
                                     this->fields.questPhase,
                                     0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNpcEditablePos = QuestEntity__HasFlag_40199512(
                                      (QuestEntity_o *)entity,
                                      0x800000000LL,
                                      this->fields.questPhase,
                                      0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNotTransitionSupportList = QuestEntity__HasFlag_40199512(
                                                (QuestEntity_o *)entity,
                                                0x80000000000000LL,
                                                this->fields.questPhase,
                                                0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_40199512(
                                            (QuestEntity_o *)entity,
                                            0x1000000000000000LL,
                                            this->fields.questPhase,
                                            0LL);
  }
  if ( v192 )
  {
    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v192, 0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v192;
    if ( !v192 )
      goto LABEL_149;
    QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
      v192,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v192;
    if ( !v192 )
      goto LABEL_149;
    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v192, 0LL);
  }
  else
  {
    this->fields.correctionIconId = -1;
    this->fields.overwriteLimitCountSvtIds = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.overwriteLimitCountSvtIds,
      0LL,
      v148,
      v149,
      v150,
      v151,
      v152,
      v153);
    this->fields.overwriteLimitCounts = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.overwriteLimitCounts,
      0LL,
      v174,
      v175,
      v176,
      v177,
      v178,
      v179);
    this->fields.overwriteLimitCountIconIds = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.overwriteLimitCountIconIds,
      0LL,
      v180,
      v181,
      v182,
      v183,
      v184,
      v185);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Collections_Generic_List_object__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_List_T__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  void *v32; // x1
  struct System_String_o **p_summary; // x19
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B173B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int_____ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_List_int____TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B173B6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.slotType = 0;
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_int____TypeInfo,
                                                       v12,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.individualityList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v25 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_Restriction_RangeType__TypeInfo,
                                                  v22,
                                                  v23,
                                                  v24);
  System_Collections_Generic_List_Int32Enum____ctor(
    v25,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v25;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rangeTypeList, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_1/*""*/;
  this->fields.summary = (struct System_String_o *)StringLiteral_1/*""*/;
  p_summary = &this->fields.summary;
  sub_1BCA784((PartyOrganizationUtility_o *)p_summary, (int64_t)v32, v34, v35, v36, v37, v38, v39);
  *((_WORD *)p_summary + 4) = 1;
}


void __fastcall QuestRestrictionInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B173B7 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestRestrictionInfo___c_TypeInfo, v1, v2);
    byte_4B173B7 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestRestrictionInfo___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestRestrictionInfo___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionInfo___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestRestrictionInfo___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall QuestRestrictionInfo___c___ctor(QuestRestrictionInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__106_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCAA3C(this, 0LL);
  return e->fields.type != 1 || RestrictionEntity__IsRestrictionTarget(e, 1, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__106_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCAA3C(this, 0LL);
  return e->fields.name;
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__106_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCAA3C(this, 0LL);
  return e->fields.name;
}


bool __fastcall QuestRestrictionInfo___c___GetRestrictionMessageEntityList_b__108_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  unsigned int v3; // w8
  _BOOL4 v4; // w0

  if ( !e )
    sub_1BCAA3C(this, 0LL);
  v3 = e->fields.type - 1;
  if ( v3 > 0x10 )
    LOBYTE(v4) = 0;
  else
    return (0x1100Bu >> v3) & 1;
  return v4;
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetRestrictionMessage_b__107_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCAA3C(this, 0LL);
  return e->fields.name;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualitySlot_b__98_0(
        QuestRestrictionInfo___c_o *this,
        QuestRestrictionInfo_SlotInfo_o *s,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *individualityList; // x8

  if ( (byte_4B173B8 & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_1BCA7E0(
                                           &Method_System_Collections_Generic_List_int____get_Count__,
                                           s,
                                           method);
    byte_4B173B8 = 1;
  }
  if ( !s || (individualityList = s->fields.individualityList) == 0LL )
    sub_1BCAA3C(this, s);
  return individualityList->fields._size > 0;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__97_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCAA3C(this, 0LL);
  return e->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__97_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionWholeEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCAA3C(this, 0LL);
  return e->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__83_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__83_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.type == 3;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__83_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.type == 2;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__83_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.type == 2;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass178_0___ctor(
        QuestRestrictionInfo___c__DisplayClass178_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass178_0___IsMyServantOrNpcRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass178_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass179_0___ctor(
        QuestRestrictionInfo___c__DisplayClass179_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass179_0___IsSelectableNormalSupport_b__0(
        QuestRestrictionInfo___c__DisplayClass179_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass180_0___ctor(
        QuestRestrictionInfo___c__DisplayClass180_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass180_0___IsNotIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass180_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass181_0___ctor(
        QuestRestrictionInfo___c__DisplayClass181_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass181_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass181_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass183_0___ctor(
        QuestRestrictionInfo___c__DisplayClass183_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass183_0___GetRestrictedName_b__0(
        QuestRestrictionInfo___c__DisplayClass183_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_o *questRestrictionEntity; // x8

  if ( !x || (questRestrictionEntity = this->fields.questRestrictionEntity) == 0LL )
    sub_1BCAA3C(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass186_0___ctor(
        QuestRestrictionInfo___c__DisplayClass186_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass186_0___GetMyServantOrNpcSvtIdList_b__0(
        QuestRestrictionInfo___c__DisplayClass186_0_o *this,
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
    sub_1BCAA44(this, x);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1BCAA3C(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass187_0___ctor(
        QuestRestrictionInfo___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass187_0___GetMyServantOrSupportTargetPos_b__0(
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
    sub_1BCAA44(this, x);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1BCAA3C(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass200_0___ctor(
        QuestRestrictionInfo___c__DisplayClass200_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass200_0___GetMyServantOrNpcSvtIdUnionNpcList_b__0(
        QuestRestrictionInfo___c__DisplayClass200_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.index;
}