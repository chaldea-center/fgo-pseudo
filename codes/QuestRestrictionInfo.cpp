void QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.questId = questId;
}


void QuestRestrictionInfo___ctor_44187308(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct RestrictionEntity_array *RestrictionList_43320332; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  const MethodInfo *v19; // x4

  if ( (byte_4D2DBFF & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2DBFF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v10);
  }
  RestrictionList_43320332 = QuestRestrictionMaster__getRestrictionList_43320332(
                               (QuestRestrictionMaster_o *)Instance,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               0);
  this->fields.restrictionEntityList = RestrictionList_43320332;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.restrictionEntityList,
    (int32_t)RestrictionList_43320332,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  QuestRestrictionInfo__Setup(this, v18, questId, questPhase, v19);
}


void QuestRestrictionInfo___ctor_44197012(
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

  if ( (byte_4D2DC00 & 1) == 0 )
  {
    sub_1C94098(&QuestRestrictionEntity___TypeInfo);
    sub_1C94098(&RestrictionEntity___TypeInfo);
    byte_4D2DC00 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v11 = (struct QuestRestrictionEntity_array *)sub_1C94140(QuestRestrictionEntity___TypeInfo, 0);
  this->fields.questRestrictionEntityList = v11;
  sub_1C9403C(
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
    v18 = sub_1C94140(RestrictionEntity___TypeInfo, 1);
    if ( !v18 )
      sub_1C942F0(0, v19);
    v20 = v18;
    v21 = sub_1C941D4(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v21 )
    {
      v36 = sub_1C94314(0);
      sub_1C941C0(v36, 0);
    }
    if ( !*(_DWORD *)(v20 + 24) )
      sub_1C942F8(v21);
    *(_QWORD *)(v20 + 32) = overwriteRestiction;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 32), (int32_t)overwriteRestiction, v22, v23, v24, v25, v26, v27);
  }
  else
  {
    v20 = sub_1C94140(RestrictionEntity___TypeInfo, 0);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v20;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.restrictionEntityList, v20, v28, v29, v30, v31, v32, v33);
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

  if ( (byte_4D2DC59 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2DC59 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_10;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0) )
    return;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_10:
    sub_1C942F0(Master_object, v4);
  OverwriteSvtTreasureDeviceLv = QuestPhaseEntity__GetOverwriteSvtTreasureDeviceLv(entity, 0);
  this->fields.cachedOverwriteSvtTreasureDeviceLv = OverwriteSvtTreasureDeviceLv;
  sub_1C9403C(
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

  if ( (byte_4D2DC22 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_bool____get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_bool____get_Item__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2DC22 = 1;
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
             (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___) )
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
            (const MethodInfo_31C6B58 *)Method_System_Linq_Enumerable_Intersect_int___);
    Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                  v28,
                                  (const MethodInfo_31A7A14 *)Method_System_Linq_Enumerable_Any_int___);
    if ( !this->fields.myServantPositionsList )
      goto LABEL_15;
    v29 = (char)Instance;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this->fields.myServantPositionsList,
                                  v23,
                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
              (const MethodInfo_31C6B58 *)Method_System_Linq_Enumerable_Intersect_int___);
      if ( System_Linq_Enumerable__Any_int_(v31, (const MethodInfo_31A7A14 *)Method_System_Linq_Enumerable_Any_int___) )
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
                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
          (const MethodInfo_31C6B58 *)Method_System_Linq_Enumerable_Intersect_int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                v35,
                                (const MethodInfo_31A7A14 *)Method_System_Linq_Enumerable_Any_int___);
  positionsList = (System_Collections_Generic_List_object__o *)this->fields.positionsList;
  if ( !positionsList
    || (v37 = (char)Instance,
        (Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                       positionsList,
                                       v33,
                                       (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_bool____get_Item__)) == 0) )
  {
LABEL_15:
    sub_1C942F0(Instance, v21);
  }
  if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
LABEL_67:
    sub_1C942F8(Instance);
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
    sub_1C942F8(this);
  return overwriteLimitCounts->m_Items[v6];
}


int32_t QuestRestrictionInfo__ConvertOverwriteImageLimitCount_44226752(
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
  if ( (byte_4D2DC2B & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2DC2B = 1;
  }
  if ( !userServantEntity )
    goto LABEL_20;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v16, 0);
  this = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(v4, v7, v8);
  if ( !this )
LABEL_20:
    sub_1C942F0(this, userServantEntity);
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
      this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v17, 0);
      if ( (_DWORD)this == v12 )
        return v12;
      dialogMessageInfoDictionary = v10->fields.dialogMessageInfoDictionary;
      if ( (int)++v11 >= (int)dialogMessageInfoDictionary )
        goto LABEL_15;
    }
LABEL_19:
    sub_1C942F8(this);
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

  if ( (byte_4D2DC2A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2DC2A = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( overwriteLimitCountSvtIds && this->fields.overwriteLimitCounts && (int)overwriteLimitCountSvtIds->max_length >= 1 )
  {
    v9 = 0;
    v10 = (unsigned int)overwriteLimitCountSvtIds->max_length - 1LL;
    do
    {
      if ( v9 >= LODWORD(overwriteLimitCountSvtIds->max_length) )
LABEL_21:
        sub_1C942F8(v6);
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
            *(const MethodInfo_384DE10 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_1C942F0(v6, v7);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Func_object__bool__o *_9__113_0; // x20
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
  System_Func_TSource__TResult__o *_9__113_2; // x20
  Il2CppObject *v40; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct QuestRestrictionInfo___c_StaticFields *v47; // x0
  GrandQuestFolderBoardItem_o *p__9__113_2; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v49; // x8
  QuestRestrictionInfo_SlotInfo_o *v50; // x8
  Il2CppObject *v51; // x21
  struct QuestRestrictionInfo___c_StaticFields *v52; // x0
  System_Collections_Generic_IEnumerable_string__o *v53; // x0

  v8 = this;
  if ( (byte_4D2DC14 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C94098(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C94098(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__113_0__);
    sub_1C94098(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__113_1__);
    sub_1C94098(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__113_2__);
    sub_1C94098(&QuestRestrictionInfo___c_TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DC14 = 1;
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
      _9__113_2 = (System_Func_TSource__TResult__o *)static_fields->__9__113_2;
      if ( _9__113_2 )
      {
LABEL_61:
        v53 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                                    _9__113_2,
                                                                    (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
        return System_String__Join_64460336((System_String_o *)StringLiteral_43/*"\n"*/, v53, 0);
      }
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = QuestRestrictionInfo___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v26->static_fields->__9;
      _9__113_2 = (System_Func_TSource__TResult__o *)sub_1C942E4(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__113_2,
        v51,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__113_2__,
        0);
      v52 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v52->__9__113_2 = (struct System_Func_RestrictionEntity__string__o *)_9__113_2;
      p__9__113_2 = (GrandQuestFolderBoardItem_o *)&v52->__9__113_2;
    }
    else
    {
      _9__113_0 = (System_Func_object__bool__o *)static_fields->__9__113_0;
      if ( !_9__113_0 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = QuestRestrictionInfo___c_TypeInfo;
        }
        v29 = (Il2CppObject *)v26->static_fields->__9;
        _9__113_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__113_0,
          v29,
          Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__113_0__,
          0);
        v30 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v30->__9__113_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__113_0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v30->__9__113_0, (int32_t)_9__113_0, v31, v32, v33, v34, v35, v36);
      }
      v37 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
              (System_Func_TSource__bool__o *)_9__113_0,
              (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v38 = QuestRestrictionInfo___c_TypeInfo;
      RestrictionMessageEntityList = (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)v37;
      if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v38 = QuestRestrictionInfo___c_TypeInfo;
      }
      _9__113_2 = (System_Func_TSource__TResult__o *)v38->static_fields->__9__113_1;
      if ( _9__113_2 )
        goto LABEL_61;
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = QuestRestrictionInfo___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v38->static_fields->__9;
      _9__113_2 = (System_Func_TSource__TResult__o *)sub_1C942E4(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__113_2,
        v40,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__113_1__,
        0);
      v47 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v47->__9__113_1 = (struct System_Func_RestrictionEntity__string__o *)_9__113_2;
      p__9__113_2 = (GrandQuestFolderBoardItem_o *)&v47->__9__113_1;
    }
    sub_1C9403C(p__9__113_2, (int32_t)_9__113_2, v41, v42, v43, v44, v45, v46);
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
    sub_1C942F0(this, *(_QWORD *)&initPos);
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
      sub_1C942F8(this);
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
      sub_1C942F8(this);
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

  if ( (byte_4D2DC27 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2DC27 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1C942F8(Instance);
      v20 = (int32_t *)questRestrictionEntityList->m_Items[v19];
      if ( !v20 )
        goto LABEL_67;
      v21 = v20[8];
      if ( v21 == 1 )
        break;
      if ( v21 == 2 )
      {
        Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
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
        *(const MethodInfo_384DE10 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
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
      Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      v11 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
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
      Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
        *(const MethodInfo_384DE10 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    sub_1C942F0(Instance, id);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4D2DC28 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DC28 = 1;
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
    sub_1C942F0(this, *(_QWORD *)&n);
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
    sub_1C942F8(this);
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

  if ( (byte_4D2DC3E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
    byte_4D2DC3E = 1;
  }
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary
    || !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
          messageId,
          (const MethodInfo_34B4AC8 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
  {
    return 0;
  }
  v7 = this->fields.dialogMessageInfoDictionary;
  if ( !v7 )
    sub_1C942F0(0, v6);
  return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_int__object__o *)v7,
                                                       messageId,
                                                       (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
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
  if ( (byte_4D2DC41 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DC41 = 1;
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
        sub_1C942F8(this);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_19;
      if ( v7->fields.type == 5 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_345B50C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C942F0(this, method);
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
  if ( (byte_4D2DC43 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DC43 = 1;
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
        sub_1C942F8(this);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_19;
      if ( v7->fields.type == 6 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_345B50C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C942F0(this, method);
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
  if ( (byte_4D2DC40 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DC40 = 1;
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
        sub_1C942F8(this);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_20;
      type = v7->fields.type;
      if ( type == 8 || type == 4 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_345B50C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C942F0(this, method);
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
  if ( (byte_4D2DC29 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DC29 = 1;
  }
  if ( v6->fields.restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.restrictionSlotDictionary;
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         n,
                                         (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
    sub_1C942F0(this, *(_QWORD *)&n);
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
    sub_1C942F8(this);
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
      sub_1C942F8(this);
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
      sub_1C942F0(this, n);
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
      sub_1C942F0(this, message);
    max_length = questRestrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= LODWORD(questRestrictionEntityList->max_length) )
          sub_1C942F8(this);
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
    sub_1C9403C((GrandQuestFolderBoardItem_o *)message, 0, (int32_t)method, v3, v4, v5, v6, v7);
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)message, (int32_t)noticeMessage, (int32_t)method, v3, v4, v5, v6, v7);
  return 1;
}


System_String_o *QuestRestrictionInfo__GetFixNpcMessage(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DC33 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10329/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/);
    byte_4D2DC33 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10329/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0);
}


System_String_o *QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2DC32 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10330/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/);
    byte_4D2DC32 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10330/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, 0);
}


int32_t QuestRestrictionInfo__GetFixedMyServantPositionCount(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2DC49 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4D2DC49 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&off_18) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C942F0(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4D2DC46 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2DC46 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_1C942F0(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v10.fields._current,
      (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_1C942F0(fixedMyServantIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4D2DC24 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2DC24 = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !fixedMyServantSingleIndividualities->max_length )
      return 0;
    this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       svtId,
                                       dispLimitCount,
                                       0);
        this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( this )
          {
            this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               svtId,
                                               (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v13 = (ServantEntity_o *)this;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
    sub_1C942F0(this, *(_QWORD *)&svtId);
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
    sub_1C942F8(this);
  return targetVals->m_Items[num] != svtId;
}


System_String_o *QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2DC25 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10328/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/);
    byte_4D2DC25 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10328/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, 0);
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

  if ( (byte_4D2DC4B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4D2DC4B = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&off_18) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C942F0(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4D2DC48 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2DC48 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_1C942F0(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v10.fields._current,
      (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_1C942F0(fixedIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4D2DC21 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4D2DC21 = 1;
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
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v4 = 0;
    for ( i = v14; ; v4 += LODWORD(i.fields._current[1].monitor) )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v5 )
        break;
      if ( !i.fields._current )
        sub_1C942F0(v5, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
    sub_1C942F0(fixedMyServantIndividualitiesList, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v14; ; v10 += LODWORD(i.fields._current[1].monitor) )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v11 )
      break;
    if ( !i.fields._current )
      sub_1C942F0(v11, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v10;
}


System_String_o *QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2DC23 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10327/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/);
    byte_4D2DC23 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10327/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, 0);
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

  if ( (byte_4D2DC20 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2DC20 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( this->fields.restrictionBaseEntity )
  {
    v3 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v3,
      (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
    if ( this->fields.isFixedMyServantPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &i,
               (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v6 )
          break;
        if ( !v3 )
          sub_1C942F0(v6, v7);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isNeedStarting )
    {
      fixedMyServantIndividualitiesList = this->fields.needStartingIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &i,
               (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v8 )
          break;
        if ( !v3 )
          sub_1C942F0(v8, v9);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isFixedPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v10 )
          break;
        if ( !v3 )
          sub_1C942F0(v10, v11);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( v3 )
    {
      if ( v3->fields._size > 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v3,
                 (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
      return 0;
    }
LABEL_38:
    sub_1C942F0(fixedMyServantIndividualitiesList, v5);
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
  if ( (byte_4D2DC1F & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10332/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/);
    byte_4D2DC1F = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10332/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, 0);
}


RestrictionEntity_o *QuestRestrictionInfo__GetGrandServantRestrictionEntity(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass222_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_RestrictionEntity__o *grandServantRestrictionEntityList; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D2DC4F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
    sub_1C94098(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__DisplayClass222_0__GetGrandServantRestrictionEntity_b__0__);
    sub_1C94098(&QuestRestrictionInfo___c__DisplayClass222_0_TypeInfo);
    byte_4D2DC4F = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass222_0_o *)sub_1C942E4(QuestRestrictionInfo___c__DisplayClass222_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass222_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5->fields.initPos = initPos;
  grandServantRestrictionEntityList = this->fields.grandServantRestrictionEntityList;
  v9 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass222_0__GetGrandServantRestrictionEntity_b__0__,
    0);
  return (RestrictionEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__52191056(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)grandServantRestrictionEntityList,
                                  (System_Func_TSource__bool__o *)v9,
                                  (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
}


RestrictionEntity_array *QuestRestrictionInfo__GetList(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.restrictionEntityList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetMessage(
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
  if ( (byte_4D2DC0A & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DC0A = 1;
  }
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_15:
    sub_1C942F0(this, *(_QWORD *)&restrictionWholeType);
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
        sub_1C942F8(this);
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
System_String_o *QuestRestrictionInfo__GetMessage_44206996(
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
  if ( (byte_4D2DC0B & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DC0B = 1;
  }
  restrictionEntityList = v4->fields.restrictionEntityList;
  if ( !restrictionEntityList )
LABEL_15:
    sub_1C942F0(this, *(_QWORD *)&restrictionType);
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
        sub_1C942F8(this);
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

  if ( (byte_4D2DC08 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10298/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C94098(&StringLiteral_11145/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/);
    sub_1C94098(&StringLiteral_11146/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1C94098(&StringLiteral_11142/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_1C94098(&StringLiteral_6461/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_4D2DC08 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_98;
  if ( !isSlotOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6461/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11146/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
    v25 = (System_String_o *)IsNullOrEmpty;
    if ( !this->fields.isUniqueServant )
      goto LABEL_20;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11145/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0);
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
        IsNullOrEmpty = System_String__Concat_64417744(summary, v25, 0);
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
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      v21->fields._size = size + 1;
      v35[4] = (Il2CppClass *)summary;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)summary, v26, v27, v28, v29, v30, v31);
    }
LABEL_20:
    if ( !this->fields.isFatigure )
      goto LABEL_33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11142/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0);
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
        IsNullOrEmpty = System_String__Concat_64417744(summary, v25, 0);
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
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v42->obj.klass + v44;
      v21->fields._size = v44 + 1;
      v45[4] = (Il2CppClass *)summary;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v45 + 4), (int32_t)summary, v36, v37, v38, v39, v40, v41);
    }
LABEL_33:
    if ( !this->fields.isNotSingleSupportOnly )
      goto LABEL_46;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10298/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
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
        IsNullOrEmpty = System_String__Concat_64417744(summary, v25, 0);
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
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &v52->obj.klass + v54;
      v21->fields._size = v54 + 1;
      v55[4] = (Il2CppClass *)summary;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v55 + 4), (int32_t)summary, v46, v47, v48, v49, v50, v51);
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
                IsNullOrEmpty = System_String__Concat_64417744(summary, v25, 0);
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
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &v66->obj.klass + v68;
            v21->fields._size = v68 + 1;
            v69[4] = (Il2CppClass *)summary;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v69 + 4), (int32_t)summary, v60, v61, v62, v63, v64, v65);
          }
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v58 >= max_length )
          goto LABEL_79;
      }
LABEL_101:
      sub_1C942F8(IsNullOrEmpty);
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
                            (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0 )
    {
LABEL_100:
      sub_1C942F0(IsNullOrEmpty, summary);
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
            v80 = LocalizationManager__Get((System_String_o *)StringLiteral_6461/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
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
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
          }
          else
          {
            v84 = &v81->obj.klass + v83;
            v21->fields._size = v83 + 1;
            v84[4] = (Il2CppClass *)summary;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v84 + 4), (int32_t)summary, v74, v75, v76, v77, v78, v79);
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
                                  (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *QuestRestrictionInfo__GetMessages_44205728(
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

  if ( (byte_4D2DC09 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10298/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C94098(&StringLiteral_11146/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1C94098(&StringLiteral_11142/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_1C94098(&StringLiteral_6461/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_4D2DC09 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6461/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11146/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isSlotOnly || !this->fields.isFatigure )
    goto LABEL_19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11142/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0);
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
  IsNullOrEmpty = System_String__Concat_64417744(name, v19, 0);
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
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v32[4] = (Il2CppClass *)name;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)name, v23, v24, v25, v26, v27, v28);
  }
LABEL_19:
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10298/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
    name = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = System_String__Format(v18, (Il2CppObject *)IsNullOrEmpty, 0);
      name = IsNullOrEmpty;
    }
    if ( singleSupport )
    {
      IsNullOrEmpty = System_String__Concat_64417744(name, v19, 0);
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
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &v39->obj.klass + v41;
      v20->fields._size = v41 + 1;
      v42[4] = (Il2CppClass *)name;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v42 + 4), (int32_t)name, v33, v34, v35, v36, v37, v38);
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
        sub_1C942F8(IsNullOrEmpty);
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
              IsNullOrEmpty = System_String__Concat_64417744(name, v19, 0);
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
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &v52->obj.klass + v54;
          v20->fields._size = v54 + 1;
          v55[4] = (Il2CppClass *)name;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v55 + 4), (int32_t)name, v46, v47, v48, v49, v50, v51);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_62;
    }
LABEL_64:
    sub_1C942F0(IsNullOrEmpty, name);
  }
LABEL_62:
  if ( !v20 )
    goto LABEL_64;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v20,
                                  (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4D2DC55 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
    sub_1C94098(&string_TypeInfo);
    byte_4D2DC55 = 1;
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
                                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
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
                                        (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
  if ( !grandServantRestrictionEntityList )
LABEL_16:
    sub_1C942F0(grandServantRestrictionEntityList, method);
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
  if ( (byte_4D2DC31 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DC31 = 1;
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
    sub_1C942F8(this);
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
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_58;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_345B50C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
                                       (const MethodInfo_34B4AC8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
      if ( !this )
        goto LABEL_58;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         v9,
                                         (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
      this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
      if ( !this )
        goto LABEL_58;
      this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         &v24,
                                         *(_DWORD *)(v15 + 44),
                                         (const MethodInfo_345B50C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C942F0(this, method);
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

  if ( (byte_4D2DC3A & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10334/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/);
    sub_1C94098(&StringLiteral_10337/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/);
    byte_4D2DC3A = 1;
  }
  SlotMessage = QuestRestrictionInfo__GetSlotMessage(this, pos, (const MethodInfo *)haveIndividualityServant);
  if ( !System_String__IsNullOrEmpty(SlotMessage, 0) )
    return SlotMessage;
  RestrictedName = (Il2CppObject *)QuestRestrictionInfo__GetRestrictedName(this, pos, v8);
  if ( haveIndividualityServant || QuestRestrictionInfo__GetGrandServantRestrictionEntity(this, pos, v9) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_10334/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_10337/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/;
  }
  v12 = LocalizationManager__Get((System_String_o *)*v11, 0);
  return System_String__Format(v12, RestrictedName, 0);
}


int32_t QuestRestrictionInfo__GetMyServantOrNpcRestrictionNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x8

  v2 = this;
  if ( (byte_4D2DC4E & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    byte_4D2DC4E = 1;
  }
  if ( !v2->fields.isMyServantOrNpc && !v2->fields.isMyServantOrSupport )
    return 0;
  myServantOrNpcRestrictionEntityList = v2->fields.myServantOrNpcRestrictionEntityList;
  if ( !myServantOrNpcRestrictionEntityList )
    sub_1C942F0(this, method);
  return myServantOrNpcRestrictionEntityList->fields._size;
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
  const MethodInfo_31C6B58 *v22; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v25; // x20
  Il2CppObject *v26; // x0
  Il2CppObject *v27; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4D2DC3C & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C94098(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_QuestRestrictionInfo___c__DisplayClass198_0__GetMyServantOrNpcSvtIdList_b__0__);
    sub_1C94098(&QuestRestrictionInfo___c__DisplayClass198_0_TypeInfo);
    byte_4D2DC3C = 1;
  }
  v5 = sub_1C942E4(QuestRestrictionInfo___c__DisplayClass198_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass198_0___ctor((QuestRestrictionInfo___c__DisplayClass198_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
  {
    v14 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v5 + 24),
                                        (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
          sub_1C942F8(restrictionSlotDetailDictionary);
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
            (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v15 = *((_DWORD *)v16 + 6);
        if ( (int)++v17 >= v15 )
          goto LABEL_15;
      }
LABEL_29:
      sub_1C942F0(restrictionSlotDetailDictionary, v7);
    }
LABEL_15:
    if ( !v14 )
      goto LABEL_29;
    if ( v14->fields._size >= 1 )
    {
      restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                          (DataManager_o *)restrictionSlotDetailDictionary,
                                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList((ServantMaster_o *)restrictionSlotDetailDictionary, 0);
      monitor = System_Linq_Enumerable__Distinct_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                  (const MethodInfo_31BF694 *)Method_System_Linq_Enumerable_Distinct_int___);
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v22 = (const MethodInfo_31C6B58 *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v28 = System_Linq_Enumerable__Intersect_int_(monitor, v21, v22);
      return System_Linq_Enumerable__ToArray_int_(
               v28,
               (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
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
      v25 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v25,
        (Il2CppObject *)v5,
        Method_QuestRestrictionInfo___c__DisplayClass198_0__GetMyServantOrNpcSvtIdList_b__0__,
        0);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      v26 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v25,
              (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v26 )
      {
        v27 = v26;
        restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                            (DataManager_o *)restrictionSlotDetailDictionary,
                                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        v21 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                     (ServantMaster_o *)restrictionSlotDetailDictionary,
                                                                     0);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v27[2].monitor;
        v22 = (const MethodInfo_31C6B58 *)Method_System_Linq_Enumerable_Intersect_int___;
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
  QuestRestrictionInfo___c__DisplayClass212_0_o *v9; // x22
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

  if ( (byte_4D2DC45 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_int___);
    sub_1C94098(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Union_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_QuestRestrictionInfo___c__DisplayClass212_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__);
    sub_1C94098(&QuestRestrictionInfo___c__DisplayClass212_0_TypeInfo);
    byte_4D2DC45 = 1;
  }
  isWhole = 0;
  v9 = (QuestRestrictionInfo___c__DisplayClass212_0_o *)sub_1C942E4(QuestRestrictionInfo___c__DisplayClass212_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass212_0___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_57;
  v9->fields.index = index;
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v12;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)npcInfoDictionary, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v21 = Method_System_Array_Empty_int___;
  v22 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v22 )
  {
    sub_1C6A188(Method_System_Array_Empty_int___);
    v22 = v21[7];
  }
  v23 = *(_QWORD *)(v22 + 16);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C6A12C(inited);
  if ( !*(_DWORD *)(v23 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v23);
  v24 = *(_QWORD *)(v21[7] + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C6A12C(inited);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v24 + 184);
    v27 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v27,
      (Il2CppObject *)v9,
      Method_QuestRestrictionInfo___c__DisplayClass212_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      0);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_57;
    v28 = System_Collections_Generic_List_object___Find(
            myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v27,
            (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v28 )
    {
      v29 = v28;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_57;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_57;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)Instance,
                                                                              0);
      v31 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v29[2].monitor,
              CollectionList,
              (const MethodInfo_31C6B58 *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v31,
                                  (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
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
        sub_1C6A188(Method_System_Array_Empty_int___);
        v36 = v35[7];
      }
      v37 = *(_QWORD *)(v36 + 16);
      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
        v37 = sub_1C6A12C(v34);
      if ( !*(_DWORD *)(v37 + 224) )
        v34 = j_il2cpp_runtime_class_init_0(v37);
      v38 = *(_QWORD *)(v35[7] + 16LL);
      if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
        v38 = sub_1C6A12C(v34);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v38 + 184);
    }
    MyServantOrSupportTargetPos = v9->fields.index;
    if ( !this->fields.restrictionBaseEntity )
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
                                      this,
                                      MyServantOrSupportTargetPos,
                                      v33);
  }
  v39 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
        sub_1C942F8(Instance);
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
        Instance = (void *)QuestRestrictionInfo__IsRestriction_44210688(
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
          Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_44232872(
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
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v62, 0);
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
                *(const MethodInfo_384DE10 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            }
            else
            {
              v39->fields._size = size + 1;
              items->m_Items[size] = (int)Instance;
            }
            v54 = *npcInfoDictionary;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v44->fields.svtId, 0);
            if ( !v54 )
              break;
            Instance = (void *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                 (System_Collections_Generic_Dictionary_int__object__o *)v54,
                                 (int32_t)Instance,
                                 (const MethodInfo_34B4AC8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              v55 = *npcInfoDictionary;
              v57 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
              v56 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v63.fields.currentCryptoKey = v57;
              *(_QWORD *)&v63.fields.fakeValue = v56;
              Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v63, 0);
              if ( !v55 )
                break;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)v55,
                (int32_t)Instance,
                (Il2CppObject *)v43,
                (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
            }
          }
        }
      }
      v40 = *((_DWORD *)v41 + 6);
      if ( (int)++v42 >= v40 )
        goto LABEL_56;
    }
LABEL_57:
    sub_1C942F0(Instance, v11);
  }
LABEL_56:
  v58 = System_Linq_Enumerable__Union_int_(
          first,
          (System_Collections_Generic_IEnumerable_TSource__o *)v39,
          (const MethodInfo_31E1A80 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v58,
           (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4D2DC3B & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10334/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/);
    sub_1C94098(&StringLiteral_10339/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/);
    sub_1C94098(&StringLiteral_10338/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/);
    sub_1C94098(&StringLiteral_10336/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/);
    sub_1C94098(&StringLiteral_10335/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/);
    byte_4D2DC3B = 1;
  }
  SlotMessage = QuestRestrictionInfo__GetSlotMessage(this, pos, (const MethodInfo *)haveIndividualityServant);
  if ( !System_String__IsNullOrEmpty(SlotMessage, 0) )
    return SlotMessage;
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_10336/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/;
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
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10334/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/, 0);
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
            sub_1C942F8(MyServantOrNpcSvtIdList);
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
        v9 = &StringLiteral_10338/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/;
      }
      else
      {
LABEL_28:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = &StringLiteral_10339/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v9, 0);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = &StringLiteral_10335/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/;
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

  if ( (byte_4D2DC3D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C94098(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__DisplayClass199_0__GetMyServantOrSupportTargetPos_b__0__);
    sub_1C94098(&QuestRestrictionInfo___c__DisplayClass199_0_TypeInfo);
    byte_4D2DC3D = 1;
  }
  v5 = sub_1C942E4(QuestRestrictionInfo___c__DisplayClass199_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass199_0___ctor((QuestRestrictionInfo___c__DisplayClass199_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
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
  v16 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass199_0__GetMyServantOrSupportTargetPos_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  v6 = System_Collections_Generic_List_object___Find(
         myServantOrNpcRestrictionEntityList,
         (System_Predicate_T__o *)v16,
         (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v6 )
    return (int)v6;
  klass = v6[3].klass;
  if ( !klass )
LABEL_14:
    sub_1C942F0(v6, v7);
  if ( !LODWORD(klass->_1.namespaze) )
    sub_1C942F8(v6);
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
    sub_1C942F8(this);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C942F0(this, pos);
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

  if ( (byte_4D2DC3F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DC3F = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.restrictionBaseEntity )
  {
    dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
    if ( !dialogMessageInfoDictionary )
      sub_1C942F0(0, *(_QWORD *)&pos);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v11,
      (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
      (const MethodInfo_34B4D0C *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
             &v11,
             (const MethodInfo_360FFAC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
      if ( !v6 )
        break;
      if ( !v11.fields._current.fields.value )
        sub_1C942F0(v6, v7);
      if ( LODWORD(v11.fields._current.fields.value[1].klass) == pos )
      {
        DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v11.fields._current.fields.key, 0, v8);
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
          &v11,
          (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
        return DialogMessage;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v11,
      (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t QuestRestrictionInfo__GetNeedStartingSvtCount(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *needStartingIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2DC4A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4D2DC4A = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&off_18) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C942F0(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i;
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

  if ( (byte_4D2DC47 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2DC47 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v6 )
      break;
    if ( !v3 )
      sub_1C942F0(v6, v7);
    System_Collections_Generic_List_int___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)v9.fields._current,
      (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v3 )
LABEL_15:
    sub_1C942F0(needStartingIndividualitiesList, v4);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4D2DC57 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_GetValue_string___);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C94098(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__DisplayClass234_0__GetOrganizationSelectionDialogMessage_b__0__);
    sub_1C94098(&QuestRestrictionInfo___c__DisplayClass234_0_TypeInfo);
    sub_1C94098(&StringLiteral_22705/*"organizationSelectionDialogTitle"*/);
    sub_1C94098(&StringLiteral_22704/*"organizationSelectionDialogMessage"*/);
    byte_4D2DC57 = 1;
  }
  v51 = (GrandQuestFolderBoardItem_o *)title;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *title = static_fields->Empty;
  sub_1C9403C(
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)message, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  questRestrictionEntityList = this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_16;
  if ( SLODWORD(questRestrictionEntityList->max_length) >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      v25 = sub_1C942E4(QuestRestrictionInfo___c__DisplayClass234_0_TypeInfo);
      QuestRestrictionInfo___c__DisplayClass234_0___ctor((QuestRestrictionInfo___c__DisplayClass234_0_o *)v25, 0);
      if ( v24 >= LODWORD(questRestrictionEntityList->max_length) )
        sub_1C942F8(SpecifiedPosition);
      if ( !v25 )
        goto LABEL_16;
      v32 = questRestrictionEntityList->m_Items[v24];
      *(_QWORD *)(v25 + 16) = v32;
      v33 = v25 + 16;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 16), (int32_t)v32, v26, v27, v28, v29, v30, v31);
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
      v35 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v35,
        (Il2CppObject *)v25,
        Method_QuestRestrictionInfo___c__DisplayClass234_0__GetOrganizationSelectionDialogMessage_b__0__,
        0);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_16;
      v36 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v35,
              (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
                       (System_String_o *)StringLiteral_22705/*"organizationSelectionDialogTitle"*/,
                       (Il2CppObject *)string_TypeInfo->static_fields->Empty,
                       (const MethodInfo_3189A3C *)Method_BasicHelper_GetValue_string___);
      v51->klass = (GrandQuestFolderBoardItem_c *)Value_object;
      sub_1C9403C(v51, (int32_t)Value_object, v38, v39, v40, v41, v42, v43);
      if ( *(_QWORD *)v33 )
      {
        v44 = BasicHelper__GetValue_object_(
                *(System_Collections_Generic_Dictionary_string__object__o **)(*(_QWORD *)v33 + 64LL),
                (System_String_o *)StringLiteral_22704/*"organizationSelectionDialogMessage"*/,
                (Il2CppObject *)string_TypeInfo->static_fields->Empty,
                (const MethodInfo_3189A3C *)Method_BasicHelper_GetValue_string___);
        *message = (System_String_o *)v44;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)message, (int32_t)v44, v45, v46, v47, v48, v49, v50);
        return;
      }
    }
LABEL_16:
    sub_1C942F0(SpecifiedPosition, v22);
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
    sub_1C942F8(this);
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
  if ( (byte_4D2DC5A & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_GetValue_int__int___);
    byte_4D2DC5A = 1;
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
             (const MethodInfo_3189C88 *)Method_BasicHelper_GetValue_int__int___);
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

  if ( (byte_4D2DC2C & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&OptionManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&string___TypeInfo);
    byte_4D2DC2C = 1;
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
  FixedServantPositionSvtIdList = sub_1C94140(string___TypeInfo, *(unsigned int *)(FixedServantPositionSvtIdList + 24));
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
        sub_1C942F8(FixedServantPositionSvtIdList);
      v13 = *(_DWORD *)(v8 + 32 + 4 * v10);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      FixedServantPositionSvtIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !FixedServantPositionSvtIdList )
        break;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)FixedServantPositionSvtIdList,
              &entity,
              v13,
              (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0;
      FixedServantPositionSvtIdList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !FixedServantPositionSvtIdList )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)FixedServantPositionSvtIdList,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
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
      sub_1C9403C(i, FixedServantPositionSvtIdList, v17, v18, v19, v20, v21, v22);
      if ( v11 == ++v10 )
        return (System_String_array *)v9;
    }
LABEL_41:
    sub_1C942F0(FixedServantPositionSvtIdList, v7);
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
    sub_1C942F8(this);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C942F0(this, pos);
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
  if ( (byte_4D2DC39 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C94098(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__DisplayClass195_0__GetRestrictedName_b__0__);
    sub_1C94098(&QuestRestrictionInfo___c__DisplayClass195_0_TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DC39 = 1;
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
        v11 = sub_1C942E4(QuestRestrictionInfo___c__DisplayClass195_0_TypeInfo);
        QuestRestrictionInfo___c__DisplayClass195_0___ctor((QuestRestrictionInfo___c__DisplayClass195_0_o *)v11, 0);
        if ( v10 >= LODWORD(questRestrictionEntityList->max_length) )
LABEL_28:
          sub_1C942F8(this);
        if ( !v11 )
          break;
        v18 = questRestrictionEntityList->m_Items[v10];
        *(_QWORD *)(v11 + 16) = v18;
        v19 = v11 + 16;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)v18, v12, v13, v14, v15, v16, v17);
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v4->fields.myServantOrNpcRestrictionEntityList;
        v21 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_RestrictionEntity__TypeInfo);
        System_Predicate_object____ctor(
          v21,
          (Il2CppObject *)v11,
          Method_QuestRestrictionInfo___c__DisplayClass195_0__GetRestrictedName_b__0__,
          0);
        if ( !myServantOrNpcRestrictionEntityList )
          break;
        v22 = System_Collections_Generic_List_object___Find(
                myServantOrNpcRestrictionEntityList,
                (System_Predicate_T__o *)v21,
                (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
    sub_1C942F0(this, *(_QWORD *)&pos);
  }
  this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
  if ( !this )
    goto LABEL_27;
  this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)this,
                                     pos,
                                     (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
  System_Func_object__object__o *_9__114_0; // x20
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
  if ( (byte_4D2DC15 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Prepend_string___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_1C94098(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__114_0__);
    sub_1C94098(&QuestRestrictionInfo___c_TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_1C94098(&StringLiteral_10294/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_4D2DC15 = 1;
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
      this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10294/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      v23 = v4->fields.slotInfos;
      if ( !v23 )
        goto LABEL_25;
      if ( (unsigned int)v6 >= LODWORD(v23->max_length) )
LABEL_26:
        sub_1C942F8(this);
      v24 = v23->m_Items[v6];
      if ( v24 )
        return System_String__Concat_64456008(
                 (System_String_o *)this,
                 (System_String_o *)StringLiteral_43/*"\n"*/,
                 v24->fields.summary,
                 0);
    }
LABEL_25:
    sub_1C942F0(this, *(_QWORD *)&initPos);
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
  _9__114_0 = (System_Func_object__object__o *)v10->static_fields->__9__114_0;
  if ( !_9__114_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = QuestRestrictionInfo___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__114_0 = (System_Func_object__object__o *)sub_1C942E4(System_Func_RestrictionEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__114_0,
      v12,
      Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__114_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__114_0 = (struct System_Func_RestrictionEntity__string__o *)_9__114_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__114_0,
      (int32_t)_9__114_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                               (System_Func_TSource__TResult__o *)_9__114_0,
                                                               (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10294/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
  v22 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Prepend_object_(
                                                              v20,
                                                              v21,
                                                              (const MethodInfo_31CC910 *)Method_System_Linq_Enumerable_Prepend_string___);
  return System_String__Join_64460336((System_String_o *)StringLiteral_43/*"\n"*/, v22, 0);
}


System_Collections_Generic_IEnumerable_RestrictionEntity__o *QuestRestrictionInfo__GetRestrictionMessageEntityList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x19
  System_Func_object__bool__o *_9__115_0; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2DC16 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C94098(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__115_0__);
    sub_1C94098(&QuestRestrictionInfo___c_TypeInfo);
    byte_4D2DC16 = 1;
  }
  v3 = QuestRestrictionInfo___c_TypeInfo;
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v3 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__115_0 = (System_Func_object__bool__o *)v3->static_fields->__9__115_0;
  if ( !_9__115_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestRestrictionInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__115_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__115_0,
      v6,
      Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__115_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__115_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__115_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__115_0,
      (int32_t)_9__115_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                          restrictionEntityList,
                                                                          (System_Func_TSource__bool__o *)_9__115_0,
                                                                          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
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

  if ( (byte_4D2DC0E & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2DC0E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0
    || (ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)Instance,
                                       svtId,
                                       dispLimitCount,
                                       0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1C942F0(Instance, v9);
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

  if ( (byte_4D2DC2D & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D2DC2D = 1;
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
      sub_1C942F0(0, method);
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
  if ( (byte_4D2DC2F & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DC2F = 1;
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
    sub_1C942F8(this);
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
                                         (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_51;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &v21,
                                           *(_DWORD *)(v12 + 44),
                                           (const MethodInfo_345B50C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C942F0(this, method);
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
      this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
      if ( !this )
        goto LABEL_51;
      this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         &entity,
                                         v7->fields.restrictionMessageId,
                                         (const MethodInfo_345B50C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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

  if ( (byte_4D2DC2E & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10341/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/);
    sub_1C94098(&StringLiteral_10340/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/);
    byte_4D2DC2E = 1;
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
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10341/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, 0);
    v7 = &v11;
    v11 = this->fields.servantNumMax;
  }
  else
  {
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10340/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, 0);
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
  if ( (byte_4D2DC58 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_GetValue_string___);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C94098(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__DisplayClass235_0__GetSlotMessage_b__0__);
    sub_1C94098(&QuestRestrictionInfo___c__DisplayClass235_0_TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1C94098(&StringLiteral_23302/*"restrictionSlotMessage"*/);
    byte_4D2DC58 = 1;
  }
  questRestrictionEntityList = v3->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_15;
  if ( SLODWORD(questRestrictionEntityList->max_length) < 1 )
    return string_TypeInfo->static_fields->Empty;
  v5 = 0;
  while ( 1 )
  {
    v6 = sub_1C942E4(QuestRestrictionInfo___c__DisplayClass235_0_TypeInfo);
    QuestRestrictionInfo___c__DisplayClass235_0___ctor((QuestRestrictionInfo___c__DisplayClass235_0_o *)v6, 0);
    if ( v5 >= LODWORD(questRestrictionEntityList->max_length) )
      sub_1C942F8(this);
    if ( !v6 )
      goto LABEL_15;
    v13 = questRestrictionEntityList->m_Items[v5];
    *(_QWORD *)(v6 + 16) = v13;
    v14 = v6 + 16;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)v13, v7, v8, v9, v10, v11, v12);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v3->fields.myServantOrNpcRestrictionEntityList;
    v16 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v16,
      (Il2CppObject *)v6,
      Method_QuestRestrictionInfo___c__DisplayClass235_0__GetSlotMessage_b__0__,
      0);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_15;
    v17 = System_Collections_Generic_List_object___Find(
            myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v16,
            (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
    sub_1C942F0(this, *(_QWORD *)&initPos);
  return (System_String_o *)BasicHelper__GetValue_object_(
                              *(System_Collections_Generic_Dictionary_string__object__o **)(*(_QWORD *)v14 + 64LL),
                              (System_String_o *)StringLiteral_23302/*"restrictionSlotMessage"*/,
                              (Il2CppObject *)string_TypeInfo->static_fields->Empty,
                              (const MethodInfo_3189A3C *)Method_BasicHelper_GetValue_string___);
}


int32_t QuestRestrictionInfo__GetSupportInitIndex(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.supportInitIndex;
}


System_String_o *QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2DC17 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10342/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/);
    byte_4D2DC17 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10342/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, 0);
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

  if ( (byte_4D2DC26 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    byte_4D2DC26 = 1;
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
  if ( (byte_4D2DC1D & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10344/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/);
    this = (QuestRestrictionInfo_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DC1D = 1;
  }
  if ( !v4->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_10344/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, 0);
  }
  else
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_18:
      sub_1C942F0(this, isFixMessage);
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
          sub_1C942F8(this);
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
  if ( (byte_4D2DC1C & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10343/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/);
    byte_4D2DC1C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10343/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, 0);
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
  QuestRestrictionInfo___c__DisplayClass228_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_T__o *activeGrandBoardRestrictionEntityList; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D2DC52 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_RestrictionEntity___);
    sub_1C94098(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__DisplayClass228_0__IsActiveGrandBoardRestriction_b__0__);
    sub_1C94098(&QuestRestrictionInfo___c__DisplayClass228_0_TypeInfo);
    byte_4D2DC52 = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass228_0_o *)sub_1C942E4(QuestRestrictionInfo___c__DisplayClass228_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass228_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5->fields.initPos = initPos;
  activeGrandBoardRestrictionEntityList = (System_Collections_Generic_List_T__o *)this->fields.activeGrandBoardRestrictionEntityList;
  v9 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass228_0__IsActiveGrandBoardRestriction_b__0__,
    0);
  return BasicHelper__Any_object_(
           activeGrandBoardRestrictionEntityList,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_3185468 *)Method_BasicHelper_Any_RestrictionEntity___);
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
  QuestRestrictionInfo___c__DisplayClass105_0_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  QuestRestrictionInfo___c_c *v9; // x0
  System_Func_object__bool__o *_9__105_0; // x21
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
  System_Func_object__bool__o *_9__105_1; // x21
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
  System_Func_object__bool__o *_9__105_2; // x21
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

  if ( (byte_4D2DC0F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Any_RestrictionEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C94098(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__105_0__);
    sub_1C94098(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__105_1__);
    sub_1C94098(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__105_2__);
    sub_1C94098(&Method_QuestRestrictionInfo___c__DisplayClass105_0__IsClassRestriction_b__3__);
    sub_1C94098(&QuestRestrictionInfo___c__DisplayClass105_0_TypeInfo);
    sub_1C94098(&QuestRestrictionInfo___c_TypeInfo);
    byte_4D2DC0F = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass105_0_o *)sub_1C942E4(QuestRestrictionInfo___c__DisplayClass105_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass105_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5->fields.individuality = individuality;
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  v9 = QuestRestrictionInfo___c_TypeInfo;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v9 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__105_0 = (System_Func_object__bool__o *)v9->static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestRestrictionInfo___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__105_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__105_0, v11, Method_QuestRestrictionInfo___c__IsClassRestriction_b__105_0__, 0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__105_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__105_0,
      (int32_t)_9__105_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          restrictionEntityList,
          (System_Func_TSource__bool__o *)_9__105_0,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v20 = QuestRestrictionInfo___c_TypeInfo;
  v21 = v19;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v20 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__105_1 = (System_Func_object__bool__o *)v20->static_fields->__9__105_1;
  if ( !_9__105_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = QuestRestrictionInfo___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__105_1 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__105_1, v23, Method_QuestRestrictionInfo___c__IsClassRestriction_b__105_1__, 0);
    v24 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v24->__9__105_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__105_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v24->__9__105_1, (int32_t)_9__105_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)_9__105_1,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v32 = QuestRestrictionInfo___c_TypeInfo;
  v33 = v31;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v32 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__105_2 = (System_Func_object__bool__o *)v32->static_fields->__9__105_2;
  if ( !_9__105_2 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = QuestRestrictionInfo___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__105_2 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__105_2, v35, Method_QuestRestrictionInfo___c__IsClassRestriction_b__105_2__, 0);
    v36 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v36->__9__105_2 = (struct System_Func_RestrictionEntity__bool__o *)_9__105_2;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v36->__9__105_2, (int32_t)_9__105_2, v37, v38, v39, v40, v41, v42);
  }
  v43 = System_Linq_Enumerable__Where_object_(
          v33,
          (System_Func_TSource__bool__o *)_9__105_2,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v44 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v44,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass105_0__IsClassRestriction_b__3__,
    0);
  return System_Linq_Enumerable__Any_object__52076056(
           v43,
           (System_Func_TSource__bool__o *)v44,
           (const MethodInfo_31A9E18 *)Method_System_Linq_Enumerable_Any_RestrictionEntity___);
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
    sub_1C942F8(this);
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C942F0(this, initPos);
  return v4->fields.isMoved;
}


bool QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_1C942F0(this, method);
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
        sub_1C942F8(this);
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
    sub_1C942F0(this, method);
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

  if ( (byte_4D2DC42 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2DC42 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !this->fields.isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.isFixedSupportPosition )
  {
    fixedSupportIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)fixedSupportIndividualitiesList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v11;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v6 )
        break;
      if ( !v3 )
        sub_1C942F0(v6, v7);
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
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v11;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v9 )
        break;
      if ( !v3 )
        sub_1C942F0(v9, v10);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v3 )
LABEL_23:
    sub_1C942F0(fixedSupportIndividualitiesList, v4);
  return v3->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsFixedSupportPosition_44216780(
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
  if ( (byte_4D2DC1E & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2DC1E = 1;
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
  v7 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v6->fields.isFixedSupportPosition )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedSupportIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v22;
          ;
          System_Collections_Generic_List_int___AddRange(
            v7,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v8 )
        break;
      if ( !v7 )
        sub_1C942F0(v8, v9);
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
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v22;
          ;
          System_Collections_Generic_List_int___AddRange(
            v7,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v11 )
        break;
      if ( !v7 )
        sub_1C942F0(v11, v12);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v7 )
    goto LABEL_42;
  if ( v7->fields._size < 1 )
    goto LABEL_36;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_42;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v15 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  *(_QWORD *)&v25.fields.fakeValue = v14;
  this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v25, 0);
  if ( !v13 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v13,
             (int32_t)this,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    v7,
    (const MethodInfo_384E8E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = v22;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v23,
            (const MethodInfo_35E83A8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v23,
        (const MethodInfo_35E83A4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      return 1;
    }
    current = (int32_t)v23.fields._current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, 0);
    if ( !Entity )
      sub_1C942F0(DispLimitCount, v20);
  }
  while ( !ServantEntity__IsIndividuality((ServantEntity_o *)Entity, limitCount, DispLimitCount, current, 0) );
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v23,
    (const MethodInfo_35E83A4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_36:
  supportPositionList = v6->fields.supportPositionList;
  if ( !supportPositionList )
LABEL_42:
    sub_1C942F0(this, *(_QWORD *)&num);
  if ( LODWORD(supportPositionList->max_length) <= num )
    sub_1C942F8(this);
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

  if ( (byte_4D2DC51 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2DC51 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_11:
    sub_1C942F0(Master_object, v4);
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


bool QuestRestrictionInfo__IsMyServantOrNpcRestriction_44229676(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass190_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v9; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4D2DC34 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
    sub_1C94098(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__DisplayClass190_0__IsMyServantOrNpcRestriction_b__0__);
    sub_1C94098(&QuestRestrictionInfo___c__DisplayClass190_0_TypeInfo);
    byte_4D2DC34 = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass190_0_o *)sub_1C942E4(QuestRestrictionInfo___c__DisplayClass190_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass190_0___ctor(v5, 0);
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
      if ( (unsigned int)(pos - 1) >= LODWORD(slotInfos->max_length) )
        sub_1C942F8(v6);
      v9 = slotInfos->m_Items[pos - 1];
      if ( v9 )
        return (unsigned int)(v9->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_1C942F0(v6, v7);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v12 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass190_0__IsMyServantOrNpcRestriction_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  return System_Collections_Generic_List_object___Exists(
           myServantOrNpcRestrictionEntityList,
           (System_Predicate_T__o *)v12,
           (const MethodInfo_386B460 *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
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
  QuestRestrictionInfo___c__DisplayClass106_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_object__bool__o *v11; // x21
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x20
  bool result; // w0

  if ( (byte_4D2DC10 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
    sub_1C94098(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__DisplayClass106_0__IsMySvtOrSupportSlotClassRestriction_b__0__);
    sub_1C94098(&QuestRestrictionInfo___c__DisplayClass106_0_TypeInfo);
    byte_4D2DC10 = 1;
  }
  v7 = (QuestRestrictionInfo___c__DisplayClass106_0_o *)sub_1C942E4(QuestRestrictionInfo___c__DisplayClass106_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass106_0___ctor(v7, 0);
  if ( !v7 )
    sub_1C942F0(v8, v9);
  v7->fields.initPos = initPos;
  result = initPos >= 1
        && (restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList,
            v11 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RestrictionEntity__bool__TypeInfo),
            System_Func_object__bool____ctor(
              v11,
              (Il2CppObject *)v7,
              Method_QuestRestrictionInfo___c__DisplayClass106_0__IsMySvtOrSupportSlotClassRestriction_b__0__,
              0),
            (v12 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
                     restrictionEntityList,
                     (System_Func_TSource__bool__o *)v11,
                     (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___)) != 0)
        && (v13 = v12, !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12[2].monitor, 0))
        && !System_Linq_Enumerable__Contains_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v13[2].monitor,
              0,
              (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___)
        && RestrictionEntity__IsRestriction((RestrictionEntity_o *)v13, classIndividuality, 0);
  return result;
}


bool QuestRestrictionInfo__IsNoSupportBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNoSupportBattle;
}


bool QuestRestrictionInfo__IsNotIndividuality(QuestRestrictionInfo_o *this, int32_t pos, const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass192_0_o *v5; // x21
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

  if ( (byte_4D2DC36 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C94098(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__DisplayClass192_0__IsNotIndividuality_b__0__);
    sub_1C94098(&QuestRestrictionInfo___c__DisplayClass192_0_TypeInfo);
    byte_4D2DC36 = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass192_0_o *)sub_1C942E4(QuestRestrictionInfo___c__DisplayClass192_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass192_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_26;
  v5->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_44229676(this, pos, v8) )
    goto LABEL_23;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        v5->fields.pos,
                                        (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    v9 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    if ( v9 >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v9 == v10 )
          sub_1C942F8(restrictionSlotDetailDictionary);
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
      sub_1C942F0(restrictionSlotDetailDictionary, v7);
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v14 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass192_0__IsNotIndividuality_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_26;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                      myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v14,
                                      (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
      sub_1C942F8(this);
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_1C942F0(this, initPos);
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
  System_Func_object__bool__o *_9__103_0; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2DC0D & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
    sub_1C94098(&System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__103_0__);
    sub_1C94098(&QuestRestrictionInfo___c_TypeInfo);
    byte_4D2DC0D = 1;
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
  _9__103_0 = (System_Func_object__bool__o *)v4->static_fields->__9__103_0;
  if ( !_9__103_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = QuestRestrictionInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__103_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__103_0,
      v6,
      Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__103_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__103_0 = (struct System_Func_QuestRestrictionInfo_SlotInfo__bool__o *)_9__103_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__103_0,
      (int32_t)_9__103_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return BasicHelper__Any_object__51926292(
           slotInfos,
           (System_Func_T__bool__o *)_9__103_0,
           (const MethodInfo_3185514 *)Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
}


bool QuestRestrictionInfo__IsRestrictionIndividualityWhole(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo___c_c *v3; // x0
  System_Object_array *restrictionWholeEntities; // x19
  System_Func_object__bool__o *_9__102_1; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo_3185514 *v14; // x2
  QuestRestrictionInfo___c_c *v15; // x0
  Il2CppObject *v16; // x21
  struct QuestRestrictionInfo___c_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2DC0C & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_RestrictionEntity____79047776);
    sub_1C94098(&Method_BasicHelper_Any_RestrictionWholeEntity___);
    sub_1C94098(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C94098(&System_Func_RestrictionWholeEntity__bool__TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__102_0__);
    sub_1C94098(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__102_1__);
    sub_1C94098(&QuestRestrictionInfo___c_TypeInfo);
    byte_4D2DC0C = 1;
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
    _9__102_1 = (System_Func_object__bool__o *)v3->static_fields->__9__102_1;
    if ( !_9__102_1 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = QuestRestrictionInfo___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v3->static_fields->__9;
      _9__102_1 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RestrictionWholeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__102_1,
        v6,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__102_1__,
        0);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__102_1 = (struct System_Func_RestrictionWholeEntity__bool__o *)_9__102_1;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__102_1,
        (int32_t)_9__102_1,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    v14 = (const MethodInfo_3185514 *)Method_BasicHelper_Any_RestrictionWholeEntity___;
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
    _9__102_1 = (System_Func_object__bool__o *)v15->static_fields->__9__102_0;
    if ( !_9__102_1 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = QuestRestrictionInfo___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v15->static_fields->__9;
      _9__102_1 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RestrictionEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__102_1,
        v16,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__102_0__,
        0);
      v17 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v17->__9__102_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__102_1;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v17->__9__102_0, (int32_t)_9__102_1, v18, v19, v20, v21, v22, v23);
    }
    v14 = (const MethodInfo_3185514 *)Method_BasicHelper_Any_RestrictionEntity____79047776;
  }
  return BasicHelper__Any_object__51926292(restrictionWholeEntities, (System_Func_T__bool__o *)_9__102_1, v14);
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
  QuestRestrictionInfo___c__DisplayClass193_0_o *v13; // x24
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

  if ( (byte_4D2DC37 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C94098(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_QuestRestrictionInfo___c__DisplayClass193_0__IsRestrictionServantIndividuality_b__0__);
    sub_1C94098(&QuestRestrictionInfo___c__DisplayClass193_0_TypeInfo);
    byte_4D2DC37 = 1;
  }
  v13 = (QuestRestrictionInfo___c__DisplayClass193_0_o *)sub_1C942E4(QuestRestrictionInfo___c__DisplayClass193_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass193_0___ctor(v13, 0);
  if ( !v13 )
    goto LABEL_55;
  v13->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_44229676(this, pos, v16) )
    goto LABEL_53;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_55;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_55;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)this->fields.restrictionSlotDictionary;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                    v13->fields.pos,
                                    (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
                                        v13->fields.pos,
                                        (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
                  sub_1C942F8(Instance);
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
    sub_1C942F0(Instance, v15);
  }
  if ( isChkSupport && !QuestRestrictionInfo__GetGrandServantRestrictionEntity(this, v13->fields.pos, v18) )
    goto LABEL_53;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v25 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v25,
    (Il2CppObject *)v13,
    Method_QuestRestrictionInfo___c__DisplayClass193_0__IsRestrictionServantIndividuality_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_55;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                myServantOrNpcRestrictionEntityList,
                                (System_Predicate_T__o *)v25,
                                (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
                                  (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_RestrictionEntity__Contains__);
    if ( ((unsigned __int8)Instance & 1) == 0
      || (Instance = (DataManager_o *)RestrictionEntity__IsSearchVals((RestrictionEntity_o *)v27, 0, 0),
          LOBYTE(max_length) = 0,
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( !Entity )
        goto LABEL_55;
      v29 = ServantEntity__getIndividuality((ServantEntity_o *)Entity, limitCount, ServantImageLimitSealAfter, 0);
      if ( RestrictionEntity__IsRestriction_43360340((RestrictionEntity_o *)v27, v29, 0) )
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


bool QuestRestrictionInfo__IsRestrictionServantIndividuality_44232872(
        QuestRestrictionInfo_o *this,
        System_Int32_array *individuality,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass194_0_o *v7; // x22
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

  if ( (byte_4D2DC38 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C94098(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__DisplayClass194_0__IsRestrictionServantIndividuality_b__0__);
    sub_1C94098(&QuestRestrictionInfo___c__DisplayClass194_0_TypeInfo);
    byte_4D2DC38 = 1;
  }
  v7 = (QuestRestrictionInfo___c__DisplayClass194_0_o *)sub_1C942E4(QuestRestrictionInfo___c__DisplayClass194_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass194_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_29;
  v7->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_44229676(this, pos, v10) )
    goto LABEL_27;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        v7->fields.pos,
                                        (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
          sub_1C942F8(restrictionSlotDetailDictionary);
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
      sub_1C942F0(restrictionSlotDetailDictionary, v9);
    }
    goto LABEL_27;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v17 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_QuestRestrictionInfo___c__DisplayClass194_0__IsRestrictionServantIndividuality_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_29;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                      myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v17,
                                      (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
            (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_RestrictionEntity__Contains__) )
      return RestrictionEntity__IsRestriction_43360340(v19, individuality, 0);
    IsSearchVals = RestrictionEntity__IsSearchVals(v19, 0, 0);
    LOBYTE(v14) = 0;
    if ( !IsSearchVals )
      return RestrictionEntity__IsRestriction_43360340(v19, individuality, 0);
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
  return QuestRestrictionInfo__IsRestrictionSlot_44209904(this, ServantIndividuality, initPos, v14);
}


bool QuestRestrictionInfo__IsRestrictionSlot_44209904(
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
  if ( (byte_4D2DC13 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C94098(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    byte_4D2DC13 = 1;
  }
  v7 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v6->fields.slotInfos;
    if ( !slotInfos )
LABEL_27:
      sub_1C942F0(this, svtIndividuality);
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
                                         (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_int____get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->fields.dialogMessageInfoDictionary )
      {
        v12 = System_Linq_Enumerable__Intersect_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this,
                (System_Collections_Generic_IEnumerable_TSource__o *)svtIndividuality,
                (const MethodInfo_31C6B58 *)Method_System_Linq_Enumerable_Intersect_int___);
        this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_int_(
                                           v12,
                                           (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
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
                                           (const MethodInfo_385034C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
        if ( (_DWORD)this == 1 )
        {
          this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                             (const MethodInfo_31A7A14 *)Method_System_Linq_Enumerable_Any_int___);
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
                                             (const MethodInfo_385034C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)this == 2 )
          {
            this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                               (const MethodInfo_31A7A14 *)Method_System_Linq_Enumerable_Any_int___);
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
    sub_1C942F8(this);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsRestriction_44209176(
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

  if ( (byte_4D2DC11 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_int___);
    byte_4D2DC11 = 1;
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
      sub_1C6A188(Method_System_Array_Empty_int___);
      v21 = v20[7];
    }
    v22 = *(_QWORD *)(v21 + 16);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C6A12C(inited);
    if ( !*(_DWORD *)(v22 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v22);
    v23 = *(_QWORD *)(v20[7] + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C6A12C(inited);
    ServantIndividuality = **(System_Int32_array ***)(v23 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_44209436(this, &isWhole, ServantIndividuality, rarity, lv, targetType, v17);
}


bool QuestRestrictionInfo__IsRestriction_44209436(
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
      sub_1C942F0(this, isWhole);
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
      return 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
LABEL_29:
        sub_1C942F8(this);
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
          this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction_43360340(v18, svtIndividuality, 0);
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


bool QuestRestrictionInfo__IsRestriction_44210408(
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

  if ( (byte_4D2DC12 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_int___);
    byte_4D2DC12 = 1;
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
      sub_1C6A188(Method_System_Array_Empty_int___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1C6A12C(inited);
    if ( !*(_DWORD *)(v26 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v26);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C6A12C(inited);
    ServantIndividuality = **(System_Int32_array ***)(v27 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_44210688(
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
bool QuestRestrictionInfo__IsRestriction_44210688(
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

  if ( QuestRestrictionInfo__IsRestriction_44209436(
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
    return QuestRestrictionInfo__IsRestrictionSlot_44209904(this, svtIndividuality, initPos, v11);
  return 0;
}


bool QuestRestrictionInfo__IsSelectableNormalSupport(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass191_0_o *v5; // x21
  _BOOL8 IsMyServantOrNpcRestriction_44229676; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v10; // w9
  QuestRestrictionInfo_SlotInfo_o *v11; // x8
  bool v12; // zf
  Il2CppObject *v13; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_4D2DC35 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C94098(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__DisplayClass191_0__IsSelectableNormalSupport_b__0__);
    sub_1C94098(&QuestRestrictionInfo___c__DisplayClass191_0_TypeInfo);
    byte_4D2DC35 = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass191_0_o *)sub_1C942E4(QuestRestrictionInfo___c__DisplayClass191_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass191_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_18;
  v5->fields.pos = pos;
  IsMyServantOrNpcRestriction_44229676 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_44229676(this, pos, v8);
  if ( !IsMyServantOrNpcRestriction_44229676 )
  {
    LOBYTE(v13) = 0;
    return (char)v13;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    v15 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v15,
      (Il2CppObject *)v5,
      Method_QuestRestrictionInfo___c__DisplayClass191_0__IsSelectableNormalSupport_b__0__,
      0);
    if ( myServantOrNpcRestrictionEntityList )
    {
      v13 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v15,
              (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v13 )
        return (char)v13;
      v12 = ((__int64)v13[2].klass & 0xFFFFFFF7) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_1C942F0(IsMyServantOrNpcRestriction_44229676, v7);
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v10 = v5->fields.pos - 1;
  if ( (unsigned int)v10 >= LODWORD(slotInfos->max_length) )
    sub_1C942F8(IsMyServantOrNpcRestriction_44229676);
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
  void *IsMyServantOrNpcRestriction_44229676; // x0
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

  if ( (byte_4D2DC30 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    byte_4D2DC30 = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  IsMyServantOrNpcRestriction_44229676 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    IsMyServantOrNpcRestriction_44229676 = BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    p_myServantNumMax = (int32_t *)(*((_QWORD *)IsMyServantOrNpcRestriction_44229676 + 23) + 172LL);
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
  IsMyServantOrNpcRestriction_44229676 = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_44229676(
                                                   this,
                                                   pos,
                                                   *(const MethodInfo **)&pos);
  if ( ((unsigned __int8)IsMyServantOrNpcRestriction_44229676 & 1) != 0 )
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
            sub_1C942F8(IsMyServantOrNpcRestriction_44229676);
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
    sub_1C942F0(IsMyServantOrNpcRestriction_44229676, *(_QWORD *)&svtId);
  }
  IsMyServantOrNpcRestriction_44229676 = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                           this,
                                           *(const MethodInfo **)&svtId);
  if ( !IsMyServantOrNpcRestriction_44229676 )
    goto LABEL_44;
  v13 = *((_DWORD *)IsMyServantOrNpcRestriction_44229676 + 6);
  if ( v13 < 1 )
    return 1;
  v14 = 0;
  v15 = -v13;
  do
  {
    if ( !(v15 + v14) )
      goto LABEL_43;
    v16 = *((_DWORD *)IsMyServantOrNpcRestriction_44229676 + v14 + 8);
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
  if ( (byte_4D2DC44 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D2DC44 = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( slotInfos )
  {
    if ( (unsigned int)(initPos - 1) >= LODWORD(slotInfos->max_length) )
      sub_1C942F8(this);
    v8 = slotInfos->m_Items[initPos - 1];
    if ( !v8 )
      sub_1C942F0(this, *(_QWORD *)&pos);
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

  if ( (byte_4D2DC4D & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2DC4D = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       svtId,
                                       (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
          sub_1C942F8(Instance);
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
                                               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_int____get_Item__);
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
                       (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_int____get_Item__);
              v19 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)Item,
                      v13,
                      (const MethodInfo_31C6B58 *)Method_System_Linq_Enumerable_Intersect_int___);
              Instance = System_Linq_Enumerable__ToArray_int_(
                           v19,
                           (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
              if ( !v16->fields.rangeTypeList )
                goto LABEL_33;
              v20 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              if ( System_Collections_Generic_List_Int32Enum___get_Item(
                     (System_Collections_Generic_List_T__o *)v16->fields.rangeTypeList,
                     v17,
                     (const MethodInfo_385034C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
              {
                if ( System_Linq_Enumerable__Any_int_(
                       v20,
                       (const MethodInfo_31A7A14 *)Method_System_Linq_Enumerable_Any_int___) )
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
                       (const MethodInfo_385034C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 2
                  && !System_Linq_Enumerable__Any_int_(
                        v20,
                        (const MethodInfo_31A7A14 *)Method_System_Linq_Enumerable_Any_int___) )
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
      sub_1C942F0(Instance, v10);
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


bool QuestRestrictionInfo__IsUniqueIndividualityServant(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x19
  unsigned int v8; // w21
  RestrictionWholeEntity_o *v9; // x8
  struct System_Int32_array *targetVals; // x23
  il2cpp_array_size_t v11; // x8
  unsigned __int64 v12; // x24
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2DC4C & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_4D2DC4C = 1;
  }
  entity = 0;
  if ( !this->fields.restrictionBaseEntity )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_23:
    sub_1C942F0(Master_object, v4);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return 1;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
LABEL_24:
      sub_1C942F8(Master_object);
    v9 = restrictionWholeEntities->m_Items[v8];
    if ( !v9 )
      goto LABEL_23;
    if ( v9->fields.type == 9 )
    {
      targetVals = v9->fields.targetVals;
      if ( !targetVals )
        goto LABEL_23;
      v11 = targetVals->max_length;
      if ( (int)v11 >= 1 )
        break;
    }
LABEL_19:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v8 >= max_length )
      return 1;
  }
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v11 )
      goto LABEL_24;
    if ( !v7 )
      goto LABEL_23;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      v7,
                                      &entity,
                                      targetVals->m_Items[v12],
                                      (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      return 0;
    LODWORD(v11) = targetVals->max_length;
    if ( (__int64)++v12 >= (int)v11 )
      goto LABEL_19;
  }
}


bool QuestRestrictionInfo__IsUniqueIndividuality_44213480(
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
  const MethodInfo_345DA68 **v20; // x26
  const MethodInfo_31B9458 **v21; // x24
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
  const MethodInfo_31B9458 **v32; // x27
  Il2CppObject *v33; // x24
  BalanceConfig_c **v34; // x23
  Il2CppObject *v35; // x20
  const MethodInfo_345DA68 **v36; // x22
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

  if ( (byte_4D2DC1A & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&ImageLimitCount_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2DC1A = 1;
  }
  v57 = 0;
  entity = 0;
  v56 = 0;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_71;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo
    || (Instance = (DataManager_o *)FollowerInfo__get_IsNpc(npcFollowerInfo, 0), ((unsigned __int8)Instance & 1) == 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_82;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
                                (const MethodInfo_345DA68 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !Master_object )
      goto LABEL_82;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &v57,
           npcFollowerInfo->fields.npcFollowerSvtId,
           (const MethodInfo_345DA68 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
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
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      svtId,
                                      (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0) )
  {
LABEL_82:
    sub_1C942F0(Instance, v14);
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
  v20 = (const MethodInfo_345DA68 **)&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__;
  v21 = (const MethodInfo_31B9458 **)&Method_System_Linq_Enumerable_Contains_int___;
  v22 = 0;
  v52 = this->fields.uniqueIndividualitys;
  v55 = this;
  while ( 1 )
  {
    if ( v22 >= (unsigned int)max_length )
LABEL_83:
      sub_1C942F8(Instance);
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
                                      (const MethodInfo_345DA68 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
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
          v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v59, 0);
          v41 = DataMasterBase_object__object__int___GetEntity(
                  v16,
                  v40,
                  (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                    (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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


bool QuestRestrictionInfo__IsUniqueIndividuality_44214964(
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

  if ( (byte_4D2DC1B & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&ImageLimitCount_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2DC1B = 1;
  }
  v50 = 0;
  entity = 0;
  v48 = 0;
  v49 = 0;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo || !FollowerInfo__get_IsNpc(npcFollowerInfo, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
          (const MethodInfo_345DA68 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    Instance = Master_object;
    if ( !Master_object )
      goto LABEL_75;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           Master_object,
           &v50,
           npcFollowerInfo->fields.npcFollowerSvtId,
           (const MethodInfo_345DA68 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
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
  Instance = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0) )
  {
LABEL_75:
    sub_1C942F0(Instance, v17);
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
        sub_1C942F8(Instance);
      v24 = uniqueIndividualitys->m_Items[v23];
      if ( source )
      {
        Instance = (void *)System_Linq_Enumerable__Contains_int_(
                             source,
                             v24,
                             (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
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
                       (const MethodInfo_345DA68 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
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
                          (const MethodInfo_345DA68 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
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
                    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v52, 0);
                    v37 = DataMasterBase_object__object__int___GetEntity(
                            v20,
                            v36,
                            (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                       (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___) )
                {
                  return 1;
                }
              }
              else
              {
                v29 = PartyOrganizationListViewItem__get_SvtId(v27, 0);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v29, 0);
                if ( DataMasterBase_object__object__int___TryGetEntity(
                       v20,
                       &v48,
                       v30,
                       (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
bool QuestRestrictionInfo__IsUniqueServant_44212952(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  bool isUniqueServant; // w8
  int32_t v6; // w22
  BalanceConfig_c *v7; // x0
  struct System_Int32_array *deckSvtIdList; // x9
  int32_t v9; // w9

  if ( (byte_4D2DC18 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D2DC18 = 1;
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
            sub_1C942F0(v7, *(_QWORD *)&svtId);
          if ( (unsigned int)v6 >= LODWORD(deckSvtIdList->max_length) )
            sub_1C942F8(v7);
          v9 = deckSvtIdList->m_Items[v6++];
        }
        while ( v9 != svtId );
      }
    }
  }
  return isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsUniqueServant_44213152(
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

  if ( (byte_4D2DC19 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2DC19 = 1;
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
          sub_1C942F0(Member, *(_QWORD *)&svtId);
        v15 = PartyOrganizationListViewItem__get_SvtId(Member, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v15, 0) == svtId )
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

  if ( (byte_4D2DC54 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2DC54 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_11:
    sub_1C942F0(Master_object, v4);
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

  if ( (byte_4D2DC06 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&FollowerInfo___TypeInfo);
    sub_1C94098(&int___TypeInfo);
    byte_4D2DC06 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_1C94140(int___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.deckSvtIdList = v4;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.deckSvtIdList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct FollowerInfo_array *)sub_1C94140(
                                       FollowerInfo___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
  this->fields.deckNpcInfoList = v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.deckNpcInfoList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4D2DC03 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2DC03 = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtIdList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
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
          sub_1C9403C((GrandQuestFolderBoardItem_o *)((char *)deckNpcInfoList + v7 * 4), 0, v9, v10, v11, v12, v13, v14);
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
              NpcFollowerServantId = (__int64)NpcFollowerMaster__GetEntity_43191420(
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
                NpcFollowerServantId = sub_1C941D4(NpcFollowerServantId, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
                if ( !NpcFollowerServantId )
                {
                  v38 = sub_1C94314(0);
                  sub_1C941C0(v38, 0);
                }
              }
              if ( v6 >= v21[6] )
LABEL_43:
                sub_1C942F8(NpcFollowerServantId);
              *(_QWORD *)&v21[2 * v6 + 8] = v28;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)&v21[v7], v28, v22, v23, v24, v25, v26, v27);
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
          NpcFollowerServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v39, 0);
          if ( !v31 )
LABEL_44:
            sub_1C942F0(NpcFollowerServantId, v8);
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
            NpcFollowerServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v40, 0);
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


void QuestRestrictionInfo__SetDeckInfo_44201844(
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
  NpcFollowerEntity_o *Entity_43191420; // x0
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

  if ( (byte_4D2DC04 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2DC04 = 1;
  }
  fixed = QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, (const MethodInfo *)eventDeckEntity);
  if ( eventDeckEntity && this->fields.deckSvtIdList )
  {
    v6 = fixed;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
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
                     (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Follower & 1) == 0 )
        {
          v20 = this->fields.deckNpcInfoList;
          if ( !v20 )
            goto LABEL_48;
          if ( v7 >= LODWORD(v20->max_length) )
            goto LABEL_49;
          v20->m_Items[v7] = 0;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)((char *)v20 + v8 * 4), 0, v14, v15, v16, v17, v18, v19);
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
                  (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            NpcFollowerServantId = UserEventDeckEntity__GetNpcFollowerServantId(eventDeckEntity, v7, 0);
            if ( NpcFollowerServantId >= 1 )
            {
              v23 = NpcFollowerServantId;
              Follower = (__int64)Master_object;
              if ( !Master_object )
                goto LABEL_48;
              Entity_43191420 = NpcFollowerMaster__GetEntity_43191420(
                                  Master_object,
                                  this->fields.questId,
                                  this->fields.questPhase,
                                  v23,
                                  0);
              if ( Entity_43191420 )
              {
                v25 = (unsigned int *)this->fields.deckNpcInfoList;
                Follower = (__int64)NpcFollowerMaster__GetFollower(
                                      Master_object,
                                      this->fields.questId,
                                      this->fields.questPhase,
                                      Entity_43191420->fields.id,
                                      0);
                if ( !v25 )
                  goto LABEL_48;
                v32 = Follower;
                if ( Follower )
                {
                  Follower = sub_1C941D4(Follower, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
                  if ( !Follower )
                  {
                    v42 = sub_1C94314(0);
                    sub_1C941C0(v42, 0);
                  }
                }
                if ( v7 >= v25[6] )
                  goto LABEL_49;
                *(_QWORD *)&v25[2 * v7 + 8] = v32;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)&v25[v8], v32, v26, v27, v28, v29, v30, v31);
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
          Follower = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v44, 0);
          if ( !v35 )
LABEL_48:
            sub_1C942F0(Follower, v9);
          if ( v7 >= LODWORD(v35->max_length) )
LABEL_49:
            sub_1C942F8(Follower);
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
            Follower = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v45, 0);
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


void QuestRestrictionInfo__SetDeckInfo_44203196(
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

  if ( (byte_4D2DC05 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2DC05 = 1;
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
          sub_1C9403C(
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
        Member = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                      SvtId,
                                                      0);
        if ( !v18 )
LABEL_39:
          sub_1C942F0(Member, partyItem);
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
                  Member = (PartyOrganizationListViewItem_o *)sub_1C941D4(v26, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
                  if ( !Member )
                  {
                    v27 = sub_1C94314(0);
                    sub_1C941C0(v27, 0);
                  }
                }
                if ( v11 >= v25[6] )
LABEL_40:
                  sub_1C942F8(Member);
                *(_QWORD *)&v25[2 * v11 + 8] = v26;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)&v25[i], (int32_t)v26, num, (int32_t)method, v4, v5, v6, v7);
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

  if ( (byte_4D2DC07 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2DC07 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.deckNpcInfoList && this->fields.isNpcMultipleBattle && !this->fields.isNpcEditablePos )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (FollowerInfo_array *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object
      || (Master_object = NpcFollowerMaster__GetQuestFollowerList(
                            (NpcFollowerMaster_o *)Master_object,
                            this->fields.questId,
                            this->fields.questPhase,
                            0)) == 0 )
    {
LABEL_25:
      sub_1C942F0(Master_object, v5);
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
          Master_object = (FollowerInfo_array *)sub_1C941D4(v9, deckNpcInfoList->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v24 = sub_1C94314(0);
            sub_1C941C0(v24, 0);
          }
          if ( (unsigned int)(npcInitIdx - 1) >= LODWORD(deckNpcInfoList->max_length) )
            break;
          v18 = (char *)deckNpcInfoList + 8 * npcInitIdx - 8;
          *((_QWORD *)v18 + 4) = v9;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)v9, v12, v13, v14, v15, v16, v17);
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
              *(const MethodInfo_384DE10 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
      sub_1C942F8(Master_object);
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
  const MethodInfo *v202; // x4
  const MethodInfo *v203; // x1
  System_Collections_Generic_Dictionary_int__object__o *v204; // x20
  int32_t v205; // w2
  int32_t v206; // w3
  System_String_o *v207; // x4
  int32_t v208; // w5
  int64_t v209; // x6
  System_String_o *v210; // x7
  System_Collections_Generic_Dictionary_int__object__o *v211; // x20
  int32_t v212; // w2
  int32_t v213; // w3
  System_String_o *v214; // x4
  int32_t v215; // w5
  int64_t v216; // x6
  System_String_o *v217; // x7
  System_Collections_Generic_Dictionary_int__object__o *v218; // x20
  int32_t v219; // w2
  int32_t v220; // w3
  System_String_o *v221; // x4
  int32_t v222; // w5
  int64_t v223; // x6
  System_String_o *v224; // x7
  System_Collections_Generic_List_object__o *v225; // x29
  RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  bool HasFlag; // w0
  BalanceConfig_c *v228; // x0
  __int64 v229; // x0
  int32_t v230; // w2
  int32_t v231; // w3
  System_String_o *v232; // x4
  int32_t v233; // w5
  int64_t v234; // x6
  System_String_o *v235; // x7
  RestrictionBaseEntity_o *v236; // x8
  Il2CppObject *v237; // x20
  RestrictionWholeEntity_array *Entities; // x0
  int32_t v239; // w2
  int32_t v240; // w3
  System_String_o *v241; // x4
  int32_t v242; // w5
  int64_t v243; // x6
  System_String_o *v244; // x7
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  unsigned int v247; // w25
  RestrictionWholeEntity_o *v248; // x21
  System_Boolean_array *SetPossiblePosition; // x0
  int32_t v250; // w2
  int32_t v251; // w3
  System_String_o *v252; // x4
  int32_t v253; // w5
  int64_t v254; // x6
  System_String_o *v255; // x7
  Il2CppObject *v256; // x23
  int32_t v257; // w0
  int32_t v258; // w2
  int32_t v259; // w3
  System_String_o *v260; // x4
  int32_t v261; // w5
  int64_t v262; // x6
  System_String_o *v263; // x7
  System_Collections_Generic_List_object__o *v264; // x23
  int32_t v265; // w2
  int32_t v266; // w3
  System_String_o *v267; // x4
  int32_t v268; // w5
  int64_t v269; // x6
  System_String_o *v270; // x7
  struct System_Object_array *v271; // x8
  _QWORD *v272; // x9
  __int64 v273; // x10
  __int64 v274; // x1
  Il2CppClass **v275; // x0
  System_Collections_Generic_List_object__o *v276; // x23
  int32_t v277; // w2
  int32_t v278; // w3
  System_String_o *v279; // x4
  int32_t v280; // w5
  int64_t v281; // x6
  System_String_o *v282; // x7
  struct System_Object_array *items; // x8
  _QWORD *v284; // x9
  __int64 size; // x10
  __int64 v286; // x1
  Il2CppClass **v287; // x0
  System_Collections_Generic_List_object__o *v288; // x23
  int32_t v289; // w2
  int32_t v290; // w3
  System_String_o *v291; // x4
  int32_t v292; // w5
  int64_t v293; // x6
  System_String_o *v294; // x7
  struct System_Object_array *v295; // x8
  _QWORD *v296; // x9
  __int64 v297; // x10
  __int64 v298; // x1
  Il2CppClass **v299; // x0
  Il2CppObject *v300; // x23
  int32_t v301; // w0
  int32_t v302; // w2
  int32_t v303; // w3
  System_String_o *v304; // x4
  int32_t v305; // w5
  int64_t v306; // x6
  System_String_o *v307; // x7
  BalanceConfig_c *v308; // x0
  __int64 v309; // x0
  int32_t v310; // w2
  int32_t v311; // w3
  System_String_o *v312; // x4
  int32_t v313; // w5
  int64_t v314; // x6
  System_String_o *v315; // x7
  __int64 v316; // x0
  int32_t v317; // w2
  int32_t v318; // w3
  System_String_o *v319; // x4
  int32_t v320; // w5
  int64_t v321; // x6
  System_String_o *v322; // x7
  __int64 v323; // x0
  int32_t v324; // w2
  int32_t v325; // w3
  System_String_o *v326; // x4
  int32_t v327; // w5
  int64_t v328; // x6
  System_String_o *v329; // x7
  __int64 v330; // x0
  int32_t v331; // w2
  int32_t v332; // w3
  System_String_o *v333; // x4
  int32_t v334; // w5
  int64_t v335; // x6
  System_String_o *v336; // x7
  System_Boolean_array *v337; // x0
  int32_t v338; // w2
  int32_t v339; // w3
  System_String_o *v340; // x4
  int32_t v341; // w5
  int64_t v342; // x6
  System_String_o *v343; // x7
  Il2CppObject *v344; // x23
  int32_t v345; // w0
  int32_t v346; // w2
  int32_t v347; // w3
  System_String_o *v348; // x4
  int32_t v349; // w5
  int64_t v350; // x6
  System_String_o *v351; // x7
  System_Collections_Generic_List_object__o *v352; // x23
  int32_t v353; // w2
  int32_t v354; // w3
  System_String_o *v355; // x4
  int32_t v356; // w5
  int64_t v357; // x6
  System_String_o *v358; // x7
  struct System_Object_array *v359; // x8
  _QWORD *v360; // x9
  __int64 v361; // x10
  __int64 v362; // x1
  Il2CppClass **v363; // x0
  Il2CppObject *v364; // x23
  int32_t v365; // w0
  int32_t v366; // w2
  int32_t v367; // w3
  System_String_o *v368; // x4
  int32_t v369; // w5
  int64_t v370; // x6
  System_String_o *v371; // x7
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
  struct System_Int32_array *targetVals; // x8
  System_Collections_Generic_List_object__o *v385; // x23
  int32_t v386; // w2
  int32_t v387; // w3
  System_String_o *v388; // x4
  int32_t v389; // w5
  int64_t v390; // x6
  System_String_o *v391; // x7
  struct System_Object_array *v392; // x8
  _QWORD *v393; // x9
  __int64 v394; // x10
  __int64 v395; // x1
  Il2CppClass **v396; // x0
  System_Collections_Generic_List_object__o *v397; // x23
  int32_t v398; // w2
  int32_t v399; // w3
  System_String_o *v400; // x4
  int32_t v401; // w5
  int64_t v402; // x6
  System_String_o *v403; // x7
  struct System_Object_array *v404; // x8
  _QWORD *v405; // x9
  __int64 v406; // x10
  __int64 v407; // x1
  Il2CppClass **v408; // x0
  int32_t restrictionMessageId; // w2
  int32_t v410; // w2
  int32_t v411; // w3
  System_String_o *v412; // x4
  int32_t v413; // w5
  int64_t v414; // x6
  System_String_o *v415; // x7
  struct System_Object_array *v416; // x8
  _QWORD *v417; // x9
  __int64 v418; // x10
  Il2CppClass **v419; // x0
  QuestRestrictionInfo_DialogMessageInfo_o *v420; // x23
  QuestRestrictionInfo_o *v421; // x28
  char isAllOutBattle; // w8
  __int64 v423; // x21
  int32_t v424; // w2
  int32_t v425; // w3
  System_String_o *v426; // x4
  int32_t v427; // w5
  int64_t v428; // x6
  System_String_o *v429; // x7
  BalanceConfig_c *v430; // x0
  __int64 v431; // x0
  int32_t v432; // w2
  int32_t v433; // w3
  System_String_o *v434; // x4
  int32_t v435; // w5
  int64_t v436; // x6
  System_String_o *v437; // x7
  int32_t v438; // w21
  int v439; // w24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v440; // x8
  __int64 v441; // x22
  System_Collections_Generic_List_int__o *v442; // x24
  int v443; // w8
  __int64 v444; // x19
  __int64 v445; // x23
  struct System_Int32_array *v446; // x8
  _QWORD *v447; // x9
  __int64 v448; // x10
  int32_t v449; // w2
  int32_t v450; // w2
  int32_t v451; // w3
  System_String_o *v452; // x4
  int32_t v453; // w5
  int64_t v454; // x6
  System_String_o *v455; // x7
  struct System_Object_array *v456; // x8
  _QWORD *v457; // x9
  __int64 v458; // x10
  Il2CppClass **v459; // x0
  QuestRestrictionInfo_DialogMessageInfo_o *v460; // x23
  __int64 v461; // x24
  GrandQuestFolderBoardItem_c *klass; // x25
  QuestRestrictionInfo_SlotInfo_o *v463; // x23
  int32_t v464; // w2
  int32_t v465; // w3
  System_String_o *v466; // x4
  int32_t v467; // w5
  int64_t v468; // x6
  System_String_o *v469; // x7
  int v470; // w19
  void **v471; // x0
  int servantNumMax; // w8
  GrandQuestFolderBoardItem_c *v473; // x8
  int32_t v474; // w24
  __int64 v475; // x8
  QuestRestrictionInfo___c_c *v476; // x0
  System_Func_object__bool__o *_9__88_0; // x23
  Il2CppObject *v478; // x25
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v480; // w2
  int32_t v481; // w3
  System_String_o *v482; // x4
  int32_t v483; // w5
  int64_t v484; // x6
  System_String_o *v485; // x7
  _BOOL4 v486; // w0
  QuestRestrictionInfo___c_c *v487; // x8
  _BOOL4 v488; // w23
  System_Func_object__bool__o *_9__88_1; // x25
  Il2CppObject *v490; // x28
  struct QuestRestrictionInfo___c_StaticFields *v491; // x0
  int32_t v492; // w2
  int32_t v493; // w3
  System_String_o *v494; // x4
  int32_t v495; // w5
  int64_t v496; // x6
  System_String_o *v497; // x7
  _BOOL4 v498; // w0
  QuestRestrictionInfo___c_c *v499; // x8
  _BOOL4 v500; // w25
  System_Func_object__bool__o *_9__88_2; // x28
  Il2CppObject *v502; // x27
  struct QuestRestrictionInfo___c_StaticFields *v503; // x0
  int32_t v504; // w2
  int32_t v505; // w3
  System_String_o *v506; // x4
  int32_t v507; // w5
  int64_t v508; // x6
  System_String_o *v509; // x7
  GrandQuestFolderBoardItem_c *v510; // x8
  __int64 v511; // x8
  GrandQuestFolderBoardItem_c *v512; // x8
  __int64 v513; // x8
  GrandQuestFolderBoardItem_c *v514; // x8
  __int64 v515; // x8
  int v516; // w8
  unsigned int v517; // w27
  __int64 v518; // x25
  __int64 v519; // x8
  GrandQuestFolderBoardItem_c *v520; // x8
  __int64 v521; // x8
  System_Collections_Generic_List_object__o *v522; // x23
  int32_t v523; // w2
  int32_t v524; // w3
  System_String_o *v525; // x4
  int32_t v526; // w5
  int64_t v527; // x6
  System_String_o *v528; // x7
  struct System_Object_array *v529; // x8
  _QWORD *v530; // x9
  __int64 v531; // x10
  __int64 v532; // x1
  Il2CppClass **v533; // x0
  GrandQuestFolderBoardItem_c *v534; // x8
  __int64 v535; // x8
  struct System_Int32_array *v536; // x8
  _QWORD *v537; // x9
  __int64 v538; // x10
  System_String_o *v539; // x23
  GrandQuestFolderBoardItem_c *v540; // x8
  __int64 v541; // x8
  int32_t v542; // w2
  int32_t v543; // w3
  System_String_o *v544; // x4
  int32_t v545; // w5
  int64_t v546; // x6
  System_String_o *v547; // x7
  GrandQuestFolderBoardItem_c *v548; // x8
  __int64 v549; // x8
  System_String_o **v550; // x25
  GrandQuestFolderBoardItem_c *v551; // x8
  QuestRestrictionInfo___c_c *v552; // x0
  __int64 v553; // x27
  System_Func_object__bool__o *_9__88_3; // x23
  Il2CppObject *v555; // x25
  struct QuestRestrictionInfo___c_StaticFields *v556; // x0
  int32_t v557; // w2
  int32_t v558; // w3
  System_String_o *v559; // x4
  int32_t v560; // w5
  int64_t v561; // x6
  System_String_o *v562; // x7
  GrandQuestFolderBoardItem_c *v563; // x8
  __int64 v564; // x8
  GrandQuestFolderBoardItem_c *v565; // x8
  __int64 v566; // x8
  GrandQuestFolderBoardItem_c *v567; // x8
  __int64 v568; // x8
  System_Object_array *v569; // x0
  int32_t v570; // w2
  int32_t v571; // w3
  System_String_o *v572; // x4
  int32_t v573; // w5
  int64_t v574; // x6
  System_String_o *v575; // x7
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v577; // w10
  int v578; // w11
  int v579; // w9
  int v580; // w20
  int32_t v581; // w19
  QuestRestrictionInfo_SlotInfo_o *v582; // x13
  int v583; // w21
  int v584; // w22
  __int64 v585; // x8
  bool HasFlag_43240700; // w0
  bool v587; // w0
  Il2CppObject *Value_int__object; // x0
  int v589; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v591; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v592; // x8
  __int64 v593; // x8
  Il2CppObject *v594; // x20
  int32_t v595; // w0
  int32_t v596; // w2
  int32_t v597; // w3
  System_String_o *v598; // x4
  int32_t v599; // w5
  int64_t v600; // x6
  System_String_o *v601; // x7
  System_Collections_Generic_Dictionary_int__object__o *restrictionSlotDictionary; // x8
  _BOOL8 v603; // x0
  __int64 v604; // x1
  int monitor; // w9
  int v606; // w10
  __int64 v607; // x11
  System_Text_StringBuilder_o *v608; // x20
  System_Text_StringBuilder_o *v609; // x21
  struct RestrictionWholeEntity_array *v610; // x19
  int v611; // w8
  unsigned int v612; // w22
  RestrictionWholeEntity_o *v613; // x24
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  int v616; // w25
  _BOOL4 v617; // w8
  __int64 v618; // x0
  int32_t v619; // w2
  int32_t v620; // w3
  System_String_o *v621; // x4
  int32_t v622; // w5
  int64_t v623; // x6
  System_String_o *v624; // x7
  System_String_o *v625; // x19
  System_String_o *v626; // x0
  System_String_o *v627; // x0
  int32_t v628; // w2
  int32_t v629; // w3
  System_String_o *v630; // x4
  int32_t v631; // w5
  int64_t v632; // x6
  System_String_o *v633; // x7
  __int64 v634; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // [xsp+8h] [xbp-198h]
  GrandQuestFolderBoardItem_o *p_svtIdForceBattleList; // [xsp+10h] [xbp-190h]
  GrandQuestFolderBoardItem_o *p_restrictionMessage; // [xsp+18h] [xbp-188h]
  GrandQuestFolderBoardItem_o *p_confirmRestrictionMessage; // [xsp+20h] [xbp-180h]
  struct RestrictionWholeEntity_array *v639; // [xsp+28h] [xbp-178h]
  GrandQuestFolderBoardItem_o *p_fixedSupportIndividualities; // [xsp+30h] [xbp-170h]
  GrandQuestFolderBoardItem_o *p_fixedNpcIndividualities; // [xsp+38h] [xbp-168h]
  GrandQuestFolderBoardItem_o *p_needStartingIndividualities; // [xsp+40h] [xbp-160h]
  GrandQuestFolderBoardItem_o *p_uniqueIndividualitys; // [xsp+48h] [xbp-158h]
  struct System_Collections_Generic_List_int____o **p_fixedMyServantIndividualitiesList; // [xsp+50h] [xbp-150h]
  struct System_Collections_Generic_List_int____o **p_fixedIndividualitiesList; // [xsp+58h] [xbp-148h]
  struct System_Collections_Generic_List_int____o **p_needStartingIndividualitiesList; // [xsp+60h] [xbp-140h]
  struct System_Collections_Generic_List_int____o **p_fixedNpcIndividualitiesList; // [xsp+68h] [xbp-138h]
  struct System_Collections_Generic_List_int____o **p_fixedSupportIndividualitiesList; // [xsp+70h] [xbp-130h]
  struct System_Int32_array **p_deckDispLimitCountList; // [xsp+78h] [xbp-128h]
  struct System_Int32_array **p_deckLimitCountList; // [xsp+80h] [xbp-120h]
  struct FollowerInfo_array **p_deckNpcInfoList; // [xsp+88h] [xbp-118h]
  struct System_Collections_Generic_List_bool____o **p_myServantPositionsList; // [xsp+90h] [xbp-110h]
  struct System_Collections_Generic_List_bool____o **p_positionsList; // [xsp+A0h] [xbp-100h]
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o **v655; // [xsp+A8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o **p_restrictionSlotDetailDictionary; // [xsp+B0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_K__V__o **p_restrictionSlotDictionary; // [xsp+B8h] [xbp-E8h]
  struct RestrictionBaseEntity_o **p_restrictionBaseEntity; // [xsp+C0h] [xbp-E0h]
  QuestRestrictionInfo_o *v659; // [xsp+C8h] [xbp-D8h]
  GrandQuestFolderBoardItem_o *p_deckSvtIdList; // [xsp+D0h] [xbp-D0h]
  _BOOL4 v661; // [xsp+D0h] [xbp-D0h]
  int32_t questIdb; // [xsp+DCh] [xbp-C4h]
  GrandQuestFolderBoardItem_o *p_fields; // [xsp+E0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v665; // [xsp+E8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v666; // [xsp+100h] [xbp-A0h] BYREF
  Il2CppObject *item; // [xsp+120h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+128h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v669; // [xsp+130h] [xbp-70h] BYREF
  Il2CppObject *v670; // [xsp+138h] [xbp-68h] BYREF

  if ( (byte_4D2DC01 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
    sub_1C94098(&Method_BasicHelper_Any_RestrictionSlotEntity___);
    sub_1C94098(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
    sub_1C94098(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_RestrictionBaseMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_RestrictionSlotMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_RestrictionWholeMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1C94098(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__);
    sub_1C94098(&FollowerInfo___TypeInfo);
    sub_1C94098(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
    sub_1C94098(&System_Func_RestrictionSlotEntity__bool__TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_bool____Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_bool_____ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_bool____TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&QuestRestrictionInfo_SlotInfo___TypeInfo);
    sub_1C94098(&QuestRestrictionInfo_SlotInfo_TypeInfo);
    sub_1C94098(&System_Text_StringBuilder_TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__Setup_b__88_0__);
    sub_1C94098(&Method_QuestRestrictionInfo___c__Setup_b__88_1__);
    sub_1C94098(&Method_QuestRestrictionInfo___c__Setup_b__88_2__);
    sub_1C94098(&Method_QuestRestrictionInfo___c__Setup_b__88_3__);
    sub_1C94098(&QuestRestrictionInfo___c_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_10331/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/);
    sub_1C94098(&StringLiteral_10294/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DC01 = 1;
  }
  v669 = 0;
  v670 = 0;
  item = 0;
  entity = 0;
  memset(&v666, 0, sizeof(v666));
  this->fields.isRestriction = 0;
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  v10 = StringLiteral_1/*""*/;
  this->fields.restrictionMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  p_restrictionMessage = (GrandQuestFolderBoardItem_o *)&this->fields.restrictionMessage;
  sub_1C9403C(
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
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.confirmRestrictionMessage,
    (int32_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.supportOnlyRestrictionEntity = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.supportOnlyRestrictionEntity,
    0,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.uniqueSvtRestrictionEntity = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.uniqueSvtRestrictionEntity, 0, v23, v24, v25, v26, v27, v28);
  this->fields.deckSvtIdList = 0;
  p_deckSvtIdList = (GrandQuestFolderBoardItem_o *)&this->fields.deckSvtIdList;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.deckSvtIdList, 0, v29, v30, v31, v32, v33, v34);
  this->fields.deckNpcInfoList = 0;
  p_deckNpcInfoList = &this->fields.deckNpcInfoList;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.deckNpcInfoList, 0, v35, v36, v37, v38, v39, v40);
  this->fields.fixedSupportPositionRestrictionEntity = 0;
  sub_1C9403C(
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.supportPositionList, 0, v48, v49, v50, v51, v52, v53);
  this->fields.fixedMyServantPositionRestrictionEntity = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
    0,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.servantNumRestrictionEntity = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.servantNumRestrictionEntity, 0, v60, v61, v62, v63, v64, v65);
  this->fields.servantNumMax = 0;
  this->fields.myServantNumRestrictionEntity = 0;
  sub_1C9403C(
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.svtIdForceBattleList, 0, v72, v73, v74, v75, v76, v77);
  p_eventDeckNum = &this->fields.eventDeckNum;
  this->fields.isFatigure = 0;
  this->fields.eventDeckNum = 0;
  *(int32_t *)((char *)&this->fields.eventDeckNum + 3) = 0;
  v79 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v79,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v79;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.myServantOrNpcRestrictionEntityList,
    (int32_t)v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  v86 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v86,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.specifiedPositionList = v86;
  sub_1C9403C(
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
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedServantPositionRestrictionEntity,
    0,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  this->fields.uniqueIndividualityEntity = 0;
  sub_1C9403C(
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.deckLimitCountList, 0, v105, v106, v107, v108, v109, v110);
  this->fields.deckDispLimitCountList = 0;
  p_deckDispLimitCountList = &this->fields.deckDispLimitCountList;
  sub_1C9403C(
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
  v117 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v117,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v117;
  p_positionsList = &this->fields.positionsList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.positionsList,
    (int32_t)v117,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  v124 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v124,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v124;
  p_fixedIndividualitiesList = &this->fields.fixedIndividualitiesList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedIndividualitiesList,
    (int32_t)v124,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
  this->fields.isFixedMyServantPosition = 0;
  v131 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v131,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v131;
  p_myServantPositionsList = &this->fields.myServantPositionsList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.myServantPositionsList,
    (int32_t)v131,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  v138 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v138,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v138;
  p_fixedMyServantIndividualitiesList = &this->fields.fixedMyServantIndividualitiesList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedMyServantIndividualitiesList,
    (int32_t)v138,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  this->fields.isFixedSupportPosition = 0;
  v145 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v145,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v145;
  p_fixedSupportIndividualitiesList = &this->fields.fixedSupportIndividualitiesList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedSupportIndividualitiesList,
    (int32_t)v145,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  this->fields.isFixedNpcPosition = 0;
  v152 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v152,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v152;
  p_fixedNpcIndividualitiesList = &this->fields.fixedNpcIndividualitiesList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedNpcIndividualitiesList,
    (int32_t)v152,
    v153,
    v154,
    v155,
    v156,
    v157,
    v158);
  this->fields.npcPositionList = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.npcPositionList, 0, v159, v160, v161, v162, v163, v164);
  v165 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v165,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v165;
  p_needStartingIndividualitiesList = &this->fields.needStartingIndividualitiesList;
  sub_1C9403C(
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v172, v173, v174, v175, v176, v177);
  this->fields.dialogMessageInfoDictionary = 0;
  p_dialogMessageInfoDictionary = &this->fields.dialogMessageInfoDictionary;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.dialogMessageInfoDictionary,
    0,
    v179,
    v180,
    v181,
    v182,
    v183,
    v184);
  v185 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v185,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.grandServantRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v185;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantRestrictionEntityList,
    (int32_t)v185,
    v186,
    v187,
    v188,
    v189,
    v190,
    v191);
  v192 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v192,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.activeGrandBoardRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v192;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.activeGrandBoardRestrictionEntityList,
    (int32_t)v192,
    v193,
    v194,
    v195,
    v196,
    v197,
    v198);
  v659 = this;
  QuestRestrictionInfo__CacheOverwriteSvtTreasureDeviceLv(this, v199);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !Master_object )
    goto LABEL_388;
  p_restrictionBaseEntity = &this->fields.restrictionBaseEntity;
  if ( RestrictionBaseMaster__TryGetEntity(
         (RestrictionBaseMaster_o *)Master_object,
         &this->fields.restrictionBaseEntity,
         this->fields.questId,
         this->fields.questPhase,
         v202) )
  {
    this->fields.isRestriction = 1;
    v204 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v204,
      (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    this->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v204;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&this->fields.restrictionSlotDictionary;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.restrictionSlotDictionary,
      (int32_t)v204,
      v205,
      v206,
      v207,
      v208,
      v209,
      v210);
    v211 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v211,
      (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    this->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v211;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.restrictionSlotDetailDictionary,
      (int32_t)v211,
      v212,
      v213,
      v214,
      v215,
      v216,
      v217);
    v218 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v218,
      (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    this->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v218;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.dialogMessageInfoDictionary,
      (int32_t)v218,
      v219,
      v220,
      v221,
      v222,
      v223,
      v224);
    v225 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v225,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    Master_object = (__int64)v659->fields.restrictionBaseEntity;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__object__o **)&v659->fields.restrictionSlotDetailDictionary;
    if ( !Master_object )
      goto LABEL_388;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 2, 0);
    restrictionBaseEntity = v659->fields.restrictionBaseEntity;
    v659->fields.isNotTransitionSupportList = Master_object & 1;
    if ( !restrictionBaseEntity )
      goto LABEL_388;
    if ( RestrictionBaseEntity__HasFlag(restrictionBaseEntity, 4, 0) )
    {
      Master_object = (__int64)*p_restrictionBaseEntity;
      if ( !*p_restrictionBaseEntity )
        goto LABEL_388;
      *p_eventDeckNum = RestrictionBaseEntity__GetUserEventDeckNo((RestrictionBaseEntity_o *)Master_object, 0);
    }
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_388;
    HasFlag = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 16, 0);
    v659->fields.isUniqueServant = HasFlag;
    if ( HasFlag )
    {
      v228 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v228 = BalanceConfig_TypeInfo;
      }
      v229 = sub_1C94140(int___TypeInfo, (unsigned int)v228->static_fields->DeckMemberMax);
      p_deckSvtIdList->klass = (GrandQuestFolderBoardItem_c *)v229;
      sub_1C9403C(p_deckSvtIdList, v229, v230, v231, v232, v233, v234, v235);
    }
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_388;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 32, 0);
    v236 = v659->fields.restrictionBaseEntity;
    v659->fields.isNotSingleSupportOnly = Master_object & 1;
    if ( !v236 )
      goto LABEL_388;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      v236,
      &v659->fields.overwriteLimitCountSvtIds,
      &v659->fields.overwriteLimitCounts,
      &v659->fields.overwriteLimitCountIconIds,
      0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v237 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
    if ( !*p_restrictionBaseEntity )
      goto LABEL_388;
    if ( !Master_object )
      goto LABEL_388;
    Entities = RestrictionWholeMaster__GetEntities(
                 (RestrictionWholeMaster_o *)Master_object,
                 (*p_restrictionBaseEntity)->fields.restrictionWholeId,
                 0);
    v659->fields.restrictionWholeEntities = Entities;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&v659->fields.restrictionWholeEntities,
      (int32_t)Entities,
      v239,
      v240,
      v241,
      v242,
      v243,
      v244);
    restrictionWholeEntities = v659->fields.restrictionWholeEntities;
    p_restrictionWholeEntities = &v659->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_388;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v247 = 0;
      p_needStartingIndividualities = (GrandQuestFolderBoardItem_o *)&v659->fields.needStartingIndividualities;
      p_uniqueIndividualitys = (GrandQuestFolderBoardItem_o *)&v659->fields.uniqueIndividualitys;
      p_fixedSupportIndividualities = (GrandQuestFolderBoardItem_o *)&v659->fields.fixedSupportIndividualities;
      p_fixedNpcIndividualities = (GrandQuestFolderBoardItem_o *)&v659->fields.fixedNpcIndividualities;
      v639 = v659->fields.restrictionWholeEntities;
      while ( 2 )
      {
        if ( v247 >= max_length )
          goto LABEL_389;
        v248 = restrictionWholeEntities->m_Items[v247];
        if ( v248 )
        {
          switch ( v248->fields.type )
          {
            case 2:
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
              if ( !Master_object )
                goto LABEL_388;
              Master_object = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Master_object, questId, 17, 0);
              v659->fields.allOutBattleGroupNo = Master_object;
              v659->fields.isAllOutBattle = 1;
              goto LABEL_89;
            case 3:
              Master_object = System_Linq_Enumerable__Min(
                                (System_Collections_Generic_IEnumerable_int__o *)v248->fields.targetVals,
                                0);
              v659->fields.servantNumMax = Master_object - 1;
              goto LABEL_89;
            case 4:
              v276 = (System_Collections_Generic_List_object__o *)*p_positionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v248, 0);
              if ( !v276 )
                goto LABEL_388;
              items = v276->fields._items;
              v284 = Method_System_Collections_Generic_List_bool____Add__;
              ++v276->fields._version;
              if ( !items )
                goto LABEL_388;
              size = v276->fields._size;
              v286 = Master_object;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v276,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v284[4] + 192LL) + 112LL));
              }
              else
              {
                v287 = &items->obj.klass + size;
                v276->fields._size = size + 1;
                v287[4] = (Il2CppClass *)v286;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v287 + 4), v286, v277, v278, v279, v280, v281, v282);
              }
              Master_object = (__int64)v248->fields.targetVals;
              if ( !Master_object )
                goto LABEL_388;
              v385 = (System_Collections_Generic_List_object__o *)*p_fixedIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v385 )
                goto LABEL_388;
              Master_object = sub_1C941D4(Master_object, int___TypeInfo);
              v392 = v385->fields._items;
              v393 = Method_System_Collections_Generic_List_int____Add__;
              ++v385->fields._version;
              if ( !v392 )
                goto LABEL_388;
              v394 = v385->fields._size;
              v395 = Master_object;
              if ( (unsigned int)v394 >= LODWORD(v392->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v385,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v393[4] + 192LL) + 112LL));
              }
              else
              {
                v396 = &v392->obj.klass + v394;
                v385->fields._size = v394 + 1;
                v396[4] = (Il2CppClass *)v395;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v396 + 4), v395, v386, v387, v388, v389, v390, v391);
              }
              v659->fields.isFixedPosition = 1;
              goto LABEL_89;
            case 5:
              v288 = (System_Collections_Generic_List_object__o *)*p_myServantPositionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v248, 0);
              if ( !v288 )
                goto LABEL_388;
              v295 = v288->fields._items;
              v296 = Method_System_Collections_Generic_List_bool____Add__;
              ++v288->fields._version;
              if ( !v295 )
                goto LABEL_388;
              v297 = v288->fields._size;
              v298 = Master_object;
              if ( (unsigned int)v297 >= LODWORD(v295->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v288,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v296[4] + 192LL) + 112LL));
              }
              else
              {
                v299 = &v295->obj.klass + v297;
                v288->fields._size = v297 + 1;
                v299[4] = (Il2CppClass *)v298;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v299 + 4), v298, v289, v290, v291, v292, v293, v294);
              }
              Master_object = (__int64)v248->fields.targetVals;
              if ( !Master_object )
                goto LABEL_388;
              v397 = (System_Collections_Generic_List_object__o *)*p_fixedMyServantIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v397 )
                goto LABEL_388;
              Master_object = sub_1C941D4(Master_object, int___TypeInfo);
              v404 = v397->fields._items;
              v405 = Method_System_Collections_Generic_List_int____Add__;
              ++v397->fields._version;
              if ( !v404 )
                goto LABEL_388;
              v406 = v397->fields._size;
              v407 = Master_object;
              if ( (unsigned int)v406 >= LODWORD(v404->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v397,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v405[4] + 192LL) + 112LL));
              }
              else
              {
                v408 = &v404->obj.klass + v406;
                v397->fields._size = v406 + 1;
                v408[4] = (Il2CppClass *)v407;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v408 + 4), v407, v398, v399, v400, v401, v402, v403);
              }
              v659->fields.isFixedMyServantPosition = 1;
              goto LABEL_89;
            case 6:
              SetPossiblePosition = RestrictionWholeEntity__GetSetPossiblePosition(v248, 0);
              p_supportPositionList->klass = (GrandQuestFolderBoardItem_c *)SetPossiblePosition;
              sub_1C9403C(p_supportPositionList, (int32_t)SetPossiblePosition, v250, v251, v252, v253, v254, v255);
              Master_object = (__int64)v248->fields.targetVals;
              if ( !Master_object )
                goto LABEL_388;
              v256 = System_Array__Clone((System_Array_o *)Master_object, 0);
              p_fixedSupportIndividualities->klass = (GrandQuestFolderBoardItem_c *)sub_1C941D4(v256, int___TypeInfo);
              v257 = sub_1C941D4(v256, int___TypeInfo);
              sub_1C9403C(p_fixedSupportIndividualities, v257, v258, v259, v260, v261, v262, v263);
              Master_object = (__int64)v248->fields.targetVals;
              if ( !Master_object )
                goto LABEL_388;
              v264 = (System_Collections_Generic_List_object__o *)*p_fixedSupportIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v264 )
                goto LABEL_388;
              Master_object = sub_1C941D4(Master_object, int___TypeInfo);
              v271 = v264->fields._items;
              v272 = Method_System_Collections_Generic_List_int____Add__;
              ++v264->fields._version;
              if ( !v271 )
                goto LABEL_388;
              v273 = v264->fields._size;
              v274 = Master_object;
              if ( (unsigned int)v273 >= LODWORD(v271->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v264,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v272[4] + 192LL) + 112LL));
              }
              else
              {
                v275 = &v271->obj.klass + v273;
                v264->fields._size = v273 + 1;
                v275[4] = (Il2CppClass *)v274;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v275 + 4), v274, v265, v266, v267, v268, v269, v270);
              }
              v659->fields.isFixedSupportPosition = 1;
              goto LABEL_89;
            case 7:
              v337 = RestrictionWholeEntity__GetSetPossiblePosition(v248, 0);
              p_supportPositionList->klass = (GrandQuestFolderBoardItem_c *)v337;
              sub_1C9403C(p_supportPositionList, (int32_t)v337, v338, v339, v340, v341, v342, v343);
              Master_object = (__int64)v248->fields.targetVals;
              if ( !Master_object )
                goto LABEL_388;
              v344 = System_Array__Clone((System_Array_o *)Master_object, 0);
              p_fixedNpcIndividualities->klass = (GrandQuestFolderBoardItem_c *)sub_1C941D4(v344, int___TypeInfo);
              v345 = sub_1C941D4(v344, int___TypeInfo);
              sub_1C9403C(p_fixedNpcIndividualities, v345, v346, v347, v348, v349, v350, v351);
              Master_object = (__int64)v248->fields.targetVals;
              if ( !Master_object )
                goto LABEL_388;
              v352 = (System_Collections_Generic_List_object__o *)*p_fixedNpcIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v352 )
                goto LABEL_388;
              Master_object = sub_1C941D4(Master_object, int___TypeInfo);
              v359 = v352->fields._items;
              v360 = Method_System_Collections_Generic_List_int____Add__;
              ++v352->fields._version;
              if ( !v359 )
                goto LABEL_388;
              v361 = v352->fields._size;
              v362 = Master_object;
              if ( (unsigned int)v361 >= LODWORD(v359->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v352,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v360[4] + 192LL) + 112LL));
              }
              else
              {
                v363 = &v359->obj.klass + v361;
                v352->fields._size = v361 + 1;
                v363[4] = (Il2CppClass *)v362;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v363 + 4), v362, v353, v354, v355, v356, v357, v358);
              }
              v659->fields.isFixedNpcPosition = 1;
              goto LABEL_89;
            case 8:
              Master_object = (__int64)v248->fields.targetVals;
              if ( !Master_object )
                goto LABEL_388;
              v364 = System_Array__Clone((System_Array_o *)Master_object, 0);
              p_needStartingIndividualities->klass = (GrandQuestFolderBoardItem_c *)sub_1C941D4(v364, int___TypeInfo);
              v365 = sub_1C941D4(v364, int___TypeInfo);
              sub_1C9403C(p_needStartingIndividualities, v365, v366, v367, v368, v369, v370, v371);
              Master_object = (__int64)v248->fields.targetVals;
              if ( !Master_object )
                goto LABEL_388;
              v372 = (System_Collections_Generic_List_object__o *)*p_needStartingIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v372 )
                goto LABEL_388;
              Master_object = sub_1C941D4(Master_object, int___TypeInfo);
              v379 = v372->fields._items;
              v380 = Method_System_Collections_Generic_List_int____Add__;
              ++v372->fields._version;
              if ( !v379 )
                goto LABEL_388;
              v381 = v372->fields._size;
              v382 = Master_object;
              if ( (unsigned int)v381 >= LODWORD(v379->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v372,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v380[4] + 192LL) + 112LL));
              }
              else
              {
                v383 = &v379->obj.klass + v381;
                v372->fields._size = v381 + 1;
                v383[4] = (Il2CppClass *)v382;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v383 + 4), v382, v373, v374, v375, v376, v377, v378);
              }
              v659->fields.isNeedStarting = 1;
              goto LABEL_89;
            case 9:
              Master_object = (__int64)v248->fields.targetVals;
              if ( !Master_object )
                goto LABEL_388;
              v300 = System_Array__Clone((System_Array_o *)Master_object, 0);
              p_uniqueIndividualitys->klass = (GrandQuestFolderBoardItem_c *)sub_1C941D4(v300, int___TypeInfo);
              v301 = sub_1C941D4(v300, int___TypeInfo);
              sub_1C9403C(p_uniqueIndividualitys, v301, v302, v303, v304, v305, v306, v307);
              v308 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v308 = BalanceConfig_TypeInfo;
              }
              v309 = sub_1C94140(int___TypeInfo, (unsigned int)v308->static_fields->DeckMemberMax);
              v659->fields.deckSvtIdList = (struct System_Int32_array *)v309;
              sub_1C9403C(p_deckSvtIdList, v309, v310, v311, v312, v313, v314, v315);
              v316 = sub_1C94140(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v659->fields.deckLimitCountList = (struct System_Int32_array *)v316;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)p_deckLimitCountList, v316, v317, v318, v319, v320, v321, v322);
              v323 = sub_1C94140(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v659->fields.deckDispLimitCountList = (struct System_Int32_array *)v323;
              sub_1C9403C(
                (GrandQuestFolderBoardItem_o *)p_deckDispLimitCountList,
                v323,
                v324,
                v325,
                v326,
                v327,
                v328,
                v329);
              v330 = sub_1C94140(
                       FollowerInfo___TypeInfo,
                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v659->fields.deckNpcInfoList = (struct FollowerInfo_array *)v330;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)p_deckNpcInfoList, v330, v331, v332, v333, v334, v335, v336);
              restrictionWholeEntities = v639;
              v659->fields.isUniqueIndividuality = 1;
              goto LABEL_89;
            case 0xA:
              v659->fields.isDataLostBattle = 1;
              targetVals = v248->fields.targetVals;
              if ( !targetVals )
                goto LABEL_388;
              if ( !LODWORD(targetVals->max_length) )
                goto LABEL_389;
              v659->fields.dataLostBattleId = targetVals->m_Items[0];
LABEL_89:
              restrictionMessageId = v248->fields.restrictionMessageId;
              if ( restrictionMessageId < 1 )
                goto LABEL_102;
              if ( !v237 )
                goto LABEL_388;
              Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v237,
                                &entity,
                                restrictionMessageId,
                                (const MethodInfo_345B50C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
              if ( (Master_object & 1) == 0 )
                goto LABEL_102;
              if ( !v225 )
                goto LABEL_388;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v225,
                                entity,
                                (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) != 0 )
                goto LABEL_102;
              v201 = entity;
              v416 = v225->fields._items;
              v417 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
              ++v225->fields._version;
              if ( !v416 )
                goto LABEL_388;
              v418 = v225->fields._size;
              if ( (unsigned int)v418 >= LODWORD(v416->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v225,
                  v201,
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v417[4] + 192LL) + 112LL));
              }
              else
              {
                v419 = &v416->obj.klass + v418;
                v225->fields._size = v418 + 1;
                v419[4] = (Il2CppClass *)v201;
                sub_1C9403C(
                  (GrandQuestFolderBoardItem_o *)(v419 + 4),
                  (int32_t)v201,
                  v410,
                  v411,
                  v412,
                  v413,
                  v414,
                  v415);
              }
              v420 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_1C942E4(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
              QuestRestrictionInfo_DialogMessageInfo___ctor(v420, 0);
              if ( !v420 )
                goto LABEL_388;
              v420->fields.restrictionType = v248->fields.type;
              if ( !entity )
                goto LABEL_388;
              Master_object = (__int64)*p_dialogMessageInfoDictionary;
              if ( !*p_dialogMessageInfoDictionary )
                goto LABEL_388;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                (int32_t)entity[1].klass,
                (Il2CppObject *)v420,
                (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
LABEL_102:
              max_length = restrictionWholeEntities->max_length;
              if ( (int)++v247 >= max_length )
                goto LABEL_103;
              continue;
            default:
              goto LABEL_89;
          }
        }
        goto LABEL_388;
      }
    }
LABEL_103:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestMaster___);
    v421 = v659;
    if ( !Master_object )
      goto LABEL_388;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
      &v670,
      questId,
      (const MethodInfo_345B50C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    Master_object = (__int64)v670;
    if ( !v670 )
      goto LABEL_388;
    Master_object = QuestEntity__HasFlag_43240700((QuestEntity_o *)v670, 0x100000, questPhase, 0);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v659 )
        goto LABEL_388;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = v659->fields.isAllOutBattle;
    }
    v659->fields.isNoSupportBattle = isAllOutBattle;
    Master_object = (__int64)v670;
    if ( !v670 )
      goto LABEL_388;
    v659->fields.isSupportOnlyForceBattle = QuestEntity__HasFlag_43240700((QuestEntity_o *)v670, 0x80000, questPhase, 0);
    Master_object = (__int64)v670;
    if ( !v670 )
      goto LABEL_388;
    v659->fields.isFatigure = QuestEntity__HasFlag_43240700((QuestEntity_o *)v670, 0x200000, questPhase, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_388;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v669, questId, questPhase, 0) )
    {
      Master_object = sub_1C94140(int___TypeInfo, 1);
      if ( !v669 )
        goto LABEL_388;
      v423 = Master_object;
      Master_object = QuestPhaseEntity__GetSingleForceSvtId(v669, 0);
      if ( !v423 )
        goto LABEL_388;
      if ( !*(_DWORD *)(v423 + 24) )
        goto LABEL_389;
      *(_DWORD *)(v423 + 32) = Master_object;
      p_svtIdForceBattleList->klass = (GrandQuestFolderBoardItem_c *)v423;
      sub_1C9403C(p_svtIdForceBattleList, v423, v424, v425, v426, v427, v428, v429);
      Master_object = (__int64)v669;
      if ( !v669 )
        goto LABEL_388;
      v659->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v669, 0);
      Master_object = (__int64)v669;
      if ( !v669 )
        goto LABEL_388;
      v659->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v669, 0);
      Master_object = (__int64)v669;
      if ( !v669 )
        goto LABEL_388;
      v659->fields.isInfinityCost = QuestPhaseEntity__IsInfinityCost(v669, 0);
    }
    else
    {
      v659->fields.correctionIconId = -1;
    }
    v430 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v430 = BalanceConfig_TypeInfo;
    }
    v431 = sub_1C94140(QuestRestrictionInfo_SlotInfo___TypeInfo, (unsigned int)v430->static_fields->DeckMemberMax);
    p_fields->klass = (GrandQuestFolderBoardItem_c *)v431;
    sub_1C9403C(p_fields, v431, v432, v433, v434, v435, v436, v437);
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_388;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_34B4A5C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    Master_object = (__int64)*p_restrictionSlotDetailDictionary;
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_388;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_34B4A5C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v438 = 1;
    v439 = 1;
    v655 = p_dialogMessageInfoDictionary;
    while ( 1 )
    {
      Master_object = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Master_object = (__int64)BalanceConfig_TypeInfo;
      }
      if ( v438 > *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 172LL) )
        break;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      if ( !*p_restrictionBaseEntity )
        goto LABEL_388;
      if ( !Master_object )
        goto LABEL_388;
      Master_object = (__int64)RestrictionSlotMaster__GetEntities(
                                 (RestrictionSlotMaster_o *)Master_object,
                                 (*p_restrictionBaseEntity)->fields.restrictionSlotId,
                                 v438,
                                 0);
      if ( !Master_object )
        goto LABEL_388;
      v440 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
      v441 = Master_object;
      questIdb = v439;
      Master_object = (__int64)*p_restrictionSlotDictionary;
      v661 = v440 != 0;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_388;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
        v438,
        (Il2CppObject *)v441,
        (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v442 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v442,
        (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
      v443 = *(_DWORD *)(v441 + 24);
      if ( v443 >= 1 )
      {
        v444 = 0;
        while ( (unsigned int)v444 < v443 )
        {
          v445 = *(_QWORD *)(v441 + 32 + 8 * v444);
          if ( !v445 || !v442 )
            goto LABEL_388;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v442,
                            *(_DWORD *)(v445 + 40),
                            (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            v201 = (Il2CppObject *)*(unsigned int *)(v445 + 40);
            v446 = v442->fields._items;
            v447 = Method_System_Collections_Generic_List_int__Add__;
            ++v442->fields._version;
            if ( !v446 )
              goto LABEL_388;
            v448 = v442->fields._size;
            if ( (unsigned int)v448 >= LODWORD(v446->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v442,
                (int32_t)v201,
                *(const MethodInfo_384DE10 **)(*(_QWORD *)(v447[4] + 192LL) + 112LL));
            }
            else
            {
              v442->fields._size = v448 + 1;
              v446->m_Items[v448] = (int)v201;
            }
          }
          v449 = *(_DWORD *)(v445 + 44);
          if ( v449 >= 1 )
          {
            if ( !v237 )
              goto LABEL_388;
            Master_object = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v237,
                              &item,
                              v449,
                              (const MethodInfo_345B50C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (Master_object & 1) != 0 )
            {
              if ( !v225 )
                goto LABEL_388;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v225,
                                item,
                                (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) == 0 )
              {
                v201 = item;
                v456 = v225->fields._items;
                v457 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
                ++v225->fields._version;
                if ( !v456 )
                  goto LABEL_388;
                v458 = v225->fields._size;
                if ( (unsigned int)v458 >= LODWORD(v456->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v225,
                    v201,
                    *(const MethodInfo_386AE34 **)(*(_QWORD *)(v457[4] + 192LL) + 112LL));
                }
                else
                {
                  v459 = &v456->obj.klass + v458;
                  v225->fields._size = v458 + 1;
                  v459[4] = (Il2CppClass *)v201;
                  sub_1C9403C(
                    (GrandQuestFolderBoardItem_o *)(v459 + 4),
                    (int32_t)v201,
                    v450,
                    v451,
                    v452,
                    v453,
                    v454,
                    v455);
                }
                v460 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_1C942E4(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
                QuestRestrictionInfo_DialogMessageInfo___ctor(v460, 0);
                if ( !v460 )
                  goto LABEL_388;
                v460->fields.slotNo = v438;
                if ( !item )
                  goto LABEL_388;
                Master_object = (__int64)*p_dialogMessageInfoDictionary;
                if ( !*p_dialogMessageInfoDictionary )
                  goto LABEL_388;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  (int32_t)item[1].klass,
                  (Il2CppObject *)v460,
                  (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v443 = *(_DWORD *)(v441 + 24);
          if ( (int)++v444 >= v443 )
            goto LABEL_164;
        }
        goto LABEL_389;
      }
LABEL_164:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !Master_object )
        goto LABEL_388;
      Master_object = (__int64)RestrictionSlotDetailMaster__GetEntities(
                                 (RestrictionSlotDetailMaster_o *)Master_object,
                                 v442,
                                 0);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_388;
      v461 = Master_object;
      System_Collections_Generic_Dictionary_int__object___Add(
        *p_restrictionSlotDetailDictionary,
        v438,
        (Il2CppObject *)Master_object,
        (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v463 = (QuestRestrictionInfo_SlotInfo_o *)sub_1C942E4(QuestRestrictionInfo_SlotInfo_TypeInfo);
      QuestRestrictionInfo_SlotInfo___ctor(v463, 0);
      if ( !klass )
        goto LABEL_388;
      if ( v463 )
      {
        Master_object = sub_1C941D4(v463, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_object )
        {
          v634 = sub_1C94314(0);
          sub_1C941C0(v634, 0);
        }
      }
      v470 = v438 - 1;
      if ( (unsigned int)(v438 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_389;
      v471 = &klass->_1.image + v470;
      v471[4] = v463;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v471 + 4), (int32_t)v463, v464, v465, v466, v467, v468, v469);
      servantNumMax = v421->fields.servantNumMax;
      if ( servantNumMax < 1 || v470 < servantNumMax )
      {
        v476 = QuestRestrictionInfo___c_TypeInfo;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v476 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__88_0 = (System_Func_object__bool__o *)v476->static_fields->__9__88_0;
        if ( !_9__88_0 )
        {
          if ( !v476->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v476);
            v476 = QuestRestrictionInfo___c_TypeInfo;
          }
          v478 = (Il2CppObject *)v476->static_fields->__9;
          _9__88_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__88_0, v478, Method_QuestRestrictionInfo___c__Setup_b__88_0__, 0);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
          static_fields->__9__88_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__88_0;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__88_0,
            (int32_t)_9__88_0,
            v480,
            v481,
            v482,
            v483,
            v484,
            v485);
        }
        v486 = BasicHelper__Any_object__51926292(
                 (System_Object_array *)v441,
                 (System_Func_T__bool__o *)_9__88_0,
                 (const MethodInfo_3185514 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v487 = QuestRestrictionInfo___c_TypeInfo;
        v488 = v486;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v487 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__88_1 = (System_Func_object__bool__o *)v487->static_fields->__9__88_1;
        if ( !_9__88_1 )
        {
          if ( !v487->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v487);
            v487 = QuestRestrictionInfo___c_TypeInfo;
          }
          v490 = (Il2CppObject *)v487->static_fields->__9;
          _9__88_1 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__88_1, v490, Method_QuestRestrictionInfo___c__Setup_b__88_1__, 0);
          v491 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v491->__9__88_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__88_1;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&v491->__9__88_1,
            (int32_t)_9__88_1,
            v492,
            v493,
            v494,
            v495,
            v496,
            v497);
        }
        v498 = BasicHelper__Any_object__51926292(
                 (System_Object_array *)v441,
                 (System_Func_T__bool__o *)_9__88_1,
                 (const MethodInfo_3185514 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v499 = QuestRestrictionInfo___c_TypeInfo;
        v500 = v498;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v499 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__88_2 = (System_Func_object__bool__o *)v499->static_fields->__9__88_2;
        if ( !_9__88_2 )
        {
          if ( !v499->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v499);
            v499 = QuestRestrictionInfo___c_TypeInfo;
          }
          v502 = (Il2CppObject *)v499->static_fields->__9;
          _9__88_2 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__88_2, v502, Method_QuestRestrictionInfo___c__Setup_b__88_2__, 0);
          v503 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v503->__9__88_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__88_2;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&v503->__9__88_2,
            (int32_t)_9__88_2,
            v504,
            v505,
            v506,
            v507,
            v508,
            v509);
        }
        Master_object = BasicHelper__Any_object__51926292(
                          (System_Object_array *)v441,
                          (System_Func_T__bool__o *)_9__88_2,
                          (const MethodInfo_3185514 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        if ( v500 || !v488 || (Master_object & 1) != 0 )
        {
          v421 = v659;
          if ( (v488 || !v500) | Master_object & 1 )
          {
            if ( v488 || v500 || (((unsigned int)Master_object ^ 1) & 1) != 0 )
            {
              if ( Master_object & 1 | (!v488 || !v500) )
              {
                if ( ((v488 || v500) & (unsigned int)Master_object & 1) != 0 )
                {
                  v565 = p_fields->klass;
                  if ( !p_fields->klass )
                    goto LABEL_388;
                  if ( (unsigned int)v470 >= LODWORD(v565->_1.namespaze) )
                    goto LABEL_389;
                  v566 = *((_QWORD *)&v565->_1.byval_arg.data + v470);
                  if ( !v566 )
                    goto LABEL_388;
                  *(_DWORD *)(v566 + 16) = 4;
                  v659->fields.isMyServantOrSupport = 1;
                }
              }
              else
              {
                v567 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_388;
                if ( (unsigned int)v470 >= LODWORD(v567->_1.namespaze) )
                  goto LABEL_389;
                v568 = *((_QWORD *)&v567->_1.byval_arg.data + v470);
                if ( !v568 )
                  goto LABEL_388;
                *(_DWORD *)(v568 + 16) = 3;
                v659->fields.isMyServantOrNpc = 1;
              }
            }
            else
            {
              v512 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_388;
              if ( (unsigned int)v470 >= LODWORD(v512->_1.namespaze) )
                goto LABEL_389;
              v513 = *((_QWORD *)&v512->_1.byval_arg.data + v470);
              if ( !v513 )
                goto LABEL_388;
              *(_DWORD *)(v513 + 16) = 2;
              v659->fields.supportInitIndex = v438;
            }
          }
          else
          {
            v514 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_388;
            if ( (unsigned int)v470 >= LODWORD(v514->_1.namespaze) )
              goto LABEL_389;
            v515 = *((_QWORD *)&v514->_1.byval_arg.data + v470);
            if ( !v515 )
              goto LABEL_388;
            *(_DWORD *)(v515 + 16) = 1;
          }
        }
        else
        {
          v421 = v659;
          v510 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_388;
          if ( (unsigned int)v470 >= LODWORD(v510->_1.namespaze) )
            goto LABEL_389;
          v511 = *((_QWORD *)&v510->_1.byval_arg.data + v470);
          if ( !v511 )
            goto LABEL_388;
          *(_DWORD *)(v511 + 16) = 0;
        }
        if ( !v461 )
          goto LABEL_388;
        v516 = *(_DWORD *)(v461 + 24);
        if ( v516 >= 1 )
        {
          v517 = 0;
          while ( v517 < v516 )
          {
            v518 = *(_QWORD *)(v461 + 8LL * (int)v517 + 32);
            if ( !v518 )
              goto LABEL_388;
            if ( !*(_DWORD *)(v441 + 24) )
              break;
            v519 = *(_QWORD *)(v441 + 32);
            if ( !v519 )
              goto LABEL_388;
            if ( *(_DWORD *)(v518 + 16) == *(_DWORD *)(v519 + 40) )
            {
              v520 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_388;
              if ( (unsigned int)v470 >= LODWORD(v520->_1.namespaze) )
                goto LABEL_389;
              v521 = *((_QWORD *)&v520->_1.byval_arg.data + v470);
              if ( !v521 )
                goto LABEL_388;
              if ( *(_DWORD *)(v521 + 16) <= 2u )
              {
                Master_object = *(_QWORD *)(v518 + 40);
                if ( !Master_object )
                  goto LABEL_388;
                v522 = *(System_Collections_Generic_List_object__o **)(v521 + 24);
                Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
                if ( !v522 )
                  goto LABEL_388;
                Master_object = sub_1C941D4(Master_object, int___TypeInfo);
                v529 = v522->fields._items;
                v530 = Method_System_Collections_Generic_List_int____Add__;
                ++v522->fields._version;
                if ( !v529 )
                  goto LABEL_388;
                v531 = v522->fields._size;
                v532 = Master_object;
                if ( (unsigned int)v531 >= LODWORD(v529->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v522,
                    (Il2CppObject *)Master_object,
                    *(const MethodInfo_386AE34 **)(*(_QWORD *)(v530[4] + 192LL) + 112LL));
                }
                else
                {
                  v533 = &v529->obj.klass + v531;
                  v522->fields._size = v531 + 1;
                  v533[4] = (Il2CppClass *)v532;
                  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v533 + 4), v532, v523, v524, v525, v526, v527, v528);
                }
                v534 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_388;
                if ( (unsigned int)v470 >= LODWORD(v534->_1.namespaze) )
                  goto LABEL_389;
                v535 = *((_QWORD *)&v534->_1.byval_arg.data + v470);
                if ( !v535 )
                  goto LABEL_388;
                Master_object = *(_QWORD *)(v535 + 32);
                if ( !Master_object )
                  goto LABEL_388;
                v201 = (Il2CppObject *)*(unsigned int *)(v518 + 48);
                v536 = *(struct System_Int32_array **)(Master_object + 16);
                v537 = Method_System_Collections_Generic_List_Restriction_RangeType__Add__;
                ++*(_DWORD *)(Master_object + 28);
                if ( !v536 )
                  goto LABEL_388;
                v538 = *(int *)(Master_object + 24);
                if ( (unsigned int)v538 >= LODWORD(v536->max_length) )
                {
                  System_Collections_Generic_List_Int32Enum___AddWithResize(
                    (System_Collections_Generic_List_T__o *)Master_object,
                    (int32_t)v201,
                    *(const MethodInfo_385063C **)(*(_QWORD *)(v537[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Master_object + 24) = v538 + 1;
                  v536->m_Items[v538] = (int)v201;
                }
              }
              if ( *(_DWORD *)(v518 + 32) == 2 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10331/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, 0);
                v539 = (System_String_o *)Master_object;
              }
              else
              {
                v539 = *(System_String_o **)(v518 + 24);
              }
              v540 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_388;
              if ( (unsigned int)v470 >= LODWORD(v540->_1.namespaze) )
                goto LABEL_389;
              v541 = *((_QWORD *)&v540->_1.byval_arg.data + v470);
              if ( !v541 )
                goto LABEL_388;
              Master_object = System_String__IsNullOrEmpty(*(System_String_o **)(v541 + 40), 0);
              v548 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_388;
              if ( (unsigned int)v470 >= LODWORD(v548->_1.namespaze) )
                goto LABEL_389;
              v549 = *((_QWORD *)&v548->_1.byval_arg.data + v470);
              if ( !v549 )
                goto LABEL_388;
              v550 = (System_String_o **)(v549 + 40);
              if ( (Master_object & 1) == 0 )
                v539 = System_String__Concat_64456008(*v550, (System_String_o *)StringLiteral_43/*"\n"*/, v539, 0);
              *v550 = v539;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)v550, (int32_t)v539, v542, v543, v544, v545, v546, v547);
            }
            v516 = *(_DWORD *)(v461 + 24);
            if ( (int)++v517 >= v516 )
              goto LABEL_254;
          }
          goto LABEL_389;
        }
LABEL_254:
        v551 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_388;
        if ( (unsigned int)v470 >= LODWORD(v551->_1.namespaze) )
          goto LABEL_389;
        v552 = QuestRestrictionInfo___c_TypeInfo;
        v553 = *((_QWORD *)&v551->_1.byval_arg.data + v470);
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v552 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__88_3 = (System_Func_object__bool__o *)v552->static_fields->__9__88_3;
        if ( !_9__88_3 )
        {
          if ( !v552->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v552);
            v552 = QuestRestrictionInfo___c_TypeInfo;
          }
          v555 = (Il2CppObject *)v552->static_fields->__9;
          _9__88_3 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__88_3, v555, Method_QuestRestrictionInfo___c__Setup_b__88_3__, 0);
          v556 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v556->__9__88_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__88_3;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&v556->__9__88_3,
            (int32_t)_9__88_3,
            v557,
            v558,
            v559,
            v560,
            v561,
            v562);
          v421 = v659;
        }
        Master_object = BasicHelper__Any_object__51926292(
                          (System_Object_array *)v461,
                          (System_Func_T__bool__o *)_9__88_3,
                          (const MethodInfo_3185514 *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
        if ( !v553 )
          goto LABEL_388;
        *(_BYTE *)(v553 + 48) = (Master_object & 1) == 0;
        v563 = p_fields->klass;
        v474 = questIdb;
        if ( !p_fields->klass )
          goto LABEL_388;
        if ( (unsigned int)v470 >= LODWORD(v563->_1.namespaze) )
          goto LABEL_389;
        v564 = *((_QWORD *)&v563->_1.byval_arg.data + v470);
        if ( !v564 )
          goto LABEL_388;
        p_dialogMessageInfoDictionary = v655;
        if ( *(_DWORD *)(v564 + 16) == 1 )
        {
          if ( *(_BYTE *)(v564 + 48) )
            v421->fields.isNpcEditablePos = 1;
        }
        *(_BYTE *)(v564 + 49) = *(_DWORD *)(v441 + 24) != 0;
      }
      else
      {
        v473 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_388;
        v474 = questIdb;
        if ( (unsigned int)v470 >= LODWORD(v473->_1.namespaze) )
          goto LABEL_389;
        v475 = *((_QWORD *)&v473->_1.byval_arg.data + v470);
        if ( !v475 )
          goto LABEL_388;
        p_dialogMessageInfoDictionary = v655;
        *(_DWORD *)(v475 + 16) = 5;
        *(_BYTE *)(v475 + 48) = 0;
      }
      ++v438;
      v439 = v474 & v661;
    }
    if ( !v225
      || (v569 = System_Collections_Generic_List_object___ToArray(
                   v225,
                   (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__),
          v421->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v569,
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&v421->fields.restrictionMessageEntities,
            (int32_t)v569,
            v570,
            v571,
            v572,
            v573,
            v574,
            v575),
          (slotInfos = v421->fields.slotInfos) == 0) )
    {
LABEL_388:
      sub_1C942F0(Master_object, v201);
    }
    v577 = slotInfos->max_length;
    if ( v577 >= 1 )
    {
      v578 = 0;
      v579 = 0;
      v580 = 0;
      v581 = 0;
      while ( v577 != v578 )
      {
        v582 = slotInfos->m_Items[v578];
        if ( !v582 )
          goto LABEL_388;
        switch ( v582->fields.slotType )
        {
          case 0:
          case 3:
          case 4:
            ++v581;
            break;
          case 1:
            ++v580;
            break;
          case 2:
            ++v579;
            break;
          default:
            break;
        }
        if ( v577 == ++v578 )
          goto LABEL_294;
      }
LABEL_389:
      sub_1C942F8(Master_object);
    }
    v581 = 0;
    v580 = 0;
    v579 = 0;
LABEL_294:
    if ( v579 == 0 && (v439 & 1) != 0 )
      v421->fields.isNoSupportBattle = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object )
      goto LABEL_388;
    Master_object = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                               (NpcFollowerMaster_o *)Master_object,
                               v421->fields.questId,
                               v421->fields.questPhase,
                               0);
    if ( !Master_object )
      goto LABEL_388;
    v583 = *(_DWORD *)(Master_object + 24);
    if ( v583 >= 1 )
    {
      v584 = 0;
      while ( v583 != v584 )
      {
        v585 = *(_QWORD *)(Master_object + 8LL * v584 + 32);
        if ( !v585 )
          goto LABEL_388;
        if ( !*(_BYTE *)(v585 + 113) && v583 != ++v584 )
          continue;
        goto LABEL_308;
      }
      goto LABEL_389;
    }
    v584 = 0;
LABEL_308:
    Master_object = (__int64)v670;
    if ( !v670 )
      goto LABEL_388;
    HasFlag_43240700 = QuestEntity__HasFlag_43240700((QuestEntity_o *)v670, 0x10000000, questPhase, 0);
    v421->fields.isNpcMultipleBattle = HasFlag_43240700;
    if ( !HasFlag_43240700 )
      v421->fields.isNpcMultipleBattle = v584 < v583 && v581 > 0 && v580 > 0;
    Master_object = (__int64)v670;
    if ( !v670 )
      goto LABEL_388;
    v587 = QuestEntity__HasFlag_43240700((QuestEntity_o *)v670, 0x20000000, questPhase, 0);
    v421->fields.isNpcOnlyBattle = v587;
    if ( !v587 )
      v421->fields.isNpcOnlyBattle = v584 < v583 && v581 == 0 && v580 > 0;
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_388;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 8, 0) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            *p_restrictionSlotDictionary,
                            2,
                            0,
                            (const MethodInfo_3189E14 *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v589 = 2;
      else
        v589 = 1;
      DeckMemberMax = v421->fields.servantNumMax;
      v421->fields.servantNumMin = v589;
      if ( !DeckMemberMax )
      {
        v591 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v591 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v591->static_fields->DeckMemberMax;
        v421->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v421->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v421->fields.isNpcMultipleBattle )
        v421->fields.myServantNumMax = v581;
    }
    else
    {
      v421->fields.myServantNumMax = v581;
      if ( v581 == 1 && DeckMemberMax == 1 )
      {
        Master_object = (__int64)v421->fields.restrictionSlotDetailDictionary;
        v421->fields.isFixedMyServantSingle = 1;
        if ( !Master_object )
          goto LABEL_388;
        Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                                   1,
                                   (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( Master_object )
        {
          v592 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
          if ( v592 )
          {
            if ( !(_DWORD)v592 )
              goto LABEL_389;
            v593 = *(_QWORD *)(Master_object + 32);
            if ( !v593 )
              goto LABEL_388;
            Master_object = *(_QWORD *)(v593 + 40);
            if ( !Master_object )
              goto LABEL_388;
            v594 = System_Array__Clone((System_Array_o *)Master_object, 0);
            v421->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)sub_1C941D4(
                                                                                              v594,
                                                                                              int___TypeInfo);
            v595 = sub_1C941D4(v594, int___TypeInfo);
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v421->fields.fixedMyServantSingleIndividualities,
              v595,
              v596,
              v597,
              v598,
              v599,
              v600,
              v601);
          }
        }
      }
    }
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_388;
    Master_object = System_Collections_Generic_Dictionary_int__object___get_Count(
                      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                      (const MethodInfo_34B4584 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__object__o *)v421->fields.restrictionSlotDictionary;
    v421->fields.isSupportOnly = (int)Master_object > 0;
    if ( !restrictionSlotDictionary )
      goto LABEL_388;
    Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Values(
                               restrictionSlotDictionary,
                               (const MethodInfo_34B46E4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Master_object )
      goto LABEL_388;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v665,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Master_object,
      (const MethodInfo_3BA885C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v666 = v665;
    do
    {
      v603 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
               &v666,
               (const MethodInfo_3610C20 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v603 )
        break;
      if ( !v666.fields._currentValue )
        sub_1C942F0(v603, v604);
      monitor = (int)v666.fields._currentValue[1].monitor;
      if ( monitor >= 1 )
      {
        v606 = 0;
        while ( 1 )
        {
          if ( monitor == v606 )
            sub_1C942F8(v603);
          v607 = *((_QWORD *)&v666.fields._currentValue[2].klass + v606);
          if ( !v607 )
            sub_1C942F0(v603, v604);
          if ( *(_DWORD *)(v607 + 28) == 1 )
            break;
          if ( monitor == ++v606 )
            goto LABEL_349;
        }
        v421->fields.isSupportOnly = 0;
        break;
      }
LABEL_349:
      ;
    }
    while ( v421->fields.isSupportOnly );
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &v666,
      (const MethodInfo_3610C1C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    v608 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v608, 0);
    v609 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v609, 0);
    v610 = *p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_388;
    v611 = v610->max_length;
    if ( v611 >= 1 )
    {
      v612 = 0;
      while ( 1 )
      {
        if ( v612 >= v611 )
          goto LABEL_389;
        v613 = v610->m_Items[v612];
        if ( !v613 )
          goto LABEL_388;
        Master_object = System_String__IsNullOrEmpty(v613->fields.summary, 0);
        if ( (Master_object & 1) == 0 )
          break;
LABEL_378:
        v611 = v610->max_length;
        if ( (int)++v612 >= v611 )
          goto LABEL_379;
      }
      type = v613->fields.type;
      if ( type == 10 || type == 2 )
      {
        v616 = 1;
      }
      else
      {
        if ( type == 1 )
        {
          targetVals2 = v613->fields.targetVals2;
          if ( !targetVals2 )
            goto LABEL_388;
          v616 = 1;
          v617 = LODWORD(targetVals2->max_length) == 1;
LABEL_366:
          if ( (v617 & v616) != 0 )
          {
            if ( v421->fields.isRestriction )
            {
              if ( !v609 )
                goto LABEL_388;
              System_Text_StringBuilder__Append_64501704(v609, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
            }
            else if ( !v609 )
            {
              goto LABEL_388;
            }
            Master_object = (__int64)System_Text_StringBuilder__Append_64501704(v609, v613->fields.summary, 0);
            v421->fields.isRestriction = 1;
          }
          if ( v616 )
          {
            if ( v421->fields.isRestriction )
            {
              if ( !v608 )
                goto LABEL_388;
              System_Text_StringBuilder__Append_64501704(v608, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
            }
            else if ( !v608 )
            {
              goto LABEL_388;
            }
            Master_object = (__int64)System_Text_StringBuilder__Append_64501704(v608, v613->fields.summary, 0);
            v421->fields.isRestriction = 1;
          }
          goto LABEL_378;
        }
        v616 = 0;
      }
      v617 = 1;
      goto LABEL_366;
    }
LABEL_379:
    if ( !v609 )
      goto LABEL_388;
    Master_object = System_Text_StringBuilder__get_Length(v609, 0);
    if ( (int)Master_object >= 1 )
    {
      v618 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v609->klass->vtable._3_ToString.methodPtr)(
               v609,
               v609->klass->vtable._3_ToString.method);
      p_confirmRestrictionMessage->klass = (GrandQuestFolderBoardItem_c *)v618;
      sub_1C9403C(p_confirmRestrictionMessage, v618, v619, v620, v621, v622, v623, v624);
    }
    if ( !v608 )
      goto LABEL_388;
    if ( System_Text_StringBuilder__get_Length(v608, 0) >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v625 = LocalizationManager__Get((System_String_o *)StringLiteral_10294/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      v626 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v608->klass->vtable._3_ToString.methodPtr)(
                                  v608,
                                  v608->klass->vtable._3_ToString.method);
      v627 = System_String__Concat_64456008(v625, (System_String_o *)StringLiteral_43/*"\n"*/, v626, 0);
      p_restrictionMessage->klass = (GrandQuestFolderBoardItem_c *)v627;
      sub_1C9403C(p_restrictionMessage, (int32_t)v627, v628, v629, v630, v631, v632, v633);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(this, v203);
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
  bool HasFlag_43240700; // w0
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

  if ( (byte_4D2DC02 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_1C94098(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C94098(&FollowerInfo___TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&System_Text_StringBuilder_TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_10294/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_4D2DC02 = 1;
  }
  v170 = 0;
  entity = 0;
  v169 = 0;
  v3 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  v4 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
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
          sub_1C9403C(
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
          sub_1C9403C(p_uniqueSvtRestrictionEntity, (int32_t)v17, v7, v8, v9, v10, v11, v12);
          v19 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v19 = BalanceConfig_TypeInfo;
          }
          v20 = (struct System_Int32_array *)sub_1C94140(
                                               int___TypeInfo,
                                               (unsigned int)v19->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v20;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)p_deckSvtIdList, (int32_t)v20, v21, v22, v23, v24, v25, v26);
          this->fields.isUniqueServant = 1;
          goto LABEL_78;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v17;
          sub_1C9403C(
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
          sub_1C9403C(
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
          sub_1C9403C(
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
          sub_1C9403C(
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
          sub_1C9403C(p_servantNumRestrictionEntity, (int32_t)v17, v7, v8, v9, v10, v11, v12);
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
          sub_1C9403C(p_myServantNumRestrictionEntity, (int32_t)v17, v7, v8, v9, v10, v11, v12);
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
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            myServantOrNpcRestrictionEntityList->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v17;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v17, v7, v8, v9, v10, v11, v12);
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
              *(const MethodInfo_384DE10 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
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
          sub_1C9403C(
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
          sub_1C9403C(p_uniqueIndividualityEntity, (int32_t)v17, v7, v8, v9, v10, v11, v12);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v17->fields.targetVals;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_163;
          v42 = System_Array__Clone((System_Array_o *)myServantOrNpcRestrictionEntityList, 0);
          p_uniqueIndividualitys->klass = (GrandQuestFolderBoardItem_c *)sub_1C941D4(v42, int___TypeInfo);
          v43 = sub_1C941D4(v42, int___TypeInfo);
          sub_1C9403C(p_uniqueIndividualitys, v43, v44, v45, v46, v47, v48, v49);
          v50 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v50 = BalanceConfig_TypeInfo;
          }
          v51 = (struct System_Int32_array *)sub_1C94140(
                                               int___TypeInfo,
                                               (unsigned int)v50->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v51;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)p_deckSvtIdList, (int32_t)v51, v52, v53, v54, v55, v56, v57);
          v58 = (struct System_Int32_array *)sub_1C94140(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckLimitCountList = v58;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&this->fields.deckLimitCountList,
            (int32_t)v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64);
          v65 = (struct System_Int32_array *)sub_1C94140(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckDispLimitCountList = v65;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&this->fields.deckDispLimitCountList,
            (int32_t)v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71);
          v72 = (struct FollowerInfo_array *)sub_1C94140(
                                               FollowerInfo___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckNpcInfoList = v72;
          sub_1C9403C(
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
            System_Text_StringBuilder__Append_64501704(v3, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
          }
          else
          {
LABEL_40:
            if ( !v3 )
              goto LABEL_163;
          }
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_64501704(
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
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
          }
          else
          {
            v84 = &v81->obj.klass + v83;
            myServantOrNpcRestrictionEntityList->fields._size = v83 + 1;
            v84[4] = (Il2CppClass *)v17;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v84 + 4), (int32_t)v17, v7, v8, v9, v10, v11, v12);
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
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
          }
          else
          {
            v97 = &v94->obj.klass + v96;
            myServantOrNpcRestrictionEntityList->fields._size = v96 + 1;
            v97[4] = (Il2CppClass *)v17;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v97 + 4), (int32_t)v17, v7, v8, v9, v10, v11, v12);
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
              *(const MethodInfo_384DE10 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
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
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
          }
          else
          {
            v88 = &v85->obj.klass + v87;
            myServantOrNpcRestrictionEntityList->fields._size = v87 + 1;
            v88[4] = (Il2CppClass *)v17;
            p_totalCostRestrictionEntity = (struct RestrictionEntity_o **)(v88 + 4);
LABEL_52:
            sub_1C9403C(
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
    sub_1C9403C(
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
    v109 = LocalizationManager__Get((System_String_o *)StringLiteral_10294/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    v110 = System_String__Concat_64456008(
             v109,
             (System_String_o *)StringLiteral_43/*"\n"*/,
             this->fields.confirmRestrictionMessage,
             0);
    this->fields.restrictionMessage = v110;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.restrictionMessage,
      (int32_t)v110,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_163;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_163;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)myServantOrNpcRestrictionEntityList,
    &entity,
    this->fields.questId,
    (const MethodInfo_345B50C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_163;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
    v118 = sub_1C6A12C(v117);
  v119 = *(_QWORD *)(*(_QWORD *)(v118 + 192) + 16LL);
  if ( (*(_BYTE *)(v119 + 309) & 1) == 0 )
    v119 = sub_1C6A12C(v117);
  myServantOrNpcRestrictionEntityList = **(System_Collections_Generic_List_object__o ***)(v119 + 184);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_163;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
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
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_163;
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_((DataManager_o *)myServantOrNpcRestrictionEntityList, (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_163;
                    this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                                         (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                                         this->fields.questId,
                                                         17,
                                                         0);
                  }
                  if ( entity )
                    this->fields.isFatigure = QuestEntity__HasFlag_43240700(
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
      sub_1C942F0(myServantOrNpcRestrictionEntityList, v6);
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
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1C94140(int___TypeInfo, 1);
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
      sub_1C9403C(
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
    sub_1C942F8(myServantOrNpcRestrictionEntityList);
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_43240700((QuestEntity_o *)entity, 0x100000, this->fields.questPhase, 0) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
      if ( !entity )
        goto LABEL_163;
      HasFlag_43240700 = QuestEntity__HasFlag_43240700(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0);
      this->fields.isNoSupportBattle = HasFlag_43240700;
      if ( !HasFlag_43240700 )
      {
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
        if ( !entity )
          goto LABEL_163;
        v137 = QuestEntity__HasFlag_43240700((QuestEntity_o *)entity, 0x80000, this->fields.questPhase, 0);
        this->fields.isSupportOnlyForceBattle = v137;
        if ( !v137 )
        {
          if ( v170 )
          {
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
            if ( !entity )
              goto LABEL_163;
            if ( QuestEntity__HasFlag_43240700((QuestEntity_o *)entity, 0x1000000, this->fields.questPhase, 0) )
            {
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v170;
              if ( !v170 )
                goto LABEL_163;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v170, 0);
            }
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1C94140(
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
            sub_1C9403C(
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
    this->fields.isFatigure = QuestEntity__HasFlag_43240700(
                                (QuestEntity_o *)entity,
                                0x200000,
                                this->fields.questPhase,
                                0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    v145 = QuestEntity__HasFlag_43240700((QuestEntity_o *)entity, 0x400000000000000LL, this->fields.questPhase, 0);
    this->fields.isAllOutBattle = v145;
    if ( v145 )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_163;
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                           (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                           (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
    this->fields.isNpcMultipleBattle = QuestEntity__HasFlag_43240700(
                                         (QuestEntity_o *)entity,
                                         0x10000000,
                                         this->fields.questPhase,
                                         0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    this->fields.isNpcOnlyBattle = QuestEntity__HasFlag_43240700(
                                     (QuestEntity_o *)entity,
                                     0x20000000,
                                     this->fields.questPhase,
                                     0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    this->fields.isNpcEditablePos = QuestEntity__HasFlag_43240700(
                                      (QuestEntity_o *)entity,
                                      0x800000000LL,
                                      this->fields.questPhase,
                                      0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    this->fields.isNotTransitionSupportList = QuestEntity__HasFlag_43240700(
                                                (QuestEntity_o *)entity,
                                                0x80000000000000LL,
                                                this->fields.questPhase,
                                                0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_43240700(
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
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.overwriteLimitCountSvtIds,
      0,
      v120,
      v121,
      v122,
      v123,
      v124,
      v125);
    this->fields.overwriteLimitCounts = 0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.overwriteLimitCounts,
      0,
      v146,
      v147,
      v148,
      v149,
      v150,
      v151);
    this->fields.overwriteLimitCountIconIds = 0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.overwriteLimitCountIconIds,
      0,
      v152,
      v153,
      v154,
      v155,
      v156,
      v157);
    this->fields.overwriteLimitCountRangeTypes = 0;
    sub_1C9403C(
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

  if ( (byte_4D2DC56 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EquipMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2DC56 = 1;
  }
  entity = 0;
  outFixedEquipId = 0;
  v16 = 0;
  outFixedEquipLv = 0;
  *genderImageId = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EquipMaster___);
      if ( !Master_object )
        goto LABEL_28;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             Master_object,
             &v16,
             outFixedEquipId,
             (const MethodInfo_345B50C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
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
                v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v19, 0);
                outFixedEquipLv = v11;
                goto LABEL_27;
              }
              break;
            default:
              v12 = sub_1C940AC(&System_ArgumentOutOfRangeException_TypeInfo);
              v13 = (System_ArgumentOutOfRangeException_o *)sub_1C942E4(v12);
              System_ArgumentOutOfRangeException___ctor(v13, 0);
              v14 = sub_1C940AC(&Method_QuestRestrictionInfo_TryGetFixedMasterEquipInfo__);
              sub_1C941C0(v13, v14);
          }
        }
LABEL_28:
        sub_1C942F0(Master_object, v6);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantList(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        bool isFollower,
        const MethodInfo *method)
{
  return !isFollower
      && QuestRestrictionInfo__GetOverwriteLimitCountRangeType(this, svtId, (const MethodInfo *)isFollower) == 1;
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
  System_Func_object__object__o *_9__230_0; // x20
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

  if ( (byte_4D2DC53 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_SelectMany_RestrictionEntity__int___);
    sub_1C94098(&System_Func_RestrictionEntity__IEnumerable_int___TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__get_ActiveGrandBoardCount_b__230_0__);
    sub_1C94098(&QuestRestrictionInfo___c_TypeInfo);
    byte_4D2DC53 = 1;
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
  _9__230_0 = (System_Func_object__object__o *)v5->static_fields->__9__230_0;
  if ( !_9__230_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestRestrictionInfo___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__230_0 = (System_Func_object__object__o *)sub_1C942E4(System_Func_RestrictionEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__230_0,
      v7,
      Method_QuestRestrictionInfo___c__get_ActiveGrandBoardCount_b__230_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__230_0 = (struct System_Func_RestrictionEntity__IEnumerable_int___o *)_9__230_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__230_0,
      (int32_t)_9__230_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)activeGrandBoardRestrictionEntityList,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__230_0,
                                                               (const MethodInfo_31D5EF4 *)Method_System_Linq_Enumerable_SelectMany_RestrictionEntity__int___);
  v16 = System_Linq_Enumerable__Distinct_int_(
          v15,
          (const MethodInfo_31BF694 *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__Count_int_(v16, (const MethodInfo_31BC098 *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t QuestRestrictionInfo__get_GrandServantRestrictionPosCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_RestrictionEntity__o *grandServantRestrictionEntityList; // x19
  QuestRestrictionInfo___c_c *v5; // x0
  System_Func_object__object__o *_9__226_0; // x20
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

  if ( (byte_4D2DC50 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_SelectMany_RestrictionEntity__int___);
    sub_1C94098(&System_Func_RestrictionEntity__IEnumerable_int___TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__get_GrandServantRestrictionPosCount_b__226_0__);
    sub_1C94098(&QuestRestrictionInfo___c_TypeInfo);
    byte_4D2DC50 = 1;
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
  _9__226_0 = (System_Func_object__object__o *)v5->static_fields->__9__226_0;
  if ( !_9__226_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestRestrictionInfo___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__226_0 = (System_Func_object__object__o *)sub_1C942E4(System_Func_RestrictionEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__226_0,
      v7,
      Method_QuestRestrictionInfo___c__get_GrandServantRestrictionPosCount_b__226_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__226_0 = (struct System_Func_RestrictionEntity__IEnumerable_int___o *)_9__226_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__226_0,
      (int32_t)_9__226_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)grandServantRestrictionEntityList,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__226_0,
                                                               (const MethodInfo_31D5EF4 *)Method_System_Linq_Enumerable_SelectMany_RestrictionEntity__int___);
  v16 = System_Linq_Enumerable__Distinct_int_(
          v15,
          (const MethodInfo_31BF694 *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__Count_int_(v16, (const MethodInfo_31BC098 *)Method_System_Linq_Enumerable_Count_int___);
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

  if ( (byte_4D2DD2A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C94098(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DD2A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.slotType = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.individualityList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_T__o *)sub_1C942E4(System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_384FDE8 *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.rangeTypeList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  this->fields.summary = (struct System_String_o *)StringLiteral_1/*""*/;
  p_summary = &this->fields.summary;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_summary, v17, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_4D2DD2B & 1) == 0 )
  {
    sub_1C94098(&QuestRestrictionInfo___c_TypeInfo);
    byte_4D2DD2B = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(QuestRestrictionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRestrictionInfo___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionInfo___c_o *)v1;
  sub_1C9403C(
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


bool QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__113_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C942F0(this, 0);
  return e->fields.type != 1 || RestrictionEntity__IsRestrictionTarget(e, 1, 0);
}


System_String_o *QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__113_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C942F0(this, 0);
  return e->fields.name;
}


System_String_o *QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__113_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C942F0(this, 0);
  return e->fields.name;
}


bool QuestRestrictionInfo___c___GetRestrictionMessageEntityList_b__115_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  unsigned int v3; // w8
  _BOOL4 v4; // w0

  if ( !e )
    sub_1C942F0(this, 0);
  v3 = e->fields.type - 1;
  if ( v3 > 0x10 )
    LOBYTE(v4) = 0;
  else
    return (0x1100Bu >> v3) & 1;
  return v4;
}


System_String_o *QuestRestrictionInfo___c___GetRestrictionMessage_b__114_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C942F0(this, 0);
  return e->fields.name;
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__105_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C942F0(this, 0);
  return e->fields.type == 1 && e->fields.targetVals != 0;
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__105_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C942F0(this, 0);
  return RestrictionEntity__IsRestrictionTarget(e, 3, 0) && RestrictionEntity__IsRestrictionTarget(e, 2, 0);
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__105_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  System_Int32_array *targetVals; // x19
  QuestRestrictionInfo___c_c *v5; // x0
  System_Func_int__bool__o *_9__105_4; // x20
  Il2CppObject *v7; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2DD2D & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_int____79047624);
    sub_1C94098(&System_Func_int__bool__TypeInfo);
    sub_1C94098(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__105_4__);
    this = (QuestRestrictionInfo___c_o *)sub_1C94098(&QuestRestrictionInfo___c_TypeInfo);
    byte_4D2DD2D = 1;
  }
  if ( !e )
    sub_1C942F0(this, e);
  if ( e->fields.rangeType == 1 )
  {
    targetVals = e->fields.targetVals;
    v5 = QuestRestrictionInfo___c_TypeInfo;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v5 = QuestRestrictionInfo___c_TypeInfo;
    }
    _9__105_4 = v5->static_fields->__9__105_4;
    if ( !_9__105_4 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = QuestRestrictionInfo___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__105_4 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(_9__105_4, v7, Method_QuestRestrictionInfo___c__IsClassRestriction_b__105_4__, 0);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__105_4 = _9__105_4;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__105_4,
        (int32_t)_9__105_4,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    return !BasicHelper__Any_int__51925480(
              targetVals,
              (System_Func_T__bool__o *)_9__105_4,
              (const MethodInfo_31851E8 *)Method_BasicHelper_Any_int____79047624);
  }
  else
  {
    return 1;
  }
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__105_4(
        QuestRestrictionInfo___c_o *this,
        int32_t i,
        const MethodInfo *method)
{
  if ( (byte_4D2DD2E & 1) == 0 )
  {
    sub_1C94098(&Individuality_TypeInfo);
    byte_4D2DD2E = 1;
  }
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return !Individuality__IsServantClassIndividuality(i, 0);
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualitySlot_b__103_0(
        QuestRestrictionInfo___c_o *this,
        QuestRestrictionInfo_SlotInfo_o *s,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *individualityList; // x8

  if ( (byte_4D2DD2C & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_1C94098(&Method_System_Collections_Generic_List_int____get_Count__);
    byte_4D2DD2C = 1;
  }
  if ( !s || (individualityList = s->fields.individualityList) == 0 )
    sub_1C942F0(this, s);
  return individualityList->fields._size > 0;
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__102_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C942F0(this, 0);
  return e->fields.type == 1;
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__102_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionWholeEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C942F0(this, 0);
  return e->fields.type == 1;
}


bool QuestRestrictionInfo___c___Setup_b__88_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.type == 1;
}


bool QuestRestrictionInfo___c___Setup_b__88_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.type == 3;
}


bool QuestRestrictionInfo___c___Setup_b__88_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.type == 2;
}


bool QuestRestrictionInfo___c___Setup_b__88_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.type == 2;
}


System_Collections_Generic_IEnumerable_int__o *QuestRestrictionInfo___c___get_ActiveGrandBoardCount_b__230_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C942F0(this, 0);
  return (System_Collections_Generic_IEnumerable_int__o *)entity->fields.targetVals;
}


System_Collections_Generic_IEnumerable_int__o *QuestRestrictionInfo___c___get_GrandServantRestrictionPosCount_b__226_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( (byte_4D2DD2F & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_1C94098(&int___TypeInfo);
    byte_4D2DD2F = 1;
  }
  if ( !entity )
    goto LABEL_9;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetVals2, 0) )
    return (System_Collections_Generic_IEnumerable_int__o *)entity->fields.targetVals2;
  this = (QuestRestrictionInfo___c_o *)sub_1C94140(int___TypeInfo, 1);
  if ( !this )
LABEL_9:
    sub_1C942F0(this, entity);
  if ( !LODWORD(this[1].monitor) )
    sub_1C942F8(this);
  LODWORD(this[2].klass) = 1;
  return (System_Collections_Generic_IEnumerable_int__o *)this;
}


void QuestRestrictionInfo___c__DisplayClass105_0___ctor(
        QuestRestrictionInfo___c__DisplayClass105_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass105_0___IsClassRestriction_b__3(
        QuestRestrictionInfo___c__DisplayClass105_0_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C942F0(this, 0);
  return RestrictionEntity__IsRestriction(e, this->fields.individuality, 0);
}


void QuestRestrictionInfo___c__DisplayClass106_0___ctor(
        QuestRestrictionInfo___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass106_0___IsMySvtOrSupportSlotClassRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass106_0_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C942F0(this, 0);
  return entity->fields.type == 24 && RestrictionEntity__GetSpecifiedPosition(entity, 0) == this->fields.initPos;
}


void QuestRestrictionInfo___c__DisplayClass190_0___ctor(
        QuestRestrictionInfo___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass190_0___IsMyServantOrNpcRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass190_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass191_0___ctor(
        QuestRestrictionInfo___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass191_0___IsSelectableNormalSupport_b__0(
        QuestRestrictionInfo___c__DisplayClass191_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass192_0___ctor(
        QuestRestrictionInfo___c__DisplayClass192_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass192_0___IsNotIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass192_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass193_0___ctor(
        QuestRestrictionInfo___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass193_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass193_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass194_0___ctor(
        QuestRestrictionInfo___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass194_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass194_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass195_0___ctor(
        QuestRestrictionInfo___c__DisplayClass195_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass195_0___GetRestrictedName_b__0(
        QuestRestrictionInfo___c__DisplayClass195_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_o *questRestrictionEntity; // x8

  if ( !x || (questRestrictionEntity = this->fields.questRestrictionEntity) == 0 )
    sub_1C942F0(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass198_0___ctor(
        QuestRestrictionInfo___c__DisplayClass198_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass198_0___GetMyServantOrNpcSvtIdList_b__0(
        QuestRestrictionInfo___c__DisplayClass198_0_o *this,
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
    sub_1C942F8(this);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1C942F0(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass199_0___ctor(
        QuestRestrictionInfo___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass199_0___GetMyServantOrSupportTargetPos_b__0(
        QuestRestrictionInfo___c__DisplayClass199_0_o *this,
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
    sub_1C942F8(this);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1C942F0(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass212_0___ctor(
        QuestRestrictionInfo___c__DisplayClass212_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass212_0___GetMyServantOrNpcSvtIdUnionNpcList_b__0(
        QuestRestrictionInfo___c__DisplayClass212_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.index;
}


void QuestRestrictionInfo___c__DisplayClass222_0___ctor(
        QuestRestrictionInfo___c__DisplayClass222_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass222_0___GetGrandServantRestrictionEntity_b__0(
        QuestRestrictionInfo___c__DisplayClass222_0_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass222_0_o *v4; // x19
  System_Int32_array *targetVals2; // x20
  System_Func_int__bool__o *_9__1; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v4 = this;
  if ( (byte_4D2DD30 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_int____79047624);
    sub_1C94098(&System_Func_int__bool__TypeInfo);
    this = (QuestRestrictionInfo___c__DisplayClass222_0_o *)sub_1C94098(&Method_QuestRestrictionInfo___c__DisplayClass222_0__GetGrandServantRestrictionEntity_b__1__);
    byte_4D2DD30 = 1;
  }
  if ( !entity )
    sub_1C942F0(this, entity);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetVals2, 0)
    && v4->fields.initPos == 1 )
  {
    return 1;
  }
  targetVals2 = entity->fields.targetVals2;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_QuestRestrictionInfo___c__DisplayClass222_0__GetGrandServantRestrictionEntity_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_int__51925480(
           targetVals2,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_31851E8 *)Method_BasicHelper_Any_int____79047624);
}


bool QuestRestrictionInfo___c__DisplayClass222_0___GetGrandServantRestrictionEntity_b__1(
        QuestRestrictionInfo___c__DisplayClass222_0_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  return this->fields.initPos == pos;
}


void QuestRestrictionInfo___c__DisplayClass228_0___ctor(
        QuestRestrictionInfo___c__DisplayClass228_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass228_0___IsActiveGrandBoardRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass228_0_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass228_0_o *v4; // x20

  v4 = this;
  if ( (byte_4D2DD31 & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c__DisplayClass228_0_o *)sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D2DD31 = 1;
  }
  if ( !entity )
    sub_1C942F0(this, entity);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.targetVals,
           v4->fields.initPos,
           (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
}


void QuestRestrictionInfo___c__DisplayClass234_0___ctor(
        QuestRestrictionInfo___c__DisplayClass234_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass234_0___GetOrganizationSelectionDialogMessage_b__0(
        QuestRestrictionInfo___c__DisplayClass234_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_o *questRestrictionEntity; // x8

  if ( !x || (questRestrictionEntity = this->fields.questRestrictionEntity) == 0 )
    sub_1C942F0(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass235_0___ctor(
        QuestRestrictionInfo___c__DisplayClass235_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass235_0___GetSlotMessage_b__0(
        QuestRestrictionInfo___c__DisplayClass235_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_o *questRestrictionEntity; // x8

  if ( !x || (questRestrictionEntity = this->fields.questRestrictionEntity) == 0 )
    sub_1C942F0(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}