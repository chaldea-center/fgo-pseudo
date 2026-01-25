void QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.questId = questId;
}


void QuestRestrictionInfo___ctor_43932992(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct RestrictionEntity_array *RestrictionList_43105644; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  const MethodInfo *v19; // x4

  if ( (byte_4CEF994 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF994 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v10);
  }
  RestrictionList_43105644 = QuestRestrictionMaster__getRestrictionList_43105644(
                               (QuestRestrictionMaster_o *)Instance,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               0);
  this->fields.restrictionEntityList = RestrictionList_43105644;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.restrictionEntityList,
    (int32_t)RestrictionList_43105644,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  QuestRestrictionInfo__Setup(this, v18, questId, questPhase, v19);
}


void QuestRestrictionInfo___ctor_43942540(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        RestrictionEntity_o *overwriteRestiction,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x23
  __int64 v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w1
  const MethodInfo *v35; // x4
  __int64 v36; // x0

  if ( (byte_4CEF995 & 1) == 0 )
  {
    sub_1C7BAE8(&QuestRestrictionEntity___TypeInfo);
    sub_1C7BAE8(&RestrictionEntity___TypeInfo);
    byte_4CEF995 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v11 = (struct QuestRestrictionEntity_array *)sub_1C7BB90(QuestRestrictionEntity___TypeInfo, 0);
  this->fields.questRestrictionEntityList = v11;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionEntityList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( overwriteRestiction )
  {
    v18 = sub_1C7BB90(RestrictionEntity___TypeInfo, 1);
    if ( !v18 )
      sub_1C7BD40(0, v19);
    v20 = v18;
    v21 = sub_1C7BC24(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v21 )
    {
      v36 = sub_1C7BD64(0);
      sub_1C7BC10(v36, 0);
    }
    if ( !*(_DWORD *)(v20 + 24) )
      sub_1C7BD48(v21);
    *(_QWORD *)(v20 + 32) = overwriteRestiction;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 32), (int32_t)overwriteRestiction, v22, v23, v24, v25, v26, v27);
  }
  else
  {
    v20 = sub_1C7BB90(RestrictionEntity___TypeInfo, 0);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v20;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.restrictionEntityList, v20, v28, v29, v30, v31, v32, v33);
  QuestRestrictionInfo__Setup(this, v34, questId, questPhase, v35);
}


void QuestRestrictionInfo__CacheOverwriteSvtTreasureDeviceLv(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *OverwriteSvtTreasureDeviceLv; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEF9E9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CEF9E9 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_10;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0) )
    return;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_10:
    sub_1C7BD40(Master_object, v4);
  OverwriteSvtTreasureDeviceLv = QuestPhaseEntity__GetOverwriteSvtTreasureDeviceLv(entity, 0);
  this->fields.cachedOverwriteSvtTreasureDeviceLv = OverwriteSvtTreasureDeviceLv;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.cachedOverwriteSvtTreasureDeviceLv,
    (int32_t)OverwriteSvtTreasureDeviceLv,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void QuestRestrictionInfo__CheckFixedServantPosition(
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

  if ( (byte_4CEF9B5 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_bool____get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_bool____get_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF9B5 = 1;
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
             (const MethodInfo_318C6F4 *)Method_System_Linq_Enumerable_Contains_int___) )
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_15;
  second = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                  (ServantEntity_o *)Instance,
                                                                  limitCount,
                                                                  dispLimit,
                                                                  0);
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
                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_bool____get_Item__);
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
                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_bool____get_Item__);
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
            (const MethodInfo_31999AC *)Method_System_Linq_Enumerable_Intersect_int___);
    Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                  v28,
                                  (const MethodInfo_317BCD4 *)Method_System_Linq_Enumerable_Any_int___);
    if ( !this->fields.myServantPositionsList )
      goto LABEL_15;
    v29 = (char)Instance;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this->fields.myServantPositionsList,
                                  v23,
                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_bool____get_Item__);
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
              (const MethodInfo_31999AC *)Method_System_Linq_Enumerable_Intersect_int___);
      if ( System_Linq_Enumerable__Any_int_(v31, (const MethodInfo_317BCD4 *)Method_System_Linq_Enumerable_Any_int___) )
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
                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_bool____get_Item__);
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
          (const MethodInfo_31999AC *)Method_System_Linq_Enumerable_Intersect_int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                v35,
                                (const MethodInfo_317BCD4 *)Method_System_Linq_Enumerable_Any_int___);
  positionsList = (System_Collections_Generic_List_object__o *)this->fields.positionsList;
  if ( !positionsList
    || (v37 = (char)Instance,
        (Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                       positionsList,
                                       v33,
                                       (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_bool____get_Item__)) == 0) )
  {
LABEL_15:
    sub_1C7BD40(Instance, v21);
  }
  if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
LABEL_67:
    sub_1C7BD48(Instance);
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


bool QuestRestrictionInfo__CheckMyServantNumRestriction(
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
        && !RestrictionEntity__IsRestriction(myServantNumRestrictionEntity, myServantNum, 0);
  }
}


int32_t QuestRestrictionInfo__ConvertOverwriteImageLimitCount(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Int32_array *overwriteLimitCountSvtIds; // x9
  struct System_Int32_array *overwriteLimitCounts; // x8
  int max_length; // w10
  unsigned int v6; // w11

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
  while ( overwriteLimitCountSvtIds->m_Items[v6] != svtId )
  {
    if ( max_length == ++v6 )
      return -1;
  }
  if ( v6 >= LODWORD(overwriteLimitCounts->max_length) )
    sub_1C7BD48(this);
  return overwriteLimitCounts->m_Items[v6];
}


int32_t QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43972224(
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
  if ( (byte_4CEF9BE & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEF9BE = 1;
  }
  if ( !userServantEntity )
    goto LABEL_20;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v16, 0);
  this = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(v4, v7, v8);
  if ( !this )
LABEL_20:
    sub_1C7BD40(this, userServantEntity);
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  v10 = this;
  if ( !dialogMessageInfoDictionary )
    return -1;
  if ( (int)dialogMessageInfoDictionary >= 1 )
  {
    v11 = 0;
    while ( (unsigned int)v11 < (unsigned int)dialogMessageInfoDictionary )
    {
      v12 = *(&v10->fields.eventId + v11);
      v14 = *(_QWORD *)&userServantEntity->fields.dispLimitCount.fields.currentCryptoKey;
      v13 = *(_QWORD *)&userServantEntity->fields.dispLimitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v17.fields.currentCryptoKey = v14;
      *(_QWORD *)&v17.fields.fakeValue = v13;
      this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v17, 0);
      if ( (_DWORD)this == v12 )
        return v12;
      dialogMessageInfoDictionary = v10->fields.dialogMessageInfoDictionary;
      if ( (int)++v11 >= (int)dialogMessageInfoDictionary )
        goto LABEL_15;
    }
LABEL_19:
    sub_1C7BD48(this);
  }
LABEL_15:
  if ( !(_DWORD)dialogMessageInfoDictionary )
    goto LABEL_19;
  return v10->fields.eventId;
}


System_Int32_array *QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(
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

  if ( (byte_4CEF9BD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CEF9BD = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( overwriteLimitCountSvtIds && this->fields.overwriteLimitCounts && (int)overwriteLimitCountSvtIds->max_length >= 1 )
  {
    v9 = 0;
    v10 = (unsigned int)overwriteLimitCountSvtIds->max_length - 1LL;
    do
    {
      if ( v9 >= LODWORD(overwriteLimitCountSvtIds->max_length) )
LABEL_21:
        sub_1C7BD48(v6);
      if ( overwriteLimitCountSvtIds->m_Items[v9] == svtId )
      {
        overwriteLimitCounts = this->fields.overwriteLimitCounts;
        if ( !overwriteLimitCounts )
          break;
        if ( v9 >= LODWORD(overwriteLimitCounts->max_length) )
          goto LABEL_21;
        if ( !v5 )
          break;
        v7 = (unsigned int)overwriteLimitCounts->m_Items[v9];
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            v7,
            *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size] = v7;
        }
      }
      if ( v10 == v9 )
        goto LABEL_19;
      overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
      ++v9;
    }
    while ( overwriteLimitCountSvtIds );
LABEL_18:
    sub_1C7BD40(v6, v7);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t QuestRestrictionInfo__GetAllOutBattleGroupNo(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.allOutBattleGroupNo;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetConfirmRestrictionMessage(
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
  System_Func_object__bool__o *_9__108_0; // x20
  Il2CppObject *v29; // x21
  struct QuestRestrictionInfo___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  QuestRestrictionInfo___c_c *v38; // x8
  System_Func_TSource__TResult__o *_9__108_2; // x20
  Il2CppObject *v40; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct QuestRestrictionInfo___c_StaticFields *v47; // x0
  GrandQuestFolderBoardItem_o *p__9__108_2; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v49; // x8
  QuestRestrictionInfo_SlotInfo_o *v50; // x8
  Il2CppObject *v51; // x21
  struct QuestRestrictionInfo___c_StaticFields *v52; // x0
  System_Collections_Generic_IEnumerable_string__o *v53; // x0

  v8 = this;
  if ( (byte_4CEF9A7 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C7BAE8(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C7BAE8(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__108_0__);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__108_1__);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__108_2__);
    sub_1C7BAE8(&QuestRestrictionInfo___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF9A7 = 1;
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
      _9__108_2 = (System_Func_TSource__TResult__o *)static_fields->__9__108_2;
      if ( _9__108_2 )
      {
LABEL_61:
        v53 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                                    _9__108_2,
                                                                    (const MethodInfo_31A5F40 *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
        return System_String__Join_64219504((System_String_o *)StringLiteral_43/*"\n"*/, v53, 0);
      }
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = QuestRestrictionInfo___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v26->static_fields->__9;
      _9__108_2 = (System_Func_TSource__TResult__o *)sub_1C7BD34(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__108_2,
        v51,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__108_2__,
        0);
      v52 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v52->__9__108_2 = (struct System_Func_RestrictionEntity__string__o *)_9__108_2;
      p__9__108_2 = (GrandQuestFolderBoardItem_o *)&v52->__9__108_2;
    }
    else
    {
      _9__108_0 = (System_Func_object__bool__o *)static_fields->__9__108_0;
      if ( !_9__108_0 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = QuestRestrictionInfo___c_TypeInfo;
        }
        v29 = (Il2CppObject *)v26->static_fields->__9;
        _9__108_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__108_0,
          v29,
          Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__108_0__,
          0);
        v30 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v30->__9__108_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__108_0;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v30->__9__108_0, (int32_t)_9__108_0, v31, v32, v33, v34, v35, v36);
      }
      v37 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
              (System_Func_TSource__bool__o *)_9__108_0,
              (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v38 = QuestRestrictionInfo___c_TypeInfo;
      RestrictionMessageEntityList = (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)v37;
      if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v38 = QuestRestrictionInfo___c_TypeInfo;
      }
      _9__108_2 = (System_Func_TSource__TResult__o *)v38->static_fields->__9__108_1;
      if ( _9__108_2 )
        goto LABEL_61;
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = QuestRestrictionInfo___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v38->static_fields->__9;
      _9__108_2 = (System_Func_TSource__TResult__o *)sub_1C7BD34(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__108_2,
        v40,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__108_1__,
        0);
      v47 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v47->__9__108_1 = (struct System_Func_RestrictionEntity__string__o *)_9__108_2;
      p__9__108_2 = (GrandQuestFolderBoardItem_o *)&v47->__9__108_1;
    }
    sub_1C7BA8C(p__9__108_2, (int32_t)_9__108_2, v41, v42, v43, v44, v45, v46);
    goto LABEL_61;
  }
  if ( initPos >= 1 )
  {
    slotInfos = v8->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_64;
    v10 = initPos - 1LL;
    if ( (unsigned int)v10 >= LODWORD(slotInfos->max_length) )
      goto LABEL_63;
    v11 = slotInfos->m_Items[v10];
    if ( !v11 )
      goto LABEL_64;
    this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v11->fields.summary, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v49 = v8->fields.slotInfos;
      if ( v49 )
      {
        if ( (unsigned int)v10 >= LODWORD(v49->max_length) )
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
    sub_1C7BD40(this, *(_QWORD *)&initPos);
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
      if ( SLODWORD(this->fields.uniqueSvtRestrictionEntity[2].fields.targetVals2) >= pos )
      {
        v22 = v8->fields.slotInfos;
        if ( !v22 )
          goto LABEL_64;
        if ( (unsigned int)v15 >= LODWORD(v22->max_length) )
          goto LABEL_63;
        v23 = v22->m_Items[v15];
        if ( !v23 )
          goto LABEL_64;
        if ( v23->fields.slotType != 5 )
        {
          this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v16->fields.summary, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
            return v16->fields.summary;
        }
      }
    }
    targetVals2 = v16->fields.targetVals2;
    if ( !targetVals2 )
      goto LABEL_64;
    if ( (unsigned int)targetVals2->max_length == 1 )
    {
      v19 = 0;
      v20 = 1;
      v21 = 1;
      while ( v19 < v21 )
      {
        if ( targetVals2->m_Items[v19] == pos )
        {
          this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v16->fields.summary, 0);
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
      sub_1C7BD48(this);
    }
LABEL_36:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v14 >= max_length )
      return v8->fields.confirmRestrictionMessage;
  }
}


int32_t QuestRestrictionInfo__GetCorrectionIconId(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        bool isFollower,
        const MethodInfo *method)
{
  struct System_Int32_array *overwriteLimitCountSvtIds; // x9
  struct System_Int32_array *overwriteLimitCountIconIds; // x8
  int max_length; // w10
  unsigned int v7; // w11
  int32_t *p_correctionIconId; // x8

  if ( !isFollower
    && (overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds) != 0
    && (overwriteLimitCountIconIds = this->fields.overwriteLimitCountIconIds) != 0
    && (max_length = overwriteLimitCountSvtIds->max_length, max_length >= 1) )
  {
    v7 = 0;
    while ( overwriteLimitCountSvtIds->m_Items[v7] != svtId )
    {
      if ( max_length == ++v7 )
        goto LABEL_8;
    }
    if ( v7 >= LODWORD(overwriteLimitCountIconIds->max_length) )
      sub_1C7BD48(this);
    p_correctionIconId = &overwriteLimitCountIconIds->m_Items[v7];
  }
  else
  {
LABEL_8:
    p_correctionIconId = &this->fields.correctionIconId;
  }
  return *p_correctionIconId;
}


int32_t QuestRestrictionInfo__GetDataLostBattleId(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.dataLostBattleId;
}


System_Int32_array *QuestRestrictionInfo__GetDialogList(QuestRestrictionInfo_o *this, const MethodInfo *method)
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

  if ( (byte_4CEF9BA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CEF9BA = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
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
      if ( (unsigned int)v19 >= LODWORD(questRestrictionEntityList->max_length) )
LABEL_68:
        sub_1C7BD48(Instance);
      v20 = (int32_t *)questRestrictionEntityList->m_Items[v19];
      if ( !v20 )
        goto LABEL_67;
      v21 = v20[8];
      if ( v21 == 1 )
        break;
      if ( v21 == 2 )
      {
        Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !Instance )
          goto LABEL_67;
        Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                                   Instance,
                                                   v20[4],
                                                   v20[5],
                                                   v20[6],
                                                   1,
                                                   0);
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
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CE827C )
    {
      sub_1C7BAE8(&NetworkManager_TypeInfo);
      byte_4CE827C = 1;
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
                                               (int64_t)Instance->fields.temporaryPartyInfo->fields.basePartyItem,
                                               v20[4],
                                               0);
    if ( Instance )
    {
      v23 = (UserQuestEntity_o *)Instance;
      Instance = (PartyOrganizationUtility_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0);
      if ( (_DWORD)Instance )
        goto LABEL_62;
      Instance = (PartyOrganizationUtility_o *)UserQuestEntity__HasStatus(v23, 16, 0);
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
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v3,
        v19,
        *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v3->fields._size = size + 1;
      items->m_Items[size] = v19;
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
      Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      v11 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CE827C )
      {
        sub_1C7BAE8(&NetworkManager_TypeInfo);
        byte_4CE827C = 1;
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
                                                 (int64_t)Instance->fields.temporaryPartyInfo->fields.basePartyItem,
                                                 this->fields.questId,
                                                 0);
      if ( !Instance )
        goto LABEL_27;
      v12 = (UserQuestEntity_o *)Instance;
      Instance = (PartyOrganizationUtility_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0);
      if ( !(_DWORD)Instance )
      {
        Instance = (PartyOrganizationUtility_o *)UserQuestEntity__HasStatus(v12, 16, 0);
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
      Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                                 Instance,
                                                 this->fields.questId,
                                                 this->fields.questPhase,
                                                 v9->fields.id,
                                                 1,
                                                 0);
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
    if ( (unsigned int)v15 >= LODWORD(v13->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v3,
        id,
        *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v3->fields._size = v15 + 1;
      v13->m_Items[v15] = id;
    }
    goto LABEL_32;
  }
LABEL_65:
  if ( !v3 )
LABEL_67:
    sub_1C7BD40(Instance, id);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetDialogMessage(
        QuestRestrictionInfo_o *this,
        int32_t n,
        int32_t restrictionId,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x21
  struct RestrictionMessageEntity_array *restrictionMessageEntities; // x9
  int max_length; // w10
  System_String_o **p_dialogMessage; // x8
  int v10; // w11
  RestrictionMessageEntity_o *v11; // x12
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x9
  Il2CppClass **v13; // x8
  int v14; // w10
  Il2CppClass *v15; // x11
  int v16; // w11
  QuestRestrictionEntity_o *v17; // x12
  Il2CppClass *v18; // x8

  v6 = this;
  if ( (byte_4CEF9BB & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF9BB = 1;
  }
  if ( v6->fields.restrictionBaseEntity )
  {
    restrictionMessageEntities = v6->fields.restrictionMessageEntities;
    if ( restrictionMessageEntities )
    {
      max_length = restrictionMessageEntities->max_length;
      if ( max_length < 1 )
      {
        p_dialogMessage = (System_String_o **)&StringLiteral_1/*""*/;
      }
      else
      {
        p_dialogMessage = (System_String_o **)&StringLiteral_1/*""*/;
        v10 = 0;
        while ( 1 )
        {
          if ( max_length == v10 )
            goto LABEL_32;
          v11 = restrictionMessageEntities->m_Items[v10];
          if ( !v11 )
            goto LABEL_31;
          if ( v11->fields.id == n )
            break;
          if ( max_length == ++v10 )
            return *p_dialogMessage;
        }
        p_dialogMessage = &v11->fields.dialogMessage;
      }
      return *p_dialogMessage;
    }
LABEL_31:
    sub_1C7BD40(this, *(_QWORD *)&n);
  }
  questRestrictionEntityList = v6->fields.questRestrictionEntityList;
  v13 = &questRestrictionEntityList->obj.klass + n;
  if ( !restrictionId )
  {
    if ( !questRestrictionEntityList )
      goto LABEL_31;
    goto LABEL_26;
  }
  if ( !questRestrictionEntityList )
    goto LABEL_31;
  v14 = questRestrictionEntityList->max_length;
  if ( v14 <= (unsigned int)n )
    goto LABEL_32;
  v15 = v13[4];
  if ( !v15 )
    goto LABEL_31;
  if ( LODWORD(v15->_1.namespaze) == restrictionId || v14 < 1 )
  {
LABEL_26:
    if ( LODWORD(questRestrictionEntityList->max_length) > n )
    {
      v18 = v13[4];
      if ( v18 )
      {
        p_dialogMessage = (System_String_o **)&v18->_1.byval_arg.bits;
        return *p_dialogMessage;
      }
      goto LABEL_31;
    }
LABEL_32:
    sub_1C7BD48(this);
  }
  v16 = 0;
  while ( 1 )
  {
    v17 = questRestrictionEntityList->m_Items[v16];
    if ( !v17 )
      goto LABEL_31;
    if ( v17->fields.restrictionId == restrictionId )
      break;
    if ( v14 == ++v16 )
      goto LABEL_26;
  }
  p_dialogMessage = &v17->fields.dialogMessage;
  return *p_dialogMessage;
}


QuestRestrictionInfo_DialogMessageInfo_o *QuestRestrictionInfo__GetDialogMessageInfo(
        QuestRestrictionInfo_o *this,
        int32_t messageId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *v7; // x0

  if ( (byte_4CEF9D1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
    byte_4CEF9D1 = 1;
  }
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary
    || !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
          messageId,
          (const MethodInfo_3487904 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
  {
    return 0;
  }
  v7 = this->fields.dialogMessageInfoDictionary;
  if ( !v7 )
    sub_1C7BD40(0, v6);
  return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_int__object__o *)v7,
                                                       messageId,
                                                       (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
}


System_String_o *QuestRestrictionInfo__GetDialogMessageMySvtPos(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_monitor; // x20
  unsigned int v6; // w21
  RestrictionWholeEntity_o *v7; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4CEF9D4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF9D4 = 1;
  }
  entity = 0;
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
        sub_1C7BD48(this);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_19;
      if ( v7->fields.type == 5 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_342E348 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C7BD40(this, method);
  }
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_monitor;
}


System_String_o *QuestRestrictionInfo__GetDialogMessageSupportSvtPos(
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
  if ( (byte_4CEF9D6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF9D6 = 1;
  }
  entity = 0;
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
        sub_1C7BD48(this);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_19;
      if ( v7->fields.type == 6 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_342E348 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C7BD40(this, method);
  }
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_monitor;
}


System_String_o *QuestRestrictionInfo__GetDialogMessageSvtPos(QuestRestrictionInfo_o *this, const MethodInfo *method)
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
  if ( (byte_4CEF9D3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF9D3 = 1;
  }
  entity = 0;
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
        sub_1C7BD48(this);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_20;
      type = v7->fields.type;
      if ( type == 8 || type == 4 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_342E348 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C7BD40(this, method);
  }
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_monitor;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetDialogTargetName(
        QuestRestrictionInfo_o *this,
        int32_t n,
        int32_t restrictionId,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x21
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v8; // x19
  System_String_o **p_bits; // x20
  unsigned int v10; // w21
  __int64 v11; // x22
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x9
  Il2CppClass **v13; // x8
  int max_length; // w10
  Il2CppClass *v15; // x11
  int v16; // w11
  QuestRestrictionEntity_o *v17; // x12
  Il2CppClass *v18; // x8

  v6 = this;
  if ( (byte_4CEF9BC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF9BC = 1;
  }
  if ( v6->fields.restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.restrictionSlotDictionary;
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         n,
                                         (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( this )
      {
        dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
        v8 = this;
        if ( dialogMessageInfoDictionary < 1 )
        {
          p_bits = (System_String_o **)&StringLiteral_1/*""*/;
        }
        else
        {
          p_bits = (System_String_o **)&StringLiteral_1/*""*/;
          v10 = 0;
          while ( 1 )
          {
            if ( v10 >= dialogMessageInfoDictionary )
              goto LABEL_33;
            v11 = *((_QWORD *)&v8->fields.eventId + (int)v10);
            if ( !v11 )
              goto LABEL_32;
            this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v11 + 32), 0);
            if ( ((unsigned __int8)this & 1) == 0 )
              break;
            dialogMessageInfoDictionary = (int)v8->fields.dialogMessageInfoDictionary;
            if ( (int)++v10 >= dialogMessageInfoDictionary )
              return *p_bits;
          }
          p_bits = (System_String_o **)(v11 + 32);
        }
        return *p_bits;
      }
    }
LABEL_32:
    sub_1C7BD40(this, *(_QWORD *)&n);
  }
  questRestrictionEntityList = v6->fields.questRestrictionEntityList;
  v13 = &questRestrictionEntityList->obj.klass + n;
  if ( !restrictionId )
  {
    if ( !questRestrictionEntityList )
      goto LABEL_32;
    goto LABEL_27;
  }
  if ( !questRestrictionEntityList )
    goto LABEL_32;
  max_length = questRestrictionEntityList->max_length;
  if ( max_length <= (unsigned int)n )
    goto LABEL_33;
  v15 = v13[4];
  if ( !v15 )
    goto LABEL_32;
  if ( LODWORD(v15->_1.namespaze) == restrictionId || max_length < 1 )
  {
LABEL_27:
    if ( LODWORD(questRestrictionEntityList->max_length) > n )
    {
      v18 = v13[4];
      if ( v18 )
      {
        p_bits = (System_String_o **)&v18->_1.this_arg.bits;
        return *p_bits;
      }
      goto LABEL_32;
    }
LABEL_33:
    sub_1C7BD48(this);
  }
  v16 = 0;
  while ( 1 )
  {
    v17 = questRestrictionEntityList->m_Items[v16];
    if ( !v17 )
      goto LABEL_32;
    if ( v17->fields.restrictionId == restrictionId )
      break;
    if ( max_length == ++v16 )
      goto LABEL_27;
  }
  p_bits = &v17->fields.title;
  return *p_bits;
}


int32_t QuestRestrictionInfo__GetDialogType(
        QuestRestrictionInfo_o *this,
        int32_t n,
        int32_t restrictionId,
        const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x9
  Il2CppClass **v6; // x8
  int max_length; // w10
  Il2CppClass *v8; // x11
  int v9; // w11
  RestrictionEntity_o *v10; // x12

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  v6 = &restrictionEntityList->obj.klass + n;
  if ( restrictionId )
  {
    if ( !restrictionEntityList )
      goto LABEL_18;
    max_length = restrictionEntityList->max_length;
    if ( max_length <= (unsigned int)n )
LABEL_19:
      sub_1C7BD48(this);
    v8 = v6[4];
    if ( !v8 )
      goto LABEL_18;
    if ( LODWORD(v8->_1.name) != restrictionId && max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = restrictionEntityList->m_Items[v9];
        if ( !v10 )
          break;
        if ( v10->fields.id == restrictionId )
          return v10->fields.type;
        if ( max_length == ++v9 )
          goto LABEL_15;
      }
LABEL_18:
      sub_1C7BD40(this, n);
    }
  }
  else if ( !restrictionEntityList )
  {
    goto LABEL_18;
  }
LABEL_15:
  if ( LODWORD(restrictionEntityList->max_length) <= n )
    goto LABEL_19;
  v10 = (RestrictionEntity_o *)v6[4];
  if ( !v10 )
    goto LABEL_18;
  return v10->fields.type;
}


bool QuestRestrictionInfo__GetExplanationMessage(
        QuestRestrictionInfo_o *this,
        System_String_o **message,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  QuestRestrictionInfo_o *v9; // x20
  struct RestrictionBaseEntity_o *v11; // x8
  System_String_o *noticeMessage; // x1
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  int max_length; // w21
  unsigned int v15; // w22
  QuestRestrictionEntity_o *v16; // x23

  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  v9 = this;
  if ( !restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
LABEL_13:
      sub_1C7BD40(this, message);
    max_length = questRestrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= LODWORD(questRestrictionEntityList->max_length) )
          sub_1C7BD48(this);
        v16 = questRestrictionEntityList->m_Items[v15];
        if ( !v16 )
          goto LABEL_13;
        this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v16->fields.noticeMessage, 0);
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
    *message = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)message, 0, (int32_t)method, v3, v4, v5, v6, v7);
    return 0;
  }
  this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(restrictionBaseEntity->fields.subMessage, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_14;
  v11 = v9->fields.restrictionBaseEntity;
  if ( !v11 )
    goto LABEL_13;
  noticeMessage = v11->fields.subMessage;
LABEL_16:
  *message = noticeMessage;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)message, (int32_t)noticeMessage, (int32_t)method, v3, v4, v5, v6, v7);
  return 1;
}


System_String_o *QuestRestrictionInfo__GetFixNpcMessage(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF9C6 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10331/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/);
    byte_4CEF9C6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10331/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0);
}


System_String_o *QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF9C5 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10332/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/);
    byte_4CEF9C5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10332/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, 0);
}


int32_t QuestRestrictionInfo__GetFixedMyServantPositionCount(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEF9DC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4CEF9DC = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_1C7BD40(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&off_18) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C7BD40(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i;
}


System_Int32_array *QuestRestrictionInfo__GetFixedMyServantPositionSvtIdList(
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

  if ( (byte_4CEF9D9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CEF9D9 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_1C7BD40(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v10.fields._current,
      (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_1C7BD40(fixedMyServantIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__GetFixedMyServantSingleRestriction(
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
  if ( (byte_4CEF9B7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF9B7 = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !fixedMyServantSingleIndividualities->max_length )
      return 0;
    this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       svtId,
                                       dispLimitCount,
                                       0);
        this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( this )
          {
            this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               svtId,
                                               (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v13 = (ServantEntity_o *)this;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
                      Individuality = ServantEntity__getIndividuality(v13, limitCount, ServantImageLimitSealAfter, 0);
                      this = (QuestRestrictionInfo_o *)RestrictionSlotDetailEntity__IsIndividuality(
                                                         v17,
                                                         Individuality,
                                                         0);
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
    sub_1C7BD40(this, *(_QWORD *)&svtId);
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
    sub_1C7BD48(this);
  return targetVals->m_Items[num] != svtId;
}


System_String_o *QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF9B8 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10330/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/);
    byte_4CEF9B8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10330/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, 0);
}


System_Int32_array *QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  struct RestrictionEntity_o *fixedMyServantSingleRestrictionEntity; // x8

  if ( !this->fields.isFixedMyServantSingle )
    return 0;
  if ( this->fields.restrictionBaseEntity )
    return this->fields.fixedMyServantSingleIndividualities;
  fixedMyServantSingleRestrictionEntity = this->fields.fixedMyServantSingleRestrictionEntity;
  if ( fixedMyServantSingleRestrictionEntity )
    return fixedMyServantSingleRestrictionEntity->fields.targetVals;
  else
    return 0;
}


int32_t QuestRestrictionInfo__GetFixedPositionCount(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *fixedIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEF9DD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4CEF9DD = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_1C7BD40(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&off_18) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C7BD40(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i;
}


System_Int32_array *QuestRestrictionInfo__GetFixedPositionSvtIdList(
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

  if ( (byte_4CEF9DB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CEF9DB = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_1C7BD40(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v10.fields._current,
      (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_1C7BD40(fixedIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t QuestRestrictionInfo__GetFixedServantPositionCount(QuestRestrictionInfo_o *this, const MethodInfo *method)
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

  if ( (byte_4CEF9B4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4CEF9B4 = 1;
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
      && (fixedServantPositionRestrictionEntity = this->fields.fixedServantPositionRestrictionEntity) != 0
      && (targetVals = fixedServantPositionRestrictionEntity->fields.targetVals) != 0 )
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
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v4 = 0;
    for ( i = v14; ; v4 += LODWORD(i.fields._current[1].monitor) )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v5 )
        break;
      if ( !i.fields._current )
        sub_1C7BD40(v5, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
    sub_1C7BD40(fixedMyServantIndividualitiesList, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v14; ; v10 += LODWORD(i.fields._current[1].monitor) )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v11 )
      break;
    if ( !i.fields._current )
      sub_1C7BD40(v11, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v10;
}


System_String_o *QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF9B6 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10329/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/);
    byte_4CEF9B6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10329/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, 0);
}


System_Int32_array *QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
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

  if ( (byte_4CEF9B3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CEF9B3 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( this->fields.restrictionBaseEntity )
  {
    v3 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v3,
      (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( this->fields.isFixedMyServantPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &i,
               (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v6 )
          break;
        if ( !v3 )
          sub_1C7BD40(v6, v7);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isNeedStarting )
    {
      fixedMyServantIndividualitiesList = this->fields.needStartingIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &i,
               (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v8 )
          break;
        if ( !v3 )
          sub_1C7BD40(v8, v9);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isFixedPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v10 )
          break;
        if ( !v3 )
          sub_1C7BD40(v10, v11);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( v3 )
    {
      if ( v3->fields._size > 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v3,
                 (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
      return 0;
    }
LABEL_38:
    sub_1C7BD40(fixedMyServantIndividualitiesList, v5);
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
  return 0;
}


System_String_o *QuestRestrictionInfo__GetFixedSupportPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF9B2 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10334/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/);
    byte_4CEF9B2 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10334/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, 0);
}


RestrictionEntity_o *QuestRestrictionInfo__GetGrandServantRestrictionEntity(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_RestrictionEntity__o *grandServantRestrictionEntityList; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4CEF9DF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
    sub_1C7BAE8(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__DisplayClass213_0__GetGrandServantRestrictionEntity_b__0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c__DisplayClass213_0_TypeInfo);
    byte_4CEF9DF = 1;
  }
  v5 = sub_1C7BD34(QuestRestrictionInfo___c__DisplayClass213_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_DWORD *)(v5 + 16) = initPos;
  grandServantRestrictionEntityList = this->fields.grandServantRestrictionEntityList;
  v9 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass213_0__GetGrandServantRestrictionEntity_b__0__,
    0);
  return (RestrictionEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__52006308(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)grandServantRestrictionEntityList,
                                  (System_Func_TSource__bool__o *)v9,
                                  (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
}


RestrictionEntity_array *QuestRestrictionInfo__GetList(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.restrictionEntityList;
}


System_String_array *QuestRestrictionInfo__GetMessages(
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
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x22
  int max_length; // w8
  unsigned int v58; // w23
  RestrictionWholeEntity_o *v59; // x29
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  int v70; // w8
  void *v71; // x21
  unsigned int v72; // w22
  __int64 v73; // x26
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  System_String_o *v80; // x0
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0

  if ( (byte_4CEF99D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10300/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C7BAE8(&StringLiteral_11147/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/);
    sub_1C7BAE8(&StringLiteral_11148/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1C7BAE8(&StringLiteral_11144/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_1C7BAE8(&StringLiteral_6462/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_4CEF99D = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_98;
  if ( !isSlotOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6462/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11148/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
    v25 = (System_String_o *)IsNullOrEmpty;
    if ( !this->fields.isUniqueServant )
      goto LABEL_20;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11147/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0);
    summary = (System_String_o *)IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( uniqueServant )
        goto LABEL_12;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v24, (Il2CppObject *)IsNullOrEmpty, 0);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( uniqueServant )
      {
LABEL_12:
        IsNullOrEmpty = System_String__Concat_64176912(summary, v25, 0);
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
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)summary,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      v21->fields._size = size + 1;
      v35[4] = (Il2CppClass *)summary;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)summary, v26, v27, v28, v29, v30, v31);
    }
LABEL_20:
    if ( !this->fields.isFatigure )
      goto LABEL_33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11144/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0);
    summary = (System_String_o *)IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( fatigue )
        goto LABEL_25;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v24, (Il2CppObject *)IsNullOrEmpty, 0);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( fatigue )
      {
LABEL_25:
        IsNullOrEmpty = System_String__Concat_64176912(summary, v25, 0);
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
    if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)summary,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v42->obj.klass + v44;
      v21->fields._size = v44 + 1;
      v45[4] = (Il2CppClass *)summary;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v45 + 4), (int32_t)summary, v36, v37, v38, v39, v40, v41);
    }
LABEL_33:
    if ( !this->fields.isNotSingleSupportOnly )
      goto LABEL_46;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10300/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
    summary = (System_String_o *)IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( singleSupport )
        goto LABEL_38;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v24, (Il2CppObject *)IsNullOrEmpty, 0);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( singleSupport )
      {
LABEL_38:
        IsNullOrEmpty = System_String__Concat_64176912(summary, v25, 0);
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
    if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)summary,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &v52->obj.klass + v54;
      v21->fields._size = v54 + 1;
      v55[4] = (Il2CppClass *)summary;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v55 + 4), (int32_t)summary, v46, v47, v48, v49, v50, v51);
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
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(v59->fields.summary, 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            summary = v59->fields.summary;
          }
          else
          {
            IsNullOrEmpty = System_String__Format(v24, (Il2CppObject *)v59->fields.summary, 0);
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
                IsNullOrEmpty = System_String__Concat_64176912(summary, v25, 0);
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
          if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              (Il2CppObject *)summary,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &v66->obj.klass + v68;
            v21->fields._size = v68 + 1;
            v69[4] = (Il2CppClass *)summary;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v69 + 4), (int32_t)summary, v60, v61, v62, v63, v64, v65);
          }
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v58 >= max_length )
          goto LABEL_79;
      }
LABEL_101:
      sub_1C7BD48(IsNullOrEmpty);
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
                            (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0 )
    {
LABEL_100:
      sub_1C7BD40(IsNullOrEmpty, summary);
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
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(*(System_String_o **)(v73 + 24), 0);
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
            v80 = LocalizationManager__Get((System_String_o *)StringLiteral_6462/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
            IsNullOrEmpty = System_String__Format(v80, *(Il2CppObject **)(v73 + 24), 0);
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
          if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              (Il2CppObject *)summary,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
          }
          else
          {
            v84 = &v81->obj.klass + v83;
            v21->fields._size = v83 + 1;
            v84[4] = (Il2CppClass *)summary;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v84 + 4), (int32_t)summary, v74, v75, v76, v77, v78, v79);
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
                                  (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *QuestRestrictionInfo__GetMessages_43951556(
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
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  int max_length; // w8
  unsigned int v44; // w19
  RestrictionEntity_o *v45; // x27
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0

  if ( (byte_4CEF99E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10300/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C7BAE8(&StringLiteral_11148/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1C7BAE8(&StringLiteral_11144/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_1C7BAE8(&StringLiteral_6462/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_4CEF99E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6462/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11148/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isSlotOnly || !this->fields.isFatigure )
    goto LABEL_19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11144/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0);
  name = IsNullOrEmpty;
  if ( isNoneTitle )
  {
    if ( !fatigue )
      goto LABEL_11;
  }
  else
  {
    IsNullOrEmpty = System_String__Format(v18, (Il2CppObject *)IsNullOrEmpty, 0);
    name = IsNullOrEmpty;
    if ( !fatigue )
    {
LABEL_11:
      if ( !v20 )
        goto LABEL_64;
      goto LABEL_15;
    }
  }
  IsNullOrEmpty = System_String__Concat_64176912(name, v19, 0);
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
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)name,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v32[4] = (Il2CppClass *)name;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)name, v23, v24, v25, v26, v27, v28);
  }
LABEL_19:
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10300/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
    name = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = System_String__Format(v18, (Il2CppObject *)IsNullOrEmpty, 0);
      name = IsNullOrEmpty;
    }
    if ( singleSupport )
    {
      IsNullOrEmpty = System_String__Concat_64176912(name, v19, 0);
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
    if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)name,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &v39->obj.klass + v41;
      v20->fields._size = v41 + 1;
      v42[4] = (Il2CppClass *)name;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v42 + 4), (int32_t)name, v33, v34, v35, v36, v37, v38);
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
        sub_1C7BD48(IsNullOrEmpty);
      v45 = entities->m_Items[v44];
      if ( !v45 )
        break;
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v45->fields.name, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( isNoneTitle )
        {
          name = v45->fields.name;
        }
        else
        {
          IsNullOrEmpty = RestrictionEntity__getTitle(v45, 0);
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
              IsNullOrEmpty = System_String__Concat_64176912(name, v19, 0);
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
        if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)name,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &v52->obj.klass + v54;
          v20->fields._size = v54 + 1;
          v55[4] = (Il2CppClass *)name;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v55 + 4), (int32_t)name, v46, v47, v48, v49, v50, v51);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_62;
    }
LABEL_64:
    sub_1C7BD40(IsNullOrEmpty, name);
  }
LABEL_62:
  if ( !v20 )
    goto LABEL_64;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v20,
                                  (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *QuestRestrictionInfo__GetMyGrandServantRestrictionDialogMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  void *grandServantRestrictionEntityList; // x0
  int32_t v5; // w20
  int v6; // w22
  int32_t v7; // w21
  const MethodInfo *v8; // x3

  if ( (byte_4CEF9E5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
    sub_1C7BAE8(&string_TypeInfo);
    byte_4CEF9E5 = 1;
  }
  if ( this->fields.restrictionBaseEntity )
    return string_TypeInfo->static_fields->Empty;
  grandServantRestrictionEntityList = this->fields.grandServantRestrictionEntityList;
  if ( !grandServantRestrictionEntityList )
    goto LABEL_16;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  while ( v7 < *((_DWORD *)grandServantRestrictionEntityList + 6) )
  {
    grandServantRestrictionEntityList = System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)grandServantRestrictionEntityList,
                                          v7,
                                          (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
    if ( grandServantRestrictionEntityList )
    {
      if ( !v6 && *((_DWORD *)grandServantRestrictionEntityList + 8) == 21 )
      {
        v6 = *((_DWORD *)grandServantRestrictionEntityList + 15);
        v5 = v7;
      }
      grandServantRestrictionEntityList = this->fields.grandServantRestrictionEntityList;
      ++v7;
      if ( grandServantRestrictionEntityList )
        continue;
    }
    goto LABEL_16;
  }
  grandServantRestrictionEntityList = System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)grandServantRestrictionEntityList,
                                        v5,
                                        (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
  if ( !grandServantRestrictionEntityList )
LABEL_16:
    sub_1C7BD40(grandServantRestrictionEntityList, method);
  return QuestRestrictionInfo__GetDialogMessage(this, v5, *((_DWORD *)grandServantRestrictionEntityList + 4), v8);
}


int32_t QuestRestrictionInfo__GetMyServantNumRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.myServantNumMax;
}


System_String_o *QuestRestrictionInfo__GetMyServantNumRestrictionDialogMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  QuestRestrictionInfo_o *v3; // x19
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int v5; // w8
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
  il2cpp_array_size_t max_length; // x9
  unsigned int v18; // w10
  int32_t priority; // w11
  RestrictionEntity_o *v20; // x12
  Il2CppObject *v22; // x8
  RestrictionEntity_o *v23; // x8
  Il2CppObject *v24; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_4CEF9C4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF9C4 = 1;
  }
  entity = 0;
  v24 = 0;
  if ( !v3->fields.restrictionBaseEntity )
  {
    restrictionEntityList = v3->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_58;
    max_length = restrictionEntityList->max_length;
    if ( (int)max_length < 1 )
    {
      method = 0;
LABEL_53:
      if ( (unsigned int)method < (unsigned int)max_length )
      {
        v23 = restrictionEntityList->m_Items[(int)method];
        if ( !v23 )
          goto LABEL_58;
        return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v23->fields.id, v2);
      }
    }
    else
    {
      v18 = 0;
      priority = 0;
      method = 0;
      while ( v18 < (unsigned int)max_length )
      {
        v20 = restrictionEntityList->m_Items[v18];
        if ( !v20 )
          goto LABEL_58;
        if ( !priority && v20->fields.type == 10 )
        {
          priority = v20->fields.priority;
          method = (const MethodInfo *)v18;
        }
        if ( (int)++v18 >= (int)max_length )
          goto LABEL_53;
      }
    }
LABEL_59:
    sub_1C7BD48(this);
  }
  restrictionWholeEntities = v3->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_58;
  v5 = restrictionWholeEntities->max_length;
  if ( v5 >= 1 )
  {
    v6 = 0;
    while ( v6 < v5 )
    {
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_58;
      if ( v7->fields.type == 3 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_58;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_342E348 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v22 = entity;
          if ( !entity )
            goto LABEL_58;
          return (System_String_o *)v22[1].monitor;
        }
      }
      v5 = restrictionWholeEntities->max_length;
      if ( (int)++v6 >= v5 )
        goto LABEL_15;
    }
    goto LABEL_59;
  }
LABEL_15:
  slotInfos = v3->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_58;
  v9 = 0;
  while ( 1 )
  {
    v10 = slotInfos->max_length;
    if ( v9 >= v10 )
      return (System_String_o *)StringLiteral_1/*""*/;
    if ( v9 >= (unsigned int)v10 )
      goto LABEL_59;
    v11 = slotInfos->m_Items[v9];
    if ( !v11 )
      goto LABEL_58;
    if ( v11->fields.slotType )
    {
      ++v9;
      goto LABEL_37;
    }
    this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
    if ( !this )
      goto LABEL_58;
    this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                       (System_Collections_Generic_Dictionary_int__object__o *)this,
                                       ++v9,
                                       (const MethodInfo_3487904 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
      if ( !this )
        goto LABEL_58;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         v9,
                                         (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( !this )
        goto LABEL_58;
      dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
      v13 = this;
      if ( dialogMessageInfoDictionary >= 1 )
        break;
    }
LABEL_37:
    slotInfos = v3->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_58;
  }
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= dialogMessageInfoDictionary )
      goto LABEL_59;
    v15 = *((_QWORD *)&v13->fields.eventId + (int)v14);
    if ( !v15 )
      goto LABEL_58;
    if ( *(_DWORD *)(v15 + 44) && !*(_DWORD *)(v15 + 40) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
      if ( !this )
        goto LABEL_58;
      this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         &v24,
                                         *(_DWORD *)(v15 + 44),
                                         (const MethodInfo_342E348 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
    }
    dialogMessageInfoDictionary = (int)v13->fields.dialogMessageInfoDictionary;
    if ( (int)++v14 >= dialogMessageInfoDictionary )
      goto LABEL_37;
  }
  v22 = v24;
  if ( !v24 )
LABEL_58:
    sub_1C7BD40(this, method);
  return (System_String_o *)v22[1].monitor;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetMyServantOrNpcRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        bool haveIndividualityServant,
        const MethodInfo *method)
{
  System_String_o *SlotMessage; // x19
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  Il2CppObject *RestrictedName; // x19
  __int64 *v11; // x8
  System_String_o *v12; // x0

  if ( (byte_4CEF9CD & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10336/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/);
    sub_1C7BAE8(&StringLiteral_10339/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/);
    byte_4CEF9CD = 1;
  }
  SlotMessage = QuestRestrictionInfo__GetSlotMessage(this, pos, (const MethodInfo *)haveIndividualityServant);
  if ( !System_String__IsNullOrEmpty(SlotMessage, 0) )
    return SlotMessage;
  RestrictedName = (Il2CppObject *)QuestRestrictionInfo__GetRestrictedName(this, pos, v8);
  if ( haveIndividualityServant || QuestRestrictionInfo__GetGrandServantRestrictionEntity(this, pos, v9) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_10336/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_10339/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/;
  }
  v12 = LocalizationManager__Get((System_String_o *)*v11, 0);
  return System_String__Format(v12, RestrictedName, 0);
}


System_Int32_array *QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  void *restrictionSlotDetailDictionary; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_int__o *v14; // x20
  int v15; // w8
  void *v16; // x19
  unsigned int v17; // w21
  __int64 v18; // x8
  System_Int32_array *CollectionList; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x1
  const MethodInfo_31999AC *v22; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v25; // x20
  Il2CppObject *v26; // x0
  Il2CppObject *v27; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4CEF9CF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__DisplayClass192_0__GetMyServantOrNpcSvtIdList_b__0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c__DisplayClass192_0_TypeInfo);
    byte_4CEF9CF = 1;
  }
  v5 = sub_1C7BD34(QuestRestrictionInfo___c__DisplayClass192_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
  {
    v14 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v5 + 24),
                                        (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
          sub_1C7BD48(restrictionSlotDetailDictionary);
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
            (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v15 = *((_DWORD *)v16 + 6);
        if ( (int)++v17 >= v15 )
          goto LABEL_15;
      }
LABEL_29:
      sub_1C7BD40(restrictionSlotDetailDictionary, v7);
    }
LABEL_15:
    if ( !v14 )
      goto LABEL_29;
    if ( v14->fields._size >= 1 )
    {
      restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                          (DataManager_o *)restrictionSlotDetailDictionary,
                                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList((ServantMaster_o *)restrictionSlotDetailDictionary, 0);
      monitor = System_Linq_Enumerable__Distinct_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                  (const MethodInfo_3192930 *)Method_System_Linq_Enumerable_Distinct_int___);
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v22 = (const MethodInfo_31999AC *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v28 = System_Linq_Enumerable__Intersect_int_(monitor, v21, v22);
      return System_Linq_Enumerable__ToArray_int_(
               v28,
               (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
  }
  else
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
      goto LABEL_29;
    if ( SLODWORD(questRestrictionEntityList->max_length) > index )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
      v25 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v25,
        (Il2CppObject *)v5,
        Method_QuestRestrictionInfo___c__DisplayClass192_0__GetMyServantOrNpcSvtIdList_b__0__,
        0);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      v26 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v25,
              (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v26 )
      {
        v27 = v26;
        restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                            (DataManager_o *)restrictionSlotDetailDictionary,
                                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        v21 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                     (ServantMaster_o *)restrictionSlotDetailDictionary,
                                                                     0);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v27[2].monitor;
        v22 = (const MethodInfo_31999AC *)Method_System_Linq_Enumerable_Intersect_int___;
        goto LABEL_27;
      }
    }
  }
  return 0;
}


System_Int32_array *QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
        QuestRestrictionInfo_o *this,
        System_Collections_Generic_Dictionary_int__FollowerInfo__o **npcInfoDictionary,
        int32_t index,
        bool indexIsPos,
        const MethodInfo *method)
{
  __int64 v9; // x22
  void *Instance; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_int__object__o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
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
  const MethodInfo *v47; // x7
  const MethodInfo *v48; // x3
  __int64 v49; // x27
  __int64 v50; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v54; // x27
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v55; // x27
  __int64 v56; // x26
  __int64 v57; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Collections_Generic_IEnumerable_TSource__o *first; // [xsp+0h] [xbp-70h]
  bool isWhole; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4CEF9D8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_int___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Union_int___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__DisplayClass206_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c__DisplayClass206_0_TypeInfo);
    byte_4CEF9D8 = 1;
  }
  isWhole = 0;
  v9 = sub_1C7BD34(QuestRestrictionInfo___c__DisplayClass206_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_57;
  *(_DWORD *)(v9 + 16) = index;
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v12;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)npcInfoDictionary, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v21 = Method_System_Array_Empty_int___;
  v22 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v22 )
  {
    sub_1C51BD8(Method_System_Array_Empty_int___);
    v22 = v21[7];
  }
  v23 = *(_QWORD *)(v22 + 16);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C51B7C(inited);
  if ( !*(_DWORD *)(v23 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v23);
  v24 = *(_QWORD *)(v21[7] + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C51B7C(inited);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v24 + 184);
    v27 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v27,
      (Il2CppObject *)v9,
      Method_QuestRestrictionInfo___c__DisplayClass206_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      0);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_57;
    v28 = System_Collections_Generic_List_object___Find(
            myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v27,
            (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v28 )
    {
      v29 = v28;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_57;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_57;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)Instance,
                                                                              0);
      v31 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v29[2].monitor,
              CollectionList,
              (const MethodInfo_31999AC *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v31,
                                  (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    MyServantOrSupportTargetPos = *(_DWORD *)(v9 + 16);
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(this, *(_DWORD *)(v9 + 16), v19);
    if ( !MyServantOrNpcSvtIdList )
    {
      v35 = Method_System_Array_Empty_int___;
      v36 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v36 )
      {
        sub_1C51BD8(Method_System_Array_Empty_int___);
        v36 = v35[7];
      }
      v37 = *(_QWORD *)(v36 + 16);
      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
        v37 = sub_1C51B7C(v34);
      if ( !*(_DWORD *)(v37 + 224) )
        v34 = j_il2cpp_runtime_class_init_0(v37);
      v38 = *(_QWORD *)(v35[7] + 16LL);
      if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
        v38 = sub_1C51B7C(v34);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v38 + 184);
    }
    MyServantOrSupportTargetPos = *(_DWORD *)(v9 + 16);
    if ( !this->fields.restrictionBaseEntity )
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
                                      this,
                                      MyServantOrSupportTargetPos,
                                      v33);
  }
  v39 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !Instance )
    goto LABEL_57;
  Instance = NpcFollowerMaster__GetQuestFollowerList(
               (NpcFollowerMaster_o *)Instance,
               this->fields.questId,
               this->fields.questPhase,
               0);
  if ( !Instance )
    goto LABEL_57;
  v40 = *((_DWORD *)Instance + 6);
  v41 = Instance;
  if ( v40 >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      if ( v42 >= v40 )
        sub_1C7BD48(Instance);
      v43 = (FollowerInfo_o *)*((_QWORD *)v41 + (int)v42 + 4);
      Instance = (void *)FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0);
      if ( !v43 )
        break;
      Instance = FollowerInfo__getServantLeaderInfo(v43, 0, (int32_t)Instance, 0);
      if ( Instance )
      {
        v44 = (ServantLeaderInfo_o *)Instance;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0);
        NpcServantIndividualityFull = FollowerInfo__GetNpcServantIndividualityFull(v43, 0, ReturnTypeByQuestId, 0);
        Instance = ServantLeaderInfo__GetOverwriteStatus(v44, 0);
        if ( !Instance )
          break;
        Instance = (void *)QuestRestrictionInfo__IsRestriction_43956196(
                             this,
                             &isWhole,
                             NpcServantIndividualityFull,
                             *((_DWORD *)Instance + 6),
                             v44->fields.lv,
                             MyServantOrSupportTargetPos,
                             3,
                             v47);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_43978376(
                               this,
                               NpcServantIndividualityFull,
                               MyServantOrSupportTargetPos,
                               v48);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v50 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
            v49 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v62.fields.currentCryptoKey = v50;
            *(_QWORD *)&v62.fields.fakeValue = v49;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v62, 0);
            if ( !v39 )
              break;
            items = v39->fields._items;
            v52 = Method_System_Collections_Generic_List_int__Add__;
            ++v39->fields._version;
            if ( !items )
              break;
            size = v39->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v39,
                (int32_t)Instance,
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            }
            else
            {
              v39->fields._size = size + 1;
              items->m_Items[size] = (int)Instance;
            }
            v54 = *npcInfoDictionary;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v44->fields.svtId, 0);
            if ( !v54 )
              break;
            Instance = (void *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                 (System_Collections_Generic_Dictionary_int__object__o *)v54,
                                 (int32_t)Instance,
                                 (const MethodInfo_3487904 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              v55 = *npcInfoDictionary;
              v57 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
              v56 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v63.fields.currentCryptoKey = v57;
              *(_QWORD *)&v63.fields.fakeValue = v56;
              Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v63, 0);
              if ( !v55 )
                break;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)v55,
                (int32_t)Instance,
                (Il2CppObject *)v43,
                (const MethodInfo_3487710 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
            }
          }
        }
      }
      v40 = *((_DWORD *)v41 + 6);
      if ( (int)++v42 >= v40 )
        goto LABEL_56;
    }
LABEL_57:
    sub_1C7BD40(Instance, v11);
  }
LABEL_56:
  v58 = System_Linq_Enumerable__Union_int_(
          first,
          (System_Collections_Generic_IEnumerable_TSource__o *)v39,
          (const MethodInfo_31B43B8 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v58,
           (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetMyServantOrSupportRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        bool haveIndividualityServant,
        const MethodInfo *method)
{
  System_String_o *SlotMessage; // x22
  const MethodInfo *v8; // x2
  __int64 *v9; // x8
  const MethodInfo *v11; // x2
  System_String_o *RestrictedName; // x19
  bool IsNullOrEmpty; // w20
  System_String_o *v14; // x0
  int *MyServantOrNpcSvtIdList; // x0
  int v16; // w8
  int *v17; // x19
  __int64 v18; // x20
  int v19; // w23

  if ( (byte_4CEF9CE & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10336/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/);
    sub_1C7BAE8(&StringLiteral_10341/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/);
    sub_1C7BAE8(&StringLiteral_10340/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/);
    sub_1C7BAE8(&StringLiteral_10338/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/);
    sub_1C7BAE8(&StringLiteral_10337/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/);
    byte_4CEF9CE = 1;
  }
  SlotMessage = QuestRestrictionInfo__GetSlotMessage(this, pos, (const MethodInfo *)haveIndividualityServant);
  if ( !System_String__IsNullOrEmpty(SlotMessage, 0) )
    return SlotMessage;
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_10338/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0);
  }
  if ( QuestRestrictionInfo__GetGrandServantRestrictionEntity(this, pos, v8) )
  {
    RestrictedName = QuestRestrictionInfo__GetRestrictedName(this, pos, v11);
    IsNullOrEmpty = System_String__IsNullOrEmpty(RestrictedName, 0);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( !IsNullOrEmpty )
        goto LABEL_19;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !IsNullOrEmpty )
      {
LABEL_19:
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10336/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/, 0);
        return System_String__Format(v14, (Il2CppObject *)RestrictedName, 0);
      }
    }
  }
  else
  {
    if ( !haveIndividualityServant )
    {
      MyServantOrNpcSvtIdList = (int *)QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(this, pos, v11);
      if ( MyServantOrNpcSvtIdList && (v16 = MyServantOrNpcSvtIdList[6], v17 = MyServantOrNpcSvtIdList, v16 >= 1) )
      {
        v18 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v18 >= v16 )
            sub_1C7BD48(MyServantOrNpcSvtIdList);
          MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
          v19 = v17[v18 + 8];
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
          }
          if ( v19 < *(_DWORD *)(*((_QWORD *)MyServantOrNpcSvtIdList + 23) + 932LL) )
            break;
          v16 = v17[6];
          if ( (int)++v18 >= v16 )
            goto LABEL_28;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = &StringLiteral_10340/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/;
      }
      else
      {
LABEL_28:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = &StringLiteral_10341/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v9, 0);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = &StringLiteral_10337/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/;
  return LocalizationManager__Get((System_String_o *)*v9, 0);
}


int32_t QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
        QuestRestrictionInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v16; // x20
  Il2CppClass *klass; // x8

  if ( (byte_4CEF9D0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C7BAE8(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__DisplayClass193_0__GetMyServantOrSupportTargetPos_b__0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c__DisplayClass193_0_TypeInfo);
    byte_4CEF9D0 = 1;
  }
  v5 = sub_1C7BD34(QuestRestrictionInfo___c__DisplayClass193_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
    goto LABEL_12;
  questRestrictionEntityList = this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_14;
  if ( SLODWORD(questRestrictionEntityList->max_length) <= index )
  {
LABEL_12:
    LODWORD(v6) = 0;
    return (int)v6;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v16 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass193_0__GetMyServantOrSupportTargetPos_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  v6 = System_Collections_Generic_List_object___Find(
         myServantOrNpcRestrictionEntityList,
         (System_Predicate_T__o *)v16,
         (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v6 )
    return (int)v6;
  klass = v6[3].klass;
  if ( !klass )
LABEL_14:
    sub_1C7BD40(v6, v7);
  if ( !LODWORD(klass->_1.namespaze) )
    sub_1C7BD48(v6);
  LODWORD(v6) = klass->_1.byval_arg.data;
  return (int)v6;
}


System_Collections_Generic_List_int____o *QuestRestrictionInfo__GetNeedIndividualityList(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v4; // x8

  if ( !this->fields.restrictionBaseEntity )
    return 0;
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_7;
  if ( (unsigned int)(pos - 1) >= LODWORD(slotInfos->max_length) )
    sub_1C7BD48(this);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C7BD40(this, pos);
  return v4->fields.individualityList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetNeedIndividualityMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *DialogMessage; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v11; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4CEF9D2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF9D2 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.restrictionBaseEntity )
  {
    dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
    if ( !dialogMessageInfoDictionary )
      sub_1C7BD40(0, *(_QWORD *)&pos);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v11,
      (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
      (const MethodInfo_3487B48 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
             &v11,
             (const MethodInfo_35E1B90 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
      if ( !v6 )
        break;
      if ( !v11.fields._current.fields.value )
        sub_1C7BD40(v6, v7);
      if ( LODWORD(v11.fields._current.fields.value[1].klass) == pos )
      {
        DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v11.fields._current.fields.key, 0, v8);
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
          &v11,
          (const MethodInfo_35E1CB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
        return DialogMessage;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v11,
      (const MethodInfo_35E1CB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *QuestRestrictionInfo__GetNeedStartingSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_int____o *needStartingIndividualitiesList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEF9DA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CEF9DA = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v6 )
      break;
    if ( !v3 )
      sub_1C7BD40(v6, v7);
    System_Collections_Generic_List_int___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)v9.fields._current,
      (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v3 )
LABEL_15:
    sub_1C7BD40(needStartingIndividualitiesList, v4);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void QuestRestrictionInfo__GetOrganizationSelectionDialogMessage(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        System_String_o **title,
        System_String_o **message,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  struct System_String_StaticFields *v13; // x8
  System_String_o *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 SpecifiedPosition; // x0
  __int64 v22; // x1
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x28
  unsigned __int64 v24; // x29
  __int64 v25; // x24
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  QuestRestrictionEntity_o *v32; // x1
  __int64 v33; // x23
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x25
  System_Predicate_object__o *v35; // x26
  Il2CppObject *v36; // x0
  Il2CppObject *Value_object; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  GrandQuestFolderBoardItem_o *v51; // [xsp+8h] [xbp-78h]

  if ( (byte_4CEF9E7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_GetValue_string___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C7BAE8(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__DisplayClass225_0__GetOrganizationSelectionDialogMessage_b__0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c__DisplayClass225_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22701/*"organizationSelectionDialogTitle"*/);
    sub_1C7BAE8(&StringLiteral_22700/*"organizationSelectionDialogMessage"*/);
    byte_4CEF9E7 = 1;
  }
  v51 = (GrandQuestFolderBoardItem_o *)title;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *title = static_fields->Empty;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)title,
    (int32_t)Empty,
    (int32_t)title,
    (int32_t)message,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v13 = string_TypeInfo->static_fields;
  v14 = v13->Empty;
  *message = v13->Empty;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)message, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  questRestrictionEntityList = this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_16;
  if ( SLODWORD(questRestrictionEntityList->max_length) >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      v25 = sub_1C7BD34(QuestRestrictionInfo___c__DisplayClass225_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v25, 0);
      if ( v24 >= LODWORD(questRestrictionEntityList->max_length) )
        sub_1C7BD48(SpecifiedPosition);
      if ( !v25 )
        goto LABEL_16;
      v32 = questRestrictionEntityList->m_Items[v24];
      *(_QWORD *)(v25 + 16) = v32;
      v33 = v25 + 16;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 16), (int32_t)v32, v26, v27, v28, v29, v30, v31);
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
      v35 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v35,
        (Il2CppObject *)v25,
        Method_QuestRestrictionInfo___c__DisplayClass225_0__GetOrganizationSelectionDialogMessage_b__0__,
        0);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_16;
      v36 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v35,
              (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v36 )
      {
        SpecifiedPosition = RestrictionEntity__GetSpecifiedPosition((RestrictionEntity_o *)v36, 0);
        if ( (_DWORD)SpecifiedPosition == initPos )
          break;
      }
      if ( (__int64)++v24 >= SLODWORD(questRestrictionEntityList->max_length) )
        return;
    }
    if ( *(_QWORD *)v33 )
    {
      Value_object = BasicHelper__GetValue_object_(
                       *(System_Collections_Generic_Dictionary_string__object__o **)(*(_QWORD *)v33 + 64LL),
                       (System_String_o *)StringLiteral_22701/*"organizationSelectionDialogTitle"*/,
                       (Il2CppObject *)string_TypeInfo->static_fields->Empty,
                       (const MethodInfo_315DCFC *)Method_BasicHelper_GetValue_string___);
      v51->klass = (GrandQuestFolderBoardItem_c *)Value_object;
      sub_1C7BA8C(v51, (int32_t)Value_object, v38, v39, v40, v41, v42, v43);
      if ( *(_QWORD *)v33 )
      {
        v44 = BasicHelper__GetValue_object_(
                *(System_Collections_Generic_Dictionary_string__object__o **)(*(_QWORD *)v33 + 64LL),
                (System_String_o *)StringLiteral_22700/*"organizationSelectionDialogMessage"*/,
                (Il2CppObject *)string_TypeInfo->static_fields->Empty,
                (const MethodInfo_315DCFC *)Method_BasicHelper_GetValue_string___);
        *message = (System_String_o *)v44;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)message, (int32_t)v44, v45, v46, v47, v48, v49, v50);
        return;
      }
    }
LABEL_16:
    sub_1C7BD40(SpecifiedPosition, v22);
  }
}


int32_t QuestRestrictionInfo__GetOverwriteLimitCountRangeType(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Int32_array *overwriteLimitCountSvtIds; // x9
  struct System_Int32_array *overwriteLimitCountRangeTypes; // x8
  int max_length; // w10
  unsigned int v6; // w11

  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( !overwriteLimitCountSvtIds )
    return 0;
  overwriteLimitCountRangeTypes = this->fields.overwriteLimitCountRangeTypes;
  if ( !overwriteLimitCountRangeTypes )
    return 0;
  max_length = overwriteLimitCountSvtIds->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( overwriteLimitCountSvtIds->m_Items[v6] != svtId )
  {
    if ( max_length == ++v6 )
      return 0;
  }
  if ( v6 >= LODWORD(overwriteLimitCountRangeTypes->max_length) )
    sub_1C7BD48(this);
  return overwriteLimitCountRangeTypes->m_Items[v6];
}


System_Int32_array *QuestRestrictionInfo__GetOverwriteLimitCountSvtIds(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.overwriteLimitCountSvtIds;
}


int32_t QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(
        QuestRestrictionInfo_o *this,
        int32_t targetServantId,
        const MethodInfo *method)
{
  if ( (byte_4CEF9EA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_GetValue_int__int___);
    byte_4CEF9EA = 1;
  }
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields.cachedOverwriteSvtTreasureDeviceLv,
         0) )
  {
    return 0;
  }
  else
  {
    return BasicHelper__GetValue_int__int_(
             (System_Collections_Generic_Dictionary_K__V__o *)this->fields.cachedOverwriteSvtTreasureDeviceLv,
             targetServantId,
             0,
             (const MethodInfo_315DF48 *)Method_BasicHelper_GetValue_int__int___);
  }
}


System_String_array *QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int32_t FixedServantPositionCount; // w0
  const MethodInfo *v4; // x1
  int v5; // w21
  __int64 FixedServantPositionSvtIdList; // x0
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x19
  unsigned __int64 v10; // x25
  __int64 v11; // x26
  GrandQuestFolderBoardItem_o *i; // x21
  int32_t v13; // w23
  Il2CppObject *MasterData_object; // x24
  int32_t maxLimitCount; // w23
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UserServantCollectionEntity_o *v24; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEF9BF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&OptionManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&string___TypeInfo);
    byte_4CEF9BF = 1;
  }
  v24 = 0;
  entity = 0;
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0;
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(this, method);
  if ( !FixedServantPositionCount )
    return 0;
  v5 = FixedServantPositionCount;
  FixedServantPositionSvtIdList = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(this, v4);
  if ( !FixedServantPositionSvtIdList )
    goto LABEL_41;
  v8 = FixedServantPositionSvtIdList;
  FixedServantPositionSvtIdList = sub_1C7BB90(string___TypeInfo, *(unsigned int *)(FixedServantPositionSvtIdList + 24));
  v9 = FixedServantPositionSvtIdList;
  if ( v5 >= 1 )
  {
    v10 = 0;
    v11 = (unsigned int)v5;
    for ( i = (GrandQuestFolderBoardItem_o *)(FixedServantPositionSvtIdList + 32);
          ;
          i = (GrandQuestFolderBoardItem_o *)((char *)i + 8) )
    {
      if ( v10 >= *(unsigned int *)(v8 + 24) )
LABEL_42:
        sub_1C7BD48(FixedServantPositionSvtIdList);
      v13 = *(_DWORD *)(v8 + 32 + 4 * v10);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      FixedServantPositionSvtIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !FixedServantPositionSvtIdList )
        break;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)FixedServantPositionSvtIdList,
              &entity,
              v13,
              (const MethodInfo_342E348 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0;
      FixedServantPositionSvtIdList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !FixedServantPositionSvtIdList )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)FixedServantPositionSvtIdList,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CE827C )
      {
        sub_1C7BAE8(&NetworkManager_TypeInfo);
        byte_4CE827C = 1;
      }
      FixedServantPositionSvtIdList = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        FixedServantPositionSvtIdList = (__int64)NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        break;
      if ( !UserServantCollectionMaster__TryGetEntity(
              (UserServantCollectionMaster_o *)MasterData_object,
              &v24,
              *(_QWORD *)(*(_QWORD *)(FixedServantPositionSvtIdList + 184) + 64LL),
              v13,
              0) )
        goto LABEL_28;
      FixedServantPositionSvtIdList = (__int64)v24;
      if ( !v24 )
        break;
      FixedServantPositionSvtIdList = UserServantCollectionEntity__IsGet(v24, 0);
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
      FixedServantPositionSvtIdList = OptionManager__GetSpoilerSetting(0);
      if ( !entity )
        break;
      v16 = ((maxLimitCount == -1) & ((unsigned int)FixedServantPositionSvtIdList ^ 1)) != 0 ? 0 : maxLimitCount;
      FixedServantPositionSvtIdList = (__int64)ServantEntity__getName((ServantEntity_o *)entity, v16, -1, 0, 0);
      if ( !v9 )
        break;
      if ( v10 >= *(unsigned int *)(v9 + 24) )
        goto LABEL_42;
      i->klass = (GrandQuestFolderBoardItem_c *)FixedServantPositionSvtIdList;
      sub_1C7BA8C(i, FixedServantPositionSvtIdList, v17, v18, v19, v20, v21, v22);
      if ( v11 == ++v10 )
        return (System_String_array *)v9;
    }
LABEL_41:
    sub_1C7BD40(FixedServantPositionSvtIdList, v7);
  }
  return (System_String_array *)v9;
}


System_Collections_Generic_List_Restriction_RangeType__o *QuestRestrictionInfo__GetRangeTypeList(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v4; // x8

  if ( !this->fields.restrictionBaseEntity )
    return 0;
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_7;
  if ( (unsigned int)(pos - 1) >= LODWORD(slotInfos->max_length) )
    sub_1C7BD48(this);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C7BD40(this, pos);
  return v4->fields.rangeTypeList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetRestrictedName(
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  QuestRestrictionEntity_o *v18; // x1
  __int64 v19; // x22
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x24
  System_Predicate_object__o *v21; // x25
  Il2CppObject *v22; // x0
  System_String_o *v24; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4CEF9CC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C7BAE8(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__DisplayClass189_0__GetRestrictedName_b__0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c__DisplayClass189_0_TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF9CC = 1;
  }
  v24 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( SLODWORD(questRestrictionEntityList->max_length) < 1 )
        return v24;
      v10 = 0;
      while ( 1 )
      {
        v11 = sub_1C7BD34(QuestRestrictionInfo___c__DisplayClass189_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v11, 0);
        if ( v10 >= LODWORD(questRestrictionEntityList->max_length) )
LABEL_28:
          sub_1C7BD48(this);
        if ( !v11 )
          break;
        v18 = questRestrictionEntityList->m_Items[v10];
        *(_QWORD *)(v11 + 16) = v18;
        v19 = v11 + 16;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)v18, v12, v13, v14, v15, v16, v17);
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v4->fields.myServantOrNpcRestrictionEntityList;
        v21 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_RestrictionEntity__TypeInfo);
        System_Predicate_object____ctor(
          v21,
          (Il2CppObject *)v11,
          Method_QuestRestrictionInfo___c__DisplayClass189_0__GetRestrictedName_b__0__,
          0);
        if ( !myServantOrNpcRestrictionEntityList )
          break;
        v22 = System_Collections_Generic_List_object___Find(
                myServantOrNpcRestrictionEntityList,
                (System_Predicate_T__o *)v21,
                (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
        if ( v22 )
        {
          this = (QuestRestrictionInfo_o *)RestrictionEntity__GetSpecifiedPosition((RestrictionEntity_o *)v22, 0);
          if ( (_DWORD)this == pos )
          {
            if ( !*(_QWORD *)v19 )
              break;
            v24 = *(System_String_o **)(*(_QWORD *)v19 + 56LL);
          }
        }
        if ( (__int64)++v10 >= SLODWORD(questRestrictionEntityList->max_length) )
          return v24;
      }
    }
LABEL_27:
    sub_1C7BD40(this, *(_QWORD *)&pos);
  }
  this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
  if ( !this )
    goto LABEL_27;
  this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)this,
                                     pos,
                                     (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
  if ( !this )
    goto LABEL_27;
  dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
  v6 = this;
  if ( dialogMessageInfoDictionary >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= dialogMessageInfoDictionary )
        goto LABEL_28;
      v8 = *((_QWORD *)&v6->fields.eventId + (int)v7);
      if ( !v8 )
        goto LABEL_27;
      this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v8 + 32), 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        return *(System_String_o **)(v8 + 32);
      dialogMessageInfoDictionary = (int)v6->fields.dialogMessageInfoDictionary;
      if ( (int)++v7 >= dialogMessageInfoDictionary )
        return v24;
    }
  }
  return v24;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetRestrictionMessage(
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
  System_Func_object__object__o *_9__109_0; // x20
  Il2CppObject *v12; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  Il2CppObject *v21; // x0
  System_Collections_Generic_IEnumerable_string__o *v22; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v23; // x8
  QuestRestrictionInfo_SlotInfo_o *v24; // x8

  v4 = this;
  if ( (byte_4CEF9A8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Prepend_string___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_1C7BAE8(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__109_0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&StringLiteral_10296/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_4CEF9A8 = 1;
  }
  if ( v4->fields.restrictionBaseEntity )
  {
    if ( initPos < 1 )
      return v4->fields.restrictionMessage;
    slotInfos = v4->fields.slotInfos;
    if ( slotInfos )
    {
      v6 = initPos - 1LL;
      if ( (unsigned int)v6 >= LODWORD(slotInfos->max_length) )
        goto LABEL_26;
      v7 = slotInfos->m_Items[v6];
      if ( !v7 )
        goto LABEL_25;
      if ( System_String__IsNullOrEmpty(v7->fields.summary, 0) )
        return v4->fields.restrictionMessage;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10296/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      v23 = v4->fields.slotInfos;
      if ( !v23 )
        goto LABEL_25;
      if ( (unsigned int)v6 >= LODWORD(v23->max_length) )
LABEL_26:
        sub_1C7BD48(this);
      v24 = v23->m_Items[v6];
      if ( v24 )
        return System_String__Concat_64215176(
                 (System_String_o *)this,
                 (System_String_o *)StringLiteral_43/*"\n"*/,
                 v24->fields.summary,
                 0);
    }
LABEL_25:
    sub_1C7BD40(this, *(_QWORD *)&initPos);
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
  _9__109_0 = (System_Func_object__object__o *)v10->static_fields->__9__109_0;
  if ( !_9__109_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = QuestRestrictionInfo___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__109_0 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_RestrictionEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__109_0,
      v12,
      Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__109_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__109_0 = (struct System_Func_RestrictionEntity__string__o *)_9__109_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__109_0,
      (int32_t)_9__109_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                               (System_Func_TSource__TResult__o *)_9__109_0,
                                                               (const MethodInfo_31A5F40 *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10296/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
  v22 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Prepend_object_(
                                                              v20,
                                                              v21,
                                                              (const MethodInfo_319F764 *)Method_System_Linq_Enumerable_Prepend_string___);
  return System_String__Join_64219504((System_String_o *)StringLiteral_43/*"\n"*/, v22, 0);
}


System_Collections_Generic_IEnumerable_RestrictionEntity__o *QuestRestrictionInfo__GetRestrictionMessageEntityList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x19
  System_Func_object__bool__o *_9__110_0; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CEF9A9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C7BAE8(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__110_0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c_TypeInfo);
    byte_4CEF9A9 = 1;
  }
  v3 = QuestRestrictionInfo___c_TypeInfo;
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v3 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__110_0 = (System_Func_object__bool__o *)v3->static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestRestrictionInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__110_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__110_0,
      v6,
      Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__110_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__110_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__110_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__110_0,
      (int32_t)_9__110_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                          restrictionEntityList,
                                                                          (System_Func_TSource__bool__o *)_9__110_0,
                                                                          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
}


System_Int32_array *QuestRestrictionInfo__GetServantIndividuality(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t ServantImageLimitSealAfter; // w21

  if ( (byte_4CEF9A1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF9A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0
    || (ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)Instance,
                                       svtId,
                                       dispLimitCount,
                                       0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1C7BD40(Instance, v9);
  }
  return ServantEntity__getIndividuality((ServantEntity_o *)Instance, limitCount, ServantImageLimitSealAfter, 0);
}


int32_t QuestRestrictionInfo__GetServantNumMinRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.servantNumMin;
}


int32_t QuestRestrictionInfo__GetServantNumRangeType(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  RestrictionBaseEntity_o *restrictionBaseEntity; // x0
  struct RestrictionEntity_o *servantNumRestrictionEntity; // x8
  int32_t servantNumMax; // w19
  BalanceConfig_c *v7; // x0

  if ( (byte_4CEF9C0 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    byte_4CEF9C0 = 1;
  }
  if ( this->fields.servantNumMax < 1 )
    return 0;
  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  if ( restrictionBaseEntity )
  {
    if ( RestrictionBaseEntity__HasFlag(restrictionBaseEntity, 8, 0) )
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
      sub_1C7BD40(0, method);
    return servantNumRestrictionEntity->fields.rangeType;
  }
}


int32_t QuestRestrictionInfo__GetServantNumRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.servantNumMax;
}


System_String_o *QuestRestrictionInfo__GetServantNumRestrictionDialogMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  QuestRestrictionInfo_o *v3; // x19
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int v5; // w8
  unsigned int v6; // w21
  RestrictionWholeEntity_o *v7; // x25
  int32_t v8; // w20
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v10; // x21
  unsigned int v11; // w26
  __int64 v12; // x27
  struct RestrictionEntity_array *restrictionEntityList; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned int v16; // w10
  int32_t priority; // w11
  RestrictionEntity_o *v18; // x12
  Il2CppObject *v19; // x8
  RestrictionEntity_o *v20; // x8
  Il2CppObject *v21; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_4CEF9C2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF9C2 = 1;
  }
  v21 = 0;
  entity = 0;
  if ( !v3->fields.restrictionBaseEntity )
  {
    restrictionEntityList = v3->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_51;
    max_length = restrictionEntityList->max_length;
    if ( (int)max_length < 1 )
    {
      method = 0;
LABEL_46:
      if ( (unsigned int)method < (unsigned int)max_length )
      {
        v20 = restrictionEntityList->m_Items[(int)method];
        if ( v20 )
          return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v20->fields.id, v2);
        goto LABEL_51;
      }
    }
    else
    {
      v16 = 0;
      priority = 0;
      method = 0;
      while ( v16 < (unsigned int)max_length )
      {
        v18 = restrictionEntityList->m_Items[v16];
        if ( !v18 )
          goto LABEL_51;
        if ( !priority && v18->fields.type == 10 )
        {
          priority = v18->fields.priority;
          method = (const MethodInfo *)v16;
        }
        if ( (int)++v16 >= (int)max_length )
          goto LABEL_46;
      }
    }
LABEL_52:
    sub_1C7BD48(this);
  }
  restrictionWholeEntities = v3->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_51;
  v5 = restrictionWholeEntities->max_length;
  if ( v5 < 1 )
  {
LABEL_16:
    if ( v3->fields.servantNumMin < 1 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v8 = 1;
    while ( 1 )
    {
      this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
      if ( !this )
        goto LABEL_51;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         v8,
                                         (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( !this )
        goto LABEL_51;
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
        goto LABEL_52;
      v12 = *((_QWORD *)&v10->fields.eventId + (int)v11);
      if ( !v12 )
        goto LABEL_51;
      if ( *(_DWORD *)(v12 + 44) && !*(_DWORD *)(v12 + 40) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_51;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &v21,
                                           *(_DWORD *)(v12 + 44),
                                           (const MethodInfo_342E348 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      dialogMessageInfoDictionary = (int)v10->fields.dialogMessageInfoDictionary;
      if ( (int)++v11 >= dialogMessageInfoDictionary )
        goto LABEL_31;
    }
    v19 = v21;
    if ( v21 )
      return (System_String_o *)v19[1].monitor;
LABEL_51:
    sub_1C7BD40(this, method);
  }
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= v5 )
      goto LABEL_52;
    v7 = restrictionWholeEntities->m_Items[v6];
    if ( !v7 )
      goto LABEL_51;
    if ( v7->fields.restrictionMessageId && v7->fields.type == 3 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
      if ( !this )
        goto LABEL_51;
      this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         &entity,
                                         v7->fields.restrictionMessageId,
                                         (const MethodInfo_342E348 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
    }
    v5 = restrictionWholeEntities->max_length;
    if ( (int)++v6 >= v5 )
      goto LABEL_16;
  }
  v19 = entity;
  if ( !entity )
    goto LABEL_51;
  return (System_String_o *)v19[1].monitor;
}


System_String_o *QuestRestrictionInfo__GetServantNumRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int32_t ServantNumRangeType; // w0
  int32_t servantNumMax; // w20
  BalanceConfig_c *v5; // x0
  System_String_o *v6; // x20
  int32_t *v7; // x1
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+8h] [xbp-28h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEF9C1 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10343/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/);
    sub_1C7BAE8(&StringLiteral_10342/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/);
    byte_4CEF9C1 = 1;
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
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10343/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, 0);
    v7 = &v11;
    v11 = this->fields.servantNumMax;
  }
  else
  {
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10342/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, 0);
    v7 = &v10;
    v10 = this->fields.servantNumMax;
  }
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v7);
  return System_String__Format(v6, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetSlotMessage(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v3; // x20
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x26
  unsigned __int64 v5; // x27
  __int64 v6; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  QuestRestrictionEntity_o *v13; // x1
  __int64 v14; // x21
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x23
  System_Predicate_object__o *v16; // x24
  Il2CppObject *v17; // x0

  v3 = this;
  if ( (byte_4CEF9E8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_GetValue_string___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C7BAE8(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__DisplayClass226_0__GetSlotMessage_b__0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c__DisplayClass226_0_TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&StringLiteral_23297/*"restrictionSlotMessage"*/);
    byte_4CEF9E8 = 1;
  }
  questRestrictionEntityList = v3->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_15;
  if ( SLODWORD(questRestrictionEntityList->max_length) < 1 )
    return string_TypeInfo->static_fields->Empty;
  v5 = 0;
  while ( 1 )
  {
    v6 = sub_1C7BD34(QuestRestrictionInfo___c__DisplayClass226_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    if ( v5 >= LODWORD(questRestrictionEntityList->max_length) )
      sub_1C7BD48(this);
    if ( !v6 )
      goto LABEL_15;
    v13 = questRestrictionEntityList->m_Items[v5];
    *(_QWORD *)(v6 + 16) = v13;
    v14 = v6 + 16;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)v13, v7, v8, v9, v10, v11, v12);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v3->fields.myServantOrNpcRestrictionEntityList;
    v16 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v16,
      (Il2CppObject *)v6,
      Method_QuestRestrictionInfo___c__DisplayClass226_0__GetSlotMessage_b__0__,
      0);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_15;
    v17 = System_Collections_Generic_List_object___Find(
            myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v16,
            (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v17 )
    {
      this = (QuestRestrictionInfo_o *)RestrictionEntity__GetSpecifiedPosition((RestrictionEntity_o *)v17, 0);
      if ( (_DWORD)this == initPos )
        break;
    }
    if ( (__int64)++v5 >= SLODWORD(questRestrictionEntityList->max_length) )
      return string_TypeInfo->static_fields->Empty;
  }
  if ( !*(_QWORD *)v14 )
LABEL_15:
    sub_1C7BD40(this, *(_QWORD *)&initPos);
  return (System_String_o *)BasicHelper__GetValue_object_(
                              *(System_Collections_Generic_Dictionary_string__object__o **)(*(_QWORD *)v14 + 64LL),
                              (System_String_o *)StringLiteral_23297/*"restrictionSlotMessage"*/,
                              (Il2CppObject *)string_TypeInfo->static_fields->Empty,
                              (const MethodInfo_315DCFC *)Method_BasicHelper_GetValue_string___);
}


int32_t QuestRestrictionInfo__GetSupportInitIndex(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.supportInitIndex;
}


System_String_o *QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF9AA & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10344/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/);
    byte_4CEF9AA = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10344/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, 0);
}


System_Int32_array *QuestRestrictionInfo__GetSvtIdBattleList(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.svtIdForceBattleList;
}


int32_t QuestRestrictionInfo__GetTotalCostRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  RestrictionEntity_o *totalCostRestrictionEntity; // x0

  totalCostRestrictionEntity = this->fields.totalCostRestrictionEntity;
  if ( totalCostRestrictionEntity && !this->fields.isInfinityCost )
    return RestrictionEntity__getTotalCost(totalCostRestrictionEntity, 0);
  else
    return 0;
}


System_String_o *QuestRestrictionInfo__GetTotalCostRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  System_String_c *klass; // x19
  Il2CppObject *v5; // x0
  int32_t TotalCost; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4CEF9B9 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    byte_4CEF9B9 = 1;
  }
  result = (System_String_o *)this->fields.totalCostRestrictionEntity;
  if ( result )
  {
    klass = result[1].klass;
    TotalCost = RestrictionEntity__getTotalCost((RestrictionEntity_o *)result, 0);
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalCost);
    return System_String__Format((System_String_o *)klass, v5, 0);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetUniqueIndividualityRestrictionMessage(
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
  if ( (byte_4CEF9B0 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10346/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/);
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF9B0 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_10346/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, 0);
  }
  else
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_18:
      sub_1C7BD40(this, isFixMessage);
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
          sub_1C7BD48(this);
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


System_String_o *QuestRestrictionInfo__GetUniqueServantRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEF9AF & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10345/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/);
    byte_4CEF9AF = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10345/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, 0);
}


int32_t QuestRestrictionInfo__GetUserEventDeckNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.eventDeckNum;
}


bool QuestRestrictionInfo__IsActiveGrandBoardRestriction(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_T__o *activeGrandBoardRestrictionEntityList; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4CEF9E2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_RestrictionEntity___);
    sub_1C7BAE8(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__DisplayClass219_0__IsActiveGrandBoardRestriction_b__0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c__DisplayClass219_0_TypeInfo);
    byte_4CEF9E2 = 1;
  }
  v5 = sub_1C7BD34(QuestRestrictionInfo___c__DisplayClass219_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_DWORD *)(v5 + 16) = initPos;
  activeGrandBoardRestrictionEntityList = (System_Collections_Generic_List_T__o *)this->fields.activeGrandBoardRestrictionEntityList;
  v9 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass219_0__IsActiveGrandBoardRestriction_b__0__,
    0);
  return BasicHelper__Any_object_(
           activeGrandBoardRestrictionEntityList,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_3159728 *)Method_BasicHelper_Any_RestrictionEntity___);
}


bool QuestRestrictionInfo__IsAllOutBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isAllOutBattle;
}


bool QuestRestrictionInfo__IsClassRestriction(
        QuestRestrictionInfo_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  QuestRestrictionInfo___c_c *v9; // x0
  System_Func_object__bool__o *_9__100_0; // x21
  Il2CppObject *v11; // x22
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  QuestRestrictionInfo___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  System_Func_object__bool__o *_9__100_1; // x21
  Il2CppObject *v23; // x22
  struct QuestRestrictionInfo___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  QuestRestrictionInfo___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  System_Func_object__bool__o *_9__100_2; // x21
  Il2CppObject *v35; // x22
  struct QuestRestrictionInfo___c_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x20
  System_Func_object__bool__o *v44; // x21

  if ( (byte_4CEF9A2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_RestrictionEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C7BAE8(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__100_0__);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__100_1__);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__100_2__);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__DisplayClass100_0__IsClassRestriction_b__3__);
    sub_1C7BAE8(&QuestRestrictionInfo___c__DisplayClass100_0_TypeInfo);
    sub_1C7BAE8(&QuestRestrictionInfo___c_TypeInfo);
    byte_4CEF9A2 = 1;
  }
  v5 = sub_1C7BD34(QuestRestrictionInfo___c__DisplayClass100_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_DWORD *)(v5 + 16) = individuality;
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  v9 = QuestRestrictionInfo___c_TypeInfo;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v9 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__100_0 = (System_Func_object__bool__o *)v9->static_fields->__9__100_0;
  if ( !_9__100_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestRestrictionInfo___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__100_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__100_0, v11, Method_QuestRestrictionInfo___c__IsClassRestriction_b__100_0__, 0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__100_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__100_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__100_0,
      (int32_t)_9__100_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          restrictionEntityList,
          (System_Func_TSource__bool__o *)_9__100_0,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v20 = QuestRestrictionInfo___c_TypeInfo;
  v21 = v19;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v20 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__100_1 = (System_Func_object__bool__o *)v20->static_fields->__9__100_1;
  if ( !_9__100_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = QuestRestrictionInfo___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__100_1 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__100_1, v23, Method_QuestRestrictionInfo___c__IsClassRestriction_b__100_1__, 0);
    v24 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v24->__9__100_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__100_1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v24->__9__100_1, (int32_t)_9__100_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)_9__100_1,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v32 = QuestRestrictionInfo___c_TypeInfo;
  v33 = v31;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v32 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__100_2 = (System_Func_object__bool__o *)v32->static_fields->__9__100_2;
  if ( !_9__100_2 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = QuestRestrictionInfo___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__100_2 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__100_2, v35, Method_QuestRestrictionInfo___c__IsClassRestriction_b__100_2__, 0);
    v36 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v36->__9__100_2 = (struct System_Func_RestrictionEntity__bool__o *)_9__100_2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v36->__9__100_2, (int32_t)_9__100_2, v37, v38, v39, v40, v41, v42);
  }
  v43 = System_Linq_Enumerable__Where_object_(
          v33,
          (System_Func_TSource__bool__o *)_9__100_2,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v44 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v44,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass100_0__IsClassRestriction_b__3__,
    0);
  return System_Linq_Enumerable__Any_object__51896536(
           v43,
           (System_Func_TSource__bool__o *)v44,
           (const MethodInfo_317E0D8 *)Method_System_Linq_Enumerable_Any_RestrictionEntity___);
}


bool QuestRestrictionInfo__IsConvertOverwriteImage(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Int32_array *overwriteLimitCountSvtIds; // x8
  int max_length; // w9
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
    v8 = overwriteLimitCountSvtIds->m_Items[v7];
    result = v8 == svtId;
    if ( v8 == svtId )
      break;
  }
  while ( v6 != v7++ );
  return result;
}


bool QuestRestrictionInfo__IsDataLostBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isDataLostBattle;
}


bool QuestRestrictionInfo__IsEditablePos(QuestRestrictionInfo_o *this, int32_t initPos, const MethodInfo *method)
{
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v4; // x8

  if ( !this->fields.restrictionBaseEntity )
    return 1;
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_7;
  if ( (unsigned int)(initPos - 1) >= LODWORD(slotInfos->max_length) )
    sub_1C7BD48(this);
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C7BD40(this, initPos);
  return v4->fields.isMoved;
}


bool QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_1C7BD40(this, method);
  return LODWORD(restrictionEntityList->max_length) == 0;
}


bool QuestRestrictionInfo__IsExistGrand(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)this->fields.grandServantRestrictionEntityList,
            0);
}


bool QuestRestrictionInfo__IsFatigure(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isFatigure;
}


bool QuestRestrictionInfo__IsFirstServantNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int max_length; // w9
  unsigned int v4; // w10
  int32_t priority; // w13
  int32_t v6; // w12
  signed int v7; // w14
  signed int v8; // w11
  RestrictionEntity_o *v9; // x15
  int32_t type; // w16

  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_18;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    priority = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1C7BD48(this);
      v9 = restrictionEntityList->m_Items[v4];
      if ( !v9 )
        break;
      type = v9->fields.type;
      if ( v6 || type != 10 )
      {
        if ( !priority && type == 8 || !priority && type == 14 )
        {
          priority = v9->fields.priority;
          v7 = v4;
        }
      }
      else
      {
        v6 = v9->fields.priority;
        v8 = v4;
      }
      if ( (int)++v4 >= max_length )
        return v7 != 0 && v7 > v8;
    }
LABEL_18:
    sub_1C7BD40(this, method);
  }
  v8 = 0;
  v7 = 0;
  return v7 != 0 && v7 > v8;
}


bool QuestRestrictionInfo__IsFixedMyServantPosition(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isFixedMyServantPosition;
}


bool QuestRestrictionInfo__IsFixedMyServantSingleRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isFixedMyServantSingle;
}


bool QuestRestrictionInfo__IsFixedServantPosition(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isFixedMyServantPosition || this->fields.isNeedStarting || this->fields.isFixedPosition;
}


bool QuestRestrictionInfo__IsFixedServantPositionIncludeSupport(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNeedStarting || this->fields.isFixedPosition;
}


bool QuestRestrictionInfo__IsFixedSupportPosition(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isFixedSupportPosition || this->fields.isFixedNpcPosition;
}


bool QuestRestrictionInfo__IsFixedSupportPositionIndividuality(QuestRestrictionInfo_o *this, const MethodInfo *method)
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

  if ( (byte_4CEF9D5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CEF9D5 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !this->fields.isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.isFixedSupportPosition )
  {
    fixedSupportIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)fixedSupportIndividualitiesList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v11;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v6 )
        break;
      if ( !v3 )
        sub_1C7BD40(v6, v7);
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
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v11;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v9 )
        break;
      if ( !v3 )
        sub_1C7BD40(v9, v10);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v3 )
LABEL_23:
    sub_1C7BD40(fixedSupportIndividualitiesList, v4);
  return v3->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsFixedSupportPosition_43962288(
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
  if ( (byte_4CEF9B1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEF9B1 = 1;
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
  this = (QuestRestrictionInfo_o *)ServantLeaderInfo__IsNpc(servantInfo, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
LABEL_9:
  if ( !v6->fields.restrictionBaseEntity )
    goto LABEL_36;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v6->fields.isFixedSupportPosition )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedSupportIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v22;
          ;
          System_Collections_Generic_List_int___AddRange(
            v7,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v8 )
        break;
      if ( !v7 )
        sub_1C7BD40(v8, v9);
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
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v22;
          ;
          System_Collections_Generic_List_int___AddRange(
            v7,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v11 )
        break;
      if ( !v7 )
        sub_1C7BD40(v11, v12);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v7 )
    goto LABEL_42;
  if ( v7->fields._size < 1 )
    goto LABEL_36;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_42;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v15 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  *(_QWORD *)&v25.fields.fakeValue = v14;
  this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v25, 0);
  if ( !v13 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v13,
             (int32_t)this,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    v7,
    (const MethodInfo_38228AC *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = v22;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v23,
            (const MethodInfo_35BA180 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v23,
        (const MethodInfo_35BA17C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      return 1;
    }
    current = (int32_t)v23.fields._current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, 0);
    if ( !Entity )
      sub_1C7BD40(DispLimitCount, v20);
  }
  while ( !ServantEntity__IsIndividuality((ServantEntity_o *)Entity, limitCount, DispLimitCount, current, 0) );
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v23,
    (const MethodInfo_35BA17C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_36:
  supportPositionList = v6->fields.supportPositionList;
  if ( !supportPositionList )
LABEL_42:
    sub_1C7BD40(this, *(_QWORD *)&num);
  if ( LODWORD(supportPositionList->max_length) <= num )
    sub_1C7BD48(this);
  return !supportPositionList->m_Items[num];
}


bool QuestRestrictionInfo__IsGrandServantRestriction(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  return QuestRestrictionInfo__GetGrandServantRestrictionEntity(this, initPos, method) != 0;
}


bool QuestRestrictionInfo__IsIgnoreSyncEquipGrand(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v4; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEF9E1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CEF9E1 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_11:
    sub_1C7BD40(Master_object, v4);
  return QuestPhaseEntity__IsIgnoreSyncEquipGrand(entity, 0);
}


bool QuestRestrictionInfo__IsInfinityCost(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isInfinityCost;
}


bool QuestRestrictionInfo__IsMyServantNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  if ( this->fields.restrictionBaseEntity )
    return this->fields.myServantNumMax > 0;
  else
    return this->fields.myServantNumRestrictionEntity != 0;
}


bool QuestRestrictionInfo__IsMyServantOrNpcRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isMyServantOrNpc || this->fields.isMyServantOrSupport;
}


bool QuestRestrictionInfo__IsMyServantOrNpcRestriction_43975148(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v9; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4CEF9C7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
    sub_1C7BAE8(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__DisplayClass184_0__IsMyServantOrNpcRestriction_b__0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo);
    byte_4CEF9C7 = 1;
  }
  v5 = sub_1C7BD34(QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_DWORD *)(v5 + 16) = pos;
  if ( !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  if ( this->fields.restrictionBaseEntity )
  {
    slotInfos = this->fields.slotInfos;
    if ( slotInfos )
    {
      if ( (unsigned int)(pos - 1) >= LODWORD(slotInfos->max_length) )
        sub_1C7BD48(v6);
      v9 = slotInfos->m_Items[pos - 1];
      if ( v9 )
        return (unsigned int)(v9->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_1C7BD40(v6, v7);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v12 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass184_0__IsMyServantOrNpcRestriction_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  return System_Collections_Generic_List_object___Exists(
           myServantOrNpcRestrictionEntityList,
           (System_Predicate_T__o *)v12,
           (const MethodInfo_383F428 *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
}


bool QuestRestrictionInfo__IsMyServantOrSupportRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isMyServantOrSupport;
}


bool QuestRestrictionInfo__IsMySvtOrSupportSlotClassRestriction(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        int32_t classIndividuality,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_object__bool__o *v11; // x21
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x20
  bool result; // w0

  if ( (byte_4CEF9A3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
    sub_1C7BAE8(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__DisplayClass101_0__IsMySvtOrSupportSlotClassRestriction_b__0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c__DisplayClass101_0_TypeInfo);
    byte_4CEF9A3 = 1;
  }
  v7 = sub_1C7BD34(QuestRestrictionInfo___c__DisplayClass101_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C7BD40(v8, v9);
  *(_DWORD *)(v7 + 16) = initPos;
  result = initPos >= 1
        && (restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList,
            v11 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionEntity__bool__TypeInfo),
            System_Func_object__bool____ctor(
              v11,
              (Il2CppObject *)v7,
              Method_QuestRestrictionInfo___c__DisplayClass101_0__IsMySvtOrSupportSlotClassRestriction_b__0__,
              0),
            (v12 = System_Linq_Enumerable__FirstOrDefault_object__52006308(
                     restrictionEntityList,
                     (System_Func_TSource__bool__o *)v11,
                     (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___)) != 0)
        && (v13 = v12, !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12[2].monitor, 0))
        && !System_Linq_Enumerable__Contains_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v13[2].monitor,
              0,
              (const MethodInfo_318C6F4 *)Method_System_Linq_Enumerable_Contains_int___)
        && RestrictionEntity__IsRestriction((RestrictionEntity_o *)v13, classIndividuality, 0);
  return result;
}


bool QuestRestrictionInfo__IsNoSupportBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNoSupportBattle;
}


bool QuestRestrictionInfo__IsNotIndividuality(QuestRestrictionInfo_o *this, int32_t pos, const MethodInfo *method)
{
  __int64 v5; // x21
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

  if ( (byte_4CEF9C9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C7BAE8(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__DisplayClass186_0__IsNotIndividuality_b__0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c__DisplayClass186_0_TypeInfo);
    byte_4CEF9C9 = 1;
  }
  v5 = sub_1C7BD34(QuestRestrictionInfo___c__DisplayClass186_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_26;
  *(_DWORD *)(v5 + 16) = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_43975148(this, pos, v8) )
    goto LABEL_23;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v5 + 16),
                                        (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    v9 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    if ( v9 >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v9 == v10 )
          sub_1C7BD48(restrictionSlotDetailDictionary);
        v11 = *((_QWORD *)restrictionSlotDetailDictionary + v10 + 4);
        if ( !v11 )
          break;
        if ( *(_DWORD *)(v11 + 32) == 1 )
        {
          v12 = *(_QWORD *)(v11 + 40);
          if ( v12 )
          {
            if ( *(_QWORD *)(v12 + 24) )
              goto LABEL_23;
          }
        }
        if ( v9 == ++v10 )
          goto LABEL_24;
      }
LABEL_26:
      sub_1C7BD40(restrictionSlotDetailDictionary, v7);
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v14 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass186_0__IsNotIndividuality_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_26;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                      myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v14,
                                      (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( restrictionSlotDetailDictionary )
  {
    v15 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
    if ( !v15 )
      goto LABEL_26;
    if ( !*(_QWORD *)(v15 + 24) )
    {
LABEL_24:
      LOBYTE(restrictionSlotDetailDictionary) = 1;
      return (char)restrictionSlotDetailDictionary;
    }
    if ( *((_DWORD *)restrictionSlotDetailDictionary + 8) == 24 )
    {
      LOBYTE(restrictionSlotDetailDictionary) = RestrictionEntity__IsSearchVals(
                                                  (RestrictionEntity_o *)restrictionSlotDetailDictionary,
                                                  0,
                                                  0);
      return (char)restrictionSlotDetailDictionary;
    }
LABEL_23:
    LOBYTE(restrictionSlotDetailDictionary) = 0;
  }
  return (char)restrictionSlotDetailDictionary;
}


bool QuestRestrictionInfo__IsNotSingleSupportOnly(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNotSingleSupportOnly;
}


bool QuestRestrictionInfo__IsNotTransitionSupportList(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNotTransitionSupportList;
}


bool QuestRestrictionInfo__IsNpcEditablePos(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNpcEditablePos;
}


bool QuestRestrictionInfo__IsNpcMulitipleOrOnly(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNpcMultipleBattle || this->fields.isNpcOnlyBattle;
}


bool QuestRestrictionInfo__IsNpcMulitpleBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNpcMultipleBattle;
}


bool QuestRestrictionInfo__IsNpcOnlyBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNpcOnlyBattle;
}


bool QuestRestrictionInfo__IsPositionFixNpc(QuestRestrictionInfo_o *this, int32_t initPos, const MethodInfo *method)
{
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v4; // x8

  if ( this->fields.restrictionBaseEntity )
  {
    slotInfos = this->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_10;
    if ( (unsigned int)(initPos - 1) >= LODWORD(slotInfos->max_length) )
      sub_1C7BD48(this);
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_1C7BD40(this, initPos);
    return v4->fields.slotType == 1 && !QuestRestrictionInfo__IsEditablePos(this, initPos, method);
  }
  else
  {
    return 1;
  }
}


bool QuestRestrictionInfo__IsRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isRestriction;
}


bool QuestRestrictionInfo__IsRestrictionIndividualitySlot(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  System_Object_array *slotInfos; // x19
  QuestRestrictionInfo___c_c *v4; // x0
  System_Func_object__bool__o *_9__98_0; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CEF9A0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
    sub_1C7BAE8(&System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__98_0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c_TypeInfo);
    byte_4CEF9A0 = 1;
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
    _9__98_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__98_0,
      v6,
      Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__98_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = (struct System_Func_QuestRestrictionInfo_SlotInfo__bool__o *)_9__98_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__98_0, (int32_t)_9__98_0, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_object__51746772(
           slotInfos,
           (System_Func_T__bool__o *)_9__98_0,
           (const MethodInfo_31597D4 *)Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
}


bool QuestRestrictionInfo__IsRestrictionIndividualityWhole(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo___c_c *v3; // x0
  System_Object_array *restrictionWholeEntities; // x19
  System_Func_object__bool__o *_9__97_1; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo_31597D4 *v14; // x2
  QuestRestrictionInfo___c_c *v15; // x0
  Il2CppObject *v16; // x21
  struct QuestRestrictionInfo___c_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CEF99F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_RestrictionEntity____78794544);
    sub_1C7BAE8(&Method_BasicHelper_Any_RestrictionWholeEntity___);
    sub_1C7BAE8(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C7BAE8(&System_Func_RestrictionWholeEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__97_0__);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__97_1__);
    sub_1C7BAE8(&QuestRestrictionInfo___c_TypeInfo);
    byte_4CEF99F = 1;
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
      _9__97_1 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionWholeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__97_1,
        v6,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__97_1__,
        0);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__97_1 = (struct System_Func_RestrictionWholeEntity__bool__o *)_9__97_1;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__97_1,
        (int32_t)_9__97_1,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    v14 = (const MethodInfo_31597D4 *)Method_BasicHelper_Any_RestrictionWholeEntity___;
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
      _9__97_1 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__97_1,
        v16,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__97_0__,
        0);
      v17 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v17->__9__97_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__97_1;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v17->__9__97_0, (int32_t)_9__97_1, v18, v19, v20, v21, v22, v23);
    }
    v14 = (const MethodInfo_31597D4 *)Method_BasicHelper_Any_RestrictionEntity____78794544;
  }
  return BasicHelper__Any_object__51746772(restrictionWholeEntities, (System_Func_T__bool__o *)_9__97_1, v14);
}


bool QuestRestrictionInfo__IsRestrictionServantIndividuality(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t pos,
        bool isChkSupport,
        const MethodInfo *method)
{
  __int64 v13; // x24
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  int32_t ServantImageLimitSealAfter; // w20
  const MethodInfo *v18; // x2
  Il2CppObject *Entity; // x22
  int v20; // w25
  __int64 m_CancellationTokenSource; // x8
  bool *p_DispLog; // x9
  __int64 v23; // x10
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x23
  System_Predicate_object__o *v25; // x25
  struct DataMasterBase_array *datalist; // x8
  Il2CppObject *v27; // x23
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v29; // x0
  struct System_Threading_CancellationTokenSource_o *v30; // x9
  DataManager_o *v31; // x21
  unsigned __int64 v32; // x24
  RestrictionSlotDetailEntity_o *v33; // x23
  struct System_Int32_array *targetVals; // x9
  System_Int32_array *Individuality; // x0

  if ( (byte_4CEF9CA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C7BAE8(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__DisplayClass187_0__IsRestrictionServantIndividuality_b__0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo);
    byte_4CEF9CA = 1;
  }
  v13 = sub_1C7BD34(QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_55;
  *(_DWORD *)(v13 + 16) = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_43975148(this, pos, v16) )
    goto LABEL_53;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_55;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_55;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)this->fields.restrictionSlotDictionary;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                    *(_DWORD *)(v13 + 16),
                                    (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( Instance )
      {
        v20 = -1;
        if ( (int)Instance->fields.m_CancellationTokenSource >= 1 )
        {
          m_CancellationTokenSource = (unsigned int)Instance->fields.m_CancellationTokenSource;
          p_DispLog = &Instance->fields._DispLog;
          while ( 1 )
          {
            v23 = *(_QWORD *)p_DispLog;
            if ( isChkSupport )
            {
              if ( !v23 )
                goto LABEL_55;
              if ( *(_DWORD *)(v23 + 28) == 2 )
                goto LABEL_34;
            }
            else
            {
              if ( !v23 )
                goto LABEL_55;
              if ( *(_DWORD *)(v23 + 28) == 1 )
              {
LABEL_34:
                v20 = *(_DWORD *)(v23 + 40);
                break;
              }
            }
            --m_CancellationTokenSource;
            p_DispLog += 8;
            if ( !m_CancellationTokenSource )
            {
              v20 = -1;
              break;
            }
          }
        }
        Instance = (DataManager_o *)this->fields.restrictionSlotDetailDictionary;
        if ( Instance )
        {
          Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                        *(_DWORD *)(v13 + 16),
                                        (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
          if ( Instance )
          {
            v30 = Instance->fields.m_CancellationTokenSource;
            v31 = Instance;
            if ( (int)v30 >= 1 )
            {
              LOBYTE(max_length) = 0;
              v32 = 0;
              while ( 1 )
              {
                if ( v32 >= (unsigned int)v30 )
                  sub_1C7BD48(Instance);
                v33 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v31->fields._DispLog + v32);
                if ( v20 < 0 )
                {
                  if ( !v33 )
                    goto LABEL_55;
                }
                else
                {
                  if ( !v33 )
                    goto LABEL_55;
                  if ( v20 != v33->fields.id )
                    goto LABEL_51;
                }
                if ( v33->fields.type == 1 )
                {
                  targetVals = v33->fields.targetVals;
                  if ( targetVals )
                  {
                    if ( targetVals->max_length )
                    {
                      if ( !Entity )
                        goto LABEL_55;
                      Individuality = ServantEntity__getIndividuality(
                                        (ServantEntity_o *)Entity,
                                        limitCount,
                                        ServantImageLimitSealAfter,
                                        0);
                      Instance = (DataManager_o *)RestrictionSlotDetailEntity__IsIndividuality(v33, Individuality, 0);
                      if ( ((unsigned __int8)Instance & 1) != 0 )
                        goto LABEL_53;
                      LOBYTE(max_length) = 1;
                    }
                  }
                }
LABEL_51:
                LODWORD(v30) = v31->fields.m_CancellationTokenSource;
                if ( (__int64)++v32 >= (int)v30 )
                  return max_length;
              }
            }
            goto LABEL_53;
          }
        }
      }
    }
LABEL_55:
    sub_1C7BD40(Instance, v15);
  }
  if ( isChkSupport && !QuestRestrictionInfo__GetGrandServantRestrictionEntity(this, *(_DWORD *)(v13 + 16), v18) )
    goto LABEL_53;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v25 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v25,
    (Il2CppObject *)v13,
    Method_QuestRestrictionInfo___c__DisplayClass187_0__IsRestrictionServantIndividuality_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_55;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                myServantOrNpcRestrictionEntityList,
                                (System_Predicate_T__o *)v25,
                                (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !Instance )
    goto LABEL_53;
  datalist = Instance->fields.datalist;
  v27 = (Il2CppObject *)Instance;
  if ( !datalist )
    goto LABEL_55;
  max_length = datalist->max_length;
  if ( max_length )
  {
    Instance = (DataManager_o *)this->fields.grandServantRestrictionEntityList;
    if ( !Instance )
      goto LABEL_55;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___Contains(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v27,
                                  (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_RestrictionEntity__Contains__);
    if ( ((unsigned __int8)Instance & 1) == 0
      || (Instance = (DataManager_o *)RestrictionEntity__IsSearchVals((RestrictionEntity_o *)v27, 0, 0),
          LOBYTE(max_length) = 0,
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( !Entity )
        goto LABEL_55;
      v29 = ServantEntity__getIndividuality((ServantEntity_o *)Entity, limitCount, ServantImageLimitSealAfter, 0);
      if ( RestrictionEntity__IsRestriction_43144004((RestrictionEntity_o *)v27, v29, 0) )
      {
        LOBYTE(max_length) = 1;
        return max_length;
      }
LABEL_53:
      LOBYTE(max_length) = 0;
    }
  }
  return max_length;
}


bool QuestRestrictionInfo__IsRestrictionServantIndividuality_43978376(
        QuestRestrictionInfo_o *this,
        System_Int32_array *individuality,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v7; // x22
  void *restrictionSlotDetailDictionary; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int v11; // w9
  void *v12; // x20
  unsigned int v13; // w21
  __int64 v14; // x8
  __int64 v15; // x9
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x21
  System_Predicate_object__o *v17; // x23
  __int64 v18; // x8
  RestrictionEntity_o *v19; // x21
  bool IsSearchVals; // w0

  if ( (byte_4CEF9CB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C7BAE8(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__DisplayClass188_0__IsRestrictionServantIndividuality_b__0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c__DisplayClass188_0_TypeInfo);
    byte_4CEF9CB = 1;
  }
  v7 = sub_1C7BD34(QuestRestrictionInfo___c__DisplayClass188_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_29;
  *(_DWORD *)(v7 + 16) = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_43975148(this, pos, v10) )
    goto LABEL_27;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v7 + 16),
                                        (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    v11 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v12 = restrictionSlotDetailDictionary;
    if ( v11 >= 1 )
    {
      v13 = 0;
      LOBYTE(v14) = 0;
      while ( 1 )
      {
        if ( v13 >= v11 )
          sub_1C7BD48(restrictionSlotDetailDictionary);
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
                                                          0);
              if ( ((unsigned __int8)restrictionSlotDetailDictionary & 1) != 0 )
                goto LABEL_27;
              LOBYTE(v14) = 1;
            }
          }
        }
        v11 = *((_DWORD *)v12 + 6);
        if ( (int)++v13 >= v11 )
          return v14 & 1;
      }
LABEL_29:
      sub_1C7BD40(restrictionSlotDetailDictionary, v9);
    }
    goto LABEL_27;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v17 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_QuestRestrictionInfo___c__DisplayClass188_0__IsRestrictionServantIndividuality_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_29;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                      myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v17,
                                      (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !restrictionSlotDetailDictionary )
  {
LABEL_27:
    LOBYTE(v14) = 0;
    return v14 & 1;
  }
  v18 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
  v19 = (RestrictionEntity_o *)restrictionSlotDetailDictionary;
  if ( !v18 )
    goto LABEL_29;
  v14 = *(_QWORD *)(v18 + 24);
  if ( v14 )
  {
    restrictionSlotDetailDictionary = this->fields.grandServantRestrictionEntityList;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)restrictionSlotDetailDictionary,
            (Il2CppObject *)v19,
            (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_RestrictionEntity__Contains__) )
      return RestrictionEntity__IsRestriction_43144004(v19, individuality, 0);
    IsSearchVals = RestrictionEntity__IsSearchVals(v19, 0, 0);
    LOBYTE(v14) = 0;
    if ( !IsSearchVals )
      return RestrictionEntity__IsRestriction_43144004(v19, individuality, 0);
  }
  return v14 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsRestrictionSlot(
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
  return QuestRestrictionInfo__IsRestrictionSlot_43955412(this, ServantIndividuality, initPos, v14);
}


bool QuestRestrictionInfo__IsRestrictionSlot_43955412(
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
  if ( (byte_4CEF9A6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    byte_4CEF9A6 = 1;
  }
  v7 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v6->fields.slotInfos;
    if ( !slotInfos )
LABEL_27:
      sub_1C7BD40(this, svtIndividuality);
    v9 = 0;
    v10 = 0;
    while ( v7 < LODWORD(slotInfos->max_length) )
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
                                         (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_int____get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->fields.dialogMessageInfoDictionary )
      {
        v12 = System_Linq_Enumerable__Intersect_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this,
                (System_Collections_Generic_IEnumerable_TSource__o *)svtIndividuality,
                (const MethodInfo_31999AC *)Method_System_Linq_Enumerable_Intersect_int___);
        this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_int_(
                                           v12,
                                           (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
        v13 = v6->fields.slotInfos;
        if ( !v13 )
          goto LABEL_27;
        if ( v7 >= LODWORD(v13->max_length) )
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
                                           (const MethodInfo_3824314 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
        if ( (_DWORD)this == 1 )
        {
          this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                             (const MethodInfo_317BCD4 *)Method_System_Linq_Enumerable_Any_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 0;
        }
        else
        {
          v16 = v6->fields.slotInfos;
          if ( !v16 )
            goto LABEL_27;
          if ( v7 >= LODWORD(v16->max_length) )
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
                                             (const MethodInfo_3824314 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)this == 2 )
          {
            this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                               (const MethodInfo_317BCD4 *)Method_System_Linq_Enumerable_Any_int___);
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
    sub_1C7BD48(this);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsRestriction_43954684(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t rarity,
        int32_t lv,
        int32_t targetType,
        const MethodInfo *method)
{
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

  if ( (byte_4CEF9A4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_int___);
    byte_4CEF9A4 = 1;
  }
  isWhole = 0;
  IsRestrictionIndividualityWhole = QuestRestrictionInfo__IsRestrictionIndividualityWhole(
                                      this,
                                      *(const MethodInfo **)&svtId);
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
      sub_1C51BD8(Method_System_Array_Empty_int___);
      v21 = v20[7];
    }
    v22 = *(_QWORD *)(v21 + 16);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C51B7C(inited);
    if ( !*(_DWORD *)(v22 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v22);
    v23 = *(_QWORD *)(v20[7] + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C51B7C(inited);
    ServantIndividuality = **(System_Int32_array ***)(v23 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_43954944(this, &isWhole, ServantIndividuality, rarity, lv, targetType, v17);
}


bool QuestRestrictionInfo__IsRestriction_43954944(
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
      sub_1C7BD40(this, isWhole);
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
      return 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
LABEL_29:
        sub_1C7BD48(this);
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
        this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction(v20, v21, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
        goto LABEL_25;
      }
      if ( type == 1 )
      {
        this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestrictionTarget(v18, targetType, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction_43144004(v18, svtIndividuality, 0);
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
                                         0);
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


bool QuestRestrictionInfo__IsRestriction_43955916(
        QuestRestrictionInfo_o *this,
        bool *isWhole,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t rarity,
        int32_t lv,
        int32_t initPos,
        int32_t targetType,
        const MethodInfo *method)
{
  _BOOL8 IsRestrictionIndividualityWhole; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x7
  long double inited; // q0
  System_Int32_array *ServantIndividuality; // x2
  _QWORD *v24; // x25
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0

  if ( (byte_4CEF9A5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_int___);
    byte_4CEF9A5 = 1;
  }
  IsRestrictionIndividualityWhole = QuestRestrictionInfo__IsRestrictionIndividualityWhole(
                                      this,
                                      (const MethodInfo *)isWhole);
  if ( IsRestrictionIndividualityWhole
    || (IsRestrictionIndividualityWhole = QuestRestrictionInfo__IsRestrictionIndividualitySlot(this, v19)) )
  {
    ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                             (QuestRestrictionInfo_o *)IsRestrictionIndividualityWhole,
                             svtId,
                             limitCount,
                             dispLimitCount,
                             v20);
  }
  else
  {
    v24 = Method_System_Array_Empty_int___;
    v25 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v25 )
    {
      sub_1C51BD8(Method_System_Array_Empty_int___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1C51B7C(inited);
    if ( !*(_DWORD *)(v26 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v26);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C51B7C(inited);
    ServantIndividuality = **(System_Int32_array ***)(v27 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_43956196(
           this,
           isWhole,
           ServantIndividuality,
           rarity,
           lv,
           initPos,
           targetType,
           v21);
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsRestriction_43956196(
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

  if ( QuestRestrictionInfo__IsRestriction_43954944(
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
    return QuestRestrictionInfo__IsRestrictionSlot_43955412(this, svtIndividuality, initPos, v11);
  return 0;
}


bool QuestRestrictionInfo__IsSelectableNormalSupport(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x21
  _BOOL8 IsMyServantOrNpcRestriction_43975148; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v10; // w9
  QuestRestrictionInfo_SlotInfo_o *v11; // x8
  bool v12; // zf
  Il2CppObject *v13; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_4CEF9C8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C7BAE8(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__DisplayClass185_0__IsSelectableNormalSupport_b__0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo);
    byte_4CEF9C8 = 1;
  }
  v5 = sub_1C7BD34(QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_DWORD *)(v5 + 16) = pos;
  IsMyServantOrNpcRestriction_43975148 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43975148(this, pos, v8);
  if ( !IsMyServantOrNpcRestriction_43975148 )
  {
    LOBYTE(v13) = 0;
    return (char)v13;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    v15 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v15,
      (Il2CppObject *)v5,
      Method_QuestRestrictionInfo___c__DisplayClass185_0__IsSelectableNormalSupport_b__0__,
      0);
    if ( myServantOrNpcRestrictionEntityList )
    {
      v13 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v15,
              (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v13 )
        return (char)v13;
      v12 = ((__int64)v13[2].klass & 0xFFFFFFF7) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_1C7BD40(IsMyServantOrNpcRestriction_43975148, v7);
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v10 = *(_DWORD *)(v5 + 16) - 1;
  if ( (unsigned int)v10 >= LODWORD(slotInfos->max_length) )
    sub_1C7BD48(IsMyServantOrNpcRestriction_43975148);
  v11 = slotInfos->m_Items[v10];
  if ( !v11 )
    goto LABEL_18;
  v12 = v11->fields.slotType == 4;
LABEL_14:
  LOBYTE(v13) = v12;
  return (char)v13;
}


bool QuestRestrictionInfo__IsServantNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.servantNumMax > 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsServantNumAndFixedServantPositionRestriction(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t pos,
        const MethodInfo *method)
{
  int32_t servantNumMax; // w8
  void *IsMyServantOrNpcRestriction_43975148; // x0
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

  if ( (byte_4CEF9C3 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    byte_4CEF9C3 = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  IsMyServantOrNpcRestriction_43975148 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    IsMyServantOrNpcRestriction_43975148 = BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    p_myServantNumMax = (int32_t *)(*((_QWORD *)IsMyServantOrNpcRestriction_43975148 + 23) + 172LL);
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
  IsMyServantOrNpcRestriction_43975148 = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43975148(
                                                   this,
                                                   pos,
                                                   *(const MethodInfo **)&pos);
  if ( ((unsigned __int8)IsMyServantOrNpcRestriction_43975148 & 1) != 0 )
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
            sub_1C7BD48(IsMyServantOrNpcRestriction_43975148);
          v24 = targetVals->m_Items[v22];
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
    sub_1C7BD40(IsMyServantOrNpcRestriction_43975148, *(_QWORD *)&svtId);
  }
  IsMyServantOrNpcRestriction_43975148 = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                           this,
                                           *(const MethodInfo **)&svtId);
  if ( !IsMyServantOrNpcRestriction_43975148 )
    goto LABEL_44;
  v13 = *((_DWORD *)IsMyServantOrNpcRestriction_43975148 + 6);
  if ( v13 < 1 )
    return 1;
  v14 = 0;
  v15 = -v13;
  do
  {
    if ( !(v15 + v14) )
      goto LABEL_43;
    v16 = *((_DWORD *)IsMyServantOrNpcRestriction_43975148 + v14 + 8);
    if ( v16 == svtId )
      break;
    v17 = v15 + v14++;
  }
  while ( v17 != -1 );
  v18 = v16 == svtId;
  return !v18;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsSetRequired(
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
  if ( (byte_4CEF9D7 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C7BAE8(&BalanceConfig_TypeInfo);
    byte_4CEF9D7 = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( slotInfos )
  {
    if ( (unsigned int)(initPos - 1) >= LODWORD(slotInfos->max_length) )
      sub_1C7BD48(this);
    v8 = slotInfos->m_Items[initPos - 1];
    if ( !v8 )
      sub_1C7BD40(this, *(_QWORD *)&pos);
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


bool QuestRestrictionInfo__IsSlotRestrictionForSupport(
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

  if ( (byte_4CEF9DE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF9DE = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       svtId,
                                       (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_33;
    Instance = ServantEntity__getIndividuality((ServantEntity_o *)Instance, limitCount, dispLimitCount, 0);
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
          sub_1C7BD48(Instance);
        v16 = slotInfos->m_Items[v14];
        if ( !v16 )
          break;
        if ( v16->fields.slotType == 2 )
        {
          Instance = (System_Int32_array *)v16->fields.individualityList;
          if ( !Instance )
            break;
          v17 = 0;
          while ( v17 < SLODWORD(Instance->max_length) )
          {
            Instance = (System_Int32_array *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)Instance,
                                               v17,
                                               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_int____get_Item__);
            if ( !Instance )
              goto LABEL_33;
            if ( Instance->max_length )
            {
              Instance = (System_Int32_array *)v16->fields.individualityList;
              if ( !Instance )
                goto LABEL_33;
              Item = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Instance,
                       v17,
                       (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_int____get_Item__);
              v19 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)Item,
                      v13,
                      (const MethodInfo_31999AC *)Method_System_Linq_Enumerable_Intersect_int___);
              Instance = System_Linq_Enumerable__ToArray_int_(
                           v19,
                           (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
              if ( !v16->fields.rangeTypeList )
                goto LABEL_33;
              v20 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              if ( System_Collections_Generic_List_Int32Enum___get_Item(
                     (System_Collections_Generic_List_T__o *)v16->fields.rangeTypeList,
                     v17,
                     (const MethodInfo_3824314 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
              {
                if ( System_Linq_Enumerable__Any_int_(
                       v20,
                       (const MethodInfo_317BCD4 *)Method_System_Linq_Enumerable_Any_int___) )
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
                       (const MethodInfo_3824314 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 2
                  && !System_Linq_Enumerable__Any_int_(
                        v20,
                        (const MethodInfo_317BCD4 *)Method_System_Linq_Enumerable_Any_int___) )
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
      sub_1C7BD40(Instance, v10);
    }
  }
  return 0;
}


bool QuestRestrictionInfo__IsSupportOnly(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.supportOnlyRestrictionEntity != 0;
}


bool QuestRestrictionInfo__IsSupportOnlyForceBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isSupportOnlyForceBattle;
}


bool QuestRestrictionInfo__IsUniqueIndividuality(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isUniqueIndividuality;
}


bool QuestRestrictionInfo__IsUniqueIndividuality_43958988(
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
  il2cpp_array_size_t max_length; // x8
  BalanceConfig_c **v19; // x20
  const MethodInfo_34308A4 **v20; // x26
  const MethodInfo_318C6F4 **v21; // x24
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
  const MethodInfo_318C6F4 **v32; // x27
  Il2CppObject *v33; // x24
  BalanceConfig_c **v34; // x23
  Il2CppObject *v35; // x20
  const MethodInfo_34308A4 **v36; // x22
  DataManager_o *v37; // x28
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x26
  struct System_Byte_array *masterDataBytes; // x29
  int32_t v40; // w0
  Il2CppObject *v41; // x0
  int32_t saveNameList; // w29
  int32_t m_CancellationTokenSource_high; // w26
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

  if ( (byte_4CEF9AD & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF9AD = 1;
  }
  v57 = 0;
  entity = 0;
  v56 = 0;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_71;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo
    || (Instance = (DataManager_o *)FollowerInfo__get_IsNpc(npcFollowerInfo, 0), ((unsigned __int8)Instance & 1) == 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_82;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_82;
    dispLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                       (ServantLimitImageMaster_o *)Instance,
                       svtId,
                       dispLimitCount,
                       0);
    goto LABEL_16;
  }
  if ( !v12 )
    goto LABEL_82;
  Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                                &entity,
                                npcFollowerInfo->fields.npcFollowerSvtId,
                                (const MethodInfo_34308A4 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !Master_object )
      goto LABEL_82;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &v57,
           npcFollowerInfo->fields.npcFollowerSvtId,
           (const MethodInfo_34308A4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
    {
      Instance = (DataManager_o *)v57;
      if ( !v57 )
        goto LABEL_82;
      if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v57, 0) )
      {
        Instance = (DataManager_o *)v57;
        if ( !v57 )
          goto LABEL_82;
        OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                   (NpcServantFollowerEntity_o *)v57,
                                   0);
        goto LABEL_80;
      }
    }
LABEL_16:
    source = 0;
    goto LABEL_17;
  }
  OverwriteIndividuality = FollowerInfo__GetNpcServantIndividuality(npcFollowerInfo, 0, 0, 0);
LABEL_80:
  source = (System_Collections_Generic_IEnumerable_TSource__o *)OverwriteIndividuality;
LABEL_17:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      svtId,
                                      (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0) )
  {
LABEL_82:
    sub_1C7BD40(Instance, v14);
  }
  max_length = uniqueIndividualitys->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_71:
    LOBYTE(Instance) = 0;
    return (char)Instance;
  }
  v51 = (ServantEntity_o *)Instance;
  v49 = dispLimitCount;
  v50 = limitCount;
  v19 = &BalanceConfig_TypeInfo;
  v20 = (const MethodInfo_34308A4 **)&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__;
  v21 = (const MethodInfo_318C6F4 **)&Method_System_Linq_Enumerable_Contains_int___;
  v22 = 0;
  v52 = this->fields.uniqueIndividualitys;
  v55 = this;
  while ( 1 )
  {
    if ( v22 >= (unsigned int)max_length )
LABEL_83:
      sub_1C7BD48(Instance);
    v23 = uniqueIndividualitys->m_Items[v22];
    v54 = v22;
    if ( !source )
      break;
    if ( System_Linq_Enumerable__Contains_int_(source, v23, *v21) )
      goto LABEL_29;
LABEL_69:
    uniqueIndividualitys = v52;
    Instance = 0;
    LODWORD(max_length) = v52->max_length;
    v22 = v54 + 1;
    if ( (__int64)(v54 + 1) >= (int)max_length )
      return (char)Instance;
  }
  Instance = (DataManager_o *)v51;
  if ( !v51 )
    goto LABEL_82;
  if ( !ServantEntity__IsIndividuality(v51, v50, v49, v23, 0) )
    goto LABEL_69;
LABEL_29:
  for ( i = 0; ; ++i )
  {
    Instance = (DataManager_o *)*v19;
    if ( !(*v19)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (DataManager_o *)*v19;
    }
    if ( (__int64)i >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 172LL) )
      goto LABEL_69;
    deckNpcInfoList = this->fields.deckNpcInfoList;
    if ( !deckNpcInfoList )
      goto LABEL_82;
    if ( i >= LODWORD(deckNpcInfoList->max_length) )
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
      if ( i >= LODWORD(v27->max_length) )
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
                                                                                         0);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_82;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &v56,
                                      v28->fields.npcFollowerSvtId,
                                      (const MethodInfo_34308A4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_48;
        Instance = (DataManager_o *)v56;
        if ( !v56 )
          goto LABEL_82;
        Instance = (DataManager_o *)NpcServantFollowerEntity__IsOverwriteIndividuality(
                                      (NpcServantFollowerEntity_o *)v56,
                                      0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)v56;
          if ( !v56 )
            goto LABEL_82;
          NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantFollowerEntity__GetOverwriteIndividuality(
                                                                                           (NpcServantFollowerEntity_o *)v56,
                                                                                           0);
        }
        else
        {
LABEL_48:
          v30 = this->fields.deckNpcInfoList;
          if ( !v30 )
            goto LABEL_82;
          if ( i >= LODWORD(v30->max_length) )
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
          Instance = (DataManager_o *)FollowerInfo__getServantLeaderInfo((FollowerInfo_o *)Instance, 0, 0, 0);
          if ( !Instance )
            goto LABEL_82;
          v37 = Instance;
          lookup = Instance->fields.lookup;
          masterDataBytes = Instance->fields.masterDataBytes;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v59.fields.currentCryptoKey = lookup;
          *(_QWORD *)&v59.fields.fakeValue = masterDataBytes;
          v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v59, 0);
          v41 = DataMasterBase_object__object__int___GetEntity(
                  v16,
                  v40,
                  (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          saveNameList = (int32_t)v37->fields.saveNameList;
          m_CancellationTokenSource_high = HIDWORD(v37[1].fields.m_CancellationTokenSource);
          v44 = (ServantEntity_o *)v41;
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          Instance = (DataManager_o *)ImageLimitCount__ConvertDispLimitCountForClient(m_CancellationTokenSource_high, 0);
          if ( !v44 )
            goto LABEL_82;
          NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                           v44,
                                                                                           saveNameList,
                                                                                           (int32_t)Instance,
                                                                                           0);
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
    if ( i >= LODWORD(deckSvtIdList->max_length) )
      goto LABEL_83;
    v14 = (unsigned int)deckSvtIdList->m_Items[i];
    if ( (int)v14 >= 1 )
    {
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    v16,
                                    v14,
                                    (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      deckLimitCountList = this->fields.deckLimitCountList;
      if ( !deckLimitCountList )
        goto LABEL_82;
      if ( i >= LODWORD(deckLimitCountList->max_length) )
        goto LABEL_83;
      deckDispLimitCountList = this->fields.deckDispLimitCountList;
      if ( !deckDispLimitCountList )
        goto LABEL_82;
      if ( i >= LODWORD(deckDispLimitCountList->max_length) )
        goto LABEL_83;
      if ( !Instance )
        goto LABEL_82;
      if ( ServantEntity__IsIndividuality(
             (ServantEntity_o *)Instance,
             deckLimitCountList->m_Items[i],
             deckDispLimitCountList->m_Items[i],
             v23,
             0) )
      {
        break;
      }
    }
  }
  LOBYTE(Instance) = 1;
  return (char)Instance;
}


bool QuestRestrictionInfo__IsUniqueIndividuality_43960472(
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
  il2cpp_array_size_t max_length; // x8
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

  if ( (byte_4CEF9AE & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF9AE = 1;
  }
  v50 = 0;
  entity = 0;
  v48 = 0;
  v49 = 0;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo || !FollowerInfo__get_IsNpc(npcFollowerInfo, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_75;
    dispLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                       (ServantLimitImageMaster_o *)Instance,
                       svtId,
                       dispLimitCount,
                       0);
    goto LABEL_16;
  }
  Instance = v47;
  if ( !v47 )
    goto LABEL_75;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          v47,
          &entity,
          npcFollowerInfo->fields.npcFollowerSvtId,
          (const MethodInfo_34308A4 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    Instance = Master_object;
    if ( !Master_object )
      goto LABEL_75;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           Master_object,
           &v50,
           npcFollowerInfo->fields.npcFollowerSvtId,
           (const MethodInfo_34308A4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
    {
      Instance = v50;
      if ( !v50 )
        goto LABEL_75;
      if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v50, 0) )
      {
        Instance = v50;
        if ( !v50 )
          goto LABEL_75;
        OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                   (NpcServantFollowerEntity_o *)v50,
                                   0);
        goto LABEL_73;
      }
    }
LABEL_16:
    source = 0;
    goto LABEL_17;
  }
  OverwriteIndividuality = FollowerInfo__GetNpcServantIndividuality(npcFollowerInfo, 0, 0, 0);
LABEL_73:
  source = (System_Collections_Generic_IEnumerable_TSource__o *)OverwriteIndividuality;
LABEL_17:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0) )
  {
LABEL_75:
    sub_1C7BD40(Instance, v17);
  }
  max_length = uniqueIndividualitys->max_length;
  if ( (int)max_length >= 1 )
  {
    v43 = (ServantEntity_o *)Instance;
    v42 = limitCount;
    v23 = 0;
    v44 = this->fields.uniqueIndividualitys;
    do
    {
      if ( v23 >= (unsigned int)max_length )
        sub_1C7BD48(Instance);
      v24 = uniqueIndividualitys->m_Items[v23];
      if ( source )
      {
        Instance = (void *)System_Linq_Enumerable__Contains_int_(
                             source,
                             v24,
                             (const MethodInfo_318C6F4 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          goto LABEL_29;
      }
      else
      {
        Instance = v43;
        if ( !v43 )
          goto LABEL_75;
        Instance = (void *)ServantEntity__IsIndividuality(v43, v42, dispLimitCount, v24, 0);
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
            if ( i >= *(_DWORD *)(*((_QWORD *)Instance + 23) + 172LL) )
              break;
            if ( num != i && partyIndex != i )
            {
              if ( !partyItem )
                goto LABEL_75;
              Instance = PartyListViewItem__GetMember(partyItem, i, 0);
              if ( !Instance )
                goto LABEL_75;
              v26 = (FollowerInfo_o *)*((_QWORD *)Instance + 16);
              v27 = (PartyOrganizationListViewItem_o *)Instance;
              if ( v26 && FollowerInfo__get_IsNpc(*((FollowerInfo_o **)Instance + 16), 0) )
              {
                Instance = v47;
                if ( !v47 )
                  goto LABEL_75;
                if ( DataMasterBase_object__object__long___TryGetEntity(
                       v47,
                       &entity,
                       v26->fields.npcFollowerSvtId,
                       (const MethodInfo_34308A4 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
                {
                  NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)FollowerInfo__GetNpcServantIndividuality(
                                                                                                   v26,
                                                                                                   0,
                                                                                                   0,
                                                                                                   0);
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
                          (const MethodInfo_34308A4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
                    goto LABEL_54;
                  Instance = v49;
                  if ( !v49 )
                    goto LABEL_75;
                  if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v49, 0) )
                  {
                    Instance = v49;
                    if ( !v49 )
                      goto LABEL_75;
                    NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantFollowerEntity__GetOverwriteIndividuality(
                                                                                                     (NpcServantFollowerEntity_o *)v49,
                                                                                                     0);
                  }
                  else
                  {
LABEL_54:
                    Instance = FollowerInfo__getServantLeaderInfo(v26, 0, 0, 0);
                    if ( !Instance )
                      goto LABEL_75;
                    v33 = Instance;
                    v35 = *((_QWORD *)Instance + 6);
                    v34 = *((_QWORD *)Instance + 7);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v52.fields.currentCryptoKey = v35;
                    *(_QWORD *)&v52.fields.fakeValue = v34;
                    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v52, 0);
                    v37 = DataMasterBase_object__object__int___GetEntity(
                            v20,
                            v36,
                            (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                    v38 = v33[16];
                    v39 = v33[45];
                    v40 = (ServantEntity_o *)v37;
                    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                    Instance = (void *)ImageLimitCount__ConvertDispLimitCountForClient(v39, 0);
                    if ( !v40 )
                      goto LABEL_75;
                    NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                                     v40,
                                                                                                     v38,
                                                                                                     (int32_t)Instance,
                                                                                                     0);
                  }
                }
                if ( System_Linq_Enumerable__Contains_int_(
                       NpcServantIndividuality,
                       v24,
                       (const MethodInfo_318C6F4 *)Method_System_Linq_Enumerable_Contains_int___) )
                {
                  return 1;
                }
              }
              else
              {
                v29 = PartyOrganizationListViewItem__get_SvtId(v27, 0);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v29, 0);
                if ( DataMasterBase_object__object__int___TryGetEntity(
                       v20,
                       &v48,
                       v30,
                       (const MethodInfo_342E348 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
                {
                  v31 = v48;
                  svtLimitCount = v27->fields.svtLimitCount;
                  Instance = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(v27, 0);
                  if ( !v31 )
                    goto LABEL_75;
                  if ( ServantEntity__IsIndividuality((ServantEntity_o *)v31, svtLimitCount, (int32_t)Instance, v24, 0) )
                    return 1;
                }
              }
            }
          }
        }
      }
      uniqueIndividualitys = v44;
      ++v23;
      LODWORD(max_length) = v44->max_length;
    }
    while ( (__int64)v23 < (int)max_length );
  }
  return 0;
}


bool QuestRestrictionInfo__IsUniqueServant(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsUniqueServant_43958460(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  bool isUniqueServant; // w8
  int32_t v6; // w22
  BalanceConfig_c *v7; // x0
  struct System_Int32_array *deckSvtIdList; // x9
  int32_t v9; // w9

  if ( (byte_4CEF9AB & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    byte_4CEF9AB = 1;
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
            sub_1C7BD40(v7, *(_QWORD *)&svtId);
          if ( (unsigned int)v6 >= LODWORD(deckSvtIdList->max_length) )
            sub_1C7BD48(v7);
          v9 = deckSvtIdList->m_Items[v6++];
        }
        while ( v9 != svtId );
      }
    }
  }
  return isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsUniqueServant_43958660(
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
  int32_t totalCostRestrictionEntity_high; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // kr00_16

  if ( (byte_4CEF9AC & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEF9AC = 1;
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
      totalCostRestrictionEntity_high = HIDWORD(Member->fields.questRestrictionInfo->fields.totalCostRestrictionEntity);
      v11 = i < totalCostRestrictionEntity_high;
      if ( i >= totalCostRestrictionEntity_high )
        break;
      if ( num != i && partyIndex != i )
      {
        if ( !partyItem || (Member = PartyListViewItem__GetMember(partyItem, i, 0)) == 0 )
          sub_1C7BD40(Member, *(_QWORD *)&svtId);
        v15 = PartyOrganizationListViewItem__get_SvtId(Member, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v15, 0) == svtId )
          break;
      }
    }
  }
  return v11;
}


bool QuestRestrictionInfo__IsUseEventDeck(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.eventDeckNum > 0;
}


bool QuestRestrictionInfo__IsUseOldMaster(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.restrictionBaseEntity == 0;
}


bool QuestRestrictionInfo__IsWaveSetupSwitchParty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v4; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEF9E4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CEF9E4 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_11:
    sub_1C7BD40(Master_object, v4);
  return QuestPhaseEntity__IsWaveSetupSwitchParty(entity, 0);
}


void QuestRestrictionInfo__ResetDeckInfo(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int32_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct FollowerInfo_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x1

  if ( (byte_4CEF99B & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&FollowerInfo___TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    byte_4CEF99B = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_1C7BB90(int___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.deckSvtIdList = v4;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.deckSvtIdList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct FollowerInfo_array *)sub_1C7BB90(
                                       FollowerInfo___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
  this->fields.deckNpcInfoList = v11;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.deckNpcInfoList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, v18);
}


void QuestRestrictionInfo__SetDeckInfo(
        QuestRestrictionInfo_o *this,
        UserDeckEntity_o *userDeckEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  unsigned __int64 v6; // x22
  __int64 v7; // x26
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x28
  __int64 NpcFollowerServantId; // x0
  struct System_Int32_array *deckSvtIdList; // x8
  struct FollowerInfo_array *deckNpcInfoList; // x8
  unsigned __int64 max_length_low; // x9
  struct FollowerInfo_array *v20; // x8
  unsigned int *v21; // x24
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x23
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

  if ( (byte_4CEF998 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEF998 = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtIdList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v6 = 0;
    v7 = 8;
    v15 = (unsigned int)UserDeckEntity__GetFollowerIndex(userDeckEntity, 0) - 1LL;
    while ( 1 )
    {
      NpcFollowerServantId = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        NpcFollowerServantId = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v6 >= *(int *)(*(_QWORD *)(NpcFollowerServantId + 184) + 172LL) )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_44;
      if ( v6 >= LODWORD(deckSvtIdList->max_length) )
        goto LABEL_43;
      deckSvtIdList->m_Items[v6] = 0;
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList )
      {
        max_length_low = LODWORD(deckNpcInfoList->max_length);
        if ( (__int64)v6 < (int)max_length_low )
        {
          if ( v6 >= max_length_low )
            goto LABEL_43;
          deckNpcInfoList->m_Items[v6] = 0;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)((char *)deckNpcInfoList + v7 * 4), 0, v9, v10, v11, v12, v13, v14);
        }
      }
      if ( v15 != v6 )
      {
        v20 = this->fields.deckNpcInfoList;
        if ( v20 )
        {
          if ( (__int64)v6 < SLODWORD(v20->max_length) )
          {
            NpcFollowerServantId = UserDeckEntity__GetNpcFollowerServantId(userDeckEntity, v6, 0);
            if ( NpcFollowerServantId >= 1 )
            {
              if ( !Master_object )
                goto LABEL_44;
              NpcFollowerServantId = (__int64)NpcFollowerMaster__GetEntity_42984448(
                                                (NpcFollowerMaster_o *)Master_object,
                                                this->fields.questId,
                                                this->fields.questPhase,
                                                NpcFollowerServantId,
                                                0);
              if ( !NpcFollowerServantId )
                goto LABEL_44;
              v21 = (unsigned int *)this->fields.deckNpcInfoList;
              NpcFollowerServantId = (__int64)NpcFollowerMaster__GetFollower(
                                                (NpcFollowerMaster_o *)Master_object,
                                                this->fields.questId,
                                                this->fields.questPhase,
                                                *(_QWORD *)(NpcFollowerServantId + 16),
                                                0);
              if ( !v21 )
                goto LABEL_44;
              v28 = NpcFollowerServantId;
              if ( NpcFollowerServantId )
              {
                NpcFollowerServantId = sub_1C7BC24(NpcFollowerServantId, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
                if ( !NpcFollowerServantId )
                {
                  v38 = sub_1C7BD64(0);
                  sub_1C7BC10(v38, 0);
                }
              }
              if ( v6 >= v21[6] )
LABEL_43:
                sub_1C7BD48(NpcFollowerServantId);
              *(_QWORD *)&v21[2 * v6 + 8] = v28;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v21[v7], v28, v22, v23, v24, v25, v26, v27);
            }
          }
        }
        UserServant = UserDeckEntity__GetUserServant(userDeckEntity, v6, 0);
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
          NpcFollowerServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v39, 0);
          if ( !v31 )
LABEL_44:
            sub_1C7BD40(NpcFollowerServantId, v8);
          if ( v6 >= LODWORD(v31->max_length) )
            goto LABEL_43;
          v31->m_Items[v6] = NpcFollowerServantId;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v36 = *(_QWORD *)&v30->fields.limitCount.fields.currentCryptoKey;
            v35 = *(_QWORD *)&v30->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v40.fields.currentCryptoKey = v36;
            *(_QWORD *)&v40.fields.fakeValue = v35;
            NpcFollowerServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v40, 0);
            if ( v6 >= LODWORD(deckLimitCountList->max_length) )
              goto LABEL_43;
            deckLimitCountList->m_Items[v6] = NpcFollowerServantId;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            NpcFollowerServantId = UserServantEntity__getDispLimitCount(v30, 0, 0);
            if ( v6 >= LODWORD(deckDispLimitCountList->max_length) )
              goto LABEL_43;
            deckDispLimitCountList->m_Items[v6] = NpcFollowerServantId;
          }
        }
      }
      ++v6;
      v7 += 2;
    }
  }
}


void QuestRestrictionInfo__SetDeckInfo_43947672(
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct FollowerInfo_array *v20; // x8
  struct FollowerInfo_array *v21; // x8
  int64_t NpcFollowerServantId; // x0
  int64_t v23; // x3
  NpcFollowerEntity_o *Entity_42984448; // x0
  unsigned int *v25; // x25
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  __int64 v32; // x24
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

  if ( (byte_4CEF999 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEF999 = 1;
  }
  fixed = QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, (const MethodInfo *)eventDeckEntity);
  if ( eventDeckEntity && this->fields.deckSvtIdList )
  {
    v6 = fixed;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v7 = 0;
    v8 = 8;
    v10 = (unsigned int)UserEventDeckEntity__GetFollowerIndex(eventDeckEntity, 0) - 1LL;
    while ( 1 )
    {
      Follower = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Follower = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v7 >= *(int *)(*(_QWORD *)(Follower + 184) + 172LL) )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_48;
      if ( v7 >= LODWORD(deckSvtIdList->max_length) )
        goto LABEL_49;
      deckSvtIdList->m_Items[v7] = 0;
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList && (__int64)v7 < SLODWORD(deckNpcInfoList->max_length) )
      {
        if ( !v6 )
          goto LABEL_48;
        Follower = System_Collections_Generic_List_int___Contains(
                     v6,
                     v7,
                     (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Follower & 1) == 0 )
        {
          v20 = this->fields.deckNpcInfoList;
          if ( !v20 )
            goto LABEL_48;
          if ( v7 >= LODWORD(v20->max_length) )
            goto LABEL_49;
          v20->m_Items[v7] = 0;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)((char *)v20 + v8 * 4), 0, v14, v15, v16, v17, v18, v19);
        }
      }
      if ( v10 != v7 )
      {
        v21 = this->fields.deckNpcInfoList;
        if ( v21 && (__int64)v7 < SLODWORD(v21->max_length) )
        {
          if ( !v6 )
            goto LABEL_48;
          if ( !System_Collections_Generic_List_int___Contains(
                  v6,
                  v7,
                  (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            NpcFollowerServantId = UserEventDeckEntity__GetNpcFollowerServantId(eventDeckEntity, v7, 0);
            if ( NpcFollowerServantId >= 1 )
            {
              v23 = NpcFollowerServantId;
              Follower = (__int64)Master_object;
              if ( !Master_object )
                goto LABEL_48;
              Entity_42984448 = NpcFollowerMaster__GetEntity_42984448(
                                  Master_object,
                                  this->fields.questId,
                                  this->fields.questPhase,
                                  v23,
                                  0);
              if ( Entity_42984448 )
              {
                v25 = (unsigned int *)this->fields.deckNpcInfoList;
                Follower = (__int64)NpcFollowerMaster__GetFollower(
                                      Master_object,
                                      this->fields.questId,
                                      this->fields.questPhase,
                                      Entity_42984448->fields.id,
                                      0);
                if ( !v25 )
                  goto LABEL_48;
                v32 = Follower;
                if ( Follower )
                {
                  Follower = sub_1C7BC24(Follower, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
                  if ( !Follower )
                  {
                    v42 = sub_1C7BD64(0);
                    sub_1C7BC10(v42, 0);
                  }
                }
                if ( v7 >= v25[6] )
                  goto LABEL_49;
                *(_QWORD *)&v25[2 * v7 + 8] = v32;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25[v8], v32, v26, v27, v28, v29, v30, v31);
              }
            }
          }
        }
        UserServant = UserEventDeckEntity__GetUserServant(eventDeckEntity, v7, 0);
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
          Follower = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v44, 0);
          if ( !v35 )
LABEL_48:
            sub_1C7BD40(Follower, v9);
          if ( v7 >= LODWORD(v35->max_length) )
LABEL_49:
            sub_1C7BD48(Follower);
          v35->m_Items[v7] = Follower;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v40 = *(_QWORD *)&v34->fields.limitCount.fields.currentCryptoKey;
            v39 = *(_QWORD *)&v34->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v45.fields.currentCryptoKey = v40;
            *(_QWORD *)&v45.fields.fakeValue = v39;
            Follower = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v45, 0);
            if ( v7 >= LODWORD(deckLimitCountList->max_length) )
              goto LABEL_49;
            deckLimitCountList->m_Items[v7] = Follower;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            Follower = UserServantEntity__getDispLimitCount(v34, 0, 0);
            if ( v7 >= LODWORD(deckDispLimitCountList->max_length) )
              goto LABEL_49;
            deckDispLimitCountList->m_Items[v7] = Follower;
          }
        }
      }
      ++v7;
      v8 += 2;
    }
  }
}


void QuestRestrictionInfo__SetDeckInfo_43949024(
        QuestRestrictionInfo_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  unsigned __int64 v11; // x21
  unsigned __int64 v12; // x27
  __int64 i; // x28
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_array *deckNpcInfoList; // x8
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *deckSvtIdList; // x8
  struct System_Int32_array *v18; // x29
  PartyOrganizationListViewItem_o *v19; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x23
  struct FollowerInfo_array *v23; // x8
  FollowerInfo_o *followerInfo; // x0
  unsigned int *v25; // x23
  struct FollowerInfo_o *v26; // x22
  __int64 v27; // x0

  if ( (byte_4CEF99A & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEF99A = 1;
  }
  if ( this->fields.deckSvtIdList )
  {
    v11 = 0;
    v12 = (unsigned int)num;
    for ( i = 8; ; i += 2 )
    {
      Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v11 >= SHIDWORD(Member->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
        break;
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList )
      {
        max_length_low = LODWORD(deckNpcInfoList->max_length);
        if ( (__int64)v11 < (int)max_length_low )
        {
          if ( v11 >= max_length_low )
            goto LABEL_40;
          deckNpcInfoList->m_Items[v11] = 0;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)((char *)deckNpcInfoList + i * 4),
            0,
            num,
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
        if ( LODWORD(deckSvtIdList->max_length) <= v12 )
          goto LABEL_40;
        deckSvtIdList->m_Items[v12] = 0;
      }
      else
      {
        if ( !partyItem )
          goto LABEL_39;
        Member = PartyListViewItem__GetMember(partyItem, v11, 0);
        if ( !Member )
          goto LABEL_39;
        v18 = this->fields.deckSvtIdList;
        v19 = Member;
        SvtId = PartyOrganizationListViewItem__get_SvtId(Member, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Member = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                      SvtId,
                                                      0);
        if ( !v18 )
LABEL_39:
          sub_1C7BD40(Member, partyItem);
        if ( v11 >= LODWORD(v18->max_length) )
          goto LABEL_40;
        v18->m_Items[v11] = (int)Member;
        deckLimitCountList = this->fields.deckLimitCountList;
        if ( deckLimitCountList )
        {
          if ( v11 >= LODWORD(deckLimitCountList->max_length) )
            goto LABEL_40;
          deckLimitCountList->m_Items[v11] = v19->fields.svtLimitCount;
        }
        deckDispLimitCountList = this->fields.deckDispLimitCountList;
        if ( deckDispLimitCountList )
        {
          Member = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v19, 0);
          if ( v11 >= LODWORD(deckDispLimitCountList->max_length) )
            goto LABEL_40;
          deckDispLimitCountList->m_Items[v11] = (int)Member;
        }
        v23 = this->fields.deckNpcInfoList;
        if ( v23 )
        {
          if ( (__int64)v11 < SLODWORD(v23->max_length) )
          {
            followerInfo = v19->fields.followerInfo;
            if ( followerInfo )
            {
              Member = (PartyOrganizationListViewItem_o *)FollowerInfo__get_IsNpc(followerInfo, 0);
              if ( ((unsigned __int8)Member & 1) != 0 )
              {
                v25 = (unsigned int *)this->fields.deckNpcInfoList;
                if ( !v25 )
                  goto LABEL_39;
                v26 = v19->fields.followerInfo;
                if ( v26 )
                {
                  Member = (PartyOrganizationListViewItem_o *)sub_1C7BC24(v26, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
                  if ( !Member )
                  {
                    v27 = sub_1C7BD64(0);
                    sub_1C7BC10(v27, 0);
                  }
                }
                if ( v11 >= v25[6] )
LABEL_40:
                  sub_1C7BD48(Member);
                *(_QWORD *)&v25[2 * v11 + 8] = v26;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v25[i], (int32_t)v26, num, (int32_t)method, v4, v5, v6, v7);
              }
            }
          }
        }
      }
      ++v11;
    }
  }
}


System_Collections_Generic_List_int__o *QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  FollowerInfo_array *Master_object; // x0
  __int64 v5; // x1
  int max_length; // w8
  FollowerInfo_array *v7; // x21
  unsigned int v8; // w23
  FollowerInfo_o *v9; // x22
  struct FollowerInfo_array *deckNpcInfoList; // x25
  int32_t npcInitIdx; // w26
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  char *v18; // x0
  int32_t v19; // w9
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x10
  __int64 size; // x11
  __int64 v24; // x0

  if ( (byte_4CEF99C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CEF99C = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.deckNpcInfoList && this->fields.isNpcMultipleBattle && !this->fields.isNpcEditablePos )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (FollowerInfo_array *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object
      || (Master_object = NpcFollowerMaster__GetQuestFollowerList(
                            (NpcFollowerMaster_o *)Master_object,
                            this->fields.questId,
                            this->fields.questPhase,
                            0)) == 0 )
    {
LABEL_25:
      sub_1C7BD40(Master_object, v5);
    }
    max_length = Master_object->max_length;
    v7 = Master_object;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( v8 < max_length )
      {
        v9 = v7->m_Items[v8];
        if ( !v9 )
          goto LABEL_25;
        if ( v9->fields.isFixedNpc )
        {
          deckNpcInfoList = this->fields.deckNpcInfoList;
          if ( !deckNpcInfoList )
            goto LABEL_25;
          npcInitIdx = v9->fields.npcInitIdx;
          Master_object = (FollowerInfo_array *)sub_1C7BC24(v9, deckNpcInfoList->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v24 = sub_1C7BD64(0);
            sub_1C7BC10(v24, 0);
          }
          if ( (unsigned int)(npcInitIdx - 1) >= LODWORD(deckNpcInfoList->max_length) )
            break;
          v18 = (char *)deckNpcInfoList + 8 * npcInitIdx - 8;
          *((_QWORD *)v18 + 4) = v9;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)v9, v12, v13, v14, v15, v16, v17);
          if ( !v3 )
            goto LABEL_25;
          v19 = v9->fields.npcInitIdx;
          items = v3->fields._items;
          v21 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v3->fields._size;
          v5 = (unsigned int)(v19 - 1);
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              v5,
              *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = v5;
          }
        }
        max_length = v7->max_length;
        if ( (int)++v8 >= max_length )
          return v3;
      }
      sub_1C7BD48(Master_object);
    }
  }
  return v3;
}


void QuestRestrictionInfo__Setup(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_o *v9; // x20
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  GrandQuestFolderBoardItem_o *p_supportPositionList; // x24
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  int32_t *p_eventDeckNum; // x27
  System_Collections_Generic_List_object__o *v79; // x20
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  System_Collections_Generic_List_int__o *v86; // x20
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  System_Collections_Generic_List_object__o *v117; // x20
  int32_t v118; // w2
  int32_t v119; // w3
  System_String_o *v120; // x4
  int32_t v121; // w5
  int64_t v122; // x6
  System_String_o *v123; // x7
  System_Collections_Generic_List_object__o *v124; // x20
  int32_t v125; // w2
  int32_t v126; // w3
  System_String_o *v127; // x4
  int32_t v128; // w5
  int64_t v129; // x6
  System_String_o *v130; // x7
  System_Collections_Generic_List_object__o *v131; // x20
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  System_Collections_Generic_List_object__o *v138; // x20
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  System_Collections_Generic_List_object__o *v145; // x20
  int32_t v146; // w2
  int32_t v147; // w3
  System_String_o *v148; // x4
  int32_t v149; // w5
  int64_t v150; // x6
  System_String_o *v151; // x7
  System_Collections_Generic_List_object__o *v152; // x20
  int32_t v153; // w2
  int32_t v154; // w3
  System_String_o *v155; // x4
  int32_t v156; // w5
  int64_t v157; // x6
  System_String_o *v158; // x7
  int32_t v159; // w2
  int32_t v160; // w3
  System_String_o *v161; // x4
  int32_t v162; // w5
  int64_t v163; // x6
  System_String_o *v164; // x7
  System_Collections_Generic_List_object__o *v165; // x20
  int32_t v166; // w2
  int32_t v167; // w3
  System_String_o *v168; // x4
  int32_t v169; // w5
  int64_t v170; // x6
  System_String_o *v171; // x7
  int32_t v172; // w2
  int32_t v173; // w3
  System_String_o *v174; // x4
  int32_t v175; // w5
  int64_t v176; // x6
  System_String_o *v177; // x7
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o **p_dialogMessageInfoDictionary; // x26
  int32_t v179; // w2
  int32_t v180; // w3
  System_String_o *v181; // x4
  int32_t v182; // w5
  int64_t v183; // x6
  System_String_o *v184; // x7
  System_Collections_Generic_List_object__o *v185; // x20
  int32_t v186; // w2
  int32_t v187; // w3
  System_String_o *v188; // x4
  int32_t v189; // w5
  int64_t v190; // x6
  System_String_o *v191; // x7
  System_Collections_Generic_List_object__o *v192; // x20
  int32_t v193; // w2
  int32_t v194; // w3
  System_String_o *v195; // x4
  int32_t v196; // w5
  int64_t v197; // x6
  System_String_o *v198; // x7
  const MethodInfo *v199; // x1
  __int64 Master_object; // x0
  Il2CppObject *v201; // x1
  const MethodInfo *v202; // x1
  System_Collections_Generic_Dictionary_int__object__o *v203; // x20
  int32_t v204; // w2
  int32_t v205; // w3
  System_String_o *v206; // x4
  int32_t v207; // w5
  int64_t v208; // x6
  System_String_o *v209; // x7
  System_Collections_Generic_Dictionary_int__object__o *v210; // x20
  int32_t v211; // w2
  int32_t v212; // w3
  System_String_o *v213; // x4
  int32_t v214; // w5
  int64_t v215; // x6
  System_String_o *v216; // x7
  System_Collections_Generic_Dictionary_int__object__o *v217; // x20
  int32_t v218; // w2
  int32_t v219; // w3
  System_String_o *v220; // x4
  int32_t v221; // w5
  int64_t v222; // x6
  System_String_o *v223; // x7
  System_Collections_Generic_List_object__o *v224; // x29
  RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  bool HasFlag; // w0
  BalanceConfig_c *v227; // x0
  __int64 v228; // x0
  int32_t v229; // w2
  int32_t v230; // w3
  System_String_o *v231; // x4
  int32_t v232; // w5
  int64_t v233; // x6
  System_String_o *v234; // x7
  RestrictionBaseEntity_o *v235; // x8
  Il2CppObject *v236; // x20
  RestrictionWholeEntity_array *Entities; // x0
  int32_t v238; // w2
  int32_t v239; // w3
  System_String_o *v240; // x4
  int32_t v241; // w5
  int64_t v242; // x6
  System_String_o *v243; // x7
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  unsigned int v246; // w25
  RestrictionWholeEntity_o *v247; // x21
  System_Boolean_array *SetPossiblePosition; // x0
  int32_t v249; // w2
  int32_t v250; // w3
  System_String_o *v251; // x4
  int32_t v252; // w5
  int64_t v253; // x6
  System_String_o *v254; // x7
  System_Collections_Generic_List_object__o *v255; // x23
  int32_t v256; // w2
  int32_t v257; // w3
  System_String_o *v258; // x4
  int32_t v259; // w5
  int64_t v260; // x6
  System_String_o *v261; // x7
  struct System_Object_array *v262; // x8
  _QWORD *v263; // x9
  __int64 v264; // x10
  __int64 v265; // x1
  Il2CppClass **v266; // x0
  System_Collections_Generic_List_object__o *v267; // x23
  int32_t v268; // w2
  int32_t v269; // w3
  System_String_o *v270; // x4
  int32_t v271; // w5
  int64_t v272; // x6
  System_String_o *v273; // x7
  struct System_Object_array *items; // x8
  _QWORD *v275; // x9
  __int64 size; // x10
  __int64 v277; // x1
  Il2CppClass **v278; // x0
  System_Collections_Generic_List_object__o *v279; // x23
  int32_t v280; // w2
  int32_t v281; // w3
  System_String_o *v282; // x4
  int32_t v283; // w5
  int64_t v284; // x6
  System_String_o *v285; // x7
  struct System_Object_array *v286; // x8
  _QWORD *v287; // x9
  __int64 v288; // x10
  __int64 v289; // x1
  Il2CppClass **v290; // x0
  Il2CppObject *v291; // x23
  int32_t v292; // w0
  int32_t v293; // w2
  int32_t v294; // w3
  System_String_o *v295; // x4
  int32_t v296; // w5
  int64_t v297; // x6
  System_String_o *v298; // x7
  BalanceConfig_c *v299; // x0
  __int64 v300; // x0
  int32_t v301; // w2
  int32_t v302; // w3
  System_String_o *v303; // x4
  int32_t v304; // w5
  int64_t v305; // x6
  System_String_o *v306; // x7
  __int64 v307; // x0
  int32_t v308; // w2
  int32_t v309; // w3
  System_String_o *v310; // x4
  int32_t v311; // w5
  int64_t v312; // x6
  System_String_o *v313; // x7
  __int64 v314; // x0
  int32_t v315; // w2
  int32_t v316; // w3
  System_String_o *v317; // x4
  int32_t v318; // w5
  int64_t v319; // x6
  System_String_o *v320; // x7
  __int64 v321; // x0
  int32_t v322; // w2
  int32_t v323; // w3
  System_String_o *v324; // x4
  int32_t v325; // w5
  int64_t v326; // x6
  System_String_o *v327; // x7
  System_Boolean_array *v328; // x0
  int32_t v329; // w2
  int32_t v330; // w3
  System_String_o *v331; // x4
  int32_t v332; // w5
  int64_t v333; // x6
  System_String_o *v334; // x7
  System_Collections_Generic_List_object__o *v335; // x23
  int32_t v336; // w2
  int32_t v337; // w3
  System_String_o *v338; // x4
  int32_t v339; // w5
  int64_t v340; // x6
  System_String_o *v341; // x7
  struct System_Object_array *v342; // x8
  _QWORD *v343; // x9
  __int64 v344; // x10
  __int64 v345; // x1
  Il2CppClass **v346; // x0
  System_Collections_Generic_List_object__o *v347; // x23
  int32_t v348; // w2
  int32_t v349; // w3
  System_String_o *v350; // x4
  int32_t v351; // w5
  int64_t v352; // x6
  System_String_o *v353; // x7
  struct System_Object_array *v354; // x8
  _QWORD *v355; // x9
  __int64 v356; // x10
  __int64 v357; // x1
  Il2CppClass **v358; // x0
  struct System_Int32_array *targetVals; // x8
  System_Collections_Generic_List_object__o *v360; // x23
  int32_t v361; // w2
  int32_t v362; // w3
  System_String_o *v363; // x4
  int32_t v364; // w5
  int64_t v365; // x6
  System_String_o *v366; // x7
  struct System_Object_array *v367; // x8
  _QWORD *v368; // x9
  __int64 v369; // x10
  __int64 v370; // x1
  Il2CppClass **v371; // x0
  System_Collections_Generic_List_object__o *v372; // x23
  int32_t v373; // w2
  int32_t v374; // w3
  System_String_o *v375; // x4
  int32_t v376; // w5
  int64_t v377; // x6
  System_String_o *v378; // x7
  struct System_Object_array *v379; // x8
  _QWORD *v380; // x9
  __int64 v381; // x10
  __int64 v382; // x1
  Il2CppClass **v383; // x0
  int32_t restrictionMessageId; // w2
  int32_t v385; // w2
  int32_t v386; // w3
  System_String_o *v387; // x4
  int32_t v388; // w5
  int64_t v389; // x6
  System_String_o *v390; // x7
  struct System_Object_array *v391; // x8
  _QWORD *v392; // x9
  __int64 v393; // x10
  Il2CppClass **v394; // x0
  __int64 v395; // x23
  QuestRestrictionInfo_o *v396; // x28
  char isAllOutBattle; // w8
  __int64 v398; // x21
  int32_t v399; // w2
  int32_t v400; // w3
  System_String_o *v401; // x4
  int32_t v402; // w5
  int64_t v403; // x6
  System_String_o *v404; // x7
  BalanceConfig_c *v405; // x0
  __int64 v406; // x0
  int32_t v407; // w2
  int32_t v408; // w3
  System_String_o *v409; // x4
  int32_t v410; // w5
  int64_t v411; // x6
  System_String_o *v412; // x7
  int32_t v413; // w21
  int v414; // w24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v415; // x8
  __int64 v416; // x22
  System_Collections_Generic_List_int__o *v417; // x24
  int v418; // w8
  __int64 v419; // x19
  __int64 v420; // x23
  struct System_Int32_array *v421; // x8
  _QWORD *v422; // x9
  __int64 v423; // x10
  int32_t v424; // w2
  int32_t v425; // w2
  int32_t v426; // w3
  System_String_o *v427; // x4
  int32_t v428; // w5
  int64_t v429; // x6
  System_String_o *v430; // x7
  struct System_Object_array *v431; // x8
  _QWORD *v432; // x9
  __int64 v433; // x10
  Il2CppClass **v434; // x0
  __int64 v435; // x23
  __int64 v436; // x24
  GrandQuestFolderBoardItem_c *klass; // x25
  QuestRestrictionInfo_SlotInfo_o *v438; // x23
  const MethodInfo *v439; // x1
  int32_t v440; // w2
  int32_t v441; // w3
  System_String_o *v442; // x4
  int32_t v443; // w5
  int64_t v444; // x6
  System_String_o *v445; // x7
  int v446; // w19
  void **v447; // x0
  int servantNumMax; // w8
  GrandQuestFolderBoardItem_c *v449; // x8
  int32_t v450; // w24
  __int64 v451; // x8
  QuestRestrictionInfo___c_c *v452; // x0
  System_Func_object__bool__o *_9__85_0; // x23
  Il2CppObject *v454; // x25
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v456; // w2
  int32_t v457; // w3
  System_String_o *v458; // x4
  int32_t v459; // w5
  int64_t v460; // x6
  System_String_o *v461; // x7
  _BOOL4 v462; // w0
  QuestRestrictionInfo___c_c *v463; // x8
  _BOOL4 v464; // w23
  System_Func_object__bool__o *_9__85_1; // x25
  Il2CppObject *v466; // x28
  struct QuestRestrictionInfo___c_StaticFields *v467; // x0
  int32_t v468; // w2
  int32_t v469; // w3
  System_String_o *v470; // x4
  int32_t v471; // w5
  int64_t v472; // x6
  System_String_o *v473; // x7
  _BOOL4 v474; // w0
  QuestRestrictionInfo___c_c *v475; // x8
  _BOOL4 v476; // w25
  System_Func_object__bool__o *_9__85_2; // x28
  Il2CppObject *v478; // x27
  struct QuestRestrictionInfo___c_StaticFields *v479; // x0
  int32_t v480; // w2
  int32_t v481; // w3
  System_String_o *v482; // x4
  int32_t v483; // w5
  int64_t v484; // x6
  System_String_o *v485; // x7
  GrandQuestFolderBoardItem_c *v486; // x8
  __int64 v487; // x8
  GrandQuestFolderBoardItem_c *v488; // x8
  __int64 v489; // x8
  GrandQuestFolderBoardItem_c *v490; // x8
  __int64 v491; // x8
  int v492; // w8
  unsigned int v493; // w27
  __int64 v494; // x25
  __int64 v495; // x8
  GrandQuestFolderBoardItem_c *v496; // x8
  __int64 v497; // x8
  System_Collections_Generic_List_object__o *v498; // x23
  int32_t v499; // w2
  int32_t v500; // w3
  System_String_o *v501; // x4
  int32_t v502; // w5
  int64_t v503; // x6
  System_String_o *v504; // x7
  struct System_Object_array *v505; // x8
  _QWORD *v506; // x9
  __int64 v507; // x10
  __int64 v508; // x1
  Il2CppClass **v509; // x0
  GrandQuestFolderBoardItem_c *v510; // x8
  __int64 v511; // x8
  struct System_Int32_array *v512; // x8
  _QWORD *v513; // x9
  __int64 v514; // x10
  System_String_o *v515; // x23
  GrandQuestFolderBoardItem_c *v516; // x8
  __int64 v517; // x8
  int32_t v518; // w2
  int32_t v519; // w3
  System_String_o *v520; // x4
  int32_t v521; // w5
  int64_t v522; // x6
  System_String_o *v523; // x7
  GrandQuestFolderBoardItem_c *v524; // x8
  __int64 v525; // x8
  System_String_o **v526; // x25
  GrandQuestFolderBoardItem_c *v527; // x8
  QuestRestrictionInfo___c_c *v528; // x0
  __int64 v529; // x27
  System_Func_object__bool__o *_9__85_3; // x23
  Il2CppObject *v531; // x25
  struct QuestRestrictionInfo___c_StaticFields *v532; // x0
  int32_t v533; // w2
  int32_t v534; // w3
  System_String_o *v535; // x4
  int32_t v536; // w5
  int64_t v537; // x6
  System_String_o *v538; // x7
  GrandQuestFolderBoardItem_c *v539; // x8
  __int64 v540; // x8
  GrandQuestFolderBoardItem_c *v541; // x8
  __int64 v542; // x8
  GrandQuestFolderBoardItem_c *v543; // x8
  __int64 v544; // x8
  System_Object_array *v545; // x0
  int32_t v546; // w2
  int32_t v547; // w3
  System_String_o *v548; // x4
  int32_t v549; // w5
  int64_t v550; // x6
  System_String_o *v551; // x7
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v553; // w10
  int v554; // w11
  int v555; // w9
  int v556; // w20
  int32_t v557; // w19
  QuestRestrictionInfo_SlotInfo_o *v558; // x13
  int v559; // w21
  int v560; // w22
  __int64 v561; // x8
  bool HasFlag_43027152; // w0
  bool v563; // w0
  Il2CppObject *Value_int__object; // x0
  int v565; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v567; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v568; // x8
  __int64 v569; // x8
  Il2CppObject *v570; // x20
  int32_t v571; // w0
  int32_t v572; // w2
  int32_t v573; // w3
  System_String_o *v574; // x4
  int32_t v575; // w5
  int64_t v576; // x6
  System_String_o *v577; // x7
  System_Collections_Generic_Dictionary_int__object__o *restrictionSlotDictionary; // x8
  _BOOL8 v579; // x0
  __int64 v580; // x1
  int monitor; // w9
  int v582; // w10
  __int64 v583; // x11
  System_Text_StringBuilder_o *v584; // x20
  System_Text_StringBuilder_o *v585; // x21
  struct RestrictionWholeEntity_array *v586; // x19
  int v587; // w8
  unsigned int v588; // w22
  RestrictionWholeEntity_o *v589; // x24
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  int v592; // w25
  _BOOL4 v593; // w8
  __int64 v594; // x0
  int32_t v595; // w2
  int32_t v596; // w3
  System_String_o *v597; // x4
  int32_t v598; // w5
  int64_t v599; // x6
  System_String_o *v600; // x7
  System_String_o *v601; // x19
  System_String_o *v602; // x0
  System_String_o *v603; // x0
  int32_t v604; // w2
  int32_t v605; // w3
  System_String_o *v606; // x4
  int32_t v607; // w5
  int64_t v608; // x6
  System_String_o *v609; // x7
  __int64 v610; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // [xsp+10h] [xbp-180h]
  GrandQuestFolderBoardItem_o *p_svtIdForceBattleList; // [xsp+18h] [xbp-178h]
  GrandQuestFolderBoardItem_o *p_restrictionMessage; // [xsp+20h] [xbp-170h]
  GrandQuestFolderBoardItem_o *p_confirmRestrictionMessage; // [xsp+28h] [xbp-168h]
  struct RestrictionWholeEntity_array *v615; // [xsp+30h] [xbp-160h]
  GrandQuestFolderBoardItem_o *p_uniqueIndividualitys; // [xsp+38h] [xbp-158h]
  struct System_Collections_Generic_List_int____o **p_fixedMyServantIndividualitiesList; // [xsp+40h] [xbp-150h]
  struct System_Collections_Generic_List_int____o **p_fixedIndividualitiesList; // [xsp+48h] [xbp-148h]
  struct System_Collections_Generic_List_int____o **p_needStartingIndividualitiesList; // [xsp+50h] [xbp-140h]
  struct System_Collections_Generic_List_int____o **p_fixedNpcIndividualitiesList; // [xsp+58h] [xbp-138h]
  struct System_Collections_Generic_List_int____o **p_fixedSupportIndividualitiesList; // [xsp+60h] [xbp-130h]
  struct System_Int32_array **p_deckDispLimitCountList; // [xsp+68h] [xbp-128h]
  struct System_Int32_array **p_deckLimitCountList; // [xsp+70h] [xbp-120h]
  struct FollowerInfo_array **p_deckNpcInfoList; // [xsp+78h] [xbp-118h]
  struct System_Collections_Generic_List_bool____o **p_myServantPositionsList; // [xsp+80h] [xbp-110h]
  struct System_Collections_Generic_List_bool____o **p_positionsList; // [xsp+90h] [xbp-100h]
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o **v628; // [xsp+98h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o **p_restrictionSlotDetailDictionary; // [xsp+A0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_K__V__o **p_restrictionSlotDictionary; // [xsp+A8h] [xbp-E8h]
  struct RestrictionBaseEntity_o **p_restrictionBaseEntity; // [xsp+B0h] [xbp-E0h]
  QuestRestrictionInfo_o *v632; // [xsp+B8h] [xbp-D8h]
  GrandQuestFolderBoardItem_o *p_deckSvtIdList; // [xsp+C0h] [xbp-D0h]
  _BOOL4 v634; // [xsp+C0h] [xbp-D0h]
  int32_t questIdb; // [xsp+CCh] [xbp-C4h]
  GrandQuestFolderBoardItem_o *p_fields; // [xsp+D0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v638; // [xsp+D8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v639; // [xsp+F0h] [xbp-A0h] BYREF
  Il2CppObject *item; // [xsp+110h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+118h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v642; // [xsp+120h] [xbp-70h] BYREF
  Il2CppObject *v643; // [xsp+128h] [xbp-68h] BYREF

  if ( (byte_4CEF996 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
    sub_1C7BAE8(&Method_BasicHelper_Any_RestrictionSlotEntity___);
    sub_1C7BAE8(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
    sub_1C7BAE8(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_RestrictionBaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_RestrictionSlotMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_RestrictionWholeMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1C7BAE8(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__);
    sub_1C7BAE8(&FollowerInfo___TypeInfo);
    sub_1C7BAE8(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
    sub_1C7BAE8(&System_Func_RestrictionSlotEntity__bool__TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_bool____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_bool_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_bool____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&QuestRestrictionInfo_SlotInfo___TypeInfo);
    sub_1C7BAE8(&QuestRestrictionInfo_SlotInfo_TypeInfo);
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__Setup_b__85_0__);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__Setup_b__85_1__);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__Setup_b__85_2__);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__Setup_b__85_3__);
    sub_1C7BAE8(&QuestRestrictionInfo___c_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_10333/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/);
    sub_1C7BAE8(&StringLiteral_10296/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF996 = 1;
  }
  v642 = 0;
  v643 = 0;
  item = 0;
  entity = 0;
  memset(&v639, 0, sizeof(v639));
  this->fields.isRestriction = 0;
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  v10 = StringLiteral_1/*""*/;
  this->fields.restrictionMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  p_restrictionMessage = (GrandQuestFolderBoardItem_o *)&this->fields.restrictionMessage;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.restrictionMessage,
    v10,
    questId,
    questPhase,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.confirmRestrictionMessage = v9;
  p_confirmRestrictionMessage = (GrandQuestFolderBoardItem_o *)&this->fields.confirmRestrictionMessage;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.confirmRestrictionMessage,
    (int32_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.supportOnlyRestrictionEntity = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.supportOnlyRestrictionEntity,
    0,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.uniqueSvtRestrictionEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.uniqueSvtRestrictionEntity, 0, v23, v24, v25, v26, v27, v28);
  this->fields.deckSvtIdList = 0;
  p_deckSvtIdList = (GrandQuestFolderBoardItem_o *)&this->fields.deckSvtIdList;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.deckSvtIdList, 0, v29, v30, v31, v32, v33, v34);
  this->fields.deckNpcInfoList = 0;
  p_deckNpcInfoList = &this->fields.deckNpcInfoList;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.deckNpcInfoList, 0, v35, v36, v37, v38, v39, v40);
  this->fields.fixedSupportPositionRestrictionEntity = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedSupportPositionRestrictionEntity,
    0,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.supportPositionList = 0;
  p_supportPositionList = (GrandQuestFolderBoardItem_o *)&this->fields.supportPositionList;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.supportPositionList, 0, v48, v49, v50, v51, v52, v53);
  this->fields.fixedMyServantPositionRestrictionEntity = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
    0,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.servantNumRestrictionEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.servantNumRestrictionEntity, 0, v60, v61, v62, v63, v64, v65);
  this->fields.servantNumMax = 0;
  this->fields.myServantNumRestrictionEntity = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.myServantNumRestrictionEntity,
    0,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  this->fields.myServantNumMax = 0;
  *(_WORD *)&this->fields.isSupportOnlyForceBattle = 0;
  this->fields.svtIdForceBattleList = 0;
  p_svtIdForceBattleList = (GrandQuestFolderBoardItem_o *)&this->fields.svtIdForceBattleList;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.svtIdForceBattleList, 0, v72, v73, v74, v75, v76, v77);
  p_eventDeckNum = &this->fields.eventDeckNum;
  this->fields.isFatigure = 0;
  this->fields.eventDeckNum = 0;
  *(int32_t *)((char *)&this->fields.eventDeckNum + 3) = 0;
  v79 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v79,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v79;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.myServantOrNpcRestrictionEntityList,
    (int32_t)v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  v86 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v86,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.specifiedPositionList = v86;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.specifiedPositionList,
    (int32_t)v86,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  this->fields.isNotTransitionSupportList = 0;
  this->fields.supportInitIndex = 0;
  this->fields.fixedServantPositionRestrictionEntity = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedServantPositionRestrictionEntity,
    0,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  this->fields.uniqueIndividualityEntity = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.uniqueIndividualityEntity,
    0,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  this->fields.isAllOutBattle = 0;
  this->fields.isDataLostBattle = 0;
  this->fields.allOutBattleGroupNo = -1;
  this->fields.dataLostBattleId = -1;
  this->fields.deckLimitCountList = 0;
  p_deckLimitCountList = &this->fields.deckLimitCountList;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.deckLimitCountList, 0, v105, v106, v107, v108, v109, v110);
  this->fields.deckDispLimitCountList = 0;
  p_deckDispLimitCountList = &this->fields.deckDispLimitCountList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.deckDispLimitCountList,
    0,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  *(_WORD *)&this->fields.isNotSingleSupportOnly = 0;
  *(_DWORD *)&this->fields.isUniqueServant = 0;
  v117 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v117,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v117;
  p_positionsList = &this->fields.positionsList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.positionsList,
    (int32_t)v117,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  v124 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v124,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v124;
  p_fixedIndividualitiesList = &this->fields.fixedIndividualitiesList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedIndividualitiesList,
    (int32_t)v124,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
  this->fields.isFixedMyServantPosition = 0;
  v131 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v131,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v131;
  p_myServantPositionsList = &this->fields.myServantPositionsList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.myServantPositionsList,
    (int32_t)v131,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  v138 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v138,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v138;
  p_fixedMyServantIndividualitiesList = &this->fields.fixedMyServantIndividualitiesList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedMyServantIndividualitiesList,
    (int32_t)v138,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  this->fields.isFixedSupportPosition = 0;
  v145 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v145,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v145;
  p_fixedSupportIndividualitiesList = &this->fields.fixedSupportIndividualitiesList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedSupportIndividualitiesList,
    (int32_t)v145,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  this->fields.isFixedNpcPosition = 0;
  v152 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v152,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v152;
  p_fixedNpcIndividualitiesList = &this->fields.fixedNpcIndividualitiesList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedNpcIndividualitiesList,
    (int32_t)v152,
    v153,
    v154,
    v155,
    v156,
    v157,
    v158);
  this->fields.npcPositionList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.npcPositionList, 0, v159, v160, v161, v162, v163, v164);
  v165 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v165,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v165;
  p_needStartingIndividualitiesList = &this->fields.needStartingIndividualitiesList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.needStartingIndividualitiesList,
    (int32_t)v165,
    v166,
    v167,
    v168,
    v169,
    v170,
    v171);
  this->fields.isNeedStarting = 0;
  this->fields.isFixedMyServantSingle = 0;
  *(_WORD *)&this->fields.isMyServantOrNpc = 0;
  this->fields.slotInfos = 0;
  p_fields = (GrandQuestFolderBoardItem_o *)&this->fields;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v172, v173, v174, v175, v176, v177);
  this->fields.dialogMessageInfoDictionary = 0;
  p_dialogMessageInfoDictionary = &this->fields.dialogMessageInfoDictionary;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.dialogMessageInfoDictionary,
    0,
    v179,
    v180,
    v181,
    v182,
    v183,
    v184);
  v185 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v185,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.grandServantRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v185;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantRestrictionEntityList,
    (int32_t)v185,
    v186,
    v187,
    v188,
    v189,
    v190,
    v191);
  v192 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v192,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.activeGrandBoardRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v192;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.activeGrandBoardRestrictionEntityList,
    (int32_t)v192,
    v193,
    v194,
    v195,
    v196,
    v197,
    v198);
  v632 = this;
  QuestRestrictionInfo__CacheOverwriteSvtTreasureDeviceLv(this, v199);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !Master_object )
    goto LABEL_383;
  p_restrictionBaseEntity = &this->fields.restrictionBaseEntity;
  if ( RestrictionBaseMaster__TryGetEntity(
         (RestrictionBaseMaster_o *)Master_object,
         &this->fields.restrictionBaseEntity,
         this->fields.questId,
         this->fields.questPhase,
         0) )
  {
    this->fields.isRestriction = 1;
    v203 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v203,
      (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    this->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v203;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&this->fields.restrictionSlotDictionary;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.restrictionSlotDictionary,
      (int32_t)v203,
      v204,
      v205,
      v206,
      v207,
      v208,
      v209);
    v210 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v210,
      (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    this->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v210;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.restrictionSlotDetailDictionary,
      (int32_t)v210,
      v211,
      v212,
      v213,
      v214,
      v215,
      v216);
    v217 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v217,
      (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    this->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v217;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.dialogMessageInfoDictionary,
      (int32_t)v217,
      v218,
      v219,
      v220,
      v221,
      v222,
      v223);
    v224 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v224,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    Master_object = (__int64)v632->fields.restrictionBaseEntity;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__object__o **)&v632->fields.restrictionSlotDetailDictionary;
    if ( !Master_object )
      goto LABEL_383;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 2, 0);
    restrictionBaseEntity = v632->fields.restrictionBaseEntity;
    v632->fields.isNotTransitionSupportList = Master_object & 1;
    if ( !restrictionBaseEntity )
      goto LABEL_383;
    if ( RestrictionBaseEntity__HasFlag(restrictionBaseEntity, 4, 0) )
    {
      Master_object = (__int64)*p_restrictionBaseEntity;
      if ( !*p_restrictionBaseEntity )
        goto LABEL_383;
      *p_eventDeckNum = RestrictionBaseEntity__GetUserEventDeckNo((RestrictionBaseEntity_o *)Master_object, 0);
    }
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_383;
    HasFlag = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 16, 0);
    v632->fields.isUniqueServant = HasFlag;
    if ( HasFlag )
    {
      v227 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v227 = BalanceConfig_TypeInfo;
      }
      v228 = sub_1C7BB90(int___TypeInfo, (unsigned int)v227->static_fields->DeckMemberMax);
      p_deckSvtIdList->klass = (GrandQuestFolderBoardItem_c *)v228;
      sub_1C7BA8C(p_deckSvtIdList, v228, v229, v230, v231, v232, v233, v234);
    }
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_383;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 32, 0);
    v235 = v632->fields.restrictionBaseEntity;
    v632->fields.isNotSingleSupportOnly = Master_object & 1;
    if ( !v235 )
      goto LABEL_383;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      v235,
      &v632->fields.overwriteLimitCountSvtIds,
      &v632->fields.overwriteLimitCounts,
      &v632->fields.overwriteLimitCountIconIds,
      0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v236 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
    if ( !*p_restrictionBaseEntity )
      goto LABEL_383;
    if ( !Master_object )
      goto LABEL_383;
    Entities = RestrictionWholeMaster__GetEntities(
                 (RestrictionWholeMaster_o *)Master_object,
                 (*p_restrictionBaseEntity)->fields.restrictionWholeId,
                 0);
    v632->fields.restrictionWholeEntities = Entities;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v632->fields.restrictionWholeEntities,
      (int32_t)Entities,
      v238,
      v239,
      v240,
      v241,
      v242,
      v243);
    restrictionWholeEntities = v632->fields.restrictionWholeEntities;
    p_restrictionWholeEntities = &v632->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_383;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      p_uniqueIndividualitys = (GrandQuestFolderBoardItem_o *)&v632->fields.uniqueIndividualitys;
      v246 = 0;
      v615 = v632->fields.restrictionWholeEntities;
      while ( 2 )
      {
        if ( v246 >= max_length )
          goto LABEL_384;
        v247 = restrictionWholeEntities->m_Items[v246];
        if ( v247 )
        {
          switch ( v247->fields.type )
          {
            case 2:
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
              if ( !Master_object )
                goto LABEL_383;
              Master_object = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Master_object, questId, 17, 0);
              v632->fields.allOutBattleGroupNo = Master_object;
              v632->fields.isAllOutBattle = 1;
              goto LABEL_86;
            case 3:
              Master_object = System_Linq_Enumerable__Min(
                                (System_Collections_Generic_IEnumerable_int__o *)v247->fields.targetVals,
                                0);
              v632->fields.servantNumMax = Master_object - 1;
              goto LABEL_86;
            case 4:
              v267 = (System_Collections_Generic_List_object__o *)*p_positionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v247, 0);
              if ( !v267 )
                goto LABEL_383;
              items = v267->fields._items;
              v275 = Method_System_Collections_Generic_List_bool____Add__;
              ++v267->fields._version;
              if ( !items )
                goto LABEL_383;
              size = v267->fields._size;
              v277 = Master_object;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v267,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v275[4] + 192LL) + 112LL));
              }
              else
              {
                v278 = &items->obj.klass + size;
                v267->fields._size = size + 1;
                v278[4] = (Il2CppClass *)v277;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v278 + 4), v277, v268, v269, v270, v271, v272, v273);
              }
              Master_object = (__int64)v247->fields.targetVals;
              if ( !Master_object )
                goto LABEL_383;
              v360 = (System_Collections_Generic_List_object__o *)*p_fixedIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v360 )
                goto LABEL_383;
              Master_object = sub_1C7BC24(Master_object, int___TypeInfo);
              v367 = v360->fields._items;
              v368 = Method_System_Collections_Generic_List_int____Add__;
              ++v360->fields._version;
              if ( !v367 )
                goto LABEL_383;
              v369 = v360->fields._size;
              v370 = Master_object;
              if ( (unsigned int)v369 >= LODWORD(v367->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v360,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v368[4] + 192LL) + 112LL));
              }
              else
              {
                v371 = &v367->obj.klass + v369;
                v360->fields._size = v369 + 1;
                v371[4] = (Il2CppClass *)v370;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v371 + 4), v370, v361, v362, v363, v364, v365, v366);
              }
              v632->fields.isFixedPosition = 1;
              goto LABEL_86;
            case 5:
              v279 = (System_Collections_Generic_List_object__o *)*p_myServantPositionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v247, 0);
              if ( !v279 )
                goto LABEL_383;
              v286 = v279->fields._items;
              v287 = Method_System_Collections_Generic_List_bool____Add__;
              ++v279->fields._version;
              if ( !v286 )
                goto LABEL_383;
              v288 = v279->fields._size;
              v289 = Master_object;
              if ( (unsigned int)v288 >= LODWORD(v286->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v279,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v287[4] + 192LL) + 112LL));
              }
              else
              {
                v290 = &v286->obj.klass + v288;
                v279->fields._size = v288 + 1;
                v290[4] = (Il2CppClass *)v289;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v290 + 4), v289, v280, v281, v282, v283, v284, v285);
              }
              Master_object = (__int64)v247->fields.targetVals;
              if ( !Master_object )
                goto LABEL_383;
              v372 = (System_Collections_Generic_List_object__o *)*p_fixedMyServantIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v372 )
                goto LABEL_383;
              Master_object = sub_1C7BC24(Master_object, int___TypeInfo);
              v379 = v372->fields._items;
              v380 = Method_System_Collections_Generic_List_int____Add__;
              ++v372->fields._version;
              if ( !v379 )
                goto LABEL_383;
              v381 = v372->fields._size;
              v382 = Master_object;
              if ( (unsigned int)v381 >= LODWORD(v379->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v372,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v380[4] + 192LL) + 112LL));
              }
              else
              {
                v383 = &v379->obj.klass + v381;
                v372->fields._size = v381 + 1;
                v383[4] = (Il2CppClass *)v382;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v383 + 4), v382, v373, v374, v375, v376, v377, v378);
              }
              v632->fields.isFixedMyServantPosition = 1;
              goto LABEL_86;
            case 6:
              SetPossiblePosition = RestrictionWholeEntity__GetSetPossiblePosition(v247, 0);
              p_supportPositionList->klass = (GrandQuestFolderBoardItem_c *)SetPossiblePosition;
              sub_1C7BA8C(p_supportPositionList, (int32_t)SetPossiblePosition, v249, v250, v251, v252, v253, v254);
              Master_object = (__int64)v247->fields.targetVals;
              if ( !Master_object )
                goto LABEL_383;
              v255 = (System_Collections_Generic_List_object__o *)*p_fixedSupportIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v255 )
                goto LABEL_383;
              Master_object = sub_1C7BC24(Master_object, int___TypeInfo);
              v262 = v255->fields._items;
              v263 = Method_System_Collections_Generic_List_int____Add__;
              ++v255->fields._version;
              if ( !v262 )
                goto LABEL_383;
              v264 = v255->fields._size;
              v265 = Master_object;
              if ( (unsigned int)v264 >= LODWORD(v262->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v255,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v263[4] + 192LL) + 112LL));
              }
              else
              {
                v266 = &v262->obj.klass + v264;
                v255->fields._size = v264 + 1;
                v266[4] = (Il2CppClass *)v265;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v266 + 4), v265, v256, v257, v258, v259, v260, v261);
              }
              v632->fields.isFixedSupportPosition = 1;
              goto LABEL_86;
            case 7:
              v328 = RestrictionWholeEntity__GetSetPossiblePosition(v247, 0);
              p_supportPositionList->klass = (GrandQuestFolderBoardItem_c *)v328;
              sub_1C7BA8C(p_supportPositionList, (int32_t)v328, v329, v330, v331, v332, v333, v334);
              Master_object = (__int64)v247->fields.targetVals;
              if ( !Master_object )
                goto LABEL_383;
              v335 = (System_Collections_Generic_List_object__o *)*p_fixedNpcIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v335 )
                goto LABEL_383;
              Master_object = sub_1C7BC24(Master_object, int___TypeInfo);
              v342 = v335->fields._items;
              v343 = Method_System_Collections_Generic_List_int____Add__;
              ++v335->fields._version;
              if ( !v342 )
                goto LABEL_383;
              v344 = v335->fields._size;
              v345 = Master_object;
              if ( (unsigned int)v344 >= LODWORD(v342->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v335,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v343[4] + 192LL) + 112LL));
              }
              else
              {
                v346 = &v342->obj.klass + v344;
                v335->fields._size = v344 + 1;
                v346[4] = (Il2CppClass *)v345;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v346 + 4), v345, v336, v337, v338, v339, v340, v341);
              }
              v632->fields.isFixedNpcPosition = 1;
              goto LABEL_86;
            case 8:
              Master_object = (__int64)v247->fields.targetVals;
              if ( !Master_object )
                goto LABEL_383;
              v347 = (System_Collections_Generic_List_object__o *)*p_needStartingIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v347 )
                goto LABEL_383;
              Master_object = sub_1C7BC24(Master_object, int___TypeInfo);
              v354 = v347->fields._items;
              v355 = Method_System_Collections_Generic_List_int____Add__;
              ++v347->fields._version;
              if ( !v354 )
                goto LABEL_383;
              v356 = v347->fields._size;
              v357 = Master_object;
              if ( (unsigned int)v356 >= LODWORD(v354->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v347,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v355[4] + 192LL) + 112LL));
              }
              else
              {
                v358 = &v354->obj.klass + v356;
                v347->fields._size = v356 + 1;
                v358[4] = (Il2CppClass *)v357;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v358 + 4), v357, v348, v349, v350, v351, v352, v353);
              }
              v632->fields.isNeedStarting = 1;
              goto LABEL_86;
            case 9:
              Master_object = (__int64)v247->fields.targetVals;
              if ( !Master_object )
                goto LABEL_383;
              v291 = System_Array__Clone((System_Array_o *)Master_object, 0);
              p_uniqueIndividualitys->klass = (GrandQuestFolderBoardItem_c *)sub_1C7BC24(v291, int___TypeInfo);
              v292 = sub_1C7BC24(v291, int___TypeInfo);
              sub_1C7BA8C(p_uniqueIndividualitys, v292, v293, v294, v295, v296, v297, v298);
              v299 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v299 = BalanceConfig_TypeInfo;
              }
              v300 = sub_1C7BB90(int___TypeInfo, (unsigned int)v299->static_fields->DeckMemberMax);
              v632->fields.deckSvtIdList = (struct System_Int32_array *)v300;
              sub_1C7BA8C(p_deckSvtIdList, v300, v301, v302, v303, v304, v305, v306);
              v307 = sub_1C7BB90(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v632->fields.deckLimitCountList = (struct System_Int32_array *)v307;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_deckLimitCountList, v307, v308, v309, v310, v311, v312, v313);
              v314 = sub_1C7BB90(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v632->fields.deckDispLimitCountList = (struct System_Int32_array *)v314;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)p_deckDispLimitCountList,
                v314,
                v315,
                v316,
                v317,
                v318,
                v319,
                v320);
              v321 = sub_1C7BB90(
                       FollowerInfo___TypeInfo,
                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v632->fields.deckNpcInfoList = (struct FollowerInfo_array *)v321;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_deckNpcInfoList, v321, v322, v323, v324, v325, v326, v327);
              restrictionWholeEntities = v615;
              v632->fields.isUniqueIndividuality = 1;
              goto LABEL_86;
            case 0xA:
              v632->fields.isDataLostBattle = 1;
              targetVals = v247->fields.targetVals;
              if ( !targetVals )
                goto LABEL_383;
              if ( !LODWORD(targetVals->max_length) )
                goto LABEL_384;
              v632->fields.dataLostBattleId = targetVals->m_Items[0];
LABEL_86:
              restrictionMessageId = v247->fields.restrictionMessageId;
              if ( restrictionMessageId < 1 )
                goto LABEL_98;
              if ( !v236 )
                goto LABEL_383;
              Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v236,
                                &entity,
                                restrictionMessageId,
                                (const MethodInfo_342E348 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
              if ( (Master_object & 1) == 0 )
                goto LABEL_98;
              if ( !v224 )
                goto LABEL_383;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v224,
                                entity,
                                (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) != 0 )
                goto LABEL_98;
              v201 = entity;
              v391 = v224->fields._items;
              v392 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
              ++v224->fields._version;
              if ( !v391 )
                goto LABEL_383;
              v393 = v224->fields._size;
              if ( (unsigned int)v393 >= LODWORD(v391->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v224,
                  v201,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v392[4] + 192LL) + 112LL));
              }
              else
              {
                v394 = &v391->obj.klass + v393;
                v224->fields._size = v393 + 1;
                v394[4] = (Il2CppClass *)v201;
                sub_1C7BA8C(
                  (GrandQuestFolderBoardItem_o *)(v394 + 4),
                  (int32_t)v201,
                  v385,
                  v386,
                  v387,
                  v388,
                  v389,
                  v390);
              }
              v395 = sub_1C7BD34(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v395, 0);
              *(_DWORD *)(v395 + 16) = 0;
              *(_DWORD *)(v395 + 20) = v247->fields.type;
              if ( !entity )
                goto LABEL_383;
              Master_object = (__int64)*p_dialogMessageInfoDictionary;
              if ( !*p_dialogMessageInfoDictionary )
                goto LABEL_383;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                (int32_t)entity[1].klass,
                (Il2CppObject *)v395,
                (const MethodInfo_3487710 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
LABEL_98:
              max_length = restrictionWholeEntities->max_length;
              if ( (int)++v246 >= max_length )
                goto LABEL_99;
              continue;
            default:
              goto LABEL_86;
          }
        }
        goto LABEL_383;
      }
    }
LABEL_99:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestMaster___);
    v396 = v632;
    if ( !Master_object )
      goto LABEL_383;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
      &v643,
      questId,
      (const MethodInfo_342E348 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    Master_object = (__int64)v643;
    if ( !v643 )
      goto LABEL_383;
    Master_object = QuestEntity__HasFlag_43027152((QuestEntity_o *)v643, 0x100000, questPhase, 0);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v632 )
        goto LABEL_383;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = v632->fields.isAllOutBattle;
    }
    v632->fields.isNoSupportBattle = isAllOutBattle;
    Master_object = (__int64)v643;
    if ( !v643 )
      goto LABEL_383;
    v632->fields.isSupportOnlyForceBattle = QuestEntity__HasFlag_43027152((QuestEntity_o *)v643, 0x80000, questPhase, 0);
    Master_object = (__int64)v643;
    if ( !v643 )
      goto LABEL_383;
    v632->fields.isFatigure = QuestEntity__HasFlag_43027152((QuestEntity_o *)v643, 0x200000, questPhase, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_383;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v642, questId, questPhase, 0) )
    {
      Master_object = sub_1C7BB90(int___TypeInfo, 1);
      if ( !v642 )
        goto LABEL_383;
      v398 = Master_object;
      Master_object = QuestPhaseEntity__GetSingleForceSvtId(v642, 0);
      if ( !v398 )
        goto LABEL_383;
      if ( !*(_DWORD *)(v398 + 24) )
        goto LABEL_384;
      *(_DWORD *)(v398 + 32) = Master_object;
      p_svtIdForceBattleList->klass = (GrandQuestFolderBoardItem_c *)v398;
      sub_1C7BA8C(p_svtIdForceBattleList, v398, v399, v400, v401, v402, v403, v404);
      Master_object = (__int64)v642;
      if ( !v642 )
        goto LABEL_383;
      v632->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v642, 0);
      Master_object = (__int64)v642;
      if ( !v642 )
        goto LABEL_383;
      v632->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v642, 0);
      Master_object = (__int64)v642;
      if ( !v642 )
        goto LABEL_383;
      v632->fields.isInfinityCost = QuestPhaseEntity__IsInfinityCost(v642, 0);
    }
    else
    {
      v632->fields.correctionIconId = -1;
    }
    v405 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v405 = BalanceConfig_TypeInfo;
    }
    v406 = sub_1C7BB90(QuestRestrictionInfo_SlotInfo___TypeInfo, (unsigned int)v405->static_fields->DeckMemberMax);
    p_fields->klass = (GrandQuestFolderBoardItem_c *)v406;
    sub_1C7BA8C(p_fields, v406, v407, v408, v409, v410, v411, v412);
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_383;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_3487898 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    Master_object = (__int64)*p_restrictionSlotDetailDictionary;
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_383;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_3487898 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v413 = 1;
    v414 = 1;
    v628 = p_dialogMessageInfoDictionary;
    while ( 1 )
    {
      Master_object = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Master_object = (__int64)BalanceConfig_TypeInfo;
      }
      if ( v413 > *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 172LL) )
        break;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      if ( !*p_restrictionBaseEntity )
        goto LABEL_383;
      if ( !Master_object )
        goto LABEL_383;
      Master_object = (__int64)RestrictionSlotMaster__GetEntities(
                                 (RestrictionSlotMaster_o *)Master_object,
                                 (*p_restrictionBaseEntity)->fields.restrictionSlotId,
                                 v413,
                                 0);
      if ( !Master_object )
        goto LABEL_383;
      v415 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
      v416 = Master_object;
      questIdb = v414;
      Master_object = (__int64)*p_restrictionSlotDictionary;
      v634 = v415 != 0;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_383;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
        v413,
        (Il2CppObject *)v416,
        (const MethodInfo_3487710 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v417 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v417,
        (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
      v418 = *(_DWORD *)(v416 + 24);
      if ( v418 >= 1 )
      {
        v419 = 0;
        while ( (unsigned int)v419 < v418 )
        {
          v420 = *(_QWORD *)(v416 + 32 + 8 * v419);
          if ( !v420 || !v417 )
            goto LABEL_383;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v417,
                            *(_DWORD *)(v420 + 40),
                            (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            v201 = (Il2CppObject *)*(unsigned int *)(v420 + 40);
            v421 = v417->fields._items;
            v422 = Method_System_Collections_Generic_List_int__Add__;
            ++v417->fields._version;
            if ( !v421 )
              goto LABEL_383;
            v423 = v417->fields._size;
            if ( (unsigned int)v423 >= LODWORD(v421->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v417,
                (int32_t)v201,
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v422[4] + 192LL) + 112LL));
            }
            else
            {
              v417->fields._size = v423 + 1;
              v421->m_Items[v423] = (int)v201;
            }
          }
          v424 = *(_DWORD *)(v420 + 44);
          if ( v424 >= 1 )
          {
            if ( !v236 )
              goto LABEL_383;
            Master_object = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v236,
                              &item,
                              v424,
                              (const MethodInfo_342E348 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (Master_object & 1) != 0 )
            {
              if ( !v224 )
                goto LABEL_383;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v224,
                                item,
                                (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) == 0 )
              {
                v201 = item;
                v431 = v224->fields._items;
                v432 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
                ++v224->fields._version;
                if ( !v431 )
                  goto LABEL_383;
                v433 = v224->fields._size;
                if ( (unsigned int)v433 >= LODWORD(v431->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v224,
                    v201,
                    *(const MethodInfo_383EDFC **)(*(_QWORD *)(v432[4] + 192LL) + 112LL));
                }
                else
                {
                  v434 = &v431->obj.klass + v433;
                  v224->fields._size = v433 + 1;
                  v434[4] = (Il2CppClass *)v201;
                  sub_1C7BA8C(
                    (GrandQuestFolderBoardItem_o *)(v434 + 4),
                    (int32_t)v201,
                    v425,
                    v426,
                    v427,
                    v428,
                    v429,
                    v430);
                }
                v435 = sub_1C7BD34(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v435, 0);
                *(_DWORD *)(v435 + 16) = v413;
                *(_DWORD *)(v435 + 20) = 0;
                if ( !item )
                  goto LABEL_383;
                Master_object = (__int64)*p_dialogMessageInfoDictionary;
                if ( !*p_dialogMessageInfoDictionary )
                  goto LABEL_383;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  (int32_t)item[1].klass,
                  (Il2CppObject *)v435,
                  (const MethodInfo_3487710 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v418 = *(_DWORD *)(v416 + 24);
          if ( (int)++v419 >= v418 )
            goto LABEL_159;
        }
        goto LABEL_384;
      }
LABEL_159:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !Master_object )
        goto LABEL_383;
      Master_object = (__int64)RestrictionSlotDetailMaster__GetEntities(
                                 (RestrictionSlotDetailMaster_o *)Master_object,
                                 v417,
                                 0);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_383;
      v436 = Master_object;
      System_Collections_Generic_Dictionary_int__object___Add(
        *p_restrictionSlotDetailDictionary,
        v413,
        (Il2CppObject *)Master_object,
        (const MethodInfo_3487710 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v438 = (QuestRestrictionInfo_SlotInfo_o *)sub_1C7BD34(QuestRestrictionInfo_SlotInfo_TypeInfo);
      QuestRestrictionInfo_SlotInfo___ctor(v438, v439);
      if ( !klass )
        goto LABEL_383;
      if ( v438 )
      {
        Master_object = sub_1C7BC24(v438, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_object )
        {
          v610 = sub_1C7BD64(0);
          sub_1C7BC10(v610, 0);
        }
      }
      v446 = v413 - 1;
      if ( (unsigned int)(v413 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_384;
      v447 = &klass->_1.image + v446;
      v447[4] = v438;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v447 + 4), (int32_t)v438, v440, v441, v442, v443, v444, v445);
      servantNumMax = v396->fields.servantNumMax;
      if ( servantNumMax < 1 || v446 < servantNumMax )
      {
        v452 = QuestRestrictionInfo___c_TypeInfo;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v452 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__85_0 = (System_Func_object__bool__o *)v452->static_fields->__9__85_0;
        if ( !_9__85_0 )
        {
          if ( !v452->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v452);
            v452 = QuestRestrictionInfo___c_TypeInfo;
          }
          v454 = (Il2CppObject *)v452->static_fields->__9;
          _9__85_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__85_0, v454, Method_QuestRestrictionInfo___c__Setup_b__85_0__, 0);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
          static_fields->__9__85_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__85_0;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__85_0,
            (int32_t)_9__85_0,
            v456,
            v457,
            v458,
            v459,
            v460,
            v461);
        }
        v462 = BasicHelper__Any_object__51746772(
                 (System_Object_array *)v416,
                 (System_Func_T__bool__o *)_9__85_0,
                 (const MethodInfo_31597D4 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v463 = QuestRestrictionInfo___c_TypeInfo;
        v464 = v462;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v463 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__85_1 = (System_Func_object__bool__o *)v463->static_fields->__9__85_1;
        if ( !_9__85_1 )
        {
          if ( !v463->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v463);
            v463 = QuestRestrictionInfo___c_TypeInfo;
          }
          v466 = (Il2CppObject *)v463->static_fields->__9;
          _9__85_1 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__85_1, v466, Method_QuestRestrictionInfo___c__Setup_b__85_1__, 0);
          v467 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v467->__9__85_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__85_1;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v467->__9__85_1,
            (int32_t)_9__85_1,
            v468,
            v469,
            v470,
            v471,
            v472,
            v473);
        }
        v474 = BasicHelper__Any_object__51746772(
                 (System_Object_array *)v416,
                 (System_Func_T__bool__o *)_9__85_1,
                 (const MethodInfo_31597D4 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v475 = QuestRestrictionInfo___c_TypeInfo;
        v476 = v474;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v475 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__85_2 = (System_Func_object__bool__o *)v475->static_fields->__9__85_2;
        if ( !_9__85_2 )
        {
          if ( !v475->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v475);
            v475 = QuestRestrictionInfo___c_TypeInfo;
          }
          v478 = (Il2CppObject *)v475->static_fields->__9;
          _9__85_2 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__85_2, v478, Method_QuestRestrictionInfo___c__Setup_b__85_2__, 0);
          v479 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v479->__9__85_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__85_2;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v479->__9__85_2,
            (int32_t)_9__85_2,
            v480,
            v481,
            v482,
            v483,
            v484,
            v485);
        }
        Master_object = BasicHelper__Any_object__51746772(
                          (System_Object_array *)v416,
                          (System_Func_T__bool__o *)_9__85_2,
                          (const MethodInfo_31597D4 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        if ( v476 || !v464 || (Master_object & 1) != 0 )
        {
          v396 = v632;
          if ( (v464 || !v476) | Master_object & 1 )
          {
            if ( v464 || v476 || (((unsigned int)Master_object ^ 1) & 1) != 0 )
            {
              if ( Master_object & 1 | (!v464 || !v476) )
              {
                if ( ((v464 || v476) & (unsigned int)Master_object & 1) != 0 )
                {
                  v541 = p_fields->klass;
                  if ( !p_fields->klass )
                    goto LABEL_383;
                  if ( (unsigned int)v446 >= LODWORD(v541->_1.namespaze) )
                    goto LABEL_384;
                  v542 = *((_QWORD *)&v541->_1.byval_arg.data + v446);
                  if ( !v542 )
                    goto LABEL_383;
                  *(_DWORD *)(v542 + 16) = 4;
                  v632->fields.isMyServantOrSupport = 1;
                }
              }
              else
              {
                v543 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_383;
                if ( (unsigned int)v446 >= LODWORD(v543->_1.namespaze) )
                  goto LABEL_384;
                v544 = *((_QWORD *)&v543->_1.byval_arg.data + v446);
                if ( !v544 )
                  goto LABEL_383;
                *(_DWORD *)(v544 + 16) = 3;
                v632->fields.isMyServantOrNpc = 1;
              }
            }
            else
            {
              v488 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_383;
              if ( (unsigned int)v446 >= LODWORD(v488->_1.namespaze) )
                goto LABEL_384;
              v489 = *((_QWORD *)&v488->_1.byval_arg.data + v446);
              if ( !v489 )
                goto LABEL_383;
              *(_DWORD *)(v489 + 16) = 2;
              v632->fields.supportInitIndex = v413;
            }
          }
          else
          {
            v490 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_383;
            if ( (unsigned int)v446 >= LODWORD(v490->_1.namespaze) )
              goto LABEL_384;
            v491 = *((_QWORD *)&v490->_1.byval_arg.data + v446);
            if ( !v491 )
              goto LABEL_383;
            *(_DWORD *)(v491 + 16) = 1;
          }
        }
        else
        {
          v396 = v632;
          v486 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_383;
          if ( (unsigned int)v446 >= LODWORD(v486->_1.namespaze) )
            goto LABEL_384;
          v487 = *((_QWORD *)&v486->_1.byval_arg.data + v446);
          if ( !v487 )
            goto LABEL_383;
          *(_DWORD *)(v487 + 16) = 0;
        }
        if ( !v436 )
          goto LABEL_383;
        v492 = *(_DWORD *)(v436 + 24);
        if ( v492 >= 1 )
        {
          v493 = 0;
          while ( v493 < v492 )
          {
            v494 = *(_QWORD *)(v436 + 8LL * (int)v493 + 32);
            if ( !v494 )
              goto LABEL_383;
            if ( !*(_DWORD *)(v416 + 24) )
              break;
            v495 = *(_QWORD *)(v416 + 32);
            if ( !v495 )
              goto LABEL_383;
            if ( *(_DWORD *)(v494 + 16) == *(_DWORD *)(v495 + 40) )
            {
              v496 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_383;
              if ( (unsigned int)v446 >= LODWORD(v496->_1.namespaze) )
                goto LABEL_384;
              v497 = *((_QWORD *)&v496->_1.byval_arg.data + v446);
              if ( !v497 )
                goto LABEL_383;
              if ( *(_DWORD *)(v497 + 16) <= 2u )
              {
                Master_object = *(_QWORD *)(v494 + 40);
                if ( !Master_object )
                  goto LABEL_383;
                v498 = *(System_Collections_Generic_List_object__o **)(v497 + 24);
                Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
                if ( !v498 )
                  goto LABEL_383;
                Master_object = sub_1C7BC24(Master_object, int___TypeInfo);
                v505 = v498->fields._items;
                v506 = Method_System_Collections_Generic_List_int____Add__;
                ++v498->fields._version;
                if ( !v505 )
                  goto LABEL_383;
                v507 = v498->fields._size;
                v508 = Master_object;
                if ( (unsigned int)v507 >= LODWORD(v505->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v498,
                    (Il2CppObject *)Master_object,
                    *(const MethodInfo_383EDFC **)(*(_QWORD *)(v506[4] + 192LL) + 112LL));
                }
                else
                {
                  v509 = &v505->obj.klass + v507;
                  v498->fields._size = v507 + 1;
                  v509[4] = (Il2CppClass *)v508;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v509 + 4), v508, v499, v500, v501, v502, v503, v504);
                }
                v510 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_383;
                if ( (unsigned int)v446 >= LODWORD(v510->_1.namespaze) )
                  goto LABEL_384;
                v511 = *((_QWORD *)&v510->_1.byval_arg.data + v446);
                if ( !v511 )
                  goto LABEL_383;
                Master_object = *(_QWORD *)(v511 + 32);
                if ( !Master_object )
                  goto LABEL_383;
                v201 = (Il2CppObject *)*(unsigned int *)(v494 + 48);
                v512 = *(struct System_Int32_array **)(Master_object + 16);
                v513 = Method_System_Collections_Generic_List_Restriction_RangeType__Add__;
                ++*(_DWORD *)(Master_object + 28);
                if ( !v512 )
                  goto LABEL_383;
                v514 = *(int *)(Master_object + 24);
                if ( (unsigned int)v514 >= LODWORD(v512->max_length) )
                {
                  System_Collections_Generic_List_Int32Enum___AddWithResize(
                    (System_Collections_Generic_List_T__o *)Master_object,
                    (int32_t)v201,
                    *(const MethodInfo_3824604 **)(*(_QWORD *)(v513[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Master_object + 24) = v514 + 1;
                  v512->m_Items[v514] = (int)v201;
                }
              }
              if ( *(_DWORD *)(v494 + 32) == 2 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10333/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, 0);
                v515 = (System_String_o *)Master_object;
              }
              else
              {
                v515 = *(System_String_o **)(v494 + 24);
              }
              v516 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_383;
              if ( (unsigned int)v446 >= LODWORD(v516->_1.namespaze) )
                goto LABEL_384;
              v517 = *((_QWORD *)&v516->_1.byval_arg.data + v446);
              if ( !v517 )
                goto LABEL_383;
              Master_object = System_String__IsNullOrEmpty(*(System_String_o **)(v517 + 40), 0);
              v524 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_383;
              if ( (unsigned int)v446 >= LODWORD(v524->_1.namespaze) )
                goto LABEL_384;
              v525 = *((_QWORD *)&v524->_1.byval_arg.data + v446);
              if ( !v525 )
                goto LABEL_383;
              v526 = (System_String_o **)(v525 + 40);
              if ( (Master_object & 1) == 0 )
                v515 = System_String__Concat_64215176(*v526, (System_String_o *)StringLiteral_43/*"\n"*/, v515, 0);
              *v526 = v515;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v526, (int32_t)v515, v518, v519, v520, v521, v522, v523);
            }
            v492 = *(_DWORD *)(v436 + 24);
            if ( (int)++v493 >= v492 )
              goto LABEL_249;
          }
          goto LABEL_384;
        }
LABEL_249:
        v527 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_383;
        if ( (unsigned int)v446 >= LODWORD(v527->_1.namespaze) )
          goto LABEL_384;
        v528 = QuestRestrictionInfo___c_TypeInfo;
        v529 = *((_QWORD *)&v527->_1.byval_arg.data + v446);
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v528 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__85_3 = (System_Func_object__bool__o *)v528->static_fields->__9__85_3;
        if ( !_9__85_3 )
        {
          if ( !v528->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v528);
            v528 = QuestRestrictionInfo___c_TypeInfo;
          }
          v531 = (Il2CppObject *)v528->static_fields->__9;
          _9__85_3 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__85_3, v531, Method_QuestRestrictionInfo___c__Setup_b__85_3__, 0);
          v532 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v532->__9__85_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__85_3;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v532->__9__85_3,
            (int32_t)_9__85_3,
            v533,
            v534,
            v535,
            v536,
            v537,
            v538);
          v396 = v632;
        }
        Master_object = BasicHelper__Any_object__51746772(
                          (System_Object_array *)v436,
                          (System_Func_T__bool__o *)_9__85_3,
                          (const MethodInfo_31597D4 *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
        if ( !v529 )
          goto LABEL_383;
        *(_BYTE *)(v529 + 48) = (Master_object & 1) == 0;
        v539 = p_fields->klass;
        v450 = questIdb;
        if ( !p_fields->klass )
          goto LABEL_383;
        if ( (unsigned int)v446 >= LODWORD(v539->_1.namespaze) )
          goto LABEL_384;
        v540 = *((_QWORD *)&v539->_1.byval_arg.data + v446);
        if ( !v540 )
          goto LABEL_383;
        p_dialogMessageInfoDictionary = v628;
        if ( *(_DWORD *)(v540 + 16) == 1 )
        {
          if ( *(_BYTE *)(v540 + 48) )
            v396->fields.isNpcEditablePos = 1;
        }
        *(_BYTE *)(v540 + 49) = *(_DWORD *)(v416 + 24) != 0;
      }
      else
      {
        v449 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_383;
        v450 = questIdb;
        if ( (unsigned int)v446 >= LODWORD(v449->_1.namespaze) )
          goto LABEL_384;
        v451 = *((_QWORD *)&v449->_1.byval_arg.data + v446);
        if ( !v451 )
          goto LABEL_383;
        p_dialogMessageInfoDictionary = v628;
        *(_DWORD *)(v451 + 16) = 5;
        *(_BYTE *)(v451 + 48) = 0;
      }
      ++v413;
      v414 = v450 & v634;
    }
    if ( !v224
      || (v545 = System_Collections_Generic_List_object___ToArray(
                   v224,
                   (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__),
          v396->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v545,
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v396->fields.restrictionMessageEntities,
            (int32_t)v545,
            v546,
            v547,
            v548,
            v549,
            v550,
            v551),
          (slotInfos = v396->fields.slotInfos) == 0) )
    {
LABEL_383:
      sub_1C7BD40(Master_object, v201);
    }
    v553 = slotInfos->max_length;
    if ( v553 >= 1 )
    {
      v554 = 0;
      v555 = 0;
      v556 = 0;
      v557 = 0;
      while ( v553 != v554 )
      {
        v558 = slotInfos->m_Items[v554];
        if ( !v558 )
          goto LABEL_383;
        switch ( v558->fields.slotType )
        {
          case 0:
          case 3:
          case 4:
            ++v557;
            break;
          case 1:
            ++v556;
            break;
          case 2:
            ++v555;
            break;
          default:
            break;
        }
        if ( v553 == ++v554 )
          goto LABEL_289;
      }
LABEL_384:
      sub_1C7BD48(Master_object);
    }
    v557 = 0;
    v556 = 0;
    v555 = 0;
LABEL_289:
    if ( v555 == 0 && (v414 & 1) != 0 )
      v396->fields.isNoSupportBattle = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object )
      goto LABEL_383;
    Master_object = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                               (NpcFollowerMaster_o *)Master_object,
                               v396->fields.questId,
                               v396->fields.questPhase,
                               0);
    if ( !Master_object )
      goto LABEL_383;
    v559 = *(_DWORD *)(Master_object + 24);
    if ( v559 >= 1 )
    {
      v560 = 0;
      while ( v559 != v560 )
      {
        v561 = *(_QWORD *)(Master_object + 8LL * v560 + 32);
        if ( !v561 )
          goto LABEL_383;
        if ( !*(_BYTE *)(v561 + 113) && v559 != ++v560 )
          continue;
        goto LABEL_303;
      }
      goto LABEL_384;
    }
    v560 = 0;
LABEL_303:
    Master_object = (__int64)v643;
    if ( !v643 )
      goto LABEL_383;
    HasFlag_43027152 = QuestEntity__HasFlag_43027152((QuestEntity_o *)v643, 0x10000000, questPhase, 0);
    v396->fields.isNpcMultipleBattle = HasFlag_43027152;
    if ( !HasFlag_43027152 )
      v396->fields.isNpcMultipleBattle = v560 < v559 && v557 > 0 && v556 > 0;
    Master_object = (__int64)v643;
    if ( !v643 )
      goto LABEL_383;
    v563 = QuestEntity__HasFlag_43027152((QuestEntity_o *)v643, 0x20000000, questPhase, 0);
    v396->fields.isNpcOnlyBattle = v563;
    if ( !v563 )
      v396->fields.isNpcOnlyBattle = v560 < v559 && v557 == 0 && v556 > 0;
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_383;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 8, 0) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            *p_restrictionSlotDictionary,
                            2,
                            0,
                            (const MethodInfo_315E0D4 *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v565 = 2;
      else
        v565 = 1;
      DeckMemberMax = v396->fields.servantNumMax;
      v396->fields.servantNumMin = v565;
      if ( !DeckMemberMax )
      {
        v567 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v567 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v567->static_fields->DeckMemberMax;
        v396->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v396->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v396->fields.isNpcMultipleBattle )
        v396->fields.myServantNumMax = v557;
    }
    else
    {
      v396->fields.myServantNumMax = v557;
      if ( v557 == 1 && DeckMemberMax == 1 )
      {
        Master_object = (__int64)v396->fields.restrictionSlotDetailDictionary;
        v396->fields.isFixedMyServantSingle = 1;
        if ( !Master_object )
          goto LABEL_383;
        Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                                   1,
                                   (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( Master_object )
        {
          v568 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
          if ( v568 )
          {
            if ( !(_DWORD)v568 )
              goto LABEL_384;
            v569 = *(_QWORD *)(Master_object + 32);
            if ( !v569 )
              goto LABEL_383;
            Master_object = *(_QWORD *)(v569 + 40);
            if ( !Master_object )
              goto LABEL_383;
            v570 = System_Array__Clone((System_Array_o *)Master_object, 0);
            v396->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)sub_1C7BC24(
                                                                                              v570,
                                                                                              int___TypeInfo);
            v571 = sub_1C7BC24(v570, int___TypeInfo);
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&v396->fields.fixedMyServantSingleIndividualities,
              v571,
              v572,
              v573,
              v574,
              v575,
              v576,
              v577);
          }
        }
      }
    }
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_383;
    Master_object = System_Collections_Generic_Dictionary_int__object___get_Count(
                      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                      (const MethodInfo_34873C0 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__object__o *)v396->fields.restrictionSlotDictionary;
    v396->fields.isSupportOnly = (int)Master_object > 0;
    if ( !restrictionSlotDictionary )
      goto LABEL_383;
    Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Values(
                               restrictionSlotDictionary,
                               (const MethodInfo_3487520 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Master_object )
      goto LABEL_383;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v638,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Master_object,
      (const MethodInfo_3B79D54 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v639 = v638;
    do
    {
      v579 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
               &v639,
               (const MethodInfo_35E2804 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v579 )
        break;
      if ( !v639.fields._currentValue )
        sub_1C7BD40(v579, v580);
      monitor = (int)v639.fields._currentValue[1].monitor;
      if ( monitor >= 1 )
      {
        v582 = 0;
        while ( 1 )
        {
          if ( monitor == v582 )
            sub_1C7BD48(v579);
          v583 = *((_QWORD *)&v639.fields._currentValue[2].klass + v582);
          if ( !v583 )
            sub_1C7BD40(v579, v580);
          if ( *(_DWORD *)(v583 + 28) == 1 )
            break;
          if ( monitor == ++v582 )
            goto LABEL_344;
        }
        v396->fields.isSupportOnly = 0;
        break;
      }
LABEL_344:
      ;
    }
    while ( v396->fields.isSupportOnly );
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &v639,
      (const MethodInfo_35E2800 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    v584 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v584, 0);
    v585 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v585, 0);
    v586 = *p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_383;
    v587 = v586->max_length;
    if ( v587 >= 1 )
    {
      v588 = 0;
      while ( 1 )
      {
        if ( v588 >= v587 )
          goto LABEL_384;
        v589 = v586->m_Items[v588];
        if ( !v589 )
          goto LABEL_383;
        Master_object = System_String__IsNullOrEmpty(v589->fields.summary, 0);
        if ( (Master_object & 1) == 0 )
          break;
LABEL_373:
        v587 = v586->max_length;
        if ( (int)++v588 >= v587 )
          goto LABEL_374;
      }
      type = v589->fields.type;
      if ( type == 10 || type == 2 )
      {
        v592 = 1;
      }
      else
      {
        if ( type == 1 )
        {
          targetVals2 = v589->fields.targetVals2;
          if ( !targetVals2 )
            goto LABEL_383;
          v592 = 1;
          v593 = LODWORD(targetVals2->max_length) == 1;
LABEL_361:
          if ( (v593 & v592) != 0 )
          {
            if ( v396->fields.isRestriction )
            {
              if ( !v585 )
                goto LABEL_383;
              System_Text_StringBuilder__Append_64260872(v585, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
            }
            else if ( !v585 )
            {
              goto LABEL_383;
            }
            Master_object = (__int64)System_Text_StringBuilder__Append_64260872(v585, v589->fields.summary, 0);
            v396->fields.isRestriction = 1;
          }
          if ( v592 )
          {
            if ( v396->fields.isRestriction )
            {
              if ( !v584 )
                goto LABEL_383;
              System_Text_StringBuilder__Append_64260872(v584, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
            }
            else if ( !v584 )
            {
              goto LABEL_383;
            }
            Master_object = (__int64)System_Text_StringBuilder__Append_64260872(v584, v589->fields.summary, 0);
            v396->fields.isRestriction = 1;
          }
          goto LABEL_373;
        }
        v592 = 0;
      }
      v593 = 1;
      goto LABEL_361;
    }
LABEL_374:
    if ( !v585 )
      goto LABEL_383;
    Master_object = System_Text_StringBuilder__get_Length(v585, 0);
    if ( (int)Master_object >= 1 )
    {
      v594 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v585->klass->vtable._3_ToString.methodPtr)(
               v585,
               v585->klass->vtable._3_ToString.method);
      p_confirmRestrictionMessage->klass = (GrandQuestFolderBoardItem_c *)v594;
      sub_1C7BA8C(p_confirmRestrictionMessage, v594, v595, v596, v597, v598, v599, v600);
    }
    if ( !v584 )
      goto LABEL_383;
    if ( System_Text_StringBuilder__get_Length(v584, 0) >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v601 = LocalizationManager__Get((System_String_o *)StringLiteral_10296/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      v602 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v584->klass->vtable._3_ToString.methodPtr)(
                                  v584,
                                  v584->klass->vtable._3_ToString.method);
      v603 = System_String__Concat_64215176(v601, (System_String_o *)StringLiteral_43/*"\n"*/, v602, 0);
      p_restrictionMessage->klass = (GrandQuestFolderBoardItem_c *)v603;
      sub_1C7BA8C(p_restrictionMessage, (int32_t)v603, v604, v605, v606, v607, v608, v609);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(this, v202);
  }
}


void QuestRestrictionInfo__SetupOldRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x20
  System_Text_StringBuilder_o *v4; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct RestrictionEntity_array *restrictionEntityList; // x21
  int max_length; // w8
  unsigned int v15; // w22
  struct System_Int32_array **p_deckSvtIdList; // x26
  struct RestrictionEntity_o *v17; // x27
  struct RestrictionEntity_o **p_totalCostRestrictionEntity; // x0
  BalanceConfig_c *v19; // x0
  struct System_Int32_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Boolean_array *DeckPositionList; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int *targetVals; // x8
  int32_t v35; // w8
  struct System_Int32_array *v36; // x8
  il2cpp_array_size_t v37; // x9
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x8
  Il2CppObject *v42; // x25
  int32_t v43; // w0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  BalanceConfig_c *v50; // x0
  struct System_Int32_array *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  struct System_Int32_array *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  struct System_Int32_array *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  struct FollowerInfo_array *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  struct System_Int32_array *v79; // x8
  _BOOL4 isRestriction; // w9
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x8
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  Il2CppClass **v88; // x8
  __int64 v89; // x9
  struct System_Collections_Generic_List_int__o *specifiedPositionList; // x25
  struct System_Int32_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  Il2CppClass **v97; // x8
  struct System_Collections_Generic_List_int__o *v98; // x25
  struct System_Int32_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  struct System_String_o *v102; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  System_String_o *v109; // x0
  struct System_String_o *v110; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  long double v117; // q0
  __int64 v118; // x0
  __int64 v119; // x0
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  bool HasFlag; // w0
  bool v127; // w0
  System_Collections_Generic_List_object__o *v128; // x20
  int32_t v129; // w2
  int32_t v130; // w3
  System_String_o *v131; // x4
  int32_t v132; // w5
  int64_t v133; // x6
  System_String_o *v134; // x7
  bool v135; // w0
  bool HasFlag_43027152; // w0
  bool v137; // w0
  System_Collections_Generic_List_object__o *v138; // x20
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  bool v145; // w0
  int32_t v146; // w2
  int32_t v147; // w3
  System_String_o *v148; // x4
  int32_t v149; // w5
  int64_t v150; // x6
  System_String_o *v151; // x7
  int32_t v152; // w2
  int32_t v153; // w3
  System_String_o *v154; // x4
  int32_t v155; // w5
  int64_t v156; // x6
  System_String_o *v157; // x7
  int32_t v158; // w2
  int32_t v159; // w3
  System_String_o *v160; // x4
  int32_t v161; // w5
  int64_t v162; // x6
  System_String_o *v163; // x7
  GrandQuestFolderBoardItem_o *p_uniqueIndividualitys; // [xsp+18h] [xbp-D8h]
  GrandQuestFolderBoardItem_o *p_uniqueSvtRestrictionEntity; // [xsp+30h] [xbp-C0h]
  GrandQuestFolderBoardItem_o *p_servantNumRestrictionEntity; // [xsp+58h] [xbp-98h]
  GrandQuestFolderBoardItem_o *p_myServantNumRestrictionEntity; // [xsp+60h] [xbp-90h]
  GrandQuestFolderBoardItem_o *p_uniqueIndividualityEntity; // [xsp+70h] [xbp-80h]
  QuestRestrictionInfoEntity_o *v169; // [xsp+78h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v170; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4CEF997 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C7BAE8(&FollowerInfo___TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_10296/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_4CEF997 = 1;
  }
  v170 = 0;
  entity = 0;
  v169 = 0;
  v3 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  v4 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0);
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_163;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    p_uniqueIndividualitys = (GrandQuestFolderBoardItem_o *)&this->fields.uniqueIndividualitys;
    p_uniqueIndividualityEntity = (GrandQuestFolderBoardItem_o *)&this->fields.uniqueIndividualityEntity;
    p_servantNumRestrictionEntity = (GrandQuestFolderBoardItem_o *)&this->fields.servantNumRestrictionEntity;
    p_myServantNumRestrictionEntity = (GrandQuestFolderBoardItem_o *)&this->fields.myServantNumRestrictionEntity;
    v15 = 0;
    p_deckSvtIdList = &this->fields.deckSvtIdList;
    p_uniqueSvtRestrictionEntity = (GrandQuestFolderBoardItem_o *)&this->fields.uniqueSvtRestrictionEntity;
    while ( 1 )
    {
      if ( v15 >= max_length )
        goto LABEL_164;
      v17 = restrictionEntityList->m_Items[v15];
      if ( !v17 )
        goto LABEL_163;
      switch ( v17->fields.type )
      {
        case 3:
          p_totalCostRestrictionEntity = &this->fields.totalCostRestrictionEntity;
          this->fields.totalCostRestrictionEntity = v17;
          goto LABEL_52;
        case 5:
          this->fields.supportOnlyRestrictionEntity = v17;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.supportOnlyRestrictionEntity,
            (int32_t)v17,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isSupportOnly = 1;
          goto LABEL_78;
        case 6:
          p_uniqueSvtRestrictionEntity->klass = (GrandQuestFolderBoardItem_c *)v17;
          sub_1C7BA8C(p_uniqueSvtRestrictionEntity, (int32_t)v17, v7, v8, v9, v10, v11, v12);
          v19 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v19 = BalanceConfig_TypeInfo;
          }
          v20 = (struct System_Int32_array *)sub_1C7BB90(
                                               int___TypeInfo,
                                               (unsigned int)v19->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v20;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_deckSvtIdList, (int32_t)v20, v21, v22, v23, v24, v25, v26);
          this->fields.isUniqueServant = 1;
          goto LABEL_78;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v17;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.fixedSupportPositionRestrictionEntity,
            (int32_t)v17,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          DeckPositionList = RestrictionEntity__getDeckPositionList(v17, 0);
          this->fields.supportPositionList = DeckPositionList;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.supportPositionList,
            (int32_t)DeckPositionList,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          this->fields.isFixedSupportPosition = 1;
          goto LABEL_78;
        case 8:
          this->fields.fixedMyServantPositionRestrictionEntity = v17;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
            (int32_t)v17,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isFixedMyServantPosition = 1;
          goto LABEL_78;
        case 9:
          this->fields.fixedMyServantSingleRestrictionEntity = v17;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.fixedMyServantSingleRestrictionEntity,
            (int32_t)v17,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isFixedMyServantSingle = 1;
          goto LABEL_78;
        case 0xA:
          p_servantNumRestrictionEntity->klass = (GrandQuestFolderBoardItem_c *)v17;
          sub_1C7BA8C(p_servantNumRestrictionEntity, (int32_t)v17, v7, v8, v9, v10, v11, v12);
          targetVals = (int *)v17->fields.targetVals;
          if ( v17->fields.rangeType == 5 )
          {
            if ( targetVals && targetVals[6] >= 2 )
            {
              this->fields.servantNumMin = targetVals[8];
              v35 = targetVals[9];
LABEL_58:
              this->fields.servantNumMax = v35;
            }
          }
          else if ( targetVals )
          {
            v89 = *((_QWORD *)targetVals + 3);
            if ( v89 )
            {
              if ( !(_DWORD)v89 )
                goto LABEL_164;
              v35 = targetVals[8];
              goto LABEL_58;
            }
          }
LABEL_78:
          max_length = restrictionEntityList->max_length;
          if ( (int)++v15 >= max_length )
            goto LABEL_79;
          break;
        case 0xB:
          p_myServantNumRestrictionEntity->klass = (GrandQuestFolderBoardItem_c *)v17;
          sub_1C7BA8C(p_myServantNumRestrictionEntity, (int32_t)v17, v7, v8, v9, v10, v11, v12);
          v36 = v17->fields.targetVals;
          if ( !v36 )
            goto LABEL_78;
          v37 = v36->max_length;
          if ( !v37 )
            goto LABEL_78;
          if ( !(_DWORD)v37 )
            goto LABEL_164;
          this->fields.myServantNumMax = v36->m_Items[0];
          goto LABEL_78;
        case 0xC:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_163;
          items = myServantOrNpcRestrictionEntityList->fields._items;
          v39 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !items )
            goto LABEL_163;
          size = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v17,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            myServantOrNpcRestrictionEntityList->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v17;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v17, v7, v8, v9, v10, v11, v12);
          }
          specifiedPositionList = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v17,
                                                                                               0);
          if ( !specifiedPositionList )
            goto LABEL_163;
          v91 = specifiedPositionList->fields._items;
          v92 = Method_System_Collections_Generic_List_int__Add__;
          ++specifiedPositionList->fields._version;
          if ( !v91 )
            goto LABEL_163;
          v93 = specifiedPositionList->fields._size;
          v6 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v93 >= LODWORD(v91->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              specifiedPositionList,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
          }
          else
          {
            specifiedPositionList->fields._size = v93 + 1;
            v91->m_Items[v93] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrNpc = 1;
          goto LABEL_78;
        case 0xE:
          this->fields.fixedServantPositionRestrictionEntity = v17;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.fixedServantPositionRestrictionEntity,
            (int32_t)v17,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isNeedStarting = 1;
          goto LABEL_78;
        case 0xF:
          p_uniqueIndividualityEntity->klass = (GrandQuestFolderBoardItem_c *)v17;
          sub_1C7BA8C(p_uniqueIndividualityEntity, (int32_t)v17, v7, v8, v9, v10, v11, v12);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v17->fields.targetVals;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_163;
          v42 = System_Array__Clone((System_Array_o *)myServantOrNpcRestrictionEntityList, 0);
          p_uniqueIndividualitys->klass = (GrandQuestFolderBoardItem_c *)sub_1C7BC24(v42, int___TypeInfo);
          v43 = sub_1C7BC24(v42, int___TypeInfo);
          sub_1C7BA8C(p_uniqueIndividualitys, v43, v44, v45, v46, v47, v48, v49);
          v50 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v50 = BalanceConfig_TypeInfo;
          }
          v51 = (struct System_Int32_array *)sub_1C7BB90(
                                               int___TypeInfo,
                                               (unsigned int)v50->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v51;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_deckSvtIdList, (int32_t)v51, v52, v53, v54, v55, v56, v57);
          v58 = (struct System_Int32_array *)sub_1C7BB90(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckLimitCountList = v58;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.deckLimitCountList,
            (int32_t)v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64);
          v65 = (struct System_Int32_array *)sub_1C7BB90(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckDispLimitCountList = v65;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.deckDispLimitCountList,
            (int32_t)v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71);
          v72 = (struct FollowerInfo_array *)sub_1C7BB90(
                                               FollowerInfo___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckNpcInfoList = v72;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.deckNpcInfoList,
            (int32_t)v72,
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
          this->fields.isUniqueIndividuality = 1;
          goto LABEL_78;
        case 0x10:
          goto LABEL_65;
        case 0x11:
          this->fields.isDataLostBattle = 1;
          v79 = v17->fields.targetVals;
          if ( !v79 )
            goto LABEL_163;
          if ( !LODWORD(v79->max_length) )
            goto LABEL_164;
          isRestriction = this->fields.isRestriction;
          this->fields.dataLostBattleId = v79->m_Items[0];
          if ( isRestriction )
          {
LABEL_11:
            if ( !v3 )
              goto LABEL_163;
            System_Text_StringBuilder__Append_64260872(v3, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
          }
          else
          {
LABEL_40:
            if ( !v3 )
              goto LABEL_163;
          }
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_64260872(
                                                                                               v3,
                                                                                               v17->fields.name,
                                                                                               0);
          this->fields.isRestriction = 1;
          goto LABEL_78;
        case 0x15:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.grandServantRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_163;
          goto LABEL_49;
        case 0x18:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.grandServantRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_163;
          v81 = myServantOrNpcRestrictionEntityList->fields._items;
          v82 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v81 )
            goto LABEL_163;
          v83 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v17,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
          }
          else
          {
            v84 = &v81->obj.klass + v83;
            myServantOrNpcRestrictionEntityList->fields._size = v83 + 1;
            v84[4] = (Il2CppClass *)v17;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v84 + 4), (int32_t)v17, v7, v8, v9, v10, v11, v12);
          }
LABEL_65:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_163;
          v94 = myServantOrNpcRestrictionEntityList->fields._items;
          v95 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v94 )
            goto LABEL_163;
          v96 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v96 >= LODWORD(v94->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v17,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
          }
          else
          {
            v97 = &v94->obj.klass + v96;
            myServantOrNpcRestrictionEntityList->fields._size = v96 + 1;
            v97[4] = (Il2CppClass *)v17;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v97 + 4), (int32_t)v17, v7, v8, v9, v10, v11, v12);
          }
          v98 = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v17,
                                                                                               0);
          if ( !v98 )
            goto LABEL_163;
          v99 = v98->fields._items;
          v100 = Method_System_Collections_Generic_List_int__Add__;
          ++v98->fields._version;
          if ( !v99 )
            goto LABEL_163;
          v101 = v98->fields._size;
          v6 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v101 >= LODWORD(v99->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v98,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
          }
          else
          {
            v98->fields._size = v101 + 1;
            v99->m_Items[v101] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrSupport = 1;
          goto LABEL_78;
        case 0x19:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.activeGrandBoardRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_163;
LABEL_49:
          v85 = myServantOrNpcRestrictionEntityList->fields._items;
          v86 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v85 )
            goto LABEL_163;
          v87 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v87 >= LODWORD(v85->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v17,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
          }
          else
          {
            v88 = &v85->obj.klass + v87;
            myServantOrNpcRestrictionEntityList->fields._size = v87 + 1;
            v88[4] = (Il2CppClass *)v17;
            p_totalCostRestrictionEntity = (struct RestrictionEntity_o **)(v88 + 4);
LABEL_52:
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)p_totalCostRestrictionEntity,
              (int32_t)v17,
              v7,
              v8,
              v9,
              v10,
              v11,
              v12);
          }
          goto LABEL_78;
        default:
          if ( this->fields.isRestriction )
            goto LABEL_11;
          goto LABEL_40;
      }
    }
  }
LABEL_79:
  if ( this->fields.isRestriction )
  {
    if ( !v3 )
      goto LABEL_163;
    v102 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v3->klass->vtable._3_ToString.methodPtr)(
                                       v3,
                                       v3->klass->vtable._3_ToString.method);
    this->fields.confirmRestrictionMessage = v102;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.confirmRestrictionMessage,
      (int32_t)v102,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v109 = LocalizationManager__Get((System_String_o *)StringLiteral_10296/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    v110 = System_String__Concat_64215176(
             v109,
             (System_String_o *)StringLiteral_43/*"\n"*/,
             this->fields.confirmRestrictionMessage,
             0);
    this->fields.restrictionMessage = v110;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.restrictionMessage,
      (int32_t)v110,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_163;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_163;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)myServantOrNpcRestrictionEntityList,
    &entity,
    this->fields.questId,
    (const MethodInfo_342E348 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_163;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_163;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)myServantOrNpcRestrictionEntityList,
    &v170,
    this->fields.questId,
    this->fields.questPhase,
    0);
  v118 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v118 + 309) & 1) == 0 )
    v118 = sub_1C51B7C(v117);
  v119 = *(_QWORD *)(*(_QWORD *)(v118 + 192) + 16LL);
  if ( (*(_BYTE *)(v119 + 309) & 1) == 0 )
    v119 = sub_1C51B7C(v117);
  myServantOrNpcRestrictionEntityList = **(System_Collections_Generic_List_object__o ***)(v119 + 184);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_163;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_163;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         (QuestRestrictionInfoMaster_o *)myServantOrNpcRestrictionEntityList,
         &v169,
         this->fields.questId,
         this->fields.questPhase,
         0) )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
    if ( !v169 )
      goto LABEL_163;
    if ( QuestRestrictionInfoEntity__HasFlag(v169, 0x100000, 0) )
    {
      this->fields.isNoSupportBattle = 1;
      goto LABEL_113;
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
    if ( !v169 )
      goto LABEL_163;
    HasFlag = QuestRestrictionInfoEntity__HasFlag(v169, 0x400000000000000LL, 0);
    this->fields.isNoSupportBattle = HasFlag;
    if ( HasFlag )
      goto LABEL_113;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
    if ( !v169 )
      goto LABEL_163;
    v127 = QuestRestrictionInfoEntity__HasFlag(v169, 0x80000, 0);
    this->fields.isSupportOnlyForceBattle = v127;
    if ( v127 )
    {
LABEL_113:
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
      if ( v169 )
      {
        this->fields.isNpcMultipleBattle = QuestRestrictionInfoEntity__HasFlag(v169, 0x10000000, 0);
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
        if ( v169 )
        {
          this->fields.isNpcOnlyBattle = QuestRestrictionInfoEntity__HasFlag(v169, 0x20000000, 0);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
          if ( v169 )
          {
            this->fields.isNpcEditablePos = QuestRestrictionInfoEntity__HasFlag(v169, 0x800000000LL, 0);
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
            if ( v169 )
            {
              this->fields.isNotTransitionSupportList = QuestRestrictionInfoEntity__HasFlag(v169, 0x80000000000000LL, 0);
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
              if ( v169 )
              {
                QuestRestrictionInfoEntity__GetOverwriteLimitCountSvtIds(
                  v169,
                  &this->fields.overwriteLimitCountSvtIds,
                  &this->fields.overwriteLimitCounts,
                  &this->fields.overwriteLimitCountIconIds,
                  0);
                myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
                if ( v169 )
                {
                  v135 = QuestRestrictionInfoEntity__HasFlag(v169, 0x400000000000000LL, 0);
                  this->fields.isAllOutBattle = v135;
                  if ( v135 )
                  {
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_163;
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_((DataManager_o *)myServantOrNpcRestrictionEntityList, (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_163;
                    this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                                         (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                                         this->fields.questId,
                                                         17,
                                                         0);
                  }
                  if ( entity )
                    this->fields.isFatigure = QuestEntity__HasFlag_43027152(
                                                (QuestEntity_o *)entity,
                                                0x200000,
                                                this->fields.questPhase,
                                                0);
                  if ( v170 )
                  {
                    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v170, 0);
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v170;
                    if ( !v170 )
                      goto LABEL_163;
                    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v170, 0);
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v170;
                    if ( !v170 )
                      goto LABEL_163;
                    this->fields.isInfinityCost = QuestPhaseEntity__IsInfinityCost(v170, 0);
                  }
                  else
                  {
                    this->fields.correctionIconId = -1;
                  }
                  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
                  if ( v169 )
                  {
                    this->fields.isNotSingleSupportOnly = QuestRestrictionInfoEntity__HasFlag(
                                                            v169,
                                                            0x1000000000000000LL,
                                                            0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_163:
      sub_1C7BD40(myServantOrNpcRestrictionEntityList, v6);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
    if ( !v169 )
      goto LABEL_163;
    if ( QuestRestrictionInfoEntity__HasFlag(v169, 0x1000000, 0) )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
      if ( !v169 )
        goto LABEL_163;
      this->fields.eventDeckNum = QuestRestrictionInfoEntity__GetUserEventDeckNo(v169, 0);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1C7BB90(int___TypeInfo, 1);
    if ( !v169 )
      goto LABEL_163;
    v128 = myServantOrNpcRestrictionEntityList;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetSingleForceSvtId(
                                                                                         v169,
                                                                                         0);
    if ( !v128 )
      goto LABEL_163;
    if ( v128->fields._size )
    {
      LODWORD(v128->fields._syncRoot) = (_DWORD)myServantOrNpcRestrictionEntityList;
      this->fields.svtIdForceBattleList = (struct System_Int32_array *)v128;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.svtIdForceBattleList,
        (int32_t)v128,
        v129,
        v130,
        v131,
        v132,
        v133,
        v134);
      goto LABEL_113;
    }
LABEL_164:
    sub_1C7BD48(myServantOrNpcRestrictionEntityList);
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_43027152((QuestEntity_o *)entity, 0x100000, this->fields.questPhase, 0) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
      if ( !entity )
        goto LABEL_163;
      HasFlag_43027152 = QuestEntity__HasFlag_43027152(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0);
      this->fields.isNoSupportBattle = HasFlag_43027152;
      if ( !HasFlag_43027152 )
      {
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
        if ( !entity )
          goto LABEL_163;
        v137 = QuestEntity__HasFlag_43027152((QuestEntity_o *)entity, 0x80000, this->fields.questPhase, 0);
        this->fields.isSupportOnlyForceBattle = v137;
        if ( !v137 )
        {
          if ( v170 )
          {
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
            if ( !entity )
              goto LABEL_163;
            if ( QuestEntity__HasFlag_43027152((QuestEntity_o *)entity, 0x1000000, this->fields.questPhase, 0) )
            {
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v170;
              if ( !v170 )
                goto LABEL_163;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v170, 0);
            }
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1C7BB90(
                                                                                                 int___TypeInfo,
                                                                                                 1);
            if ( !v170 )
              goto LABEL_163;
            v138 = myServantOrNpcRestrictionEntityList;
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__GetSingleForceSvtId(
                                                                                                 v170,
                                                                                                 0);
            if ( !v138 )
              goto LABEL_163;
            if ( !v138->fields._size )
              goto LABEL_164;
            LODWORD(v138->fields._syncRoot) = (_DWORD)myServantOrNpcRestrictionEntityList;
            this->fields.svtIdForceBattleList = (struct System_Int32_array *)v138;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&this->fields.svtIdForceBattleList,
              (int32_t)v138,
              v139,
              v140,
              v141,
              v142,
              v143,
              v144);
          }
        }
      }
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    this->fields.isFatigure = QuestEntity__HasFlag_43027152(
                                (QuestEntity_o *)entity,
                                0x200000,
                                this->fields.questPhase,
                                0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    v145 = QuestEntity__HasFlag_43027152((QuestEntity_o *)entity, 0x400000000000000LL, this->fields.questPhase, 0);
    this->fields.isAllOutBattle = v145;
    if ( v145 )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_163;
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                           (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                           (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_163;
      this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                           (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                           this->fields.questId,
                                           17,
                                           0);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    this->fields.isNpcMultipleBattle = QuestEntity__HasFlag_43027152(
                                         (QuestEntity_o *)entity,
                                         0x10000000,
                                         this->fields.questPhase,
                                         0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    this->fields.isNpcOnlyBattle = QuestEntity__HasFlag_43027152(
                                     (QuestEntity_o *)entity,
                                     0x20000000,
                                     this->fields.questPhase,
                                     0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    this->fields.isNpcEditablePos = QuestEntity__HasFlag_43027152(
                                      (QuestEntity_o *)entity,
                                      0x800000000LL,
                                      this->fields.questPhase,
                                      0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    this->fields.isNotTransitionSupportList = QuestEntity__HasFlag_43027152(
                                                (QuestEntity_o *)entity,
                                                0x80000000000000LL,
                                                this->fields.questPhase,
                                                0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_43027152(
                                            (QuestEntity_o *)entity,
                                            0x1000000000000000LL,
                                            this->fields.questPhase,
                                            0);
  }
  if ( v170 )
  {
    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v170, 0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v170;
    if ( !v170 )
      goto LABEL_163;
    QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
      v170,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      &this->fields.overwriteLimitCountRangeTypes,
      0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v170;
    if ( !v170 )
      goto LABEL_163;
    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v170, 0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v170;
    if ( !v170 )
      goto LABEL_163;
    this->fields.isInfinityCost = QuestPhaseEntity__IsInfinityCost(v170, 0);
  }
  else
  {
    this->fields.correctionIconId = -1;
    this->fields.overwriteLimitCountSvtIds = 0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.overwriteLimitCountSvtIds,
      0,
      v120,
      v121,
      v122,
      v123,
      v124,
      v125);
    this->fields.overwriteLimitCounts = 0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.overwriteLimitCounts,
      0,
      v146,
      v147,
      v148,
      v149,
      v150,
      v151);
    this->fields.overwriteLimitCountIconIds = 0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.overwriteLimitCountIconIds,
      0,
      v152,
      v153,
      v154,
      v155,
      v156,
      v157);
    this->fields.overwriteLimitCountRangeTypes = 0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.overwriteLimitCountRangeTypes,
      0,
      v158,
      v159,
      v160,
      v161,
      v162,
      v163);
  }
}


bool QuestRestrictionInfo__TryGetFixedMasterEquipInfo(
        QuestRestrictionInfo_o *this,
        int32_t *genderImageId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v6; // x1
  int klass_high; // w8
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int32_t v11; // w0
  __int64 v12; // x0
  System_ArgumentOutOfRangeException_o *v13; // x19
  __int64 v14; // x0
  int32_t outFixedEquipLv; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *v16; // [xsp+10h] [xbp-40h] BYREF
  int32_t outFixedEquipId; // [xsp+1Ch] [xbp-34h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4CEF9E6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EquipMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEF9E6 = 1;
  }
  entity = 0;
  outFixedEquipId = 0;
  v16 = 0;
  outFixedEquipLv = 0;
  *genderImageId = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_28;
  if ( QuestPhaseMaster__TryGetEntity(
         (QuestPhaseMaster_o *)Master_object,
         &entity,
         this->fields.questId,
         this->fields.questPhase,
         0) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_28;
    if ( QuestPhaseEntity__TryGetFixedMasterEquip(entity, &outFixedEquipId, &outFixedEquipLv, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EquipMaster___);
      if ( !Master_object )
        goto LABEL_28;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             Master_object,
             &v16,
             outFixedEquipId,
             (const MethodInfo_342E348 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGameMaster__getSelfUserGame(0);
        if ( Master_object )
        {
          klass_high = HIDWORD(Master_object[1].klass);
          switch ( klass_high )
          {
            case 3:
              v11 = 0;
              outFixedEquipLv = 0;
LABEL_27:
              *genderImageId = v11;
              return 1;
            case 2:
              if ( v16 )
              {
                klass = v16[5].klass;
                monitor = v16[5].monitor;
                goto LABEL_24;
              }
              break;
            case 1:
              if ( v16 )
              {
                klass = v16[4].klass;
                monitor = v16[4].monitor;
LABEL_24:
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v19.fields.currentCryptoKey = klass;
                *(_QWORD *)&v19.fields.fakeValue = monitor;
                v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v19, 0);
                outFixedEquipLv = v11;
                goto LABEL_27;
              }
              break;
            default:
              v12 = sub_1C7BAFC(&System_ArgumentOutOfRangeException_TypeInfo);
              v13 = (System_ArgumentOutOfRangeException_o *)sub_1C7BD34(v12);
              System_ArgumentOutOfRangeException___ctor(v13, 0);
              v14 = sub_1C7BAFC(&Method_QuestRestrictionInfo_TryGetFixedMasterEquipInfo__);
              sub_1C7BC10(v13, v14);
          }
        }
LABEL_28:
        sub_1C7BD40(Master_object, v6);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        bool isFollower,
        const MethodInfo *method)
{
  return !isFollower
      && QuestRestrictionInfo__GetOverwriteLimitCountRangeType(this, svtId, (const MethodInfo *)isFollower) == 1;
}


int32_t QuestRestrictionInfo__get_ActiveGrandBoardCount(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_RestrictionEntity__o *activeGrandBoardRestrictionEntityList; // x19
  QuestRestrictionInfo___c_c *v5; // x0
  System_Func_object__object__o *_9__221_0; // x20
  Il2CppObject *v7; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4CEF9E3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_SelectMany_RestrictionEntity__int___);
    sub_1C7BAE8(&System_Func_RestrictionEntity__IEnumerable_int___TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__get_ActiveGrandBoardCount_b__221_0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c_TypeInfo);
    byte_4CEF9E3 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields.activeGrandBoardRestrictionEntityList,
         0) )
  {
    return 0;
  }
  activeGrandBoardRestrictionEntityList = this->fields.activeGrandBoardRestrictionEntityList;
  v5 = QuestRestrictionInfo___c_TypeInfo;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v5 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__221_0 = (System_Func_object__object__o *)v5->static_fields->__9__221_0;
  if ( !_9__221_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestRestrictionInfo___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__221_0 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_RestrictionEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__221_0,
      v7,
      Method_QuestRestrictionInfo___c__get_ActiveGrandBoardCount_b__221_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__221_0 = (struct System_Func_RestrictionEntity__IEnumerable_int___o *)_9__221_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__221_0,
      (int32_t)_9__221_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)activeGrandBoardRestrictionEntityList,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__221_0,
                                                               (const MethodInfo_31A8760 *)Method_System_Linq_Enumerable_SelectMany_RestrictionEntity__int___);
  v16 = System_Linq_Enumerable__Distinct_int_(
          v15,
          (const MethodInfo_3192930 *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__Count_int_(v16, (const MethodInfo_318F334 *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t QuestRestrictionInfo__get_GrandServantRestrictionPosCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_RestrictionEntity__o *grandServantRestrictionEntityList; // x19
  QuestRestrictionInfo___c_c *v5; // x0
  System_Func_object__object__o *_9__217_0; // x20
  Il2CppObject *v7; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4CEF9E0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_SelectMany_RestrictionEntity__int___);
    sub_1C7BAE8(&System_Func_RestrictionEntity__IEnumerable_int___TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__get_GrandServantRestrictionPosCount_b__217_0__);
    sub_1C7BAE8(&QuestRestrictionInfo___c_TypeInfo);
    byte_4CEF9E0 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.grandServantRestrictionEntityList, 0) )
    return 0;
  grandServantRestrictionEntityList = this->fields.grandServantRestrictionEntityList;
  v5 = QuestRestrictionInfo___c_TypeInfo;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v5 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__217_0 = (System_Func_object__object__o *)v5->static_fields->__9__217_0;
  if ( !_9__217_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestRestrictionInfo___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__217_0 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_RestrictionEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__217_0,
      v7,
      Method_QuestRestrictionInfo___c__get_GrandServantRestrictionPosCount_b__217_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__217_0 = (struct System_Func_RestrictionEntity__IEnumerable_int___o *)_9__217_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__217_0,
      (int32_t)_9__217_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)grandServantRestrictionEntityList,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__217_0,
                                                               (const MethodInfo_31A8760 *)Method_System_Linq_Enumerable_SelectMany_RestrictionEntity__int___);
  v16 = System_Linq_Enumerable__Distinct_int_(
          v15,
          (const MethodInfo_3192930 *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__Count_int_(v16, (const MethodInfo_318F334 *)Method_System_Linq_Enumerable_Count_int___);
}


void QuestRestrictionInfo_DialogMessageInfo___ctor(
        QuestRestrictionInfo_DialogMessageInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields = 0;
}


void QuestRestrictionInfo_SlotInfo___ctor(QuestRestrictionInfo_SlotInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_T__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  struct System_String_o **p_summary; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4CEF9EB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF9EB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.slotType = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.individualityList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_T__o *)sub_1C7BD34(System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_3823DB0 *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.rangeTypeList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  this->fields.summary = (struct System_String_o *)StringLiteral_1/*""*/;
  p_summary = &this->fields.summary;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_summary, v17, v19, v20, v21, v22, v23, v24);
  *((_WORD *)p_summary + 4) = 1;
}


void QuestRestrictionInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEF9EC & 1) == 0 )
  {
    sub_1C7BAE8(&QuestRestrictionInfo___c_TypeInfo);
    byte_4CEF9EC = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(QuestRestrictionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRestrictionInfo___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionInfo___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)QuestRestrictionInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestRestrictionInfo___c___ctor(QuestRestrictionInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__108_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C7BD40(this, 0);
  return e->fields.type != 1 || RestrictionEntity__IsRestrictionTarget(e, 1, 0);
}


System_String_o *QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__108_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C7BD40(this, 0);
  return e->fields.name;
}


System_String_o *QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__108_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C7BD40(this, 0);
  return e->fields.name;
}


bool QuestRestrictionInfo___c___GetRestrictionMessageEntityList_b__110_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  unsigned int v3; // w8
  _BOOL4 v4; // w0

  if ( !e )
    sub_1C7BD40(this, 0);
  v3 = e->fields.type - 1;
  if ( v3 > 0x10 )
    LOBYTE(v4) = 0;
  else
    return (0x1100Bu >> v3) & 1;
  return v4;
}


System_String_o *QuestRestrictionInfo___c___GetRestrictionMessage_b__109_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C7BD40(this, 0);
  return e->fields.name;
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__100_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C7BD40(this, 0);
  return e->fields.type == 1 && e->fields.targetVals != 0;
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__100_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C7BD40(this, 0);
  return RestrictionEntity__IsRestrictionTarget(e, 3, 0) && RestrictionEntity__IsRestrictionTarget(e, 2, 0);
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__100_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  System_Int32_array *targetVals; // x19
  QuestRestrictionInfo___c_c *v5; // x0
  System_Func_int__bool__o *_9__100_4; // x20
  Il2CppObject *v7; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CEF9EE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_int____78794392);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    sub_1C7BAE8(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__100_4__);
    this = (QuestRestrictionInfo___c_o *)sub_1C7BAE8(&QuestRestrictionInfo___c_TypeInfo);
    byte_4CEF9EE = 1;
  }
  if ( !e )
    sub_1C7BD40(this, e);
  if ( e->fields.rangeType == 1 )
  {
    targetVals = e->fields.targetVals;
    v5 = QuestRestrictionInfo___c_TypeInfo;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v5 = QuestRestrictionInfo___c_TypeInfo;
    }
    _9__100_4 = v5->static_fields->__9__100_4;
    if ( !_9__100_4 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = QuestRestrictionInfo___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__100_4 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(_9__100_4, v7, Method_QuestRestrictionInfo___c__IsClassRestriction_b__100_4__, 0);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__100_4 = _9__100_4;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__100_4,
        (int32_t)_9__100_4,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    return !BasicHelper__Any_int__51745960(
              targetVals,
              (System_Func_T__bool__o *)_9__100_4,
              (const MethodInfo_31594A8 *)Method_BasicHelper_Any_int____78794392);
  }
  else
  {
    return 1;
  }
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__100_4(
        QuestRestrictionInfo___c_o *this,
        int32_t i,
        const MethodInfo *method)
{
  if ( (byte_4CEF9EF & 1) == 0 )
  {
    sub_1C7BAE8(&Individuality_TypeInfo);
    byte_4CEF9EF = 1;
  }
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return !Individuality__IsServantClassIndividuality(i, 0);
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualitySlot_b__98_0(
        QuestRestrictionInfo___c_o *this,
        QuestRestrictionInfo_SlotInfo_o *s,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *individualityList; // x8

  if ( (byte_4CEF9ED & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_int____get_Count__);
    byte_4CEF9ED = 1;
  }
  if ( !s || (individualityList = s->fields.individualityList) == 0 )
    sub_1C7BD40(this, s);
  return individualityList->fields._size > 0;
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__97_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C7BD40(this, 0);
  return e->fields.type == 1;
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__97_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionWholeEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C7BD40(this, 0);
  return e->fields.type == 1;
}


bool QuestRestrictionInfo___c___Setup_b__85_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.type == 1;
}


bool QuestRestrictionInfo___c___Setup_b__85_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.type == 3;
}


bool QuestRestrictionInfo___c___Setup_b__85_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.type == 2;
}


bool QuestRestrictionInfo___c___Setup_b__85_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.type == 2;
}


System_Collections_Generic_IEnumerable_int__o *QuestRestrictionInfo___c___get_ActiveGrandBoardCount_b__221_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C7BD40(this, 0);
  return (System_Collections_Generic_IEnumerable_int__o *)entity->fields.targetVals;
}


System_Collections_Generic_IEnumerable_int__o *QuestRestrictionInfo___c___get_GrandServantRestrictionPosCount_b__217_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( (byte_4CEF9F0 & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_1C7BAE8(&int___TypeInfo);
    byte_4CEF9F0 = 1;
  }
  if ( !entity )
    goto LABEL_9;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetVals2, 0) )
    return (System_Collections_Generic_IEnumerable_int__o *)entity->fields.targetVals2;
  this = (QuestRestrictionInfo___c_o *)sub_1C7BB90(int___TypeInfo, 1);
  if ( !this )
LABEL_9:
    sub_1C7BD40(this, entity);
  if ( !LODWORD(this[1].monitor) )
    sub_1C7BD48(this);
  LODWORD(this[2].klass) = 1;
  return (System_Collections_Generic_IEnumerable_int__o *)this;
}


void QuestRestrictionInfo___c__DisplayClass100_0___ctor(
        QuestRestrictionInfo___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass100_0___IsClassRestriction_b__3(
        QuestRestrictionInfo___c__DisplayClass100_0_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C7BD40(this, 0);
  return RestrictionEntity__IsRestriction(e, this->fields.individuality, 0);
}


void QuestRestrictionInfo___c__DisplayClass101_0___ctor(
        QuestRestrictionInfo___c__DisplayClass101_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass101_0___IsMySvtOrSupportSlotClassRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass101_0_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C7BD40(this, 0);
  return entity->fields.type == 24 && RestrictionEntity__GetSpecifiedPosition(entity, 0) == this->fields.initPos;
}


void QuestRestrictionInfo___c__DisplayClass184_0___ctor(
        QuestRestrictionInfo___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass184_0___IsMyServantOrNpcRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass184_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass185_0___ctor(
        QuestRestrictionInfo___c__DisplayClass185_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass185_0___IsSelectableNormalSupport_b__0(
        QuestRestrictionInfo___c__DisplayClass185_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass186_0___ctor(
        QuestRestrictionInfo___c__DisplayClass186_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass186_0___IsNotIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass186_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass187_0___ctor(
        QuestRestrictionInfo___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass187_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass187_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass188_0___ctor(
        QuestRestrictionInfo___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass188_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass188_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass189_0___ctor(
        QuestRestrictionInfo___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass189_0___GetRestrictedName_b__0(
        QuestRestrictionInfo___c__DisplayClass189_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_o *questRestrictionEntity; // x8

  if ( !x || (questRestrictionEntity = this->fields.questRestrictionEntity) == 0 )
    sub_1C7BD40(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass192_0___ctor(
        QuestRestrictionInfo___c__DisplayClass192_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass192_0___GetMyServantOrNpcSvtIdList_b__0(
        QuestRestrictionInfo___c__DisplayClass192_0_o *this,
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
  if ( (unsigned int)index >= LODWORD(questRestrictionEntityList->max_length) )
    sub_1C7BD48(this);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1C7BD40(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass193_0___ctor(
        QuestRestrictionInfo___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass193_0___GetMyServantOrSupportTargetPos_b__0(
        QuestRestrictionInfo___c__DisplayClass193_0_o *this,
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
  if ( (unsigned int)index >= LODWORD(questRestrictionEntityList->max_length) )
    sub_1C7BD48(this);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1C7BD40(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass206_0___ctor(
        QuestRestrictionInfo___c__DisplayClass206_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass206_0___GetMyServantOrNpcSvtIdUnionNpcList_b__0(
        QuestRestrictionInfo___c__DisplayClass206_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.index;
}


void QuestRestrictionInfo___c__DisplayClass213_0___ctor(
        QuestRestrictionInfo___c__DisplayClass213_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass213_0___GetGrandServantRestrictionEntity_b__0(
        QuestRestrictionInfo___c__DisplayClass213_0_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass213_0_o *v4; // x19
  System_Int32_array *targetVals2; // x20
  System_Func_int__bool__o *_9__1; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v4 = this;
  if ( (byte_4CEF9F1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_int____78794392);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    this = (QuestRestrictionInfo___c__DisplayClass213_0_o *)sub_1C7BAE8(&Method_QuestRestrictionInfo___c__DisplayClass213_0__GetGrandServantRestrictionEntity_b__1__);
    byte_4CEF9F1 = 1;
  }
  if ( !entity )
    sub_1C7BD40(this, entity);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetVals2, 0)
    && v4->fields.initPos == 1 )
  {
    return 1;
  }
  targetVals2 = entity->fields.targetVals2;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_QuestRestrictionInfo___c__DisplayClass213_0__GetGrandServantRestrictionEntity_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_int__51745960(
           targetVals2,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_31594A8 *)Method_BasicHelper_Any_int____78794392);
}


bool QuestRestrictionInfo___c__DisplayClass213_0___GetGrandServantRestrictionEntity_b__1(
        QuestRestrictionInfo___c__DisplayClass213_0_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  return this->fields.initPos == pos;
}


void QuestRestrictionInfo___c__DisplayClass219_0___ctor(
        QuestRestrictionInfo___c__DisplayClass219_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass219_0___IsActiveGrandBoardRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass219_0_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass219_0_o *v4; // x20

  v4 = this;
  if ( (byte_4CEF9F2 & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c__DisplayClass219_0_o *)sub_1C7BAE8(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CEF9F2 = 1;
  }
  if ( !entity )
    sub_1C7BD40(this, entity);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.targetVals,
           v4->fields.initPos,
           (const MethodInfo_318C6F4 *)Method_System_Linq_Enumerable_Contains_int___);
}


void QuestRestrictionInfo___c__DisplayClass225_0___ctor(
        QuestRestrictionInfo___c__DisplayClass225_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass225_0___GetOrganizationSelectionDialogMessage_b__0(
        QuestRestrictionInfo___c__DisplayClass225_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_o *questRestrictionEntity; // x8

  if ( !x || (questRestrictionEntity = this->fields.questRestrictionEntity) == 0 )
    sub_1C7BD40(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass226_0___ctor(
        QuestRestrictionInfo___c__DisplayClass226_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass226_0___GetSlotMessage_b__0(
        QuestRestrictionInfo___c__DisplayClass226_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_o *questRestrictionEntity; // x8

  if ( !x || (questRestrictionEntity = this->fields.questRestrictionEntity) == 0 )
    sub_1C7BD40(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}