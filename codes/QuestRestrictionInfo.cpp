void QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.questId = questId;
}


void QuestRestrictionInfo___ctor_43691256(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct RestrictionEntity_array *RestrictionList_42827088; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  const MethodInfo *v19; // x4

  if ( (byte_4CC8769 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC8769 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0 )
  {
    sub_1C71608(Instance, v10);
  }
  RestrictionList_42827088 = QuestRestrictionMaster__getRestrictionList_42827088(
                               (QuestRestrictionMaster_o *)Instance,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               0);
  this->fields.restrictionEntityList = RestrictionList_42827088;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.restrictionEntityList,
    (int32_t)RestrictionList_42827088,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  QuestRestrictionInfo__Setup(this, v18, questId, questPhase, v19);
}


void QuestRestrictionInfo___ctor_43700896(
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

  if ( (byte_4CC876A & 1) == 0 )
  {
    sub_1C713B0(&QuestRestrictionEntity___TypeInfo);
    sub_1C713B0(&RestrictionEntity___TypeInfo);
    byte_4CC876A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v11 = (struct QuestRestrictionEntity_array *)sub_1C71458(QuestRestrictionEntity___TypeInfo, 0);
  this->fields.questRestrictionEntityList = v11;
  sub_1C71354(
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
    v18 = sub_1C71458(RestrictionEntity___TypeInfo, 1);
    if ( !v18 )
      sub_1C71608(0, v19);
    v20 = v18;
    v21 = sub_1C714EC(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v21 )
    {
      v36 = sub_1C7162C(0);
      sub_1C714D8(v36, 0);
    }
    if ( !*(_DWORD *)(v20 + 24) )
      sub_1C71610(v21);
    *(_QWORD *)(v20 + 32) = overwriteRestiction;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 32), (int32_t)overwriteRestiction, v22, v23, v24, v25, v26, v27);
  }
  else
  {
    v20 = sub_1C71458(RestrictionEntity___TypeInfo, 0);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v20;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.restrictionEntityList, v20, v28, v29, v30, v31, v32, v33);
  QuestRestrictionInfo__Setup(this, v34, questId, questPhase, v35);
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

  if ( (byte_4CC878C & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C713B0(&Method_System_Collections_Generic_List_bool____get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_bool____get_Item__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC878C = 1;
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
             (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___) )
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
            (const MethodInfo_3175898 *)Method_System_Linq_Enumerable_Intersect_int___);
    Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                  v28,
                                  (const MethodInfo_3156754 *)Method_System_Linq_Enumerable_Any_int___);
    if ( !this->fields.myServantPositionsList )
      goto LABEL_15;
    v29 = (char)Instance;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this->fields.myServantPositionsList,
                                  v23,
                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
              (const MethodInfo_3175898 *)Method_System_Linq_Enumerable_Intersect_int___);
      if ( System_Linq_Enumerable__Any_int_(v31, (const MethodInfo_3156754 *)Method_System_Linq_Enumerable_Any_int___) )
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
                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
          (const MethodInfo_3175898 *)Method_System_Linq_Enumerable_Intersect_int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                v35,
                                (const MethodInfo_3156754 *)Method_System_Linq_Enumerable_Any_int___);
  positionsList = (System_Collections_Generic_List_object__o *)this->fields.positionsList;
  if ( !positionsList
    || (v37 = (char)Instance,
        (Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                       positionsList,
                                       v33,
                                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_bool____get_Item__)) == 0) )
  {
LABEL_15:
    sub_1C71608(Instance, v21);
  }
  if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
LABEL_67:
    sub_1C71610(Instance);
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
    sub_1C71610(this);
  return overwriteLimitCounts->m_Items[v6];
}


int32_t QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43730380(
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
  if ( (byte_4CC8795 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC8795 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_20;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v16, 0);
  this = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(v4, v7, v8);
  if ( !this )
LABEL_20:
    sub_1C71608(this, userServantEntity);
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
      this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v17, 0);
      if ( (_DWORD)this == v12 )
        return v12;
      dialogMessageInfoDictionary = v10->fields.dialogMessageInfoDictionary;
      if ( (int)++v11 >= (int)dialogMessageInfoDictionary )
        goto LABEL_15;
    }
LABEL_19:
    sub_1C71610(this);
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

  if ( (byte_4CC8794 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC8794 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( overwriteLimitCountSvtIds && this->fields.overwriteLimitCounts && (int)overwriteLimitCountSvtIds->max_length >= 1 )
  {
    v9 = 0;
    v10 = (unsigned int)overwriteLimitCountSvtIds->max_length - 1LL;
    do
    {
      if ( v9 >= LODWORD(overwriteLimitCountSvtIds->max_length) )
LABEL_21:
        sub_1C71610(v6);
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
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_1C71608(v6, v7);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Func_object__bool__o *_9__110_0; // x20
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
  System_Func_TSource__TResult__o *_9__110_2; // x20
  Il2CppObject *v40; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct QuestRestrictionInfo___c_StaticFields *v47; // x0
  GrandQuestFolderBoardItem_o *p__9__110_2; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v49; // x8
  QuestRestrictionInfo_SlotInfo_o *v50; // x8
  Il2CppObject *v51; // x21
  struct QuestRestrictionInfo___c_StaticFields *v52; // x0
  System_Collections_Generic_IEnumerable_string__o *v53; // x0

  v8 = this;
  if ( (byte_4CC877E & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C713B0(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C713B0(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__110_0__);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__110_1__);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__110_2__);
    sub_1C713B0(&QuestRestrictionInfo___c_TypeInfo);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC877E = 1;
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
      _9__110_2 = (System_Func_TSource__TResult__o *)static_fields->__9__110_2;
      if ( _9__110_2 )
      {
LABEL_61:
        v53 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                                    _9__110_2,
                                                                    (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
        return System_String__Join_64074316((System_String_o *)StringLiteral_43/*"\n"*/, v53, 0);
      }
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = QuestRestrictionInfo___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v26->static_fields->__9;
      _9__110_2 = (System_Func_TSource__TResult__o *)sub_1C715FC(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__110_2,
        v51,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__110_2__,
        0);
      v52 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v52->__9__110_2 = (struct System_Func_RestrictionEntity__string__o *)_9__110_2;
      p__9__110_2 = (GrandQuestFolderBoardItem_o *)&v52->__9__110_2;
    }
    else
    {
      _9__110_0 = (System_Func_object__bool__o *)static_fields->__9__110_0;
      if ( !_9__110_0 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = QuestRestrictionInfo___c_TypeInfo;
        }
        v29 = (Il2CppObject *)v26->static_fields->__9;
        _9__110_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__110_0,
          v29,
          Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__110_0__,
          0);
        v30 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v30->__9__110_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__110_0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v30->__9__110_0, (int32_t)_9__110_0, v31, v32, v33, v34, v35, v36);
      }
      v37 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
              (System_Func_TSource__bool__o *)_9__110_0,
              (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v38 = QuestRestrictionInfo___c_TypeInfo;
      RestrictionMessageEntityList = (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)v37;
      if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v38 = QuestRestrictionInfo___c_TypeInfo;
      }
      _9__110_2 = (System_Func_TSource__TResult__o *)v38->static_fields->__9__110_1;
      if ( _9__110_2 )
        goto LABEL_61;
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = QuestRestrictionInfo___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v38->static_fields->__9;
      _9__110_2 = (System_Func_TSource__TResult__o *)sub_1C715FC(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__110_2,
        v40,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__110_1__,
        0);
      v47 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v47->__9__110_1 = (struct System_Func_RestrictionEntity__string__o *)_9__110_2;
      p__9__110_2 = (GrandQuestFolderBoardItem_o *)&v47->__9__110_1;
    }
    sub_1C71354(p__9__110_2, (int32_t)_9__110_2, v41, v42, v43, v44, v45, v46);
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
    sub_1C71608(this, *(_QWORD *)&initPos);
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
      sub_1C71610(this);
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
      sub_1C71610(this);
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

  if ( (byte_4CC8791 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CC8791 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1C71610(Instance);
      v20 = (int32_t *)questRestrictionEntityList->m_Items[v19];
      if ( !v20 )
        goto LABEL_67;
      v21 = v20[8];
      if ( v21 == 1 )
        break;
      if ( v21 == 2 )
      {
        Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CC112A )
    {
      sub_1C713B0(&NetworkManager_TypeInfo);
      byte_4CC112A = 1;
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
                                               (int64_t)Instance[1].klass->_1.element_class,
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
        *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
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
      Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      v11 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CC112A )
      {
        sub_1C713B0(&NetworkManager_TypeInfo);
        byte_4CC112A = 1;
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
                                                 (int64_t)Instance[1].klass->_1.element_class,
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
      Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
        *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    sub_1C71608(Instance, id);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4CC8792 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8792 = 1;
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
    sub_1C71608(this, *(_QWORD *)&n);
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
    sub_1C71610(this);
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

  if ( (byte_4CC87A8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
    byte_4CC87A8 = 1;
  }
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary
    || !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
          messageId,
          (const MethodInfo_3462488 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
  {
    return 0;
  }
  v7 = this->fields.dialogMessageInfoDictionary;
  if ( !v7 )
    sub_1C71608(0, v6);
  return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_int__object__o *)v7,
                                                       messageId,
                                                       (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
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
  if ( (byte_4CC87AB & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC87AB = 1;
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
        sub_1C71610(this);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_19;
      if ( v7->fields.type == 5 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_3408ECC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C71608(this, method);
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
  if ( (byte_4CC87AD & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC87AD = 1;
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
        sub_1C71610(this);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_19;
      if ( v7->fields.type == 6 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_3408ECC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C71608(this, method);
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
  if ( (byte_4CC87AA & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC87AA = 1;
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
        sub_1C71610(this);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_20;
      type = v7->fields.type;
      if ( type == 8 || type == 4 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_3408ECC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C71608(this, method);
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
  if ( (byte_4CC8793 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8793 = 1;
  }
  if ( v6->fields.restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.restrictionSlotDictionary;
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         n,
                                         (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
    sub_1C71608(this, *(_QWORD *)&n);
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
    sub_1C71610(this);
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
      sub_1C71610(this);
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
      sub_1C71608(this, n);
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
      sub_1C71608(this, message);
    max_length = questRestrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= LODWORD(questRestrictionEntityList->max_length) )
          sub_1C71610(this);
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
    sub_1C71354((GrandQuestFolderBoardItem_o *)message, 0, (int32_t)method, v3, v4, v5, v6, v7);
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)message, (int32_t)noticeMessage, (int32_t)method, v3, v4, v5, v6, v7);
  return 1;
}


System_String_o *QuestRestrictionInfo__GetFixNpcMessage(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  if ( (byte_4CC879D & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10301/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/);
    byte_4CC879D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10301/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0);
}


System_String_o *QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC879C & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10302/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/);
    byte_4CC879C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10302/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, 0);
}


int32_t QuestRestrictionInfo__GetFixedMyServantPositionCount(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC87B3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4CC87B3 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_1C71608(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&off_18) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C71608(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4CC87B0 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC87B0 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_1C71608(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v10.fields._current,
      (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_1C71608(fixedMyServantIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4CC878E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC878E = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !fixedMyServantSingleIndividualities->max_length )
      return 0;
    this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       svtId,
                                       dispLimitCount,
                                       0);
        this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( this )
          {
            this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               svtId,
                                               (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v13 = (ServantEntity_o *)this;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
    sub_1C71608(this, *(_QWORD *)&svtId);
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
    sub_1C71610(this);
  return targetVals->m_Items[num] != svtId;
}


System_String_o *QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC878F & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10300/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/);
    byte_4CC878F = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10300/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, 0);
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

  if ( (byte_4CC87B5 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4CC87B5 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_1C71608(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&off_18) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C71608(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4CC87B2 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC87B2 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_1C71608(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v10.fields._current,
      (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_1C71608(fixedIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4CC878B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4CC878B = 1;
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
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v4 = 0;
    for ( i = v14; ; v4 += LODWORD(i.fields._current[1].monitor) )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v5 )
        break;
      if ( !i.fields._current )
        sub_1C71608(v5, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
    sub_1C71608(fixedMyServantIndividualitiesList, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v14; ; v10 += LODWORD(i.fields._current[1].monitor) )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v11 )
      break;
    if ( !i.fields._current )
      sub_1C71608(v11, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v10;
}


System_String_o *QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC878D & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10299/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/);
    byte_4CC878D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10299/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, 0);
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

  if ( (byte_4CC878A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC878A = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( this->fields.restrictionBaseEntity )
  {
    v3 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v3,
      (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( this->fields.isFixedMyServantPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &i,
               (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v6 )
          break;
        if ( !v3 )
          sub_1C71608(v6, v7);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isNeedStarting )
    {
      fixedMyServantIndividualitiesList = this->fields.needStartingIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &i,
               (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v8 )
          break;
        if ( !v3 )
          sub_1C71608(v8, v9);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isFixedPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v10 )
          break;
        if ( !v3 )
          sub_1C71608(v10, v11);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( v3 )
    {
      if ( v3->fields._size > 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v3,
                 (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
      return 0;
    }
LABEL_38:
    sub_1C71608(fixedMyServantIndividualitiesList, v5);
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
  if ( (byte_4CC8789 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10304/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/);
    byte_4CC8789 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10304/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, 0);
}


RestrictionEntity_o *QuestRestrictionInfo__GetGrandServantRestrictionEntity(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass218_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_RestrictionEntity__o *grandServantRestrictionEntityList; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4CC87B9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
    sub_1C713B0(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__DisplayClass218_0__GetGrandServantRestrictionEntity_b__0__);
    sub_1C713B0(&QuestRestrictionInfo___c__DisplayClass218_0_TypeInfo);
    byte_4CC87B9 = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass218_0_o *)sub_1C715FC(QuestRestrictionInfo___c__DisplayClass218_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass218_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  v5->fields.initPos = initPos;
  grandServantRestrictionEntityList = this->fields.grandServantRestrictionEntityList;
  v9 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass218_0__GetGrandServantRestrictionEntity_b__0__,
    0);
  return (RestrictionEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)grandServantRestrictionEntityList,
                                  (System_Func_TSource__bool__o *)v9,
                                  (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
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
  if ( (byte_4CC8774 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8774 = 1;
  }
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_15:
    sub_1C71608(this, *(_QWORD *)&restrictionWholeType);
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
        sub_1C71610(this);
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
System_String_o *QuestRestrictionInfo__GetMessage_43710640(
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
  if ( (byte_4CC8775 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8775 = 1;
  }
  restrictionEntityList = v4->fields.restrictionEntityList;
  if ( !restrictionEntityList )
LABEL_15:
    sub_1C71608(this, *(_QWORD *)&restrictionType);
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
        sub_1C71610(this);
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

  if ( (byte_4CC8772 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10272/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C713B0(&StringLiteral_11108/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/);
    sub_1C713B0(&StringLiteral_11109/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1C713B0(&StringLiteral_11105/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_1C713B0(&StringLiteral_6448/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_4CC8772 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_98;
  if ( !isSlotOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6448/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11109/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
    v25 = (System_String_o *)IsNullOrEmpty;
    if ( !this->fields.isUniqueServant )
      goto LABEL_20;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11108/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0);
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
        IsNullOrEmpty = System_String__Concat_64031724(summary, v25, 0);
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
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      v21->fields._size = size + 1;
      v35[4] = (Il2CppClass *)summary;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)summary, v26, v27, v28, v29, v30, v31);
    }
LABEL_20:
    if ( !this->fields.isFatigure )
      goto LABEL_33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11105/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0);
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
        IsNullOrEmpty = System_String__Concat_64031724(summary, v25, 0);
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
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v42->obj.klass + v44;
      v21->fields._size = v44 + 1;
      v45[4] = (Il2CppClass *)summary;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v45 + 4), (int32_t)summary, v36, v37, v38, v39, v40, v41);
    }
LABEL_33:
    if ( !this->fields.isNotSingleSupportOnly )
      goto LABEL_46;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10272/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
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
        IsNullOrEmpty = System_String__Concat_64031724(summary, v25, 0);
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
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &v52->obj.klass + v54;
      v21->fields._size = v54 + 1;
      v55[4] = (Il2CppClass *)summary;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v55 + 4), (int32_t)summary, v46, v47, v48, v49, v50, v51);
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
                IsNullOrEmpty = System_String__Concat_64031724(summary, v25, 0);
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
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &v66->obj.klass + v68;
            v21->fields._size = v68 + 1;
            v69[4] = (Il2CppClass *)summary;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v69 + 4), (int32_t)summary, v60, v61, v62, v63, v64, v65);
          }
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v58 >= max_length )
          goto LABEL_79;
      }
LABEL_101:
      sub_1C71610(IsNullOrEmpty);
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
                            (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0 )
    {
LABEL_100:
      sub_1C71608(IsNullOrEmpty, summary);
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
            v80 = LocalizationManager__Get((System_String_o *)StringLiteral_6448/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
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
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
          }
          else
          {
            v84 = &v81->obj.klass + v83;
            v21->fields._size = v83 + 1;
            v84[4] = (Il2CppClass *)summary;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v84 + 4), (int32_t)summary, v74, v75, v76, v77, v78, v79);
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
                                  (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *QuestRestrictionInfo__GetMessages_43709372(
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

  if ( (byte_4CC8773 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10272/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C713B0(&StringLiteral_11109/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1C713B0(&StringLiteral_11105/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_1C713B0(&StringLiteral_6448/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_4CC8773 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6448/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11109/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isSlotOnly || !this->fields.isFatigure )
    goto LABEL_19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11105/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0);
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
  IsNullOrEmpty = System_String__Concat_64031724(name, v19, 0);
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
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v32[4] = (Il2CppClass *)name;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)name, v23, v24, v25, v26, v27, v28);
  }
LABEL_19:
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10272/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
    name = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = System_String__Format(v18, (Il2CppObject *)IsNullOrEmpty, 0);
      name = IsNullOrEmpty;
    }
    if ( singleSupport )
    {
      IsNullOrEmpty = System_String__Concat_64031724(name, v19, 0);
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
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &v39->obj.klass + v41;
      v20->fields._size = v41 + 1;
      v42[4] = (Il2CppClass *)name;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v42 + 4), (int32_t)name, v33, v34, v35, v36, v37, v38);
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
        sub_1C71610(IsNullOrEmpty);
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
              IsNullOrEmpty = System_String__Concat_64031724(name, v19, 0);
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
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &v52->obj.klass + v54;
          v20->fields._size = v54 + 1;
          v55[4] = (Il2CppClass *)name;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v55 + 4), (int32_t)name, v46, v47, v48, v49, v50, v51);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_62;
    }
LABEL_64:
    sub_1C71608(IsNullOrEmpty, name);
  }
LABEL_62:
  if ( !v20 )
    goto LABEL_64;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v20,
                                  (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4CC87BC & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
    sub_1C713B0(&string_TypeInfo);
    byte_4CC87BC = 1;
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
                                          (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
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
                                        (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
  if ( !grandServantRestrictionEntityList )
LABEL_16:
    sub_1C71608(grandServantRestrictionEntityList, method);
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
  if ( (byte_4CC879B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC879B = 1;
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
    sub_1C71610(this);
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
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_58;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_3408ECC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
                                       (const MethodInfo_3462488 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
      if ( !this )
        goto LABEL_58;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         v9,
                                         (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
      this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
      if ( !this )
        goto LABEL_58;
      this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         &v24,
                                         *(_DWORD *)(v15 + 44),
                                         (const MethodInfo_3408ECC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C71608(this, method);
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

  if ( (byte_4CC87A4 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10306/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/);
    sub_1C713B0(&StringLiteral_10309/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/);
    byte_4CC87A4 = 1;
  }
  SlotMessage = QuestRestrictionInfo__GetSlotMessage(this, pos, (const MethodInfo *)haveIndividualityServant);
  if ( !System_String__IsNullOrEmpty(SlotMessage, 0) )
    return SlotMessage;
  RestrictedName = (Il2CppObject *)QuestRestrictionInfo__GetRestrictedName(this, pos, v8);
  if ( haveIndividualityServant || QuestRestrictionInfo__GetGrandServantRestrictionEntity(this, pos, v9) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_10306/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = &StringLiteral_10309/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/;
  }
  v12 = LocalizationManager__Get((System_String_o *)*v11, 0);
  return System_String__Format(v12, RestrictedName, 0);
}


int32_t QuestRestrictionInfo__GetMyServantOrNpcRestrictionNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x8

  v2 = this;
  if ( (byte_4CC87B8 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    byte_4CC87B8 = 1;
  }
  if ( !v2->fields.isMyServantOrNpc && !v2->fields.isMyServantOrSupport )
    return 0;
  myServantOrNpcRestrictionEntityList = v2->fields.myServantOrNpcRestrictionEntityList;
  if ( !myServantOrNpcRestrictionEntityList )
    sub_1C71608(this, method);
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
  const MethodInfo_3175898 *v22; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v25; // x20
  Il2CppObject *v26; // x0
  Il2CppObject *v27; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4CC87A6 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__DisplayClass194_0__GetMyServantOrNpcSvtIdList_b__0__);
    sub_1C713B0(&QuestRestrictionInfo___c__DisplayClass194_0_TypeInfo);
    byte_4CC87A6 = 1;
  }
  v5 = sub_1C715FC(QuestRestrictionInfo___c__DisplayClass194_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass194_0___ctor((QuestRestrictionInfo___c__DisplayClass194_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
  {
    v14 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v5 + 24),
                                        (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
          sub_1C71610(restrictionSlotDetailDictionary);
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
            (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v15 = *((_DWORD *)v16 + 6);
        if ( (int)++v17 >= v15 )
          goto LABEL_15;
      }
LABEL_29:
      sub_1C71608(restrictionSlotDetailDictionary, v7);
    }
LABEL_15:
    if ( !v14 )
      goto LABEL_29;
    if ( v14->fields._size >= 1 )
    {
      restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                          (DataManager_o *)restrictionSlotDetailDictionary,
                                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList((ServantMaster_o *)restrictionSlotDetailDictionary, 0);
      monitor = System_Linq_Enumerable__Distinct_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                  (const MethodInfo_316E3D4 *)Method_System_Linq_Enumerable_Distinct_int___);
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v22 = (const MethodInfo_3175898 *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v28 = System_Linq_Enumerable__Intersect_int_(monitor, v21, v22);
      return System_Linq_Enumerable__ToArray_int_(
               v28,
               (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
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
      v25 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v25,
        (Il2CppObject *)v5,
        Method_QuestRestrictionInfo___c__DisplayClass194_0__GetMyServantOrNpcSvtIdList_b__0__,
        0);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      v26 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v25,
              (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v26 )
      {
        v27 = v26;
        restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                            (DataManager_o *)restrictionSlotDetailDictionary,
                                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        v21 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                     (ServantMaster_o *)restrictionSlotDetailDictionary,
                                                                     0);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v27[2].monitor;
        v22 = (const MethodInfo_3175898 *)Method_System_Linq_Enumerable_Intersect_int___;
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
  QuestRestrictionInfo___c__DisplayClass208_0_o *v9; // x22
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

  if ( (byte_4CC87AF & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_int___);
    sub_1C713B0(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Union_int___);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__DisplayClass208_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__);
    sub_1C713B0(&QuestRestrictionInfo___c__DisplayClass208_0_TypeInfo);
    byte_4CC87AF = 1;
  }
  isWhole = 0;
  v9 = (QuestRestrictionInfo___c__DisplayClass208_0_o *)sub_1C715FC(QuestRestrictionInfo___c__DisplayClass208_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass208_0___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_57;
  v9->fields.index = index;
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v12;
  sub_1C71354((GrandQuestFolderBoardItem_o *)npcInfoDictionary, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v21 = Method_System_Array_Empty_int___;
  v22 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v22 )
  {
    sub_1C474A0(Method_System_Array_Empty_int___);
    v22 = v21[7];
  }
  v23 = *(_QWORD *)(v22 + 16);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C47444(inited);
  if ( !*(_DWORD *)(v23 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v23);
  v24 = *(_QWORD *)(v21[7] + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C47444(inited);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v24 + 184);
    v27 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v27,
      (Il2CppObject *)v9,
      Method_QuestRestrictionInfo___c__DisplayClass208_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      0);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_57;
    v28 = System_Collections_Generic_List_object___Find(
            myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v27,
            (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v28 )
    {
      v29 = v28;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_57;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_57;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)Instance,
                                                                              0);
      v31 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v29[2].monitor,
              CollectionList,
              (const MethodInfo_3175898 *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v31,
                                  (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
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
        sub_1C474A0(Method_System_Array_Empty_int___);
        v36 = v35[7];
      }
      v37 = *(_QWORD *)(v36 + 16);
      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
        v37 = sub_1C47444(v34);
      if ( !*(_DWORD *)(v37 + 224) )
        v34 = j_il2cpp_runtime_class_init_0(v37);
      v38 = *(_QWORD *)(v35[7] + 16LL);
      if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
        v38 = sub_1C47444(v34);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v38 + 184);
    }
    MyServantOrSupportTargetPos = v9->fields.index;
    if ( !this->fields.restrictionBaseEntity )
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
                                      this,
                                      MyServantOrSupportTargetPos,
                                      v33);
  }
  v39 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
        sub_1C71610(Instance);
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
        Instance = (void *)QuestRestrictionInfo__IsRestriction_43714332(
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
          Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_43736492(
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
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v62, 0);
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
                *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            }
            else
            {
              v39->fields._size = size + 1;
              items->m_Items[size] = (int)Instance;
            }
            v54 = *npcInfoDictionary;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v44->fields.svtId, 0);
            if ( !v54 )
              break;
            Instance = (void *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                 (System_Collections_Generic_Dictionary_int__object__o *)v54,
                                 (int32_t)Instance,
                                 (const MethodInfo_3462488 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              v55 = *npcInfoDictionary;
              v57 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
              v56 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v63.fields.currentCryptoKey = v57;
              *(_QWORD *)&v63.fields.fakeValue = v56;
              Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v63, 0);
              if ( !v55 )
                break;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)v55,
                (int32_t)Instance,
                (Il2CppObject *)v43,
                (const MethodInfo_3462294 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
            }
          }
        }
      }
      v40 = *((_DWORD *)v41 + 6);
      if ( (int)++v42 >= v40 )
        goto LABEL_56;
    }
LABEL_57:
    sub_1C71608(Instance, v11);
  }
LABEL_56:
  v58 = System_Linq_Enumerable__Union_int_(
          first,
          (System_Collections_Generic_IEnumerable_TSource__o *)v39,
          (const MethodInfo_31901C0 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v58,
           (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4CC87A5 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10306/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/);
    sub_1C713B0(&StringLiteral_10311/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/);
    sub_1C713B0(&StringLiteral_10310/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/);
    sub_1C713B0(&StringLiteral_10308/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/);
    sub_1C713B0(&StringLiteral_10307/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/);
    byte_4CC87A5 = 1;
  }
  SlotMessage = QuestRestrictionInfo__GetSlotMessage(this, pos, (const MethodInfo *)haveIndividualityServant);
  if ( !System_String__IsNullOrEmpty(SlotMessage, 0) )
    return SlotMessage;
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = &StringLiteral_10308/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/;
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
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10306/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/, 0);
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
            sub_1C71610(MyServantOrNpcSvtIdList);
          MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
          v19 = v17[v18 + 8];
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
          }
          if ( v19 < *(_DWORD *)(*((_QWORD *)MyServantOrNpcSvtIdList + 23) + 916LL) )
            break;
          v16 = v17[6];
          if ( (int)++v18 >= v16 )
            goto LABEL_28;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = &StringLiteral_10310/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/;
      }
      else
      {
LABEL_28:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = &StringLiteral_10311/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v9, 0);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = &StringLiteral_10307/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/;
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

  if ( (byte_4CC87A7 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C713B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__DisplayClass195_0__GetMyServantOrSupportTargetPos_b__0__);
    sub_1C713B0(&QuestRestrictionInfo___c__DisplayClass195_0_TypeInfo);
    byte_4CC87A7 = 1;
  }
  v5 = sub_1C715FC(QuestRestrictionInfo___c__DisplayClass195_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass195_0___ctor((QuestRestrictionInfo___c__DisplayClass195_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
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
  v16 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass195_0__GetMyServantOrSupportTargetPos_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  v6 = System_Collections_Generic_List_object___Find(
         myServantOrNpcRestrictionEntityList,
         (System_Predicate_T__o *)v16,
         (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v6 )
    return (int)v6;
  klass = v6[3].klass;
  if ( !klass )
LABEL_14:
    sub_1C71608(v6, v7);
  if ( !LODWORD(klass->_1.namespaze) )
    sub_1C71610(v6);
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
    sub_1C71610(this);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C71608(this, pos);
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

  if ( (byte_4CC87A9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC87A9 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.restrictionBaseEntity )
  {
    dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
    if ( !dialogMessageInfoDictionary )
      sub_1C71608(0, *(_QWORD *)&pos);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v11,
      (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
      (const MethodInfo_34626CC *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
             &v11,
             (const MethodInfo_35BA0B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
      if ( !v6 )
        break;
      if ( !v11.fields._current.fields.value )
        sub_1C71608(v6, v7);
      if ( LODWORD(v11.fields._current.fields.value[1].klass) == pos )
      {
        DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v11.fields._current.fields.key, 0, v8);
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
          &v11,
          (const MethodInfo_35BA1D8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
        return DialogMessage;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v11,
      (const MethodInfo_35BA1D8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
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

  if ( (byte_4CC87B4 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4CC87B4 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    sub_1C71608(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&off_18) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C71608(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4CC87B1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC87B1 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v6 )
      break;
    if ( !v3 )
      sub_1C71608(v6, v7);
    System_Collections_Generic_List_int___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)v9.fields._current,
      (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v3 )
LABEL_15:
    sub_1C71608(needStartingIndividualitiesList, v4);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4CC87BE & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_GetValue_string___);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C713B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__DisplayClass225_0__GetOrganizationSelectionDialogMessage_b__0__);
    sub_1C713B0(&QuestRestrictionInfo___c__DisplayClass225_0_TypeInfo);
    sub_1C713B0(&StringLiteral_22597/*"organizationSelectionDialogTitle"*/);
    sub_1C713B0(&StringLiteral_22596/*"organizationSelectionDialogMessage"*/);
    byte_4CC87BE = 1;
  }
  v51 = (GrandQuestFolderBoardItem_o *)title;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *title = static_fields->Empty;
  sub_1C71354(
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)message, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  questRestrictionEntityList = this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_16;
  if ( SLODWORD(questRestrictionEntityList->max_length) >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      v25 = sub_1C715FC(QuestRestrictionInfo___c__DisplayClass225_0_TypeInfo);
      QuestRestrictionInfo___c__DisplayClass225_0___ctor((QuestRestrictionInfo___c__DisplayClass225_0_o *)v25, 0);
      if ( v24 >= LODWORD(questRestrictionEntityList->max_length) )
        sub_1C71610(SpecifiedPosition);
      if ( !v25 )
        goto LABEL_16;
      v32 = questRestrictionEntityList->m_Items[v24];
      *(_QWORD *)(v25 + 16) = v32;
      v33 = v25 + 16;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 16), (int32_t)v32, v26, v27, v28, v29, v30, v31);
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
      v35 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_RestrictionEntity__TypeInfo);
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
              (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
                       (System_String_o *)StringLiteral_22597/*"organizationSelectionDialogTitle"*/,
                       (Il2CppObject *)string_TypeInfo->static_fields->Empty,
                       (const MethodInfo_31387A8 *)Method_BasicHelper_GetValue_string___);
      v51->klass = (GrandQuestFolderBoardItem_c *)Value_object;
      sub_1C71354(v51, (int32_t)Value_object, v38, v39, v40, v41, v42, v43);
      if ( *(_QWORD *)v33 )
      {
        v44 = BasicHelper__GetValue_object_(
                *(System_Collections_Generic_Dictionary_string__object__o **)(*(_QWORD *)v33 + 64LL),
                (System_String_o *)StringLiteral_22596/*"organizationSelectionDialogMessage"*/,
                (Il2CppObject *)string_TypeInfo->static_fields->Empty,
                (const MethodInfo_31387A8 *)Method_BasicHelper_GetValue_string___);
        *message = (System_String_o *)v44;
        sub_1C71354((GrandQuestFolderBoardItem_o *)message, (int32_t)v44, v45, v46, v47, v48, v49, v50);
        return;
      }
    }
LABEL_16:
    sub_1C71608(SpecifiedPosition, v22);
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
    sub_1C71610(this);
  return overwriteLimitCountRangeTypes->m_Items[v6];
}


System_Int32_array *QuestRestrictionInfo__GetOverwriteLimitCountSvtIds(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.overwriteLimitCountSvtIds;
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

  if ( (byte_4CC8796 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&string___TypeInfo);
    byte_4CC8796 = 1;
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
  FixedServantPositionSvtIdList = sub_1C71458(string___TypeInfo, *(unsigned int *)(FixedServantPositionSvtIdList + 24));
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
        sub_1C71610(FixedServantPositionSvtIdList);
      v13 = *(_DWORD *)(v8 + 32 + 4 * v10);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      FixedServantPositionSvtIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !FixedServantPositionSvtIdList )
        break;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)FixedServantPositionSvtIdList,
              &entity,
              v13,
              (const MethodInfo_3408ECC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0;
      FixedServantPositionSvtIdList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !FixedServantPositionSvtIdList )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)FixedServantPositionSvtIdList,
                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CC112A )
      {
        sub_1C713B0(&NetworkManager_TypeInfo);
        byte_4CC112A = 1;
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
      sub_1C71354(i, FixedServantPositionSvtIdList, v17, v18, v19, v20, v21, v22);
      if ( v11 == ++v10 )
        return (System_String_array *)v9;
    }
LABEL_41:
    sub_1C71608(FixedServantPositionSvtIdList, v7);
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
    sub_1C71610(this);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C71608(this, pos);
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
  if ( (byte_4CC87A3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C713B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__DisplayClass191_0__GetRestrictedName_b__0__);
    sub_1C713B0(&QuestRestrictionInfo___c__DisplayClass191_0_TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC87A3 = 1;
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
        v11 = sub_1C715FC(QuestRestrictionInfo___c__DisplayClass191_0_TypeInfo);
        QuestRestrictionInfo___c__DisplayClass191_0___ctor((QuestRestrictionInfo___c__DisplayClass191_0_o *)v11, 0);
        if ( v10 >= LODWORD(questRestrictionEntityList->max_length) )
LABEL_28:
          sub_1C71610(this);
        if ( !v11 )
          break;
        v18 = questRestrictionEntityList->m_Items[v10];
        *(_QWORD *)(v11 + 16) = v18;
        v19 = v11 + 16;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)v18, v12, v13, v14, v15, v16, v17);
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v4->fields.myServantOrNpcRestrictionEntityList;
        v21 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_RestrictionEntity__TypeInfo);
        System_Predicate_object____ctor(
          v21,
          (Il2CppObject *)v11,
          Method_QuestRestrictionInfo___c__DisplayClass191_0__GetRestrictedName_b__0__,
          0);
        if ( !myServantOrNpcRestrictionEntityList )
          break;
        v22 = System_Collections_Generic_List_object___Find(
                myServantOrNpcRestrictionEntityList,
                (System_Predicate_T__o *)v21,
                (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
    sub_1C71608(this, *(_QWORD *)&pos);
  }
  this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
  if ( !this )
    goto LABEL_27;
  this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)this,
                                     pos,
                                     (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
  System_Func_object__object__o *_9__111_0; // x20
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
  if ( (byte_4CC877F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Prepend_string___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_1C713B0(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__111_0__);
    sub_1C713B0(&QuestRestrictionInfo___c_TypeInfo);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&StringLiteral_10268/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_4CC877F = 1;
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
      this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10268/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      v23 = v4->fields.slotInfos;
      if ( !v23 )
        goto LABEL_25;
      if ( (unsigned int)v6 >= LODWORD(v23->max_length) )
LABEL_26:
        sub_1C71610(this);
      v24 = v23->m_Items[v6];
      if ( v24 )
        return System_String__Concat_64069988(
                 (System_String_o *)this,
                 (System_String_o *)StringLiteral_43/*"\n"*/,
                 v24->fields.summary,
                 0);
    }
LABEL_25:
    sub_1C71608(this, *(_QWORD *)&initPos);
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
  _9__111_0 = (System_Func_object__object__o *)v10->static_fields->__9__111_0;
  if ( !_9__111_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = QuestRestrictionInfo___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__111_0 = (System_Func_object__object__o *)sub_1C715FC(System_Func_RestrictionEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__111_0,
      v12,
      Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__111_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__111_0 = (struct System_Func_RestrictionEntity__string__o *)_9__111_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__111_0,
      (int32_t)_9__111_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                               (System_Func_TSource__TResult__o *)_9__111_0,
                                                               (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10268/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
  v22 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Prepend_object_(
                                                              v20,
                                                              v21,
                                                              (const MethodInfo_317B148 *)Method_System_Linq_Enumerable_Prepend_string___);
  return System_String__Join_64074316((System_String_o *)StringLiteral_43/*"\n"*/, v22, 0);
}


System_Collections_Generic_IEnumerable_RestrictionEntity__o *QuestRestrictionInfo__GetRestrictionMessageEntityList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x19
  System_Func_object__bool__o *_9__112_0; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CC8780 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C713B0(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__112_0__);
    sub_1C713B0(&QuestRestrictionInfo___c_TypeInfo);
    byte_4CC8780 = 1;
  }
  v3 = QuestRestrictionInfo___c_TypeInfo;
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v3 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__112_0 = (System_Func_object__bool__o *)v3->static_fields->__9__112_0;
  if ( !_9__112_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestRestrictionInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__112_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__112_0,
      v6,
      Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__112_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__112_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__112_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__112_0,
      (int32_t)_9__112_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                          restrictionEntityList,
                                                                          (System_Func_TSource__bool__o *)_9__112_0,
                                                                          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
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

  if ( (byte_4CC8778 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC8778 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0
    || (ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)Instance,
                                       svtId,
                                       dispLimitCount,
                                       0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1C71608(Instance, v9);
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

  if ( (byte_4CC8797 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC8797 = 1;
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
      sub_1C71608(0, method);
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
  if ( (byte_4CC8799 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8799 = 1;
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
    sub_1C71610(this);
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
                                         (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_51;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &v21,
                                           *(_DWORD *)(v12 + 44),
                                           (const MethodInfo_3408ECC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1C71608(this, method);
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
      this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
      if ( !this )
        goto LABEL_51;
      this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         &entity,
                                         v7->fields.restrictionMessageId,
                                         (const MethodInfo_3408ECC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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

  if ( (byte_4CC8798 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10313/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/);
    sub_1C713B0(&StringLiteral_10312/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/);
    byte_4CC8798 = 1;
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
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10313/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, 0);
    v7 = &v11;
    v11 = this->fields.servantNumMax;
  }
  else
  {
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10312/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, 0);
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
  if ( (byte_4CC87BF & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_GetValue_string___);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C713B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__DisplayClass226_0__GetSlotMessage_b__0__);
    sub_1C713B0(&QuestRestrictionInfo___c__DisplayClass226_0_TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&StringLiteral_23188/*"restrictionSlotMessage"*/);
    byte_4CC87BF = 1;
  }
  questRestrictionEntityList = v3->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_15;
  if ( SLODWORD(questRestrictionEntityList->max_length) < 1 )
    return string_TypeInfo->static_fields->Empty;
  v5 = 0;
  while ( 1 )
  {
    v6 = sub_1C715FC(QuestRestrictionInfo___c__DisplayClass226_0_TypeInfo);
    QuestRestrictionInfo___c__DisplayClass226_0___ctor((QuestRestrictionInfo___c__DisplayClass226_0_o *)v6, 0);
    if ( v5 >= LODWORD(questRestrictionEntityList->max_length) )
      sub_1C71610(this);
    if ( !v6 )
      goto LABEL_15;
    v13 = questRestrictionEntityList->m_Items[v5];
    *(_QWORD *)(v6 + 16) = v13;
    v14 = v6 + 16;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)v13, v7, v8, v9, v10, v11, v12);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v3->fields.myServantOrNpcRestrictionEntityList;
    v16 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_RestrictionEntity__TypeInfo);
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
            (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
    sub_1C71608(this, *(_QWORD *)&initPos);
  return (System_String_o *)BasicHelper__GetValue_object_(
                              *(System_Collections_Generic_Dictionary_string__object__o **)(*(_QWORD *)v14 + 64LL),
                              (System_String_o *)StringLiteral_23188/*"restrictionSlotMessage"*/,
                              (Il2CppObject *)string_TypeInfo->static_fields->Empty,
                              (const MethodInfo_31387A8 *)Method_BasicHelper_GetValue_string___);
}


int32_t QuestRestrictionInfo__GetSupportInitIndex(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.supportInitIndex;
}


System_String_o *QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC8781 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10314/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/);
    byte_4CC8781 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10314/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, 0);
}


System_Int32_array *QuestRestrictionInfo__GetSvtIdBattleList(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.svtIdForceBattleList;
}


int32_t QuestRestrictionInfo__GetTotalCostRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  RestrictionEntity_o *totalCostRestrictionEntity; // x0

  totalCostRestrictionEntity = this->fields.totalCostRestrictionEntity;
  if ( totalCostRestrictionEntity )
    LODWORD(totalCostRestrictionEntity) = RestrictionEntity__getTotalCost(totalCostRestrictionEntity, 0);
  return (int)totalCostRestrictionEntity;
}


System_String_o *QuestRestrictionInfo__GetTotalCostRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  System_String_c *klass; // x19
  Il2CppObject *v5; // x0
  int32_t TotalCost; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4CC8790 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    byte_4CC8790 = 1;
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
  if ( (byte_4CC8787 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10316/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/);
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8787 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_10316/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, 0);
  }
  else
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_18:
      sub_1C71608(this, isFixMessage);
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
          sub_1C71610(this);
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
  if ( (byte_4CC8786 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10315/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/);
    byte_4CC8786 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10315/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, 0);
}


int32_t QuestRestrictionInfo__GetUserEventDeckNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.eventDeckNum;
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
  QuestRestrictionInfo___c__DisplayClass102_0_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  QuestRestrictionInfo___c_c *v9; // x0
  System_Func_object__bool__o *_9__102_0; // x21
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
  System_Func_object__bool__o *_9__102_1; // x21
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
  System_Func_object__bool__o *_9__102_2; // x21
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

  if ( (byte_4CC8779 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_RestrictionEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C713B0(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__102_0__);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__102_1__);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__102_2__);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__DisplayClass102_0__IsClassRestriction_b__3__);
    sub_1C713B0(&QuestRestrictionInfo___c__DisplayClass102_0_TypeInfo);
    sub_1C713B0(&QuestRestrictionInfo___c_TypeInfo);
    byte_4CC8779 = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass102_0_o *)sub_1C715FC(QuestRestrictionInfo___c__DisplayClass102_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass102_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  v5->fields.individuality = individuality;
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  v9 = QuestRestrictionInfo___c_TypeInfo;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v9 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__102_0 = (System_Func_object__bool__o *)v9->static_fields->__9__102_0;
  if ( !_9__102_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestRestrictionInfo___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__102_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__102_0, v11, Method_QuestRestrictionInfo___c__IsClassRestriction_b__102_0__, 0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__102_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__102_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__102_0,
      (int32_t)_9__102_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          restrictionEntityList,
          (System_Func_TSource__bool__o *)_9__102_0,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v20 = QuestRestrictionInfo___c_TypeInfo;
  v21 = v19;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v20 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__102_1 = (System_Func_object__bool__o *)v20->static_fields->__9__102_1;
  if ( !_9__102_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = QuestRestrictionInfo___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__102_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__102_1, v23, Method_QuestRestrictionInfo___c__IsClassRestriction_b__102_1__, 0);
    v24 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v24->__9__102_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__102_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v24->__9__102_1, (int32_t)_9__102_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)_9__102_1,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v32 = QuestRestrictionInfo___c_TypeInfo;
  v33 = v31;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v32 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__102_2 = (System_Func_object__bool__o *)v32->static_fields->__9__102_2;
  if ( !_9__102_2 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = QuestRestrictionInfo___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__102_2 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__102_2, v35, Method_QuestRestrictionInfo___c__IsClassRestriction_b__102_2__, 0);
    v36 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v36->__9__102_2 = (struct System_Func_RestrictionEntity__bool__o *)_9__102_2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v36->__9__102_2, (int32_t)_9__102_2, v37, v38, v39, v40, v41, v42);
  }
  v43 = System_Linq_Enumerable__Where_object_(
          v33,
          (System_Func_TSource__bool__o *)_9__102_2,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v44 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v44,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass102_0__IsClassRestriction_b__3__,
    0);
  return System_Linq_Enumerable__Any_object__51743576(
           v43,
           (System_Func_TSource__bool__o *)v44,
           (const MethodInfo_3158B58 *)Method_System_Linq_Enumerable_Any_RestrictionEntity___);
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
    sub_1C71610(this);
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C71608(this, initPos);
  return v4->fields.isMoved;
}


bool QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_1C71608(this, method);
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
        sub_1C71610(this);
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
    sub_1C71608(this, method);
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

  if ( (byte_4CC87AC & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC87AC = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !this->fields.isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.isFixedSupportPosition )
  {
    fixedSupportIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)fixedSupportIndividualitiesList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v11;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v6 )
        break;
      if ( !v3 )
        sub_1C71608(v6, v7);
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
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v11;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v9 )
        break;
      if ( !v3 )
        sub_1C71608(v9, v10);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v3 )
LABEL_23:
    sub_1C71608(fixedSupportIndividualitiesList, v4);
  return v3->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsFixedSupportPosition_43720424(
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
  if ( (byte_4CC8788 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC8788 = 1;
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
  v7 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v6->fields.isFixedSupportPosition )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedSupportIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v22;
          ;
          System_Collections_Generic_List_int___AddRange(
            v7,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v8 )
        break;
      if ( !v7 )
        sub_1C71608(v8, v9);
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
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v22;
          ;
          System_Collections_Generic_List_int___AddRange(
            v7,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v11 )
        break;
      if ( !v7 )
        sub_1C71608(v11, v12);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v7 )
    goto LABEL_42;
  if ( v7->fields._size < 1 )
    goto LABEL_36;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_42;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v15 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  *(_QWORD *)&v25.fields.fakeValue = v14;
  this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v25, 0);
  if ( !v13 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v13,
             (int32_t)this,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    v7,
    (const MethodInfo_37F41C8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = v22;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v23,
            (const MethodInfo_35924B0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v23,
        (const MethodInfo_35924AC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      return 1;
    }
    current = (int32_t)v23.fields._current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, 0);
    if ( !Entity )
      sub_1C71608(DispLimitCount, v20);
  }
  while ( !ServantEntity__IsIndividuality((ServantEntity_o *)Entity, limitCount, DispLimitCount, current, 0) );
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v23,
    (const MethodInfo_35924AC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_36:
  supportPositionList = v6->fields.supportPositionList;
  if ( !supportPositionList )
LABEL_42:
    sub_1C71608(this, *(_QWORD *)&num);
  if ( LODWORD(supportPositionList->max_length) <= num )
    sub_1C71610(this);
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

  if ( (byte_4CC87BA & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC87BA = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_11:
    sub_1C71608(Master_object, v4);
  return QuestPhaseEntity__IsIgnoreSyncEquipGrand(entity, 0);
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


bool QuestRestrictionInfo__IsMyServantOrNpcRestriction_43733304(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass186_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v9; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4CC879E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
    sub_1C713B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__DisplayClass186_0__IsMyServantOrNpcRestriction_b__0__);
    sub_1C713B0(&QuestRestrictionInfo___c__DisplayClass186_0_TypeInfo);
    byte_4CC879E = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass186_0_o *)sub_1C715FC(QuestRestrictionInfo___c__DisplayClass186_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass186_0___ctor(v5, 0);
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
        sub_1C71610(v6);
      v9 = slotInfos->m_Items[pos - 1];
      if ( v9 )
        return (unsigned int)(v9->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_1C71608(v6, v7);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v12 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass186_0__IsMyServantOrNpcRestriction_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  return System_Collections_Generic_List_object___Exists(
           myServantOrNpcRestrictionEntityList,
           (System_Predicate_T__o *)v12,
           (const MethodInfo_3810D44 *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
}


bool QuestRestrictionInfo__IsMySvtOrSupportSlotClassRestriction(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        int32_t classIndividuality,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass103_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x20
  System_Func_object__bool__o *v11; // x21
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x20
  bool result; // w0

  if ( (byte_4CC877A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
    sub_1C713B0(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__DisplayClass103_0__IsMySvtOrSupportSlotClassRestriction_b__0__);
    sub_1C713B0(&QuestRestrictionInfo___c__DisplayClass103_0_TypeInfo);
    byte_4CC877A = 1;
  }
  v7 = (QuestRestrictionInfo___c__DisplayClass103_0_o *)sub_1C715FC(QuestRestrictionInfo___c__DisplayClass103_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass103_0___ctor(v7, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  v7->fields.initPos = initPos;
  result = initPos >= 1
        && (restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList,
            v11 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RestrictionEntity__bool__TypeInfo),
            System_Func_object__bool____ctor(
              v11,
              (Il2CppObject *)v7,
              Method_QuestRestrictionInfo___c__DisplayClass103_0__IsMySvtOrSupportSlotClassRestriction_b__0__,
              0),
            (v12 = System_Linq_Enumerable__FirstOrDefault_object__51858576(
                     restrictionEntityList,
                     (System_Func_TSource__bool__o *)v11,
                     (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___)) != 0)
        && (v13 = v12, !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12[2].monitor, 0))
        && !System_Linq_Enumerable__Contains_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v13[2].monitor,
              0,
              (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___)
        && RestrictionEntity__IsRestriction((RestrictionEntity_o *)v13, classIndividuality, 0);
  return result;
}


bool QuestRestrictionInfo__IsNoSupportBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNoSupportBattle;
}


bool QuestRestrictionInfo__IsNotIndividuality(QuestRestrictionInfo_o *this, int32_t pos, const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass188_0_o *v5; // x21
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

  if ( (byte_4CC87A0 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C713B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__DisplayClass188_0__IsNotIndividuality_b__0__);
    sub_1C713B0(&QuestRestrictionInfo___c__DisplayClass188_0_TypeInfo);
    byte_4CC87A0 = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass188_0_o *)sub_1C715FC(QuestRestrictionInfo___c__DisplayClass188_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass188_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_26;
  v5->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_43733304(this, pos, v8) )
    goto LABEL_23;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        v5->fields.pos,
                                        (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    v9 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    if ( v9 >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v9 == v10 )
          sub_1C71610(restrictionSlotDetailDictionary);
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
      sub_1C71608(restrictionSlotDetailDictionary, v7);
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v14 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass188_0__IsNotIndividuality_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_26;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                      myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v14,
                                      (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
      sub_1C71610(this);
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_1C71608(this, initPos);
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
  System_Func_object__bool__o *_9__100_0; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CC8777 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
    sub_1C713B0(&System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__100_0__);
    sub_1C713B0(&QuestRestrictionInfo___c_TypeInfo);
    byte_4CC8777 = 1;
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
  _9__100_0 = (System_Func_object__bool__o *)v4->static_fields->__9__100_0;
  if ( !_9__100_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = QuestRestrictionInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__100_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__100_0,
      v6,
      Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__100_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__100_0 = (struct System_Func_QuestRestrictionInfo_SlotInfo__bool__o *)_9__100_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__100_0,
      (int32_t)_9__100_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return BasicHelper__Any_object__51593856(
           slotInfos,
           (System_Func_T__bool__o *)_9__100_0,
           (const MethodInfo_3134280 *)Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
}


bool QuestRestrictionInfo__IsRestrictionIndividualityWhole(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo___c_c *v3; // x0
  System_Object_array *restrictionWholeEntities; // x19
  System_Func_object__bool__o *_9__99_1; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo_3134280 *v14; // x2
  QuestRestrictionInfo___c_c *v15; // x0
  Il2CppObject *v16; // x21
  struct QuestRestrictionInfo___c_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CC8776 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_RestrictionEntity___);
    sub_1C713B0(&Method_BasicHelper_Any_RestrictionWholeEntity___);
    sub_1C713B0(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C713B0(&System_Func_RestrictionWholeEntity__bool__TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__99_0__);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__99_1__);
    sub_1C713B0(&QuestRestrictionInfo___c_TypeInfo);
    byte_4CC8776 = 1;
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
    _9__99_1 = (System_Func_object__bool__o *)v3->static_fields->__9__99_1;
    if ( !_9__99_1 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = QuestRestrictionInfo___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v3->static_fields->__9;
      _9__99_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RestrictionWholeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__99_1,
        v6,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__99_1__,
        0);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__99_1 = (struct System_Func_RestrictionWholeEntity__bool__o *)_9__99_1;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__99_1,
        (int32_t)_9__99_1,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    v14 = (const MethodInfo_3134280 *)Method_BasicHelper_Any_RestrictionWholeEntity___;
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
    _9__99_1 = (System_Func_object__bool__o *)v15->static_fields->__9__99_0;
    if ( !_9__99_1 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = QuestRestrictionInfo___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v15->static_fields->__9;
      _9__99_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RestrictionEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__99_1,
        v16,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__99_0__,
        0);
      v17 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v17->__9__99_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__99_1;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v17->__9__99_0, (int32_t)_9__99_1, v18, v19, v20, v21, v22, v23);
    }
    v14 = (const MethodInfo_3134280 *)Method_BasicHelper_Any_RestrictionEntity___;
  }
  return BasicHelper__Any_object__51593856(restrictionWholeEntities, (System_Func_T__bool__o *)_9__99_1, v14);
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
  QuestRestrictionInfo___c__DisplayClass189_0_o *v13; // x24
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

  if ( (byte_4CC87A1 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C713B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__DisplayClass189_0__IsRestrictionServantIndividuality_b__0__);
    sub_1C713B0(&QuestRestrictionInfo___c__DisplayClass189_0_TypeInfo);
    byte_4CC87A1 = 1;
  }
  v13 = (QuestRestrictionInfo___c__DisplayClass189_0_o *)sub_1C715FC(QuestRestrictionInfo___c__DisplayClass189_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass189_0___ctor(v13, 0);
  if ( !v13 )
    goto LABEL_55;
  v13->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_43733304(this, pos, v16) )
    goto LABEL_53;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_55;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_55;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)this->fields.restrictionSlotDictionary;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                    v13->fields.pos,
                                    (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
                                        (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
                  sub_1C71610(Instance);
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
    sub_1C71608(Instance, v15);
  }
  if ( isChkSupport && !QuestRestrictionInfo__GetGrandServantRestrictionEntity(this, v13->fields.pos, v18) )
    goto LABEL_53;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v25 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v25,
    (Il2CppObject *)v13,
    Method_QuestRestrictionInfo___c__DisplayClass189_0__IsRestrictionServantIndividuality_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_55;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                myServantOrNpcRestrictionEntityList,
                                (System_Predicate_T__o *)v25,
                                (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
                                  (const MethodInfo_3810AA8 *)Method_System_Collections_Generic_List_RestrictionEntity__Contains__);
    if ( ((unsigned __int8)Instance & 1) == 0
      || (Instance = (DataManager_o *)RestrictionEntity__IsSearchVals((RestrictionEntity_o *)v27, 0, 0),
          LOBYTE(max_length) = 0,
          ((unsigned __int8)Instance & 1) == 0) )
    {
      if ( !Entity )
        goto LABEL_55;
      v29 = ServantEntity__getIndividuality((ServantEntity_o *)Entity, limitCount, ServantImageLimitSealAfter, 0);
      if ( RestrictionEntity__IsRestriction_42866748((RestrictionEntity_o *)v27, v29, 0) )
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


bool QuestRestrictionInfo__IsRestrictionServantIndividuality_43736492(
        QuestRestrictionInfo_o *this,
        System_Int32_array *individuality,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass190_0_o *v7; // x22
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

  if ( (byte_4CC87A2 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C713B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__DisplayClass190_0__IsRestrictionServantIndividuality_b__0__);
    sub_1C713B0(&QuestRestrictionInfo___c__DisplayClass190_0_TypeInfo);
    byte_4CC87A2 = 1;
  }
  v7 = (QuestRestrictionInfo___c__DisplayClass190_0_o *)sub_1C715FC(QuestRestrictionInfo___c__DisplayClass190_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass190_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_29;
  v7->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_43733304(this, pos, v10) )
    goto LABEL_27;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        v7->fields.pos,
                                        (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
          sub_1C71610(restrictionSlotDetailDictionary);
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
      sub_1C71608(restrictionSlotDetailDictionary, v9);
    }
    goto LABEL_27;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v17 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_QuestRestrictionInfo___c__DisplayClass190_0__IsRestrictionServantIndividuality_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_29;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                      myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v17,
                                      (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
            (const MethodInfo_3810AA8 *)Method_System_Collections_Generic_List_RestrictionEntity__Contains__) )
      return RestrictionEntity__IsRestriction_42866748(v19, individuality, 0);
    IsSearchVals = RestrictionEntity__IsSearchVals(v19, 0, 0);
    LOBYTE(v14) = 0;
    if ( !IsSearchVals )
      return RestrictionEntity__IsRestriction_42866748(v19, individuality, 0);
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
  return QuestRestrictionInfo__IsRestrictionSlot_43713548(this, ServantIndividuality, initPos, v14);
}


bool QuestRestrictionInfo__IsRestrictionSlot_43713548(
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
  if ( (byte_4CC877D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    byte_4CC877D = 1;
  }
  v7 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v6->fields.slotInfos;
    if ( !slotInfos )
LABEL_27:
      sub_1C71608(this, svtIndividuality);
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
                                         (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_int____get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->fields.dialogMessageInfoDictionary )
      {
        v12 = System_Linq_Enumerable__Intersect_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this,
                (System_Collections_Generic_IEnumerable_TSource__o *)svtIndividuality,
                (const MethodInfo_3175898 *)Method_System_Linq_Enumerable_Intersect_int___);
        this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_int_(
                                           v12,
                                           (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
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
                                           (const MethodInfo_37F5C30 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
        if ( (_DWORD)this == 1 )
        {
          this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                             (const MethodInfo_3156754 *)Method_System_Linq_Enumerable_Any_int___);
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
                                             (const MethodInfo_37F5C30 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)this == 2 )
          {
            this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                               (const MethodInfo_3156754 *)Method_System_Linq_Enumerable_Any_int___);
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
    sub_1C71610(this);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsRestriction_43712820(
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

  if ( (byte_4CC877B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_int___);
    byte_4CC877B = 1;
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
      sub_1C474A0(Method_System_Array_Empty_int___);
      v21 = v20[7];
    }
    v22 = *(_QWORD *)(v21 + 16);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v22 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v22);
    v23 = *(_QWORD *)(v20[7] + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C47444(inited);
    ServantIndividuality = **(System_Int32_array ***)(v23 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_43713080(this, &isWhole, ServantIndividuality, rarity, lv, targetType, v17);
}


bool QuestRestrictionInfo__IsRestriction_43713080(
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
      sub_1C71608(this, isWhole);
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
      return 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
LABEL_29:
        sub_1C71610(this);
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
          this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction_42866748(v18, svtIndividuality, 0);
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


bool QuestRestrictionInfo__IsRestriction_43714052(
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

  if ( (byte_4CC877C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_int___);
    byte_4CC877C = 1;
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
      sub_1C474A0(Method_System_Array_Empty_int___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v26 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v26);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C47444(inited);
    ServantIndividuality = **(System_Int32_array ***)(v27 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_43714332(
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
bool QuestRestrictionInfo__IsRestriction_43714332(
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

  if ( QuestRestrictionInfo__IsRestriction_43713080(
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
    return QuestRestrictionInfo__IsRestrictionSlot_43713548(this, svtIndividuality, initPos, v11);
  return 0;
}


bool QuestRestrictionInfo__IsSelectableNormalSupport(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass187_0_o *v5; // x21
  _BOOL8 IsMyServantOrNpcRestriction_43733304; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v10; // w9
  QuestRestrictionInfo_SlotInfo_o *v11; // x8
  bool v12; // zf
  Il2CppObject *v13; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_4CC879F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C713B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__DisplayClass187_0__IsSelectableNormalSupport_b__0__);
    sub_1C713B0(&QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo);
    byte_4CC879F = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass187_0_o *)sub_1C715FC(QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass187_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_18;
  v5->fields.pos = pos;
  IsMyServantOrNpcRestriction_43733304 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43733304(this, pos, v8);
  if ( !IsMyServantOrNpcRestriction_43733304 )
  {
    LOBYTE(v13) = 0;
    return (char)v13;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    v15 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v15,
      (Il2CppObject *)v5,
      Method_QuestRestrictionInfo___c__DisplayClass187_0__IsSelectableNormalSupport_b__0__,
      0);
    if ( myServantOrNpcRestrictionEntityList )
    {
      v13 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v15,
              (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v13 )
        return (char)v13;
      v12 = ((__int64)v13[2].klass & 0xFFFFFFF7) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_1C71608(IsMyServantOrNpcRestriction_43733304, v7);
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v10 = v5->fields.pos - 1;
  if ( (unsigned int)v10 >= LODWORD(slotInfos->max_length) )
    sub_1C71610(IsMyServantOrNpcRestriction_43733304);
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
  void *IsMyServantOrNpcRestriction_43733304; // x0
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

  if ( (byte_4CC879A & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    byte_4CC879A = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  IsMyServantOrNpcRestriction_43733304 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    IsMyServantOrNpcRestriction_43733304 = BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    p_myServantNumMax = (int32_t *)(*((_QWORD *)IsMyServantOrNpcRestriction_43733304 + 23) + 172LL);
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
  IsMyServantOrNpcRestriction_43733304 = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43733304(
                                                   this,
                                                   pos,
                                                   *(const MethodInfo **)&pos);
  if ( ((unsigned __int8)IsMyServantOrNpcRestriction_43733304 & 1) != 0 )
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
            sub_1C71610(IsMyServantOrNpcRestriction_43733304);
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
    sub_1C71608(IsMyServantOrNpcRestriction_43733304, *(_QWORD *)&svtId);
  }
  IsMyServantOrNpcRestriction_43733304 = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                           this,
                                           *(const MethodInfo **)&svtId);
  if ( !IsMyServantOrNpcRestriction_43733304 )
    goto LABEL_44;
  v13 = *((_DWORD *)IsMyServantOrNpcRestriction_43733304 + 6);
  if ( v13 < 1 )
    return 1;
  v14 = 0;
  v15 = -v13;
  do
  {
    if ( !(v15 + v14) )
      goto LABEL_43;
    v16 = *((_DWORD *)IsMyServantOrNpcRestriction_43733304 + v14 + 8);
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
  if ( (byte_4CC87AE & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC87AE = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( slotInfos )
  {
    if ( (unsigned int)(initPos - 1) >= LODWORD(slotInfos->max_length) )
      sub_1C71610(this);
    v8 = slotInfos->m_Items[initPos - 1];
    if ( !v8 )
      sub_1C71608(this, *(_QWORD *)&pos);
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

  if ( (byte_4CC87B7 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC87B7 = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       svtId,
                                       (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
          sub_1C71610(Instance);
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
                                               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_int____get_Item__);
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
                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_int____get_Item__);
              v19 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)Item,
                      v13,
                      (const MethodInfo_3175898 *)Method_System_Linq_Enumerable_Intersect_int___);
              Instance = System_Linq_Enumerable__ToArray_int_(
                           v19,
                           (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
              if ( !v16->fields.rangeTypeList )
                goto LABEL_33;
              v20 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              if ( System_Collections_Generic_List_Int32Enum___get_Item(
                     (System_Collections_Generic_List_T__o *)v16->fields.rangeTypeList,
                     v17,
                     (const MethodInfo_37F5C30 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
              {
                if ( System_Linq_Enumerable__Any_int_(
                       v20,
                       (const MethodInfo_3156754 *)Method_System_Linq_Enumerable_Any_int___) )
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
                       (const MethodInfo_37F5C30 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 2
                  && !System_Linq_Enumerable__Any_int_(
                        v20,
                        (const MethodInfo_3156754 *)Method_System_Linq_Enumerable_Any_int___) )
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
      sub_1C71608(Instance, v10);
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

  if ( (byte_4CC87B6 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_4CC87B6 = 1;
  }
  entity = 0;
  if ( !this->fields.restrictionBaseEntity )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_23:
    sub_1C71608(Master_object, v4);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return 1;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
LABEL_24:
      sub_1C71610(Master_object);
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
                                      (const MethodInfo_3408ECC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      return 0;
    LODWORD(v11) = targetVals->max_length;
    if ( (__int64)++v12 >= (int)v11 )
      goto LABEL_19;
  }
}


bool QuestRestrictionInfo__IsUniqueIndividuality_43717124(
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
  const MethodInfo_340B428 **v20; // x26
  const MethodInfo_3168198 **v21; // x24
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
  const MethodInfo_3168198 **v32; // x27
  Il2CppObject *v33; // x24
  BalanceConfig_c **v34; // x23
  Il2CppObject *v35; // x20
  const MethodInfo_340B428 **v36; // x22
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

  if ( (byte_4CC8784 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&ImageLimitCount_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC8784 = 1;
  }
  v57 = 0;
  entity = 0;
  v56 = 0;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_71;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo
    || (Instance = (DataManager_o *)FollowerInfo__get_IsNpc(npcFollowerInfo, 0), ((unsigned __int8)Instance & 1) == 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_82;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
                                (const MethodInfo_340B428 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !Master_object )
      goto LABEL_82;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &v57,
           npcFollowerInfo->fields.npcFollowerSvtId,
           (const MethodInfo_340B428 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
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
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      svtId,
                                      (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0) )
  {
LABEL_82:
    sub_1C71608(Instance, v14);
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
  v20 = (const MethodInfo_340B428 **)&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__;
  v21 = (const MethodInfo_3168198 **)&Method_System_Linq_Enumerable_Contains_int___;
  v22 = 0;
  v52 = this->fields.uniqueIndividualitys;
  v55 = this;
  while ( 1 )
  {
    if ( v22 >= (unsigned int)max_length )
LABEL_83:
      sub_1C71610(Instance);
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
                                      (const MethodInfo_340B428 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
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
          v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v59, 0);
          v41 = DataMasterBase_object__object__int___GetEntity(
                  v16,
                  v40,
                  (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                    (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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


bool QuestRestrictionInfo__IsUniqueIndividuality_43718608(
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

  if ( (byte_4CC8785 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&ImageLimitCount_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC8785 = 1;
  }
  v50 = 0;
  entity = 0;
  v48 = 0;
  v49 = 0;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo || !FollowerInfo__get_IsNpc(npcFollowerInfo, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
          (const MethodInfo_340B428 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    Instance = Master_object;
    if ( !Master_object )
      goto LABEL_75;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           Master_object,
           &v50,
           npcFollowerInfo->fields.npcFollowerSvtId,
           (const MethodInfo_340B428 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
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
  Instance = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0) )
  {
LABEL_75:
    sub_1C71608(Instance, v17);
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
        sub_1C71610(Instance);
      v24 = uniqueIndividualitys->m_Items[v23];
      if ( source )
      {
        Instance = (void *)System_Linq_Enumerable__Contains_int_(
                             source,
                             v24,
                             (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
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
                       (const MethodInfo_340B428 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
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
                          (const MethodInfo_340B428 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
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
                    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v52, 0);
                    v37 = DataMasterBase_object__object__int___GetEntity(
                            v20,
                            v36,
                            (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                       (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___) )
                {
                  return 1;
                }
              }
              else
              {
                v29 = PartyOrganizationListViewItem__get_SvtId(v27, 0);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v29, 0);
                if ( DataMasterBase_object__object__int___TryGetEntity(
                       v20,
                       &v48,
                       v30,
                       (const MethodInfo_3408ECC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
bool QuestRestrictionInfo__IsUniqueServant_43716596(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  bool isUniqueServant; // w8
  int32_t v6; // w22
  BalanceConfig_c *v7; // x0
  struct System_Int32_array *deckSvtIdList; // x9
  int32_t v9; // w9

  if ( (byte_4CC8782 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC8782 = 1;
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
            sub_1C71608(v7, *(_QWORD *)&svtId);
          if ( (unsigned int)v6 >= LODWORD(deckSvtIdList->max_length) )
            sub_1C71610(v7);
          v9 = deckSvtIdList->m_Items[v6++];
        }
        while ( v9 != svtId );
      }
    }
  }
  return isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsUniqueServant_43716796(
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

  if ( (byte_4CC8783 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC8783 = 1;
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
          sub_1C71608(Member, *(_QWORD *)&svtId);
        v15 = PartyOrganizationListViewItem__get_SvtId(Member, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v15, 0) == svtId )
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

  if ( (byte_4CC87BB & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC87BB = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_11:
    sub_1C71608(Master_object, v4);
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

  if ( (byte_4CC8770 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&FollowerInfo___TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    byte_4CC8770 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_1C71458(int___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.deckSvtIdList = v4;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.deckSvtIdList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct FollowerInfo_array *)sub_1C71458(
                                       FollowerInfo___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
  this->fields.deckNpcInfoList = v11;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.deckNpcInfoList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4CC876D & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC876D = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtIdList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
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
          sub_1C71354((GrandQuestFolderBoardItem_o *)((char *)deckNpcInfoList + v7 * 4), 0, v9, v10, v11, v12, v13, v14);
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
              NpcFollowerServantId = (__int64)NpcFollowerMaster__GetEntity_42703032(
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
                NpcFollowerServantId = sub_1C714EC(NpcFollowerServantId, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
                if ( !NpcFollowerServantId )
                {
                  v38 = sub_1C7162C(0);
                  sub_1C714D8(v38, 0);
                }
              }
              if ( v6 >= v21[6] )
LABEL_43:
                sub_1C71610(NpcFollowerServantId);
              *(_QWORD *)&v21[2 * v6 + 8] = v28;
              sub_1C71354((GrandQuestFolderBoardItem_o *)&v21[v7], v28, v22, v23, v24, v25, v26, v27);
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
          NpcFollowerServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v39, 0);
          if ( !v31 )
LABEL_44:
            sub_1C71608(NpcFollowerServantId, v8);
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
            NpcFollowerServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v40, 0);
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


void QuestRestrictionInfo__SetDeckInfo_43705488(
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
  NpcFollowerEntity_o *Entity_42703032; // x0
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

  if ( (byte_4CC876E & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC876E = 1;
  }
  fixed = QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, (const MethodInfo *)eventDeckEntity);
  if ( eventDeckEntity && this->fields.deckSvtIdList )
  {
    v6 = fixed;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
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
                     (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Follower & 1) == 0 )
        {
          v20 = this->fields.deckNpcInfoList;
          if ( !v20 )
            goto LABEL_48;
          if ( v7 >= LODWORD(v20->max_length) )
            goto LABEL_49;
          v20->m_Items[v7] = 0;
          sub_1C71354((GrandQuestFolderBoardItem_o *)((char *)v20 + v8 * 4), 0, v14, v15, v16, v17, v18, v19);
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
                  (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            NpcFollowerServantId = UserEventDeckEntity__GetNpcFollowerServantId(eventDeckEntity, v7, 0);
            if ( NpcFollowerServantId >= 1 )
            {
              v23 = NpcFollowerServantId;
              Follower = (__int64)Master_object;
              if ( !Master_object )
                goto LABEL_48;
              Entity_42703032 = NpcFollowerMaster__GetEntity_42703032(
                                  Master_object,
                                  this->fields.questId,
                                  this->fields.questPhase,
                                  v23,
                                  0);
              if ( Entity_42703032 )
              {
                v25 = (unsigned int *)this->fields.deckNpcInfoList;
                Follower = (__int64)NpcFollowerMaster__GetFollower(
                                      Master_object,
                                      this->fields.questId,
                                      this->fields.questPhase,
                                      Entity_42703032->fields.id,
                                      0);
                if ( !v25 )
                  goto LABEL_48;
                v32 = Follower;
                if ( Follower )
                {
                  Follower = sub_1C714EC(Follower, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
                  if ( !Follower )
                  {
                    v42 = sub_1C7162C(0);
                    sub_1C714D8(v42, 0);
                  }
                }
                if ( v7 >= v25[6] )
                  goto LABEL_49;
                *(_QWORD *)&v25[2 * v7 + 8] = v32;
                sub_1C71354((GrandQuestFolderBoardItem_o *)&v25[v8], v32, v26, v27, v28, v29, v30, v31);
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
          Follower = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v44, 0);
          if ( !v35 )
LABEL_48:
            sub_1C71608(Follower, v9);
          if ( v7 >= LODWORD(v35->max_length) )
LABEL_49:
            sub_1C71610(Follower);
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
            Follower = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v45, 0);
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


void QuestRestrictionInfo__SetDeckInfo_43706840(
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

  if ( (byte_4CC876F & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC876F = 1;
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
          sub_1C71354(
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
        Member = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                      SvtId,
                                                      0);
        if ( !v18 )
LABEL_39:
          sub_1C71608(Member, partyItem);
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
                  Member = (PartyOrganizationListViewItem_o *)sub_1C714EC(v26, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
                  if ( !Member )
                  {
                    v27 = sub_1C7162C(0);
                    sub_1C714D8(v27, 0);
                  }
                }
                if ( v11 >= v25[6] )
LABEL_40:
                  sub_1C71610(Member);
                *(_QWORD *)&v25[2 * v11 + 8] = v26;
                sub_1C71354((GrandQuestFolderBoardItem_o *)&v25[i], (int32_t)v26, num, (int32_t)method, v4, v5, v6, v7);
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

  if ( (byte_4CC8771 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC8771 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.deckNpcInfoList && this->fields.isNpcMultipleBattle && !this->fields.isNpcEditablePos )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (FollowerInfo_array *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object
      || (Master_object = NpcFollowerMaster__GetQuestFollowerList(
                            (NpcFollowerMaster_o *)Master_object,
                            this->fields.questId,
                            this->fields.questPhase,
                            0)) == 0 )
    {
LABEL_25:
      sub_1C71608(Master_object, v5);
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
          Master_object = (FollowerInfo_array *)sub_1C714EC(v9, deckNpcInfoList->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v24 = sub_1C7162C(0);
            sub_1C714D8(v24, 0);
          }
          if ( (unsigned int)(npcInitIdx - 1) >= LODWORD(deckNpcInfoList->max_length) )
            break;
          v18 = (char *)deckNpcInfoList + 8 * npcInitIdx - 8;
          *((_QWORD *)v18 + 4) = v9;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)v9, v12, v13, v14, v15, v16, v17);
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
              *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
      sub_1C71610(Master_object);
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
  QuestRestrictionInfo_o *v11; // x29
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  GrandQuestFolderBoardItem_o *p_supportPositionList; // x24
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  int32_t *p_eventDeckNum; // x27
  System_Collections_Generic_List_object__o *v80; // x20
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  System_Collections_Generic_List_int__o *v87; // x20
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  System_Collections_Generic_List_object__o *v118; // x20
  int32_t v119; // w2
  int32_t v120; // w3
  System_String_o *v121; // x4
  int32_t v122; // w5
  int64_t v123; // x6
  System_String_o *v124; // x7
  System_Collections_Generic_List_object__o *v125; // x20
  int32_t v126; // w2
  int32_t v127; // w3
  System_String_o *v128; // x4
  int32_t v129; // w5
  int64_t v130; // x6
  System_String_o *v131; // x7
  System_Collections_Generic_List_object__o *v132; // x20
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  System_Collections_Generic_List_object__o *v139; // x20
  int32_t v140; // w2
  int32_t v141; // w3
  System_String_o *v142; // x4
  int32_t v143; // w5
  int64_t v144; // x6
  System_String_o *v145; // x7
  System_Collections_Generic_List_object__o *v146; // x20
  int32_t v147; // w2
  int32_t v148; // w3
  System_String_o *v149; // x4
  int32_t v150; // w5
  int64_t v151; // x6
  System_String_o *v152; // x7
  System_Collections_Generic_List_object__o *v153; // x20
  int32_t v154; // w2
  int32_t v155; // w3
  System_String_o *v156; // x4
  int32_t v157; // w5
  int64_t v158; // x6
  System_String_o *v159; // x7
  int32_t v160; // w2
  int32_t v161; // w3
  System_String_o *v162; // x4
  int32_t v163; // w5
  int64_t v164; // x6
  System_String_o *v165; // x7
  System_Collections_Generic_List_object__o *v166; // x20
  int32_t v167; // w2
  int32_t v168; // w3
  System_String_o *v169; // x4
  int32_t v170; // w5
  int64_t v171; // x6
  System_String_o *v172; // x7
  int32_t v173; // w2
  int32_t v174; // w3
  System_String_o *v175; // x4
  int32_t v176; // w5
  int64_t v177; // x6
  System_String_o *v178; // x7
  System_Collections_Generic_Dictionary_K__V__o **p_dialogMessageInfoDictionary; // x26
  int32_t v180; // w2
  int32_t v181; // w3
  System_String_o *v182; // x4
  int32_t v183; // w5
  int64_t v184; // x6
  System_String_o *v185; // x7
  System_Collections_Generic_List_object__o *v186; // x20
  int32_t v187; // w2
  int32_t v188; // w3
  System_String_o *v189; // x4
  int32_t v190; // w5
  int64_t v191; // x6
  System_String_o *v192; // x7
  __int64 Master_object; // x0
  Il2CppObject *v194; // x1
  const MethodInfo *v195; // x4
  const MethodInfo *v196; // x1
  System_Collections_Generic_Dictionary_int__object__o *v197; // x20
  int32_t v198; // w2
  int32_t v199; // w3
  System_String_o *v200; // x4
  int32_t v201; // w5
  int64_t v202; // x6
  System_String_o *v203; // x7
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
  System_Collections_Generic_List_object__o *v218; // x29
  RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  bool HasFlag; // w0
  BalanceConfig_c *v221; // x0
  __int64 v222; // x0
  int32_t v223; // w2
  int32_t v224; // w3
  System_String_o *v225; // x4
  int32_t v226; // w5
  int64_t v227; // x6
  System_String_o *v228; // x7
  RestrictionBaseEntity_o *v229; // x8
  Il2CppObject *v230; // x20
  RestrictionWholeEntity_array *Entities; // x0
  int32_t v232; // w2
  int32_t v233; // w3
  System_String_o *v234; // x4
  int32_t v235; // w5
  int64_t v236; // x6
  System_String_o *v237; // x7
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  unsigned int v240; // w25
  RestrictionWholeEntity_o *v241; // x21
  System_Boolean_array *SetPossiblePosition; // x0
  int32_t v243; // w2
  int32_t v244; // w3
  System_String_o *v245; // x4
  int32_t v246; // w5
  int64_t v247; // x6
  System_String_o *v248; // x7
  Il2CppObject *v249; // x23
  int32_t v250; // w0
  int32_t v251; // w2
  int32_t v252; // w3
  System_String_o *v253; // x4
  int32_t v254; // w5
  int64_t v255; // x6
  System_String_o *v256; // x7
  System_Collections_Generic_List_object__o *v257; // x23
  int32_t v258; // w2
  int32_t v259; // w3
  System_String_o *v260; // x4
  int32_t v261; // w5
  int64_t v262; // x6
  System_String_o *v263; // x7
  struct System_Object_array *v264; // x8
  _QWORD *v265; // x9
  __int64 v266; // x10
  __int64 v267; // x1
  Il2CppClass **v268; // x0
  System_Collections_Generic_List_object__o *v269; // x23
  int32_t v270; // w2
  int32_t v271; // w3
  System_String_o *v272; // x4
  int32_t v273; // w5
  int64_t v274; // x6
  System_String_o *v275; // x7
  struct System_Object_array *items; // x8
  _QWORD *v277; // x9
  __int64 size; // x10
  __int64 v279; // x1
  Il2CppClass **v280; // x0
  System_Collections_Generic_List_object__o *v281; // x23
  int32_t v282; // w2
  int32_t v283; // w3
  System_String_o *v284; // x4
  int32_t v285; // w5
  int64_t v286; // x6
  System_String_o *v287; // x7
  struct System_Object_array *v288; // x8
  _QWORD *v289; // x9
  __int64 v290; // x10
  __int64 v291; // x1
  Il2CppClass **v292; // x0
  Il2CppObject *v293; // x23
  int32_t v294; // w0
  int32_t v295; // w2
  int32_t v296; // w3
  System_String_o *v297; // x4
  int32_t v298; // w5
  int64_t v299; // x6
  System_String_o *v300; // x7
  BalanceConfig_c *v301; // x0
  __int64 v302; // x0
  int32_t v303; // w2
  int32_t v304; // w3
  System_String_o *v305; // x4
  int32_t v306; // w5
  int64_t v307; // x6
  System_String_o *v308; // x7
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
  System_Boolean_array *v330; // x0
  int32_t v331; // w2
  int32_t v332; // w3
  System_String_o *v333; // x4
  int32_t v334; // w5
  int64_t v335; // x6
  System_String_o *v336; // x7
  Il2CppObject *v337; // x23
  int32_t v338; // w0
  int32_t v339; // w2
  int32_t v340; // w3
  System_String_o *v341; // x4
  int32_t v342; // w5
  int64_t v343; // x6
  System_String_o *v344; // x7
  System_Collections_Generic_List_object__o *v345; // x23
  int32_t v346; // w2
  int32_t v347; // w3
  System_String_o *v348; // x4
  int32_t v349; // w5
  int64_t v350; // x6
  System_String_o *v351; // x7
  struct System_Object_array *v352; // x8
  _QWORD *v353; // x9
  __int64 v354; // x10
  __int64 v355; // x1
  Il2CppClass **v356; // x0
  Il2CppObject *v357; // x23
  int32_t v358; // w0
  int32_t v359; // w2
  int32_t v360; // w3
  System_String_o *v361; // x4
  int32_t v362; // w5
  int64_t v363; // x6
  System_String_o *v364; // x7
  System_Collections_Generic_List_object__o *v365; // x23
  int32_t v366; // w2
  int32_t v367; // w3
  System_String_o *v368; // x4
  int32_t v369; // w5
  int64_t v370; // x6
  System_String_o *v371; // x7
  struct System_Object_array *v372; // x8
  _QWORD *v373; // x9
  __int64 v374; // x10
  __int64 v375; // x1
  Il2CppClass **v376; // x0
  struct System_Int32_array *targetVals; // x8
  System_Collections_Generic_List_object__o *v378; // x23
  int32_t v379; // w2
  int32_t v380; // w3
  System_String_o *v381; // x4
  int32_t v382; // w5
  int64_t v383; // x6
  System_String_o *v384; // x7
  struct System_Object_array *v385; // x8
  _QWORD *v386; // x9
  __int64 v387; // x10
  __int64 v388; // x1
  Il2CppClass **v389; // x0
  System_Collections_Generic_List_object__o *v390; // x23
  int32_t v391; // w2
  int32_t v392; // w3
  System_String_o *v393; // x4
  int32_t v394; // w5
  int64_t v395; // x6
  System_String_o *v396; // x7
  struct System_Object_array *v397; // x8
  _QWORD *v398; // x9
  __int64 v399; // x10
  __int64 v400; // x1
  Il2CppClass **v401; // x0
  int32_t restrictionMessageId; // w2
  int32_t v403; // w2
  int32_t v404; // w3
  System_String_o *v405; // x4
  int32_t v406; // w5
  int64_t v407; // x6
  System_String_o *v408; // x7
  struct System_Object_array *v409; // x8
  _QWORD *v410; // x9
  __int64 v411; // x10
  Il2CppClass **v412; // x0
  QuestRestrictionInfo_DialogMessageInfo_o *v413; // x23
  QuestRestrictionInfo_o *v414; // x28
  char isAllOutBattle; // w8
  __int64 v416; // x21
  int32_t v417; // w2
  int32_t v418; // w3
  System_String_o *v419; // x4
  int32_t v420; // w5
  int64_t v421; // x6
  System_String_o *v422; // x7
  BalanceConfig_c *v423; // x0
  __int64 v424; // x0
  int32_t v425; // w2
  int32_t v426; // w3
  System_String_o *v427; // x4
  int32_t v428; // w5
  int64_t v429; // x6
  System_String_o *v430; // x7
  int32_t v431; // w21
  int v432; // w24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v433; // x8
  __int64 v434; // x22
  System_Collections_Generic_List_int__o *v435; // x24
  int v436; // w8
  __int64 v437; // x19
  __int64 v438; // x23
  struct System_Int32_array *v439; // x8
  _QWORD *v440; // x9
  __int64 v441; // x10
  int32_t v442; // w2
  int32_t v443; // w2
  int32_t v444; // w3
  System_String_o *v445; // x4
  int32_t v446; // w5
  int64_t v447; // x6
  System_String_o *v448; // x7
  struct System_Object_array *v449; // x8
  _QWORD *v450; // x9
  __int64 v451; // x10
  Il2CppClass **v452; // x0
  QuestRestrictionInfo_DialogMessageInfo_o *v453; // x23
  __int64 v454; // x24
  GrandQuestFolderBoardItem_c *klass; // x25
  QuestRestrictionInfo_SlotInfo_o *v456; // x23
  int32_t v457; // w2
  int32_t v458; // w3
  System_String_o *v459; // x4
  int32_t v460; // w5
  int64_t v461; // x6
  System_String_o *v462; // x7
  int v463; // w19
  void **v464; // x0
  int servantNumMax; // w8
  GrandQuestFolderBoardItem_c *v466; // x8
  int32_t v467; // w24
  __int64 v468; // x8
  QuestRestrictionInfo___c_c *v469; // x0
  System_Func_object__bool__o *_9__85_0; // x23
  Il2CppObject *v471; // x25
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v473; // w2
  int32_t v474; // w3
  System_String_o *v475; // x4
  int32_t v476; // w5
  int64_t v477; // x6
  System_String_o *v478; // x7
  _BOOL4 v479; // w0
  QuestRestrictionInfo___c_c *v480; // x8
  _BOOL4 v481; // w23
  System_Func_object__bool__o *_9__85_1; // x25
  Il2CppObject *v483; // x28
  struct QuestRestrictionInfo___c_StaticFields *v484; // x0
  int32_t v485; // w2
  int32_t v486; // w3
  System_String_o *v487; // x4
  int32_t v488; // w5
  int64_t v489; // x6
  System_String_o *v490; // x7
  _BOOL4 v491; // w0
  QuestRestrictionInfo___c_c *v492; // x8
  _BOOL4 v493; // w25
  System_Func_object__bool__o *_9__85_2; // x28
  Il2CppObject *v495; // x27
  struct QuestRestrictionInfo___c_StaticFields *v496; // x0
  int32_t v497; // w2
  int32_t v498; // w3
  System_String_o *v499; // x4
  int32_t v500; // w5
  int64_t v501; // x6
  System_String_o *v502; // x7
  GrandQuestFolderBoardItem_c *v503; // x8
  __int64 v504; // x8
  GrandQuestFolderBoardItem_c *v505; // x8
  __int64 v506; // x8
  GrandQuestFolderBoardItem_c *v507; // x8
  __int64 v508; // x8
  int v509; // w8
  unsigned int v510; // w27
  __int64 v511; // x25
  __int64 v512; // x8
  GrandQuestFolderBoardItem_c *v513; // x8
  __int64 v514; // x8
  System_Collections_Generic_List_object__o *v515; // x23
  int32_t v516; // w2
  int32_t v517; // w3
  System_String_o *v518; // x4
  int32_t v519; // w5
  int64_t v520; // x6
  System_String_o *v521; // x7
  struct System_Object_array *v522; // x8
  _QWORD *v523; // x9
  __int64 v524; // x10
  __int64 v525; // x1
  Il2CppClass **v526; // x0
  GrandQuestFolderBoardItem_c *v527; // x8
  __int64 v528; // x8
  struct System_Int32_array *v529; // x8
  _QWORD *v530; // x9
  __int64 v531; // x10
  System_String_o *v532; // x23
  GrandQuestFolderBoardItem_c *v533; // x8
  __int64 v534; // x8
  int32_t v535; // w2
  int32_t v536; // w3
  System_String_o *v537; // x4
  int32_t v538; // w5
  int64_t v539; // x6
  System_String_o *v540; // x7
  GrandQuestFolderBoardItem_c *v541; // x8
  __int64 v542; // x8
  System_String_o **v543; // x25
  GrandQuestFolderBoardItem_c *v544; // x8
  QuestRestrictionInfo___c_c *v545; // x0
  __int64 v546; // x27
  System_Func_object__bool__o *_9__85_3; // x23
  Il2CppObject *v548; // x25
  struct QuestRestrictionInfo___c_StaticFields *v549; // x0
  int32_t v550; // w2
  int32_t v551; // w3
  System_String_o *v552; // x4
  int32_t v553; // w5
  int64_t v554; // x6
  System_String_o *v555; // x7
  GrandQuestFolderBoardItem_c *v556; // x8
  __int64 v557; // x8
  GrandQuestFolderBoardItem_c *v558; // x8
  __int64 v559; // x8
  GrandQuestFolderBoardItem_c *v560; // x8
  __int64 v561; // x8
  System_Object_array *v562; // x0
  int32_t v563; // w2
  int32_t v564; // w3
  System_String_o *v565; // x4
  int32_t v566; // w5
  int64_t v567; // x6
  System_String_o *v568; // x7
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v570; // w10
  int v571; // w11
  int v572; // w9
  int v573; // w20
  int32_t v574; // w19
  QuestRestrictionInfo_SlotInfo_o *v575; // x13
  int v576; // w21
  int v577; // w22
  __int64 v578; // x8
  bool HasFlag_42751420; // w0
  bool v580; // w0
  Il2CppObject *Value_int__object; // x0
  int v582; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v584; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v585; // x8
  __int64 v586; // x8
  Il2CppObject *v587; // x20
  int32_t v588; // w0
  int32_t v589; // w2
  int32_t v590; // w3
  System_String_o *v591; // x4
  int32_t v592; // w5
  int64_t v593; // x6
  System_String_o *v594; // x7
  System_Collections_Generic_Dictionary_int__object__o *restrictionSlotDictionary; // x8
  _BOOL8 v596; // x0
  __int64 v597; // x1
  int monitor; // w9
  int v599; // w10
  __int64 v600; // x11
  System_Text_StringBuilder_o *v601; // x20
  System_Text_StringBuilder_o *v602; // x21
  struct RestrictionWholeEntity_array *v603; // x19
  int v604; // w8
  unsigned int v605; // w22
  RestrictionWholeEntity_o *v606; // x24
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  int v609; // w25
  _BOOL4 v610; // w8
  __int64 v611; // x0
  int32_t v612; // w2
  int32_t v613; // w3
  System_String_o *v614; // x4
  int32_t v615; // w5
  int64_t v616; // x6
  System_String_o *v617; // x7
  System_String_o *v618; // x19
  System_String_o *v619; // x0
  System_String_o *v620; // x0
  int32_t v621; // w2
  int32_t v622; // w3
  System_String_o *v623; // x4
  int32_t v624; // w5
  int64_t v625; // x6
  System_String_o *v626; // x7
  __int64 v627; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // [xsp+8h] [xbp-198h]
  GrandQuestFolderBoardItem_o *p_svtIdForceBattleList; // [xsp+10h] [xbp-190h]
  GrandQuestFolderBoardItem_o *p_restrictionMessage; // [xsp+18h] [xbp-188h]
  GrandQuestFolderBoardItem_o *p_confirmRestrictionMessage; // [xsp+20h] [xbp-180h]
  struct RestrictionWholeEntity_array *v632; // [xsp+28h] [xbp-178h]
  GrandQuestFolderBoardItem_o *p_fixedSupportIndividualities; // [xsp+30h] [xbp-170h]
  GrandQuestFolderBoardItem_o *p_fixedNpcIndividualities; // [xsp+38h] [xbp-168h]
  GrandQuestFolderBoardItem_o *p_needStartingIndividualities; // [xsp+40h] [xbp-160h]
  GrandQuestFolderBoardItem_o *p_uniqueIndividualitys; // [xsp+48h] [xbp-158h]
  System_Collections_Generic_List_object__o **p_fixedMyServantIndividualitiesList; // [xsp+50h] [xbp-150h]
  System_Collections_Generic_List_object__o **p_fixedIndividualitiesList; // [xsp+58h] [xbp-148h]
  System_Collections_Generic_List_object__o **p_needStartingIndividualitiesList; // [xsp+60h] [xbp-140h]
  System_Collections_Generic_List_object__o **p_fixedNpcIndividualitiesList; // [xsp+68h] [xbp-138h]
  System_Collections_Generic_List_object__o **p_fixedSupportIndividualitiesList; // [xsp+70h] [xbp-130h]
  GrandQuestFolderBoardItem_o *p_deckDispLimitCountList; // [xsp+78h] [xbp-128h]
  GrandQuestFolderBoardItem_o *p_deckLimitCountList; // [xsp+80h] [xbp-120h]
  struct FollowerInfo_array **p_deckNpcInfoList; // [xsp+88h] [xbp-118h]
  System_Collections_Generic_List_object__o **p_myServantPositionsList; // [xsp+90h] [xbp-110h]
  System_Collections_Generic_List_object__o **p_positionsList; // [xsp+A0h] [xbp-100h]
  System_Collections_Generic_Dictionary_K__V__o **v648; // [xsp+A8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o **p_restrictionSlotDetailDictionary; // [xsp+B0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_K__V__o **p_restrictionSlotDictionary; // [xsp+B8h] [xbp-E8h]
  struct RestrictionBaseEntity_o **p_restrictionBaseEntity; // [xsp+C0h] [xbp-E0h]
  QuestRestrictionInfo_o *v652; // [xsp+C8h] [xbp-D8h]
  GrandQuestFolderBoardItem_o *p_deckSvtIdList; // [xsp+D0h] [xbp-D0h]
  _BOOL4 v654; // [xsp+D0h] [xbp-D0h]
  int32_t questIdb; // [xsp+DCh] [xbp-C4h]
  GrandQuestFolderBoardItem_o *p_fields; // [xsp+E0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v658; // [xsp+E8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v659; // [xsp+100h] [xbp-A0h] BYREF
  Il2CppObject *item; // [xsp+120h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+128h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v662; // [xsp+130h] [xbp-70h] BYREF
  Il2CppObject *v663; // [xsp+138h] [xbp-68h] BYREF

  if ( (byte_4CC876B & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
    sub_1C713B0(&Method_BasicHelper_Any_RestrictionSlotEntity___);
    sub_1C713B0(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
    sub_1C713B0(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_RestrictionBaseMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_RestrictionSlotMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_RestrictionWholeMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1C713B0(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__);
    sub_1C713B0(&FollowerInfo___TypeInfo);
    sub_1C713B0(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
    sub_1C713B0(&System_Func_RestrictionSlotEntity__bool__TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_bool____Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_bool_____ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_bool____TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&QuestRestrictionInfo_SlotInfo___TypeInfo);
    sub_1C713B0(&QuestRestrictionInfo_SlotInfo_TypeInfo);
    sub_1C713B0(&System_Text_StringBuilder_TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__Setup_b__85_0__);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__Setup_b__85_1__);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__Setup_b__85_2__);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__Setup_b__85_3__);
    sub_1C713B0(&QuestRestrictionInfo___c_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    sub_1C713B0(&StringLiteral_10303/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/);
    sub_1C713B0(&StringLiteral_10268/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC876B = 1;
  }
  v662 = 0;
  v663 = 0;
  item = 0;
  entity = 0;
  memset(&v659, 0, sizeof(v659));
  this->fields.isRestriction = 0;
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  v10 = StringLiteral_1/*""*/;
  v11 = this;
  this->fields.restrictionMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  p_restrictionMessage = (GrandQuestFolderBoardItem_o *)&this->fields.restrictionMessage;
  sub_1C71354(
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
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.confirmRestrictionMessage,
    (int32_t)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.supportOnlyRestrictionEntity = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.supportOnlyRestrictionEntity,
    0,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.uniqueSvtRestrictionEntity = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.uniqueSvtRestrictionEntity, 0, v24, v25, v26, v27, v28, v29);
  this->fields.deckSvtIdList = 0;
  p_deckSvtIdList = (GrandQuestFolderBoardItem_o *)&this->fields.deckSvtIdList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.deckSvtIdList, 0, v30, v31, v32, v33, v34, v35);
  this->fields.deckNpcInfoList = 0;
  p_deckNpcInfoList = &this->fields.deckNpcInfoList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.deckNpcInfoList, 0, v36, v37, v38, v39, v40, v41);
  this->fields.fixedSupportPositionRestrictionEntity = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedSupportPositionRestrictionEntity,
    0,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.supportPositionList = 0;
  p_supportPositionList = (GrandQuestFolderBoardItem_o *)&this->fields.supportPositionList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.supportPositionList, 0, v49, v50, v51, v52, v53, v54);
  this->fields.fixedMyServantPositionRestrictionEntity = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
    0,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.servantNumRestrictionEntity = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.servantNumRestrictionEntity, 0, v61, v62, v63, v64, v65, v66);
  this->fields.servantNumMax = 0;
  this->fields.myServantNumRestrictionEntity = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.myServantNumRestrictionEntity,
    0,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  this->fields.myServantNumMax = 0;
  *(_WORD *)&this->fields.isSupportOnlyForceBattle = 0;
  this->fields.svtIdForceBattleList = 0;
  p_svtIdForceBattleList = (GrandQuestFolderBoardItem_o *)&this->fields.svtIdForceBattleList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.svtIdForceBattleList, 0, v73, v74, v75, v76, v77, v78);
  this->fields.isFatigure = 0;
  p_eventDeckNum = &this->fields.eventDeckNum;
  v11->fields.eventDeckNum = 0;
  *(int32_t *)((char *)p_eventDeckNum + 3) = 0;
  v80 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v80,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v11->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v80;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v11->fields.myServantOrNpcRestrictionEntityList,
    (int32_t)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v87 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v87,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  v11->fields.specifiedPositionList = v87;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v11->fields.specifiedPositionList,
    (int32_t)v87,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  v11->fields.isNotTransitionSupportList = 0;
  v11->fields.supportInitIndex = 0;
  v11->fields.fixedServantPositionRestrictionEntity = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v11->fields.fixedServantPositionRestrictionEntity,
    0,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  v11->fields.uniqueIndividualityEntity = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v11->fields.uniqueIndividualityEntity,
    0,
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
  v11->fields.deckLimitCountList = 0;
  p_deckLimitCountList = (GrandQuestFolderBoardItem_o *)&v11->fields.deckLimitCountList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v11->fields.deckLimitCountList, 0, v106, v107, v108, v109, v110, v111);
  v11->fields.deckDispLimitCountList = 0;
  p_deckDispLimitCountList = (GrandQuestFolderBoardItem_o *)&v11->fields.deckDispLimitCountList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v11->fields.deckDispLimitCountList, 0, v112, v113, v114, v115, v116, v117);
  v11->fields.isNotSingleSupportOnly = 0;
  *(_DWORD *)&v11->fields.isUniqueServant = 0;
  v118 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v118,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_bool_____ctor__);
  v11->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v118;
  p_positionsList = (System_Collections_Generic_List_object__o **)&v11->fields.positionsList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v11->fields.positionsList,
    (int32_t)v118,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  v125 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v125,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_int_____ctor__);
  v11->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v125;
  p_fixedIndividualitiesList = (System_Collections_Generic_List_object__o **)&v11->fields.fixedIndividualitiesList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v11->fields.fixedIndividualitiesList,
    (int32_t)v125,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  v11->fields.isFixedMyServantPosition = 0;
  v132 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v132,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_bool_____ctor__);
  v11->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v132;
  p_myServantPositionsList = (System_Collections_Generic_List_object__o **)&v11->fields.myServantPositionsList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v11->fields.myServantPositionsList,
    (int32_t)v132,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  v139 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v139,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_int_____ctor__);
  v11->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v139;
  p_fixedMyServantIndividualitiesList = (System_Collections_Generic_List_object__o **)&v11->fields.fixedMyServantIndividualitiesList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v11->fields.fixedMyServantIndividualitiesList,
    (int32_t)v139,
    v140,
    v141,
    v142,
    v143,
    v144,
    v145);
  v11->fields.isFixedSupportPosition = 0;
  v146 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v146,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_int_____ctor__);
  v11->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v146;
  p_fixedSupportIndividualitiesList = (System_Collections_Generic_List_object__o **)&v11->fields.fixedSupportIndividualitiesList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v11->fields.fixedSupportIndividualitiesList,
    (int32_t)v146,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152);
  v11->fields.isFixedNpcPosition = 0;
  v153 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v153,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_int_____ctor__);
  v11->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v153;
  p_fixedNpcIndividualitiesList = (System_Collections_Generic_List_object__o **)&v11->fields.fixedNpcIndividualitiesList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v11->fields.fixedNpcIndividualitiesList,
    (int32_t)v153,
    v154,
    v155,
    v156,
    v157,
    v158,
    v159);
  v11->fields.npcPositionList = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v11->fields.npcPositionList, 0, v160, v161, v162, v163, v164, v165);
  v166 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v166,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_int_____ctor__);
  v11->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v166;
  p_needStartingIndividualitiesList = (System_Collections_Generic_List_object__o **)&v11->fields.needStartingIndividualitiesList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v11->fields.needStartingIndividualitiesList,
    (int32_t)v166,
    v167,
    v168,
    v169,
    v170,
    v171,
    v172);
  v11->fields.isNeedStarting = 0;
  v11->fields.isFixedMyServantSingle = 0;
  *(_WORD *)&v11->fields.isMyServantOrNpc = 0;
  v11->fields.slotInfos = 0;
  p_fields = (GrandQuestFolderBoardItem_o *)&v11->fields;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v11->fields, 0, v173, v174, v175, v176, v177, v178);
  v11->fields.dialogMessageInfoDictionary = 0;
  p_dialogMessageInfoDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&v11->fields.dialogMessageInfoDictionary;
  v652 = v11;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v11->fields.dialogMessageInfoDictionary,
    0,
    v180,
    v181,
    v182,
    v183,
    v184,
    v185);
  v186 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v186,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v11->fields.grandServantRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v186;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v11->fields.grandServantRestrictionEntityList,
    (int32_t)v186,
    v187,
    v188,
    v189,
    v190,
    v191,
    v192);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !Master_object )
    goto LABEL_387;
  p_restrictionBaseEntity = &v11->fields.restrictionBaseEntity;
  if ( RestrictionBaseMaster__TryGetEntity(
         (RestrictionBaseMaster_o *)Master_object,
         &v11->fields.restrictionBaseEntity,
         v11->fields.questId,
         v11->fields.questPhase,
         v195) )
  {
    v11->fields.isRestriction = 1;
    v197 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v197,
      (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    v11->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v197;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&v11->fields.restrictionSlotDictionary;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&v11->fields.restrictionSlotDictionary,
      (int32_t)v197,
      v198,
      v199,
      v200,
      v201,
      v202,
      v203);
    v204 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v204,
      (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    v11->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v204;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&v11->fields.restrictionSlotDetailDictionary,
      (int32_t)v204,
      v205,
      v206,
      v207,
      v208,
      v209,
      v210);
    v211 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v211,
      (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    v11->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v211;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&v11->fields.dialogMessageInfoDictionary,
      (int32_t)v211,
      v212,
      v213,
      v214,
      v215,
      v216,
      v217);
    v218 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v218,
      (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    Master_object = (__int64)v652->fields.restrictionBaseEntity;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__object__o **)&v652->fields.restrictionSlotDetailDictionary;
    if ( !Master_object )
      goto LABEL_387;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 2, 0);
    restrictionBaseEntity = v652->fields.restrictionBaseEntity;
    v652->fields.isNotTransitionSupportList = Master_object & 1;
    if ( !restrictionBaseEntity )
      goto LABEL_387;
    if ( RestrictionBaseEntity__HasFlag(restrictionBaseEntity, 4, 0) )
    {
      Master_object = (__int64)*p_restrictionBaseEntity;
      if ( !*p_restrictionBaseEntity )
        goto LABEL_387;
      *p_eventDeckNum = RestrictionBaseEntity__GetUserEventDeckNo((RestrictionBaseEntity_o *)Master_object, 0);
    }
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    HasFlag = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 16, 0);
    v652->fields.isUniqueServant = HasFlag;
    if ( HasFlag )
    {
      v221 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v221 = BalanceConfig_TypeInfo;
      }
      v222 = sub_1C71458(int___TypeInfo, (unsigned int)v221->static_fields->DeckMemberMax);
      p_deckSvtIdList->klass = (GrandQuestFolderBoardItem_c *)v222;
      sub_1C71354(p_deckSvtIdList, v222, v223, v224, v225, v226, v227, v228);
    }
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 32, 0);
    v229 = v652->fields.restrictionBaseEntity;
    v652->fields.isNotSingleSupportOnly = Master_object & 1;
    if ( !v229 )
      goto LABEL_387;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      v229,
      &v652->fields.overwriteLimitCountSvtIds,
      &v652->fields.overwriteLimitCounts,
      &v652->fields.overwriteLimitCountIconIds,
      0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v230 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    if ( !Master_object )
      goto LABEL_387;
    Entities = RestrictionWholeMaster__GetEntities(
                 (RestrictionWholeMaster_o *)Master_object,
                 (*p_restrictionBaseEntity)->fields.restrictionWholeId,
                 0);
    v652->fields.restrictionWholeEntities = Entities;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&v652->fields.restrictionWholeEntities,
      (int32_t)Entities,
      v232,
      v233,
      v234,
      v235,
      v236,
      v237);
    restrictionWholeEntities = v652->fields.restrictionWholeEntities;
    p_restrictionWholeEntities = &v652->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_387;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v240 = 0;
      p_needStartingIndividualities = (GrandQuestFolderBoardItem_o *)&v652->fields.needStartingIndividualities;
      p_uniqueIndividualitys = (GrandQuestFolderBoardItem_o *)&v652->fields.uniqueIndividualitys;
      p_fixedSupportIndividualities = (GrandQuestFolderBoardItem_o *)&v652->fields.fixedSupportIndividualities;
      p_fixedNpcIndividualities = (GrandQuestFolderBoardItem_o *)&v652->fields.fixedNpcIndividualities;
      v632 = v652->fields.restrictionWholeEntities;
      while ( 2 )
      {
        if ( v240 >= max_length )
          goto LABEL_388;
        v241 = restrictionWholeEntities->m_Items[v240];
        if ( v241 )
        {
          switch ( v241->fields.type )
          {
            case 2:
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestGroupMaster___);
              if ( !Master_object )
                goto LABEL_387;
              Master_object = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Master_object, questId, 17, 0);
              v652->fields.allOutBattleGroupNo = Master_object;
              v652->fields.isAllOutBattle = 1;
              goto LABEL_89;
            case 3:
              Master_object = System_Linq_Enumerable__Min(
                                (System_Collections_Generic_IEnumerable_int__o *)v241->fields.targetVals,
                                0);
              v652->fields.servantNumMax = Master_object - 1;
              goto LABEL_89;
            case 4:
              v269 = *p_positionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v241, 0);
              if ( !v269 )
                goto LABEL_387;
              items = v269->fields._items;
              v277 = Method_System_Collections_Generic_List_bool____Add__;
              ++v269->fields._version;
              if ( !items )
                goto LABEL_387;
              size = v269->fields._size;
              v279 = Master_object;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v269,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v277[4] + 192LL) + 112LL));
              }
              else
              {
                v280 = &items->obj.klass + size;
                v269->fields._size = size + 1;
                v280[4] = (Il2CppClass *)v279;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v280 + 4), v279, v270, v271, v272, v273, v274, v275);
              }
              Master_object = (__int64)v241->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v378 = *p_fixedIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v378 )
                goto LABEL_387;
              Master_object = sub_1C714EC(Master_object, int___TypeInfo);
              v385 = v378->fields._items;
              v386 = Method_System_Collections_Generic_List_int____Add__;
              ++v378->fields._version;
              if ( !v385 )
                goto LABEL_387;
              v387 = v378->fields._size;
              v388 = Master_object;
              if ( (unsigned int)v387 >= LODWORD(v385->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v378,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v386[4] + 192LL) + 112LL));
              }
              else
              {
                v389 = &v385->obj.klass + v387;
                v378->fields._size = v387 + 1;
                v389[4] = (Il2CppClass *)v388;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v389 + 4), v388, v379, v380, v381, v382, v383, v384);
              }
              v652->fields.isFixedPosition = 1;
              goto LABEL_89;
            case 5:
              v281 = *p_myServantPositionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v241, 0);
              if ( !v281 )
                goto LABEL_387;
              v288 = v281->fields._items;
              v289 = Method_System_Collections_Generic_List_bool____Add__;
              ++v281->fields._version;
              if ( !v288 )
                goto LABEL_387;
              v290 = v281->fields._size;
              v291 = Master_object;
              if ( (unsigned int)v290 >= LODWORD(v288->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v281,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v289[4] + 192LL) + 112LL));
              }
              else
              {
                v292 = &v288->obj.klass + v290;
                v281->fields._size = v290 + 1;
                v292[4] = (Il2CppClass *)v291;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v292 + 4), v291, v282, v283, v284, v285, v286, v287);
              }
              Master_object = (__int64)v241->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v390 = *p_fixedMyServantIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v390 )
                goto LABEL_387;
              Master_object = sub_1C714EC(Master_object, int___TypeInfo);
              v397 = v390->fields._items;
              v398 = Method_System_Collections_Generic_List_int____Add__;
              ++v390->fields._version;
              if ( !v397 )
                goto LABEL_387;
              v399 = v390->fields._size;
              v400 = Master_object;
              if ( (unsigned int)v399 >= LODWORD(v397->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v390,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v398[4] + 192LL) + 112LL));
              }
              else
              {
                v401 = &v397->obj.klass + v399;
                v390->fields._size = v399 + 1;
                v401[4] = (Il2CppClass *)v400;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v401 + 4), v400, v391, v392, v393, v394, v395, v396);
              }
              v652->fields.isFixedMyServantPosition = 1;
              goto LABEL_89;
            case 6:
              SetPossiblePosition = RestrictionWholeEntity__GetSetPossiblePosition(v241, 0);
              p_supportPositionList->klass = (GrandQuestFolderBoardItem_c *)SetPossiblePosition;
              sub_1C71354(p_supportPositionList, (int32_t)SetPossiblePosition, v243, v244, v245, v246, v247, v248);
              Master_object = (__int64)v241->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v249 = System_Array__Clone((System_Array_o *)Master_object, 0);
              p_fixedSupportIndividualities->klass = (GrandQuestFolderBoardItem_c *)sub_1C714EC(v249, int___TypeInfo);
              v250 = sub_1C714EC(v249, int___TypeInfo);
              sub_1C71354(p_fixedSupportIndividualities, v250, v251, v252, v253, v254, v255, v256);
              Master_object = (__int64)v241->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v257 = *p_fixedSupportIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v257 )
                goto LABEL_387;
              Master_object = sub_1C714EC(Master_object, int___TypeInfo);
              v264 = v257->fields._items;
              v265 = Method_System_Collections_Generic_List_int____Add__;
              ++v257->fields._version;
              if ( !v264 )
                goto LABEL_387;
              v266 = v257->fields._size;
              v267 = Master_object;
              if ( (unsigned int)v266 >= LODWORD(v264->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v257,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v265[4] + 192LL) + 112LL));
              }
              else
              {
                v268 = &v264->obj.klass + v266;
                v257->fields._size = v266 + 1;
                v268[4] = (Il2CppClass *)v267;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v268 + 4), v267, v258, v259, v260, v261, v262, v263);
              }
              v652->fields.isFixedSupportPosition = 1;
              goto LABEL_89;
            case 7:
              v330 = RestrictionWholeEntity__GetSetPossiblePosition(v241, 0);
              p_supportPositionList->klass = (GrandQuestFolderBoardItem_c *)v330;
              sub_1C71354(p_supportPositionList, (int32_t)v330, v331, v332, v333, v334, v335, v336);
              Master_object = (__int64)v241->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v337 = System_Array__Clone((System_Array_o *)Master_object, 0);
              p_fixedNpcIndividualities->klass = (GrandQuestFolderBoardItem_c *)sub_1C714EC(v337, int___TypeInfo);
              v338 = sub_1C714EC(v337, int___TypeInfo);
              sub_1C71354(p_fixedNpcIndividualities, v338, v339, v340, v341, v342, v343, v344);
              Master_object = (__int64)v241->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v345 = *p_fixedNpcIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v345 )
                goto LABEL_387;
              Master_object = sub_1C714EC(Master_object, int___TypeInfo);
              v352 = v345->fields._items;
              v353 = Method_System_Collections_Generic_List_int____Add__;
              ++v345->fields._version;
              if ( !v352 )
                goto LABEL_387;
              v354 = v345->fields._size;
              v355 = Master_object;
              if ( (unsigned int)v354 >= LODWORD(v352->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v345,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v353[4] + 192LL) + 112LL));
              }
              else
              {
                v356 = &v352->obj.klass + v354;
                v345->fields._size = v354 + 1;
                v356[4] = (Il2CppClass *)v355;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v356 + 4), v355, v346, v347, v348, v349, v350, v351);
              }
              v652->fields.isFixedNpcPosition = 1;
              goto LABEL_89;
            case 8:
              Master_object = (__int64)v241->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v357 = System_Array__Clone((System_Array_o *)Master_object, 0);
              p_needStartingIndividualities->klass = (GrandQuestFolderBoardItem_c *)sub_1C714EC(v357, int___TypeInfo);
              v358 = sub_1C714EC(v357, int___TypeInfo);
              sub_1C71354(p_needStartingIndividualities, v358, v359, v360, v361, v362, v363, v364);
              Master_object = (__int64)v241->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v365 = *p_needStartingIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v365 )
                goto LABEL_387;
              Master_object = sub_1C714EC(Master_object, int___TypeInfo);
              v372 = v365->fields._items;
              v373 = Method_System_Collections_Generic_List_int____Add__;
              ++v365->fields._version;
              if ( !v372 )
                goto LABEL_387;
              v374 = v365->fields._size;
              v375 = Master_object;
              if ( (unsigned int)v374 >= LODWORD(v372->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v365,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v373[4] + 192LL) + 112LL));
              }
              else
              {
                v376 = &v372->obj.klass + v374;
                v365->fields._size = v374 + 1;
                v376[4] = (Il2CppClass *)v375;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v376 + 4), v375, v366, v367, v368, v369, v370, v371);
              }
              v652->fields.isNeedStarting = 1;
              goto LABEL_89;
            case 9:
              Master_object = (__int64)v241->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v293 = System_Array__Clone((System_Array_o *)Master_object, 0);
              p_uniqueIndividualitys->klass = (GrandQuestFolderBoardItem_c *)sub_1C714EC(v293, int___TypeInfo);
              v294 = sub_1C714EC(v293, int___TypeInfo);
              sub_1C71354(p_uniqueIndividualitys, v294, v295, v296, v297, v298, v299, v300);
              v301 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v301 = BalanceConfig_TypeInfo;
              }
              v302 = sub_1C71458(int___TypeInfo, (unsigned int)v301->static_fields->DeckMemberMax);
              v652->fields.deckSvtIdList = (struct System_Int32_array *)v302;
              sub_1C71354(p_deckSvtIdList, v302, v303, v304, v305, v306, v307, v308);
              v309 = sub_1C71458(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v652->fields.deckLimitCountList = (struct System_Int32_array *)v309;
              sub_1C71354(p_deckLimitCountList, v309, v310, v311, v312, v313, v314, v315);
              v316 = sub_1C71458(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v652->fields.deckDispLimitCountList = (struct System_Int32_array *)v316;
              sub_1C71354(p_deckDispLimitCountList, v316, v317, v318, v319, v320, v321, v322);
              v323 = sub_1C71458(
                       FollowerInfo___TypeInfo,
                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v652->fields.deckNpcInfoList = (struct FollowerInfo_array *)v323;
              sub_1C71354((GrandQuestFolderBoardItem_o *)p_deckNpcInfoList, v323, v324, v325, v326, v327, v328, v329);
              restrictionWholeEntities = v632;
              v652->fields.isUniqueIndividuality = 1;
              goto LABEL_89;
            case 0xA:
              v652->fields.isDataLostBattle = 1;
              targetVals = v241->fields.targetVals;
              if ( !targetVals )
                goto LABEL_387;
              if ( !LODWORD(targetVals->max_length) )
                goto LABEL_388;
              v652->fields.dataLostBattleId = targetVals->m_Items[0];
LABEL_89:
              restrictionMessageId = v241->fields.restrictionMessageId;
              if ( restrictionMessageId < 1 )
                goto LABEL_102;
              if ( !v230 )
                goto LABEL_387;
              Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v230,
                                &entity,
                                restrictionMessageId,
                                (const MethodInfo_3408ECC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
              if ( (Master_object & 1) == 0 )
                goto LABEL_102;
              if ( !v218 )
                goto LABEL_387;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v218,
                                entity,
                                (const MethodInfo_3810AA8 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) != 0 )
                goto LABEL_102;
              v194 = entity;
              v409 = v218->fields._items;
              v410 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
              ++v218->fields._version;
              if ( !v409 )
                goto LABEL_387;
              v411 = v218->fields._size;
              if ( (unsigned int)v411 >= LODWORD(v409->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v218,
                  v194,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v410[4] + 192LL) + 112LL));
              }
              else
              {
                v412 = &v409->obj.klass + v411;
                v218->fields._size = v411 + 1;
                v412[4] = (Il2CppClass *)v194;
                sub_1C71354(
                  (GrandQuestFolderBoardItem_o *)(v412 + 4),
                  (int32_t)v194,
                  v403,
                  v404,
                  v405,
                  v406,
                  v407,
                  v408);
              }
              v413 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_1C715FC(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
              QuestRestrictionInfo_DialogMessageInfo___ctor(v413, 0);
              if ( !v413 )
                goto LABEL_387;
              v413->fields.restrictionType = v241->fields.type;
              if ( !entity )
                goto LABEL_387;
              Master_object = (__int64)*p_dialogMessageInfoDictionary;
              if ( !*p_dialogMessageInfoDictionary )
                goto LABEL_387;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                (int32_t)entity[1].klass,
                (Il2CppObject *)v413,
                (const MethodInfo_3462294 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
LABEL_102:
              max_length = restrictionWholeEntities->max_length;
              if ( (int)++v240 >= max_length )
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
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestMaster___);
    v414 = v652;
    if ( !Master_object )
      goto LABEL_387;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
      &v663,
      questId,
      (const MethodInfo_3408ECC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    Master_object = (__int64)v663;
    if ( !v663 )
      goto LABEL_387;
    Master_object = QuestEntity__HasFlag_42751420((QuestEntity_o *)v663, 0x100000, questPhase, 0);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v652 )
        goto LABEL_387;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = v652->fields.isAllOutBattle;
    }
    v652->fields.isNoSupportBattle = isAllOutBattle;
    Master_object = (__int64)v663;
    if ( !v663 )
      goto LABEL_387;
    v652->fields.isSupportOnlyForceBattle = QuestEntity__HasFlag_42751420((QuestEntity_o *)v663, 0x80000, questPhase, 0);
    Master_object = (__int64)v663;
    if ( !v663 )
      goto LABEL_387;
    v652->fields.isFatigure = QuestEntity__HasFlag_42751420((QuestEntity_o *)v663, 0x200000, questPhase, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_387;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v662, questId, questPhase, 0) )
    {
      Master_object = sub_1C71458(int___TypeInfo, 1);
      if ( !v662 )
        goto LABEL_387;
      v416 = Master_object;
      Master_object = QuestPhaseEntity__GetSingleForceSvtId(v662, 0);
      if ( !v416 )
        goto LABEL_387;
      if ( !*(_DWORD *)(v416 + 24) )
        goto LABEL_388;
      *(_DWORD *)(v416 + 32) = Master_object;
      p_svtIdForceBattleList->klass = (GrandQuestFolderBoardItem_c *)v416;
      sub_1C71354(p_svtIdForceBattleList, v416, v417, v418, v419, v420, v421, v422);
      Master_object = (__int64)v662;
      if ( !v662 )
        goto LABEL_387;
      v652->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v662, 0);
      Master_object = (__int64)v662;
      if ( !v662 )
        goto LABEL_387;
      v652->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v662, 0);
    }
    else
    {
      v652->fields.correctionIconId = -1;
    }
    v423 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v423 = BalanceConfig_TypeInfo;
    }
    v424 = sub_1C71458(QuestRestrictionInfo_SlotInfo___TypeInfo, (unsigned int)v423->static_fields->DeckMemberMax);
    p_fields->klass = (GrandQuestFolderBoardItem_c *)v424;
    sub_1C71354(p_fields, v424, v425, v426, v427, v428, v429, v430);
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_387;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_346241C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    Master_object = (__int64)*p_restrictionSlotDetailDictionary;
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_387;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_346241C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v431 = 1;
    v432 = 1;
    v648 = p_dialogMessageInfoDictionary;
    while ( 1 )
    {
      Master_object = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Master_object = (__int64)BalanceConfig_TypeInfo;
      }
      if ( v431 > *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 172LL) )
        break;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      if ( !*p_restrictionBaseEntity )
        goto LABEL_387;
      if ( !Master_object )
        goto LABEL_387;
      Master_object = (__int64)RestrictionSlotMaster__GetEntities(
                                 (RestrictionSlotMaster_o *)Master_object,
                                 (*p_restrictionBaseEntity)->fields.restrictionSlotId,
                                 v431,
                                 0);
      if ( !Master_object )
        goto LABEL_387;
      v433 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
      v434 = Master_object;
      questIdb = v432;
      Master_object = (__int64)*p_restrictionSlotDictionary;
      v654 = v433 != 0;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_387;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
        v431,
        (Il2CppObject *)v434,
        (const MethodInfo_3462294 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v435 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v435,
        (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
      v436 = *(_DWORD *)(v434 + 24);
      if ( v436 >= 1 )
      {
        v437 = 0;
        while ( (unsigned int)v437 < v436 )
        {
          v438 = *(_QWORD *)(v434 + 32 + 8 * v437);
          if ( !v438 || !v435 )
            goto LABEL_387;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v435,
                            *(_DWORD *)(v438 + 40),
                            (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            v194 = (Il2CppObject *)*(unsigned int *)(v438 + 40);
            v439 = v435->fields._items;
            v440 = Method_System_Collections_Generic_List_int__Add__;
            ++v435->fields._version;
            if ( !v439 )
              goto LABEL_387;
            v441 = v435->fields._size;
            if ( (unsigned int)v441 >= LODWORD(v439->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v435,
                (int32_t)v194,
                *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v440[4] + 192LL) + 112LL));
            }
            else
            {
              v435->fields._size = v441 + 1;
              v439->m_Items[v441] = (int)v194;
            }
          }
          v442 = *(_DWORD *)(v438 + 44);
          if ( v442 >= 1 )
          {
            if ( !v230 )
              goto LABEL_387;
            Master_object = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v230,
                              &item,
                              v442,
                              (const MethodInfo_3408ECC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (Master_object & 1) != 0 )
            {
              if ( !v218 )
                goto LABEL_387;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v218,
                                item,
                                (const MethodInfo_3810AA8 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) == 0 )
              {
                v194 = item;
                v449 = v218->fields._items;
                v450 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
                ++v218->fields._version;
                if ( !v449 )
                  goto LABEL_387;
                v451 = v218->fields._size;
                if ( (unsigned int)v451 >= LODWORD(v449->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v218,
                    v194,
                    *(const MethodInfo_3810718 **)(*(_QWORD *)(v450[4] + 192LL) + 112LL));
                }
                else
                {
                  v452 = &v449->obj.klass + v451;
                  v218->fields._size = v451 + 1;
                  v452[4] = (Il2CppClass *)v194;
                  sub_1C71354(
                    (GrandQuestFolderBoardItem_o *)(v452 + 4),
                    (int32_t)v194,
                    v443,
                    v444,
                    v445,
                    v446,
                    v447,
                    v448);
                }
                v453 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_1C715FC(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
                QuestRestrictionInfo_DialogMessageInfo___ctor(v453, 0);
                if ( !v453 )
                  goto LABEL_387;
                v453->fields.slotNo = v431;
                if ( !item )
                  goto LABEL_387;
                Master_object = (__int64)*p_dialogMessageInfoDictionary;
                if ( !*p_dialogMessageInfoDictionary )
                  goto LABEL_387;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  (int32_t)item[1].klass,
                  (Il2CppObject *)v453,
                  (const MethodInfo_3462294 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v436 = *(_DWORD *)(v434 + 24);
          if ( (int)++v437 >= v436 )
            goto LABEL_163;
        }
        goto LABEL_388;
      }
LABEL_163:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !Master_object )
        goto LABEL_387;
      Master_object = (__int64)RestrictionSlotDetailMaster__GetEntities(
                                 (RestrictionSlotDetailMaster_o *)Master_object,
                                 v435,
                                 0);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_387;
      v454 = Master_object;
      System_Collections_Generic_Dictionary_int__object___Add(
        *p_restrictionSlotDetailDictionary,
        v431,
        (Il2CppObject *)Master_object,
        (const MethodInfo_3462294 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v456 = (QuestRestrictionInfo_SlotInfo_o *)sub_1C715FC(QuestRestrictionInfo_SlotInfo_TypeInfo);
      QuestRestrictionInfo_SlotInfo___ctor(v456, 0);
      if ( !klass )
        goto LABEL_387;
      if ( v456 )
      {
        Master_object = sub_1C714EC(v456, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_object )
        {
          v627 = sub_1C7162C(0);
          sub_1C714D8(v627, 0);
        }
      }
      v463 = v431 - 1;
      if ( (unsigned int)(v431 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_388;
      v464 = &klass->_1.image + v463;
      v464[4] = v456;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v464 + 4), (int32_t)v456, v457, v458, v459, v460, v461, v462);
      servantNumMax = v414->fields.servantNumMax;
      if ( servantNumMax < 1 || v463 < servantNumMax )
      {
        v469 = QuestRestrictionInfo___c_TypeInfo;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v469 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__85_0 = (System_Func_object__bool__o *)v469->static_fields->__9__85_0;
        if ( !_9__85_0 )
        {
          if ( !v469->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v469);
            v469 = QuestRestrictionInfo___c_TypeInfo;
          }
          v471 = (Il2CppObject *)v469->static_fields->__9;
          _9__85_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__85_0, v471, Method_QuestRestrictionInfo___c__Setup_b__85_0__, 0);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
          static_fields->__9__85_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__85_0;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__85_0,
            (int32_t)_9__85_0,
            v473,
            v474,
            v475,
            v476,
            v477,
            v478);
        }
        v479 = BasicHelper__Any_object__51593856(
                 (System_Object_array *)v434,
                 (System_Func_T__bool__o *)_9__85_0,
                 (const MethodInfo_3134280 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v480 = QuestRestrictionInfo___c_TypeInfo;
        v481 = v479;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v480 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__85_1 = (System_Func_object__bool__o *)v480->static_fields->__9__85_1;
        if ( !_9__85_1 )
        {
          if ( !v480->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v480);
            v480 = QuestRestrictionInfo___c_TypeInfo;
          }
          v483 = (Il2CppObject *)v480->static_fields->__9;
          _9__85_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__85_1, v483, Method_QuestRestrictionInfo___c__Setup_b__85_1__, 0);
          v484 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v484->__9__85_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__85_1;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v484->__9__85_1,
            (int32_t)_9__85_1,
            v485,
            v486,
            v487,
            v488,
            v489,
            v490);
        }
        v491 = BasicHelper__Any_object__51593856(
                 (System_Object_array *)v434,
                 (System_Func_T__bool__o *)_9__85_1,
                 (const MethodInfo_3134280 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v492 = QuestRestrictionInfo___c_TypeInfo;
        v493 = v491;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v492 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__85_2 = (System_Func_object__bool__o *)v492->static_fields->__9__85_2;
        if ( !_9__85_2 )
        {
          if ( !v492->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v492);
            v492 = QuestRestrictionInfo___c_TypeInfo;
          }
          v495 = (Il2CppObject *)v492->static_fields->__9;
          _9__85_2 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__85_2, v495, Method_QuestRestrictionInfo___c__Setup_b__85_2__, 0);
          v496 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v496->__9__85_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__85_2;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v496->__9__85_2,
            (int32_t)_9__85_2,
            v497,
            v498,
            v499,
            v500,
            v501,
            v502);
        }
        Master_object = BasicHelper__Any_object__51593856(
                          (System_Object_array *)v434,
                          (System_Func_T__bool__o *)_9__85_2,
                          (const MethodInfo_3134280 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        if ( v493 || !v481 || (Master_object & 1) != 0 )
        {
          v414 = v652;
          if ( (v481 || !v493) | Master_object & 1 )
          {
            if ( v481 || v493 || (((unsigned int)Master_object ^ 1) & 1) != 0 )
            {
              if ( Master_object & 1 | (!v481 || !v493) )
              {
                if ( ((v481 || v493) & (unsigned int)Master_object & 1) != 0 )
                {
                  v558 = p_fields->klass;
                  if ( !p_fields->klass )
                    goto LABEL_387;
                  if ( (unsigned int)v463 >= LODWORD(v558->_1.namespaze) )
                    goto LABEL_388;
                  v559 = *((_QWORD *)&v558->_1.byval_arg.data + v463);
                  if ( !v559 )
                    goto LABEL_387;
                  *(_DWORD *)(v559 + 16) = 4;
                  v652->fields.isMyServantOrSupport = 1;
                }
              }
              else
              {
                v560 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_387;
                if ( (unsigned int)v463 >= LODWORD(v560->_1.namespaze) )
                  goto LABEL_388;
                v561 = *((_QWORD *)&v560->_1.byval_arg.data + v463);
                if ( !v561 )
                  goto LABEL_387;
                *(_DWORD *)(v561 + 16) = 3;
                v652->fields.isMyServantOrNpc = 1;
              }
            }
            else
            {
              v505 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v463 >= LODWORD(v505->_1.namespaze) )
                goto LABEL_388;
              v506 = *((_QWORD *)&v505->_1.byval_arg.data + v463);
              if ( !v506 )
                goto LABEL_387;
              *(_DWORD *)(v506 + 16) = 2;
              v652->fields.supportInitIndex = v431;
            }
          }
          else
          {
            v507 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_387;
            if ( (unsigned int)v463 >= LODWORD(v507->_1.namespaze) )
              goto LABEL_388;
            v508 = *((_QWORD *)&v507->_1.byval_arg.data + v463);
            if ( !v508 )
              goto LABEL_387;
            *(_DWORD *)(v508 + 16) = 1;
          }
        }
        else
        {
          v414 = v652;
          v503 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_387;
          if ( (unsigned int)v463 >= LODWORD(v503->_1.namespaze) )
            goto LABEL_388;
          v504 = *((_QWORD *)&v503->_1.byval_arg.data + v463);
          if ( !v504 )
            goto LABEL_387;
          *(_DWORD *)(v504 + 16) = 0;
        }
        if ( !v454 )
          goto LABEL_387;
        v509 = *(_DWORD *)(v454 + 24);
        if ( v509 >= 1 )
        {
          v510 = 0;
          while ( v510 < v509 )
          {
            v511 = *(_QWORD *)(v454 + 8LL * (int)v510 + 32);
            if ( !v511 )
              goto LABEL_387;
            if ( !*(_DWORD *)(v434 + 24) )
              break;
            v512 = *(_QWORD *)(v434 + 32);
            if ( !v512 )
              goto LABEL_387;
            if ( *(_DWORD *)(v511 + 16) == *(_DWORD *)(v512 + 40) )
            {
              v513 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v463 >= LODWORD(v513->_1.namespaze) )
                goto LABEL_388;
              v514 = *((_QWORD *)&v513->_1.byval_arg.data + v463);
              if ( !v514 )
                goto LABEL_387;
              if ( *(_DWORD *)(v514 + 16) <= 2u )
              {
                Master_object = *(_QWORD *)(v511 + 40);
                if ( !Master_object )
                  goto LABEL_387;
                v515 = *(System_Collections_Generic_List_object__o **)(v514 + 24);
                Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
                if ( !v515 )
                  goto LABEL_387;
                Master_object = sub_1C714EC(Master_object, int___TypeInfo);
                v522 = v515->fields._items;
                v523 = Method_System_Collections_Generic_List_int____Add__;
                ++v515->fields._version;
                if ( !v522 )
                  goto LABEL_387;
                v524 = v515->fields._size;
                v525 = Master_object;
                if ( (unsigned int)v524 >= LODWORD(v522->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v515,
                    (Il2CppObject *)Master_object,
                    *(const MethodInfo_3810718 **)(*(_QWORD *)(v523[4] + 192LL) + 112LL));
                }
                else
                {
                  v526 = &v522->obj.klass + v524;
                  v515->fields._size = v524 + 1;
                  v526[4] = (Il2CppClass *)v525;
                  sub_1C71354((GrandQuestFolderBoardItem_o *)(v526 + 4), v525, v516, v517, v518, v519, v520, v521);
                }
                v527 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_387;
                if ( (unsigned int)v463 >= LODWORD(v527->_1.namespaze) )
                  goto LABEL_388;
                v528 = *((_QWORD *)&v527->_1.byval_arg.data + v463);
                if ( !v528 )
                  goto LABEL_387;
                Master_object = *(_QWORD *)(v528 + 32);
                if ( !Master_object )
                  goto LABEL_387;
                v194 = (Il2CppObject *)*(unsigned int *)(v511 + 48);
                v529 = *(struct System_Int32_array **)(Master_object + 16);
                v530 = Method_System_Collections_Generic_List_Restriction_RangeType__Add__;
                ++*(_DWORD *)(Master_object + 28);
                if ( !v529 )
                  goto LABEL_387;
                v531 = *(int *)(Master_object + 24);
                if ( (unsigned int)v531 >= LODWORD(v529->max_length) )
                {
                  System_Collections_Generic_List_Int32Enum___AddWithResize(
                    (System_Collections_Generic_List_T__o *)Master_object,
                    (int32_t)v194,
                    *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v530[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Master_object + 24) = v531 + 1;
                  v529->m_Items[v531] = (int)v194;
                }
              }
              if ( *(_DWORD *)(v511 + 32) == 2 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10303/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, 0);
                v532 = (System_String_o *)Master_object;
              }
              else
              {
                v532 = *(System_String_o **)(v511 + 24);
              }
              v533 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v463 >= LODWORD(v533->_1.namespaze) )
                goto LABEL_388;
              v534 = *((_QWORD *)&v533->_1.byval_arg.data + v463);
              if ( !v534 )
                goto LABEL_387;
              Master_object = System_String__IsNullOrEmpty(*(System_String_o **)(v534 + 40), 0);
              v541 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v463 >= LODWORD(v541->_1.namespaze) )
                goto LABEL_388;
              v542 = *((_QWORD *)&v541->_1.byval_arg.data + v463);
              if ( !v542 )
                goto LABEL_387;
              v543 = (System_String_o **)(v542 + 40);
              if ( (Master_object & 1) == 0 )
                v532 = System_String__Concat_64069988(*v543, (System_String_o *)StringLiteral_43/*"\n"*/, v532, 0);
              *v543 = v532;
              sub_1C71354((GrandQuestFolderBoardItem_o *)v543, (int32_t)v532, v535, v536, v537, v538, v539, v540);
            }
            v509 = *(_DWORD *)(v454 + 24);
            if ( (int)++v510 >= v509 )
              goto LABEL_253;
          }
          goto LABEL_388;
        }
LABEL_253:
        v544 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_387;
        if ( (unsigned int)v463 >= LODWORD(v544->_1.namespaze) )
          goto LABEL_388;
        v545 = QuestRestrictionInfo___c_TypeInfo;
        v546 = *((_QWORD *)&v544->_1.byval_arg.data + v463);
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v545 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__85_3 = (System_Func_object__bool__o *)v545->static_fields->__9__85_3;
        if ( !_9__85_3 )
        {
          if ( !v545->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v545);
            v545 = QuestRestrictionInfo___c_TypeInfo;
          }
          v548 = (Il2CppObject *)v545->static_fields->__9;
          _9__85_3 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__85_3, v548, Method_QuestRestrictionInfo___c__Setup_b__85_3__, 0);
          v549 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v549->__9__85_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__85_3;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v549->__9__85_3,
            (int32_t)_9__85_3,
            v550,
            v551,
            v552,
            v553,
            v554,
            v555);
          v414 = v652;
        }
        Master_object = BasicHelper__Any_object__51593856(
                          (System_Object_array *)v454,
                          (System_Func_T__bool__o *)_9__85_3,
                          (const MethodInfo_3134280 *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
        if ( !v546 )
          goto LABEL_387;
        *(_BYTE *)(v546 + 48) = (Master_object & 1) == 0;
        v556 = p_fields->klass;
        v467 = questIdb;
        if ( !p_fields->klass )
          goto LABEL_387;
        if ( (unsigned int)v463 >= LODWORD(v556->_1.namespaze) )
          goto LABEL_388;
        v557 = *((_QWORD *)&v556->_1.byval_arg.data + v463);
        if ( !v557 )
          goto LABEL_387;
        p_dialogMessageInfoDictionary = v648;
        if ( *(_DWORD *)(v557 + 16) == 1 )
        {
          if ( *(_BYTE *)(v557 + 48) )
            v414->fields.isNpcEditablePos = 1;
        }
        *(_BYTE *)(v557 + 49) = *(_DWORD *)(v434 + 24) != 0;
      }
      else
      {
        v466 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_387;
        v467 = questIdb;
        if ( (unsigned int)v463 >= LODWORD(v466->_1.namespaze) )
          goto LABEL_388;
        v468 = *((_QWORD *)&v466->_1.byval_arg.data + v463);
        if ( !v468 )
          goto LABEL_387;
        p_dialogMessageInfoDictionary = v648;
        *(_DWORD *)(v468 + 16) = 5;
        *(_BYTE *)(v468 + 48) = 0;
      }
      ++v431;
      v432 = v467 & v654;
    }
    if ( !v218
      || (v562 = System_Collections_Generic_List_object___ToArray(
                   v218,
                   (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__),
          v414->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v562,
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v414->fields.restrictionMessageEntities,
            (int32_t)v562,
            v563,
            v564,
            v565,
            v566,
            v567,
            v568),
          (slotInfos = v414->fields.slotInfos) == 0) )
    {
LABEL_387:
      sub_1C71608(Master_object, v194);
    }
    v570 = slotInfos->max_length;
    if ( v570 >= 1 )
    {
      v571 = 0;
      v572 = 0;
      v573 = 0;
      v574 = 0;
      while ( v570 != v571 )
      {
        v575 = slotInfos->m_Items[v571];
        if ( !v575 )
          goto LABEL_387;
        switch ( v575->fields.slotType )
        {
          case 0:
          case 3:
          case 4:
            ++v574;
            break;
          case 1:
            ++v573;
            break;
          case 2:
            ++v572;
            break;
          default:
            break;
        }
        if ( v570 == ++v571 )
          goto LABEL_293;
      }
LABEL_388:
      sub_1C71610(Master_object);
    }
    v574 = 0;
    v573 = 0;
    v572 = 0;
LABEL_293:
    if ( v572 == 0 && (v432 & 1) != 0 )
      v414->fields.isNoSupportBattle = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object )
      goto LABEL_387;
    Master_object = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                               (NpcFollowerMaster_o *)Master_object,
                               v414->fields.questId,
                               v414->fields.questPhase,
                               0);
    if ( !Master_object )
      goto LABEL_387;
    v576 = *(_DWORD *)(Master_object + 24);
    if ( v576 >= 1 )
    {
      v577 = 0;
      while ( v576 != v577 )
      {
        v578 = *(_QWORD *)(Master_object + 8LL * v577 + 32);
        if ( !v578 )
          goto LABEL_387;
        if ( !*(_BYTE *)(v578 + 105) && v576 != ++v577 )
          continue;
        goto LABEL_307;
      }
      goto LABEL_388;
    }
    v577 = 0;
LABEL_307:
    Master_object = (__int64)v663;
    if ( !v663 )
      goto LABEL_387;
    HasFlag_42751420 = QuestEntity__HasFlag_42751420((QuestEntity_o *)v663, 0x10000000, questPhase, 0);
    v414->fields.isNpcMultipleBattle = HasFlag_42751420;
    if ( !HasFlag_42751420 )
      v414->fields.isNpcMultipleBattle = v577 < v576 && v574 > 0 && v573 > 0;
    Master_object = (__int64)v663;
    if ( !v663 )
      goto LABEL_387;
    v580 = QuestEntity__HasFlag_42751420((QuestEntity_o *)v663, 0x20000000, questPhase, 0);
    v414->fields.isNpcOnlyBattle = v580;
    if ( !v580 )
      v414->fields.isNpcOnlyBattle = v577 < v576 && v574 == 0 && v573 > 0;
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 8, 0) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            *p_restrictionSlotDictionary,
                            2,
                            0,
                            (const MethodInfo_3138B80 *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v582 = 2;
      else
        v582 = 1;
      DeckMemberMax = v414->fields.servantNumMax;
      v414->fields.servantNumMin = v582;
      if ( !DeckMemberMax )
      {
        v584 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v584 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v584->static_fields->DeckMemberMax;
        v414->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v414->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v414->fields.isNpcMultipleBattle )
        v414->fields.myServantNumMax = v574;
    }
    else
    {
      v414->fields.myServantNumMax = v574;
      if ( v574 == 1 && DeckMemberMax == 1 )
      {
        Master_object = (__int64)v414->fields.restrictionSlotDetailDictionary;
        v414->fields.isFixedMyServantSingle = 1;
        if ( !Master_object )
          goto LABEL_387;
        Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                                   1,
                                   (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( Master_object )
        {
          v585 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
          if ( v585 )
          {
            if ( !(_DWORD)v585 )
              goto LABEL_388;
            v586 = *(_QWORD *)(Master_object + 32);
            if ( !v586 )
              goto LABEL_387;
            Master_object = *(_QWORD *)(v586 + 40);
            if ( !Master_object )
              goto LABEL_387;
            v587 = System_Array__Clone((System_Array_o *)Master_object, 0);
            v414->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)sub_1C714EC(
                                                                                              v587,
                                                                                              int___TypeInfo);
            v588 = sub_1C714EC(v587, int___TypeInfo);
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&v414->fields.fixedMyServantSingleIndividualities,
              v588,
              v589,
              v590,
              v591,
              v592,
              v593,
              v594);
          }
        }
      }
    }
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_387;
    Master_object = System_Collections_Generic_Dictionary_int__object___get_Count(
                      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                      (const MethodInfo_3461F44 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__object__o *)v414->fields.restrictionSlotDictionary;
    v414->fields.isSupportOnly = (int)Master_object > 0;
    if ( !restrictionSlotDictionary )
      goto LABEL_387;
    Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Values(
                               restrictionSlotDictionary,
                               (const MethodInfo_34620A4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Master_object )
      goto LABEL_387;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v658,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Master_object,
      (const MethodInfo_3B4C9F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v659 = v658;
    do
    {
      v596 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
               &v659,
               (const MethodInfo_35BAD28 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v596 )
        break;
      if ( !v659.fields._currentValue )
        sub_1C71608(v596, v597);
      monitor = (int)v659.fields._currentValue[1].monitor;
      if ( monitor >= 1 )
      {
        v599 = 0;
        while ( 1 )
        {
          if ( monitor == v599 )
            sub_1C71610(v596);
          v600 = *((_QWORD *)&v659.fields._currentValue[2].klass + v599);
          if ( !v600 )
            sub_1C71608(v596, v597);
          if ( *(_DWORD *)(v600 + 28) == 1 )
            break;
          if ( monitor == ++v599 )
            goto LABEL_348;
        }
        v414->fields.isSupportOnly = 0;
        break;
      }
LABEL_348:
      ;
    }
    while ( v414->fields.isSupportOnly );
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &v659,
      (const MethodInfo_35BAD24 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    v601 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v601, 0);
    v602 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v602, 0);
    v603 = *p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_387;
    v604 = v603->max_length;
    if ( v604 >= 1 )
    {
      v605 = 0;
      while ( 1 )
      {
        if ( v605 >= v604 )
          goto LABEL_388;
        v606 = v603->m_Items[v605];
        if ( !v606 )
          goto LABEL_387;
        Master_object = System_String__IsNullOrEmpty(v606->fields.summary, 0);
        if ( (Master_object & 1) == 0 )
          break;
LABEL_377:
        v604 = v603->max_length;
        if ( (int)++v605 >= v604 )
          goto LABEL_378;
      }
      type = v606->fields.type;
      if ( type == 10 || type == 2 )
      {
        v609 = 1;
      }
      else
      {
        if ( type == 1 )
        {
          targetVals2 = v606->fields.targetVals2;
          if ( !targetVals2 )
            goto LABEL_387;
          v609 = 1;
          v610 = LODWORD(targetVals2->max_length) == 1;
LABEL_365:
          if ( (v610 & v609) != 0 )
          {
            if ( v414->fields.isRestriction )
            {
              if ( !v602 )
                goto LABEL_387;
              System_Text_StringBuilder__Append_64115684(v602, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
            }
            else if ( !v602 )
            {
              goto LABEL_387;
            }
            Master_object = (__int64)System_Text_StringBuilder__Append_64115684(v602, v606->fields.summary, 0);
            v414->fields.isRestriction = 1;
          }
          if ( v609 )
          {
            if ( v414->fields.isRestriction )
            {
              if ( !v601 )
                goto LABEL_387;
              System_Text_StringBuilder__Append_64115684(v601, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
            }
            else if ( !v601 )
            {
              goto LABEL_387;
            }
            Master_object = (__int64)System_Text_StringBuilder__Append_64115684(v601, v606->fields.summary, 0);
            v414->fields.isRestriction = 1;
          }
          goto LABEL_377;
        }
        v609 = 0;
      }
      v610 = 1;
      goto LABEL_365;
    }
LABEL_378:
    if ( !v602 )
      goto LABEL_387;
    Master_object = System_Text_StringBuilder__get_Length(v602, 0);
    if ( (int)Master_object >= 1 )
    {
      v611 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v602->klass->vtable._3_ToString.methodPtr)(
               v602,
               v602->klass->vtable._3_ToString.method);
      p_confirmRestrictionMessage->klass = (GrandQuestFolderBoardItem_c *)v611;
      sub_1C71354(p_confirmRestrictionMessage, v611, v612, v613, v614, v615, v616, v617);
    }
    if ( !v601 )
      goto LABEL_387;
    if ( System_Text_StringBuilder__get_Length(v601, 0) >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v618 = LocalizationManager__Get((System_String_o *)StringLiteral_10268/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      v619 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v601->klass->vtable._3_ToString.methodPtr)(
                                  v601,
                                  v601->klass->vtable._3_ToString.method);
      v620 = System_String__Concat_64069988(v618, (System_String_o *)StringLiteral_43/*"\n"*/, v619, 0);
      p_restrictionMessage->klass = (GrandQuestFolderBoardItem_c *)v620;
      sub_1C71354(p_restrictionMessage, (int32_t)v620, v621, v622, v623, v624, v625, v626);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(v11, v196);
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
  bool HasFlag_42751420; // w0
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

  if ( (byte_4CC876C & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_1C713B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C713B0(&FollowerInfo___TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&System_Text_StringBuilder_TypeInfo);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    sub_1C713B0(&StringLiteral_10268/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_4CC876C = 1;
  }
  v170 = 0;
  entity = 0;
  v169 = 0;
  v3 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  v4 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0);
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_160;
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
        goto LABEL_161;
      v17 = restrictionEntityList->m_Items[v15];
      if ( !v17 )
        goto LABEL_160;
      switch ( v17->fields.type )
      {
        case 3:
          p_totalCostRestrictionEntity = &this->fields.totalCostRestrictionEntity;
          this->fields.totalCostRestrictionEntity = v17;
          goto LABEL_46;
        case 5:
          this->fields.supportOnlyRestrictionEntity = v17;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&this->fields.supportOnlyRestrictionEntity,
            (int32_t)v17,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isSupportOnly = 1;
          goto LABEL_76;
        case 6:
          p_uniqueSvtRestrictionEntity->klass = (GrandQuestFolderBoardItem_c *)v17;
          sub_1C71354(p_uniqueSvtRestrictionEntity, (int32_t)v17, v7, v8, v9, v10, v11, v12);
          v19 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v19 = BalanceConfig_TypeInfo;
          }
          v20 = (struct System_Int32_array *)sub_1C71458(
                                               int___TypeInfo,
                                               (unsigned int)v19->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v20;
          sub_1C71354((GrandQuestFolderBoardItem_o *)p_deckSvtIdList, (int32_t)v20, v21, v22, v23, v24, v25, v26);
          this->fields.isUniqueServant = 1;
          goto LABEL_76;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v17;
          sub_1C71354(
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
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&this->fields.supportPositionList,
            (int32_t)DeckPositionList,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          this->fields.isFixedSupportPosition = 1;
          goto LABEL_76;
        case 8:
          this->fields.fixedMyServantPositionRestrictionEntity = v17;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
            (int32_t)v17,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isFixedMyServantPosition = 1;
          goto LABEL_76;
        case 9:
          this->fields.fixedMyServantSingleRestrictionEntity = v17;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&this->fields.fixedMyServantSingleRestrictionEntity,
            (int32_t)v17,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isFixedMyServantSingle = 1;
          goto LABEL_76;
        case 0xA:
          p_servantNumRestrictionEntity->klass = (GrandQuestFolderBoardItem_c *)v17;
          sub_1C71354(p_servantNumRestrictionEntity, (int32_t)v17, v7, v8, v9, v10, v11, v12);
          targetVals = (int *)v17->fields.targetVals;
          if ( v17->fields.rangeType == 5 )
          {
            if ( targetVals && targetVals[6] >= 2 )
            {
              this->fields.servantNumMin = targetVals[8];
              v35 = targetVals[9];
LABEL_55:
              this->fields.servantNumMax = v35;
            }
          }
          else if ( targetVals )
          {
            v89 = *((_QWORD *)targetVals + 3);
            if ( v89 )
            {
              if ( !(_DWORD)v89 )
                goto LABEL_161;
              v35 = targetVals[8];
              goto LABEL_55;
            }
          }
LABEL_76:
          max_length = restrictionEntityList->max_length;
          if ( (int)++v15 >= max_length )
            goto LABEL_77;
          break;
        case 0xB:
          p_myServantNumRestrictionEntity->klass = (GrandQuestFolderBoardItem_c *)v17;
          sub_1C71354(p_myServantNumRestrictionEntity, (int32_t)v17, v7, v8, v9, v10, v11, v12);
          v36 = v17->fields.targetVals;
          if ( !v36 )
            goto LABEL_76;
          v37 = v36->max_length;
          if ( !v37 )
            goto LABEL_76;
          if ( !(_DWORD)v37 )
            goto LABEL_161;
          this->fields.myServantNumMax = v36->m_Items[0];
          goto LABEL_76;
        case 0xC:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_160;
          items = myServantOrNpcRestrictionEntityList->fields._items;
          v39 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !items )
            goto LABEL_160;
          size = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v17,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            myServantOrNpcRestrictionEntityList->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v17;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v17, v7, v8, v9, v10, v11, v12);
          }
          specifiedPositionList = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v17,
                                                                                               0);
          if ( !specifiedPositionList )
            goto LABEL_160;
          v91 = specifiedPositionList->fields._items;
          v92 = Method_System_Collections_Generic_List_int__Add__;
          ++specifiedPositionList->fields._version;
          if ( !v91 )
            goto LABEL_160;
          v93 = specifiedPositionList->fields._size;
          v6 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v93 >= LODWORD(v91->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              specifiedPositionList,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
          }
          else
          {
            specifiedPositionList->fields._size = v93 + 1;
            v91->m_Items[v93] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrNpc = 1;
          goto LABEL_76;
        case 0xE:
          this->fields.fixedServantPositionRestrictionEntity = v17;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&this->fields.fixedServantPositionRestrictionEntity,
            (int32_t)v17,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12);
          this->fields.isNeedStarting = 1;
          goto LABEL_76;
        case 0xF:
          p_uniqueIndividualityEntity->klass = (GrandQuestFolderBoardItem_c *)v17;
          sub_1C71354(p_uniqueIndividualityEntity, (int32_t)v17, v7, v8, v9, v10, v11, v12);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v17->fields.targetVals;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_160;
          v42 = System_Array__Clone((System_Array_o *)myServantOrNpcRestrictionEntityList, 0);
          p_uniqueIndividualitys->klass = (GrandQuestFolderBoardItem_c *)sub_1C714EC(v42, int___TypeInfo);
          v43 = sub_1C714EC(v42, int___TypeInfo);
          sub_1C71354(p_uniqueIndividualitys, v43, v44, v45, v46, v47, v48, v49);
          v50 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v50 = BalanceConfig_TypeInfo;
          }
          v51 = (struct System_Int32_array *)sub_1C71458(
                                               int___TypeInfo,
                                               (unsigned int)v50->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v51;
          sub_1C71354((GrandQuestFolderBoardItem_o *)p_deckSvtIdList, (int32_t)v51, v52, v53, v54, v55, v56, v57);
          v58 = (struct System_Int32_array *)sub_1C71458(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckLimitCountList = v58;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&this->fields.deckLimitCountList,
            (int32_t)v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64);
          v65 = (struct System_Int32_array *)sub_1C71458(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckDispLimitCountList = v65;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&this->fields.deckDispLimitCountList,
            (int32_t)v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71);
          v72 = (struct FollowerInfo_array *)sub_1C71458(
                                               FollowerInfo___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckNpcInfoList = v72;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&this->fields.deckNpcInfoList,
            (int32_t)v72,
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
          this->fields.isUniqueIndividuality = 1;
          goto LABEL_76;
        case 0x10:
          goto LABEL_63;
        case 0x11:
          this->fields.isDataLostBattle = 1;
          v79 = v17->fields.targetVals;
          if ( !v79 )
            goto LABEL_160;
          if ( !LODWORD(v79->max_length) )
            goto LABEL_161;
          isRestriction = this->fields.isRestriction;
          this->fields.dataLostBattleId = v79->m_Items[0];
          if ( isRestriction )
          {
LABEL_11:
            if ( !v3 )
              goto LABEL_160;
            System_Text_StringBuilder__Append_64115684(v3, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
          }
          else
          {
LABEL_40:
            if ( !v3 )
              goto LABEL_160;
          }
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_64115684(
                                                                                               v3,
                                                                                               v17->fields.name,
                                                                                               0);
          this->fields.isRestriction = 1;
          goto LABEL_76;
        case 0x15:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.grandServantRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_160;
          v81 = myServantOrNpcRestrictionEntityList->fields._items;
          v82 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v81 )
            goto LABEL_160;
          v83 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v17,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
          }
          else
          {
            v84 = &v81->obj.klass + v83;
            myServantOrNpcRestrictionEntityList->fields._size = v83 + 1;
            v84[4] = (Il2CppClass *)v17;
            p_totalCostRestrictionEntity = (struct RestrictionEntity_o **)(v84 + 4);
LABEL_46:
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)p_totalCostRestrictionEntity,
              (int32_t)v17,
              v7,
              v8,
              v9,
              v10,
              v11,
              v12);
          }
          goto LABEL_76;
        case 0x18:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.grandServantRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_160;
          v85 = myServantOrNpcRestrictionEntityList->fields._items;
          v86 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v85 )
            goto LABEL_160;
          v87 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v87 >= LODWORD(v85->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v17,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
          }
          else
          {
            v88 = &v85->obj.klass + v87;
            myServantOrNpcRestrictionEntityList->fields._size = v87 + 1;
            v88[4] = (Il2CppClass *)v17;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v88 + 4), (int32_t)v17, v7, v8, v9, v10, v11, v12);
          }
LABEL_63:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_160;
          v94 = myServantOrNpcRestrictionEntityList->fields._items;
          v95 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v94 )
            goto LABEL_160;
          v96 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v96 >= LODWORD(v94->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v17,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
          }
          else
          {
            v97 = &v94->obj.klass + v96;
            myServantOrNpcRestrictionEntityList->fields._size = v96 + 1;
            v97[4] = (Il2CppClass *)v17;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v97 + 4), (int32_t)v17, v7, v8, v9, v10, v11, v12);
          }
          v98 = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v17,
                                                                                               0);
          if ( !v98 )
            goto LABEL_160;
          v99 = v98->fields._items;
          v100 = Method_System_Collections_Generic_List_int__Add__;
          ++v98->fields._version;
          if ( !v99 )
            goto LABEL_160;
          v101 = v98->fields._size;
          v6 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v101 >= LODWORD(v99->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v98,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
          }
          else
          {
            v98->fields._size = v101 + 1;
            v99->m_Items[v101] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrSupport = 1;
          goto LABEL_76;
        default:
          if ( this->fields.isRestriction )
            goto LABEL_11;
          goto LABEL_40;
      }
    }
  }
LABEL_77:
  if ( this->fields.isRestriction )
  {
    if ( !v3 )
      goto LABEL_160;
    v102 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v3->klass->vtable._3_ToString.methodPtr)(
                                       v3,
                                       v3->klass->vtable._3_ToString.method);
    this->fields.confirmRestrictionMessage = v102;
    sub_1C71354(
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
    v109 = LocalizationManager__Get((System_String_o *)StringLiteral_10268/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    v110 = System_String__Concat_64069988(
             v109,
             (System_String_o *)StringLiteral_43/*"\n"*/,
             this->fields.confirmRestrictionMessage,
             0);
    this->fields.restrictionMessage = v110;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.restrictionMessage,
      (int32_t)v110,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_160;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_160;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)myServantOrNpcRestrictionEntityList,
    &entity,
    this->fields.questId,
    (const MethodInfo_3408ECC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_160;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_160;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)myServantOrNpcRestrictionEntityList,
    &v170,
    this->fields.questId,
    this->fields.questPhase,
    0);
  v118 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v118 + 309) & 1) == 0 )
    v118 = sub_1C47444(v117);
  v119 = *(_QWORD *)(*(_QWORD *)(v118 + 192) + 16LL);
  if ( (*(_BYTE *)(v119 + 309) & 1) == 0 )
    v119 = sub_1C47444(v117);
  myServantOrNpcRestrictionEntityList = **(System_Collections_Generic_List_object__o ***)(v119 + 184);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_160;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_160;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         (QuestRestrictionInfoMaster_o *)myServantOrNpcRestrictionEntityList,
         &v169,
         this->fields.questId,
         this->fields.questPhase,
         0) )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
    if ( !v169 )
      goto LABEL_160;
    if ( QuestRestrictionInfoEntity__HasFlag(v169, 0x100000, 0) )
    {
      this->fields.isNoSupportBattle = 1;
      goto LABEL_111;
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
    if ( !v169 )
      goto LABEL_160;
    HasFlag = QuestRestrictionInfoEntity__HasFlag(v169, 0x400000000000000LL, 0);
    this->fields.isNoSupportBattle = HasFlag;
    if ( HasFlag )
      goto LABEL_111;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
    if ( !v169 )
      goto LABEL_160;
    v127 = QuestRestrictionInfoEntity__HasFlag(v169, 0x80000, 0);
    this->fields.isSupportOnlyForceBattle = v127;
    if ( v127 )
    {
LABEL_111:
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
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_160;
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_((DataManager_o *)myServantOrNpcRestrictionEntityList, (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_160;
                    this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                                         (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                                         this->fields.questId,
                                                         17,
                                                         0);
                  }
                  if ( entity )
                    this->fields.isFatigure = QuestEntity__HasFlag_42751420(
                                                (QuestEntity_o *)entity,
                                                0x200000,
                                                this->fields.questPhase,
                                                0);
                  if ( v170 )
                  {
                    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v170, 0);
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v170;
                    if ( !v170 )
                      goto LABEL_160;
                    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v170, 0);
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
LABEL_160:
      sub_1C71608(myServantOrNpcRestrictionEntityList, v6);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
    if ( !v169 )
      goto LABEL_160;
    if ( QuestRestrictionInfoEntity__HasFlag(v169, 0x1000000, 0) )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v169;
      if ( !v169 )
        goto LABEL_160;
      this->fields.eventDeckNum = QuestRestrictionInfoEntity__GetUserEventDeckNo(v169, 0);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1C71458(int___TypeInfo, 1);
    if ( !v169 )
      goto LABEL_160;
    v128 = myServantOrNpcRestrictionEntityList;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetSingleForceSvtId(
                                                                                         v169,
                                                                                         0);
    if ( !v128 )
      goto LABEL_160;
    if ( v128->fields._size )
    {
      LODWORD(v128->fields._syncRoot) = (_DWORD)myServantOrNpcRestrictionEntityList;
      this->fields.svtIdForceBattleList = (struct System_Int32_array *)v128;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.svtIdForceBattleList,
        (int32_t)v128,
        v129,
        v130,
        v131,
        v132,
        v133,
        v134);
      goto LABEL_111;
    }
LABEL_161:
    sub_1C71610(myServantOrNpcRestrictionEntityList);
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_42751420((QuestEntity_o *)entity, 0x100000, this->fields.questPhase, 0) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
      if ( !entity )
        goto LABEL_160;
      HasFlag_42751420 = QuestEntity__HasFlag_42751420(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0);
      this->fields.isNoSupportBattle = HasFlag_42751420;
      if ( !HasFlag_42751420 )
      {
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
        if ( !entity )
          goto LABEL_160;
        v137 = QuestEntity__HasFlag_42751420((QuestEntity_o *)entity, 0x80000, this->fields.questPhase, 0);
        this->fields.isSupportOnlyForceBattle = v137;
        if ( !v137 )
        {
          if ( v170 )
          {
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
            if ( !entity )
              goto LABEL_160;
            if ( QuestEntity__HasFlag_42751420((QuestEntity_o *)entity, 0x1000000, this->fields.questPhase, 0) )
            {
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v170;
              if ( !v170 )
                goto LABEL_160;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v170, 0);
            }
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1C71458(
                                                                                                 int___TypeInfo,
                                                                                                 1);
            if ( !v170 )
              goto LABEL_160;
            v138 = myServantOrNpcRestrictionEntityList;
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__GetSingleForceSvtId(
                                                                                                 v170,
                                                                                                 0);
            if ( !v138 )
              goto LABEL_160;
            if ( !v138->fields._size )
              goto LABEL_161;
            LODWORD(v138->fields._syncRoot) = (_DWORD)myServantOrNpcRestrictionEntityList;
            this->fields.svtIdForceBattleList = (struct System_Int32_array *)v138;
            sub_1C71354(
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
      goto LABEL_160;
    this->fields.isFatigure = QuestEntity__HasFlag_42751420(
                                (QuestEntity_o *)entity,
                                0x200000,
                                this->fields.questPhase,
                                0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_160;
    v145 = QuestEntity__HasFlag_42751420((QuestEntity_o *)entity, 0x400000000000000LL, this->fields.questPhase, 0);
    this->fields.isAllOutBattle = v145;
    if ( v145 )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_160;
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                           (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                           (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_160;
      this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                           (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                           this->fields.questId,
                                           17,
                                           0);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_160;
    this->fields.isNpcMultipleBattle = QuestEntity__HasFlag_42751420(
                                         (QuestEntity_o *)entity,
                                         0x10000000,
                                         this->fields.questPhase,
                                         0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_160;
    this->fields.isNpcOnlyBattle = QuestEntity__HasFlag_42751420(
                                     (QuestEntity_o *)entity,
                                     0x20000000,
                                     this->fields.questPhase,
                                     0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_160;
    this->fields.isNpcEditablePos = QuestEntity__HasFlag_42751420(
                                      (QuestEntity_o *)entity,
                                      0x800000000LL,
                                      this->fields.questPhase,
                                      0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_160;
    this->fields.isNotTransitionSupportList = QuestEntity__HasFlag_42751420(
                                                (QuestEntity_o *)entity,
                                                0x80000000000000LL,
                                                this->fields.questPhase,
                                                0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_160;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_42751420(
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
      goto LABEL_160;
    QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
      v170,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      &this->fields.overwriteLimitCountRangeTypes,
      0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v170;
    if ( !v170 )
      goto LABEL_160;
    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v170, 0);
  }
  else
  {
    this->fields.correctionIconId = -1;
    this->fields.overwriteLimitCountSvtIds = 0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.overwriteLimitCountSvtIds,
      0,
      v120,
      v121,
      v122,
      v123,
      v124,
      v125);
    this->fields.overwriteLimitCounts = 0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.overwriteLimitCounts,
      0,
      v146,
      v147,
      v148,
      v149,
      v150,
      v151);
    this->fields.overwriteLimitCountIconIds = 0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.overwriteLimitCountIconIds,
      0,
      v152,
      v153,
      v154,
      v155,
      v156,
      v157);
    this->fields.overwriteLimitCountRangeTypes = 0;
    sub_1C71354(
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

  if ( (byte_4CC87BD & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_EquipMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC87BD = 1;
  }
  entity = 0;
  outFixedEquipId = 0;
  v16 = 0;
  outFixedEquipLv = 0;
  *genderImageId = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EquipMaster___);
      if ( !Master_object )
        goto LABEL_28;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             Master_object,
             &v16,
             outFixedEquipId,
             (const MethodInfo_3408ECC *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
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
                v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v19, 0);
                outFixedEquipLv = v11;
                goto LABEL_27;
              }
              break;
            default:
              v12 = sub_1C713C4(&System_ArgumentOutOfRangeException_TypeInfo);
              v13 = (System_ArgumentOutOfRangeException_o *)sub_1C715FC(v12);
              System_ArgumentOutOfRangeException___ctor(v13, 0);
              v14 = sub_1C713C4(&Method_QuestRestrictionInfo_TryGetFixedMasterEquipInfo__);
              sub_1C714D8(v13, v14);
          }
        }
LABEL_28:
        sub_1C71608(Master_object, v6);
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

  if ( (byte_4CC87C1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC87C1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.slotType = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.individualityList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_T__o *)sub_1C715FC(System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_37F56CC *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rangeTypeList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  this->fields.summary = (struct System_String_o *)StringLiteral_1/*""*/;
  p_summary = &this->fields.summary;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_summary, v17, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_4CC87C2 & 1) == 0 )
  {
    sub_1C713B0(&QuestRestrictionInfo___c_TypeInfo);
    byte_4CC87C2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(QuestRestrictionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRestrictionInfo___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionInfo___c_o *)v1;
  sub_1C71354(
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


bool QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__110_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C71608(this, 0);
  return e->fields.type != 1 || RestrictionEntity__IsRestrictionTarget(e, 1, 0);
}


System_String_o *QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__110_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C71608(this, 0);
  return e->fields.name;
}


System_String_o *QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__110_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C71608(this, 0);
  return e->fields.name;
}


bool QuestRestrictionInfo___c___GetRestrictionMessageEntityList_b__112_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  unsigned int v3; // w8
  _BOOL4 v4; // w0

  if ( !e )
    sub_1C71608(this, 0);
  v3 = e->fields.type - 1;
  if ( v3 > 0x10 )
    LOBYTE(v4) = 0;
  else
    return (0x1100Bu >> v3) & 1;
  return v4;
}


System_String_o *QuestRestrictionInfo___c___GetRestrictionMessage_b__111_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C71608(this, 0);
  return e->fields.name;
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__102_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C71608(this, 0);
  return e->fields.type == 1 && e->fields.targetVals != 0;
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__102_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C71608(this, 0);
  return RestrictionEntity__IsRestrictionTarget(e, 3, 0) && RestrictionEntity__IsRestrictionTarget(e, 2, 0);
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__102_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  System_Int32_array *targetVals; // x19
  QuestRestrictionInfo___c_c *v5; // x0
  System_Func_int__bool__o *_9__102_4; // x20
  Il2CppObject *v7; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CC87C4 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_int____78639760);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    sub_1C713B0(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__102_4__);
    this = (QuestRestrictionInfo___c_o *)sub_1C713B0(&QuestRestrictionInfo___c_TypeInfo);
    byte_4CC87C4 = 1;
  }
  if ( !e )
    sub_1C71608(this, e);
  if ( e->fields.rangeType == 1 )
  {
    targetVals = e->fields.targetVals;
    v5 = QuestRestrictionInfo___c_TypeInfo;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v5 = QuestRestrictionInfo___c_TypeInfo;
    }
    _9__102_4 = v5->static_fields->__9__102_4;
    if ( !_9__102_4 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = QuestRestrictionInfo___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__102_4 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(_9__102_4, v7, Method_QuestRestrictionInfo___c__IsClassRestriction_b__102_4__, 0);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__102_4 = _9__102_4;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__102_4,
        (int32_t)_9__102_4,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    return !BasicHelper__Any_int__51593044(
              targetVals,
              (System_Func_T__bool__o *)_9__102_4,
              (const MethodInfo_3133F54 *)Method_BasicHelper_Any_int____78639760);
  }
  else
  {
    return 1;
  }
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__102_4(
        QuestRestrictionInfo___c_o *this,
        int32_t i,
        const MethodInfo *method)
{
  if ( (byte_4CC87C5 & 1) == 0 )
  {
    sub_1C713B0(&Individuality_TypeInfo);
    byte_4CC87C5 = 1;
  }
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return !Individuality__IsServantClassIndividuality(i, 0);
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualitySlot_b__100_0(
        QuestRestrictionInfo___c_o *this,
        QuestRestrictionInfo_SlotInfo_o *s,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *individualityList; // x8

  if ( (byte_4CC87C3 & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_1C713B0(&Method_System_Collections_Generic_List_int____get_Count__);
    byte_4CC87C3 = 1;
  }
  if ( !s || (individualityList = s->fields.individualityList) == 0 )
    sub_1C71608(this, s);
  return individualityList->fields._size > 0;
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__99_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C71608(this, 0);
  return e->fields.type == 1;
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__99_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionWholeEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C71608(this, 0);
  return e->fields.type == 1;
}


bool QuestRestrictionInfo___c___Setup_b__85_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.type == 1;
}


bool QuestRestrictionInfo___c___Setup_b__85_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.type == 3;
}


bool QuestRestrictionInfo___c___Setup_b__85_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.type == 2;
}


bool QuestRestrictionInfo___c___Setup_b__85_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.type == 2;
}


void QuestRestrictionInfo___c__DisplayClass102_0___ctor(
        QuestRestrictionInfo___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass102_0___IsClassRestriction_b__3(
        QuestRestrictionInfo___c__DisplayClass102_0_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C71608(this, 0);
  return RestrictionEntity__IsRestriction(e, this->fields.individuality, 0);
}


void QuestRestrictionInfo___c__DisplayClass103_0___ctor(
        QuestRestrictionInfo___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass103_0___IsMySvtOrSupportSlotClassRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass103_0_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C71608(this, 0);
  return entity->fields.type == 24 && RestrictionEntity__GetSpecifiedPosition(entity, 0) == this->fields.initPos;
}


void QuestRestrictionInfo___c__DisplayClass186_0___ctor(
        QuestRestrictionInfo___c__DisplayClass186_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass186_0___IsMyServantOrNpcRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass186_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass187_0___ctor(
        QuestRestrictionInfo___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass187_0___IsSelectableNormalSupport_b__0(
        QuestRestrictionInfo___c__DisplayClass187_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass188_0___ctor(
        QuestRestrictionInfo___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass188_0___IsNotIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass188_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass189_0___ctor(
        QuestRestrictionInfo___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass189_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass189_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass190_0___ctor(
        QuestRestrictionInfo___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass190_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass190_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass191_0___ctor(
        QuestRestrictionInfo___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass191_0___GetRestrictedName_b__0(
        QuestRestrictionInfo___c__DisplayClass191_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_o *questRestrictionEntity; // x8

  if ( !x || (questRestrictionEntity = this->fields.questRestrictionEntity) == 0 )
    sub_1C71608(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass194_0___ctor(
        QuestRestrictionInfo___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass194_0___GetMyServantOrNpcSvtIdList_b__0(
        QuestRestrictionInfo___c__DisplayClass194_0_o *this,
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
    sub_1C71610(this);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1C71608(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass195_0___ctor(
        QuestRestrictionInfo___c__DisplayClass195_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass195_0___GetMyServantOrSupportTargetPos_b__0(
        QuestRestrictionInfo___c__DisplayClass195_0_o *this,
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
    sub_1C71610(this);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1C71608(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass208_0___ctor(
        QuestRestrictionInfo___c__DisplayClass208_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass208_0___GetMyServantOrNpcSvtIdUnionNpcList_b__0(
        QuestRestrictionInfo___c__DisplayClass208_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.index;
}


void QuestRestrictionInfo___c__DisplayClass218_0___ctor(
        QuestRestrictionInfo___c__DisplayClass218_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass218_0___GetGrandServantRestrictionEntity_b__0(
        QuestRestrictionInfo___c__DisplayClass218_0_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass218_0_o *v4; // x19
  System_Int32_array *targetVals2; // x20
  System_Func_int__bool__o *_9__1; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v4 = this;
  if ( (byte_4CC87C6 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_int____78639760);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    this = (QuestRestrictionInfo___c__DisplayClass218_0_o *)sub_1C713B0(&Method_QuestRestrictionInfo___c__DisplayClass218_0__GetGrandServantRestrictionEntity_b__1__);
    byte_4CC87C6 = 1;
  }
  if ( !entity )
    sub_1C71608(this, entity);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetVals2, 0)
    && v4->fields.initPos == 1 )
  {
    return 1;
  }
  targetVals2 = entity->fields.targetVals2;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_QuestRestrictionInfo___c__DisplayClass218_0__GetGrandServantRestrictionEntity_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_int__51593044(
           targetVals2,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_3133F54 *)Method_BasicHelper_Any_int____78639760);
}


bool QuestRestrictionInfo___c__DisplayClass218_0___GetGrandServantRestrictionEntity_b__1(
        QuestRestrictionInfo___c__DisplayClass218_0_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  return this->fields.initPos == pos;
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
    sub_1C71608(this, x);
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
    sub_1C71608(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}