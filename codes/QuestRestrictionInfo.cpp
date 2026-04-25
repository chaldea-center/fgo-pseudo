void QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.questId = questId;
}


void QuestRestrictionInfo___ctor_44530920(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct RestrictionEntity_array *RestrictionList_43694360; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  const MethodInfo *v19; // x4

  if ( (byte_4E05D6E & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E05D6E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0 )
  {
    sub_1CE6958(Instance, v10);
  }
  RestrictionList_43694360 = QuestRestrictionMaster__getRestrictionList_43694360(
                               (QuestRestrictionMaster_o *)Instance,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               0);
  this->fields.restrictionEntityList = RestrictionList_43694360;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.restrictionEntityList,
    (int32_t)RestrictionList_43694360,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  QuestRestrictionInfo__Setup(this, v18, questId, questPhase, v19);
}


void QuestRestrictionInfo___ctor_44540376(
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

  if ( (byte_4E05D6F & 1) == 0 )
  {
    sub_1CE6700(&QuestRestrictionEntity___TypeInfo);
    sub_1CE6700(&RestrictionEntity___TypeInfo);
    byte_4E05D6F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v11 = (struct QuestRestrictionEntity_array *)sub_1CE67A8(QuestRestrictionEntity___TypeInfo, 0);
  this->fields.questRestrictionEntityList = v11;
  sub_1CE66A4(
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
    v18 = sub_1CE67A8(RestrictionEntity___TypeInfo, 1);
    if ( !v18 )
      sub_1CE6958(0, v19);
    v20 = v18;
    v21 = sub_1CE683C(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v21 )
    {
      v36 = sub_1CE697C(0);
      sub_1CE6828(v36, 0);
    }
    if ( !*(_DWORD *)(v20 + 24) )
      sub_1CE6960(v21);
    *(_QWORD *)(v20 + 32) = overwriteRestiction;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v20 + 32), (int32_t)overwriteRestiction, v22, v23, v24, v25, v26, v27);
  }
  else
  {
    v20 = sub_1CE67A8(RestrictionEntity___TypeInfo, 0);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v20;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.restrictionEntityList, v20, v28, v29, v30, v31, v32, v33);
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

  if ( (byte_4E05DC3 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    byte_4E05DC3 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_10;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0) )
    return;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_10:
    sub_1CE6958(Master_object, v4);
  OverwriteSvtTreasureDeviceLv = QuestPhaseEntity__GetOverwriteSvtTreasureDeviceLv(entity, 0);
  this->fields.cachedOverwriteSvtTreasureDeviceLv = OverwriteSvtTreasureDeviceLv;
  sub_1CE66A4(
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

  if ( (byte_4E05D8F & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Any_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1CE6700(&Method_System_Collections_Generic_List_bool____get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_bool____get_Item__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E05D8F = 1;
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
             (const MethodInfo_3220A90 *)Method_System_Linq_Enumerable_Contains_int___) )
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                  (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
                                  (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
            (const MethodInfo_322DD48 *)Method_System_Linq_Enumerable_Intersect_int___);
    Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                  v28,
                                  (const MethodInfo_320FB50 *)Method_System_Linq_Enumerable_Any_int___);
    if ( !this->fields.myServantPositionsList )
      goto LABEL_15;
    v29 = (char)Instance;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this->fields.myServantPositionsList,
                                  v23,
                                  (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
              (const MethodInfo_322DD48 *)Method_System_Linq_Enumerable_Intersect_int___);
      if ( System_Linq_Enumerable__Any_int_(v31, (const MethodInfo_320FB50 *)Method_System_Linq_Enumerable_Any_int___) )
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
                                  (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
          (const MethodInfo_322DD48 *)Method_System_Linq_Enumerable_Intersect_int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                v35,
                                (const MethodInfo_320FB50 *)Method_System_Linq_Enumerable_Any_int___);
  positionsList = (System_Collections_Generic_List_object__o *)this->fields.positionsList;
  if ( !positionsList
    || (v37 = (char)Instance,
        (Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                       positionsList,
                                       v33,
                                       (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_bool____get_Item__)) == 0) )
  {
LABEL_15:
    sub_1CE6958(Instance, v21);
  }
  if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
LABEL_67:
    sub_1CE6960(Instance);
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
    sub_1CE6960(this);
  return overwriteLimitCounts->m_Items[v6];
}


int32_t QuestRestrictionInfo__ConvertOverwriteImageLimitCount_44569804(
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
  if ( (byte_4E05D98 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05D98 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_20;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v16, 0);
  this = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(v4, v7, v8);
  if ( !this )
LABEL_20:
    sub_1CE6958(this, userServantEntity);
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
      this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v17, 0);
      if ( (_DWORD)this == v12 )
        return v12;
      dialogMessageInfoDictionary = v10->fields.dialogMessageInfoDictionary;
      if ( (int)++v11 >= (int)dialogMessageInfoDictionary )
        goto LABEL_15;
    }
LABEL_19:
    sub_1CE6960(this);
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

  if ( (byte_4E05D97 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    byte_4E05D97 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( overwriteLimitCountSvtIds && this->fields.overwriteLimitCounts && (int)overwriteLimitCountSvtIds->max_length >= 1 )
  {
    v9 = 0;
    v10 = (unsigned int)overwriteLimitCountSvtIds->max_length - 1LL;
    do
    {
      if ( v9 >= LODWORD(overwriteLimitCountSvtIds->max_length) )
LABEL_21:
        sub_1CE6960(v6);
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
            *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_1CE6958(v6, v7);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_38EA9FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  QuestRestrictionInfo_o *v8; // x19
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  __int64 v10; // x22
  QuestRestrictionInfo_SlotInfo_o *v11; // x8
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x21
  int max_length; // w8
  int v14; // w22
  __int64 v15; // x23
  RestrictionWholeEntity_o *v16; // x25
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x26
  unsigned __int64 v19; // x27
  int v20; // w8
  unsigned int v21; // w9
  struct QuestRestrictionInfo_SlotInfo_array *v22; // x8
  QuestRestrictionInfo_SlotInfo_o *v23; // x8
  System_Collections_Generic_IEnumerable_RestrictionEntity__o *RestrictionMessageEntityList; // x20
  QuestRestrictionInfo___c_c *v26; // x0
  System_Func_object__bool__o *_9__107_0; // x19
  Il2CppObject *v28; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  QuestRestrictionInfo___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  System_Func_object__object__o *_9__107_1; // x20
  Il2CppObject *v40; // x21
  struct QuestRestrictionInfo___c_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Func_TSource__TResult__o *v49; // x1
  struct QuestRestrictionInfo_SlotInfo_array *v50; // x8
  QuestRestrictionInfo_SlotInfo_o *v51; // x8
  System_Func_object__object__o *v52; // x21
  System_Collections_Generic_IEnumerable_string__o *v53; // x0

  v8 = this;
  if ( (byte_4E05D81 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1CE6700(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1CE6700(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo_GetRestrictionErrorDialogConditionName__);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_0__);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_1__);
    sub_1CE6700(&QuestRestrictionInfo___c_TypeInfo);
    sub_1CE6700(&StringLiteral_43/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05D81 = 1;
  }
  if ( v8->fields.restrictionBaseEntity )
  {
    if ( initPos < 1 )
      goto LABEL_9;
    slotInfos = v8->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_61;
    v10 = initPos - 1LL;
    if ( (unsigned int)v10 >= LODWORD(slotInfos->max_length) )
      goto LABEL_60;
    v11 = slotInfos->m_Items[v10];
    if ( !v11 )
      goto LABEL_61;
    this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v11->fields.summary, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_9:
      if ( !isCheckPosForWhole )
        return (System_String_o *)StringLiteral_1/*""*/;
      if ( pos < 1 )
        return v8->fields.confirmRestrictionMessage;
      restrictionWholeEntities = v8->fields.restrictionWholeEntities;
      if ( restrictionWholeEntities )
      {
        max_length = restrictionWholeEntities->max_length;
        if ( max_length >= 1 )
        {
          v14 = 0;
          v15 = pos - 1LL;
          do
          {
            if ( v14 >= (unsigned int)max_length )
              goto LABEL_60;
            v16 = restrictionWholeEntities->m_Items[v14];
            if ( !v16 )
              goto LABEL_61;
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
                  goto LABEL_61;
                if ( (unsigned int)v15 >= LODWORD(v22->max_length) )
                  goto LABEL_60;
                v23 = v22->m_Items[v15];
                if ( !v23 )
                  goto LABEL_61;
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
              goto LABEL_61;
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
LABEL_60:
              sub_1CE6960(this);
            }
LABEL_36:
            max_length = restrictionWholeEntities->max_length;
            ++v14;
          }
          while ( v14 < max_length );
        }
        return v8->fields.confirmRestrictionMessage;
      }
    }
    else
    {
      v50 = v8->fields.slotInfos;
      if ( v50 )
      {
        if ( (unsigned int)v10 >= LODWORD(v50->max_length) )
          goto LABEL_60;
        v51 = v50->m_Items[v10];
        if ( v51 )
          return v51->fields.summary;
      }
    }
LABEL_61:
    sub_1CE6958(this, *(_QWORD *)&initPos);
  }
  RestrictionMessageEntityList = QuestRestrictionInfo__GetRestrictionMessageEntityList(
                                   v8,
                                   *(const MethodInfo **)&initPos);
  if ( initPos < 1 )
  {
    v52 = (System_Func_object__object__o *)sub_1CE694C(System_Func_RestrictionEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      v52,
      (Il2CppObject *)v8,
      Method_QuestRestrictionInfo_GetRestrictionErrorDialogConditionName__,
      0);
    v48 = (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList;
    v49 = (System_Func_TSource__TResult__o *)v52;
  }
  else
  {
    v26 = QuestRestrictionInfo___c_TypeInfo;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v26 = QuestRestrictionInfo___c_TypeInfo;
    }
    _9__107_0 = (System_Func_object__bool__o *)v26->static_fields->__9__107_0;
    if ( !_9__107_0 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = QuestRestrictionInfo___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v26->static_fields->__9;
      _9__107_0 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_RestrictionEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__107_0,
        v28,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_0__,
        0);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__107_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__107_0;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__107_0,
        (int32_t)_9__107_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    v36 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
            (System_Func_TSource__bool__o *)_9__107_0,
            (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    v37 = QuestRestrictionInfo___c_TypeInfo;
    v38 = v36;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v37 = QuestRestrictionInfo___c_TypeInfo;
    }
    _9__107_1 = (System_Func_object__object__o *)v37->static_fields->__9__107_1;
    if ( !_9__107_1 )
    {
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v37 = QuestRestrictionInfo___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v37->static_fields->__9;
      _9__107_1 = (System_Func_object__object__o *)sub_1CE694C(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        _9__107_1,
        v40,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_1__,
        0);
      v41 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v41->__9__107_1 = (struct System_Func_RestrictionEntity__string__o *)_9__107_1;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v41->__9__107_1, (int32_t)_9__107_1, v42, v43, v44, v45, v46, v47);
    }
    v48 = v38;
    v49 = (System_Func_TSource__TResult__o *)_9__107_1;
  }
  v53 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                              v48,
                                                              v49,
                                                              (const MethodInfo_323A63C *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
  return System_String__Join_65165420((System_String_o *)StringLiteral_43/*"\n"*/, v53, 0);
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
      sub_1CE6960(this);
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

  if ( (byte_4E05D94 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4E05D94 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1CE6960(Instance);
      v20 = (int32_t *)questRestrictionEntityList->m_Items[v19];
      if ( !v20 )
        goto LABEL_67;
      v21 = v20[8];
      if ( v21 == 1 )
        break;
      if ( v21 == 2 )
      {
        Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4DFE4CA )
    {
      sub_1CE6700(&NetworkManager_TypeInfo);
      byte_4DFE4CA = 1;
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
        *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
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
      Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      v11 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4DFE4CA )
      {
        sub_1CE6700(&NetworkManager_TypeInfo);
        byte_4DFE4CA = 1;
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
      Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
        *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    sub_1CE6958(Instance, id);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_38EA9FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4E05D95 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05D95 = 1;
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
    sub_1CE6958(this, *(_QWORD *)&n);
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
    sub_1CE6960(this);
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

  if ( (byte_4E05DAB & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
    byte_4E05DAB = 1;
  }
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary
    || !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
          messageId,
          (const MethodInfo_355B6D8 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
  {
    return 0;
  }
  v7 = this->fields.dialogMessageInfoDictionary;
  if ( !v7 )
    sub_1CE6958(0, v6);
  return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_int__object__o *)v7,
                                                       messageId,
                                                       (const MethodInfo_355B444 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
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
  if ( (byte_4E05DAE & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05DAE = 1;
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
        sub_1CE6960(this);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_19;
      if ( v7->fields.type == 5 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_34E92A8 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1CE6958(this, method);
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
  if ( (byte_4E05DB0 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05DB0 = 1;
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
        sub_1CE6960(this);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_19;
      if ( v7->fields.type == 6 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_34E92A8 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1CE6958(this, method);
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
  if ( (byte_4E05DAD & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05DAD = 1;
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
        sub_1CE6960(this);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_20;
      type = v7->fields.type;
      if ( type == 8 || type == 4 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_34E92A8 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1CE6958(this, method);
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
  if ( (byte_4E05D96 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05D96 = 1;
  }
  if ( v6->fields.restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.restrictionSlotDictionary;
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         n,
                                         (const MethodInfo_355B444 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
    sub_1CE6958(this, *(_QWORD *)&n);
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
    sub_1CE6960(this);
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
      sub_1CE6960(this);
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
      sub_1CE6958(this, n);
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
      sub_1CE6958(this, message);
    max_length = questRestrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= LODWORD(questRestrictionEntityList->max_length) )
          sub_1CE6960(this);
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
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)message, 0, (int32_t)method, v3, v4, v5, v6, v7);
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
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)message, (int32_t)noticeMessage, (int32_t)method, v3, v4, v5, v6, v7);
  return 1;
}


System_String_o *QuestRestrictionInfo__GetFixNpcMessage(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  if ( (byte_4E05DA0 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_10382/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/);
    byte_4E05DA0 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10382/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0);
}


System_String_o *QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E05D9F & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_10383/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/);
    byte_4E05D9F = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10383/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, 0);
}


int32_t QuestRestrictionInfo__GetFixedMyServantPositionCount(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E05DB6 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4E05DB6 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_1CE6958(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&off_18) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1CE6958(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4E05DB3 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    byte_4E05DB3 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_1CE6958(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v10.fields._current,
      (const MethodInfo_38E9150 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_1CE6958(fixedMyServantIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_38EA9FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4E05D91 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E05D91 = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !fixedMyServantSingleIndividualities->max_length )
      return 0;
    this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       svtId,
                                       dispLimitCount,
                                       0);
        this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( this )
          {
            this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               svtId,
                                               (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v13 = (ServantEntity_o *)this;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_355B444 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
    sub_1CE6958(this, *(_QWORD *)&svtId);
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
    sub_1CE6960(this);
  return targetVals->m_Items[num] != svtId;
}


System_String_o *QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E05D92 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_10381/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/);
    byte_4E05D92 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10381/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, 0);
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

  if ( (byte_4E05DB7 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4E05DB7 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_1CE6958(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&off_18) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1CE6958(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4E05DB5 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    byte_4E05DB5 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_1CE6958(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v10.fields._current,
      (const MethodInfo_38E9150 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_1CE6958(fixedIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_38EA9FC *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4E05D8E & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4E05D8E = 1;
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
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v4 = 0;
    for ( i = v14; ; v4 += LODWORD(i.fields._current[1].monitor) )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v5 )
        break;
      if ( !i.fields._current )
        sub_1CE6958(v5, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
    sub_1CE6958(fixedMyServantIndividualitiesList, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v14; ; v10 += LODWORD(i.fields._current[1].monitor) )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v11 )
      break;
    if ( !i.fields._current )
      sub_1CE6958(v11, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v10;
}


System_String_o *QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E05D90 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_10380/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/);
    byte_4E05D90 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10380/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, 0);
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

  if ( (byte_4E05D8D & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    byte_4E05D8D = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( this->fields.restrictionBaseEntity )
  {
    v3 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v3,
      (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( this->fields.isFixedMyServantPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_38E9150 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &i,
               (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v6 )
          break;
        if ( !v3 )
          sub_1CE6958(v6, v7);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isNeedStarting )
    {
      fixedMyServantIndividualitiesList = this->fields.needStartingIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_38E9150 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &i,
               (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v8 )
          break;
        if ( !v3 )
          sub_1CE6958(v8, v9);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isFixedPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_38E9150 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v10 )
          break;
        if ( !v3 )
          sub_1CE6958(v10, v11);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( v3 )
    {
      if ( v3->fields._size > 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v3,
                 (const MethodInfo_38EA9FC *)Method_System_Collections_Generic_List_int__ToArray__);
      return 0;
    }
LABEL_38:
    sub_1CE6958(fixedMyServantIndividualitiesList, v5);
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
  if ( (byte_4E05D8C & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_10385/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/);
    byte_4E05D8C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10385/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, 0);
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

  if ( (byte_4E05DB9 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
    sub_1CE6700(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass213_0__GetGrandServantRestrictionEntity_b__0__);
    sub_1CE6700(&QuestRestrictionInfo___c__DisplayClass213_0_TypeInfo);
    byte_4E05DB9 = 1;
  }
  v5 = sub_1CE694C(QuestRestrictionInfo___c__DisplayClass213_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1CE6958(v6, v7);
  *(_DWORD *)(v5 + 16) = initPos;
  grandServantRestrictionEntityList = this->fields.grandServantRestrictionEntityList;
  v9 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_RestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass213_0__GetGrandServantRestrictionEntity_b__0__,
    0);
  return (RestrictionEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__52613440(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)grandServantRestrictionEntityList,
                                  (System_Func_TSource__bool__o *)v9,
                                  (const MethodInfo_322D140 *)Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
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

  if ( (byte_4E05D77 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_string__TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_10351/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1CE6700(&StringLiteral_11216/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/);
    sub_1CE6700(&StringLiteral_11217/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1CE6700(&StringLiteral_11213/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_1CE6700(&StringLiteral_6500/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_4E05D77 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_98;
  if ( !isSlotOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6500/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11217/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
    v25 = (System_String_o *)IsNullOrEmpty;
    if ( !this->fields.isUniqueServant )
      goto LABEL_20;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11216/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0);
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
        IsNullOrEmpty = System_String__Concat_65122828(summary, v25, 0);
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
        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      v21->fields._size = size + 1;
      v35[4] = (Il2CppClass *)summary;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)summary, v26, v27, v28, v29, v30, v31);
    }
LABEL_20:
    if ( !this->fields.isFatigure )
      goto LABEL_33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11213/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0);
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
        IsNullOrEmpty = System_String__Concat_65122828(summary, v25, 0);
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
        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v42->obj.klass + v44;
      v21->fields._size = v44 + 1;
      v45[4] = (Il2CppClass *)summary;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v45 + 4), (int32_t)summary, v36, v37, v38, v39, v40, v41);
    }
LABEL_33:
    if ( !this->fields.isNotSingleSupportOnly )
      goto LABEL_46;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10351/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
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
        IsNullOrEmpty = System_String__Concat_65122828(summary, v25, 0);
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
        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &v52->obj.klass + v54;
      v21->fields._size = v54 + 1;
      v55[4] = (Il2CppClass *)summary;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v55 + 4), (int32_t)summary, v46, v47, v48, v49, v50, v51);
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
                IsNullOrEmpty = System_String__Concat_65122828(summary, v25, 0);
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
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &v66->obj.klass + v68;
            v21->fields._size = v68 + 1;
            v69[4] = (Il2CppClass *)summary;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v69 + 4), (int32_t)summary, v60, v61, v62, v63, v64, v65);
          }
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v58 >= max_length )
          goto LABEL_79;
      }
LABEL_101:
      sub_1CE6960(IsNullOrEmpty);
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
                            (const MethodInfo_355B444 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0 )
    {
LABEL_100:
      sub_1CE6958(IsNullOrEmpty, summary);
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
            v80 = LocalizationManager__Get((System_String_o *)StringLiteral_6500/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
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
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
          }
          else
          {
            v84 = &v81->obj.klass + v83;
            v21->fields._size = v83 + 1;
            v84[4] = (Il2CppClass *)summary;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v84 + 4), (int32_t)summary, v74, v75, v76, v77, v78, v79);
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
                                  (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *QuestRestrictionInfo__GetMessages_44549580(
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

  if ( (byte_4E05D78 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_string__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_string__TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_10351/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1CE6700(&StringLiteral_11217/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1CE6700(&StringLiteral_11213/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_1CE6700(&StringLiteral_6500/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_4E05D78 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6500/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11217/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
  v20 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isSlotOnly || !this->fields.isFatigure )
    goto LABEL_19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11213/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0);
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
  IsNullOrEmpty = System_String__Concat_65122828(name, v19, 0);
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
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v32[4] = (Il2CppClass *)name;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)name, v23, v24, v25, v26, v27, v28);
  }
LABEL_19:
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10351/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
    name = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = System_String__Format(v18, (Il2CppObject *)IsNullOrEmpty, 0);
      name = IsNullOrEmpty;
    }
    if ( singleSupport )
    {
      IsNullOrEmpty = System_String__Concat_65122828(name, v19, 0);
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
        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &v39->obj.klass + v41;
      v20->fields._size = v41 + 1;
      v42[4] = (Il2CppClass *)name;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v42 + 4), (int32_t)name, v33, v34, v35, v36, v37, v38);
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
        sub_1CE6960(IsNullOrEmpty);
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
              IsNullOrEmpty = System_String__Concat_65122828(name, v19, 0);
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
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &v52->obj.klass + v54;
          v20->fields._size = v54 + 1;
          v55[4] = (Il2CppClass *)name;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v55 + 4), (int32_t)name, v46, v47, v48, v49, v50, v51);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_62;
    }
LABEL_64:
    sub_1CE6958(IsNullOrEmpty, name);
  }
LABEL_62:
  if ( !v20 )
    goto LABEL_64;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v20,
                                  (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4E05DBF & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
    sub_1CE6700(&string_TypeInfo);
    byte_4E05DBF = 1;
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
                                          (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
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
                                        (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
  if ( !grandServantRestrictionEntityList )
LABEL_16:
    sub_1CE6958(grandServantRestrictionEntityList, method);
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
  if ( (byte_4E05D9E & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05D9E = 1;
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
    sub_1CE6960(this);
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
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_58;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_34E92A8 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
                                       (const MethodInfo_355B6D8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
      if ( !this )
        goto LABEL_58;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         v9,
                                         (const MethodInfo_355B444 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
      this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
      if ( !this )
        goto LABEL_58;
      this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         &v24,
                                         *(_DWORD *)(v15 + 44),
                                         (const MethodInfo_34E92A8 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1CE6958(this, method);
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

  if ( (byte_4E05DA7 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_10387/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/);
    sub_1CE6700(&StringLiteral_10390/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/);
    byte_4E05DA7 = 1;
  }
  SlotMessage = QuestRestrictionInfo__GetSlotMessage(this, pos, (const MethodInfo *)haveIndividualityServant);
  if ( !System_String__IsNullOrEmpty(SlotMessage, 0) )
    return SlotMessage;
  RestrictedName = (Il2CppObject *)QuestRestrictionInfo__GetRestrictedName(this, pos, v8);
  if ( haveIndividualityServant || QuestRestrictionInfo__GetGrandServantRestrictionEntity(this, pos, v9) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_10387/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_10390/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/;
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
  const MethodInfo_322DD48 *v22; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v25; // x20
  Il2CppObject *v26; // x0
  Il2CppObject *v27; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4E05DA9 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    sub_1CE6700(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass192_0__GetMyServantOrNpcSvtIdList_b__0__);
    sub_1CE6700(&QuestRestrictionInfo___c__DisplayClass192_0_TypeInfo);
    byte_4E05DA9 = 1;
  }
  v5 = sub_1CE694C(QuestRestrictionInfo___c__DisplayClass192_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
  {
    v14 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v5 + 24),
                                        (const MethodInfo_355B444 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
          sub_1CE6960(restrictionSlotDetailDictionary);
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
            (const MethodInfo_38E9150 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v15 = *((_DWORD *)v16 + 6);
        if ( (int)++v17 >= v15 )
          goto LABEL_15;
      }
LABEL_29:
      sub_1CE6958(restrictionSlotDetailDictionary, v7);
    }
LABEL_15:
    if ( !v14 )
      goto LABEL_29;
    if ( v14->fields._size >= 1 )
    {
      restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                          (DataManager_o *)restrictionSlotDetailDictionary,
                                          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList((ServantMaster_o *)restrictionSlotDetailDictionary, 0);
      monitor = System_Linq_Enumerable__Distinct_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                  (const MethodInfo_3226CCC *)Method_System_Linq_Enumerable_Distinct_int___);
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v22 = (const MethodInfo_322DD48 *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v28 = System_Linq_Enumerable__Intersect_int_(monitor, v21, v22);
      return System_Linq_Enumerable__ToArray_int_(
               v28,
               (const MethodInfo_3243710 *)Method_System_Linq_Enumerable_ToArray_int___);
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
      v25 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_RestrictionEntity__TypeInfo);
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
              (const MethodInfo_39065D0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v26 )
      {
        v27 = v26;
        restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                            (DataManager_o *)restrictionSlotDetailDictionary,
                                            (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        v21 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                     (ServantMaster_o *)restrictionSlotDetailDictionary,
                                                                     0);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v27[2].monitor;
        v22 = (const MethodInfo_322DD48 *)Method_System_Linq_Enumerable_Intersect_int___;
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

  if ( (byte_4E05DB2 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Array_Empty_int___);
    sub_1CE6700(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_1CE6700(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_1CE6700(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Union_int___);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass206_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__);
    sub_1CE6700(&QuestRestrictionInfo___c__DisplayClass206_0_TypeInfo);
    byte_4E05DB2 = 1;
  }
  isWhole = 0;
  v9 = sub_1CE694C(QuestRestrictionInfo___c__DisplayClass206_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_57;
  *(_DWORD *)(v9 + 16) = index;
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1CE694C(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_355AB10 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v12;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)npcInfoDictionary, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v21 = Method_System_Array_Empty_int___;
  v22 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v22 )
  {
    sub_1CBC7E4(Method_System_Array_Empty_int___);
    v22 = v21[7];
  }
  v23 = *(_QWORD *)(v22 + 16);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1CBC788(inited);
  if ( !*(_DWORD *)(v23 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v23);
  v24 = *(_QWORD *)(v21[7] + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1CBC788(inited);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v24 + 184);
    v27 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_RestrictionEntity__TypeInfo);
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
            (const MethodInfo_39065D0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v28 )
    {
      v29 = v28;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_57;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_57;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)Instance,
                                                                              0);
      v31 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v29[2].monitor,
              CollectionList,
              (const MethodInfo_322DD48 *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v31,
                                  (const MethodInfo_3243710 *)Method_System_Linq_Enumerable_ToArray_int___);
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
        sub_1CBC7E4(Method_System_Array_Empty_int___);
        v36 = v35[7];
      }
      v37 = *(_QWORD *)(v36 + 16);
      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
        v37 = sub_1CBC788(v34);
      if ( !*(_DWORD *)(v37 + 224) )
        v34 = j_il2cpp_runtime_class_init_0(v37);
      v38 = *(_QWORD *)(v35[7] + 16LL);
      if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
        v38 = sub_1CBC788(v34);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v38 + 184);
    }
    MyServantOrSupportTargetPos = *(_DWORD *)(v9 + 16);
    if ( !this->fields.restrictionBaseEntity )
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
                                      this,
                                      MyServantOrSupportTargetPos,
                                      v33);
  }
  v39 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
        sub_1CE6960(Instance);
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
        Instance = (void *)QuestRestrictionInfo__IsRestriction_44554152(
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
          Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_44576008(
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
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v62, 0);
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
                *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            }
            else
            {
              v39->fields._size = size + 1;
              items->m_Items[size] = (int)Instance;
            }
            v54 = *npcInfoDictionary;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v44->fields.svtId, 0);
            if ( !v54 )
              break;
            Instance = (void *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                 (System_Collections_Generic_Dictionary_int__object__o *)v54,
                                 (int32_t)Instance,
                                 (const MethodInfo_355B6D8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              v55 = *npcInfoDictionary;
              v57 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
              v56 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v63.fields.currentCryptoKey = v57;
              *(_QWORD *)&v63.fields.fakeValue = v56;
              Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v63, 0);
              if ( !v55 )
                break;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)v55,
                (int32_t)Instance,
                (Il2CppObject *)v43,
                (const MethodInfo_355B4E4 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
            }
          }
        }
      }
      v40 = *((_DWORD *)v41 + 6);
      if ( (int)++v42 >= v40 )
        goto LABEL_56;
    }
LABEL_57:
    sub_1CE6958(Instance, v11);
  }
LABEL_56:
  v58 = System_Linq_Enumerable__Union_int_(
          first,
          (System_Collections_Generic_IEnumerable_TSource__o *)v39,
          (const MethodInfo_3248F8C *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v58,
           (const MethodInfo_3243710 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4E05DA8 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_10387/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/);
    sub_1CE6700(&StringLiteral_10392/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/);
    sub_1CE6700(&StringLiteral_10391/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/);
    sub_1CE6700(&StringLiteral_10389/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/);
    sub_1CE6700(&StringLiteral_10388/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/);
    byte_4E05DA8 = 1;
  }
  SlotMessage = QuestRestrictionInfo__GetSlotMessage(this, pos, (const MethodInfo *)haveIndividualityServant);
  if ( !System_String__IsNullOrEmpty(SlotMessage, 0) )
    return SlotMessage;
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_10389/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/;
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
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10387/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/, 0);
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
            sub_1CE6960(MyServantOrNpcSvtIdList);
          MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
          v19 = v17[v18 + 8];
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
          }
          if ( v19 < *(_DWORD *)(*((_QWORD *)MyServantOrNpcSvtIdList + 23) + 924LL) )
            break;
          v16 = v17[6];
          if ( (int)++v18 >= v16 )
            goto LABEL_28;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = &StringLiteral_10391/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/;
      }
      else
      {
LABEL_28:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = &StringLiteral_10392/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v9, 0);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = &StringLiteral_10388/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/;
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

  if ( (byte_4E05DAA & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1CE6700(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass193_0__GetMyServantOrSupportTargetPos_b__0__);
    sub_1CE6700(&QuestRestrictionInfo___c__DisplayClass193_0_TypeInfo);
    byte_4E05DAA = 1;
  }
  v5 = sub_1CE694C(QuestRestrictionInfo___c__DisplayClass193_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
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
  v16 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_RestrictionEntity__TypeInfo);
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
         (const MethodInfo_39065D0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v6 )
    return (int)v6;
  klass = v6[3].klass;
  if ( !klass )
LABEL_14:
    sub_1CE6958(v6, v7);
  if ( !LODWORD(klass->_1.namespaze) )
    sub_1CE6960(v6);
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
    sub_1CE6960(this);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1CE6958(this, pos);
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

  if ( (byte_4E05DAC & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__);
    sub_1CE6700(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05DAC = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.restrictionBaseEntity )
  {
    dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
    if ( !dialogMessageInfoDictionary )
      sub_1CE6958(0, *(_QWORD *)&pos);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v11,
      (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
      (const MethodInfo_355B91C *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
             &v11,
             (const MethodInfo_36A4C30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
      if ( !v6 )
        break;
      if ( !v11.fields._current.fields.value )
        sub_1CE6958(v6, v7);
      if ( LODWORD(v11.fields._current.fields.value[1].klass) == pos )
      {
        DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v11.fields._current.fields.key, 0, v8);
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
          &v11,
          (const MethodInfo_36A4D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
        return DialogMessage;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v11,
      (const MethodInfo_36A4D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
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

  if ( (byte_4E05DB4 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    byte_4E05DB4 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v6 )
      break;
    if ( !v3 )
      sub_1CE6958(v6, v7);
    System_Collections_Generic_List_int___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)v9.fields._current,
      (const MethodInfo_38E9150 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v3 )
LABEL_15:
    sub_1CE6958(needStartingIndividualitiesList, v4);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_38EA9FC *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4E05DC1 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_GetValue_string___);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1CE6700(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1CE6700(&string_TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass225_0__GetOrganizationSelectionDialogMessage_b__0__);
    sub_1CE6700(&QuestRestrictionInfo___c__DisplayClass225_0_TypeInfo);
    sub_1CE6700(&StringLiteral_22839/*"organizationSelectionDialogTitle"*/);
    sub_1CE6700(&StringLiteral_22838/*"organizationSelectionDialogMessage"*/);
    byte_4E05DC1 = 1;
  }
  v51 = (GrandQuestFolderBoardItem_o *)title;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *title = static_fields->Empty;
  sub_1CE66A4(
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
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)message, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  questRestrictionEntityList = this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_16;
  if ( SLODWORD(questRestrictionEntityList->max_length) >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      v25 = sub_1CE694C(QuestRestrictionInfo___c__DisplayClass225_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v25, 0);
      if ( v24 >= LODWORD(questRestrictionEntityList->max_length) )
        sub_1CE6960(SpecifiedPosition);
      if ( !v25 )
        goto LABEL_16;
      v32 = questRestrictionEntityList->m_Items[v24];
      *(_QWORD *)(v25 + 16) = v32;
      v33 = v25 + 16;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v25 + 16), (int32_t)v32, v26, v27, v28, v29, v30, v31);
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
      v35 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_RestrictionEntity__TypeInfo);
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
              (const MethodInfo_39065D0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
                       (System_String_o *)StringLiteral_22839/*"organizationSelectionDialogTitle"*/,
                       (Il2CppObject *)string_TypeInfo->static_fields->Empty,
                       (const MethodInfo_31F1AB0 *)Method_BasicHelper_GetValue_string___);
      v51->klass = (GrandQuestFolderBoardItem_c *)Value_object;
      sub_1CE66A4(v51, (int32_t)Value_object, v38, v39, v40, v41, v42, v43);
      if ( *(_QWORD *)v33 )
      {
        v44 = BasicHelper__GetValue_object_(
                *(System_Collections_Generic_Dictionary_string__object__o **)(*(_QWORD *)v33 + 64LL),
                (System_String_o *)StringLiteral_22838/*"organizationSelectionDialogMessage"*/,
                (Il2CppObject *)string_TypeInfo->static_fields->Empty,
                (const MethodInfo_31F1AB0 *)Method_BasicHelper_GetValue_string___);
        *message = (System_String_o *)v44;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)message, (int32_t)v44, v45, v46, v47, v48, v49, v50);
        return;
      }
    }
LABEL_16:
    sub_1CE6958(SpecifiedPosition, v22);
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
    sub_1CE6960(this);
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
  if ( (byte_4E05DC4 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_GetValue_int__int___);
    byte_4E05DC4 = 1;
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
             (const MethodInfo_31F1CFC *)Method_BasicHelper_GetValue_int__int___);
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

  if ( (byte_4E05D99 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&OptionManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&string___TypeInfo);
    byte_4E05D99 = 1;
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
  FixedServantPositionSvtIdList = sub_1CE67A8(string___TypeInfo, *(unsigned int *)(FixedServantPositionSvtIdList + 24));
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
        sub_1CE6960(FixedServantPositionSvtIdList);
      v13 = *(_DWORD *)(v8 + 32 + 4 * v10);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      FixedServantPositionSvtIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !FixedServantPositionSvtIdList )
        break;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)FixedServantPositionSvtIdList,
              &entity,
              v13,
              (const MethodInfo_34E92A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0;
      FixedServantPositionSvtIdList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !FixedServantPositionSvtIdList )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)FixedServantPositionSvtIdList,
                            (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4DFE4CA )
      {
        sub_1CE6700(&NetworkManager_TypeInfo);
        byte_4DFE4CA = 1;
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
      FixedServantPositionSvtIdList = (__int64)ServantEntity__getName((ServantEntity_o *)entity, v16, -1, 0, 0, 0);
      if ( !v9 )
        break;
      if ( v10 >= *(unsigned int *)(v9 + 24) )
        goto LABEL_42;
      i->klass = (GrandQuestFolderBoardItem_c *)FixedServantPositionSvtIdList;
      sub_1CE66A4(i, FixedServantPositionSvtIdList, v17, v18, v19, v20, v21, v22);
      if ( v11 == ++v10 )
        return (System_String_array *)v9;
    }
LABEL_41:
    sub_1CE6958(FixedServantPositionSvtIdList, v7);
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
    sub_1CE6960(this);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1CE6958(this, pos);
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
  if ( (byte_4E05DA6 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1CE6700(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass189_0__GetRestrictedName_b__0__);
    sub_1CE6700(&QuestRestrictionInfo___c__DisplayClass189_0_TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05DA6 = 1;
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
        v11 = sub_1CE694C(QuestRestrictionInfo___c__DisplayClass189_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v11, 0);
        if ( v10 >= LODWORD(questRestrictionEntityList->max_length) )
LABEL_28:
          sub_1CE6960(this);
        if ( !v11 )
          break;
        v18 = questRestrictionEntityList->m_Items[v10];
        *(_QWORD *)(v11 + 16) = v18;
        v19 = v11 + 16;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)v18, v12, v13, v14, v15, v16, v17);
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v4->fields.myServantOrNpcRestrictionEntityList;
        v21 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_RestrictionEntity__TypeInfo);
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
                (const MethodInfo_39065D0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
    sub_1CE6958(this, *(_QWORD *)&pos);
  }
  this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
  if ( !this )
    goto LABEL_27;
  this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)this,
                                     pos,
                                     (const MethodInfo_355B444 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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


System_String_o *QuestRestrictionInfo__GetRestrictionErrorDialogConditionName(
        QuestRestrictionInfo_o *this,
        RestrictionEntity_o *restrictionEntity,
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
  System_Collections_Generic_IEnumerable_TSource__o *questRestrictionEntityList; // x19
  System_Func_object__bool__o *v15; // x20
  __int64 v16; // x8

  if ( (byte_4E05DC5 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_FirstOrDefault_QuestRestrictionEntity___);
    sub_1CE6700(&System_Func_QuestRestrictionEntity__bool__TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass230_0__GetRestrictionErrorDialogConditionName_b__0__);
    sub_1CE6700(&QuestRestrictionInfo___c__DisplayClass230_0_TypeInfo);
    byte_4E05DC5 = 1;
  }
  v5 = sub_1CE694C(QuestRestrictionInfo___c__DisplayClass230_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = restrictionEntity,
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)restrictionEntity, v8, v9, v10, v11, v12, v13),
        questRestrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.questRestrictionEntityList,
        v15 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_QuestRestrictionEntity__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_QuestRestrictionInfo___c__DisplayClass230_0__GetRestrictionErrorDialogConditionName_b__0__,
          0),
        v6 = System_Linq_Enumerable__FirstOrDefault_object__52613440(
               questRestrictionEntityList,
               (System_Func_TSource__bool__o *)v15,
               (const MethodInfo_322D140 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestRestrictionEntity___),
        (v16 = *(_QWORD *)(v5 + 16)) == 0) )
  {
    sub_1CE6958(v6, v7);
  }
  if ( v6 )
    return QuestRestrictionEntity__GetOverwriteDialogName(
             (QuestRestrictionEntity_o *)v6,
             *(System_String_o **)(v16 + 24),
             0);
  else
    return *(System_String_o **)(v16 + 24);
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
  System_Func_object__object__o *_9__108_0; // x20
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
  if ( (byte_4E05D82 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Prepend_string___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_1CE6700(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__108_0__);
    sub_1CE6700(&QuestRestrictionInfo___c_TypeInfo);
    sub_1CE6700(&StringLiteral_43/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&StringLiteral_10347/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_4E05D82 = 1;
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
      this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10347/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      v23 = v4->fields.slotInfos;
      if ( !v23 )
        goto LABEL_25;
      if ( (unsigned int)v6 >= LODWORD(v23->max_length) )
LABEL_26:
        sub_1CE6960(this);
      v24 = v23->m_Items[v6];
      if ( v24 )
        return System_String__Concat_65161092(
                 (System_String_o *)this,
                 (System_String_o *)StringLiteral_43/*"\n"*/,
                 v24->fields.summary,
                 0);
    }
LABEL_25:
    sub_1CE6958(this, *(_QWORD *)&initPos);
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
    _9__108_0 = (System_Func_object__object__o *)sub_1CE694C(System_Func_RestrictionEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__108_0,
      v12,
      Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__108_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__108_0 = (struct System_Func_RestrictionEntity__string__o *)_9__108_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__108_0,
      (int32_t)_9__108_0,
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
                                                               (const MethodInfo_323A63C *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10347/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
  v22 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Prepend_object_(
                                                              v20,
                                                              v21,
                                                              (const MethodInfo_3233B6C *)Method_System_Linq_Enumerable_Prepend_string___);
  return System_String__Join_65165420((System_String_o *)StringLiteral_43/*"\n"*/, v22, 0);
}


System_Collections_Generic_IEnumerable_RestrictionEntity__o *QuestRestrictionInfo__GetRestrictionMessageEntityList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x19
  System_Func_object__bool__o *_9__109_0; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4E05D83 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1CE6700(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__109_0__);
    sub_1CE6700(&QuestRestrictionInfo___c_TypeInfo);
    byte_4E05D83 = 1;
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
    _9__109_0 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__109_0,
      v6,
      Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__109_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__109_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__109_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__109_0,
      (int32_t)_9__109_0,
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
                                                                          (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
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

  if ( (byte_4E05D7B & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E05D7B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1CE6958(Instance, v9);
  }
  return ServantEntity__getIndividuality((ServantEntity_o *)Instance, limitCount, dispLimitCount, 0);
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

  if ( (byte_4E05D9A & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    byte_4E05D9A = 1;
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
      sub_1CE6958(0, method);
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
  if ( (byte_4E05D9C & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05D9C = 1;
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
    sub_1CE6960(this);
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
                                         (const MethodInfo_355B444 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_51;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &v21,
                                           *(_DWORD *)(v12 + 44),
                                           (const MethodInfo_34E92A8 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1CE6958(this, method);
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
      this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
      if ( !this )
        goto LABEL_51;
      this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         &entity,
                                         v7->fields.restrictionMessageId,
                                         (const MethodInfo_34E92A8 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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

  if ( (byte_4E05D9B & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_10394/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/);
    sub_1CE6700(&StringLiteral_10393/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/);
    byte_4E05D9B = 1;
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
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10394/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, 0);
    v7 = &v11;
    v11 = this->fields.servantNumMax;
  }
  else
  {
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10393/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, 0);
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
  if ( (byte_4E05DC2 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_GetValue_string___);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1CE6700(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1CE6700(&string_TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass226_0__GetSlotMessage_b__0__);
    sub_1CE6700(&QuestRestrictionInfo___c__DisplayClass226_0_TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&StringLiteral_23443/*"restrictionSlotMessage"*/);
    byte_4E05DC2 = 1;
  }
  questRestrictionEntityList = v3->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_15;
  if ( SLODWORD(questRestrictionEntityList->max_length) < 1 )
    return string_TypeInfo->static_fields->Empty;
  v5 = 0;
  while ( 1 )
  {
    v6 = sub_1CE694C(QuestRestrictionInfo___c__DisplayClass226_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    if ( v5 >= LODWORD(questRestrictionEntityList->max_length) )
      sub_1CE6960(this);
    if ( !v6 )
      goto LABEL_15;
    v13 = questRestrictionEntityList->m_Items[v5];
    *(_QWORD *)(v6 + 16) = v13;
    v14 = v6 + 16;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)v13, v7, v8, v9, v10, v11, v12);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v3->fields.myServantOrNpcRestrictionEntityList;
    v16 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_RestrictionEntity__TypeInfo);
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
            (const MethodInfo_39065D0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
    sub_1CE6958(this, *(_QWORD *)&initPos);
  return (System_String_o *)BasicHelper__GetValue_object_(
                              *(System_Collections_Generic_Dictionary_string__object__o **)(*(_QWORD *)v14 + 64LL),
                              (System_String_o *)StringLiteral_23443/*"restrictionSlotMessage"*/,
                              (Il2CppObject *)string_TypeInfo->static_fields->Empty,
                              (const MethodInfo_31F1AB0 *)Method_BasicHelper_GetValue_string___);
}


int32_t QuestRestrictionInfo__GetSupportInitIndex(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.supportInitIndex;
}


System_String_o *QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E05D84 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_10395/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/);
    byte_4E05D84 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10395/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, 0);
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

  if ( (byte_4E05D93 & 1) == 0 )
  {
    sub_1CE6700(&int_TypeInfo);
    byte_4E05D93 = 1;
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
  if ( (byte_4E05D8A & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_10397/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/);
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05D8A = 1;
  }
  if ( !v4->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_10397/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, 0);
  }
  else
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_18:
      sub_1CE6958(this, isFixMessage);
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
          sub_1CE6960(this);
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
  if ( (byte_4E05D89 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_10396/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/);
    byte_4E05D89 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10396/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, 0);
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

  if ( (byte_4E05DBC & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_Any_RestrictionEntity___);
    sub_1CE6700(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass219_0__IsActiveGrandBoardRestriction_b__0__);
    sub_1CE6700(&QuestRestrictionInfo___c__DisplayClass219_0_TypeInfo);
    byte_4E05DBC = 1;
  }
  v5 = sub_1CE694C(QuestRestrictionInfo___c__DisplayClass219_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1CE6958(v6, v7);
  *(_DWORD *)(v5 + 16) = initPos;
  activeGrandBoardRestrictionEntityList = (System_Collections_Generic_List_T__o *)this->fields.activeGrandBoardRestrictionEntityList;
  v9 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_RestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass219_0__IsActiveGrandBoardRestriction_b__0__,
    0);
  return BasicHelper__Any_object_(
           activeGrandBoardRestrictionEntityList,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_31ED4DC *)Method_BasicHelper_Any_RestrictionEntity___);
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
  System_Func_object__bool__o *_9__99_0; // x21
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
  System_Func_object__bool__o *_9__99_1; // x21
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
  System_Func_object__bool__o *_9__99_2; // x21
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

  if ( (byte_4E05D7C & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Any_RestrictionEntity___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1CE6700(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__99_0__);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__99_1__);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__99_2__);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass99_0__IsClassRestriction_b__3__);
    sub_1CE6700(&QuestRestrictionInfo___c__DisplayClass99_0_TypeInfo);
    sub_1CE6700(&QuestRestrictionInfo___c_TypeInfo);
    byte_4E05D7C = 1;
  }
  v5 = sub_1CE694C(QuestRestrictionInfo___c__DisplayClass99_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1CE6958(v6, v7);
  *(_DWORD *)(v5 + 16) = individuality;
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  v9 = QuestRestrictionInfo___c_TypeInfo;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v9 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__99_0 = (System_Func_object__bool__o *)v9->static_fields->__9__99_0;
  if ( !_9__99_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestRestrictionInfo___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__99_0 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__99_0, v11, Method_QuestRestrictionInfo___c__IsClassRestriction_b__99_0__, 0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__99_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__99_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__99_0,
      (int32_t)_9__99_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          restrictionEntityList,
          (System_Func_TSource__bool__o *)_9__99_0,
          (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v20 = QuestRestrictionInfo___c_TypeInfo;
  v21 = v19;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v20 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__99_1 = (System_Func_object__bool__o *)v20->static_fields->__9__99_1;
  if ( !_9__99_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = QuestRestrictionInfo___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__99_1 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__99_1, v23, Method_QuestRestrictionInfo___c__IsClassRestriction_b__99_1__, 0);
    v24 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v24->__9__99_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__99_1;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v24->__9__99_1, (int32_t)_9__99_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)_9__99_1,
          (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v32 = QuestRestrictionInfo___c_TypeInfo;
  v33 = v31;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v32 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__99_2 = (System_Func_object__bool__o *)v32->static_fields->__9__99_2;
  if ( !_9__99_2 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = QuestRestrictionInfo___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__99_2 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__99_2, v35, Method_QuestRestrictionInfo___c__IsClassRestriction_b__99_2__, 0);
    v36 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v36->__9__99_2 = (struct System_Func_RestrictionEntity__bool__o *)_9__99_2;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v36->__9__99_2, (int32_t)_9__99_2, v37, v38, v39, v40, v41, v42);
  }
  v43 = System_Linq_Enumerable__Where_object_(
          v33,
          (System_Func_TSource__bool__o *)_9__99_2,
          (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v44 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_RestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v44,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass99_0__IsClassRestriction_b__3__,
    0);
  return System_Linq_Enumerable__Any_object__52502356(
           v43,
           (System_Func_TSource__bool__o *)v44,
           (const MethodInfo_3211F54 *)Method_System_Linq_Enumerable_Any_RestrictionEntity___);
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
    sub_1CE6960(this);
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_7:
    sub_1CE6958(this, initPos);
  return v4->fields.isMoved;
}


bool QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_1CE6958(this, method);
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
        sub_1CE6960(this);
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
    sub_1CE6958(this, method);
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

  if ( (byte_4E05DAF & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    byte_4E05DAF = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !this->fields.isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.isFixedSupportPosition )
  {
    fixedSupportIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)fixedSupportIndividualitiesList,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v11;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_38E9150 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v6 )
        break;
      if ( !v3 )
        sub_1CE6958(v6, v7);
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
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v11;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_38E9150 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v9 )
        break;
      if ( !v3 )
        sub_1CE6958(v9, v10);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v3 )
LABEL_23:
    sub_1CE6958(fixedSupportIndividualitiesList, v4);
  return v3->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsFixedSupportPosition_44559868(
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
  if ( (byte_4E05D8B & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05D8B = 1;
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
  v7 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v6->fields.isFixedSupportPosition )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedSupportIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v22;
          ;
          System_Collections_Generic_List_int___AddRange(
            v7,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_38E9150 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v8 )
        break;
      if ( !v7 )
        sub_1CE6958(v8, v9);
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
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v22;
          ;
          System_Collections_Generic_List_int___AddRange(
            v7,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_38E9150 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v11 )
        break;
      if ( !v7 )
        sub_1CE6958(v11, v12);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v7 )
    goto LABEL_42;
  if ( v7->fields._size < 1 )
    goto LABEL_36;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_42;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v15 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  *(_QWORD *)&v25.fields.fakeValue = v14;
  this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v25, 0);
  if ( !v13 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v13,
             (int32_t)this,
             (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    v7,
    (const MethodInfo_38E9A18 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = v22;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v23,
            (const MethodInfo_367CBD8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v23,
        (const MethodInfo_367CBD4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      return 1;
    }
    current = (int32_t)v23.fields._current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, 0);
    if ( !Entity )
      sub_1CE6958(DispLimitCount, v20);
  }
  while ( !ServantEntity__IsIndividuality((ServantEntity_o *)Entity, limitCount, DispLimitCount, current, 0) );
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v23,
    (const MethodInfo_367CBD4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_36:
  supportPositionList = v6->fields.supportPositionList;
  if ( !supportPositionList )
LABEL_42:
    sub_1CE6958(this, *(_QWORD *)&num);
  if ( LODWORD(supportPositionList->max_length) <= num )
    sub_1CE6960(this);
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

  if ( (byte_4E05DBB & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    byte_4E05DBB = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_11:
    sub_1CE6958(Master_object, v4);
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


bool QuestRestrictionInfo__IsMyServantOrNpcRestriction_44572848(
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

  if ( (byte_4E05DA1 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
    sub_1CE6700(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass184_0__IsMyServantOrNpcRestriction_b__0__);
    sub_1CE6700(&QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo);
    byte_4E05DA1 = 1;
  }
  v5 = sub_1CE694C(QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo);
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
        sub_1CE6960(v6);
      v9 = slotInfos->m_Items[pos - 1];
      if ( v9 )
        return (unsigned int)(v9->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_1CE6958(v6, v7);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v12 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_RestrictionEntity__TypeInfo);
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
           (const MethodInfo_3906594 *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
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

  if ( (byte_4E05D7D & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
    sub_1CE6700(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass100_0__IsMySvtOrSupportSlotClassRestriction_b__0__);
    sub_1CE6700(&QuestRestrictionInfo___c__DisplayClass100_0_TypeInfo);
    byte_4E05D7D = 1;
  }
  v7 = sub_1CE694C(QuestRestrictionInfo___c__DisplayClass100_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1CE6958(v8, v9);
  *(_DWORD *)(v7 + 16) = initPos;
  result = initPos >= 1
        && (restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList,
            v11 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_RestrictionEntity__bool__TypeInfo),
            System_Func_object__bool____ctor(
              v11,
              (Il2CppObject *)v7,
              Method_QuestRestrictionInfo___c__DisplayClass100_0__IsMySvtOrSupportSlotClassRestriction_b__0__,
              0),
            (v12 = System_Linq_Enumerable__FirstOrDefault_object__52613440(
                     restrictionEntityList,
                     (System_Func_TSource__bool__o *)v11,
                     (const MethodInfo_322D140 *)Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___)) != 0)
        && (v13 = v12, !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12[2].monitor, 0))
        && !System_Linq_Enumerable__Contains_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v13[2].monitor,
              0,
              (const MethodInfo_3220A90 *)Method_System_Linq_Enumerable_Contains_int___)
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

  if ( (byte_4E05DA3 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1CE6700(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass186_0__IsNotIndividuality_b__0__);
    sub_1CE6700(&QuestRestrictionInfo___c__DisplayClass186_0_TypeInfo);
    byte_4E05DA3 = 1;
  }
  v5 = sub_1CE694C(QuestRestrictionInfo___c__DisplayClass186_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_26;
  *(_DWORD *)(v5 + 16) = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_44572848(this, pos, v8) )
    goto LABEL_23;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v5 + 16),
                                        (const MethodInfo_355B444 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    v9 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    if ( v9 >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v9 == v10 )
          sub_1CE6960(restrictionSlotDetailDictionary);
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
      sub_1CE6958(restrictionSlotDetailDictionary, v7);
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v14 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_RestrictionEntity__TypeInfo);
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
                                      (const MethodInfo_39065D0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
      sub_1CE6960(this);
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_1CE6958(this, initPos);
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
  System_Func_object__bool__o *_9__97_0; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4E05D7A & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
    sub_1CE6700(&System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__97_0__);
    sub_1CE6700(&QuestRestrictionInfo___c_TypeInfo);
    byte_4E05D7A = 1;
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
  _9__97_0 = (System_Func_object__bool__o *)v4->static_fields->__9__97_0;
  if ( !_9__97_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = QuestRestrictionInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__97_0 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__97_0,
      v6,
      Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__97_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__97_0 = (struct System_Func_QuestRestrictionInfo_SlotInfo__bool__o *)_9__97_0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&static_fields->__9__97_0, (int32_t)_9__97_0, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_object__52352392(
           slotInfos,
           (System_Func_T__bool__o *)_9__97_0,
           (const MethodInfo_31ED588 *)Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
}


bool QuestRestrictionInfo__IsRestrictionIndividualityWhole(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo___c_c *v3; // x0
  System_Object_array *restrictionWholeEntities; // x19
  System_Func_object__bool__o *_9__96_1; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo_31ED588 *v14; // x2
  QuestRestrictionInfo___c_c *v15; // x0
  Il2CppObject *v16; // x21
  struct QuestRestrictionInfo___c_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4E05D79 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_Any_RestrictionEntity____79908040);
    sub_1CE6700(&Method_BasicHelper_Any_RestrictionWholeEntity___);
    sub_1CE6700(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1CE6700(&System_Func_RestrictionWholeEntity__bool__TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__96_0__);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__96_1__);
    sub_1CE6700(&QuestRestrictionInfo___c_TypeInfo);
    byte_4E05D79 = 1;
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
    _9__96_1 = (System_Func_object__bool__o *)v3->static_fields->__9__96_1;
    if ( !_9__96_1 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = QuestRestrictionInfo___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v3->static_fields->__9;
      _9__96_1 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_RestrictionWholeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__96_1,
        v6,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__96_1__,
        0);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__96_1 = (struct System_Func_RestrictionWholeEntity__bool__o *)_9__96_1;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__96_1,
        (int32_t)_9__96_1,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    v14 = (const MethodInfo_31ED588 *)Method_BasicHelper_Any_RestrictionWholeEntity___;
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
    _9__96_1 = (System_Func_object__bool__o *)v15->static_fields->__9__96_0;
    if ( !_9__96_1 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = QuestRestrictionInfo___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v15->static_fields->__9;
      _9__96_1 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_RestrictionEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__96_1,
        v16,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__96_0__,
        0);
      v17 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v17->__9__96_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__96_1;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v17->__9__96_0, (int32_t)_9__96_1, v18, v19, v20, v21, v22, v23);
    }
    v14 = (const MethodInfo_31ED588 *)Method_BasicHelper_Any_RestrictionEntity____79908040;
  }
  return BasicHelper__Any_object__52352392(restrictionWholeEntities, (System_Func_T__bool__o *)_9__96_1, v14);
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
  const MethodInfo *v17; // x2
  Il2CppObject *Entity; // x21
  int v19; // w25
  __int64 m_CancellationTokenSource; // x8
  bool *p_DispLog; // x9
  __int64 v22; // x10
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x23
  System_Predicate_object__o *v24; // x25
  struct DataMasterBase_array *datalist; // x8
  Il2CppObject *v26; // x23
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v28; // x0
  struct System_Threading_CancellationTokenSource_o *v29; // x9
  DataManager_o *v30; // x22
  unsigned __int64 v31; // x24
  RestrictionSlotDetailEntity_o *v32; // x23
  struct System_Int32_array *targetVals; // x9
  System_Int32_array *Individuality; // x0

  if ( (byte_4E05DA4 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__Contains__);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1CE6700(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass187_0__IsRestrictionServantIndividuality_b__0__);
    sub_1CE6700(&QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo);
    byte_4E05DA4 = 1;
  }
  v13 = sub_1CE694C(QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_53;
  *(_DWORD *)(v13 + 16) = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_44572848(this, pos, v16) )
    goto LABEL_51;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_53;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)this->fields.restrictionSlotDictionary;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                    *(_DWORD *)(v13 + 16),
                                    (const MethodInfo_355B444 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
                goto LABEL_53;
              if ( *(_DWORD *)(v22 + 28) == 2 )
                goto LABEL_32;
            }
            else
            {
              if ( !v22 )
                goto LABEL_53;
              if ( *(_DWORD *)(v22 + 28) == 1 )
              {
LABEL_32:
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
                                        *(_DWORD *)(v13 + 16),
                                        (const MethodInfo_355B444 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
          if ( Instance )
          {
            v29 = Instance->fields.m_CancellationTokenSource;
            v30 = Instance;
            if ( (int)v29 >= 1 )
            {
              LOBYTE(max_length) = 0;
              v31 = 0;
              while ( 1 )
              {
                if ( v31 >= (unsigned int)v29 )
                  sub_1CE6960(Instance);
                v32 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v30->fields._DispLog + v31);
                if ( v19 < 0 )
                {
                  if ( !v32 )
                    goto LABEL_53;
                }
                else
                {
                  if ( !v32 )
                    goto LABEL_53;
                  if ( v19 != v32->fields.id )
                    goto LABEL_49;
                }
                if ( v32->fields.type == 1 )
                {
                  targetVals = v32->fields.targetVals;
                  if ( targetVals )
                  {
                    if ( targetVals->max_length )
                    {
                      if ( !Entity )
                        goto LABEL_53;
                      Individuality = ServantEntity__getIndividuality(
                                        (ServantEntity_o *)Entity,
                                        limitCount,
                                        dispLimitCount,
                                        0);
                      Instance = (DataManager_o *)RestrictionSlotDetailEntity__IsIndividuality(v32, Individuality, 0);
                      if ( ((unsigned __int8)Instance & 1) != 0 )
                        goto LABEL_51;
                      LOBYTE(max_length) = 1;
                    }
                  }
                }
LABEL_49:
                LODWORD(v29) = v30->fields.m_CancellationTokenSource;
                if ( (__int64)++v31 >= (int)v29 )
                  return max_length;
              }
            }
            goto LABEL_51;
          }
        }
      }
    }
LABEL_53:
    sub_1CE6958(Instance, v15);
  }
  if ( isChkSupport && !QuestRestrictionInfo__GetGrandServantRestrictionEntity(this, *(_DWORD *)(v13 + 16), v17) )
    goto LABEL_51;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v24 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v24,
    (Il2CppObject *)v13,
    Method_QuestRestrictionInfo___c__DisplayClass187_0__IsRestrictionServantIndividuality_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_53;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                myServantOrNpcRestrictionEntityList,
                                (System_Predicate_T__o *)v24,
                                (const MethodInfo_39065D0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !Instance )
    goto LABEL_51;
  datalist = Instance->fields.datalist;
  v26 = (Il2CppObject *)Instance;
  if ( !datalist )
    goto LABEL_53;
  max_length = datalist->max_length;
  if ( max_length )
  {
    Instance = (DataManager_o *)this->fields.grandServantRestrictionEntityList;
    if ( !Instance )
      goto LABEL_53;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___Contains(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v26,
                                  (const MethodInfo_39062F8 *)Method_System_Collections_Generic_List_RestrictionEntity__Contains__);
    if ( ((unsigned __int8)Instance & 1) == 0
      || (Instance = (DataManager_o *)RestrictionEntity__IsSearchVals((RestrictionEntity_o *)v26, 0, 0),
          LOBYTE(max_length) = 0,
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( !Entity )
        goto LABEL_53;
      v28 = ServantEntity__getIndividuality((ServantEntity_o *)Entity, limitCount, dispLimitCount, 0);
      if ( RestrictionEntity__IsRestriction_43732316((RestrictionEntity_o *)v26, v28, 0) )
      {
        LOBYTE(max_length) = 1;
        return max_length;
      }
LABEL_51:
      LOBYTE(max_length) = 0;
    }
  }
  return max_length;
}


bool QuestRestrictionInfo__IsRestrictionServantIndividuality_44576008(
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

  if ( (byte_4E05DA5 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__Contains__);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1CE6700(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass188_0__IsRestrictionServantIndividuality_b__0__);
    sub_1CE6700(&QuestRestrictionInfo___c__DisplayClass188_0_TypeInfo);
    byte_4E05DA5 = 1;
  }
  v7 = sub_1CE694C(QuestRestrictionInfo___c__DisplayClass188_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_29;
  *(_DWORD *)(v7 + 16) = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_44572848(this, pos, v10) )
    goto LABEL_27;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v7 + 16),
                                        (const MethodInfo_355B444 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
          sub_1CE6960(restrictionSlotDetailDictionary);
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
      sub_1CE6958(restrictionSlotDetailDictionary, v9);
    }
    goto LABEL_27;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v17 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_RestrictionEntity__TypeInfo);
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
                                      (const MethodInfo_39065D0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
            (const MethodInfo_39062F8 *)Method_System_Collections_Generic_List_RestrictionEntity__Contains__) )
      return RestrictionEntity__IsRestriction_43732316(v19, individuality, 0);
    IsSearchVals = RestrictionEntity__IsSearchVals(v19, 0, 0);
    LOBYTE(v14) = 0;
    if ( !IsSearchVals )
      return RestrictionEntity__IsRestriction_43732316(v19, individuality, 0);
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
  return QuestRestrictionInfo__IsRestrictionSlot_44553368(this, ServantIndividuality, initPos, v14);
}


bool QuestRestrictionInfo__IsRestrictionSlot_44553368(
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
  if ( (byte_4E05D80 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Any_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1CE6700(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    byte_4E05D80 = 1;
  }
  v7 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v6->fields.slotInfos;
    if ( !slotInfos )
LABEL_27:
      sub_1CE6958(this, svtIndividuality);
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
                                         (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_int____get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->fields.dialogMessageInfoDictionary )
      {
        v12 = System_Linq_Enumerable__Intersect_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this,
                (System_Collections_Generic_IEnumerable_TSource__o *)svtIndividuality,
                (const MethodInfo_322DD48 *)Method_System_Linq_Enumerable_Intersect_int___);
        this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_int_(
                                           v12,
                                           (const MethodInfo_3243710 *)Method_System_Linq_Enumerable_ToArray_int___);
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
                                           (const MethodInfo_38EB480 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
        if ( (_DWORD)this == 1 )
        {
          this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                             (const MethodInfo_320FB50 *)Method_System_Linq_Enumerable_Any_int___);
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
                                             (const MethodInfo_38EB480 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)this == 2 )
          {
            this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                               (const MethodInfo_320FB50 *)Method_System_Linq_Enumerable_Any_int___);
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
    sub_1CE6960(this);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsRestriction_44552640(
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

  if ( (byte_4E05D7E & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Array_Empty_int___);
    byte_4E05D7E = 1;
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
      sub_1CBC7E4(Method_System_Array_Empty_int___);
      v21 = v20[7];
    }
    v22 = *(_QWORD *)(v21 + 16);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1CBC788(inited);
    if ( !*(_DWORD *)(v22 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v22);
    v23 = *(_QWORD *)(v20[7] + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1CBC788(inited);
    ServantIndividuality = **(System_Int32_array ***)(v23 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_44552900(this, &isWhole, ServantIndividuality, rarity, lv, targetType, v17);
}


bool QuestRestrictionInfo__IsRestriction_44552900(
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
      sub_1CE6958(this, isWhole);
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
      return 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
LABEL_29:
        sub_1CE6960(this);
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
          this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction_43732316(v18, svtIndividuality, 0);
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


bool QuestRestrictionInfo__IsRestriction_44553872(
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

  if ( (byte_4E05D7F & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Array_Empty_int___);
    byte_4E05D7F = 1;
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
      sub_1CBC7E4(Method_System_Array_Empty_int___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1CBC788(inited);
    if ( !*(_DWORD *)(v26 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v26);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1CBC788(inited);
    ServantIndividuality = **(System_Int32_array ***)(v27 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_44554152(
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
bool QuestRestrictionInfo__IsRestriction_44554152(
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

  if ( QuestRestrictionInfo__IsRestriction_44552900(
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
    return QuestRestrictionInfo__IsRestrictionSlot_44553368(this, svtIndividuality, initPos, v11);
  return 0;
}


bool QuestRestrictionInfo__IsSelectableNormalSupport(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x21
  _BOOL8 IsMyServantOrNpcRestriction_44572848; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v10; // w9
  QuestRestrictionInfo_SlotInfo_o *v11; // x8
  bool v12; // zf
  Il2CppObject *v13; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_4E05DA2 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1CE6700(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass185_0__IsSelectableNormalSupport_b__0__);
    sub_1CE6700(&QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo);
    byte_4E05DA2 = 1;
  }
  v5 = sub_1CE694C(QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_DWORD *)(v5 + 16) = pos;
  IsMyServantOrNpcRestriction_44572848 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_44572848(this, pos, v8);
  if ( !IsMyServantOrNpcRestriction_44572848 )
  {
    LOBYTE(v13) = 0;
    return (char)v13;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    v15 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_RestrictionEntity__TypeInfo);
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
              (const MethodInfo_39065D0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v13 )
        return (char)v13;
      v12 = ((__int64)v13[2].klass & 0xFFFFFFF7) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_1CE6958(IsMyServantOrNpcRestriction_44572848, v7);
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v10 = *(_DWORD *)(v5 + 16) - 1;
  if ( (unsigned int)v10 >= LODWORD(slotInfos->max_length) )
    sub_1CE6960(IsMyServantOrNpcRestriction_44572848);
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
  void *IsMyServantOrNpcRestriction_44572848; // x0
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

  if ( (byte_4E05D9D & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    byte_4E05D9D = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  IsMyServantOrNpcRestriction_44572848 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    IsMyServantOrNpcRestriction_44572848 = BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    p_myServantNumMax = (int32_t *)(*((_QWORD *)IsMyServantOrNpcRestriction_44572848 + 23) + 172LL);
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
  IsMyServantOrNpcRestriction_44572848 = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_44572848(
                                                   this,
                                                   pos,
                                                   *(const MethodInfo **)&pos);
  if ( ((unsigned __int8)IsMyServantOrNpcRestriction_44572848 & 1) != 0 )
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
            sub_1CE6960(IsMyServantOrNpcRestriction_44572848);
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
    sub_1CE6958(IsMyServantOrNpcRestriction_44572848, *(_QWORD *)&svtId);
  }
  IsMyServantOrNpcRestriction_44572848 = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                           this,
                                           *(const MethodInfo **)&svtId);
  if ( !IsMyServantOrNpcRestriction_44572848 )
    goto LABEL_44;
  v13 = *((_DWORD *)IsMyServantOrNpcRestriction_44572848 + 6);
  if ( v13 < 1 )
    return 1;
  v14 = 0;
  v15 = -v13;
  do
  {
    if ( !(v15 + v14) )
      goto LABEL_43;
    v16 = *((_DWORD *)IsMyServantOrNpcRestriction_44572848 + v14 + 8);
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
  if ( (byte_4E05DB1 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1CE6700(&BalanceConfig_TypeInfo);
    byte_4E05DB1 = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( slotInfos )
  {
    if ( (unsigned int)(initPos - 1) >= LODWORD(slotInfos->max_length) )
      sub_1CE6960(this);
    v8 = slotInfos->m_Items[initPos - 1];
    if ( !v8 )
      sub_1CE6958(this, *(_QWORD *)&pos);
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

  if ( (byte_4E05DB8 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Any_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1CE6700(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E05DB8 = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       svtId,
                                       (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
          sub_1CE6960(Instance);
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
                                               (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_int____get_Item__);
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
                       (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_int____get_Item__);
              v19 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)Item,
                      v13,
                      (const MethodInfo_322DD48 *)Method_System_Linq_Enumerable_Intersect_int___);
              Instance = System_Linq_Enumerable__ToArray_int_(
                           v19,
                           (const MethodInfo_3243710 *)Method_System_Linq_Enumerable_ToArray_int___);
              if ( !v16->fields.rangeTypeList )
                goto LABEL_33;
              v20 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              if ( System_Collections_Generic_List_Int32Enum___get_Item(
                     (System_Collections_Generic_List_T__o *)v16->fields.rangeTypeList,
                     v17,
                     (const MethodInfo_38EB480 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
              {
                if ( System_Linq_Enumerable__Any_int_(
                       v20,
                       (const MethodInfo_320FB50 *)Method_System_Linq_Enumerable_Any_int___) )
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
                       (const MethodInfo_38EB480 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 2
                  && !System_Linq_Enumerable__Any_int_(
                        v20,
                        (const MethodInfo_320FB50 *)Method_System_Linq_Enumerable_Any_int___) )
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
      sub_1CE6958(Instance, v10);
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


bool QuestRestrictionInfo__IsUniqueIndividuality_44556952(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        FollowerInfo_o *npcFollowerInfo,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  Il2CppObject *v12; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *IsNpc; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x8
  System_Int32_array *NpcServantIndividuality; // x0
  bool IsOverwriteIndividuality; // w0
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x19
  struct System_Int32_array *uniqueIndividualitys; // x9
  il2cpp_array_size_t max_length; // x8
  BalanceConfig_c **v21; // x24
  const MethodInfo_34EBA58 **v22; // x26
  const MethodInfo_3220A90 **v23; // x20
  unsigned __int64 v24; // x10
  int32_t v25; // w27
  const MethodInfo *v26; // x2
  __int64 i; // x25
  unsigned __int64 v28; // x19
  struct FollowerInfo_array *deckNpcInfoList; // x8
  __int64 v30; // x8
  struct FollowerInfo_array *v31; // x8
  FollowerInfo_o *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OverwriteIndividuality; // x0
  struct FollowerInfo_array *v34; // x8
  int32_t v35; // w21
  const MethodInfo_3220A90 **v36; // x27
  Il2CppObject *v37; // x20
  BalanceConfig_c **v38; // x23
  Il2CppObject *v39; // x24
  const MethodInfo_34EBA58 **v40; // x22
  ServantLeaderInfo_o *v41; // x28
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x26
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x29
  int32_t v44; // w0
  Il2CppObject *v45; // x0
  int32_t v46; // w29
  ServantEntity_o *v47; // x26
  int32_t DispLimitCountStage; // w0
  struct QuestRestrictionInfo_DeckSvtInfo_array *deckSvtInfoList; // x8
  QuestRestrictionInfo_DeckSvtInfo_o *v50; // x0
  int32_t v52; // [xsp+0h] [xbp-B0h]
  int32_t v53; // [xsp+4h] [xbp-ACh]
  ServantEntity_o *v54; // [xsp+8h] [xbp-A8h]
  struct System_Int32_array *v55; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-98h]
  unsigned __int64 v57; // [xsp+20h] [xbp-90h]
  QuestRestrictionInfo_o *v58; // [xsp+28h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // [xsp+30h] [xbp-80h]
  Il2CppObject *v60; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v61; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4E05D87 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1CE6700(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05D87 = 1;
  }
  v61 = 0;
  entity = 0;
  v60 = 0;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_68;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo )
    goto LABEL_20;
  IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)FollowerInfo__get_IsNpc(npcFollowerInfo, 0);
  v15 = 0;
  if ( ((unsigned __int8)IsNpc & 1) == 0 )
    goto LABEL_21;
  if ( !v12 )
    goto LABEL_71;
  IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                                                          &entity,
                                                          npcFollowerInfo->fields.npcFollowerSvtId,
                                                          (const MethodInfo_34EBA58 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)IsNpc & 1) != 0 )
  {
    NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(npcFollowerInfo, 0, 0, 0);
LABEL_19:
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantIndividuality;
    goto LABEL_21;
  }
  if ( !Master_object )
    goto LABEL_71;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &v61,
         npcFollowerInfo->fields.npcFollowerSvtId,
         (const MethodInfo_34EBA58 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
  {
    IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)v61;
    if ( !v61 )
      goto LABEL_71;
    IsOverwriteIndividuality = NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v61, 0);
    v15 = 0;
    if ( IsOverwriteIndividuality )
    {
      IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)v61;
      if ( !v61 )
        goto LABEL_71;
      NpcServantIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                  (NpcServantFollowerEntity_o *)v61,
                                  0);
      goto LABEL_19;
    }
  }
  else
  {
LABEL_20:
    v15 = 0;
  }
LABEL_21:
  source = v15;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !IsNpc
    || (v18 = IsNpc,
        IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                IsNpc,
                                                                svtId,
                                                                (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0) )
  {
LABEL_71:
    sub_1CE6958(IsNpc, v14);
  }
  max_length = uniqueIndividualitys->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_68:
    LOBYTE(IsNpc) = 0;
    return (char)IsNpc;
  }
  v54 = (ServantEntity_o *)IsNpc;
  v59 = v18;
  v52 = limitCount;
  v53 = dispLimitCount;
  v21 = &BalanceConfig_TypeInfo;
  v22 = (const MethodInfo_34EBA58 **)&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__;
  v23 = (const MethodInfo_3220A90 **)&Method_System_Linq_Enumerable_Contains_int___;
  v24 = 0;
  v55 = this->fields.uniqueIndividualitys;
  v58 = this;
  while ( 1 )
  {
    if ( v24 >= (unsigned int)max_length )
LABEL_72:
      sub_1CE6960(IsNpc);
    v25 = uniqueIndividualitys->m_Items[v24];
    v57 = v24;
    if ( !source )
      break;
    if ( System_Linq_Enumerable__Contains_int_(source, v25, *v23) )
      goto LABEL_33;
LABEL_66:
    uniqueIndividualitys = v55;
    IsNpc = 0;
    LODWORD(max_length) = v55->max_length;
    v24 = v57 + 1;
    if ( (__int64)(v57 + 1) >= (int)max_length )
      return (char)IsNpc;
  }
  IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)v54;
  if ( !v54 )
    goto LABEL_71;
  if ( !ServantEntity__IsIndividuality(v54, v52, v53, v25, 0) )
    goto LABEL_66;
LABEL_33:
  for ( i = 4; ; ++i )
  {
    IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)*v21;
    v28 = i - 4;
    if ( !(*v21)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(IsNpc);
      IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)*v21;
    }
    if ( (__int64)v28 >= SHIDWORD(IsNpc[2].fields.list[3].klass) )
      goto LABEL_66;
    deckNpcInfoList = this->fields.deckNpcInfoList;
    if ( !deckNpcInfoList )
      goto LABEL_71;
    if ( v28 >= LODWORD(deckNpcInfoList->max_length) )
      goto LABEL_72;
    v30 = *((_QWORD *)&deckNpcInfoList->obj.klass + i);
    if ( v30 )
    {
      if ( !v12 )
        goto LABEL_71;
      IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                                                              &entity,
                                                              *(_QWORD *)(v30 + 88),
                                                              *v22);
      v31 = this->fields.deckNpcInfoList;
      if ( !v31 )
        goto LABEL_71;
      if ( v28 >= LODWORD(v31->max_length) )
        goto LABEL_72;
      v32 = (FollowerInfo_o *)*((_QWORD *)&v31->obj.klass + i);
      if ( !v32 )
        goto LABEL_71;
      if ( ((unsigned __int8)IsNpc & 1) != 0 )
      {
        OverwriteIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)FollowerInfo__GetNpcServantIndividuality(
                                                                                        v32,
                                                                                        0,
                                                                                        0,
                                                                                        0);
      }
      else
      {
        if ( !Master_object )
          goto LABEL_71;
        IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                &v60,
                                                                v32->fields.npcFollowerSvtId,
                                                                (const MethodInfo_34EBA58 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)IsNpc & 1) == 0 )
          goto LABEL_52;
        IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)v60;
        if ( !v60 )
          goto LABEL_71;
        IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)NpcServantFollowerEntity__IsOverwriteIndividuality(
                                                                (NpcServantFollowerEntity_o *)v60,
                                                                0);
        if ( ((unsigned __int8)IsNpc & 1) != 0 )
        {
          IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)v60;
          if ( !v60 )
            goto LABEL_71;
          OverwriteIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantFollowerEntity__GetOverwriteIndividuality(
                                                                                          (NpcServantFollowerEntity_o *)v60,
                                                                                          0);
        }
        else
        {
LABEL_52:
          v34 = this->fields.deckNpcInfoList;
          if ( !v34 )
            goto LABEL_71;
          if ( v28 >= LODWORD(v34->max_length) )
            goto LABEL_72;
          IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)*((_QWORD *)&v34->obj.klass + i);
          if ( !IsNpc )
            goto LABEL_71;
          v35 = v25;
          v36 = v23;
          v37 = v12;
          v38 = v21;
          v39 = Master_object;
          v40 = v22;
          IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)FollowerInfo__getServantLeaderInfo(
                                                                  (FollowerInfo_o *)IsNpc,
                                                                  0,
                                                                  0,
                                                                  0);
          if ( !IsNpc )
            goto LABEL_71;
          v41 = (ServantLeaderInfo_o *)IsNpc;
          lookup = IsNpc->fields._lookup;
          seriazlier = IsNpc->fields.seriazlier;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v63.fields.currentCryptoKey = lookup;
          *(_QWORD *)&v63.fields.fakeValue = seriazlier;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v63, 0);
          v45 = DataMasterBase_object__object__int___GetEntity(
                  v59,
                  v44,
                  (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v46 = v41->fields.limitCount;
          v47 = (ServantEntity_o *)v45;
          DispLimitCountStage = ServantLeaderInfo__get_DispLimitCountStage(v41, 0);
          IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                                                  DispLimitCountStage,
                                                                  0);
          if ( !v47 )
            goto LABEL_71;
          OverwriteIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                          v47,
                                                                                          v46,
                                                                                          (int32_t)IsNpc,
                                                                                          0);
          v22 = v40;
          Master_object = v39;
          v21 = v38;
          v12 = v37;
          v23 = v36;
          v25 = v35;
          this = v58;
        }
      }
      IsNpc = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Contains_int_(
                                                              OverwriteIndividuality,
                                                              v25,
                                                              *v23);
      if ( ((unsigned __int8)IsNpc & 1) != 0 )
        break;
    }
    deckSvtInfoList = this->fields.deckSvtInfoList;
    if ( !deckSvtInfoList )
      goto LABEL_71;
    if ( v28 >= LODWORD(deckSvtInfoList->max_length) )
      goto LABEL_72;
    v50 = (QuestRestrictionInfo_DeckSvtInfo_o *)*((_QWORD *)&deckSvtInfoList->obj.klass + i);
    if ( v50 )
    {
      if ( QuestRestrictionInfo_DeckSvtInfo__IsIndividuality(v50, v25, v26) )
        break;
    }
  }
  LOBYTE(IsNpc) = 1;
  return (char)IsNpc;
}


bool QuestRestrictionInfo__IsUniqueIndividuality_44558264(
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
  Il2CppObject *v17; // x25
  void *IsNpc; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x8
  System_Int32_array *NpcServantIndividuality; // x0
  bool IsOverwriteIndividuality; // w0
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  struct System_Int32_array *uniqueIndividualitys; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v26; // x26
  int32_t v27; // w29
  int32_t i; // w22
  FollowerInfo_o *v29; // x23
  PartyOrganizationListViewItem_o *v30; // x28
  System_Collections_Generic_IEnumerable_TSource__o *OverwriteIndividuality; // x0
  ServantEntity_o *ServantEntity_k__BackingField; // x23
  int32_t svtLimitCount; // w27
  int32_t DispLimitCountStageSealAfterIndexZero; // w0
  ServantLeaderInfo_o *v35; // x23
  __int64 v36; // x27
  __int64 v37; // x28
  int32_t v38; // w0
  Il2CppObject *v39; // x0
  int32_t v40; // w28
  ServantEntity_o *v41; // x27
  int32_t DispLimitCountStage; // w0
  int32_t v44; // [xsp+8h] [xbp-A8h]
  ServantEntity_o *v45; // [xsp+10h] [xbp-A0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v46; // [xsp+18h] [xbp-98h]
  struct System_Int32_array *v47; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+30h] [xbp-80h]
  Il2CppObject *v50; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v51; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4E05D88 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1CE6700(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05D88 = 1;
  }
  v51 = 0;
  entity = 0;
  v50 = 0;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_64;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v17 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo )
    goto LABEL_20;
  IsNpc = (void *)FollowerInfo__get_IsNpc(npcFollowerInfo, 0);
  v20 = 0;
  if ( ((unsigned __int8)IsNpc & 1) == 0 )
    goto LABEL_21;
  if ( !v17 )
    goto LABEL_67;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
         &entity,
         npcFollowerInfo->fields.npcFollowerSvtId,
         (const MethodInfo_34EBA58 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(npcFollowerInfo, 0, 0, 0);
LABEL_13:
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantIndividuality;
    goto LABEL_21;
  }
  IsNpc = Master_object;
  if ( !Master_object )
    goto LABEL_67;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         Master_object,
         &v51,
         npcFollowerInfo->fields.npcFollowerSvtId,
         (const MethodInfo_34EBA58 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
  {
    IsNpc = v51;
    if ( !v51 )
      goto LABEL_67;
    IsOverwriteIndividuality = NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v51, 0);
    v20 = 0;
    if ( IsOverwriteIndividuality )
    {
      IsNpc = v51;
      if ( !v51 )
        goto LABEL_67;
      NpcServantIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                  (NpcServantFollowerEntity_o *)v51,
                                  0);
      goto LABEL_13;
    }
  }
  else
  {
LABEL_20:
    v20 = 0;
  }
LABEL_21:
  source = v20;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNpc = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !IsNpc
    || (v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNpc,
        IsNpc = DataMasterBase_object__object__int___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)IsNpc,
                  svtId,
                  (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0) )
  {
LABEL_67:
    sub_1CE6958(IsNpc, v19);
  }
  max_length = uniqueIndividualitys->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_64:
    LOBYTE(IsNpc) = 0;
    return (char)IsNpc;
  }
  v45 = (ServantEntity_o *)IsNpc;
  v46 = v23;
  v44 = limitCount;
  v26 = 0;
  v47 = this->fields.uniqueIndividualitys;
  while ( 1 )
  {
    if ( v26 >= (unsigned int)max_length )
      sub_1CE6960(IsNpc);
    v27 = uniqueIndividualitys->m_Items[v26];
    if ( source )
    {
      if ( System_Linq_Enumerable__Contains_int_(
             source,
             v27,
             (const MethodInfo_3220A90 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        break;
      }
      goto LABEL_62;
    }
    IsNpc = v45;
    if ( !v45 )
      goto LABEL_67;
    if ( ServantEntity__IsIndividuality(v45, v44, dispLimitCount, v27, 0) )
      break;
LABEL_62:
    uniqueIndividualitys = v47;
    ++v26;
    IsNpc = 0;
    LODWORD(max_length) = v47->max_length;
    if ( (__int64)v26 >= (int)max_length )
      return (char)IsNpc;
  }
  for ( i = 0; ; ++i )
  {
    IsNpc = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsNpc = BalanceConfig_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*((_QWORD *)IsNpc + 23) + 172LL) )
      goto LABEL_62;
    if ( num != i && partyIndex != i )
      break;
LABEL_61:
    ;
  }
  if ( !partyItem )
    goto LABEL_67;
  IsNpc = PartyListViewItem__GetMember(partyItem, i, 0);
  if ( !IsNpc )
    goto LABEL_67;
  v29 = (FollowerInfo_o *)*((_QWORD *)IsNpc + 16);
  v30 = (PartyOrganizationListViewItem_o *)IsNpc;
  if ( v29 )
  {
    IsNpc = (void *)FollowerInfo__get_IsNpc(*((FollowerInfo_o **)IsNpc + 16), 0);
    if ( ((unsigned __int8)IsNpc & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_67;
      if ( DataMasterBase_object__object__long___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
             &entity,
             v29->fields.npcFollowerSvtId,
             (const MethodInfo_34EBA58 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
      {
        OverwriteIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)FollowerInfo__GetNpcServantIndividuality(
                                                                                        v29,
                                                                                        0,
                                                                                        0,
                                                                                        0);
      }
      else
      {
        IsNpc = Master_object;
        if ( !Master_object )
          goto LABEL_67;
        if ( !DataMasterBase_object__object__long___TryGetEntity(
                Master_object,
                &v50,
                v29->fields.npcFollowerSvtId,
                (const MethodInfo_34EBA58 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
          goto LABEL_55;
        IsNpc = v50;
        if ( !v50 )
          goto LABEL_67;
        if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v50, 0) )
        {
          IsNpc = v50;
          if ( !v50 )
            goto LABEL_67;
          OverwriteIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantFollowerEntity__GetOverwriteIndividuality(
                                                                                          (NpcServantFollowerEntity_o *)v50,
                                                                                          0);
        }
        else
        {
LABEL_55:
          IsNpc = FollowerInfo__getServantLeaderInfo(v29, 0, 0, 0);
          if ( !IsNpc )
            goto LABEL_67;
          v35 = (ServantLeaderInfo_o *)IsNpc;
          v37 = *((_QWORD *)IsNpc + 6);
          v36 = *((_QWORD *)IsNpc + 7);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v53.fields.currentCryptoKey = v37;
          *(_QWORD *)&v53.fields.fakeValue = v36;
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v53, 0);
          v39 = DataMasterBase_object__object__int___GetEntity(
                  v46,
                  v38,
                  (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v40 = v35->fields.limitCount;
          v41 = (ServantEntity_o *)v39;
          DispLimitCountStage = ServantLeaderInfo__get_DispLimitCountStage(v35, 0);
          IsNpc = (void *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
          if ( !v41 )
            goto LABEL_67;
          OverwriteIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                          v41,
                                                                                          v40,
                                                                                          (int32_t)IsNpc,
                                                                                          0);
        }
      }
      if ( System_Linq_Enumerable__Contains_int_(
             OverwriteIndividuality,
             v27,
             (const MethodInfo_3220A90 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        goto LABEL_66;
      }
      goto LABEL_61;
    }
  }
  ServantEntity_k__BackingField = v30->fields._ServantEntity_k__BackingField;
  if ( !ServantEntity_k__BackingField )
    goto LABEL_61;
  svtLimitCount = v30->fields.svtLimitCount;
  DispLimitCountStageSealAfterIndexZero = PartyOrganizationListViewItem__GetDispLimitCountStageSealAfterIndexZero(
                                            v30,
                                            0);
  if ( !ServantEntity__IsIndividuality(
          ServantEntity_k__BackingField,
          svtLimitCount,
          DispLimitCountStageSealAfterIndexZero,
          v27,
          0) )
    goto LABEL_61;
LABEL_66:
  LOBYTE(IsNpc) = 1;
  return (char)IsNpc;
}


bool QuestRestrictionInfo__IsUniqueServant(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsUniqueServant_44556376(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  bool v5; // w21
  signed __int64 v6; // x22
  BalanceConfig_c *v7; // x0
  signed __int64 DeckMemberMax; // x8
  struct QuestRestrictionInfo_DeckSvtInfo_array *deckSvtInfoList; // x8
  QuestRestrictionInfo_DeckSvtInfo_o *v10; // x8
  int32_t baseSvtId; // w1
  System_Nullable_int__o v12; // x0
  QuestRestrictionInfo_DeckSvtInfo_o *v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4E05D85 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1CE6700(&Method_System_Nullable_int___ctor__);
    sub_1CE6700(&Method_System_Nullable_int__get_HasValue__);
    byte_4E05D85 = 1;
  }
  if ( !this->fields.isUniqueServant )
    return 0;
  v5 = 0;
  if ( svtId >= 1 && this->fields.deckSvtInfoList )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v7 = BalanceConfig_TypeInfo;
      }
      DeckMemberMax = v7->static_fields->DeckMemberMax;
      v5 = v6 < DeckMemberMax;
      if ( v6 >= DeckMemberMax )
        break;
      deckSvtInfoList = this->fields.deckSvtInfoList;
      if ( !deckSvtInfoList )
        sub_1CE6958(v7, *(_QWORD *)&svtId);
      if ( v6 >= (unsigned __int64)LODWORD(deckSvtInfoList->max_length) )
        sub_1CE6960(v7);
      v10 = deckSvtInfoList->m_Items[v6];
      if ( v10 )
      {
        baseSvtId = v10->fields.baseSvtId;
        v12 = (System_Nullable_int__o)&v14;
        v14 = 0;
        System_Nullable_int____ctor(v12, baseSvtId, (const MethodInfo_3A2DE74 *)Method_System_Nullable_int___ctor__);
        v10 = v14;
      }
      ++v6;
      if ( (_BYTE)v10 )
      {
        if ( HIDWORD(v10) == svtId )
          break;
      }
    }
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsUniqueServant_44556700(
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

  if ( (byte_4E05D86 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    byte_4E05D86 = 1;
  }
  if ( !this->fields.isUniqueServant )
    return 0;
  v11 = 0;
  if ( svtId >= 1 && this->fields.deckSvtInfoList )
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
          sub_1CE6958(Member, *(_QWORD *)&svtId);
        if ( PartyOrganizationListViewItem__get_BaseServantId(Member, 0) == svtId )
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

  if ( (byte_4E05DBE & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    byte_4E05DBE = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_11:
    sub_1CE6958(Master_object, v4);
  return QuestPhaseEntity__IsWaveSetupSwitchParty(entity, 0);
}


void QuestRestrictionInfo__ResetDeckInfo(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct QuestRestrictionInfo_DeckSvtInfo_array *v4; // x0
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

  if ( (byte_4E05D75 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&QuestRestrictionInfo_DeckSvtInfo___TypeInfo);
    sub_1CE6700(&FollowerInfo___TypeInfo);
    byte_4E05D75 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct QuestRestrictionInfo_DeckSvtInfo_array *)sub_1CE67A8(
                                                          QuestRestrictionInfo_DeckSvtInfo___TypeInfo,
                                                          (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.deckSvtInfoList = v4;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.deckSvtInfoList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct FollowerInfo_array *)sub_1CE67A8(
                                       FollowerInfo___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
  this->fields.deckNpcInfoList = v11;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.deckNpcInfoList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, v18);
}


void QuestRestrictionInfo__SetDeckInfo(
        QuestRestrictionInfo_o *this,
        UserDeckEntity_o *userDeckEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  unsigned __int64 v6; // x25
  unsigned __int64 v7; // x22
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x27
  __int64 NpcFollowerServantId; // x0
  struct QuestRestrictionInfo_DeckSvtInfo_array *deckSvtInfoList; // x8
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
  UserServantEntity_o *v30; // x24
  unsigned int *v31; // x29
  QuestRestrictionInfo_DeckSvtInfo_o *v32; // x23
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  __int64 v40; // x0

  if ( (byte_4E05D72 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&QuestRestrictionInfo_DeckSvtInfo_TypeInfo);
    byte_4E05D72 = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtInfoList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v6 = 0;
    v7 = 0;
    v15 = 8LL * (unsigned int)UserDeckEntity__GetFollowerIndex(userDeckEntity, 0) - 8;
    while ( 1 )
    {
      NpcFollowerServantId = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        NpcFollowerServantId = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v7 >= *(int *)(*(_QWORD *)(NpcFollowerServantId + 184) + 172LL) )
        break;
      deckSvtInfoList = this->fields.deckSvtInfoList;
      if ( !deckSvtInfoList )
        goto LABEL_37;
      if ( v7 >= LODWORD(deckSvtInfoList->max_length) )
LABEL_36:
        sub_1CE6960(NpcFollowerServantId);
      deckSvtInfoList->m_Items[v6 / 8] = 0;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&deckSvtInfoList->m_Items[v6 / 8], 0, v9, v10, v11, v12, v13, v14);
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList )
      {
        max_length_low = LODWORD(deckNpcInfoList->max_length);
        if ( (__int64)v7 < (int)max_length_low )
        {
          if ( v7 >= max_length_low )
            goto LABEL_36;
          deckNpcInfoList->m_Items[v6 / 8] = 0;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)&deckNpcInfoList->m_Items[v6 / 8], 0, v9, v10, v11, v12, v13, v14);
        }
      }
      if ( v15 != v6 )
      {
        v20 = this->fields.deckNpcInfoList;
        if ( v20 )
        {
          if ( (__int64)v7 < SLODWORD(v20->max_length) )
          {
            NpcFollowerServantId = UserDeckEntity__GetNpcFollowerServantId(userDeckEntity, v7, 0);
            if ( NpcFollowerServantId >= 1 )
            {
              if ( !Master_object
                || (NpcFollowerServantId = (__int64)NpcFollowerMaster__GetEntity_43572680(
                                                      (NpcFollowerMaster_o *)Master_object,
                                                      this->fields.questId,
                                                      this->fields.questPhase,
                                                      NpcFollowerServantId,
                                                      0)) == 0
                || (v21 = (unsigned int *)this->fields.deckNpcInfoList,
                    NpcFollowerServantId = (__int64)NpcFollowerMaster__GetFollower(
                                                      (NpcFollowerMaster_o *)Master_object,
                                                      this->fields.questId,
                                                      this->fields.questPhase,
                                                      *(_QWORD *)(NpcFollowerServantId + 16),
                                                      0),
                    !v21) )
              {
LABEL_37:
                sub_1CE6958(NpcFollowerServantId, v8);
              }
              v28 = NpcFollowerServantId;
              if ( NpcFollowerServantId )
              {
                NpcFollowerServantId = sub_1CE683C(NpcFollowerServantId, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
                if ( !NpcFollowerServantId )
                {
LABEL_38:
                  v40 = sub_1CE697C(NpcFollowerServantId);
                  sub_1CE6828(v40, 0);
                }
              }
              if ( v7 >= v21[6] )
                goto LABEL_36;
              *(_QWORD *)&v21[v6 / 4 + 8] = v28;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v21[v6 / 4 + 8], v28, v22, v23, v24, v25, v26, v27);
            }
          }
        }
        UserServant = UserDeckEntity__GetUserServant(userDeckEntity, v7, 0);
        if ( UserServant )
        {
          v30 = UserServant;
          v31 = (unsigned int *)this->fields.deckSvtInfoList;
          v32 = (QuestRestrictionInfo_DeckSvtInfo_o *)sub_1CE694C(QuestRestrictionInfo_DeckSvtInfo_TypeInfo);
          QuestRestrictionInfo_DeckSvtInfo___ctor(v32, v30, this, v33);
          if ( !v31 )
            goto LABEL_37;
          if ( v32 )
          {
            NpcFollowerServantId = sub_1CE683C(v32, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
            if ( !NpcFollowerServantId )
              goto LABEL_38;
          }
          if ( v7 >= v31[6] )
            goto LABEL_36;
          *(_QWORD *)&v31[v6 / 4 + 8] = v32;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v31[v6 / 4 + 8], (int32_t)v32, v34, v35, v36, v37, v38, v39);
        }
      }
      ++v7;
      v6 += 8LL;
    }
  }
}


void QuestRestrictionInfo__SetDeckInfo_44545548(
        QuestRestrictionInfo_o *this,
        UserEventDeckEntity_o *eventDeckEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *fixed; // x0
  System_Collections_Generic_List_int__o *v6; // x21
  unsigned __int64 v7; // x26
  unsigned __int64 v8; // x23
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x29
  __int64 Follower; // x0
  struct QuestRestrictionInfo_DeckSvtInfo_array *deckSvtInfoList; // x8
  struct FollowerInfo_array *deckNpcInfoList; // x8
  struct FollowerInfo_array *v20; // x8
  struct FollowerInfo_array *v21; // x8
  int64_t NpcFollowerServantId; // x0
  int64_t v23; // x3
  NpcFollowerEntity_o *Entity_43572680; // x0
  unsigned int *v25; // x25
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  __int64 v32; // x24
  UserServantEntity_o *UserServant; // x0
  unsigned int *v34; // x28
  UserServantEntity_o *v35; // x25
  QuestRestrictionInfo_DeckSvtInfo_o *v36; // x24
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 v44; // x0
  NpcFollowerMaster_o *Master_object; // [xsp+8h] [xbp-68h]

  if ( (byte_4E05D73 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&QuestRestrictionInfo_DeckSvtInfo_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4E05D73 = 1;
  }
  fixed = QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, (const MethodInfo *)eventDeckEntity);
  if ( eventDeckEntity && this->fields.deckSvtInfoList )
  {
    v6 = fixed;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v7 = 0;
    v8 = 0;
    v16 = 8LL * (unsigned int)UserEventDeckEntity__GetFollowerIndex(eventDeckEntity, 0) - 8;
    while ( 1 )
    {
      Follower = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Follower = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v8 >= *(int *)(*(_QWORD *)(Follower + 184) + 172LL) )
        break;
      deckSvtInfoList = this->fields.deckSvtInfoList;
      if ( !deckSvtInfoList )
        goto LABEL_41;
      if ( v8 >= LODWORD(deckSvtInfoList->max_length) )
        goto LABEL_42;
      deckSvtInfoList->m_Items[v7 / 8] = 0;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&deckSvtInfoList->m_Items[v7 / 8], 0, v10, v11, v12, v13, v14, v15);
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList && (__int64)v8 < SLODWORD(deckNpcInfoList->max_length) )
      {
        if ( !v6 )
          goto LABEL_41;
        Follower = System_Collections_Generic_List_int___Contains(
                     v6,
                     v8,
                     (const MethodInfo_38E92BC *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Follower & 1) == 0 )
        {
          v20 = this->fields.deckNpcInfoList;
          if ( !v20 )
            goto LABEL_41;
          if ( v8 >= LODWORD(v20->max_length) )
LABEL_42:
            sub_1CE6960(Follower);
          v20->m_Items[v7 / 8] = 0;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v20->m_Items[v7 / 8], 0, v10, v11, v12, v13, v14, v15);
        }
      }
      if ( v16 != v7 )
      {
        v21 = this->fields.deckNpcInfoList;
        if ( v21 && (__int64)v8 < SLODWORD(v21->max_length) )
        {
          if ( !v6 )
            goto LABEL_41;
          if ( !System_Collections_Generic_List_int___Contains(
                  v6,
                  v8,
                  (const MethodInfo_38E92BC *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            NpcFollowerServantId = UserEventDeckEntity__GetNpcFollowerServantId(eventDeckEntity, v8, 0);
            if ( NpcFollowerServantId >= 1 )
            {
              v23 = NpcFollowerServantId;
              Follower = (__int64)Master_object;
              if ( !Master_object )
                goto LABEL_41;
              Entity_43572680 = NpcFollowerMaster__GetEntity_43572680(
                                  Master_object,
                                  this->fields.questId,
                                  this->fields.questPhase,
                                  v23,
                                  0);
              if ( Entity_43572680 )
              {
                v25 = (unsigned int *)this->fields.deckNpcInfoList;
                Follower = (__int64)NpcFollowerMaster__GetFollower(
                                      Master_object,
                                      this->fields.questId,
                                      this->fields.questPhase,
                                      Entity_43572680->fields.id,
                                      0);
                if ( !v25 )
                  goto LABEL_41;
                v32 = Follower;
                if ( Follower )
                {
                  Follower = sub_1CE683C(Follower, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
                  if ( !Follower )
                    goto LABEL_43;
                }
                if ( v8 >= v25[6] )
                  goto LABEL_42;
                *(_QWORD *)&v25[v7 / 4 + 8] = v32;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v25[v7 / 4 + 8], v32, v26, v27, v28, v29, v30, v31);
              }
            }
          }
        }
        UserServant = UserEventDeckEntity__GetUserServant(eventDeckEntity, v8, 0);
        if ( UserServant )
        {
          v34 = (unsigned int *)this->fields.deckSvtInfoList;
          v35 = UserServant;
          v36 = (QuestRestrictionInfo_DeckSvtInfo_o *)sub_1CE694C(QuestRestrictionInfo_DeckSvtInfo_TypeInfo);
          QuestRestrictionInfo_DeckSvtInfo___ctor(v36, v35, this, v37);
          if ( !v34 )
LABEL_41:
            sub_1CE6958(Follower, v9);
          if ( v36 )
          {
            Follower = sub_1CE683C(v36, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
            if ( !Follower )
            {
LABEL_43:
              v44 = sub_1CE697C(Follower);
              sub_1CE6828(v44, 0);
            }
          }
          if ( v8 >= v34[6] )
            goto LABEL_42;
          *(_QWORD *)&v34[v7 / 4 + 8] = v36;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v34[v7 / 4 + 8], (int32_t)v36, v38, v39, v40, v41, v42, v43);
        }
      }
      ++v8;
      v7 += 8LL;
    }
  }
}


void QuestRestrictionInfo__SetDeckInfo_44546800(
        QuestRestrictionInfo_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  unsigned __int64 v11; // x28
  unsigned __int64 v12; // x25
  unsigned __int64 v13; // x21
  __int64 v14; // x29
  __int64 Member; // x0
  struct FollowerInfo_array *deckNpcInfoList; // x8
  unsigned __int64 max_length_low; // x9
  struct QuestRestrictionInfo_DeckSvtInfo_array *deckSvtInfoList; // x8
  Il2CppClass **v19; // x0
  GrandQuestFolderBoardItem_o *v20; // x0
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct QuestRestrictionInfo_DeckSvtInfo_array *v28; // x8
  PartyOrganizationListViewItem_o *v29; // x22
  UserServantEntity_o *userServantEntity; // x24
  unsigned int *v31; // x27
  QuestRestrictionInfo_DeckSvtInfo_o *v32; // x23
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  ServantLeaderInfo_o *ServantLeader; // x24
  const MethodInfo *v41; // x2
  struct FollowerInfo_array *v42; // x8
  FollowerInfo_o *followerInfo; // x0
  unsigned int *v44; // x23
  struct FollowerInfo_o *v45; // x22
  __int64 v46; // x0

  if ( (byte_4E05D74 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&QuestRestrictionInfo_DeckSvtInfo_TypeInfo);
    byte_4E05D74 = 1;
  }
  if ( this->fields.deckSvtInfoList )
  {
    v11 = (unsigned int)num;
    v12 = 0;
    v13 = 0;
    v14 = 8LL * (unsigned int)num;
    while ( 1 )
    {
      Member = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Member = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v13 >= *(int *)(*(_QWORD *)(Member + 184) + 172LL) )
        return;
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList )
      {
        max_length_low = LODWORD(deckNpcInfoList->max_length);
        if ( (__int64)v13 < (int)max_length_low )
        {
          if ( v13 >= max_length_low )
            goto LABEL_42;
          deckNpcInfoList->m_Items[v12 / 8] = 0;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&deckNpcInfoList->m_Items[v12 / 8],
            0,
            num,
            (int32_t)method,
            v4,
            v5,
            v6,
            v7);
        }
      }
      if ( v14 == v12 )
      {
        deckSvtInfoList = this->fields.deckSvtInfoList;
        if ( !deckSvtInfoList )
          goto LABEL_41;
        if ( LODWORD(deckSvtInfoList->max_length) <= v11 )
LABEL_42:
          sub_1CE6960(Member);
        v19 = &deckSvtInfoList->obj.klass + v11;
        v19[4] = 0;
        v20 = (GrandQuestFolderBoardItem_o *)(v19 + 4);
        v21 = 0;
LABEL_16:
        sub_1CE66A4(v20, v21, num, (int32_t)method, v4, v5, v6, v7);
        goto LABEL_39;
      }
      if ( !partyItem )
        goto LABEL_41;
      Member = (__int64)PartyListViewItem__GetMember(partyItem, v13, 0);
      v28 = this->fields.deckSvtInfoList;
      if ( !v28 )
        goto LABEL_41;
      if ( v13 >= LODWORD(v28->max_length) )
        goto LABEL_42;
      v29 = (PartyOrganizationListViewItem_o *)Member;
      v28->m_Items[v12 / 8] = 0;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v28->m_Items[v12 / 8], 0, v22, v23, v24, v25, v26, v27);
      if ( !v29 )
LABEL_41:
        sub_1CE6958(Member, partyItem);
      userServantEntity = v29->fields.userServantEntity;
      if ( userServantEntity )
      {
        v31 = (unsigned int *)this->fields.deckSvtInfoList;
        v32 = (QuestRestrictionInfo_DeckSvtInfo_o *)sub_1CE694C(QuestRestrictionInfo_DeckSvtInfo_TypeInfo);
        QuestRestrictionInfo_DeckSvtInfo___ctor(v32, userServantEntity, this, v33);
        if ( !v31 )
          goto LABEL_41;
      }
      else
      {
        if ( !v29->fields.followerInfo )
          goto LABEL_30;
        v31 = (unsigned int *)this->fields.deckSvtInfoList;
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v29, 0);
        v32 = (QuestRestrictionInfo_DeckSvtInfo_o *)sub_1CE694C(QuestRestrictionInfo_DeckSvtInfo_TypeInfo);
        QuestRestrictionInfo_DeckSvtInfo___ctor_44547436(v32, ServantLeader, v41);
        if ( !v31 )
          goto LABEL_41;
      }
      if ( v32 )
      {
        Member = sub_1CE683C(v32, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
        if ( !Member )
          goto LABEL_43;
      }
      if ( v13 >= v31[6] )
        goto LABEL_42;
      *(_QWORD *)&v31[v12 / 4 + 8] = v32;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v31[v12 / 4 + 8], (int32_t)v32, v34, v35, v36, v37, v38, v39);
LABEL_30:
      v42 = this->fields.deckNpcInfoList;
      if ( v42 )
      {
        if ( (__int64)v13 < SLODWORD(v42->max_length) )
        {
          followerInfo = v29->fields.followerInfo;
          if ( followerInfo )
          {
            Member = FollowerInfo__get_IsNpc(followerInfo, 0);
            if ( (Member & 1) != 0 )
            {
              v44 = (unsigned int *)this->fields.deckNpcInfoList;
              if ( !v44 )
                goto LABEL_41;
              v45 = v29->fields.followerInfo;
              if ( v45 )
              {
                Member = sub_1CE683C(v45, *(_QWORD *)(*(_QWORD *)v44 + 64LL));
                if ( !Member )
                {
LABEL_43:
                  v46 = sub_1CE697C(Member);
                  sub_1CE6828(v46, 0);
                }
              }
              if ( v13 >= v44[6] )
                goto LABEL_42;
              *(_QWORD *)&v44[v12 / 4 + 8] = v45;
              v20 = (GrandQuestFolderBoardItem_o *)&v44[v12 / 4 + 8];
              v21 = (int)v45;
              goto LABEL_16;
            }
          }
        }
      }
LABEL_39:
      ++v13;
      v12 += 8LL;
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

  if ( (byte_4E05D76 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    byte_4E05D76 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.deckNpcInfoList && this->fields.isNpcMultipleBattle && !this->fields.isNpcEditablePos )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (FollowerInfo_array *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object
      || (Master_object = NpcFollowerMaster__GetQuestFollowerList(
                            (NpcFollowerMaster_o *)Master_object,
                            this->fields.questId,
                            this->fields.questPhase,
                            0)) == 0 )
    {
LABEL_25:
      sub_1CE6958(Master_object, v5);
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
          Master_object = (FollowerInfo_array *)sub_1CE683C(v9, deckNpcInfoList->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v24 = sub_1CE697C(0);
            sub_1CE6828(v24, 0);
          }
          if ( (unsigned int)(npcInitIdx - 1) >= LODWORD(deckNpcInfoList->max_length) )
            break;
          v18 = (char *)deckNpcInfoList + 8 * npcInitIdx - 8;
          *((_QWORD *)v18 + 4) = v9;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)v9, v12, v13, v14, v15, v16, v17);
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
              *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
      sub_1CE6960(Master_object);
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
  GrandQuestFolderBoardItem_o *p_supportPositionList; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
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
  int32_t *p_eventDeckNum; // x27
  System_Collections_Generic_List_object__o *v73; // x20
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  System_Collections_Generic_List_int__o *v80; // x20
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
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
  System_Collections_Generic_List_object__o *v99; // x20
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  System_Collections_Generic_List_object__o *v106; // x20
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  System_Collections_Generic_List_object__o *v113; // x20
  int32_t v114; // w2
  int32_t v115; // w3
  System_String_o *v116; // x4
  int32_t v117; // w5
  int64_t v118; // x6
  System_String_o *v119; // x7
  System_Collections_Generic_List_object__o *v120; // x20
  int32_t v121; // w2
  int32_t v122; // w3
  System_String_o *v123; // x4
  int32_t v124; // w5
  int64_t v125; // x6
  System_String_o *v126; // x7
  System_Collections_Generic_List_object__o *v127; // x20
  int32_t v128; // w2
  int32_t v129; // w3
  System_String_o *v130; // x4
  int32_t v131; // w5
  int64_t v132; // x6
  System_String_o *v133; // x7
  System_Collections_Generic_List_object__o *v134; // x20
  int32_t v135; // w2
  int32_t v136; // w3
  System_String_o *v137; // x4
  int32_t v138; // w5
  int64_t v139; // x6
  System_String_o *v140; // x7
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  System_Collections_Generic_List_object__o *v147; // x20
  int32_t v148; // w2
  int32_t v149; // w3
  System_String_o *v150; // x4
  int32_t v151; // w5
  int64_t v152; // x6
  System_String_o *v153; // x7
  GrandQuestFolderBoardItem_o *p_deckSvtInfoList; // x24
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  int32_t v161; // w2
  int32_t v162; // w3
  System_String_o *v163; // x4
  int32_t v164; // w5
  int64_t v165; // x6
  System_String_o *v166; // x7
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o **p_dialogMessageInfoDictionary; // x23
  int32_t v168; // w2
  int32_t v169; // w3
  System_String_o *v170; // x4
  int32_t v171; // w5
  int64_t v172; // x6
  System_String_o *v173; // x7
  System_Collections_Generic_List_object__o *v174; // x20
  int32_t v175; // w2
  int32_t v176; // w3
  System_String_o *v177; // x4
  int32_t v178; // w5
  int64_t v179; // x6
  System_String_o *v180; // x7
  System_Collections_Generic_List_object__o *v181; // x20
  int32_t v182; // w2
  int32_t v183; // w3
  System_String_o *v184; // x4
  int32_t v185; // w5
  int64_t v186; // x6
  System_String_o *v187; // x7
  const MethodInfo *v188; // x1
  __int64 Master_object; // x0
  Il2CppObject *v190; // x1
  const MethodInfo *v191; // x4
  const MethodInfo *v192; // x1
  System_Collections_Generic_Dictionary_int__object__o *v193; // x20
  int32_t v194; // w2
  int32_t v195; // w3
  System_String_o *v196; // x4
  int32_t v197; // w5
  int64_t v198; // x6
  System_String_o *v199; // x7
  System_Collections_Generic_Dictionary_int__object__o *v200; // x20
  int32_t v201; // w2
  int32_t v202; // w3
  System_String_o *v203; // x4
  int32_t v204; // w5
  int64_t v205; // x6
  System_String_o *v206; // x7
  System_Collections_Generic_Dictionary_int__object__o *v207; // x20
  int32_t v208; // w2
  int32_t v209; // w3
  System_String_o *v210; // x4
  int32_t v211; // w5
  int64_t v212; // x6
  System_String_o *v213; // x7
  System_Collections_Generic_List_object__o *v214; // x29
  RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  bool HasFlag; // w0
  BalanceConfig_c *v217; // x0
  __int64 v218; // x0
  int32_t v219; // w2
  int32_t v220; // w3
  System_String_o *v221; // x4
  int32_t v222; // w5
  int64_t v223; // x6
  System_String_o *v224; // x7
  RestrictionBaseEntity_o *v225; // x8
  Il2CppObject *v226; // x20
  RestrictionWholeEntity_array *Entities; // x0
  int32_t v228; // w2
  int32_t v229; // w3
  System_String_o *v230; // x4
  int32_t v231; // w5
  int64_t v232; // x6
  System_String_o *v233; // x7
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  unsigned int v236; // w25
  RestrictionWholeEntity_o *v237; // x22
  System_Boolean_array *SetPossiblePosition; // x0
  int32_t v239; // w2
  int32_t v240; // w3
  System_String_o *v241; // x4
  int32_t v242; // w5
  int64_t v243; // x6
  System_String_o *v244; // x7
  System_Collections_Generic_List_object__o *v245; // x23
  int32_t v246; // w2
  int32_t v247; // w3
  System_String_o *v248; // x4
  int32_t v249; // w5
  int64_t v250; // x6
  System_String_o *v251; // x7
  struct System_Object_array *v252; // x8
  _QWORD *v253; // x9
  __int64 v254; // x10
  __int64 v255; // x1
  Il2CppClass **v256; // x0
  System_Collections_Generic_List_object__o *v257; // x23
  int32_t v258; // w2
  int32_t v259; // w3
  System_String_o *v260; // x4
  int32_t v261; // w5
  int64_t v262; // x6
  System_String_o *v263; // x7
  struct System_Object_array *items; // x8
  _QWORD *v265; // x9
  __int64 size; // x10
  __int64 v267; // x1
  Il2CppClass **v268; // x0
  System_Collections_Generic_List_object__o *v269; // x23
  int32_t v270; // w2
  int32_t v271; // w3
  System_String_o *v272; // x4
  int32_t v273; // w5
  int64_t v274; // x6
  System_String_o *v275; // x7
  struct System_Object_array *v276; // x8
  _QWORD *v277; // x9
  __int64 v278; // x10
  __int64 v279; // x1
  Il2CppClass **v280; // x0
  Il2CppObject *v281; // x23
  int32_t v282; // w0
  int32_t v283; // w2
  int32_t v284; // w3
  System_String_o *v285; // x4
  int32_t v286; // w5
  int64_t v287; // x6
  System_String_o *v288; // x7
  BalanceConfig_c *v289; // x0
  __int64 v290; // x0
  int32_t v291; // w2
  int32_t v292; // w3
  System_String_o *v293; // x4
  int32_t v294; // w5
  int64_t v295; // x6
  System_String_o *v296; // x7
  __int64 v297; // x0
  int32_t v298; // w2
  int32_t v299; // w3
  System_String_o *v300; // x4
  int32_t v301; // w5
  int64_t v302; // x6
  System_String_o *v303; // x7
  System_Boolean_array *v304; // x0
  int32_t v305; // w2
  int32_t v306; // w3
  System_String_o *v307; // x4
  int32_t v308; // w5
  int64_t v309; // x6
  System_String_o *v310; // x7
  System_Collections_Generic_List_object__o *v311; // x23
  int32_t v312; // w2
  int32_t v313; // w3
  System_String_o *v314; // x4
  int32_t v315; // w5
  int64_t v316; // x6
  System_String_o *v317; // x7
  struct System_Object_array *v318; // x8
  _QWORD *v319; // x9
  __int64 v320; // x10
  __int64 v321; // x1
  Il2CppClass **v322; // x0
  System_Collections_Generic_List_object__o *v323; // x23
  int32_t v324; // w2
  int32_t v325; // w3
  System_String_o *v326; // x4
  int32_t v327; // w5
  int64_t v328; // x6
  System_String_o *v329; // x7
  struct System_Object_array *v330; // x8
  _QWORD *v331; // x9
  __int64 v332; // x10
  __int64 v333; // x1
  Il2CppClass **v334; // x0
  struct System_Int32_array *targetVals; // x8
  System_Collections_Generic_List_object__o *v336; // x23
  int32_t v337; // w2
  int32_t v338; // w3
  System_String_o *v339; // x4
  int32_t v340; // w5
  int64_t v341; // x6
  System_String_o *v342; // x7
  struct System_Object_array *v343; // x8
  _QWORD *v344; // x9
  __int64 v345; // x10
  __int64 v346; // x1
  Il2CppClass **v347; // x0
  System_Collections_Generic_List_object__o *v348; // x23
  int32_t v349; // w2
  int32_t v350; // w3
  System_String_o *v351; // x4
  int32_t v352; // w5
  int64_t v353; // x6
  System_String_o *v354; // x7
  struct System_Object_array *v355; // x8
  _QWORD *v356; // x9
  __int64 v357; // x10
  __int64 v358; // x1
  Il2CppClass **v359; // x0
  int32_t restrictionMessageId; // w2
  int32_t v361; // w2
  int32_t v362; // w3
  System_String_o *v363; // x4
  int32_t v364; // w5
  int64_t v365; // x6
  System_String_o *v366; // x7
  struct System_Object_array *v367; // x8
  _QWORD *v368; // x9
  __int64 v369; // x10
  Il2CppClass **v370; // x0
  __int64 v371; // x23
  QuestRestrictionInfo_o *v372; // x28
  System_Collections_Generic_Dictionary_K__V__o **v373; // x26
  char isAllOutBattle; // w8
  __int64 v375; // x21
  int32_t v376; // w2
  int32_t v377; // w3
  System_String_o *v378; // x4
  int32_t v379; // w5
  int64_t v380; // x6
  System_String_o *v381; // x7
  BalanceConfig_c *v382; // x0
  __int64 v383; // x0
  int32_t v384; // w2
  int32_t v385; // w3
  System_String_o *v386; // x4
  int32_t v387; // w5
  int64_t v388; // x6
  System_String_o *v389; // x7
  int32_t v390; // w21
  int i; // w24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v392; // x8
  __int64 v393; // x22
  System_Collections_Generic_List_int__o *v394; // x24
  int v395; // w8
  __int64 v396; // x19
  __int64 v397; // x23
  struct System_Int32_array *v398; // x8
  _QWORD *v399; // x9
  __int64 v400; // x10
  int32_t v401; // w2
  int32_t v402; // w2
  int32_t v403; // w3
  System_String_o *v404; // x4
  int32_t v405; // w5
  int64_t v406; // x6
  System_String_o *v407; // x7
  struct System_Object_array *v408; // x8
  _QWORD *v409; // x9
  __int64 v410; // x10
  Il2CppClass **v411; // x0
  __int64 v412; // x23
  __int64 v413; // x24
  GrandQuestFolderBoardItem_c *klass; // x25
  QuestRestrictionInfo_SlotInfo_o *v415; // x23
  const MethodInfo *v416; // x1
  int32_t v417; // w2
  int32_t v418; // w3
  System_String_o *v419; // x4
  int32_t v420; // w5
  int64_t v421; // x6
  System_String_o *v422; // x7
  int v423; // w19
  void **v424; // x0
  int servantNumMax; // w8
  GrandQuestFolderBoardItem_c *v426; // x8
  int32_t v427; // w24
  __int64 v428; // x8
  QuestRestrictionInfo___c_c *v429; // x0
  System_Func_object__bool__o *_9__84_0; // x23
  Il2CppObject *v431; // x25
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v433; // w2
  int32_t v434; // w3
  System_String_o *v435; // x4
  int32_t v436; // w5
  int64_t v437; // x6
  System_String_o *v438; // x7
  _BOOL4 v439; // w0
  QuestRestrictionInfo___c_c *v440; // x8
  _BOOL4 v441; // w23
  System_Func_object__bool__o *_9__84_1; // x25
  Il2CppObject *v443; // x28
  struct QuestRestrictionInfo___c_StaticFields *v444; // x0
  int32_t v445; // w2
  int32_t v446; // w3
  System_String_o *v447; // x4
  int32_t v448; // w5
  int64_t v449; // x6
  System_String_o *v450; // x7
  _BOOL4 v451; // w0
  QuestRestrictionInfo___c_c *v452; // x8
  _BOOL4 v453; // w25
  System_Func_object__bool__o *_9__84_2; // x28
  Il2CppObject *v455; // x27
  struct QuestRestrictionInfo___c_StaticFields *v456; // x0
  int32_t v457; // w2
  int32_t v458; // w3
  System_String_o *v459; // x4
  int32_t v460; // w5
  int64_t v461; // x6
  System_String_o *v462; // x7
  GrandQuestFolderBoardItem_c *v463; // x8
  __int64 v464; // x8
  GrandQuestFolderBoardItem_c *v465; // x8
  __int64 v466; // x8
  GrandQuestFolderBoardItem_c *v467; // x8
  __int64 v468; // x8
  int v469; // w8
  unsigned int v470; // w27
  __int64 v471; // x25
  __int64 v472; // x8
  GrandQuestFolderBoardItem_c *v473; // x8
  __int64 v474; // x8
  System_Collections_Generic_List_object__o *v475; // x23
  int32_t v476; // w2
  int32_t v477; // w3
  System_String_o *v478; // x4
  int32_t v479; // w5
  int64_t v480; // x6
  System_String_o *v481; // x7
  struct System_Object_array *v482; // x8
  _QWORD *v483; // x9
  __int64 v484; // x10
  __int64 v485; // x1
  Il2CppClass **v486; // x0
  GrandQuestFolderBoardItem_c *v487; // x8
  __int64 v488; // x8
  struct System_Int32_array *v489; // x8
  _QWORD *v490; // x9
  __int64 v491; // x10
  System_String_o *v492; // x23
  GrandQuestFolderBoardItem_c *v493; // x8
  __int64 v494; // x8
  int32_t v495; // w2
  int32_t v496; // w3
  System_String_o *v497; // x4
  int32_t v498; // w5
  int64_t v499; // x6
  System_String_o *v500; // x7
  GrandQuestFolderBoardItem_c *v501; // x8
  __int64 v502; // x8
  System_String_o **v503; // x25
  GrandQuestFolderBoardItem_c *v504; // x8
  QuestRestrictionInfo___c_c *v505; // x0
  __int64 v506; // x27
  System_Func_object__bool__o *_9__84_3; // x23
  Il2CppObject *v508; // x25
  struct QuestRestrictionInfo___c_StaticFields *v509; // x0
  int32_t v510; // w2
  int32_t v511; // w3
  System_String_o *v512; // x4
  int32_t v513; // w5
  int64_t v514; // x6
  System_String_o *v515; // x7
  GrandQuestFolderBoardItem_c *v516; // x8
  __int64 v517; // x8
  GrandQuestFolderBoardItem_c *v518; // x8
  __int64 v519; // x8
  GrandQuestFolderBoardItem_c *v520; // x8
  __int64 v521; // x8
  System_Object_array *v522; // x0
  int32_t v523; // w2
  int32_t v524; // w3
  System_String_o *v525; // x4
  int32_t v526; // w5
  int64_t v527; // x6
  System_String_o *v528; // x7
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v530; // w10
  int v531; // w11
  int v532; // w9
  int v533; // w20
  int32_t v534; // w19
  QuestRestrictionInfo_SlotInfo_o *v535; // x13
  int v536; // w21
  int v537; // w22
  __int64 v538; // x8
  bool HasFlag_43615840; // w0
  bool v540; // w0
  Il2CppObject *Value_int__object; // x0
  int v542; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v544; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v545; // x8
  __int64 v546; // x8
  Il2CppObject *v547; // x20
  int32_t v548; // w0
  int32_t v549; // w2
  int32_t v550; // w3
  System_String_o *v551; // x4
  int32_t v552; // w5
  int64_t v553; // x6
  System_String_o *v554; // x7
  System_Collections_Generic_Dictionary_int__object__o *restrictionSlotDictionary; // x8
  _BOOL8 v556; // x0
  __int64 v557; // x1
  int monitor; // w9
  int v559; // w10
  __int64 v560; // x11
  System_Text_StringBuilder_o *v561; // x20
  System_Text_StringBuilder_o *v562; // x21
  struct RestrictionWholeEntity_array *v563; // x19
  int v564; // w8
  unsigned int v565; // w22
  RestrictionWholeEntity_o *v566; // x24
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  int v569; // w25
  _BOOL4 v570; // w8
  __int64 v571; // x0
  int32_t v572; // w2
  int32_t v573; // w3
  System_String_o *v574; // x4
  int32_t v575; // w5
  int64_t v576; // x6
  System_String_o *v577; // x7
  System_String_o *v578; // x19
  System_String_o *v579; // x0
  System_String_o *v580; // x0
  int32_t v581; // w2
  int32_t v582; // w3
  System_String_o *v583; // x4
  int32_t v584; // w5
  int64_t v585; // x6
  System_String_o *v586; // x7
  __int64 v587; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // [xsp+8h] [xbp-168h]
  GrandQuestFolderBoardItem_o *p_svtIdForceBattleList; // [xsp+10h] [xbp-160h]
  GrandQuestFolderBoardItem_o *p_restrictionMessage; // [xsp+18h] [xbp-158h]
  GrandQuestFolderBoardItem_o *p_confirmRestrictionMessage; // [xsp+20h] [xbp-150h]
  struct RestrictionWholeEntity_array *v592; // [xsp+28h] [xbp-148h]
  GrandQuestFolderBoardItem_o *p_uniqueIndividualitys; // [xsp+30h] [xbp-140h]
  struct System_Collections_Generic_List_int____o **p_fixedMyServantIndividualitiesList; // [xsp+38h] [xbp-138h]
  struct System_Collections_Generic_List_int____o **p_fixedIndividualitiesList; // [xsp+40h] [xbp-130h]
  struct System_Collections_Generic_List_int____o **p_needStartingIndividualitiesList; // [xsp+48h] [xbp-128h]
  struct System_Collections_Generic_List_int____o **p_fixedNpcIndividualitiesList; // [xsp+50h] [xbp-120h]
  struct System_Collections_Generic_List_int____o **p_fixedSupportIndividualitiesList; // [xsp+58h] [xbp-118h]
  struct FollowerInfo_array **p_deckNpcInfoList; // [xsp+60h] [xbp-110h]
  struct System_Collections_Generic_List_bool____o **p_myServantPositionsList; // [xsp+70h] [xbp-100h]
  System_Collections_Generic_Dictionary_int__object__o **p_restrictionSlotDetailDictionary; // [xsp+78h] [xbp-F8h]
  System_Collections_Generic_Dictionary_K__V__o **p_restrictionSlotDictionary; // [xsp+80h] [xbp-F0h]
  System_Collections_Generic_Dictionary_K__V__o **v604; // [xsp+88h] [xbp-E8h]
  struct RestrictionBaseEntity_o **p_restrictionBaseEntity; // [xsp+90h] [xbp-E0h]
  QuestRestrictionInfo_o *v606; // [xsp+98h] [xbp-D8h]
  struct System_Collections_Generic_List_bool____o **p_positionsList; // [xsp+A0h] [xbp-D0h]
  _BOOL4 v608; // [xsp+A0h] [xbp-D0h]
  int32_t questIdb; // [xsp+ACh] [xbp-C4h]
  GrandQuestFolderBoardItem_o *p_fields; // [xsp+B0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v612; // [xsp+B8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v613; // [xsp+D0h] [xbp-A0h] BYREF
  Il2CppObject *item; // [xsp+F0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v616; // [xsp+100h] [xbp-70h] BYREF
  Il2CppObject *v617; // [xsp+108h] [xbp-68h] BYREF

  if ( (byte_4E05D70 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
    sub_1CE6700(&Method_BasicHelper_Any_RestrictionSlotEntity___);
    sub_1CE6700(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
    sub_1CE6700(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_RestrictionBaseMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_RestrictionSlotMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_RestrictionWholeMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1CE6700(&QuestRestrictionInfo_DeckSvtInfo___TypeInfo);
    sub_1CE6700(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    sub_1CE6700(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    sub_1CE6700(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    sub_1CE6700(&System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__);
    sub_1CE6700(&FollowerInfo___TypeInfo);
    sub_1CE6700(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
    sub_1CE6700(&System_Func_RestrictionSlotEntity__bool__TypeInfo);
    sub_1CE6700(&int___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_bool____Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int____Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_bool_____ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_bool____TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_int____TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&QuestRestrictionInfo_SlotInfo___TypeInfo);
    sub_1CE6700(&QuestRestrictionInfo_SlotInfo_TypeInfo);
    sub_1CE6700(&System_Text_StringBuilder_TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__Setup_b__84_0__);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__Setup_b__84_1__);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__Setup_b__84_2__);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__Setup_b__84_3__);
    sub_1CE6700(&QuestRestrictionInfo___c_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    sub_1CE6700(&StringLiteral_43/*"\n"*/);
    sub_1CE6700(&StringLiteral_10384/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/);
    sub_1CE6700(&StringLiteral_10347/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05D70 = 1;
  }
  v616 = 0;
  v617 = 0;
  item = 0;
  entity = 0;
  memset(&v613, 0, sizeof(v613));
  this->fields.isRestriction = 0;
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  v10 = StringLiteral_1/*""*/;
  this->fields.restrictionMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  p_restrictionMessage = (GrandQuestFolderBoardItem_o *)&this->fields.restrictionMessage;
  sub_1CE66A4(
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
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.confirmRestrictionMessage,
    (int32_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.supportOnlyRestrictionEntity = 0;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.supportOnlyRestrictionEntity,
    0,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.uniqueSvtRestrictionEntity = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.uniqueSvtRestrictionEntity, 0, v23, v24, v25, v26, v27, v28);
  this->fields.deckNpcInfoList = 0;
  p_deckNpcInfoList = &this->fields.deckNpcInfoList;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.deckNpcInfoList, 0, v29, v30, v31, v32, v33, v34);
  this->fields.fixedSupportPositionRestrictionEntity = 0;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedSupportPositionRestrictionEntity,
    0,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.supportPositionList = 0;
  p_supportPositionList = (GrandQuestFolderBoardItem_o *)&this->fields.supportPositionList;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.supportPositionList, 0, v42, v43, v44, v45, v46, v47);
  this->fields.fixedMyServantPositionRestrictionEntity = 0;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
    0,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.servantNumRestrictionEntity = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.servantNumRestrictionEntity, 0, v54, v55, v56, v57, v58, v59);
  this->fields.servantNumMax = 0;
  this->fields.myServantNumRestrictionEntity = 0;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.myServantNumRestrictionEntity,
    0,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.myServantNumMax = 0;
  *(_WORD *)&this->fields.isSupportOnlyForceBattle = 0;
  this->fields.svtIdForceBattleList = 0;
  p_svtIdForceBattleList = (GrandQuestFolderBoardItem_o *)&this->fields.svtIdForceBattleList;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.svtIdForceBattleList, 0, v66, v67, v68, v69, v70, v71);
  p_eventDeckNum = &this->fields.eventDeckNum;
  this->fields.isFatigure = 0;
  this->fields.eventDeckNum = 0;
  *(int32_t *)((char *)&this->fields.eventDeckNum + 3) = 0;
  v73 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v73,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v73;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.myServantOrNpcRestrictionEntityList,
    (int32_t)v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  v80 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v80,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.specifiedPositionList = v80;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.specifiedPositionList,
    (int32_t)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  this->fields.isNotTransitionSupportList = 0;
  this->fields.supportInitIndex = 0;
  this->fields.fixedServantPositionRestrictionEntity = 0;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedServantPositionRestrictionEntity,
    0,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  this->fields.uniqueIndividualityEntity = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.uniqueIndividualityEntity, 0, v93, v94, v95, v96, v97, v98);
  this->fields.isAllOutBattle = 0;
  this->fields.isDataLostBattle = 0;
  *(_WORD *)&this->fields.isNotSingleSupportOnly = 0;
  this->fields.allOutBattleGroupNo = -1;
  this->fields.dataLostBattleId = -1;
  *(_DWORD *)&this->fields.isUniqueServant = 0;
  v99 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v99,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v99;
  p_positionsList = &this->fields.positionsList;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.positionsList,
    (int32_t)v99,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  v106 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v106,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v106;
  p_fixedIndividualitiesList = &this->fields.fixedIndividualitiesList;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedIndividualitiesList,
    (int32_t)v106,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  this->fields.isFixedMyServantPosition = 0;
  v113 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v113,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v113;
  p_myServantPositionsList = &this->fields.myServantPositionsList;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.myServantPositionsList,
    (int32_t)v113,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  v120 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v120,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v120;
  p_fixedMyServantIndividualitiesList = &this->fields.fixedMyServantIndividualitiesList;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedMyServantIndividualitiesList,
    (int32_t)v120,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  this->fields.isFixedSupportPosition = 0;
  v127 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v127,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v127;
  p_fixedSupportIndividualitiesList = &this->fields.fixedSupportIndividualitiesList;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedSupportIndividualitiesList,
    (int32_t)v127,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133);
  this->fields.isFixedNpcPosition = 0;
  v134 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v134,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v134;
  p_fixedNpcIndividualitiesList = &this->fields.fixedNpcIndividualitiesList;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedNpcIndividualitiesList,
    (int32_t)v134,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  this->fields.npcPositionList = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.npcPositionList, 0, v141, v142, v143, v144, v145, v146);
  v147 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v147,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v147;
  p_needStartingIndividualitiesList = &this->fields.needStartingIndividualitiesList;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.needStartingIndividualitiesList,
    (int32_t)v147,
    v148,
    v149,
    v150,
    v151,
    v152,
    v153);
  this->fields.isNeedStarting = 0;
  this->fields.isFixedMyServantSingle = 0;
  *(_WORD *)&this->fields.isMyServantOrNpc = 0;
  this->fields.deckSvtInfoList = 0;
  p_deckSvtInfoList = (GrandQuestFolderBoardItem_o *)&this->fields.deckSvtInfoList;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.deckSvtInfoList, 0, v155, v156, v157, v158, v159, v160);
  this->fields.slotInfos = 0;
  p_fields = (GrandQuestFolderBoardItem_o *)&this->fields;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields, 0, v161, v162, v163, v164, v165, v166);
  this->fields.dialogMessageInfoDictionary = 0;
  p_dialogMessageInfoDictionary = &this->fields.dialogMessageInfoDictionary;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.dialogMessageInfoDictionary,
    0,
    v168,
    v169,
    v170,
    v171,
    v172,
    v173);
  v174 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v174,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.grandServantRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v174;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantRestrictionEntityList,
    (int32_t)v174,
    v175,
    v176,
    v177,
    v178,
    v179,
    v180);
  v181 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v181,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.activeGrandBoardRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v181;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.activeGrandBoardRestrictionEntityList,
    (int32_t)v181,
    v182,
    v183,
    v184,
    v185,
    v186,
    v187);
  v606 = this;
  QuestRestrictionInfo__CacheOverwriteSvtTreasureDeviceLv(this, v188);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !Master_object )
    goto LABEL_383;
  p_restrictionBaseEntity = &this->fields.restrictionBaseEntity;
  if ( RestrictionBaseMaster__TryGetEntity(
         (RestrictionBaseMaster_o *)Master_object,
         &this->fields.restrictionBaseEntity,
         this->fields.questId,
         this->fields.questPhase,
         v191) )
  {
    this->fields.isRestriction = 1;
    v193 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1CE694C(System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v193,
      (const MethodInfo_355AB10 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    this->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v193;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&this->fields.restrictionSlotDictionary;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.restrictionSlotDictionary,
      (int32_t)v193,
      v194,
      v195,
      v196,
      v197,
      v198,
      v199);
    v200 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1CE694C(System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v200,
      (const MethodInfo_355AB10 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    this->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v200;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.restrictionSlotDetailDictionary,
      (int32_t)v200,
      v201,
      v202,
      v203,
      v204,
      v205,
      v206);
    v207 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1CE694C(System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v207,
      (const MethodInfo_355AB10 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    this->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v207;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.dialogMessageInfoDictionary,
      (int32_t)v207,
      v208,
      v209,
      v210,
      v211,
      v212,
      v213);
    v214 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v214,
      (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    Master_object = (__int64)v606->fields.restrictionBaseEntity;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__object__o **)&v606->fields.restrictionSlotDetailDictionary;
    if ( !Master_object )
      goto LABEL_383;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 2, 0);
    restrictionBaseEntity = v606->fields.restrictionBaseEntity;
    v606->fields.isNotTransitionSupportList = Master_object & 1;
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
    v606->fields.isUniqueServant = HasFlag;
    if ( HasFlag )
    {
      v217 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v217 = BalanceConfig_TypeInfo;
      }
      v218 = sub_1CE67A8(QuestRestrictionInfo_DeckSvtInfo___TypeInfo, (unsigned int)v217->static_fields->DeckMemberMax);
      p_deckSvtInfoList->klass = (GrandQuestFolderBoardItem_c *)v218;
      sub_1CE66A4(p_deckSvtInfoList, v218, v219, v220, v221, v222, v223, v224);
    }
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_383;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 32, 0);
    v225 = v606->fields.restrictionBaseEntity;
    v606->fields.isNotSingleSupportOnly = Master_object & 1;
    if ( !v225 )
      goto LABEL_383;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      v225,
      &v606->fields.overwriteLimitCountSvtIds,
      &v606->fields.overwriteLimitCounts,
      &v606->fields.overwriteLimitCountIconIds,
      0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v226 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
    if ( !*p_restrictionBaseEntity )
      goto LABEL_383;
    if ( !Master_object )
      goto LABEL_383;
    v604 = (System_Collections_Generic_Dictionary_K__V__o **)p_dialogMessageInfoDictionary;
    Entities = RestrictionWholeMaster__GetEntities(
                 (RestrictionWholeMaster_o *)Master_object,
                 (*p_restrictionBaseEntity)->fields.restrictionWholeId,
                 0);
    v606->fields.restrictionWholeEntities = Entities;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&v606->fields.restrictionWholeEntities,
      (int32_t)Entities,
      v228,
      v229,
      v230,
      v231,
      v232,
      v233);
    restrictionWholeEntities = v606->fields.restrictionWholeEntities;
    p_restrictionWholeEntities = &v606->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_383;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      p_uniqueIndividualitys = (GrandQuestFolderBoardItem_o *)&v606->fields.uniqueIndividualitys;
      v236 = 0;
      v592 = v606->fields.restrictionWholeEntities;
      while ( 2 )
      {
        if ( v236 >= max_length )
          goto LABEL_384;
        v237 = restrictionWholeEntities->m_Items[v236];
        if ( v237 )
        {
          switch ( v237->fields.type )
          {
            case 2:
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestGroupMaster___);
              if ( !Master_object )
                goto LABEL_383;
              Master_object = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Master_object, questId, 17, 0);
              v606->fields.allOutBattleGroupNo = Master_object;
              v606->fields.isAllOutBattle = 1;
              goto LABEL_86;
            case 3:
              Master_object = System_Linq_Enumerable__Min(
                                (System_Collections_Generic_IEnumerable_int__o *)v237->fields.targetVals,
                                0);
              v606->fields.servantNumMax = Master_object - 1;
              goto LABEL_86;
            case 4:
              v257 = (System_Collections_Generic_List_object__o *)*p_positionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v237, 0);
              if ( !v257 )
                goto LABEL_383;
              items = v257->fields._items;
              v265 = Method_System_Collections_Generic_List_bool____Add__;
              ++v257->fields._version;
              if ( !items )
                goto LABEL_383;
              size = v257->fields._size;
              v267 = Master_object;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v257,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3905F68 **)(*(_QWORD *)(v265[4] + 192LL) + 112LL));
              }
              else
              {
                v268 = &items->obj.klass + size;
                v257->fields._size = size + 1;
                v268[4] = (Il2CppClass *)v267;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v268 + 4), v267, v258, v259, v260, v261, v262, v263);
              }
              Master_object = (__int64)v237->fields.targetVals;
              if ( !Master_object )
                goto LABEL_383;
              v336 = (System_Collections_Generic_List_object__o *)*p_fixedIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v336 )
                goto LABEL_383;
              Master_object = sub_1CE683C(Master_object, int___TypeInfo);
              v343 = v336->fields._items;
              v344 = Method_System_Collections_Generic_List_int____Add__;
              ++v336->fields._version;
              if ( !v343 )
                goto LABEL_383;
              v345 = v336->fields._size;
              v346 = Master_object;
              if ( (unsigned int)v345 >= LODWORD(v343->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v336,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3905F68 **)(*(_QWORD *)(v344[4] + 192LL) + 112LL));
              }
              else
              {
                v347 = &v343->obj.klass + v345;
                v336->fields._size = v345 + 1;
                v347[4] = (Il2CppClass *)v346;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v347 + 4), v346, v337, v338, v339, v340, v341, v342);
              }
              v606->fields.isFixedPosition = 1;
              goto LABEL_86;
            case 5:
              v269 = (System_Collections_Generic_List_object__o *)*p_myServantPositionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v237, 0);
              if ( !v269 )
                goto LABEL_383;
              v276 = v269->fields._items;
              v277 = Method_System_Collections_Generic_List_bool____Add__;
              ++v269->fields._version;
              if ( !v276 )
                goto LABEL_383;
              v278 = v269->fields._size;
              v279 = Master_object;
              if ( (unsigned int)v278 >= LODWORD(v276->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v269,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3905F68 **)(*(_QWORD *)(v277[4] + 192LL) + 112LL));
              }
              else
              {
                v280 = &v276->obj.klass + v278;
                v269->fields._size = v278 + 1;
                v280[4] = (Il2CppClass *)v279;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v280 + 4), v279, v270, v271, v272, v273, v274, v275);
              }
              Master_object = (__int64)v237->fields.targetVals;
              if ( !Master_object )
                goto LABEL_383;
              v348 = (System_Collections_Generic_List_object__o *)*p_fixedMyServantIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v348 )
                goto LABEL_383;
              Master_object = sub_1CE683C(Master_object, int___TypeInfo);
              v355 = v348->fields._items;
              v356 = Method_System_Collections_Generic_List_int____Add__;
              ++v348->fields._version;
              if ( !v355 )
                goto LABEL_383;
              v357 = v348->fields._size;
              v358 = Master_object;
              if ( (unsigned int)v357 >= LODWORD(v355->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v348,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3905F68 **)(*(_QWORD *)(v356[4] + 192LL) + 112LL));
              }
              else
              {
                v359 = &v355->obj.klass + v357;
                v348->fields._size = v357 + 1;
                v359[4] = (Il2CppClass *)v358;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v359 + 4), v358, v349, v350, v351, v352, v353, v354);
              }
              v606->fields.isFixedMyServantPosition = 1;
              goto LABEL_86;
            case 6:
              SetPossiblePosition = RestrictionWholeEntity__GetSetPossiblePosition(v237, 0);
              p_supportPositionList->klass = (GrandQuestFolderBoardItem_c *)SetPossiblePosition;
              sub_1CE66A4(p_supportPositionList, (int32_t)SetPossiblePosition, v239, v240, v241, v242, v243, v244);
              Master_object = (__int64)v237->fields.targetVals;
              if ( !Master_object )
                goto LABEL_383;
              v245 = (System_Collections_Generic_List_object__o *)*p_fixedSupportIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v245 )
                goto LABEL_383;
              Master_object = sub_1CE683C(Master_object, int___TypeInfo);
              v252 = v245->fields._items;
              v253 = Method_System_Collections_Generic_List_int____Add__;
              ++v245->fields._version;
              if ( !v252 )
                goto LABEL_383;
              v254 = v245->fields._size;
              v255 = Master_object;
              if ( (unsigned int)v254 >= LODWORD(v252->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v245,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3905F68 **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
              }
              else
              {
                v256 = &v252->obj.klass + v254;
                v245->fields._size = v254 + 1;
                v256[4] = (Il2CppClass *)v255;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v256 + 4), v255, v246, v247, v248, v249, v250, v251);
              }
              v606->fields.isFixedSupportPosition = 1;
              goto LABEL_86;
            case 7:
              v304 = RestrictionWholeEntity__GetSetPossiblePosition(v237, 0);
              p_supportPositionList->klass = (GrandQuestFolderBoardItem_c *)v304;
              sub_1CE66A4(p_supportPositionList, (int32_t)v304, v305, v306, v307, v308, v309, v310);
              Master_object = (__int64)v237->fields.targetVals;
              if ( !Master_object )
                goto LABEL_383;
              v311 = (System_Collections_Generic_List_object__o *)*p_fixedNpcIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v311 )
                goto LABEL_383;
              Master_object = sub_1CE683C(Master_object, int___TypeInfo);
              v318 = v311->fields._items;
              v319 = Method_System_Collections_Generic_List_int____Add__;
              ++v311->fields._version;
              if ( !v318 )
                goto LABEL_383;
              v320 = v311->fields._size;
              v321 = Master_object;
              if ( (unsigned int)v320 >= LODWORD(v318->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v311,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3905F68 **)(*(_QWORD *)(v319[4] + 192LL) + 112LL));
              }
              else
              {
                v322 = &v318->obj.klass + v320;
                v311->fields._size = v320 + 1;
                v322[4] = (Il2CppClass *)v321;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v322 + 4), v321, v312, v313, v314, v315, v316, v317);
              }
              v606->fields.isFixedNpcPosition = 1;
              goto LABEL_86;
            case 8:
              Master_object = (__int64)v237->fields.targetVals;
              if ( !Master_object )
                goto LABEL_383;
              v323 = (System_Collections_Generic_List_object__o *)*p_needStartingIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v323 )
                goto LABEL_383;
              Master_object = sub_1CE683C(Master_object, int___TypeInfo);
              v330 = v323->fields._items;
              v331 = Method_System_Collections_Generic_List_int____Add__;
              ++v323->fields._version;
              if ( !v330 )
                goto LABEL_383;
              v332 = v323->fields._size;
              v333 = Master_object;
              if ( (unsigned int)v332 >= LODWORD(v330->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v323,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3905F68 **)(*(_QWORD *)(v331[4] + 192LL) + 112LL));
              }
              else
              {
                v334 = &v330->obj.klass + v332;
                v323->fields._size = v332 + 1;
                v334[4] = (Il2CppClass *)v333;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v334 + 4), v333, v324, v325, v326, v327, v328, v329);
              }
              v606->fields.isNeedStarting = 1;
              goto LABEL_86;
            case 9:
              Master_object = (__int64)v237->fields.targetVals;
              if ( !Master_object )
                goto LABEL_383;
              v281 = System_Array__Clone((System_Array_o *)Master_object, 0);
              p_uniqueIndividualitys->klass = (GrandQuestFolderBoardItem_c *)sub_1CE683C(v281, int___TypeInfo);
              v282 = sub_1CE683C(v281, int___TypeInfo);
              sub_1CE66A4(p_uniqueIndividualitys, v282, v283, v284, v285, v286, v287, v288);
              v289 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v289 = BalanceConfig_TypeInfo;
              }
              v290 = sub_1CE67A8(
                       QuestRestrictionInfo_DeckSvtInfo___TypeInfo,
                       (unsigned int)v289->static_fields->DeckMemberMax);
              v606->fields.deckSvtInfoList = (struct QuestRestrictionInfo_DeckSvtInfo_array *)v290;
              sub_1CE66A4(p_deckSvtInfoList, v290, v291, v292, v293, v294, v295, v296);
              v297 = sub_1CE67A8(
                       FollowerInfo___TypeInfo,
                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v606->fields.deckNpcInfoList = (struct FollowerInfo_array *)v297;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)p_deckNpcInfoList, v297, v298, v299, v300, v301, v302, v303);
              restrictionWholeEntities = v592;
              v606->fields.isUniqueIndividuality = 1;
              goto LABEL_86;
            case 0xA:
              v606->fields.isDataLostBattle = 1;
              targetVals = v237->fields.targetVals;
              if ( !targetVals )
                goto LABEL_383;
              if ( !LODWORD(targetVals->max_length) )
                goto LABEL_384;
              v606->fields.dataLostBattleId = targetVals->m_Items[0];
LABEL_86:
              restrictionMessageId = v237->fields.restrictionMessageId;
              if ( restrictionMessageId < 1 )
                goto LABEL_98;
              if ( !v226 )
                goto LABEL_383;
              Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v226,
                                &entity,
                                restrictionMessageId,
                                (const MethodInfo_34E92A8 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
              if ( (Master_object & 1) == 0 )
                goto LABEL_98;
              if ( !v214 )
                goto LABEL_383;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v214,
                                entity,
                                (const MethodInfo_39062F8 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) != 0 )
                goto LABEL_98;
              v190 = entity;
              v367 = v214->fields._items;
              v368 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
              ++v214->fields._version;
              if ( !v367 )
                goto LABEL_383;
              v369 = v214->fields._size;
              if ( (unsigned int)v369 >= LODWORD(v367->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v214,
                  v190,
                  *(const MethodInfo_3905F68 **)(*(_QWORD *)(v368[4] + 192LL) + 112LL));
              }
              else
              {
                v370 = &v367->obj.klass + v369;
                v214->fields._size = v369 + 1;
                v370[4] = (Il2CppClass *)v190;
                sub_1CE66A4(
                  (GrandQuestFolderBoardItem_o *)(v370 + 4),
                  (int32_t)v190,
                  v361,
                  v362,
                  v363,
                  v364,
                  v365,
                  v366);
              }
              v371 = sub_1CE694C(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v371, 0);
              *(_DWORD *)(v371 + 16) = 0;
              *(_DWORD *)(v371 + 20) = v237->fields.type;
              if ( !entity )
                goto LABEL_383;
              Master_object = (__int64)*v604;
              if ( !*v604 )
                goto LABEL_383;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                (int32_t)entity[1].klass,
                (Il2CppObject *)v371,
                (const MethodInfo_355B4E4 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
LABEL_98:
              max_length = restrictionWholeEntities->max_length;
              if ( (int)++v236 >= max_length )
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
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestMaster___);
    v372 = v606;
    if ( !Master_object )
      goto LABEL_383;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
      &v617,
      questId,
      (const MethodInfo_34E92A8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    Master_object = (__int64)v617;
    if ( !v617 )
      goto LABEL_383;
    Master_object = QuestEntity__HasFlag_43615840((QuestEntity_o *)v617, 0x100000, questPhase, 0);
    v373 = v604;
    if ( (Master_object & 1) != 0 )
    {
      if ( !v606 )
        goto LABEL_383;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = v606->fields.isAllOutBattle;
    }
    v606->fields.isNoSupportBattle = isAllOutBattle;
    Master_object = (__int64)v617;
    if ( !v617 )
      goto LABEL_383;
    v606->fields.isSupportOnlyForceBattle = QuestEntity__HasFlag_43615840((QuestEntity_o *)v617, 0x80000, questPhase, 0);
    Master_object = (__int64)v617;
    if ( !v617 )
      goto LABEL_383;
    v606->fields.isFatigure = QuestEntity__HasFlag_43615840((QuestEntity_o *)v617, 0x200000, questPhase, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_383;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v616, questId, questPhase, 0) )
    {
      Master_object = sub_1CE67A8(int___TypeInfo, 1);
      if ( !v616 )
        goto LABEL_383;
      v375 = Master_object;
      Master_object = QuestPhaseEntity__GetSingleForceSvtId(v616, 0);
      if ( !v375 )
        goto LABEL_383;
      if ( !*(_DWORD *)(v375 + 24) )
        goto LABEL_384;
      *(_DWORD *)(v375 + 32) = Master_object;
      p_svtIdForceBattleList->klass = (GrandQuestFolderBoardItem_c *)v375;
      sub_1CE66A4(p_svtIdForceBattleList, v375, v376, v377, v378, v379, v380, v381);
      Master_object = (__int64)v616;
      if ( !v616 )
        goto LABEL_383;
      v606->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v616, 0);
      Master_object = (__int64)v616;
      if ( !v616 )
        goto LABEL_383;
      v606->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v616, 0);
      Master_object = (__int64)v616;
      if ( !v616 )
        goto LABEL_383;
      v606->fields.isInfinityCost = QuestPhaseEntity__IsInfinityCost(v616, 0);
    }
    else
    {
      v606->fields.correctionIconId = -1;
    }
    v382 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v382 = BalanceConfig_TypeInfo;
    }
    v383 = sub_1CE67A8(QuestRestrictionInfo_SlotInfo___TypeInfo, (unsigned int)v382->static_fields->DeckMemberMax);
    p_fields->klass = (GrandQuestFolderBoardItem_c *)v383;
    sub_1CE66A4(p_fields, v383, v384, v385, v386, v387, v388, v389);
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_383;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_355B66C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    Master_object = (__int64)*p_restrictionSlotDetailDictionary;
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_383;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_355B66C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v390 = 1;
    for ( i = 1; ; i = v427 & v608 )
    {
      Master_object = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Master_object = (__int64)BalanceConfig_TypeInfo;
      }
      if ( v390 > *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 172LL) )
        break;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      if ( !*p_restrictionBaseEntity )
        goto LABEL_383;
      if ( !Master_object )
        goto LABEL_383;
      Master_object = (__int64)RestrictionSlotMaster__GetEntities(
                                 (RestrictionSlotMaster_o *)Master_object,
                                 (*p_restrictionBaseEntity)->fields.restrictionSlotId,
                                 v390,
                                 0);
      if ( !Master_object )
        goto LABEL_383;
      v392 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
      v393 = Master_object;
      questIdb = i;
      Master_object = (__int64)*p_restrictionSlotDictionary;
      v608 = v392 != 0;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_383;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
        v390,
        (Il2CppObject *)v393,
        (const MethodInfo_355B4E4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v394 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v394,
        (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
      v395 = *(_DWORD *)(v393 + 24);
      if ( v395 >= 1 )
      {
        v396 = 0;
        while ( (unsigned int)v396 < v395 )
        {
          v397 = *(_QWORD *)(v393 + 32 + 8 * v396);
          if ( !v397 || !v394 )
            goto LABEL_383;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v394,
                            *(_DWORD *)(v397 + 40),
                            (const MethodInfo_38E92BC *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            v190 = (Il2CppObject *)*(unsigned int *)(v397 + 40);
            v398 = v394->fields._items;
            v399 = Method_System_Collections_Generic_List_int__Add__;
            ++v394->fields._version;
            if ( !v398 )
              goto LABEL_383;
            v400 = v394->fields._size;
            if ( (unsigned int)v400 >= LODWORD(v398->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v394,
                (int32_t)v190,
                *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v399[4] + 192LL) + 112LL));
            }
            else
            {
              v394->fields._size = v400 + 1;
              v398->m_Items[v400] = (int)v190;
            }
          }
          v401 = *(_DWORD *)(v397 + 44);
          if ( v401 >= 1 )
          {
            if ( !v226 )
              goto LABEL_383;
            Master_object = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v226,
                              &item,
                              v401,
                              (const MethodInfo_34E92A8 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (Master_object & 1) != 0 )
            {
              if ( !v214 )
                goto LABEL_383;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v214,
                                item,
                                (const MethodInfo_39062F8 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) == 0 )
              {
                v190 = item;
                v408 = v214->fields._items;
                v409 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
                ++v214->fields._version;
                if ( !v408 )
                  goto LABEL_383;
                v410 = v214->fields._size;
                if ( (unsigned int)v410 >= LODWORD(v408->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v214,
                    v190,
                    *(const MethodInfo_3905F68 **)(*(_QWORD *)(v409[4] + 192LL) + 112LL));
                }
                else
                {
                  v411 = &v408->obj.klass + v410;
                  v214->fields._size = v410 + 1;
                  v411[4] = (Il2CppClass *)v190;
                  sub_1CE66A4(
                    (GrandQuestFolderBoardItem_o *)(v411 + 4),
                    (int32_t)v190,
                    v402,
                    v403,
                    v404,
                    v405,
                    v406,
                    v407);
                }
                v412 = sub_1CE694C(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v412, 0);
                *(_DWORD *)(v412 + 16) = v390;
                *(_DWORD *)(v412 + 20) = 0;
                if ( !item )
                  goto LABEL_383;
                Master_object = (__int64)*v373;
                if ( !*v373 )
                  goto LABEL_383;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  (int32_t)item[1].klass,
                  (Il2CppObject *)v412,
                  (const MethodInfo_355B4E4 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v395 = *(_DWORD *)(v393 + 24);
          if ( (int)++v396 >= v395 )
            goto LABEL_159;
        }
        goto LABEL_384;
      }
LABEL_159:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !Master_object )
        goto LABEL_383;
      Master_object = (__int64)RestrictionSlotDetailMaster__GetEntities(
                                 (RestrictionSlotDetailMaster_o *)Master_object,
                                 v394,
                                 0);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_383;
      v413 = Master_object;
      System_Collections_Generic_Dictionary_int__object___Add(
        *p_restrictionSlotDetailDictionary,
        v390,
        (Il2CppObject *)Master_object,
        (const MethodInfo_355B4E4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v415 = (QuestRestrictionInfo_SlotInfo_o *)sub_1CE694C(QuestRestrictionInfo_SlotInfo_TypeInfo);
      QuestRestrictionInfo_SlotInfo___ctor(v415, v416);
      if ( !klass )
        goto LABEL_383;
      if ( v415 )
      {
        Master_object = sub_1CE683C(v415, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_object )
        {
          v587 = sub_1CE697C(0);
          sub_1CE6828(v587, 0);
        }
      }
      v423 = v390 - 1;
      if ( (unsigned int)(v390 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_384;
      v424 = &klass->_1.image + v423;
      v424[4] = v415;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v424 + 4), (int32_t)v415, v417, v418, v419, v420, v421, v422);
      servantNumMax = v372->fields.servantNumMax;
      if ( servantNumMax < 1 || v423 < servantNumMax )
      {
        v429 = QuestRestrictionInfo___c_TypeInfo;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v429 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__84_0 = (System_Func_object__bool__o *)v429->static_fields->__9__84_0;
        if ( !_9__84_0 )
        {
          if ( !v429->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v429);
            v429 = QuestRestrictionInfo___c_TypeInfo;
          }
          v431 = (Il2CppObject *)v429->static_fields->__9;
          _9__84_0 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__84_0, v431, Method_QuestRestrictionInfo___c__Setup_b__84_0__, 0);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
          static_fields->__9__84_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__84_0;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__84_0,
            (int32_t)_9__84_0,
            v433,
            v434,
            v435,
            v436,
            v437,
            v438);
        }
        v439 = BasicHelper__Any_object__52352392(
                 (System_Object_array *)v393,
                 (System_Func_T__bool__o *)_9__84_0,
                 (const MethodInfo_31ED588 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v440 = QuestRestrictionInfo___c_TypeInfo;
        v441 = v439;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v440 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__84_1 = (System_Func_object__bool__o *)v440->static_fields->__9__84_1;
        if ( !_9__84_1 )
        {
          if ( !v440->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v440);
            v440 = QuestRestrictionInfo___c_TypeInfo;
          }
          v443 = (Il2CppObject *)v440->static_fields->__9;
          _9__84_1 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__84_1, v443, Method_QuestRestrictionInfo___c__Setup_b__84_1__, 0);
          v444 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v444->__9__84_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__84_1;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&v444->__9__84_1,
            (int32_t)_9__84_1,
            v445,
            v446,
            v447,
            v448,
            v449,
            v450);
        }
        v451 = BasicHelper__Any_object__52352392(
                 (System_Object_array *)v393,
                 (System_Func_T__bool__o *)_9__84_1,
                 (const MethodInfo_31ED588 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v452 = QuestRestrictionInfo___c_TypeInfo;
        v453 = v451;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v452 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__84_2 = (System_Func_object__bool__o *)v452->static_fields->__9__84_2;
        if ( !_9__84_2 )
        {
          if ( !v452->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v452);
            v452 = QuestRestrictionInfo___c_TypeInfo;
          }
          v455 = (Il2CppObject *)v452->static_fields->__9;
          _9__84_2 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__84_2, v455, Method_QuestRestrictionInfo___c__Setup_b__84_2__, 0);
          v456 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v456->__9__84_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__84_2;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&v456->__9__84_2,
            (int32_t)_9__84_2,
            v457,
            v458,
            v459,
            v460,
            v461,
            v462);
        }
        Master_object = BasicHelper__Any_object__52352392(
                          (System_Object_array *)v393,
                          (System_Func_T__bool__o *)_9__84_2,
                          (const MethodInfo_31ED588 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        if ( v453 || !v441 || (Master_object & 1) != 0 )
        {
          v372 = v606;
          if ( (v441 || !v453) | Master_object & 1 )
          {
            if ( v441 || v453 || (((unsigned int)Master_object ^ 1) & 1) != 0 )
            {
              if ( Master_object & 1 | (!v441 || !v453) )
              {
                if ( ((v441 || v453) & (unsigned int)Master_object & 1) != 0 )
                {
                  v518 = p_fields->klass;
                  if ( !p_fields->klass )
                    goto LABEL_383;
                  if ( (unsigned int)v423 >= LODWORD(v518->_1.namespaze) )
                    goto LABEL_384;
                  v519 = *((_QWORD *)&v518->_1.byval_arg.data + v423);
                  if ( !v519 )
                    goto LABEL_383;
                  *(_DWORD *)(v519 + 16) = 4;
                  v606->fields.isMyServantOrSupport = 1;
                }
              }
              else
              {
                v520 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_383;
                if ( (unsigned int)v423 >= LODWORD(v520->_1.namespaze) )
                  goto LABEL_384;
                v521 = *((_QWORD *)&v520->_1.byval_arg.data + v423);
                if ( !v521 )
                  goto LABEL_383;
                *(_DWORD *)(v521 + 16) = 3;
                v606->fields.isMyServantOrNpc = 1;
              }
            }
            else
            {
              v465 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_383;
              if ( (unsigned int)v423 >= LODWORD(v465->_1.namespaze) )
                goto LABEL_384;
              v466 = *((_QWORD *)&v465->_1.byval_arg.data + v423);
              if ( !v466 )
                goto LABEL_383;
              *(_DWORD *)(v466 + 16) = 2;
              v606->fields.supportInitIndex = v390;
            }
          }
          else
          {
            v467 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_383;
            if ( (unsigned int)v423 >= LODWORD(v467->_1.namespaze) )
              goto LABEL_384;
            v468 = *((_QWORD *)&v467->_1.byval_arg.data + v423);
            if ( !v468 )
              goto LABEL_383;
            *(_DWORD *)(v468 + 16) = 1;
          }
        }
        else
        {
          v372 = v606;
          v463 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_383;
          if ( (unsigned int)v423 >= LODWORD(v463->_1.namespaze) )
            goto LABEL_384;
          v464 = *((_QWORD *)&v463->_1.byval_arg.data + v423);
          if ( !v464 )
            goto LABEL_383;
          *(_DWORD *)(v464 + 16) = 0;
        }
        if ( !v413 )
          goto LABEL_383;
        v469 = *(_DWORD *)(v413 + 24);
        if ( v469 >= 1 )
        {
          v470 = 0;
          while ( v470 < v469 )
          {
            v471 = *(_QWORD *)(v413 + 8LL * (int)v470 + 32);
            if ( !v471 )
              goto LABEL_383;
            if ( !*(_DWORD *)(v393 + 24) )
              break;
            v472 = *(_QWORD *)(v393 + 32);
            if ( !v472 )
              goto LABEL_383;
            if ( *(_DWORD *)(v471 + 16) == *(_DWORD *)(v472 + 40) )
            {
              v473 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_383;
              if ( (unsigned int)v423 >= LODWORD(v473->_1.namespaze) )
                goto LABEL_384;
              v474 = *((_QWORD *)&v473->_1.byval_arg.data + v423);
              if ( !v474 )
                goto LABEL_383;
              if ( *(_DWORD *)(v474 + 16) <= 2u )
              {
                Master_object = *(_QWORD *)(v471 + 40);
                if ( !Master_object )
                  goto LABEL_383;
                v475 = *(System_Collections_Generic_List_object__o **)(v474 + 24);
                Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
                if ( !v475 )
                  goto LABEL_383;
                Master_object = sub_1CE683C(Master_object, int___TypeInfo);
                v482 = v475->fields._items;
                v483 = Method_System_Collections_Generic_List_int____Add__;
                ++v475->fields._version;
                if ( !v482 )
                  goto LABEL_383;
                v484 = v475->fields._size;
                v485 = Master_object;
                if ( (unsigned int)v484 >= LODWORD(v482->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v475,
                    (Il2CppObject *)Master_object,
                    *(const MethodInfo_3905F68 **)(*(_QWORD *)(v483[4] + 192LL) + 112LL));
                }
                else
                {
                  v486 = &v482->obj.klass + v484;
                  v475->fields._size = v484 + 1;
                  v486[4] = (Il2CppClass *)v485;
                  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v486 + 4), v485, v476, v477, v478, v479, v480, v481);
                }
                v487 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_383;
                if ( (unsigned int)v423 >= LODWORD(v487->_1.namespaze) )
                  goto LABEL_384;
                v488 = *((_QWORD *)&v487->_1.byval_arg.data + v423);
                if ( !v488 )
                  goto LABEL_383;
                Master_object = *(_QWORD *)(v488 + 32);
                if ( !Master_object )
                  goto LABEL_383;
                v190 = (Il2CppObject *)*(unsigned int *)(v471 + 48);
                v489 = *(struct System_Int32_array **)(Master_object + 16);
                v490 = Method_System_Collections_Generic_List_Restriction_RangeType__Add__;
                ++*(_DWORD *)(Master_object + 28);
                if ( !v489 )
                  goto LABEL_383;
                v491 = *(int *)(Master_object + 24);
                if ( (unsigned int)v491 >= LODWORD(v489->max_length) )
                {
                  System_Collections_Generic_List_Int32Enum___AddWithResize(
                    (System_Collections_Generic_List_T__o *)Master_object,
                    (int32_t)v190,
                    *(const MethodInfo_38EB770 **)(*(_QWORD *)(v490[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Master_object + 24) = v491 + 1;
                  v489->m_Items[v491] = (int)v190;
                }
              }
              if ( *(_DWORD *)(v471 + 32) == 2 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10384/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, 0);
                v492 = (System_String_o *)Master_object;
              }
              else
              {
                v492 = *(System_String_o **)(v471 + 24);
              }
              v493 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_383;
              if ( (unsigned int)v423 >= LODWORD(v493->_1.namespaze) )
                goto LABEL_384;
              v494 = *((_QWORD *)&v493->_1.byval_arg.data + v423);
              if ( !v494 )
                goto LABEL_383;
              Master_object = System_String__IsNullOrEmpty(*(System_String_o **)(v494 + 40), 0);
              v501 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_383;
              if ( (unsigned int)v423 >= LODWORD(v501->_1.namespaze) )
                goto LABEL_384;
              v502 = *((_QWORD *)&v501->_1.byval_arg.data + v423);
              if ( !v502 )
                goto LABEL_383;
              v503 = (System_String_o **)(v502 + 40);
              if ( (Master_object & 1) == 0 )
                v492 = System_String__Concat_65161092(*v503, (System_String_o *)StringLiteral_43/*"\n"*/, v492, 0);
              *v503 = v492;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)v503, (int32_t)v492, v495, v496, v497, v498, v499, v500);
            }
            v469 = *(_DWORD *)(v413 + 24);
            if ( (int)++v470 >= v469 )
              goto LABEL_249;
          }
          goto LABEL_384;
        }
LABEL_249:
        v504 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_383;
        if ( (unsigned int)v423 >= LODWORD(v504->_1.namespaze) )
          goto LABEL_384;
        v505 = QuestRestrictionInfo___c_TypeInfo;
        v506 = *((_QWORD *)&v504->_1.byval_arg.data + v423);
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v505 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__84_3 = (System_Func_object__bool__o *)v505->static_fields->__9__84_3;
        if ( !_9__84_3 )
        {
          if ( !v505->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v505);
            v505 = QuestRestrictionInfo___c_TypeInfo;
          }
          v508 = (Il2CppObject *)v505->static_fields->__9;
          _9__84_3 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__84_3, v508, Method_QuestRestrictionInfo___c__Setup_b__84_3__, 0);
          v509 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v509->__9__84_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__84_3;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&v509->__9__84_3,
            (int32_t)_9__84_3,
            v510,
            v511,
            v512,
            v513,
            v514,
            v515);
          v372 = v606;
        }
        Master_object = BasicHelper__Any_object__52352392(
                          (System_Object_array *)v413,
                          (System_Func_T__bool__o *)_9__84_3,
                          (const MethodInfo_31ED588 *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
        if ( !v506 )
          goto LABEL_383;
        *(_BYTE *)(v506 + 48) = (Master_object & 1) == 0;
        v516 = p_fields->klass;
        v427 = questIdb;
        if ( !p_fields->klass )
          goto LABEL_383;
        if ( (unsigned int)v423 >= LODWORD(v516->_1.namespaze) )
          goto LABEL_384;
        v517 = *((_QWORD *)&v516->_1.byval_arg.data + v423);
        if ( !v517 )
          goto LABEL_383;
        v373 = v604;
        if ( *(_DWORD *)(v517 + 16) == 1 )
        {
          if ( *(_BYTE *)(v517 + 48) )
            v372->fields.isNpcEditablePos = 1;
        }
        *(_BYTE *)(v517 + 49) = *(_DWORD *)(v393 + 24) != 0;
      }
      else
      {
        v426 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_383;
        v427 = questIdb;
        if ( (unsigned int)v423 >= LODWORD(v426->_1.namespaze) )
          goto LABEL_384;
        v428 = *((_QWORD *)&v426->_1.byval_arg.data + v423);
        if ( !v428 )
          goto LABEL_383;
        v373 = v604;
        *(_DWORD *)(v428 + 16) = 5;
        *(_BYTE *)(v428 + 48) = 0;
      }
      ++v390;
    }
    if ( !v214
      || (v522 = System_Collections_Generic_List_object___ToArray(
                   v214,
                   (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__),
          v372->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v522,
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&v372->fields.restrictionMessageEntities,
            (int32_t)v522,
            v523,
            v524,
            v525,
            v526,
            v527,
            v528),
          (slotInfos = v372->fields.slotInfos) == 0) )
    {
LABEL_383:
      sub_1CE6958(Master_object, v190);
    }
    v530 = slotInfos->max_length;
    if ( v530 >= 1 )
    {
      v531 = 0;
      v532 = 0;
      v533 = 0;
      v534 = 0;
      while ( v530 != v531 )
      {
        v535 = slotInfos->m_Items[v531];
        if ( !v535 )
          goto LABEL_383;
        switch ( v535->fields.slotType )
        {
          case 0:
          case 3:
          case 4:
            ++v534;
            break;
          case 1:
            ++v533;
            break;
          case 2:
            ++v532;
            break;
          default:
            break;
        }
        if ( v530 == ++v531 )
          goto LABEL_289;
      }
LABEL_384:
      sub_1CE6960(Master_object);
    }
    v534 = 0;
    v533 = 0;
    v532 = 0;
LABEL_289:
    if ( v532 == 0 && (i & 1) != 0 )
      v372->fields.isNoSupportBattle = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object )
      goto LABEL_383;
    Master_object = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                               (NpcFollowerMaster_o *)Master_object,
                               v372->fields.questId,
                               v372->fields.questPhase,
                               0);
    if ( !Master_object )
      goto LABEL_383;
    v536 = *(_DWORD *)(Master_object + 24);
    if ( v536 >= 1 )
    {
      v537 = 0;
      while ( v536 != v537 )
      {
        v538 = *(_QWORD *)(Master_object + 8LL * v537 + 32);
        if ( !v538 )
          goto LABEL_383;
        if ( !*(_BYTE *)(v538 + 113) && v536 != ++v537 )
          continue;
        goto LABEL_303;
      }
      goto LABEL_384;
    }
    v537 = 0;
LABEL_303:
    Master_object = (__int64)v617;
    if ( !v617 )
      goto LABEL_383;
    HasFlag_43615840 = QuestEntity__HasFlag_43615840((QuestEntity_o *)v617, 0x10000000, questPhase, 0);
    v372->fields.isNpcMultipleBattle = HasFlag_43615840;
    if ( !HasFlag_43615840 )
      v372->fields.isNpcMultipleBattle = v537 < v536 && v534 > 0 && v533 > 0;
    Master_object = (__int64)v617;
    if ( !v617 )
      goto LABEL_383;
    v540 = QuestEntity__HasFlag_43615840((QuestEntity_o *)v617, 0x20000000, questPhase, 0);
    v372->fields.isNpcOnlyBattle = v540;
    if ( !v540 )
      v372->fields.isNpcOnlyBattle = v537 < v536 && v534 == 0 && v533 > 0;
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_383;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 8, 0) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            *p_restrictionSlotDictionary,
                            2,
                            0,
                            (const MethodInfo_31F1E88 *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v542 = 2;
      else
        v542 = 1;
      DeckMemberMax = v372->fields.servantNumMax;
      v372->fields.servantNumMin = v542;
      if ( !DeckMemberMax )
      {
        v544 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v544 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v544->static_fields->DeckMemberMax;
        v372->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v372->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v372->fields.isNpcMultipleBattle )
        v372->fields.myServantNumMax = v534;
    }
    else
    {
      v372->fields.myServantNumMax = v534;
      if ( v534 == 1 && DeckMemberMax == 1 )
      {
        Master_object = (__int64)v372->fields.restrictionSlotDetailDictionary;
        v372->fields.isFixedMyServantSingle = 1;
        if ( !Master_object )
          goto LABEL_383;
        Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                                   1,
                                   (const MethodInfo_355B444 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( Master_object )
        {
          v545 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
          if ( v545 )
          {
            if ( !(_DWORD)v545 )
              goto LABEL_384;
            v546 = *(_QWORD *)(Master_object + 32);
            if ( !v546 )
              goto LABEL_383;
            Master_object = *(_QWORD *)(v546 + 40);
            if ( !Master_object )
              goto LABEL_383;
            v547 = System_Array__Clone((System_Array_o *)Master_object, 0);
            v372->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)sub_1CE683C(
                                                                                              v547,
                                                                                              int___TypeInfo);
            v548 = sub_1CE683C(v547, int___TypeInfo);
            sub_1CE66A4(
              (GrandQuestFolderBoardItem_o *)&v372->fields.fixedMyServantSingleIndividualities,
              v548,
              v549,
              v550,
              v551,
              v552,
              v553,
              v554);
          }
        }
      }
    }
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_383;
    Master_object = System_Collections_Generic_Dictionary_int__object___get_Count(
                      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                      (const MethodInfo_355B194 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__object__o *)v372->fields.restrictionSlotDictionary;
    v372->fields.isSupportOnly = (int)Master_object > 0;
    if ( !restrictionSlotDictionary )
      goto LABEL_383;
    Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Values(
                               restrictionSlotDictionary,
                               (const MethodInfo_355B2F4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Master_object )
      goto LABEL_383;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v612,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Master_object,
      (const MethodInfo_3C58578 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v613 = v612;
    do
    {
      v556 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
               &v613,
               (const MethodInfo_36A58A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v556 )
        break;
      if ( !v613.fields._currentValue )
        sub_1CE6958(v556, v557);
      monitor = (int)v613.fields._currentValue[1].monitor;
      if ( monitor >= 1 )
      {
        v559 = 0;
        while ( 1 )
        {
          if ( monitor == v559 )
            sub_1CE6960(v556);
          v560 = *((_QWORD *)&v613.fields._currentValue[2].klass + v559);
          if ( !v560 )
            sub_1CE6958(v556, v557);
          if ( *(_DWORD *)(v560 + 28) == 1 )
            break;
          if ( monitor == ++v559 )
            goto LABEL_344;
        }
        v372->fields.isSupportOnly = 0;
        break;
      }
LABEL_344:
      ;
    }
    while ( v372->fields.isSupportOnly );
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &v613,
      (const MethodInfo_36A58A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    v561 = (System_Text_StringBuilder_o *)sub_1CE694C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v561, 0);
    v562 = (System_Text_StringBuilder_o *)sub_1CE694C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v562, 0);
    v563 = *p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_383;
    v564 = v563->max_length;
    if ( v564 >= 1 )
    {
      v565 = 0;
      while ( 1 )
      {
        if ( v565 >= v564 )
          goto LABEL_384;
        v566 = v563->m_Items[v565];
        if ( !v566 )
          goto LABEL_383;
        Master_object = System_String__IsNullOrEmpty(v566->fields.summary, 0);
        if ( (Master_object & 1) == 0 )
          break;
LABEL_373:
        v564 = v563->max_length;
        if ( (int)++v565 >= v564 )
          goto LABEL_374;
      }
      type = v566->fields.type;
      if ( type == 10 || type == 2 )
      {
        v569 = 1;
      }
      else
      {
        if ( type == 1 )
        {
          targetVals2 = v566->fields.targetVals2;
          if ( !targetVals2 )
            goto LABEL_383;
          v569 = 1;
          v570 = LODWORD(targetVals2->max_length) == 1;
LABEL_361:
          if ( (v570 & v569) != 0 )
          {
            if ( v372->fields.isRestriction )
            {
              if ( !v562 )
                goto LABEL_383;
              System_Text_StringBuilder__Append_65206788(v562, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
            }
            else if ( !v562 )
            {
              goto LABEL_383;
            }
            Master_object = (__int64)System_Text_StringBuilder__Append_65206788(v562, v566->fields.summary, 0);
            v372->fields.isRestriction = 1;
          }
          if ( v569 )
          {
            if ( v372->fields.isRestriction )
            {
              if ( !v561 )
                goto LABEL_383;
              System_Text_StringBuilder__Append_65206788(v561, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
            }
            else if ( !v561 )
            {
              goto LABEL_383;
            }
            Master_object = (__int64)System_Text_StringBuilder__Append_65206788(v561, v566->fields.summary, 0);
            v372->fields.isRestriction = 1;
          }
          goto LABEL_373;
        }
        v569 = 0;
      }
      v570 = 1;
      goto LABEL_361;
    }
LABEL_374:
    if ( !v562 )
      goto LABEL_383;
    Master_object = System_Text_StringBuilder__get_Length(v562, 0);
    if ( (int)Master_object >= 1 )
    {
      v571 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v562->klass->vtable._3_ToString.methodPtr)(
               v562,
               v562->klass->vtable._3_ToString.method);
      p_confirmRestrictionMessage->klass = (GrandQuestFolderBoardItem_c *)v571;
      sub_1CE66A4(p_confirmRestrictionMessage, v571, v572, v573, v574, v575, v576, v577);
    }
    if ( !v561 )
      goto LABEL_383;
    if ( System_Text_StringBuilder__get_Length(v561, 0) >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v578 = LocalizationManager__Get((System_String_o *)StringLiteral_10347/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      v579 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v561->klass->vtable._3_ToString.methodPtr)(
                                  v561,
                                  v561->klass->vtable._3_ToString.method);
      v580 = System_String__Concat_65161092(v578, (System_String_o *)StringLiteral_43/*"\n"*/, v579, 0);
      p_restrictionMessage->klass = (GrandQuestFolderBoardItem_c *)v580;
      sub_1CE66A4(p_restrictionMessage, (int32_t)v580, v581, v582, v583, v584, v585, v586);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(this, v192);
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
  struct RestrictionEntity_o *v16; // x25
  struct RestrictionEntity_o **p_totalCostRestrictionEntity; // x0
  BalanceConfig_c *v18; // x0
  struct QuestRestrictionInfo_DeckSvtInfo_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Boolean_array *DeckPositionList; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int *targetVals; // x8
  int32_t v34; // w8
  struct System_Int32_array *v35; // x8
  il2cpp_array_size_t v36; // x9
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x8
  Il2CppObject *v41; // x25
  int32_t v42; // w0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  BalanceConfig_c *v49; // x0
  struct QuestRestrictionInfo_DeckSvtInfo_array *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  struct FollowerInfo_array *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct System_Int32_array *v64; // x8
  _BOOL4 isRestriction; // w9
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x8
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x8
  __int64 v74; // x9
  struct System_Collections_Generic_List_int__o *specifiedPositionList; // x29
  struct System_Int32_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x8
  struct System_Collections_Generic_List_int__o *v83; // x29
  struct System_Int32_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  struct System_String_o *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  System_String_o *v94; // x0
  struct System_String_o *v95; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  long double v102; // q0
  __int64 v103; // x0
  __int64 v104; // x0
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  bool HasFlag; // w0
  bool v112; // w0
  System_Collections_Generic_List_object__o *v113; // x20
  int32_t v114; // w2
  int32_t v115; // w3
  System_String_o *v116; // x4
  int32_t v117; // w5
  int64_t v118; // x6
  System_String_o *v119; // x7
  bool v120; // w0
  bool HasFlag_43615840; // w0
  bool v122; // w0
  System_Collections_Generic_List_object__o *v123; // x20
  int32_t v124; // w2
  int32_t v125; // w3
  System_String_o *v126; // x4
  int32_t v127; // w5
  int64_t v128; // x6
  System_String_o *v129; // x7
  bool v130; // w0
  int32_t v131; // w2
  int32_t v132; // w3
  System_String_o *v133; // x4
  int32_t v134; // w5
  int64_t v135; // x6
  System_String_o *v136; // x7
  int32_t v137; // w2
  int32_t v138; // w3
  System_String_o *v139; // x4
  int32_t v140; // w5
  int64_t v141; // x6
  System_String_o *v142; // x7
  int32_t v143; // w2
  int32_t v144; // w3
  System_String_o *v145; // x4
  int32_t v146; // w5
  int64_t v147; // x6
  System_String_o *v148; // x7
  GrandQuestFolderBoardItem_o *p_uniqueSvtRestrictionEntity; // [xsp+20h] [xbp-C0h]
  GrandQuestFolderBoardItem_o *p_servantNumRestrictionEntity; // [xsp+48h] [xbp-98h]
  GrandQuestFolderBoardItem_o *p_myServantNumRestrictionEntity; // [xsp+50h] [xbp-90h]
  GrandQuestFolderBoardItem_o *p_uniqueIndividualityEntity; // [xsp+60h] [xbp-80h]
  QuestRestrictionInfoEntity_o *v153; // [xsp+68h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v154; // [xsp+70h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4E05D71 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_1CE6700(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1CE6700(&QuestRestrictionInfo_DeckSvtInfo___TypeInfo);
    sub_1CE6700(&FollowerInfo___TypeInfo);
    sub_1CE6700(&int___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&System_Text_StringBuilder_TypeInfo);
    sub_1CE6700(&StringLiteral_43/*"\n"*/);
    sub_1CE6700(&StringLiteral_10347/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_4E05D71 = 1;
  }
  v154 = 0;
  entity = 0;
  v153 = 0;
  v3 = (System_Text_StringBuilder_o *)sub_1CE694C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  v4 = (System_Text_StringBuilder_o *)sub_1CE694C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0);
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_163;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    p_uniqueIndividualityEntity = (GrandQuestFolderBoardItem_o *)&this->fields.uniqueIndividualityEntity;
    p_servantNumRestrictionEntity = (GrandQuestFolderBoardItem_o *)&this->fields.servantNumRestrictionEntity;
    p_myServantNumRestrictionEntity = (GrandQuestFolderBoardItem_o *)&this->fields.myServantNumRestrictionEntity;
    v15 = 0;
    p_uniqueSvtRestrictionEntity = (GrandQuestFolderBoardItem_o *)&this->fields.uniqueSvtRestrictionEntity;
    while ( 1 )
    {
      if ( v15 >= max_length )
        goto LABEL_164;
      v16 = restrictionEntityList->m_Items[v15];
      if ( !v16 )
        goto LABEL_163;
      switch ( v16->fields.type )
      {
        case 3:
          p_totalCostRestrictionEntity = &this->fields.totalCostRestrictionEntity;
          this->fields.totalCostRestrictionEntity = v16;
          goto LABEL_52;
        case 5:
          this->fields.supportOnlyRestrictionEntity = v16;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&this->fields.supportOnlyRestrictionEntity,
            (int32_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isSupportOnly = 1;
          goto LABEL_78;
        case 6:
          p_uniqueSvtRestrictionEntity->klass = (GrandQuestFolderBoardItem_c *)v16;
          sub_1CE66A4(p_uniqueSvtRestrictionEntity, (int32_t)v16, v7, v8, v9, v10, v11, v12);
          v18 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v18 = BalanceConfig_TypeInfo;
          }
          v19 = (struct QuestRestrictionInfo_DeckSvtInfo_array *)sub_1CE67A8(
                                                                   QuestRestrictionInfo_DeckSvtInfo___TypeInfo,
                                                                   (unsigned int)v18->static_fields->DeckMemberMax);
          this->fields.deckSvtInfoList = v19;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&this->fields.deckSvtInfoList,
            (int32_t)v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          this->fields.isUniqueServant = 1;
          goto LABEL_78;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v16;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&this->fields.fixedSupportPositionRestrictionEntity,
            (int32_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          DeckPositionList = RestrictionEntity__getDeckPositionList(v16, 0);
          this->fields.supportPositionList = DeckPositionList;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&this->fields.supportPositionList,
            (int32_t)DeckPositionList,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
          this->fields.isFixedSupportPosition = 1;
          goto LABEL_78;
        case 8:
          this->fields.fixedMyServantPositionRestrictionEntity = v16;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
            (int32_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isFixedMyServantPosition = 1;
          goto LABEL_78;
        case 9:
          this->fields.fixedMyServantSingleRestrictionEntity = v16;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&this->fields.fixedMyServantSingleRestrictionEntity,
            (int32_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isFixedMyServantSingle = 1;
          goto LABEL_78;
        case 0xA:
          p_servantNumRestrictionEntity->klass = (GrandQuestFolderBoardItem_c *)v16;
          sub_1CE66A4(p_servantNumRestrictionEntity, (int32_t)v16, v7, v8, v9, v10, v11, v12);
          targetVals = (int *)v16->fields.targetVals;
          if ( v16->fields.rangeType == 5 )
          {
            if ( targetVals && targetVals[6] >= 2 )
            {
              this->fields.servantNumMin = targetVals[8];
              v34 = targetVals[9];
LABEL_58:
              this->fields.servantNumMax = v34;
            }
          }
          else if ( targetVals )
          {
            v74 = *((_QWORD *)targetVals + 3);
            if ( v74 )
            {
              if ( !(_DWORD)v74 )
                goto LABEL_164;
              v34 = targetVals[8];
              goto LABEL_58;
            }
          }
LABEL_78:
          max_length = restrictionEntityList->max_length;
          if ( (int)++v15 >= max_length )
            goto LABEL_79;
          break;
        case 0xB:
          p_myServantNumRestrictionEntity->klass = (GrandQuestFolderBoardItem_c *)v16;
          sub_1CE66A4(p_myServantNumRestrictionEntity, (int32_t)v16, v7, v8, v9, v10, v11, v12);
          v35 = v16->fields.targetVals;
          if ( !v35 )
            goto LABEL_78;
          v36 = v35->max_length;
          if ( !v36 )
            goto LABEL_78;
          if ( !(_DWORD)v36 )
            goto LABEL_164;
          this->fields.myServantNumMax = v35->m_Items[0];
          goto LABEL_78;
        case 0xC:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_163;
          items = myServantOrNpcRestrictionEntityList->fields._items;
          v38 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !items )
            goto LABEL_163;
          size = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v16,
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            myServantOrNpcRestrictionEntityList->fields._size = size + 1;
            v40[4] = (Il2CppClass *)v16;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v40 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
          }
          specifiedPositionList = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v16,
                                                                                               0);
          if ( !specifiedPositionList )
            goto LABEL_163;
          v76 = specifiedPositionList->fields._items;
          v77 = Method_System_Collections_Generic_List_int__Add__;
          ++specifiedPositionList->fields._version;
          if ( !v76 )
            goto LABEL_163;
          v78 = specifiedPositionList->fields._size;
          v6 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v78 >= LODWORD(v76->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              specifiedPositionList,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
          }
          else
          {
            specifiedPositionList->fields._size = v78 + 1;
            v76->m_Items[v78] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrNpc = 1;
          goto LABEL_78;
        case 0xE:
          this->fields.fixedServantPositionRestrictionEntity = v16;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&this->fields.fixedServantPositionRestrictionEntity,
            (int32_t)v16,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isNeedStarting = 1;
          goto LABEL_78;
        case 0xF:
          p_uniqueIndividualityEntity->klass = (GrandQuestFolderBoardItem_c *)v16;
          sub_1CE66A4(p_uniqueIndividualityEntity, (int32_t)v16, v7, v8, v9, v10, v11, v12);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v16->fields.targetVals;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_163;
          v41 = System_Array__Clone((System_Array_o *)myServantOrNpcRestrictionEntityList, 0);
          this->fields.uniqueIndividualitys = (struct System_Int32_array *)sub_1CE683C(v41, int___TypeInfo);
          v42 = sub_1CE683C(v41, int___TypeInfo);
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&this->fields.uniqueIndividualitys,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48);
          v49 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v49 = BalanceConfig_TypeInfo;
          }
          v50 = (struct QuestRestrictionInfo_DeckSvtInfo_array *)sub_1CE67A8(
                                                                   QuestRestrictionInfo_DeckSvtInfo___TypeInfo,
                                                                   (unsigned int)v49->static_fields->DeckMemberMax);
          this->fields.deckSvtInfoList = v50;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&this->fields.deckSvtInfoList,
            (int32_t)v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56);
          v57 = (struct FollowerInfo_array *)sub_1CE67A8(
                                               FollowerInfo___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckNpcInfoList = v57;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&this->fields.deckNpcInfoList,
            (int32_t)v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63);
          this->fields.isUniqueIndividuality = 1;
          goto LABEL_78;
        case 0x10:
          goto LABEL_65;
        case 0x11:
          this->fields.isDataLostBattle = 1;
          v64 = v16->fields.targetVals;
          if ( !v64 )
            goto LABEL_163;
          if ( !LODWORD(v64->max_length) )
            goto LABEL_164;
          isRestriction = this->fields.isRestriction;
          this->fields.dataLostBattleId = v64->m_Items[0];
          if ( isRestriction )
          {
LABEL_11:
            if ( !v3 )
              goto LABEL_163;
            System_Text_StringBuilder__Append_65206788(v3, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
          }
          else
          {
LABEL_40:
            if ( !v3 )
              goto LABEL_163;
          }
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_65206788(
                                                                                               v3,
                                                                                               v16->fields.name,
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
          v66 = myServantOrNpcRestrictionEntityList->fields._items;
          v67 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v66 )
            goto LABEL_163;
          v68 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v16,
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &v66->obj.klass + v68;
            myServantOrNpcRestrictionEntityList->fields._size = v68 + 1;
            v69[4] = (Il2CppClass *)v16;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v69 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
          }
LABEL_65:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_163;
          v79 = myServantOrNpcRestrictionEntityList->fields._items;
          v80 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v79 )
            goto LABEL_163;
          v81 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v81 >= LODWORD(v79->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v16,
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
          }
          else
          {
            v82 = &v79->obj.klass + v81;
            myServantOrNpcRestrictionEntityList->fields._size = v81 + 1;
            v82[4] = (Il2CppClass *)v16;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v82 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
          }
          v83 = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v16,
                                                                                               0);
          if ( !v83 )
            goto LABEL_163;
          v84 = v83->fields._items;
          v85 = Method_System_Collections_Generic_List_int__Add__;
          ++v83->fields._version;
          if ( !v84 )
            goto LABEL_163;
          v86 = v83->fields._size;
          v6 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v86 >= LODWORD(v84->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v83,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            v83->fields._size = v86 + 1;
            v84->m_Items[v86] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrSupport = 1;
          goto LABEL_78;
        case 0x19:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.activeGrandBoardRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_163;
LABEL_49:
          v70 = myServantOrNpcRestrictionEntityList->fields._items;
          v71 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v70 )
            goto LABEL_163;
          v72 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v16,
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v73 = &v70->obj.klass + v72;
            myServantOrNpcRestrictionEntityList->fields._size = v72 + 1;
            v73[4] = (Il2CppClass *)v16;
            p_totalCostRestrictionEntity = (struct RestrictionEntity_o **)(v73 + 4);
LABEL_52:
            sub_1CE66A4(
              (GrandQuestFolderBoardItem_o *)p_totalCostRestrictionEntity,
              (int32_t)v16,
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
    v87 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v3->klass->vtable._3_ToString.methodPtr)(
                                      v3,
                                      v3->klass->vtable._3_ToString.method);
    this->fields.confirmRestrictionMessage = v87;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.confirmRestrictionMessage,
      (int32_t)v87,
      v88,
      v89,
      v90,
      v91,
      v92,
      v93);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v94 = LocalizationManager__Get((System_String_o *)StringLiteral_10347/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    v95 = System_String__Concat_65161092(
            v94,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            this->fields.confirmRestrictionMessage,
            0);
    this->fields.restrictionMessage = v95;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.restrictionMessage,
      (int32_t)v95,
      v96,
      v97,
      v98,
      v99,
      v100,
      v101);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_163;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_163;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)myServantOrNpcRestrictionEntityList,
    &entity,
    this->fields.questId,
    (const MethodInfo_34E92A8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_163;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_163;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)myServantOrNpcRestrictionEntityList,
    &v154,
    this->fields.questId,
    this->fields.questPhase,
    0);
  v103 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v103 + 309) & 1) == 0 )
    v103 = sub_1CBC788(v102);
  v104 = *(_QWORD *)(*(_QWORD *)(v103 + 192) + 16LL);
  if ( (*(_BYTE *)(v104 + 309) & 1) == 0 )
    v104 = sub_1CBC788(v102);
  myServantOrNpcRestrictionEntityList = **(System_Collections_Generic_List_object__o ***)(v104 + 184);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_163;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_163;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         (QuestRestrictionInfoMaster_o *)myServantOrNpcRestrictionEntityList,
         &v153,
         this->fields.questId,
         this->fields.questPhase,
         0) )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
    if ( !v153 )
      goto LABEL_163;
    if ( QuestRestrictionInfoEntity__HasFlag(v153, 0x100000, 0) )
    {
      this->fields.isNoSupportBattle = 1;
      goto LABEL_113;
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
    if ( !v153 )
      goto LABEL_163;
    HasFlag = QuestRestrictionInfoEntity__HasFlag(v153, 0x400000000000000LL, 0);
    this->fields.isNoSupportBattle = HasFlag;
    if ( HasFlag )
      goto LABEL_113;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
    if ( !v153 )
      goto LABEL_163;
    v112 = QuestRestrictionInfoEntity__HasFlag(v153, 0x80000, 0);
    this->fields.isSupportOnlyForceBattle = v112;
    if ( v112 )
    {
LABEL_113:
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
      if ( v153 )
      {
        this->fields.isNpcMultipleBattle = QuestRestrictionInfoEntity__HasFlag(v153, 0x10000000, 0);
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
        if ( v153 )
        {
          this->fields.isNpcOnlyBattle = QuestRestrictionInfoEntity__HasFlag(v153, 0x20000000, 0);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
          if ( v153 )
          {
            this->fields.isNpcEditablePos = QuestRestrictionInfoEntity__HasFlag(v153, 0x800000000LL, 0);
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
            if ( v153 )
            {
              this->fields.isNotTransitionSupportList = QuestRestrictionInfoEntity__HasFlag(v153, 0x80000000000000LL, 0);
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
              if ( v153 )
              {
                QuestRestrictionInfoEntity__GetOverwriteLimitCountSvtIds(
                  v153,
                  &this->fields.overwriteLimitCountSvtIds,
                  &this->fields.overwriteLimitCounts,
                  &this->fields.overwriteLimitCountIconIds,
                  0);
                myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
                if ( v153 )
                {
                  v120 = QuestRestrictionInfoEntity__HasFlag(v153, 0x400000000000000LL, 0);
                  this->fields.isAllOutBattle = v120;
                  if ( v120 )
                  {
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_163;
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_((DataManager_o *)myServantOrNpcRestrictionEntityList, (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_163;
                    this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                                         (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                                         this->fields.questId,
                                                         17,
                                                         0);
                  }
                  if ( entity )
                    this->fields.isFatigure = QuestEntity__HasFlag_43615840(
                                                (QuestEntity_o *)entity,
                                                0x200000,
                                                this->fields.questPhase,
                                                0);
                  if ( v154 )
                  {
                    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v154, 0);
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v154;
                    if ( !v154 )
                      goto LABEL_163;
                    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v154, 0);
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v154;
                    if ( !v154 )
                      goto LABEL_163;
                    this->fields.isInfinityCost = QuestPhaseEntity__IsInfinityCost(v154, 0);
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
      sub_1CE6958(myServantOrNpcRestrictionEntityList, v6);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
    if ( !v153 )
      goto LABEL_163;
    if ( QuestRestrictionInfoEntity__HasFlag(v153, 0x1000000, 0) )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v153;
      if ( !v153 )
        goto LABEL_163;
      this->fields.eventDeckNum = QuestRestrictionInfoEntity__GetUserEventDeckNo(v153, 0);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1CE67A8(int___TypeInfo, 1);
    if ( !v153 )
      goto LABEL_163;
    v113 = myServantOrNpcRestrictionEntityList;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetSingleForceSvtId(
                                                                                         v153,
                                                                                         0);
    if ( !v113 )
      goto LABEL_163;
    if ( v113->fields._size )
    {
      LODWORD(v113->fields._syncRoot) = (_DWORD)myServantOrNpcRestrictionEntityList;
      this->fields.svtIdForceBattleList = (struct System_Int32_array *)v113;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&this->fields.svtIdForceBattleList,
        (int32_t)v113,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119);
      goto LABEL_113;
    }
LABEL_164:
    sub_1CE6960(myServantOrNpcRestrictionEntityList);
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_43615840((QuestEntity_o *)entity, 0x100000, this->fields.questPhase, 0) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
      if ( !entity )
        goto LABEL_163;
      HasFlag_43615840 = QuestEntity__HasFlag_43615840(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0);
      this->fields.isNoSupportBattle = HasFlag_43615840;
      if ( !HasFlag_43615840 )
      {
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
        if ( !entity )
          goto LABEL_163;
        v122 = QuestEntity__HasFlag_43615840((QuestEntity_o *)entity, 0x80000, this->fields.questPhase, 0);
        this->fields.isSupportOnlyForceBattle = v122;
        if ( !v122 )
        {
          if ( v154 )
          {
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
            if ( !entity )
              goto LABEL_163;
            if ( QuestEntity__HasFlag_43615840((QuestEntity_o *)entity, 0x1000000, this->fields.questPhase, 0) )
            {
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v154;
              if ( !v154 )
                goto LABEL_163;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v154, 0);
            }
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1CE67A8(
                                                                                                 int___TypeInfo,
                                                                                                 1);
            if ( !v154 )
              goto LABEL_163;
            v123 = myServantOrNpcRestrictionEntityList;
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__GetSingleForceSvtId(
                                                                                                 v154,
                                                                                                 0);
            if ( !v123 )
              goto LABEL_163;
            if ( !v123->fields._size )
              goto LABEL_164;
            LODWORD(v123->fields._syncRoot) = (_DWORD)myServantOrNpcRestrictionEntityList;
            this->fields.svtIdForceBattleList = (struct System_Int32_array *)v123;
            sub_1CE66A4(
              (GrandQuestFolderBoardItem_o *)&this->fields.svtIdForceBattleList,
              (int32_t)v123,
              v124,
              v125,
              v126,
              v127,
              v128,
              v129);
          }
        }
      }
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    this->fields.isFatigure = QuestEntity__HasFlag_43615840(
                                (QuestEntity_o *)entity,
                                0x200000,
                                this->fields.questPhase,
                                0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    v130 = QuestEntity__HasFlag_43615840((QuestEntity_o *)entity, 0x400000000000000LL, this->fields.questPhase, 0);
    this->fields.isAllOutBattle = v130;
    if ( v130 )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_163;
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                           (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                           (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
    this->fields.isNpcMultipleBattle = QuestEntity__HasFlag_43615840(
                                         (QuestEntity_o *)entity,
                                         0x10000000,
                                         this->fields.questPhase,
                                         0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    this->fields.isNpcOnlyBattle = QuestEntity__HasFlag_43615840(
                                     (QuestEntity_o *)entity,
                                     0x20000000,
                                     this->fields.questPhase,
                                     0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    this->fields.isNpcEditablePos = QuestEntity__HasFlag_43615840(
                                      (QuestEntity_o *)entity,
                                      0x800000000LL,
                                      this->fields.questPhase,
                                      0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    this->fields.isNotTransitionSupportList = QuestEntity__HasFlag_43615840(
                                                (QuestEntity_o *)entity,
                                                0x80000000000000LL,
                                                this->fields.questPhase,
                                                0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_163;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_43615840(
                                            (QuestEntity_o *)entity,
                                            0x1000000000000000LL,
                                            this->fields.questPhase,
                                            0);
  }
  if ( v154 )
  {
    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v154, 0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v154;
    if ( !v154 )
      goto LABEL_163;
    QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
      v154,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      &this->fields.overwriteLimitCountRangeTypes,
      0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v154;
    if ( !v154 )
      goto LABEL_163;
    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v154, 0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v154;
    if ( !v154 )
      goto LABEL_163;
    this->fields.isInfinityCost = QuestPhaseEntity__IsInfinityCost(v154, 0);
  }
  else
  {
    this->fields.correctionIconId = -1;
    this->fields.overwriteLimitCountSvtIds = 0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.overwriteLimitCountSvtIds,
      0,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
    this->fields.overwriteLimitCounts = 0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.overwriteLimitCounts,
      0,
      v131,
      v132,
      v133,
      v134,
      v135,
      v136);
    this->fields.overwriteLimitCountIconIds = 0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.overwriteLimitCountIconIds,
      0,
      v137,
      v138,
      v139,
      v140,
      v141,
      v142);
    this->fields.overwriteLimitCountRangeTypes = 0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.overwriteLimitCountRangeTypes,
      0,
      v143,
      v144,
      v145,
      v146,
      v147,
      v148);
  }
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__TryConvertOverwriteImageLimitCount(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCountStage,
        int32_t *afterLimitCountStage,
        const MethodInfo *method)
{
  int32_t v6; // w20
  System_Int32_array *v7; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // x8
  int v10; // w9
  bool result; // w0

  v6 = limitCountStage;
  v7 = QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(this, svtId, *(const MethodInfo **)&limitCountStage);
  if ( !v7 )
    sub_1CE6958(0, v8);
  max_length = v7->max_length;
  if ( max_length )
  {
    if ( (int)max_length < 1 )
    {
LABEL_7:
      if ( !(_DWORD)max_length )
        sub_1CE6960(v7);
      v6 = v7->m_Items[0];
    }
    else
    {
      v10 = 0;
      while ( v7->m_Items[v10] != v6 )
      {
        if ( (_DWORD)max_length == ++v10 )
          goto LABEL_7;
      }
    }
    result = 1;
  }
  else
  {
    result = 0;
  }
  *afterLimitCountStage = v6;
  return result;
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

  if ( (byte_4E05DC0 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_EquipMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05DC0 = 1;
  }
  entity = 0;
  outFixedEquipId = 0;
  v16 = 0;
  outFixedEquipLv = 0;
  *genderImageId = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EquipMaster___);
      if ( !Master_object )
        goto LABEL_28;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             Master_object,
             &v16,
             outFixedEquipId,
             (const MethodInfo_34E92A8 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
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
                v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v19, 0);
                outFixedEquipLv = v11;
                goto LABEL_27;
              }
              break;
            default:
              v12 = sub_1CE6714(&System_ArgumentOutOfRangeException_TypeInfo);
              v13 = (System_ArgumentOutOfRangeException_o *)sub_1CE694C(v12);
              System_ArgumentOutOfRangeException___ctor(v13, 0);
              v14 = sub_1CE6714(&Method_QuestRestrictionInfo_TryGetFixedMasterEquipInfo__);
              sub_1CE6828(v13, v14);
          }
        }
LABEL_28:
        sub_1CE6958(Master_object, v6);
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

  if ( (byte_4E05DBD & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Count_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_SelectMany_RestrictionEntity__int___);
    sub_1CE6700(&System_Func_RestrictionEntity__IEnumerable_int___TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__get_ActiveGrandBoardCount_b__221_0__);
    sub_1CE6700(&QuestRestrictionInfo___c_TypeInfo);
    byte_4E05DBD = 1;
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
    _9__221_0 = (System_Func_object__object__o *)sub_1CE694C(System_Func_RestrictionEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__221_0,
      v7,
      Method_QuestRestrictionInfo___c__get_ActiveGrandBoardCount_b__221_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__221_0 = (struct System_Func_RestrictionEntity__IEnumerable_int___o *)_9__221_0;
    sub_1CE66A4(
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
                                                               (const MethodInfo_323CE5C *)Method_System_Linq_Enumerable_SelectMany_RestrictionEntity__int___);
  v16 = System_Linq_Enumerable__Distinct_int_(
          v15,
          (const MethodInfo_3226CCC *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__Count_int_(v16, (const MethodInfo_32236D0 *)Method_System_Linq_Enumerable_Count_int___);
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

  if ( (byte_4E05DBA & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Count_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_SelectMany_RestrictionEntity__int___);
    sub_1CE6700(&System_Func_RestrictionEntity__IEnumerable_int___TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__get_GrandServantRestrictionPosCount_b__217_0__);
    sub_1CE6700(&QuestRestrictionInfo___c_TypeInfo);
    byte_4E05DBA = 1;
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
    _9__217_0 = (System_Func_object__object__o *)sub_1CE694C(System_Func_RestrictionEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__217_0,
      v7,
      Method_QuestRestrictionInfo___c__get_GrandServantRestrictionPosCount_b__217_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__217_0 = (struct System_Func_RestrictionEntity__IEnumerable_int___o *)_9__217_0;
    sub_1CE66A4(
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
                                                               (const MethodInfo_323CE5C *)Method_System_Linq_Enumerable_SelectMany_RestrictionEntity__int___);
  v16 = System_Linq_Enumerable__Distinct_int_(
          v15,
          (const MethodInfo_3226CCC *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__Count_int_(v16, (const MethodInfo_32236D0 *)Method_System_Linq_Enumerable_Count_int___);
}


void QuestRestrictionInfo_DeckSvtInfo___ctor(
        QuestRestrictionInfo_DeckSvtInfo_o *this,
        UserServantEntity_o *userServantEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x19
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4E05DC7 & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05DC7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !userServantEntity )
    sub_1CE6958(v7, v8);
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v10;
  *(_QWORD *)&v19.fields.fakeValue = v9;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v19, 0);
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)p_servantEntity, (int32_t)ServantEntity, v13, v14, v15, v16, v17, v18);
  *((_DWORD *)p_servantEntity + 2) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                       userServantEntity->fields.limitCount,
                                       0);
  *((_DWORD *)p_servantEntity + 3) = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                       userServantEntity,
                                       -1,
                                       questRestrictionInfo,
                                       0);
}


void QuestRestrictionInfo_DeckSvtInfo___ctor_44547436(
        QuestRestrictionInfo_DeckSvtInfo_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4E05DC8 & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E05DC8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !servantLeaderInfo )
    sub_1CE6958(v5, v6);
  v8 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v8;
  *(_QWORD *)&v17.fields.fakeValue = v7;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v17, 0);
  ServantEntity = ServantLeaderInfo__GetServantEntity(servantLeaderInfo, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)p_servantEntity, (int32_t)ServantEntity, v11, v12, v13, v14, v15, v16);
  *((_DWORD *)p_servantEntity + 2) = servantLeaderInfo->fields.limitCount;
  *((_DWORD *)p_servantEntity + 3) = ServantLeaderInfo__GetDispLimitCountStageSealAfterIndexZero(
                                       servantLeaderInfo,
                                       -1,
                                       0);
}


bool QuestRestrictionInfo_DeckSvtInfo__IsIndividuality(
        QuestRestrictionInfo_DeckSvtInfo_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1CE6958(0, individuality);
  return ServantEntity__IsIndividuality(
           servantEntity,
           this->fields.limitCount,
           this->fields.dispLimitCount,
           individuality,
           0);
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

  if ( (byte_4E05DC6 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1CE6700(&System_Collections_Generic_List_int____TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05DC6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.slotType = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v3;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.individualityList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_T__o *)sub_1CE694C(System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_38EAF1C *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v10;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.rangeTypeList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  this->fields.summary = (struct System_String_o *)StringLiteral_1/*""*/;
  p_summary = &this->fields.summary;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)p_summary, v17, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_4E05DC9 & 1) == 0 )
  {
    sub_1CE6700(&QuestRestrictionInfo___c_TypeInfo);
    byte_4E05DC9 = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(QuestRestrictionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRestrictionInfo___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionInfo___c_o *)v1;
  sub_1CE66A4(
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


bool QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__107_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1CE6958(this, 0);
  return e->fields.type != 1 || RestrictionEntity__IsRestrictionTarget(e, 1, 0);
}


System_String_o *QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__107_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1CE6958(this, 0);
  return e->fields.name;
}


bool QuestRestrictionInfo___c___GetRestrictionMessageEntityList_b__109_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  unsigned int v3; // w8
  _BOOL4 v4; // w0

  if ( !e )
    sub_1CE6958(this, 0);
  v3 = e->fields.type - 1;
  if ( v3 > 0x10 )
    LOBYTE(v4) = 0;
  else
    return (0x1100Bu >> v3) & 1;
  return v4;
}


System_String_o *QuestRestrictionInfo___c___GetRestrictionMessage_b__108_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1CE6958(this, 0);
  return e->fields.name;
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__99_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1CE6958(this, 0);
  return e->fields.type == 1 && e->fields.targetVals != 0;
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__99_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1CE6958(this, 0);
  return RestrictionEntity__IsRestrictionTarget(e, 3, 0) && RestrictionEntity__IsRestrictionTarget(e, 2, 0);
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__99_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  System_Int32_array *targetVals; // x19
  QuestRestrictionInfo___c_c *v5; // x0
  System_Func_int__bool__o *_9__99_4; // x20
  Il2CppObject *v7; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4E05DCB & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_Any_int____79907888);
    sub_1CE6700(&System_Func_int__bool__TypeInfo);
    sub_1CE6700(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__99_4__);
    this = (QuestRestrictionInfo___c_o *)sub_1CE6700(&QuestRestrictionInfo___c_TypeInfo);
    byte_4E05DCB = 1;
  }
  if ( !e )
    sub_1CE6958(this, e);
  if ( e->fields.rangeType == 1 )
  {
    targetVals = e->fields.targetVals;
    v5 = QuestRestrictionInfo___c_TypeInfo;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v5 = QuestRestrictionInfo___c_TypeInfo;
    }
    _9__99_4 = v5->static_fields->__9__99_4;
    if ( !_9__99_4 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = QuestRestrictionInfo___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__99_4 = (System_Func_int__bool__o *)sub_1CE694C(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(_9__99_4, v7, Method_QuestRestrictionInfo___c__IsClassRestriction_b__99_4__, 0);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__99_4 = _9__99_4;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__99_4,
        (int32_t)_9__99_4,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    return !BasicHelper__Any_int__52351580(
              targetVals,
              (System_Func_T__bool__o *)_9__99_4,
              (const MethodInfo_31ED25C *)Method_BasicHelper_Any_int____79907888);
  }
  else
  {
    return 1;
  }
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__99_4(
        QuestRestrictionInfo___c_o *this,
        int32_t i,
        const MethodInfo *method)
{
  if ( (byte_4E05DCC & 1) == 0 )
  {
    sub_1CE6700(&Individuality_TypeInfo);
    byte_4E05DCC = 1;
  }
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return !Individuality__IsServantClassIndividuality(i, 0);
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualitySlot_b__97_0(
        QuestRestrictionInfo___c_o *this,
        QuestRestrictionInfo_SlotInfo_o *s,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *individualityList; // x8

  if ( (byte_4E05DCA & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_1CE6700(&Method_System_Collections_Generic_List_int____get_Count__);
    byte_4E05DCA = 1;
  }
  if ( !s || (individualityList = s->fields.individualityList) == 0 )
    sub_1CE6958(this, s);
  return individualityList->fields._size > 0;
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__96_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1CE6958(this, 0);
  return e->fields.type == 1;
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__96_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionWholeEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1CE6958(this, 0);
  return e->fields.type == 1;
}


bool QuestRestrictionInfo___c___Setup_b__84_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return x->fields.type == 1;
}


bool QuestRestrictionInfo___c___Setup_b__84_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return x->fields.type == 3;
}


bool QuestRestrictionInfo___c___Setup_b__84_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return x->fields.type == 2;
}


bool QuestRestrictionInfo___c___Setup_b__84_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return x->fields.type == 2;
}


System_Collections_Generic_IEnumerable_int__o *QuestRestrictionInfo___c___get_ActiveGrandBoardCount_b__221_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1CE6958(this, 0);
  return (System_Collections_Generic_IEnumerable_int__o *)entity->fields.targetVals;
}


System_Collections_Generic_IEnumerable_int__o *QuestRestrictionInfo___c___get_GrandServantRestrictionPosCount_b__217_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( (byte_4E05DCD & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_1CE6700(&int___TypeInfo);
    byte_4E05DCD = 1;
  }
  if ( !entity )
    goto LABEL_9;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetVals2, 0) )
    return (System_Collections_Generic_IEnumerable_int__o *)entity->fields.targetVals2;
  this = (QuestRestrictionInfo___c_o *)sub_1CE67A8(int___TypeInfo, 1);
  if ( !this )
LABEL_9:
    sub_1CE6958(this, entity);
  if ( !LODWORD(this[1].monitor) )
    sub_1CE6960(this);
  LODWORD(this[2].klass) = 1;
  return (System_Collections_Generic_IEnumerable_int__o *)this;
}


void QuestRestrictionInfo___c__DisplayClass100_0___ctor(
        QuestRestrictionInfo___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass100_0___IsMySvtOrSupportSlotClassRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass100_0_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1CE6958(this, 0);
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
    sub_1CE6958(this, 0);
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
    sub_1CE6958(this, 0);
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
    sub_1CE6958(this, 0);
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
    sub_1CE6958(this, 0);
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
    sub_1CE6958(this, 0);
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
    sub_1CE6958(this, x);
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
    sub_1CE6960(this);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1CE6958(this, x);
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
    sub_1CE6960(this);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1CE6958(this, x);
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
    sub_1CE6958(this, 0);
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
  if ( (byte_4E05DCE & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_Any_int____79907888);
    sub_1CE6700(&System_Func_int__bool__TypeInfo);
    this = (QuestRestrictionInfo___c__DisplayClass213_0_o *)sub_1CE6700(&Method_QuestRestrictionInfo___c__DisplayClass213_0__GetGrandServantRestrictionEntity_b__1__);
    byte_4E05DCE = 1;
  }
  if ( !entity )
    sub_1CE6958(this, entity);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetVals2, 0)
    && v4->fields.initPos == 1 )
  {
    return 1;
  }
  targetVals2 = entity->fields.targetVals2;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_int__bool__o *)sub_1CE694C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_QuestRestrictionInfo___c__DisplayClass213_0__GetGrandServantRestrictionEntity_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_int__52351580(
           targetVals2,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_31ED25C *)Method_BasicHelper_Any_int____79907888);
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
  if ( (byte_4E05DCF & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c__DisplayClass219_0_o *)sub_1CE6700(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4E05DCF = 1;
  }
  if ( !entity )
    sub_1CE6958(this, entity);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.targetVals,
           v4->fields.initPos,
           (const MethodInfo_3220A90 *)Method_System_Linq_Enumerable_Contains_int___);
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
    sub_1CE6958(this, x);
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
    sub_1CE6958(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass230_0___ctor(
        QuestRestrictionInfo___c__DisplayClass230_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass230_0___GetRestrictionErrorDialogConditionName_b__0(
        QuestRestrictionInfo___c__DisplayClass230_0_o *this,
        QuestRestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct RestrictionEntity_o *restrictionEntity; // x8

  if ( !x || (restrictionEntity = this->fields.restrictionEntity) == 0 )
    sub_1CE6958(this, x);
  return x->fields.restrictionId == restrictionEntity->fields.id;
}


void QuestRestrictionInfo___c__DisplayClass99_0___ctor(
        QuestRestrictionInfo___c__DisplayClass99_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass99_0___IsClassRestriction_b__3(
        QuestRestrictionInfo___c__DisplayClass99_0_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1CE6958(this, 0);
  return RestrictionEntity__IsRestriction(e, this->fields.individuality, 0);
}