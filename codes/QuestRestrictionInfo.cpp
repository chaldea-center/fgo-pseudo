void QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.questId = questId;
}


void QuestRestrictionInfo___ctor_43165168(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct RestrictionEntity_array *RestrictionList_42310352; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x4

  if ( (byte_4C2860B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2860B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v10);
  }
  RestrictionList_42310352 = QuestRestrictionMaster__getRestrictionList_42310352(
                               (QuestRestrictionMaster_o *)Instance,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               0);
  this->fields.restrictionEntityList = RestrictionList_42310352;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.restrictionEntityList, (int32_t)RestrictionList_42310352, v12, v13);
  QuestRestrictionInfo__Setup(this, v14, questId, questPhase, v15);
}


void QuestRestrictionInfo___ctor_43174808(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        RestrictionEntity_o *overwriteRestiction,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x23
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  const MethodInfo *v24; // x4
  __int64 v25; // x0

  if ( (byte_4C2860C & 1) == 0 )
  {
    sub_1C2D490(&QuestRestrictionEntity___TypeInfo);
    sub_1C2D490(&RestrictionEntity___TypeInfo);
    byte_4C2860C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v11 = (struct QuestRestrictionEntity_array *)sub_1C2D538(QuestRestrictionEntity___TypeInfo, 0);
  this->fields.questRestrictionEntityList = v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionEntityList, (int32_t)v11, v12, v13);
  if ( overwriteRestiction )
  {
    v14 = sub_1C2D538(RestrictionEntity___TypeInfo, 1);
    if ( !v14 )
      sub_1C2D6EC(0, v15);
    v16 = v14;
    v17 = sub_1C2D5CC(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
    if ( !v17 )
    {
      v25 = sub_1C2D710(0);
      sub_1C2D5B8(v25, 0);
    }
    if ( !*(_DWORD *)(v16 + 24) )
      sub_1C2D6F4(v17, v18, v19);
    *(_QWORD *)(v16 + 32) = overwriteRestiction;
    sub_1C2D434((CGThumbnailListItem_o *)(v16 + 32), (int32_t)overwriteRestiction, v19, v20);
  }
  else
  {
    v16 = sub_1C2D538(RestrictionEntity___TypeInfo, 0);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v16;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.restrictionEntityList, v16, v21, v22);
  QuestRestrictionInfo__Setup(this, v23, questId, questPhase, v24);
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

  if ( (byte_4C2862D & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool____get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool____get_Item__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2862D = 1;
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
             (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___) )
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
            (const MethodInfo_30F9000 *)Method_System_Linq_Enumerable_Intersect_int___);
    Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                  v28,
                                  (const MethodInfo_30D9F98 *)Method_System_Linq_Enumerable_Any_int___);
    if ( !this->fields.myServantPositionsList )
      goto LABEL_15;
    v29 = (char)Instance;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this->fields.myServantPositionsList,
                                  v23,
                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
              (const MethodInfo_30F9000 *)Method_System_Linq_Enumerable_Intersect_int___);
      if ( System_Linq_Enumerable__Any_int_(v31, (const MethodInfo_30D9F98 *)Method_System_Linq_Enumerable_Any_int___) )
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
                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
          (const MethodInfo_30F9000 *)Method_System_Linq_Enumerable_Intersect_int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                v35,
                                (const MethodInfo_30D9F98 *)Method_System_Linq_Enumerable_Any_int___);
  positionsList = (System_Collections_Generic_List_object__o *)this->fields.positionsList;
  if ( !positionsList
    || (v37 = (char)Instance,
        (Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                       positionsList,
                                       v33,
                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_bool____get_Item__)) == 0) )
  {
LABEL_15:
    sub_1C2D6EC(Instance, v21);
  }
  if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
LABEL_67:
    sub_1C2D6F4(Instance, v21, v22);
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1C2D6F4(this, *(_QWORD *)&svtId, method);
  return overwriteLimitCounts->m_Items[v6];
}


int32_t QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43203860(
        QuestRestrictionInfo_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  const MethodInfo *v8; // x2
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x8
  QuestRestrictionInfo_o *v11; // x20
  __int64 v12; // x25
  int32_t v13; // w21
  __int64 v14; // x22
  __int64 v15; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = this;
  if ( (byte_4C28636 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C28636 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_20;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v17, 0);
  this = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(v4, v7, v8);
  if ( !this )
LABEL_20:
    sub_1C2D6EC(this, userServantEntity);
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  v11 = this;
  if ( !dialogMessageInfoDictionary )
    return -1;
  if ( (int)dialogMessageInfoDictionary >= 1 )
  {
    v12 = 0;
    while ( (unsigned int)v12 < (unsigned int)dialogMessageInfoDictionary )
    {
      v13 = *(&v11->fields.eventId + v12);
      v15 = *(_QWORD *)&userServantEntity->fields.dispLimitCount.fields.currentCryptoKey;
      v14 = *(_QWORD *)&userServantEntity->fields.dispLimitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v18.fields.currentCryptoKey = v15;
      *(_QWORD *)&v18.fields.fakeValue = v14;
      this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v18, 0);
      if ( (_DWORD)this == v13 )
        return v13;
      dialogMessageInfoDictionary = v11->fields.dialogMessageInfoDictionary;
      if ( (int)++v12 >= (int)dialogMessageInfoDictionary )
        goto LABEL_15;
    }
LABEL_19:
    sub_1C2D6F4(this, userServantEntity, v9);
  }
LABEL_15:
  if ( !(_DWORD)dialogMessageInfoDictionary )
    goto LABEL_19;
  return v11->fields.eventId;
}


System_Int32_array *QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Int32_array *overwriteLimitCountSvtIds; // x8
  unsigned __int64 v10; // x22
  __int64 v11; // x23
  struct System_Int32_array *overwriteLimitCounts; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4C28635 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C28635 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( overwriteLimitCountSvtIds && this->fields.overwriteLimitCounts && (int)overwriteLimitCountSvtIds->max_length >= 1 )
  {
    v10 = 0;
    v11 = (unsigned int)overwriteLimitCountSvtIds->max_length - 1LL;
    do
    {
      if ( v10 >= LODWORD(overwriteLimitCountSvtIds->max_length) )
LABEL_21:
        sub_1C2D6F4(v6, v7, v8);
      if ( overwriteLimitCountSvtIds->m_Items[v10] == svtId )
      {
        overwriteLimitCounts = this->fields.overwriteLimitCounts;
        if ( !overwriteLimitCounts )
          break;
        if ( v10 >= LODWORD(overwriteLimitCounts->max_length) )
          goto LABEL_21;
        if ( !v5 )
          break;
        v7 = (unsigned int)overwriteLimitCounts->m_Items[v10];
        items = v5->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            v7,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size] = v7;
        }
      }
      if ( v11 == v10 )
        goto LABEL_19;
      overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
      ++v10;
    }
    while ( overwriteLimitCountSvtIds );
LABEL_18:
    sub_1C2D6EC(v6, v7);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Func_object__bool__o *_9__109_0; // x20
  Il2CppObject *v29; // x21
  struct QuestRestrictionInfo___c_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  QuestRestrictionInfo___c_c *v34; // x8
  System_Func_TSource__TResult__o *_9__109_2; // x20
  Il2CppObject *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct QuestRestrictionInfo___c_StaticFields *v39; // x0
  CGThumbnailListItem_o *p__9__109_2; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v41; // x8
  QuestRestrictionInfo_SlotInfo_o *v42; // x8
  Il2CppObject *v43; // x21
  struct QuestRestrictionInfo___c_StaticFields *v44; // x0
  System_Collections_Generic_IEnumerable_string__o *v45; // x0

  v8 = this;
  if ( (byte_4C2861F & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C2D490(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C2D490(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__109_0__);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__109_1__);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__109_2__);
    sub_1C2D490(&QuestRestrictionInfo___c_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2861F = 1;
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
      _9__109_2 = (System_Func_TSource__TResult__o *)static_fields->__9__109_2;
      if ( _9__109_2 )
      {
LABEL_61:
        v45 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                                    _9__109_2,
                                                                    (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
        return System_String__Join_63500440((System_String_o *)StringLiteral_43/*"\n"*/, v45, 0);
      }
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = QuestRestrictionInfo___c_TypeInfo;
      }
      v43 = (Il2CppObject *)v26->static_fields->__9;
      _9__109_2 = (System_Func_TSource__TResult__o *)sub_1C2D6DC(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__109_2,
        v43,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__109_2__,
        0);
      v44 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v44->__9__109_2 = (struct System_Func_RestrictionEntity__string__o *)_9__109_2;
      p__9__109_2 = (CGThumbnailListItem_o *)&v44->__9__109_2;
    }
    else
    {
      _9__109_0 = (System_Func_object__bool__o *)static_fields->__9__109_0;
      if ( !_9__109_0 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = QuestRestrictionInfo___c_TypeInfo;
        }
        v29 = (Il2CppObject *)v26->static_fields->__9;
        _9__109_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__109_0,
          v29,
          Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__109_0__,
          0);
        v30 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v30->__9__109_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__109_0;
        sub_1C2D434((CGThumbnailListItem_o *)&v30->__9__109_0, (int32_t)_9__109_0, v31, v32);
      }
      v33 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
              (System_Func_TSource__bool__o *)_9__109_0,
              (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v34 = QuestRestrictionInfo___c_TypeInfo;
      RestrictionMessageEntityList = (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)v33;
      if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v34 = QuestRestrictionInfo___c_TypeInfo;
      }
      _9__109_2 = (System_Func_TSource__TResult__o *)v34->static_fields->__9__109_1;
      if ( _9__109_2 )
        goto LABEL_61;
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = QuestRestrictionInfo___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v34->static_fields->__9;
      _9__109_2 = (System_Func_TSource__TResult__o *)sub_1C2D6DC(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__109_2,
        v36,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__109_1__,
        0);
      v39 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v39->__9__109_1 = (struct System_Func_RestrictionEntity__string__o *)_9__109_2;
      p__9__109_2 = (CGThumbnailListItem_o *)&v39->__9__109_1;
    }
    sub_1C2D434(p__9__109_2, (int32_t)_9__109_2, v37, v38);
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
      v41 = v8->fields.slotInfos;
      if ( v41 )
      {
        if ( (unsigned int)v10 >= LODWORD(v41->max_length) )
          goto LABEL_63;
        v42 = v41->m_Items[v10];
        if ( v42 )
          return v42->fields.summary;
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
    sub_1C2D6EC(this, *(_QWORD *)&initPos);
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
      sub_1C2D6F4(this, *(_QWORD *)&initPos, *(_QWORD *)&pos);
    }
LABEL_36:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v14 >= max_length )
      return v8->fields.confirmRestrictionMessage;
  }
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1C2D6F4(this, *(_QWORD *)&svtId, isFollower);
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
  __int64 v6; // x2
  struct RestrictionMessageEntity_array *restrictionMessageEntities; // x23
  int v8; // w8
  unsigned int v9; // w24
  RestrictionMessageEntity_o *v10; // x25
  int32_t frequencyType; // w8
  Il2CppObject *v12; // x22
  UserQuestEntity_o *v13; // x22
  struct System_Int32_array *v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  int max_length; // w9
  int v19; // w24
  int32_t v20; // w21
  int32_t *v21; // x25
  int32_t v22; // w8
  Il2CppObject *MasterData_object; // x23
  UserQuestEntity_o *v24; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10

  if ( (byte_4C28632 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C28632 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !this->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
      goto LABEL_67;
    max_length = questRestrictionEntityList->max_length;
    v19 = max_length - 1;
    if ( max_length < 1 )
      goto LABEL_65;
    v20 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v20 >= LODWORD(questRestrictionEntityList->max_length) )
LABEL_68:
        sub_1C2D6F4(Instance, id, v6);
      v21 = (int32_t *)questRestrictionEntityList->m_Items[v20];
      if ( !v21 )
        goto LABEL_67;
      v22 = v21[7];
      if ( v22 == 1 )
        break;
      if ( v22 == 2 )
      {
        Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !Instance )
          goto LABEL_67;
        Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                                   Instance,
                                                   v21[4],
                                                   v21[5],
                                                   v21[6],
                                                   1,
                                                   0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_57;
      }
      else if ( v22 == 3 )
      {
        goto LABEL_57;
      }
LABEL_62:
      if ( v19 == v20 )
        goto LABEL_65;
      questRestrictionEntityList = this->fields.questRestrictionEntityList;
      ++v20;
      if ( !questRestrictionEntityList )
        goto LABEL_67;
    }
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
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
                                               v21[4],
                                               0);
    if ( Instance )
    {
      v24 = (UserQuestEntity_o *)Instance;
      Instance = (PartyOrganizationUtility_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0);
      if ( (_DWORD)Instance )
        goto LABEL_62;
      Instance = (PartyOrganizationUtility_o *)UserQuestEntity__HasStatus(v24, 16, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_62;
    }
LABEL_57:
    if ( !v3 )
      goto LABEL_67;
    items = v3->fields._items;
    v26 = Method_System_Collections_Generic_List_int__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_67;
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v3,
        v20,
        *(const MethodInfo_376CB60 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    }
    else
    {
      v3->fields._size = size + 1;
      items->m_Items[size] = v20;
    }
    goto LABEL_62;
  }
  restrictionMessageEntities = this->fields.restrictionMessageEntities;
  if ( !restrictionMessageEntities )
    goto LABEL_67;
  v8 = restrictionMessageEntities->max_length;
  if ( v8 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v8 )
        goto LABEL_68;
      v10 = restrictionMessageEntities->m_Items[v9];
      if ( !v10 )
        goto LABEL_67;
      frequencyType = v10->fields.frequencyType;
      if ( frequencyType != 1 )
        break;
      Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      v12 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      Instance = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
      }
      if ( !v12 )
        goto LABEL_67;
      Instance = (PartyOrganizationUtility_o *)UserQuestMaster__getEntityFromId(
                                                 (UserQuestMaster_o *)v12,
                                                 (int64_t)Instance[1].klass->_1.element_class,
                                                 this->fields.questId,
                                                 0);
      if ( !Instance )
        goto LABEL_27;
      v13 = (UserQuestEntity_o *)Instance;
      Instance = (PartyOrganizationUtility_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0);
      if ( !(_DWORD)Instance )
      {
        Instance = (PartyOrganizationUtility_o *)UserQuestEntity__HasStatus(v13, 16, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_27;
      }
LABEL_32:
      v8 = restrictionMessageEntities->max_length;
      if ( (int)++v9 >= v8 )
        goto LABEL_65;
    }
    if ( frequencyType == 2 )
    {
      Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                                 Instance,
                                                 this->fields.questId,
                                                 this->fields.questPhase,
                                                 v10->fields.id,
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
    id = (unsigned int)v10->fields.id;
    v14 = v3->fields._items;
    v15 = Method_System_Collections_Generic_List_int__Add__;
    ++v3->fields._version;
    if ( !v14 )
      goto LABEL_67;
    v16 = v3->fields._size;
    if ( (unsigned int)v16 >= LODWORD(v14->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v3,
        id,
        *(const MethodInfo_376CB60 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v3->fields._size = v16 + 1;
      v14->m_Items[v16] = id;
    }
    goto LABEL_32;
  }
LABEL_65:
  if ( !v3 )
LABEL_67:
    sub_1C2D6EC(Instance, id);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4C28633 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28633 = 1;
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
    sub_1C2D6EC(this, *(_QWORD *)&n);
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
        p_dialogMessage = (System_String_o **)&v18->_1.byval_arg;
        return *p_dialogMessage;
      }
      goto LABEL_31;
    }
LABEL_32:
    sub_1C2D6F4(this, *(_QWORD *)&n, *(_QWORD *)&restrictionId);
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

  if ( (byte_4C28649 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
    byte_4C28649 = 1;
  }
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary
    || !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
          messageId,
          (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
  {
    return 0;
  }
  v7 = this->fields.dialogMessageInfoDictionary;
  if ( !v7 )
    sub_1C2D6EC(0, v6);
  return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_int__object__o *)v7,
                                                       messageId,
                                                       (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
}


System_String_o *QuestRestrictionInfo__GetDialogMessageMySvtPos(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRestrictionInfo_o *v3; // x19
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_monitor; // x20
  unsigned int v7; // w21
  RestrictionWholeEntity_o *v8; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4C2864C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2864C = 1;
  }
  entity = 0;
  restrictionWholeEntities = v3->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_19;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C2D6F4(this, method, v2);
      v8 = restrictionWholeEntities->m_Items[v7];
      if ( !v8 )
        goto LABEL_19;
      if ( v8->fields.type == 5 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v8->fields.restrictionMessageId,
                                           (const MethodInfo_3387DE4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v7 >= max_length )
        return *p_monitor;
    }
    if ( entity )
    {
      p_monitor = (System_String_o **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_19:
    sub_1C2D6EC(this, method);
  }
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_monitor;
}


System_String_o *QuestRestrictionInfo__GetDialogMessageSupportSvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRestrictionInfo_o *v3; // x19
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_monitor; // x20
  unsigned int v7; // w21
  RestrictionWholeEntity_o *v8; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4C2864E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2864E = 1;
  }
  entity = 0;
  restrictionWholeEntities = v3->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_19;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C2D6F4(this, method, v2);
      v8 = restrictionWholeEntities->m_Items[v7];
      if ( !v8 )
        goto LABEL_19;
      if ( v8->fields.type == 6 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v8->fields.restrictionMessageId,
                                           (const MethodInfo_3387DE4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v7 >= max_length )
        return *p_monitor;
    }
    if ( entity )
    {
      p_monitor = (System_String_o **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_19:
    sub_1C2D6EC(this, method);
  }
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_monitor;
}


System_String_o *QuestRestrictionInfo__GetDialogMessageSvtPos(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRestrictionInfo_o *v3; // x19
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_monitor; // x20
  unsigned int v7; // w21
  RestrictionWholeEntity_o *v8; // x25
  int32_t type; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4C2864B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2864B = 1;
  }
  entity = 0;
  restrictionWholeEntities = v3->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_20;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C2D6F4(this, method, v2);
      v8 = restrictionWholeEntities->m_Items[v7];
      if ( !v8 )
        goto LABEL_20;
      type = v8->fields.type;
      if ( type == 8 || type == 4 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v8->fields.restrictionMessageId,
                                           (const MethodInfo_3387DE4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v7 >= max_length )
        return *p_monitor;
    }
    if ( entity )
    {
      p_monitor = (System_String_o **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_20:
    sub_1C2D6EC(this, method);
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
  System_String_o **p_this_arg; // x20
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
  if ( (byte_4C28634 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28634 = 1;
  }
  if ( v6->fields.restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.restrictionSlotDictionary;
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         n,
                                         (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( this )
      {
        dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
        v8 = this;
        if ( dialogMessageInfoDictionary < 1 )
        {
          p_this_arg = (System_String_o **)&StringLiteral_1/*""*/;
        }
        else
        {
          p_this_arg = (System_String_o **)&StringLiteral_1/*""*/;
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
              return *p_this_arg;
          }
          p_this_arg = (System_String_o **)(v11 + 32);
        }
        return *p_this_arg;
      }
    }
LABEL_32:
    sub_1C2D6EC(this, *(_QWORD *)&n);
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
        p_this_arg = (System_String_o **)&v18->_1.this_arg;
        return *p_this_arg;
      }
      goto LABEL_32;
    }
LABEL_33:
    sub_1C2D6F4(this, *(_QWORD *)&n, *(_QWORD *)&restrictionId);
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
  p_this_arg = &v17->fields.title;
  return *p_this_arg;
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1C2D6F4(this, *(_QWORD *)&n, *(_QWORD *)&restrictionId);
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
      sub_1C2D6EC(this, n);
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
  const MethodInfo *v3; // x3
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  QuestRestrictionInfo_o *v5; // x20
  struct RestrictionBaseEntity_o *v7; // x8
  System_String_o *noticeMessage; // x1
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  int max_length; // w21
  unsigned int v11; // w22
  QuestRestrictionEntity_o *v12; // x23

  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  v5 = this;
  if ( !restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
LABEL_13:
      sub_1C2D6EC(this, message);
    max_length = questRestrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= LODWORD(questRestrictionEntityList->max_length) )
          sub_1C2D6F4(this, message, method);
        v12 = questRestrictionEntityList->m_Items[v11];
        if ( !v12 )
          goto LABEL_13;
        this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v12->fields.noticeMessage, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        if ( max_length == ++v11 )
          goto LABEL_14;
        questRestrictionEntityList = v5->fields.questRestrictionEntityList;
        if ( !questRestrictionEntityList )
          goto LABEL_13;
      }
      noticeMessage = v12->fields.noticeMessage;
      goto LABEL_16;
    }
LABEL_14:
    *message = 0;
    sub_1C2D434((CGThumbnailListItem_o *)message, 0, (int32_t)method, v3);
    return 0;
  }
  this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(restrictionBaseEntity->fields.subMessage, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_14;
  v7 = v5->fields.restrictionBaseEntity;
  if ( !v7 )
    goto LABEL_13;
  noticeMessage = v7->fields.subMessage;
LABEL_16:
  *message = noticeMessage;
  sub_1C2D434((CGThumbnailListItem_o *)message, (int32_t)noticeMessage, (int32_t)method, v3);
  return 1;
}


System_String_o *QuestRestrictionInfo__GetFixNpcMessage(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  if ( (byte_4C2863E & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10291/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/);
    byte_4C2863E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10291/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0);
}


System_String_o *QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2863D & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10292/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/);
    byte_4C2863D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10292/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, 0);
}


int32_t QuestRestrictionInfo__GetFixedMyServantPositionCount(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C28654 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4C28654 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&off_18) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C2D6EC(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4C28651 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C28651 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_1C2D6EC(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v10.fields._current,
      (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_1C2D6EC(fixedMyServantIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4C2862F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2862F = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !fixedMyServantSingleIndividualities->max_length )
      return 0;
    this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       svtId,
                                       dispLimitCount,
                                       0);
        this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( this )
          {
            this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               svtId,
                                               (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v13 = (ServantEntity_o *)this;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
    sub_1C2D6EC(this, *(_QWORD *)&svtId);
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
    sub_1C2D6F4(this, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
  return targetVals->m_Items[num] != svtId;
}


System_String_o *QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C28630 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10290/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/);
    byte_4C28630 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10290/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, 0);
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

  if ( (byte_4C28656 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4C28656 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&off_18) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C2D6EC(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4C28653 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C28653 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_1C2D6EC(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v10.fields._current,
      (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_1C2D6EC(fixedIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4C2862C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4C2862C = 1;
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
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v4 = 0;
    for ( i = v14; ; v4 += LODWORD(i.fields._current[1].monitor) )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v5 )
        break;
      if ( !i.fields._current )
        sub_1C2D6EC(v5, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
    sub_1C2D6EC(fixedMyServantIndividualitiesList, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v14; ; v10 += LODWORD(i.fields._current[1].monitor) )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v11 )
      break;
    if ( !i.fields._current )
      sub_1C2D6EC(v11, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v10;
}


System_String_o *QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2862E & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10289/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/);
    byte_4C2862E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10289/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, 0);
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

  if ( (byte_4C2862B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C2862B = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( this->fields.restrictionBaseEntity )
  {
    v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v3,
      (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
    if ( this->fields.isFixedMyServantPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &i,
               (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v6 )
          break;
        if ( !v3 )
          sub_1C2D6EC(v6, v7);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isNeedStarting )
    {
      fixedMyServantIndividualitiesList = this->fields.needStartingIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &i,
               (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v8 )
          break;
        if ( !v3 )
          sub_1C2D6EC(v8, v9);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isFixedPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v10 )
          break;
        if ( !v3 )
          sub_1C2D6EC(v10, v11);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( v3 )
    {
      if ( v3->fields._size > 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v3,
                 (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
      return 0;
    }
LABEL_38:
    sub_1C2D6EC(fixedMyServantIndividualitiesList, v5);
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
  if ( (byte_4C2862A & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10294/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/);
    byte_4C2862A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10294/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, 0);
}


RestrictionEntity_o *QuestRestrictionInfo__GetGrandServantRestrictionEntity(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass217_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_RestrictionEntity__o *grandServantRestrictionEntityList; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4C2865A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
    sub_1C2D490(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__DisplayClass217_0__GetGrandServantRestrictionEntity_b__0__);
    sub_1C2D490(&QuestRestrictionInfo___c__DisplayClass217_0_TypeInfo);
    byte_4C2865A = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass217_0_o *)sub_1C2D6DC(QuestRestrictionInfo___c__DisplayClass217_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass217_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  v5->fields.initPos = initPos;
  grandServantRestrictionEntityList = this->fields.grandServantRestrictionEntityList;
  v9 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass217_0__GetGrandServantRestrictionEntity_b__0__,
    0);
  return (RestrictionEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51348472(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)grandServantRestrictionEntityList,
                                  (System_Func_TSource__bool__o *)v9,
                                  (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_RestrictionEntity___);
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
  if ( (byte_4C28616 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28616 = 1;
  }
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_15:
    sub_1C2D6EC(this, *(_QWORD *)&restrictionWholeType);
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
        sub_1C2D6F4(this, *(_QWORD *)&restrictionWholeType, method);
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
System_String_o *QuestRestrictionInfo__GetMessage_43184444(
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
  if ( (byte_4C28617 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28617 = 1;
  }
  restrictionEntityList = v4->fields.restrictionEntityList;
  if ( !restrictionEntityList )
LABEL_15:
    sub_1C2D6EC(this, *(_QWORD *)&restrictionType);
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
        sub_1C2D6F4(this, *(_QWORD *)&restrictionType, method);
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
  __int64 v25; // x2
  System_String_o *v26; // x27
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x22
  int max_length; // w8
  unsigned int v47; // w23
  RestrictionWholeEntity_o *v48; // x29
  const MethodInfo *v49; // x3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  int v54; // w8
  void *v55; // x21
  unsigned int v56; // w22
  __int64 v57; // x26
  const MethodInfo *v58; // x3
  System_String_o *v59; // x0
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0

  if ( (byte_4C28614 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10262/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C2D490(&StringLiteral_11097/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/);
    sub_1C2D490(&StringLiteral_11098/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1C2D490(&StringLiteral_11094/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_1C2D490(&StringLiteral_6448/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_4C28614 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_98;
  if ( !isSlotOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6448/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11098/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
    v26 = (System_String_o *)IsNullOrEmpty;
    if ( !this->fields.isUniqueServant )
      goto LABEL_20;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11097/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0);
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
        IsNullOrEmpty = System_String__Concat_63457864(summary, v26, 0);
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
    v30 = Method_System_Collections_Generic_List_string__Add__;
    ++v21->fields._version;
    if ( !items )
      goto LABEL_100;
    size = v21->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)summary,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v32 = &items->obj.klass + size;
      v21->fields._size = size + 1;
      v32[4] = (Il2CppClass *)summary;
      sub_1C2D434((CGThumbnailListItem_o *)(v32 + 4), (int32_t)summary, v27, v28);
    }
LABEL_20:
    if ( !this->fields.isFatigure )
      goto LABEL_33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11094/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0);
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
        IsNullOrEmpty = System_String__Concat_63457864(summary, v26, 0);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v21 )
          goto LABEL_100;
        goto LABEL_29;
      }
    }
    if ( !v21 )
      goto LABEL_100;
LABEL_29:
    v35 = v21->fields._items;
    v36 = Method_System_Collections_Generic_List_string__Add__;
    ++v21->fields._version;
    if ( !v35 )
      goto LABEL_100;
    v37 = v21->fields._size;
    if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)summary,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &v35->obj.klass + v37;
      v21->fields._size = v37 + 1;
      v38[4] = (Il2CppClass *)summary;
      sub_1C2D434((CGThumbnailListItem_o *)(v38 + 4), (int32_t)summary, v33, v34);
    }
LABEL_33:
    if ( !this->fields.isNotSingleSupportOnly )
      goto LABEL_46;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10262/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
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
        IsNullOrEmpty = System_String__Concat_63457864(summary, v26, 0);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v21 )
          goto LABEL_100;
        goto LABEL_42;
      }
    }
    if ( !v21 )
      goto LABEL_100;
LABEL_42:
    v41 = v21->fields._items;
    v42 = Method_System_Collections_Generic_List_string__Add__;
    ++v21->fields._version;
    if ( !v41 )
      goto LABEL_100;
    v43 = v21->fields._size;
    if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)summary,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &v41->obj.klass + v43;
      v21->fields._size = v43 + 1;
      v44[4] = (Il2CppClass *)summary;
      sub_1C2D434((CGThumbnailListItem_o *)(v44 + 4), (int32_t)summary, v39, v40);
    }
LABEL_46:
    restrictionWholeEntities = this->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_100;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v47 = 0;
      while ( v47 < max_length )
      {
        v48 = restrictionWholeEntities->m_Items[v47];
        if ( !v48 )
          goto LABEL_100;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(v48->fields.summary, 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            summary = v48->fields.summary;
          }
          else
          {
            IsNullOrEmpty = System_String__Format(v24, (Il2CppObject *)v48->fields.summary, 0);
            summary = (System_String_o *)IsNullOrEmpty;
          }
          switch ( v48->fields.type )
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
                IsNullOrEmpty = System_String__Concat_63457864(summary, v26, 0);
                summary = (System_String_o *)IsNullOrEmpty;
              }
              break;
            default:
              break;
          }
          if ( !v21 )
            goto LABEL_100;
          v50 = v21->fields._items;
          v51 = Method_System_Collections_Generic_List_string__Add__;
          ++v21->fields._version;
          if ( !v50 )
            goto LABEL_100;
          v52 = v21->fields._size;
          if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              (Il2CppObject *)summary,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
          }
          else
          {
            v53 = &v50->obj.klass + v52;
            v21->fields._size = v52 + 1;
            v53[4] = (Il2CppClass *)summary;
            sub_1C2D434((CGThumbnailListItem_o *)(v53 + 4), (int32_t)summary, v25, v49);
          }
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v47 >= max_length )
          goto LABEL_79;
      }
LABEL_101:
      sub_1C2D6F4(IsNullOrEmpty, summary, v25);
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
                            (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0 )
    {
LABEL_100:
      sub_1C2D6EC(IsNullOrEmpty, summary);
    }
    v54 = *((_DWORD *)IsNullOrEmpty + 6);
    v55 = IsNullOrEmpty;
    if ( v54 >= 1 )
    {
      v56 = 0;
      while ( v56 < v54 )
      {
        v57 = *((_QWORD *)v55 + (int)v56 + 4);
        if ( !v57 )
          goto LABEL_100;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(*(System_String_o **)(v57 + 24), 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            summary = *(System_String_o **)(v57 + 24);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v59 = LocalizationManager__Get((System_String_o *)StringLiteral_6448/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
            IsNullOrEmpty = System_String__Format(v59, *(Il2CppObject **)(v57 + 24), 0);
            summary = (System_String_o *)IsNullOrEmpty;
          }
          if ( !v21 )
            goto LABEL_100;
          v60 = v21->fields._items;
          v61 = Method_System_Collections_Generic_List_string__Add__;
          ++v21->fields._version;
          if ( !v60 )
            goto LABEL_100;
          v62 = v21->fields._size;
          if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              (Il2CppObject *)summary,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v63 = &v60->obj.klass + v62;
            v21->fields._size = v62 + 1;
            v63[4] = (Il2CppClass *)summary;
            sub_1C2D434((CGThumbnailListItem_o *)(v63 + 4), (int32_t)summary, v25, v58);
          }
        }
        v54 = *((_DWORD *)v55 + 6);
        if ( (int)++v56 >= v54 )
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
                                  (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *QuestRestrictionInfo__GetMessages_43183176(
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
  __int64 v23; // x2
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  int max_length; // w8
  unsigned int v37; // w19
  RestrictionEntity_o *v38; // x27
  const MethodInfo *v39; // x3
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0

  if ( (byte_4C28615 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10262/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1C2D490(&StringLiteral_11098/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1C2D490(&StringLiteral_11094/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_1C2D490(&StringLiteral_6448/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_4C28615 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6448/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11098/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isSlotOnly || !this->fields.isFatigure )
    goto LABEL_19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11094/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0);
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
  IsNullOrEmpty = System_String__Concat_63457864(name, v19, 0);
  name = IsNullOrEmpty;
  if ( !v20 )
    goto LABEL_64;
LABEL_15:
  items = v20->fields._items;
  v27 = Method_System_Collections_Generic_List_string__Add__;
  ++v20->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v20->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)name,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v29[4] = (Il2CppClass *)name;
    sub_1C2D434((CGThumbnailListItem_o *)(v29 + 4), (int32_t)name, v24, v25);
  }
LABEL_19:
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10262/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0);
    name = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = System_String__Format(v18, (Il2CppObject *)IsNullOrEmpty, 0);
      name = IsNullOrEmpty;
    }
    if ( singleSupport )
    {
      IsNullOrEmpty = System_String__Concat_63457864(name, v19, 0);
      name = IsNullOrEmpty;
    }
    if ( !v20 )
      goto LABEL_64;
    v32 = v20->fields._items;
    v33 = Method_System_Collections_Generic_List_string__Add__;
    ++v20->fields._version;
    if ( !v32 )
      goto LABEL_64;
    v34 = v20->fields._size;
    if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)name,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &v32->obj.klass + v34;
      v20->fields._size = v34 + 1;
      v35[4] = (Il2CppClass *)name;
      sub_1C2D434((CGThumbnailListItem_o *)(v35 + 4), (int32_t)name, v30, v31);
    }
  }
  if ( !entities )
    goto LABEL_64;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      if ( v37 >= max_length )
        sub_1C2D6F4(IsNullOrEmpty, name, v23);
      v38 = entities->m_Items[v37];
      if ( !v38 )
        break;
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v38->fields.name, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( isNoneTitle )
        {
          name = v38->fields.name;
        }
        else
        {
          IsNullOrEmpty = RestrictionEntity__getTitle(v38, 0);
          name = IsNullOrEmpty;
        }
        switch ( v38->fields.type )
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
              IsNullOrEmpty = System_String__Concat_63457864(name, v19, 0);
              name = IsNullOrEmpty;
            }
            break;
          default:
            break;
        }
        if ( !v20 )
          break;
        v40 = v20->fields._items;
        v41 = Method_System_Collections_Generic_List_string__Add__;
        ++v20->fields._version;
        if ( !v40 )
          break;
        v42 = v20->fields._size;
        if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)name,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &v40->obj.klass + v42;
          v20->fields._size = v42 + 1;
          v43[4] = (Il2CppClass *)name;
          sub_1C2D434((CGThumbnailListItem_o *)(v43 + 4), (int32_t)name, v23, v39);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v37 >= max_length )
        goto LABEL_62;
    }
LABEL_64:
    sub_1C2D6EC(IsNullOrEmpty, name);
  }
LABEL_62:
  if ( !v20 )
    goto LABEL_64;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v20,
                                  (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4C2865C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
    sub_1C2D490(&string_TypeInfo);
    byte_4C2865C = 1;
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
                                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
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
                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_RestrictionEntity__get_Item__);
  if ( !grandServantRestrictionEntityList )
LABEL_16:
    sub_1C2D6EC(grandServantRestrictionEntityList, method);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  QuestRestrictionInfo_o *v4; // x19
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int v6; // w8
  unsigned int v7; // w21
  RestrictionWholeEntity_o *v8; // x25
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int32_t v10; // w20
  int32_t v11; // w9
  QuestRestrictionInfo_SlotInfo_o *v12; // x8
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v14; // x21
  unsigned int v15; // w27
  __int64 v16; // x28
  struct RestrictionEntity_array *restrictionEntityList; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned int v19; // w10
  int32_t priority; // w11
  RestrictionEntity_o *v21; // x12
  Il2CppObject *v23; // x8
  RestrictionEntity_o *v24; // x8
  Il2CppObject *v25; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_4C2863C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2863C = 1;
  }
  entity = 0;
  v25 = 0;
  if ( !v4->fields.restrictionBaseEntity )
  {
    restrictionEntityList = v4->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_58;
    max_length = restrictionEntityList->max_length;
    if ( (int)max_length < 1 )
    {
      method = 0;
LABEL_53:
      if ( (unsigned int)method < (unsigned int)max_length )
      {
        v24 = restrictionEntityList->m_Items[(int)method];
        if ( !v24 )
          goto LABEL_58;
        return QuestRestrictionInfo__GetDialogMessage(v4, (int32_t)method, v24->fields.id, v3);
      }
    }
    else
    {
      v19 = 0;
      priority = 0;
      method = 0;
      while ( v19 < (unsigned int)max_length )
      {
        v21 = restrictionEntityList->m_Items[v19];
        if ( !v21 )
          goto LABEL_58;
        if ( !priority && v21->fields.type == 10 )
        {
          priority = v21->fields.priority;
          method = (const MethodInfo *)v19;
        }
        if ( (int)++v19 >= (int)max_length )
          goto LABEL_53;
      }
    }
LABEL_59:
    sub_1C2D6F4(this, method, v2);
  }
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_58;
  v6 = restrictionWholeEntities->max_length;
  if ( v6 >= 1 )
  {
    v7 = 0;
    while ( v7 < v6 )
    {
      v8 = restrictionWholeEntities->m_Items[v7];
      if ( !v8 )
        goto LABEL_58;
      if ( v8->fields.type == 3 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_58;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v8->fields.restrictionMessageId,
                                           (const MethodInfo_3387DE4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v23 = entity;
          if ( !entity )
            goto LABEL_58;
          return (System_String_o *)v23[1].monitor;
        }
      }
      v6 = restrictionWholeEntities->max_length;
      if ( (int)++v7 >= v6 )
        goto LABEL_15;
    }
    goto LABEL_59;
  }
LABEL_15:
  slotInfos = v4->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_58;
  v10 = 0;
  while ( 1 )
  {
    v11 = slotInfos->max_length;
    if ( v10 >= v11 )
      return (System_String_o *)StringLiteral_1/*""*/;
    if ( v10 >= (unsigned int)v11 )
      goto LABEL_59;
    v12 = slotInfos->m_Items[v10];
    if ( !v12 )
      goto LABEL_58;
    if ( v12->fields.slotType )
    {
      ++v10;
      goto LABEL_37;
    }
    this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
    if ( !this )
      goto LABEL_58;
    this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                       (System_Collections_Generic_Dictionary_int__object__o *)this,
                                       ++v10,
                                       (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
      if ( !this )
        goto LABEL_58;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         v10,
                                         (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( !this )
        goto LABEL_58;
      dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
      v14 = this;
      if ( dialogMessageInfoDictionary >= 1 )
        break;
    }
LABEL_37:
    slotInfos = v4->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_58;
  }
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= dialogMessageInfoDictionary )
      goto LABEL_59;
    v16 = *((_QWORD *)&v14->fields.eventId + (int)v15);
    if ( !v16 )
      goto LABEL_58;
    if ( *(_DWORD *)(v16 + 44) && !*(_DWORD *)(v16 + 40) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
      if ( !this )
        goto LABEL_58;
      this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         &v25,
                                         *(_DWORD *)(v16 + 44),
                                         (const MethodInfo_3387DE4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
    }
    dialogMessageInfoDictionary = (int)v14->fields.dialogMessageInfoDictionary;
    if ( (int)++v15 >= dialogMessageInfoDictionary )
      goto LABEL_37;
  }
  v23 = v25;
  if ( !v25 )
LABEL_58:
    sub_1C2D6EC(this, method);
  return (System_String_o *)v23[1].monitor;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetMyServantOrNpcRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        bool haveIndividualityServant,
        const MethodInfo *method)
{
  Il2CppObject *RestrictedName; // x20
  System_String_o **v8; // x8
  System_String_o *v9; // x0

  if ( (byte_4C28645 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10296/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/);
    sub_1C2D490(&StringLiteral_10299/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/);
    byte_4C28645 = 1;
  }
  RestrictedName = (Il2CppObject *)QuestRestrictionInfo__GetRestrictedName(
                                     this,
                                     pos,
                                     (const MethodInfo *)haveIndividualityServant);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( haveIndividualityServant )
    v8 = (System_String_o **)&StringLiteral_10296/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/;
  else
    v8 = (System_String_o **)&StringLiteral_10299/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/;
  v9 = LocalizationManager__Get(*v8, 0);
  return System_String__Format(v9, RestrictedName, 0);
}


int32_t QuestRestrictionInfo__GetMyServantOrNpcRestrictionNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x8

  v2 = this;
  if ( (byte_4C28659 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    byte_4C28659 = 1;
  }
  if ( !v2->fields.isMyServantOrNpc && !v2->fields.isMyServantOrSupport )
    return 0;
  myServantOrNpcRestrictionEntityList = v2->fields.myServantOrNpcRestrictionEntityList;
  if ( !myServantOrNpcRestrictionEntityList )
    sub_1C2D6EC(this, method);
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
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_int__o *v10; // x20
  __int64 v11; // x2
  int v12; // w8
  void *v13; // x19
  unsigned int v14; // w21
  __int64 v15; // x8
  System_Int32_array *CollectionList; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x1
  const MethodInfo_30F9000 *v19; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v22; // x20
  Il2CppObject *v23; // x0
  Il2CppObject *v24; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_4C28647 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__DisplayClass193_0__GetMyServantOrNpcSvtIdList_b__0__);
    sub_1C2D490(&QuestRestrictionInfo___c__DisplayClass193_0_TypeInfo);
    byte_4C28647 = 1;
  }
  v5 = sub_1C2D6DC(QuestRestrictionInfo___c__DisplayClass193_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass193_0___ctor((QuestRestrictionInfo___c__DisplayClass193_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
  {
    v10 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v10,
      (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v5 + 24),
                                        (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    v12 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v13 = restrictionSlotDetailDictionary;
    if ( v12 >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= v12 )
          sub_1C2D6F4(restrictionSlotDetailDictionary, v7, v11);
        v15 = *((_QWORD *)v13 + (int)v14 + 4);
        if ( !v15 )
          break;
        if ( *(_DWORD *)(v15 + 32) == 1 )
        {
          if ( !v10 )
            break;
          System_Collections_Generic_List_int___AddRange(
            v10,
            *(System_Collections_Generic_IEnumerable_T__o **)(v15 + 40),
            (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v12 = *((_DWORD *)v13 + 6);
        if ( (int)++v14 >= v12 )
          goto LABEL_15;
      }
LABEL_29:
      sub_1C2D6EC(restrictionSlotDetailDictionary, v7);
    }
LABEL_15:
    if ( !v10 )
      goto LABEL_29;
    if ( v10->fields._size >= 1 )
    {
      restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                          (DataManager_o *)restrictionSlotDetailDictionary,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList((ServantMaster_o *)restrictionSlotDetailDictionary, 0);
      monitor = System_Linq_Enumerable__Distinct_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v10,
                  (const MethodInfo_30F1B3C *)Method_System_Linq_Enumerable_Distinct_int___);
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v19 = (const MethodInfo_30F9000 *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v25 = System_Linq_Enumerable__Intersect_int_(monitor, v18, v19);
      return System_Linq_Enumerable__ToArray_int_(
               v25,
               (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
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
      v22 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v22,
        (Il2CppObject *)v5,
        Method_QuestRestrictionInfo___c__DisplayClass193_0__GetMyServantOrNpcSvtIdList_b__0__,
        0);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      v23 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v22,
              (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v23 )
      {
        v24 = v23;
        restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                            (DataManager_o *)restrictionSlotDetailDictionary,
                                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        v18 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                     (ServantMaster_o *)restrictionSlotDetailDictionary,
                                                                     0);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v24[2].monitor;
        v19 = (const MethodInfo_30F9000 *)Method_System_Linq_Enumerable_Intersect_int___;
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
  QuestRestrictionInfo___c__DisplayClass207_0_o *v9; // x22
  void *Instance; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_int__object__o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  long double inited; // q0
  _QWORD *v17; // x23
  __int64 v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x23
  System_Int32_array *MyServantOrNpcSvtIdList; // x27
  System_Predicate_object__o *v23; // x24
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x23
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  int32_t MyServantOrSupportTargetPos; // w22
  const MethodInfo *v29; // x2
  long double v30; // q0
  _QWORD *v31; // x21
  __int64 v32; // x8
  __int64 v33; // x0
  __int64 v34; // x0
  System_Collections_Generic_List_int__o *v35; // x23
  __int64 v36; // x2
  int v37; // w8
  void *v38; // x24
  unsigned int v39; // w29
  FollowerInfo_o *v40; // x25
  ServantLeaderInfo_o *v41; // x26
  int32_t ReturnTypeByQuestId; // w0
  System_Int32_array *NpcServantIndividualityFull; // x27
  const MethodInfo *v44; // x7
  const MethodInfo *v45; // x3
  __int64 v46; // x27
  __int64 v47; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v51; // x27
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v52; // x27
  __int64 v53; // x26
  __int64 v54; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Collections_Generic_IEnumerable_TSource__o *first; // [xsp+0h] [xbp-70h]
  bool isWhole; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4C28650 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Union_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__DisplayClass207_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__);
    sub_1C2D490(&QuestRestrictionInfo___c__DisplayClass207_0_TypeInfo);
    byte_4C28650 = 1;
  }
  isWhole = 0;
  v9 = (QuestRestrictionInfo___c__DisplayClass207_0_o *)sub_1C2D6DC(QuestRestrictionInfo___c__DisplayClass207_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass207_0___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_57;
  v9->fields.index = index;
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)npcInfoDictionary, (int32_t)v12, v13, v14);
  v17 = Method_System_Array_Empty_int___;
  v18 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v18 )
  {
    sub_1C7DC00(Method_System_Array_Empty_int___);
    v18 = v17[7];
  }
  v19 = *(_QWORD *)(v18 + 16);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C7DBA4(inited);
  if ( !*(_DWORD *)(v19 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v19);
  v20 = *(_QWORD *)(v17[7] + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C7DBA4(inited);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v20 + 184);
    v23 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v23,
      (Il2CppObject *)v9,
      Method_QuestRestrictionInfo___c__DisplayClass207_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      0);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_57;
    v24 = System_Collections_Generic_List_object___Find(
            myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v23,
            (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v24 )
    {
      v25 = v24;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_57;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_57;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)Instance,
                                                                              0);
      v27 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v25[2].monitor,
              CollectionList,
              (const MethodInfo_30F9000 *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v27,
                                  (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    MyServantOrSupportTargetPos = v9->fields.index;
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(this, v9->fields.index, v15);
    if ( !MyServantOrNpcSvtIdList )
    {
      v31 = Method_System_Array_Empty_int___;
      v32 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v32 )
      {
        sub_1C7DC00(Method_System_Array_Empty_int___);
        v32 = v31[7];
      }
      v33 = *(_QWORD *)(v32 + 16);
      if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
        v33 = sub_1C7DBA4(v30);
      if ( !*(_DWORD *)(v33 + 224) )
        v30 = j_il2cpp_runtime_class_init_0(v33);
      v34 = *(_QWORD *)(v31[7] + 16LL);
      if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
        v34 = sub_1C7DBA4(v30);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v34 + 184);
    }
    MyServantOrSupportTargetPos = v9->fields.index;
    if ( !this->fields.restrictionBaseEntity )
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
                                      this,
                                      MyServantOrSupportTargetPos,
                                      v29);
  }
  v35 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v35,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !Instance )
    goto LABEL_57;
  Instance = NpcFollowerMaster__GetQuestFollowerList(
               (NpcFollowerMaster_o *)Instance,
               this->fields.questId,
               this->fields.questPhase,
               0);
  if ( !Instance )
    goto LABEL_57;
  v37 = *((_DWORD *)Instance + 6);
  v38 = Instance;
  if ( v37 >= 1 )
  {
    v39 = 0;
    while ( 1 )
    {
      if ( v39 >= v37 )
        sub_1C2D6F4(Instance, v11, v36);
      v40 = (FollowerInfo_o *)*((_QWORD *)v38 + (int)v39 + 4);
      Instance = (void *)FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0);
      if ( !v40 )
        break;
      Instance = FollowerInfo__getServantLeaderInfo(v40, 0, (int32_t)Instance, 0);
      if ( Instance )
      {
        v41 = (ServantLeaderInfo_o *)Instance;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0);
        NpcServantIndividualityFull = FollowerInfo__GetNpcServantIndividualityFull(v40, 0, ReturnTypeByQuestId, 0);
        Instance = ServantLeaderInfo__GetOverwriteStatus(v41, 0);
        if ( !Instance )
          break;
        Instance = (void *)QuestRestrictionInfo__IsRestriction_43187812(
                             this,
                             &isWhole,
                             NpcServantIndividualityFull,
                             *((_DWORD *)Instance + 6),
                             v41->fields.lv,
                             MyServantOrSupportTargetPos,
                             3,
                             v44);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_43209828(
                               this,
                               NpcServantIndividualityFull,
                               MyServantOrSupportTargetPos,
                               v45);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v47 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
            v46 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v59.fields.currentCryptoKey = v47;
            *(_QWORD *)&v59.fields.fakeValue = v46;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v59, 0);
            if ( !v35 )
              break;
            items = v35->fields._items;
            v49 = Method_System_Collections_Generic_List_int__Add__;
            ++v35->fields._version;
            if ( !items )
              break;
            size = v35->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v35,
                (int32_t)Instance,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v35->fields._size = size + 1;
              items->m_Items[size] = (int)Instance;
            }
            v51 = *npcInfoDictionary;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v41->fields.svtId, 0);
            if ( !v51 )
              break;
            Instance = (void *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                 (System_Collections_Generic_Dictionary_int__object__o *)v51,
                                 (int32_t)Instance,
                                 (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              v52 = *npcInfoDictionary;
              v54 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
              v53 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v60.fields.currentCryptoKey = v54;
              *(_QWORD *)&v60.fields.fakeValue = v53;
              Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v60, 0);
              if ( !v52 )
                break;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)v52,
                (int32_t)Instance,
                (Il2CppObject *)v40,
                (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
            }
          }
        }
      }
      v37 = *((_DWORD *)v38 + 6);
      if ( (int)++v39 >= v37 )
        goto LABEL_56;
    }
LABEL_57:
    sub_1C2D6EC(Instance, v11);
  }
LABEL_56:
  v55 = System_Linq_Enumerable__Union_int_(
          first,
          (System_Collections_Generic_IEnumerable_TSource__o *)v35,
          (const MethodInfo_31131C0 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v55,
           (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetMyServantOrSupportRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        bool haveIndividualityServant,
        const MethodInfo *method)
{
  __int64 *v7; // x8
  void *MyServantOrNpcSvtIdList; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int v11; // w8
  _DWORD *v12; // x19
  __int64 v13; // x20
  int v14; // w23

  if ( (byte_4C28646 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10301/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/);
    sub_1C2D490(&StringLiteral_10300/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/);
    sub_1C2D490(&StringLiteral_10298/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/);
    sub_1C2D490(&StringLiteral_10297/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/);
    byte_4C28646 = 1;
  }
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_10298/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/;
  }
  else if ( haveIndividualityServant )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_10297/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/;
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(
                                this,
                                pos,
                                (const MethodInfo *)haveIndividualityServant);
    if ( MyServantOrNpcSvtIdList
      && (v11 = *((_DWORD *)MyServantOrNpcSvtIdList + 6), v12 = MyServantOrNpcSvtIdList, v11 >= 1) )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= v11 )
          sub_1C2D6F4(MyServantOrNpcSvtIdList, v9, v10);
        MyServantOrNpcSvtIdList = BalanceConfig_TypeInfo;
        v14 = v12[v13 + 8];
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          MyServantOrNpcSvtIdList = BalanceConfig_TypeInfo;
        }
        if ( v14 < *(_DWORD *)(*((_QWORD *)MyServantOrNpcSvtIdList + 23) + 916LL) )
          break;
        v11 = v12[6];
        if ( (int)++v13 >= v11 )
          goto LABEL_20;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_10300/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/;
    }
    else
    {
LABEL_20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_10301/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/;
    }
  }
  return LocalizationManager__Get((System_String_o *)*v7, 0);
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
  const MethodInfo *v9; // x3
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v12; // x20
  __int64 v13; // x2
  Il2CppClass *klass; // x8

  if ( (byte_4C28648 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C2D490(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__DisplayClass194_0__GetMyServantOrSupportTargetPos_b__0__);
    sub_1C2D490(&QuestRestrictionInfo___c__DisplayClass194_0_TypeInfo);
    byte_4C28648 = 1;
  }
  v5 = sub_1C2D6DC(QuestRestrictionInfo___c__DisplayClass194_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass194_0___ctor((QuestRestrictionInfo___c__DisplayClass194_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
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
  v12 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass194_0__GetMyServantOrSupportTargetPos_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  v6 = System_Collections_Generic_List_object___Find(
         myServantOrNpcRestrictionEntityList,
         (System_Predicate_T__o *)v12,
         (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v6 )
    return (int)v6;
  klass = v6[3].klass;
  if ( !klass )
LABEL_14:
    sub_1C2D6EC(v6, v7);
  if ( !LODWORD(klass->_1.namespaze) )
    sub_1C2D6F4(v6, v7, v13);
  LODWORD(v6) = klass->_1.byval_arg.data;
  return (int)v6;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C2D6F4(this, *(_QWORD *)&pos, method);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C2D6EC(this, pos);
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

  if ( (byte_4C2864A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2864A = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.restrictionBaseEntity )
  {
    dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
    if ( !dialogMessageInfoDictionary )
      sub_1C2D6EC(0, *(_QWORD *)&pos);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v11,
      (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
      (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
             &v11,
             (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
      if ( !v6 )
        break;
      if ( !v11.fields._current.fields.value )
        sub_1C2D6EC(v6, v7);
      if ( LODWORD(v11.fields._current.fields.value[1].klass) == pos )
      {
        DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v11.fields._current.fields.key, 0, v8);
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
          &v11,
          (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
        return DialogMessage;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v11,
      (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
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

  if ( (byte_4C28655 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4C28655 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&off_18) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C2D6EC(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4C28652 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C28652 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v6 )
      break;
    if ( !v3 )
      sub_1C2D6EC(v6, v7);
    System_Collections_Generic_List_int___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)v9.fields._current,
      (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v3 )
LABEL_15:
    sub_1C2D6EC(needStartingIndividualitiesList, v4);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C2D6F4(this, *(_QWORD *)&svtId, method);
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
  __int64 v9; // x2
  __int64 v10; // x19
  unsigned __int64 v11; // x25
  __int64 v12; // x26
  CGThumbnailListItem_o *i; // x21
  int32_t v14; // w23
  Il2CppObject *MasterData_object; // x24
  int32_t maxLimitCount; // w23
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  UserServantCollectionEntity_o *v20; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C28637 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&string___TypeInfo);
    byte_4C28637 = 1;
  }
  v20 = 0;
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
  FixedServantPositionSvtIdList = sub_1C2D538(string___TypeInfo, *(unsigned int *)(FixedServantPositionSvtIdList + 24));
  v10 = FixedServantPositionSvtIdList;
  if ( v5 >= 1 )
  {
    v11 = 0;
    v12 = (unsigned int)v5;
    for ( i = (CGThumbnailListItem_o *)(FixedServantPositionSvtIdList + 32); ; i = (CGThumbnailListItem_o *)((char *)i + 8) )
    {
      if ( v11 >= *(unsigned int *)(v8 + 24) )
LABEL_42:
        sub_1C2D6F4(FixedServantPositionSvtIdList, v7, v9);
      v14 = *(_DWORD *)(v8 + 32 + 4 * v11);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      FixedServantPositionSvtIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !FixedServantPositionSvtIdList )
        break;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)FixedServantPositionSvtIdList,
              &entity,
              v14,
              (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0;
      FixedServantPositionSvtIdList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !FixedServantPositionSvtIdList )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)FixedServantPositionSvtIdList,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
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
              &v20,
              *(_QWORD *)(*(_QWORD *)(FixedServantPositionSvtIdList + 184) + 64LL),
              v14,
              0) )
        goto LABEL_28;
      FixedServantPositionSvtIdList = (__int64)v20;
      if ( !v20 )
        break;
      FixedServantPositionSvtIdList = UserServantCollectionEntity__IsGet(v20, 0);
      if ( (FixedServantPositionSvtIdList & 1) != 0 )
      {
        if ( !v20 )
          break;
        maxLimitCount = v20->fields.maxLimitCount;
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
      v17 = ((maxLimitCount == -1) & ((unsigned int)FixedServantPositionSvtIdList ^ 1)) != 0 ? 0 : maxLimitCount;
      FixedServantPositionSvtIdList = (__int64)ServantEntity__getName((ServantEntity_o *)entity, v17, -1, 0, 0);
      if ( !v10 )
        break;
      if ( v11 >= *(unsigned int *)(v10 + 24) )
        goto LABEL_42;
      i->klass = (CGThumbnailListItem_c *)FixedServantPositionSvtIdList;
      sub_1C2D434(i, FixedServantPositionSvtIdList, v9, v18);
      if ( v12 == ++v11 )
        return (System_String_array *)v10;
    }
LABEL_41:
    sub_1C2D6EC(FixedServantPositionSvtIdList, v7);
  }
  return (System_String_array *)v10;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C2D6F4(this, *(_QWORD *)&pos, method);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C2D6EC(this, pos);
  return v4->fields.rangeTypeList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestRestrictionInfo__GetRestrictedName(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x21
  __int64 v5; // x2
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v7; // x20
  unsigned int v8; // w19
  __int64 v9; // x21
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x26
  unsigned __int64 v11; // x27
  __int64 v12; // x23
  const MethodInfo *v13; // x3
  QuestRestrictionEntity_o *v14; // x1
  __int64 v15; // x22
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x24
  System_Predicate_object__o *v17; // x25
  struct System_Int32_array *deckSvtIdList; // x8
  System_String_o *v20; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4C28644 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C2D490(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__DisplayClass190_0__GetRestrictedName_b__0__);
    sub_1C2D490(&QuestRestrictionInfo___c__DisplayClass190_0_TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28644 = 1;
  }
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v4->fields.restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         pos,
                                         (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( this )
      {
        dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
        v7 = this;
        if ( dialogMessageInfoDictionary >= 1 )
        {
          v8 = 0;
          while ( 1 )
          {
            if ( v8 >= dialogMessageInfoDictionary )
              goto LABEL_30;
            v9 = *((_QWORD *)&v7->fields.eventId + (int)v8);
            if ( !v9 )
              goto LABEL_29;
            this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v9 + 32), 0);
            if ( ((unsigned __int8)this & 1) == 0 )
              return *(System_String_o **)(v9 + 32);
            dialogMessageInfoDictionary = (int)v7->fields.dialogMessageInfoDictionary;
            if ( (int)++v8 >= dialogMessageInfoDictionary )
              return v20;
          }
        }
        return v20;
      }
    }
LABEL_29:
    sub_1C2D6EC(this, *(_QWORD *)&pos);
  }
  questRestrictionEntityList = v4->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_29;
  if ( SLODWORD(questRestrictionEntityList->max_length) >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = sub_1C2D6DC(QuestRestrictionInfo___c__DisplayClass190_0_TypeInfo);
      QuestRestrictionInfo___c__DisplayClass190_0___ctor((QuestRestrictionInfo___c__DisplayClass190_0_o *)v12, 0);
      if ( v11 >= LODWORD(questRestrictionEntityList->max_length) )
        break;
      if ( !v12 )
        goto LABEL_29;
      v14 = questRestrictionEntityList->m_Items[v11];
      *(_QWORD *)(v12 + 16) = v14;
      v15 = v12 + 16;
      sub_1C2D434((CGThumbnailListItem_o *)(v12 + 16), (int32_t)v14, v5, v13);
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v4->fields.myServantOrNpcRestrictionEntityList;
      v17 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v17,
        (Il2CppObject *)v12,
        Method_QuestRestrictionInfo___c__DisplayClass190_0__GetRestrictedName_b__0__,
        0);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_object___Find(
                                         myServantOrNpcRestrictionEntityList,
                                         (System_Predicate_T__o *)v17,
                                         (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( this )
      {
        deckSvtIdList = this->fields.deckSvtIdList;
        if ( !deckSvtIdList )
          goto LABEL_29;
        if ( !LODWORD(deckSvtIdList->max_length) )
          break;
        if ( deckSvtIdList->m_Items[0] == pos )
        {
          if ( !*(_QWORD *)v15 )
            goto LABEL_29;
          v20 = *(System_String_o **)(*(_QWORD *)v15 + 48LL);
        }
      }
      if ( (__int64)++v11 >= SLODWORD(questRestrictionEntityList->max_length) )
        return v20;
    }
LABEL_30:
    sub_1C2D6F4(this, *(_QWORD *)&pos, v5);
  }
  return v20;
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
  System_Func_object__object__o *_9__110_0; // x20
  Il2CppObject *v12; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  Il2CppObject *v17; // x0
  System_Collections_Generic_IEnumerable_string__o *v18; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v19; // x8
  QuestRestrictionInfo_SlotInfo_o *v20; // x8

  v4 = this;
  if ( (byte_4C28620 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Prepend_string___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_1C2D490(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__110_0__);
    sub_1C2D490(&QuestRestrictionInfo___c_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&StringLiteral_10258/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_4C28620 = 1;
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
      this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10258/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      v19 = v4->fields.slotInfos;
      if ( !v19 )
        goto LABEL_25;
      if ( (unsigned int)v6 >= LODWORD(v19->max_length) )
LABEL_26:
        sub_1C2D6F4(this, *(_QWORD *)&initPos, method);
      v20 = v19->m_Items[v6];
      if ( v20 )
        return System_String__Concat_63496112(
                 (System_String_o *)this,
                 (System_String_o *)StringLiteral_43/*"\n"*/,
                 v20->fields.summary,
                 0);
    }
LABEL_25:
    sub_1C2D6EC(this, *(_QWORD *)&initPos);
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
  _9__110_0 = (System_Func_object__object__o *)v10->static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = QuestRestrictionInfo___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__110_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_RestrictionEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__110_0,
      v12,
      Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__110_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__110_0 = (struct System_Func_RestrictionEntity__string__o *)_9__110_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__110_0, (int32_t)_9__110_0, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                               (System_Func_TSource__TResult__o *)_9__110_0,
                                                               (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10258/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
  v18 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Prepend_object_(
                                                              v16,
                                                              v17,
                                                              (const MethodInfo_30FE8B0 *)Method_System_Linq_Enumerable_Prepend_string___);
  return System_String__Join_63500440((System_String_o *)StringLiteral_43/*"\n"*/, v18, 0);
}


System_Collections_Generic_IEnumerable_RestrictionEntity__o *QuestRestrictionInfo__GetRestrictionMessageEntityList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x19
  System_Func_object__bool__o *_9__111_0; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C28621 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C2D490(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__111_0__);
    sub_1C2D490(&QuestRestrictionInfo___c_TypeInfo);
    byte_4C28621 = 1;
  }
  v3 = QuestRestrictionInfo___c_TypeInfo;
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v3 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__111_0 = (System_Func_object__bool__o *)v3->static_fields->__9__111_0;
  if ( !_9__111_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestRestrictionInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__111_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__111_0,
      v6,
      Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__111_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__111_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__111_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__111_0, (int32_t)_9__111_0, v8, v9);
  }
  return (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                          restrictionEntityList,
                                                                          (System_Func_TSource__bool__o *)_9__111_0,
                                                                          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
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

  if ( (byte_4C2861A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2861A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0
    || (ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)Instance,
                                       svtId,
                                       dispLimitCount,
                                       0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1C2D6EC(Instance, v9);
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

  if ( (byte_4C28638 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C28638 = 1;
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
      sub_1C2D6EC(0, method);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  QuestRestrictionInfo_o *v4; // x19
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int v6; // w8
  unsigned int v7; // w21
  RestrictionWholeEntity_o *v8; // x25
  int32_t v9; // w20
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v11; // x21
  unsigned int v12; // w26
  __int64 v13; // x27
  struct RestrictionEntity_array *restrictionEntityList; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned int v17; // w10
  int32_t priority; // w11
  RestrictionEntity_o *v19; // x12
  Il2CppObject *v20; // x8
  RestrictionEntity_o *v21; // x8
  Il2CppObject *v22; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_4C2863A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2863A = 1;
  }
  v22 = 0;
  entity = 0;
  if ( !v4->fields.restrictionBaseEntity )
  {
    restrictionEntityList = v4->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_51;
    max_length = restrictionEntityList->max_length;
    if ( (int)max_length < 1 )
    {
      method = 0;
LABEL_46:
      if ( (unsigned int)method < (unsigned int)max_length )
      {
        v21 = restrictionEntityList->m_Items[(int)method];
        if ( v21 )
          return QuestRestrictionInfo__GetDialogMessage(v4, (int32_t)method, v21->fields.id, v3);
        goto LABEL_51;
      }
    }
    else
    {
      v17 = 0;
      priority = 0;
      method = 0;
      while ( v17 < (unsigned int)max_length )
      {
        v19 = restrictionEntityList->m_Items[v17];
        if ( !v19 )
          goto LABEL_51;
        if ( !priority && v19->fields.type == 10 )
        {
          priority = v19->fields.priority;
          method = (const MethodInfo *)v17;
        }
        if ( (int)++v17 >= (int)max_length )
          goto LABEL_46;
      }
    }
LABEL_52:
    sub_1C2D6F4(this, method, v2);
  }
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_51;
  v6 = restrictionWholeEntities->max_length;
  if ( v6 < 1 )
  {
LABEL_16:
    if ( v4->fields.servantNumMin < 1 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v9 = 1;
    while ( 1 )
    {
      this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
      if ( !this )
        goto LABEL_51;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         v9,
                                         (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( !this )
        goto LABEL_51;
      dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
      v11 = this;
      if ( dialogMessageInfoDictionary >= 1 )
        break;
LABEL_31:
      if ( ++v9 > v4->fields.servantNumMin )
        return (System_String_o *)StringLiteral_1/*""*/;
    }
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= dialogMessageInfoDictionary )
        goto LABEL_52;
      v13 = *((_QWORD *)&v11->fields.eventId + (int)v12);
      if ( !v13 )
        goto LABEL_51;
      if ( *(_DWORD *)(v13 + 44) && !*(_DWORD *)(v13 + 40) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_51;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &v22,
                                           *(_DWORD *)(v13 + 44),
                                           (const MethodInfo_3387DE4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      dialogMessageInfoDictionary = (int)v11->fields.dialogMessageInfoDictionary;
      if ( (int)++v12 >= dialogMessageInfoDictionary )
        goto LABEL_31;
    }
    v20 = v22;
    if ( v22 )
      return (System_String_o *)v20[1].monitor;
LABEL_51:
    sub_1C2D6EC(this, method);
  }
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
      goto LABEL_52;
    v8 = restrictionWholeEntities->m_Items[v7];
    if ( !v8 )
      goto LABEL_51;
    if ( v8->fields.restrictionMessageId && v8->fields.type == 3 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
      if ( !this )
        goto LABEL_51;
      this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         &entity,
                                         v8->fields.restrictionMessageId,
                                         (const MethodInfo_3387DE4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
    }
    v6 = restrictionWholeEntities->max_length;
    if ( (int)++v7 >= v6 )
      goto LABEL_16;
  }
  v20 = entity;
  if ( !entity )
    goto LABEL_51;
  return (System_String_o *)v20[1].monitor;
}


System_String_o *QuestRestrictionInfo__GetServantNumRestrictionMessage(
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

  if ( (byte_4C28639 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10303/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/);
    sub_1C2D490(&StringLiteral_10302/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/);
    byte_4C28639 = 1;
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
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10303/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, 0);
    v10 = &v14;
    v14 = this->fields.servantNumMax;
  }
  else
  {
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10302/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, 0);
    v10 = &v13;
    v13 = this->fields.servantNumMax;
  }
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v10, v6, v7, v8);
  return System_String__Format(v9, v11, 0);
}


int32_t QuestRestrictionInfo__GetSupportInitIndex(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.supportInitIndex;
}


System_String_o *QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C28622 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10304/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/);
    byte_4C28622 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10304/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, 0);
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
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  Il2CppObject *v8; // x0
  int32_t TotalCost; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C28631 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    byte_4C28631 = 1;
  }
  result = (System_String_o *)this->fields.totalCostRestrictionEntity;
  if ( result )
  {
    klass = result[1].klass;
    TotalCost = RestrictionEntity__getTotalCost((RestrictionEntity_o *)result, 0);
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalCost, v5, v6, v7);
    return System_String__Format((System_String_o *)klass, v8, 0);
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
  if ( (byte_4C28628 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10306/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/);
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28628 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_10306/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, 0);
  }
  else
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_18:
      sub_1C2D6EC(this, isFixMessage);
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
          sub_1C2D6F4(this, isFixMessage, method);
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
  if ( (byte_4C28627 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10305/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/);
    byte_4C28627 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10305/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, 0);
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
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  QuestRestrictionInfo___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  System_Func_object__bool__o *_9__102_1; // x21
  Il2CppObject *v19; // x22
  struct QuestRestrictionInfo___c_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  QuestRestrictionInfo___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  System_Func_object__bool__o *_9__102_2; // x21
  Il2CppObject *v27; // x22
  struct QuestRestrictionInfo___c_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  System_Func_object__bool__o *v32; // x21

  if ( (byte_4C2861B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_RestrictionEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C2D490(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__102_0__);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__102_1__);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__102_2__);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__DisplayClass102_0__IsClassRestriction_b__3__);
    sub_1C2D490(&QuestRestrictionInfo___c__DisplayClass102_0_TypeInfo);
    sub_1C2D490(&QuestRestrictionInfo___c_TypeInfo);
    byte_4C2861B = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass102_0_o *)sub_1C2D6DC(QuestRestrictionInfo___c__DisplayClass102_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass102_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
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
    _9__102_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__102_0, v11, Method_QuestRestrictionInfo___c__IsClassRestriction_b__102_0__, 0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__102_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__102_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__102_0, (int32_t)_9__102_0, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          restrictionEntityList,
          (System_Func_TSource__bool__o *)_9__102_0,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v16 = QuestRestrictionInfo___c_TypeInfo;
  v17 = v15;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v16 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__102_1 = (System_Func_object__bool__o *)v16->static_fields->__9__102_1;
  if ( !_9__102_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = QuestRestrictionInfo___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__102_1 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__102_1, v19, Method_QuestRestrictionInfo___c__IsClassRestriction_b__102_1__, 0);
    v20 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v20->__9__102_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__102_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v20->__9__102_1, (int32_t)_9__102_1, v21, v22);
  }
  v23 = System_Linq_Enumerable__Where_object_(
          v17,
          (System_Func_TSource__bool__o *)_9__102_1,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v24 = QuestRestrictionInfo___c_TypeInfo;
  v25 = v23;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v24 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__102_2 = (System_Func_object__bool__o *)v24->static_fields->__9__102_2;
  if ( !_9__102_2 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = QuestRestrictionInfo___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__102_2 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__102_2, v27, Method_QuestRestrictionInfo___c__IsClassRestriction_b__102_2__, 0);
    v28 = QuestRestrictionInfo___c_TypeInfo->static_fields;
    v28->__9__102_2 = (struct System_Func_RestrictionEntity__bool__o *)_9__102_2;
    sub_1C2D434((CGThumbnailListItem_o *)&v28->__9__102_2, (int32_t)_9__102_2, v29, v30);
  }
  v31 = System_Linq_Enumerable__Where_object_(
          v25,
          (System_Func_TSource__bool__o *)_9__102_2,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
  v32 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RestrictionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v32,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass102_0__IsClassRestriction_b__3__,
    0);
  return System_Linq_Enumerable__Any_object__51233692(
           v31,
           (System_Func_TSource__bool__o *)v32,
           (const MethodInfo_30DC39C *)Method_System_Linq_Enumerable_Any_RestrictionEntity___);
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1C2D6F4(this, *(_QWORD *)&initPos, method);
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_7:
    sub_1C2D6EC(this, initPos);
  return v4->fields.isMoved;
}


bool QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_1C2D6EC(this, method);
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
  __int64 v2; // x2
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int max_length; // w9
  unsigned int v5; // w10
  int32_t priority; // w13
  int32_t v7; // w12
  signed int v8; // w14
  signed int v9; // w11
  RestrictionEntity_o *v10; // x15
  int32_t type; // w16

  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_18;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    priority = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C2D6F4(this, method, v2);
      v10 = restrictionEntityList->m_Items[v5];
      if ( !v10 )
        break;
      type = v10->fields.type;
      if ( v7 || type != 10 )
      {
        if ( !priority && type == 8 || !priority && type == 14 )
        {
          priority = v10->fields.priority;
          v8 = v5;
        }
      }
      else
      {
        v7 = v10->fields.priority;
        v9 = v5;
      }
      if ( (int)++v5 >= max_length )
        return v8 != 0 && v8 > v9;
    }
LABEL_18:
    sub_1C2D6EC(this, method);
  }
  v9 = 0;
  v8 = 0;
  return v8 != 0 && v8 > v9;
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

  if ( (byte_4C2864D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C2864D = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !this->fields.isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.isFixedSupportPosition )
  {
    fixedSupportIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)fixedSupportIndividualitiesList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v11;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v6 )
        break;
      if ( !v3 )
        sub_1C2D6EC(v6, v7);
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
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v11;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v9 )
        break;
      if ( !v3 )
        sub_1C2D6EC(v9, v10);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v3 )
LABEL_23:
    sub_1C2D6EC(fixedSupportIndividualitiesList, v4);
  return v3->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsFixedSupportPosition_43193904(
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
  if ( (byte_4C28629 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C28629 = 1;
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
  v7 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v6->fields.isFixedSupportPosition )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedSupportIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v22;
          ;
          System_Collections_Generic_List_int___AddRange(
            v7,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v8 )
        break;
      if ( !v7 )
        sub_1C2D6EC(v8, v9);
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
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v22;
          ;
          System_Collections_Generic_List_int___AddRange(
            v7,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v11 )
        break;
      if ( !v7 )
        sub_1C2D6EC(v11, v12);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v7 )
    goto LABEL_42;
  if ( v7->fields._size < 1 )
    goto LABEL_36;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_42;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v15 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  *(_QWORD *)&v25.fields.fakeValue = v14;
  this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v25, 0);
  if ( !v13 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v13,
             (int32_t)this,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    v7,
    (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = v22;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v23,
            (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v23,
        (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      return 1;
    }
    current = (int32_t)v23.fields._current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, 0);
    if ( !Entity )
      sub_1C2D6EC(DispLimitCount, v20);
  }
  while ( !ServantEntity__IsIndividuality((ServantEntity_o *)Entity, limitCount, DispLimitCount, current, 0) );
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v23,
    (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_36:
  supportPositionList = v6->fields.supportPositionList;
  if ( !supportPositionList )
LABEL_42:
    sub_1C2D6EC(this, *(_QWORD *)&num);
  if ( LODWORD(supportPositionList->max_length) <= num )
    sub_1C2D6F4(this, *(_QWORD *)&num, servantInfo);
  return !supportPositionList->m_Items[num];
}


bool QuestRestrictionInfo__IsGrandServantRestriction(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  return QuestRestrictionInfo__GetGrandServantRestrictionEntity(this, initPos, method) != 0;
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


bool QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass185_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v10; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_4C2863F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
    sub_1C2D490(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__DisplayClass185_0__IsMyServantOrNpcRestriction_b__0__);
    sub_1C2D490(&QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo);
    byte_4C2863F = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass185_0_o *)sub_1C2D6DC(QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass185_0___ctor(v5, 0);
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
        sub_1C2D6F4(v6, v7, v8);
      v10 = slotInfos->m_Items[pos - 1];
      if ( v10 )
        return (unsigned int)(v10->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_1C2D6EC(v6, v7);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v13 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass185_0__IsMyServantOrNpcRestriction_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  return System_Collections_Generic_List_object___Exists(
           myServantOrNpcRestrictionEntityList,
           (System_Predicate_T__o *)v13,
           (const MethodInfo_378A1B0 *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
}


bool QuestRestrictionInfo__IsNoSupportBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNoSupportBattle;
}


bool QuestRestrictionInfo__IsNotIndividuality(QuestRestrictionInfo_o *this, int32_t pos, const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass187_0_o *v5; // x21
  void *restrictionSlotDetailDictionary; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x2
  int v10; // w8
  int v11; // w9
  __int64 v12; // x10
  __int64 v13; // x10
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v15; // x20
  __int64 v16; // x8

  if ( (byte_4C28641 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C2D490(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__DisplayClass187_0__IsNotIndividuality_b__0__);
    sub_1C2D490(&QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo);
    byte_4C28641 = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass187_0_o *)sub_1C2D6DC(QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass187_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_23;
  v5->fields.pos = pos;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(this, pos, v8) )
  {
    if ( this->fields.restrictionBaseEntity )
    {
      restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                          (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                          v5->fields.pos,
                                          (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      v10 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
      if ( v10 >= 1 )
      {
        v11 = 0;
        while ( 1 )
        {
          if ( v10 == v11 )
            sub_1C2D6F4(restrictionSlotDetailDictionary, v7, v9);
          v12 = *((_QWORD *)restrictionSlotDetailDictionary + v11 + 4);
          if ( !v12 )
            break;
          if ( *(_DWORD *)(v12 + 32) == 1 )
          {
            v13 = *(_QWORD *)(v12 + 40);
            if ( v13 )
            {
              if ( *(_QWORD *)(v13 + 24) )
                goto LABEL_17;
            }
          }
          if ( v10 == ++v11 )
            goto LABEL_16;
        }
LABEL_23:
        sub_1C2D6EC(restrictionSlotDetailDictionary, v7);
      }
LABEL_16:
      LOBYTE(restrictionSlotDetailDictionary) = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
      v15 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v15,
        (Il2CppObject *)v5,
        Method_QuestRestrictionInfo___c__DisplayClass187_0__IsNotIndividuality_b__0__,
        0);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                          myServantOrNpcRestrictionEntityList,
                                          (System_Predicate_T__o *)v15,
                                          (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( restrictionSlotDetailDictionary )
      {
        v16 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
        if ( !v16 )
          goto LABEL_23;
        LOBYTE(restrictionSlotDetailDictionary) = *(_DWORD *)(v16 + 24) == 0;
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


// local variable allocation has failed, the output may be wrong!
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
      sub_1C2D6F4(this, *(_QWORD *)&initPos, method);
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_1C2D6EC(this, initPos);
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
  const MethodInfo *v9; // x3

  if ( (byte_4C28619 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
    sub_1C2D490(&System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__100_0__);
    sub_1C2D490(&QuestRestrictionInfo___c_TypeInfo);
    byte_4C28619 = 1;
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
    _9__100_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__100_0,
      v6,
      Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__100_0__,
      0);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__100_0 = (struct System_Func_QuestRestrictionInfo_SlotInfo__bool__o *)_9__100_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__100_0, (int32_t)_9__100_0, v8, v9);
  }
  return BasicHelper__Any_object__51084700(
           slotInfos,
           (System_Func_T__bool__o *)_9__100_0,
           (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
}


bool QuestRestrictionInfo__IsRestrictionIndividualityWhole(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo___c_c *v3; // x0
  System_Object_array *restrictionWholeEntities; // x19
  System_Func_object__bool__o *_9__99_1; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo_30B7D9C *v10; // x2
  QuestRestrictionInfo___c_c *v11; // x0
  Il2CppObject *v12; // x21
  struct QuestRestrictionInfo___c_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C28618 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_RestrictionEntity___);
    sub_1C2D490(&Method_BasicHelper_Any_RestrictionWholeEntity___);
    sub_1C2D490(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C2D490(&System_Func_RestrictionWholeEntity__bool__TypeInfo);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__99_0__);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__99_1__);
    sub_1C2D490(&QuestRestrictionInfo___c_TypeInfo);
    byte_4C28618 = 1;
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
      _9__99_1 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RestrictionWholeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__99_1,
        v6,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__99_1__,
        0);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__99_1 = (struct System_Func_RestrictionWholeEntity__bool__o *)_9__99_1;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__99_1, (int32_t)_9__99_1, v8, v9);
    }
    v10 = (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_RestrictionWholeEntity___;
  }
  else
  {
    v11 = QuestRestrictionInfo___c_TypeInfo;
    restrictionWholeEntities = (System_Object_array *)this->fields.restrictionEntityList;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v11 = QuestRestrictionInfo___c_TypeInfo;
    }
    _9__99_1 = (System_Func_object__bool__o *)v11->static_fields->__9__99_0;
    if ( !_9__99_1 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = QuestRestrictionInfo___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v11->static_fields->__9;
      _9__99_1 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RestrictionEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__99_1,
        v12,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__99_0__,
        0);
      v13 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v13->__9__99_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__99_1;
      sub_1C2D434((CGThumbnailListItem_o *)&v13->__9__99_0, (int32_t)_9__99_1, v14, v15);
    }
    v10 = (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_RestrictionEntity___;
  }
  return BasicHelper__Any_object__51084700(restrictionWholeEntities, (System_Func_T__bool__o *)_9__99_1, v10);
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
  QuestRestrictionInfo___c__DisplayClass188_0_o *v13; // x24
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
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v28; // x0
  __int64 v29; // x2
  struct System_Threading_CancellationTokenSource_o *v30; // x9
  DataManager_o *v31; // x22
  unsigned __int64 v32; // x24
  RestrictionSlotDetailEntity_o *v33; // x23
  struct System_Int32_array *targetVals; // x9
  System_Int32_array *Individuality; // x0

  if ( (byte_4C28642 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C2D490(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__DisplayClass188_0__IsRestrictionServantIndividuality_b__0__);
    sub_1C2D490(&QuestRestrictionInfo___c__DisplayClass188_0_TypeInfo);
    byte_4C28642 = 1;
  }
  v13 = (QuestRestrictionInfo___c__DisplayClass188_0_o *)sub_1C2D6DC(QuestRestrictionInfo___c__DisplayClass188_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass188_0___ctor(v13, 0);
  if ( !v13 )
    goto LABEL_51;
  v13->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(this, pos, v16) )
    goto LABEL_49;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_51;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_51;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)this->fields.restrictionSlotDictionary;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                    v13->fields.pos,
                                    (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
                                        (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
                  sub_1C2D6F4(Instance, v15, v29);
                v33 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v31->fields._DispLog + v32);
                if ( v19 < 0 )
                {
                  if ( !v33 )
                    goto LABEL_51;
                }
                else
                {
                  if ( !v33 )
                    goto LABEL_51;
                  if ( v19 != v33->fields.id )
                    goto LABEL_47;
                }
                if ( v33->fields.type == 1 )
                {
                  targetVals = v33->fields.targetVals;
                  if ( targetVals )
                  {
                    if ( targetVals->max_length )
                    {
                      if ( !Entity )
                        goto LABEL_51;
                      Individuality = ServantEntity__getIndividuality(
                                        (ServantEntity_o *)Entity,
                                        limitCount,
                                        ServantImageLimitSealAfter,
                                        0);
                      Instance = (DataManager_o *)RestrictionSlotDetailEntity__IsIndividuality(v33, Individuality, 0);
                      if ( ((unsigned __int8)Instance & 1) != 0 )
                        goto LABEL_49;
                      LOBYTE(max_length) = 1;
                    }
                  }
                }
LABEL_47:
                LODWORD(v30) = v31->fields.m_CancellationTokenSource;
                if ( (__int64)++v32 >= (int)v30 )
                  return max_length;
              }
            }
            goto LABEL_49;
          }
        }
      }
    }
LABEL_51:
    sub_1C2D6EC(Instance, v15);
  }
  if ( isChkSupport )
    goto LABEL_49;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v24 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v24,
    (Il2CppObject *)v13,
    Method_QuestRestrictionInfo___c__DisplayClass188_0__IsRestrictionServantIndividuality_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_51;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                myServantOrNpcRestrictionEntityList,
                                (System_Predicate_T__o *)v24,
                                (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !Instance )
    goto LABEL_49;
  datalist = Instance->fields.datalist;
  v26 = (RestrictionEntity_o *)Instance;
  if ( !datalist )
    goto LABEL_51;
  max_length = datalist->max_length;
  if ( max_length )
  {
    if ( !Entity )
      goto LABEL_51;
    v28 = ServantEntity__getIndividuality((ServantEntity_o *)Entity, limitCount, ServantImageLimitSealAfter, 0);
    if ( RestrictionEntity__IsRestriction_42350360(v26, v28, 0) )
    {
      LOBYTE(max_length) = 1;
      return max_length;
    }
LABEL_49:
    LOBYTE(max_length) = 0;
  }
  return max_length;
}


bool QuestRestrictionInfo__IsRestrictionServantIndividuality_43209828(
        QuestRestrictionInfo_o *this,
        System_Int32_array *individuality,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass189_0_o *v7; // x22
  void *restrictionSlotDetailDictionary; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x2
  int v12; // w9
  void *v13; // x20
  unsigned int v14; // w21
  __int64 v15; // x8
  __int64 v16; // x9
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x20
  System_Predicate_object__o *v18; // x21
  __int64 v19; // x8

  if ( (byte_4C28643 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C2D490(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__DisplayClass189_0__IsRestrictionServantIndividuality_b__0__);
    sub_1C2D490(&QuestRestrictionInfo___c__DisplayClass189_0_TypeInfo);
    byte_4C28643 = 1;
  }
  v7 = (QuestRestrictionInfo___c__DisplayClass189_0_o *)sub_1C2D6DC(QuestRestrictionInfo___c__DisplayClass189_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass189_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_26;
  v7->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(this, pos, v10) )
    goto LABEL_24;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        v7->fields.pos,
                                        (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    v12 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v13 = restrictionSlotDetailDictionary;
    if ( v12 >= 1 )
    {
      v14 = 0;
      LOBYTE(v15) = 0;
      while ( 1 )
      {
        if ( v14 >= v12 )
          sub_1C2D6F4(restrictionSlotDetailDictionary, v9, v11);
        restrictionSlotDetailDictionary = (void *)*((_QWORD *)v13 + (int)v14 + 4);
        if ( !restrictionSlotDetailDictionary )
          break;
        if ( *((_DWORD *)restrictionSlotDetailDictionary + 8) == 1 )
        {
          v16 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
          if ( v16 )
          {
            if ( *(_QWORD *)(v16 + 24) )
            {
              restrictionSlotDetailDictionary = (void *)RestrictionSlotDetailEntity__IsIndividuality(
                                                          (RestrictionSlotDetailEntity_o *)restrictionSlotDetailDictionary,
                                                          individuality,
                                                          0);
              if ( ((unsigned __int8)restrictionSlotDetailDictionary & 1) != 0 )
                goto LABEL_24;
              LOBYTE(v15) = 1;
            }
          }
        }
        v12 = *((_DWORD *)v13 + 6);
        if ( (int)++v14 >= v12 )
          return v15 & 1;
      }
LABEL_26:
      sub_1C2D6EC(restrictionSlotDetailDictionary, v9);
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v18 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_QuestRestrictionInfo___c__DisplayClass189_0__IsRestrictionServantIndividuality_b__0__,
    0);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_26;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                      myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v18,
                                      (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !restrictionSlotDetailDictionary )
  {
LABEL_24:
    LOBYTE(v15) = 0;
    return v15 & 1;
  }
  v19 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
  if ( !v19 )
    goto LABEL_26;
  v15 = *(_QWORD *)(v19 + 24);
  if ( v15 )
    return RestrictionEntity__IsRestriction_42350360(
             (RestrictionEntity_o *)restrictionSlotDetailDictionary,
             individuality,
             0);
  return v15 & 1;
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
  return QuestRestrictionInfo__IsRestrictionSlot_43187028(this, ServantIndividuality, initPos, v14);
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsRestrictionSlot_43187028(
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
  if ( (byte_4C2861E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    byte_4C2861E = 1;
  }
  v7 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v6->fields.slotInfos;
    if ( !slotInfos )
LABEL_27:
      sub_1C2D6EC(this, svtIndividuality);
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
                                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_int____get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->fields.dialogMessageInfoDictionary )
      {
        v12 = System_Linq_Enumerable__Intersect_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this,
                (System_Collections_Generic_IEnumerable_TSource__o *)svtIndividuality,
                (const MethodInfo_30F9000 *)Method_System_Linq_Enumerable_Intersect_int___);
        this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_int_(
                                           v12,
                                           (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
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
                                           (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
        if ( (_DWORD)this == 1 )
        {
          this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                             (const MethodInfo_30D9F98 *)Method_System_Linq_Enumerable_Any_int___);
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
                                             (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)this == 2 )
          {
            this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                               (const MethodInfo_30D9F98 *)Method_System_Linq_Enumerable_Any_int___);
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
    sub_1C2D6F4(this, svtIndividuality, *(_QWORD *)&initPos);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsRestriction_43186300(
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

  if ( (byte_4C2861C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    byte_4C2861C = 1;
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
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v21 = v20[7];
    }
    v22 = *(_QWORD *)(v21 + 16);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v22 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v22);
    v23 = *(_QWORD *)(v20[7] + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C7DBA4(inited);
    ServantIndividuality = **(System_Int32_array ***)(v23 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_43186560(this, &isWhole, ServantIndividuality, rarity, lv, targetType, v17);
}


bool QuestRestrictionInfo__IsRestriction_43186560(
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
      sub_1C2D6EC(this, isWhole);
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
      return 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
LABEL_29:
        sub_1C2D6F4(this, isWhole, svtIndividuality);
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
          this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction_42350360(v18, svtIndividuality, 0);
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


bool QuestRestrictionInfo__IsRestriction_43187532(
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

  if ( (byte_4C2861D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    byte_4C2861D = 1;
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
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v26 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v26);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C7DBA4(inited);
    ServantIndividuality = **(System_Int32_array ***)(v27 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_43187812(
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
bool QuestRestrictionInfo__IsRestriction_43187812(
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

  if ( QuestRestrictionInfo__IsRestriction_43186560(
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
    return QuestRestrictionInfo__IsRestrictionSlot_43187028(this, svtIndividuality, initPos, v11);
  return 0;
}


bool QuestRestrictionInfo__IsSelectableNormalSupport(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass186_0_o *v5; // x21
  _BOOL8 IsMyServantOrNpcRestriction_43206784; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v11; // w9
  QuestRestrictionInfo_SlotInfo_o *v12; // x8
  bool v13; // zf
  Il2CppObject *v14; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v16; // x20

  if ( (byte_4C28640 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1C2D490(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__DisplayClass186_0__IsSelectableNormalSupport_b__0__);
    sub_1C2D490(&QuestRestrictionInfo___c__DisplayClass186_0_TypeInfo);
    byte_4C28640 = 1;
  }
  v5 = (QuestRestrictionInfo___c__DisplayClass186_0_o *)sub_1C2D6DC(QuestRestrictionInfo___c__DisplayClass186_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass186_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_18;
  v5->fields.pos = pos;
  IsMyServantOrNpcRestriction_43206784 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(this, pos, v8);
  if ( !IsMyServantOrNpcRestriction_43206784 )
  {
    LOBYTE(v14) = 0;
    return (char)v14;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    v16 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v16,
      (Il2CppObject *)v5,
      Method_QuestRestrictionInfo___c__DisplayClass186_0__IsSelectableNormalSupport_b__0__,
      0);
    if ( myServantOrNpcRestrictionEntityList )
    {
      v14 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v16,
              (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v14 )
        return (char)v14;
      v13 = LODWORD(v14[2].klass) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_1C2D6EC(IsMyServantOrNpcRestriction_43206784, v7);
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v11 = v5->fields.pos - 1;
  if ( (unsigned int)v11 >= LODWORD(slotInfos->max_length) )
    sub_1C2D6F4(IsMyServantOrNpcRestriction_43206784, v7, v9);
  v12 = slotInfos->m_Items[v11];
  if ( !v12 )
    goto LABEL_18;
  v13 = v12->fields.slotType == 4;
LABEL_14:
  LOBYTE(v14) = v13;
  return (char)v14;
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
  void *IsMyServantOrNpcRestriction_43206784; // x0
  int32_t *p_myServantNumMax; // x8
  int32_t v10; // w8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x9
  __int64 v12; // x2
  int v14; // w8
  int v15; // w9
  int v16; // w8
  int v17; // w10
  int v18; // w11
  bool v19; // zf
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  int max_length; // w9
  int v23; // w10
  int v24; // w9
  int32_t v25; // w11
  int v26; // w12

  if ( (byte_4C2863B & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    byte_4C2863B = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  IsMyServantOrNpcRestriction_43206784 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    IsMyServantOrNpcRestriction_43206784 = BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    p_myServantNumMax = (int32_t *)(*((_QWORD *)IsMyServantOrNpcRestriction_43206784 + 23) + 172LL);
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
  IsMyServantOrNpcRestriction_43206784 = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(
                                                   this,
                                                   pos,
                                                   *(const MethodInfo **)&pos);
  if ( ((unsigned __int8)IsMyServantOrNpcRestriction_43206784 & 1) != 0 )
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
        v23 = 0;
        v24 = -max_length;
        do
        {
          if ( !(v24 + v23) )
LABEL_43:
            sub_1C2D6F4(IsMyServantOrNpcRestriction_43206784, *(_QWORD *)&svtId, v12);
          v25 = targetVals->m_Items[v23];
          if ( v25 == svtId )
            break;
          v26 = v24 + v23++;
        }
        while ( v26 != -1 );
        v19 = v25 == svtId;
        return !v19;
      }
      return 1;
    }
LABEL_44:
    sub_1C2D6EC(IsMyServantOrNpcRestriction_43206784, *(_QWORD *)&svtId);
  }
  IsMyServantOrNpcRestriction_43206784 = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                           this,
                                           *(const MethodInfo **)&svtId);
  if ( !IsMyServantOrNpcRestriction_43206784 )
    goto LABEL_44;
  v14 = *((_DWORD *)IsMyServantOrNpcRestriction_43206784 + 6);
  if ( v14 < 1 )
    return 1;
  v15 = 0;
  v16 = -v14;
  do
  {
    if ( !(v16 + v15) )
      goto LABEL_43;
    v17 = *((_DWORD *)IsMyServantOrNpcRestriction_43206784 + v15 + 8);
    if ( v17 == svtId )
      break;
    v18 = v16 + v15++;
  }
  while ( v18 != -1 );
  v19 = v17 == svtId;
  return !v19;
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
  if ( (byte_4C2864F & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C2864F = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( slotInfos )
  {
    if ( (unsigned int)(initPos - 1) >= LODWORD(slotInfos->max_length) )
      sub_1C2D6F4(this, *(_QWORD *)&pos, *(_QWORD *)&initPos);
    v8 = slotInfos->m_Items[initPos - 1];
    if ( !v8 )
      sub_1C2D6EC(this, *(_QWORD *)&pos);
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
  __int64 v11; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x22
  int max_length; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  unsigned int v15; // w23
  bool v16; // w21
  QuestRestrictionInfo_SlotInfo_o *v17; // x29
  int32_t v18; // w20
  Il2CppObject *Item; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x21

  if ( (byte_4C28658 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28658 = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       svtId,
                                       (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_33;
    Instance = ServantEntity__getIndividuality((ServantEntity_o *)Instance, limitCount, dispLimitCount, 0);
    slotInfos = this->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_33;
    max_length = slotInfos->max_length;
    if ( max_length >= 1 )
    {
      v14 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      v15 = 0;
      v16 = 0;
      while ( 1 )
      {
        if ( v15 >= max_length )
          sub_1C2D6F4(Instance, v10, v11);
        v17 = slotInfos->m_Items[v15];
        if ( !v17 )
          break;
        if ( v17->fields.slotType == 2 )
        {
          Instance = (System_Int32_array *)v17->fields.individualityList;
          if ( !Instance )
            break;
          v18 = 0;
          while ( v18 < SLODWORD(Instance->max_length) )
          {
            Instance = (System_Int32_array *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)Instance,
                                               v18,
                                               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_int____get_Item__);
            if ( !Instance )
              goto LABEL_33;
            if ( Instance->max_length )
            {
              Instance = (System_Int32_array *)v17->fields.individualityList;
              if ( !Instance )
                goto LABEL_33;
              Item = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Instance,
                       v18,
                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_int____get_Item__);
              v20 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)Item,
                      v14,
                      (const MethodInfo_30F9000 *)Method_System_Linq_Enumerable_Intersect_int___);
              Instance = System_Linq_Enumerable__ToArray_int_(
                           v20,
                           (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
              if ( !v17->fields.rangeTypeList )
                goto LABEL_33;
              v21 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              if ( System_Collections_Generic_List_Int32Enum___get_Item(
                     (System_Collections_Generic_List_T__o *)v17->fields.rangeTypeList,
                     v18,
                     (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
              {
                if ( System_Linq_Enumerable__Any_int_(
                       v21,
                       (const MethodInfo_30D9F98 *)Method_System_Linq_Enumerable_Any_int___) )
                {
                  return 0;
                }
              }
              else
              {
                Instance = (System_Int32_array *)v17->fields.rangeTypeList;
                if ( !Instance )
                  goto LABEL_33;
                if ( System_Collections_Generic_List_Int32Enum___get_Item(
                       (System_Collections_Generic_List_T__o *)Instance,
                       v18,
                       (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 2
                  && !System_Linq_Enumerable__Any_int_(
                        v21,
                        (const MethodInfo_30D9F98 *)Method_System_Linq_Enumerable_Any_int___) )
                {
                  return 0;
                }
              }
              v16 = 1;
            }
            Instance = (System_Int32_array *)v17->fields.individualityList;
            ++v18;
            if ( !Instance )
              goto LABEL_33;
          }
        }
        max_length = slotInfos->max_length;
        if ( (int)++v15 >= max_length )
          return v16;
      }
LABEL_33:
      sub_1C2D6EC(Instance, v10);
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
  __int64 v5; // x2
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  unsigned int v9; // w21
  RestrictionWholeEntity_o *v10; // x8
  struct System_Int32_array *targetVals; // x23
  il2cpp_array_size_t v12; // x8
  unsigned __int64 v13; // x24
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C28657 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_4C28657 = 1;
  }
  entity = 0;
  if ( !this->fields.restrictionBaseEntity )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_23:
    sub_1C2D6EC(Master_object, v4);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return 1;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
LABEL_24:
      sub_1C2D6F4(Master_object, v4, v5);
    v10 = restrictionWholeEntities->m_Items[v9];
    if ( !v10 )
      goto LABEL_23;
    if ( v10->fields.type == 9 )
    {
      targetVals = v10->fields.targetVals;
      if ( !targetVals )
        goto LABEL_23;
      v12 = targetVals->max_length;
      if ( (int)v12 >= 1 )
        break;
    }
LABEL_19:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v9 >= max_length )
      return 1;
  }
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)v12 )
      goto LABEL_24;
    if ( !v8 )
      goto LABEL_23;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      v8,
                                      &entity,
                                      targetVals->m_Items[v13],
                                      (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      return 0;
    LODWORD(v12) = targetVals->max_length;
    if ( (__int64)++v13 >= (int)v12 )
      goto LABEL_19;
  }
}


bool QuestRestrictionInfo__IsUniqueIndividuality_43190604(
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
  __int64 v17; // x2
  struct System_Int32_array *uniqueIndividualitys; // x9
  il2cpp_array_size_t max_length; // x8
  BalanceConfig_c **v20; // x20
  const MethodInfo_338A340 **v21; // x26
  const MethodInfo_30EB900 **v22; // x24
  unsigned __int64 v23; // x10
  int32_t v24; // w27
  unsigned __int64 i; // x19
  struct FollowerInfo_array *deckNpcInfoList; // x8
  FollowerInfo_o *v27; // x8
  struct FollowerInfo_array *v28; // x8
  FollowerInfo_o *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *NpcServantIndividuality; // x0
  struct FollowerInfo_array *v31; // x8
  int32_t v32; // w21
  const MethodInfo_30EB900 **v33; // x27
  Il2CppObject *v34; // x24
  BalanceConfig_c **v35; // x23
  Il2CppObject *v36; // x20
  const MethodInfo_338A340 **v37; // x22
  DataManager_o *v38; // x28
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x26
  struct System_Byte_array *masterDataBytes; // x29
  int32_t v41; // w0
  Il2CppObject *v42; // x0
  int32_t saveNameList; // w29
  int32_t m_CancellationTokenSource_high; // w26
  ServantEntity_o *v45; // x28
  struct System_Int32_array *deckSvtIdList; // x8
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x9
  int32_t v50; // [xsp+8h] [xbp-A8h]
  int32_t v51; // [xsp+Ch] [xbp-A4h]
  ServantEntity_o *v52; // [xsp+10h] [xbp-A0h]
  struct System_Int32_array *v53; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+20h] [xbp-90h]
  unsigned __int64 v55; // [xsp+28h] [xbp-88h]
  QuestRestrictionInfo_o *v56; // [xsp+30h] [xbp-80h]
  Il2CppObject *v57; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v58; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4C28625 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28625 = 1;
  }
  v58 = 0;
  entity = 0;
  v57 = 0;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_71;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo
    || (Instance = (DataManager_o *)FollowerInfo__get_IsNpc(npcFollowerInfo, 0), ((unsigned __int8)Instance & 1) == 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_82;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
                                (const MethodInfo_338A340 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !Master_object )
      goto LABEL_82;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &v58,
           npcFollowerInfo->fields.npcFollowerSvtId,
           (const MethodInfo_338A340 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
    {
      Instance = (DataManager_o *)v58;
      if ( !v58 )
        goto LABEL_82;
      if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v58, 0) )
      {
        Instance = (DataManager_o *)v58;
        if ( !v58 )
          goto LABEL_82;
        OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                   (NpcServantFollowerEntity_o *)v58,
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
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      svtId,
                                      (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0) )
  {
LABEL_82:
    sub_1C2D6EC(Instance, v14);
  }
  max_length = uniqueIndividualitys->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_71:
    LOBYTE(Instance) = 0;
    return (char)Instance;
  }
  v52 = (ServantEntity_o *)Instance;
  v50 = dispLimitCount;
  v51 = limitCount;
  v20 = &BalanceConfig_TypeInfo;
  v21 = (const MethodInfo_338A340 **)&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__;
  v22 = (const MethodInfo_30EB900 **)&Method_System_Linq_Enumerable_Contains_int___;
  v23 = 0;
  v53 = this->fields.uniqueIndividualitys;
  v56 = this;
  while ( 1 )
  {
    if ( v23 >= (unsigned int)max_length )
LABEL_83:
      sub_1C2D6F4(Instance, v14, v17);
    v24 = uniqueIndividualitys->m_Items[v23];
    v55 = v23;
    if ( !source )
      break;
    if ( System_Linq_Enumerable__Contains_int_(source, v24, *v22) )
      goto LABEL_29;
LABEL_69:
    uniqueIndividualitys = v53;
    Instance = 0;
    LODWORD(max_length) = v53->max_length;
    v23 = v55 + 1;
    if ( (__int64)(v55 + 1) >= (int)max_length )
      return (char)Instance;
  }
  Instance = (DataManager_o *)v52;
  if ( !v52 )
    goto LABEL_82;
  if ( !ServantEntity__IsIndividuality(v52, v51, v50, v24, 0) )
    goto LABEL_69;
LABEL_29:
  for ( i = 0; ; ++i )
  {
    Instance = (DataManager_o *)*v20;
    if ( !(*v20)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (DataManager_o *)*v20;
    }
    if ( (__int64)i >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 172LL) )
      goto LABEL_69;
    deckNpcInfoList = this->fields.deckNpcInfoList;
    if ( !deckNpcInfoList )
      goto LABEL_82;
    if ( i >= LODWORD(deckNpcInfoList->max_length) )
      goto LABEL_83;
    v27 = deckNpcInfoList->m_Items[i];
    if ( v27 )
    {
      if ( !v12 )
        goto LABEL_82;
      Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                                    &entity,
                                    v27->fields.npcFollowerSvtId,
                                    *v21);
      v28 = this->fields.deckNpcInfoList;
      if ( !v28 )
        goto LABEL_82;
      if ( i >= LODWORD(v28->max_length) )
        goto LABEL_83;
      v29 = v28->m_Items[i];
      if ( !v29 )
        goto LABEL_82;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)FollowerInfo__GetNpcServantIndividuality(
                                                                                         v29,
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
                                      &v57,
                                      v29->fields.npcFollowerSvtId,
                                      (const MethodInfo_338A340 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_48;
        Instance = (DataManager_o *)v57;
        if ( !v57 )
          goto LABEL_82;
        Instance = (DataManager_o *)NpcServantFollowerEntity__IsOverwriteIndividuality(
                                      (NpcServantFollowerEntity_o *)v57,
                                      0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)v57;
          if ( !v57 )
            goto LABEL_82;
          NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantFollowerEntity__GetOverwriteIndividuality(
                                                                                           (NpcServantFollowerEntity_o *)v57,
                                                                                           0);
        }
        else
        {
LABEL_48:
          v31 = this->fields.deckNpcInfoList;
          if ( !v31 )
            goto LABEL_82;
          if ( i >= LODWORD(v31->max_length) )
            goto LABEL_83;
          Instance = (DataManager_o *)v31->m_Items[i];
          if ( !Instance )
            goto LABEL_82;
          v32 = v24;
          v33 = v22;
          v34 = v12;
          v35 = v20;
          v36 = Master_object;
          v37 = v21;
          Instance = (DataManager_o *)FollowerInfo__getServantLeaderInfo((FollowerInfo_o *)Instance, 0, 0, 0);
          if ( !Instance )
            goto LABEL_82;
          v38 = Instance;
          lookup = Instance->fields.lookup;
          masterDataBytes = Instance->fields.masterDataBytes;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v60.fields.currentCryptoKey = lookup;
          *(_QWORD *)&v60.fields.fakeValue = masterDataBytes;
          v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v60, 0);
          v42 = DataMasterBase_object__object__int___GetEntity(
                  v16,
                  v41,
                  (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          saveNameList = (int32_t)v38->fields.saveNameList;
          m_CancellationTokenSource_high = HIDWORD(v38[1].fields.m_CancellationTokenSource);
          v45 = (ServantEntity_o *)v42;
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          Instance = (DataManager_o *)ImageLimitCount__ConvertDispLimitCountForClient(m_CancellationTokenSource_high, 0);
          if ( !v45 )
            goto LABEL_82;
          NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                           v45,
                                                                                           saveNameList,
                                                                                           (int32_t)Instance,
                                                                                           0);
          v21 = v37;
          Master_object = v36;
          v20 = v35;
          v12 = v34;
          v22 = v33;
          v24 = v32;
          this = v56;
        }
      }
      Instance = (DataManager_o *)System_Linq_Enumerable__Contains_int_(NpcServantIndividuality, v24, *v22);
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
                                    (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
             v24,
             0) )
      {
        break;
      }
    }
  }
  LOBYTE(Instance) = 1;
  return (char)Instance;
}


bool QuestRestrictionInfo__IsUniqueIndividuality_43192088(
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
  __int64 v21; // x2
  struct System_Int32_array *uniqueIndividualitys; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v24; // x26
  int32_t v25; // w29
  int32_t i; // w22
  FollowerInfo_o *v27; // x23
  PartyOrganizationListViewItem_o *v28; // x28
  System_Collections_Generic_IEnumerable_TSource__o *NpcServantIndividuality; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // kr00_16
  int32_t v31; // w0
  Il2CppObject *v32; // x23
  int32_t svtLimitCount; // w24
  _DWORD *v34; // x23
  __int64 v35; // x24
  __int64 v36; // x28
  int32_t v37; // w0
  Il2CppObject *v38; // x0
  int32_t v39; // w28
  int32_t v40; // w24
  ServantEntity_o *v41; // x23
  int32_t v43; // [xsp+4h] [xbp-ACh]
  ServantEntity_o *v44; // [xsp+8h] [xbp-A8h]
  struct System_Int32_array *v45; // [xsp+10h] [xbp-A0h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // [xsp+28h] [xbp-88h]
  Il2CppObject *v49; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *v50; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v51; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4C28626 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28626 = 1;
  }
  v51 = 0;
  entity = 0;
  v49 = 0;
  v50 = 0;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo || !FollowerInfo__get_IsNpc(npcFollowerInfo, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_75;
    dispLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                       (ServantLimitImageMaster_o *)Instance,
                       svtId,
                       dispLimitCount,
                       0);
    goto LABEL_16;
  }
  Instance = v48;
  if ( !v48 )
    goto LABEL_75;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          v48,
          &entity,
          npcFollowerInfo->fields.npcFollowerSvtId,
          (const MethodInfo_338A340 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    Instance = Master_object;
    if ( !Master_object )
      goto LABEL_75;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           Master_object,
           &v51,
           npcFollowerInfo->fields.npcFollowerSvtId,
           (const MethodInfo_338A340 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
    {
      Instance = v51;
      if ( !v51 )
        goto LABEL_75;
      if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v51, 0) )
      {
        Instance = v51;
        if ( !v51 )
          goto LABEL_75;
        OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                   (NpcServantFollowerEntity_o *)v51,
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
  Instance = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0) )
  {
LABEL_75:
    sub_1C2D6EC(Instance, v17);
  }
  max_length = uniqueIndividualitys->max_length;
  if ( (int)max_length >= 1 )
  {
    v44 = (ServantEntity_o *)Instance;
    v43 = limitCount;
    v24 = 0;
    v45 = this->fields.uniqueIndividualitys;
    do
    {
      if ( v24 >= (unsigned int)max_length )
        sub_1C2D6F4(Instance, v17, v21);
      v25 = uniqueIndividualitys->m_Items[v24];
      if ( source )
      {
        Instance = (void *)System_Linq_Enumerable__Contains_int_(
                             source,
                             v25,
                             (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          goto LABEL_29;
      }
      else
      {
        Instance = v44;
        if ( !v44 )
          goto LABEL_75;
        Instance = (void *)ServantEntity__IsIndividuality(v44, v43, dispLimitCount, v25, 0);
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
              v27 = (FollowerInfo_o *)*((_QWORD *)Instance + 16);
              v28 = (PartyOrganizationListViewItem_o *)Instance;
              if ( v27 && FollowerInfo__get_IsNpc(*((FollowerInfo_o **)Instance + 16), 0) )
              {
                Instance = v48;
                if ( !v48 )
                  goto LABEL_75;
                if ( DataMasterBase_object__object__long___TryGetEntity(
                       v48,
                       &entity,
                       v27->fields.npcFollowerSvtId,
                       (const MethodInfo_338A340 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
                {
                  NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)FollowerInfo__GetNpcServantIndividuality(
                                                                                                   v27,
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
                          &v50,
                          v27->fields.npcFollowerSvtId,
                          (const MethodInfo_338A340 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
                    goto LABEL_54;
                  Instance = v50;
                  if ( !v50 )
                    goto LABEL_75;
                  if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v50, 0) )
                  {
                    Instance = v50;
                    if ( !v50 )
                      goto LABEL_75;
                    NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantFollowerEntity__GetOverwriteIndividuality(
                                                                                                     (NpcServantFollowerEntity_o *)v50,
                                                                                                     0);
                  }
                  else
                  {
LABEL_54:
                    Instance = FollowerInfo__getServantLeaderInfo(v27, 0, 0, 0);
                    if ( !Instance )
                      goto LABEL_75;
                    v34 = Instance;
                    v36 = *((_QWORD *)Instance + 6);
                    v35 = *((_QWORD *)Instance + 7);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v53.fields.currentCryptoKey = v36;
                    *(_QWORD *)&v53.fields.fakeValue = v35;
                    v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v53, 0);
                    v38 = DataMasterBase_object__object__int___GetEntity(
                            v20,
                            v37,
                            (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                    v39 = v34[16];
                    v40 = v34[45];
                    v41 = (ServantEntity_o *)v38;
                    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                    Instance = (void *)ImageLimitCount__ConvertDispLimitCountForClient(v40, 0);
                    if ( !v41 )
                      goto LABEL_75;
                    NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                                     v41,
                                                                                                     v39,
                                                                                                     (int32_t)Instance,
                                                                                                     0);
                  }
                }
                if ( System_Linq_Enumerable__Contains_int_(
                       NpcServantIndividuality,
                       v25,
                       (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___) )
                {
                  return 1;
                }
              }
              else
              {
                v30 = PartyOrganizationListViewItem__get_SvtId(v28, 0);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v30, 0);
                if ( DataMasterBase_object__object__int___TryGetEntity(
                       v20,
                       &v49,
                       v31,
                       (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
                {
                  v32 = v49;
                  svtLimitCount = v28->fields.svtLimitCount;
                  Instance = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(v28, 0);
                  if ( !v32 )
                    goto LABEL_75;
                  if ( ServantEntity__IsIndividuality((ServantEntity_o *)v32, svtLimitCount, (int32_t)Instance, v25, 0) )
                    return 1;
                }
              }
            }
          }
        }
      }
      uniqueIndividualitys = v45;
      ++v24;
      LODWORD(max_length) = v45->max_length;
    }
    while ( (__int64)v24 < (int)max_length );
  }
  return 0;
}


bool QuestRestrictionInfo__IsUniqueServant(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsUniqueServant_43190076(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  bool isUniqueServant; // w8
  int32_t v6; // w22
  BalanceConfig_c *v7; // x0
  struct System_Int32_array *deckSvtIdList; // x9
  int32_t v9; // w9

  if ( (byte_4C28623 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C28623 = 1;
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
            sub_1C2D6EC(v7, *(_QWORD *)&svtId);
          if ( (unsigned int)v6 >= LODWORD(deckSvtIdList->max_length) )
            sub_1C2D6F4(v7, *(_QWORD *)&svtId, method);
          v9 = deckSvtIdList->m_Items[v6++];
        }
        while ( v9 != svtId );
      }
    }
  }
  return isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool QuestRestrictionInfo__IsUniqueServant_43190276(
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

  if ( (byte_4C28624 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C28624 = 1;
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
          sub_1C2D6EC(Member, *(_QWORD *)&svtId);
        v15 = PartyOrganizationListViewItem__get_SvtId(Member, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v15, 0) == svtId )
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

  if ( (byte_4C2865B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C2865B = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_11:
    sub_1C2D6EC(Master_object, v4);
  return QuestPhaseEntity__IsWaveSetupSwitchParty(entity, 0);
}


void QuestRestrictionInfo__ResetDeckInfo(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int32_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct FollowerInfo_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1

  if ( (byte_4C28612 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&FollowerInfo___TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    byte_4C28612 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.deckSvtIdList = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.deckSvtIdList, (int32_t)v4, v5, v6);
  v7 = (struct FollowerInfo_array *)sub_1C2D538(
                                      FollowerInfo___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
  this->fields.deckNpcInfoList = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.deckNpcInfoList, (int32_t)v7, v8, v9);
  QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, v10);
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
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  __int64 v11; // x28
  __int64 NpcFollowerServantId; // x0
  struct System_Int32_array *deckSvtIdList; // x8
  struct FollowerInfo_array *deckNpcInfoList; // x8
  unsigned __int64 max_length_low; // x9
  struct FollowerInfo_array *v16; // x8
  unsigned int *v17; // x24
  const MethodInfo *v18; // x3
  __int64 v19; // x23
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v21; // x23
  struct System_Int32_array *v22; // x29
  __int64 v23; // x24
  __int64 v24; // x25
  struct System_Int32_array *deckLimitCountList; // x29
  __int64 v26; // x24
  __int64 v27; // x25
  struct System_Int32_array *deckDispLimitCountList; // x24
  __int64 v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4C2860F & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2860F = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtIdList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v6 = 0;
    v7 = 8;
    v11 = (unsigned int)UserDeckEntity__GetFollowerIndex(userDeckEntity, 0) - 1LL;
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
          sub_1C2D434((CGThumbnailListItem_o *)((char *)deckNpcInfoList + v7 * 4), 0, v9, v10);
        }
      }
      if ( v11 != v6 )
      {
        v16 = this->fields.deckNpcInfoList;
        if ( v16 )
        {
          if ( (__int64)v6 < SLODWORD(v16->max_length) )
          {
            NpcFollowerServantId = UserDeckEntity__GetNpcFollowerServantId(userDeckEntity, v6, 0);
            if ( NpcFollowerServantId >= 1 )
            {
              if ( !Master_object )
                goto LABEL_44;
              NpcFollowerServantId = (__int64)NpcFollowerMaster__GetEntity_42187164(
                                                (NpcFollowerMaster_o *)Master_object,
                                                this->fields.questId,
                                                this->fields.questPhase,
                                                NpcFollowerServantId,
                                                0);
              if ( !NpcFollowerServantId )
                goto LABEL_44;
              v17 = (unsigned int *)this->fields.deckNpcInfoList;
              NpcFollowerServantId = (__int64)NpcFollowerMaster__GetFollower(
                                                (NpcFollowerMaster_o *)Master_object,
                                                this->fields.questId,
                                                this->fields.questPhase,
                                                *(_QWORD *)(NpcFollowerServantId + 16),
                                                0);
              if ( !v17 )
                goto LABEL_44;
              v19 = NpcFollowerServantId;
              if ( NpcFollowerServantId )
              {
                NpcFollowerServantId = sub_1C2D5CC(NpcFollowerServantId, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
                if ( !NpcFollowerServantId )
                {
                  v29 = sub_1C2D710(0);
                  sub_1C2D5B8(v29, 0);
                }
              }
              if ( v6 >= v17[6] )
LABEL_43:
                sub_1C2D6F4(NpcFollowerServantId, v8, v9);
              *(_QWORD *)&v17[2 * v6 + 8] = v19;
              sub_1C2D434((CGThumbnailListItem_o *)&v17[v7], v19, v9, v18);
            }
          }
        }
        UserServant = UserDeckEntity__GetUserServant(userDeckEntity, v6, 0);
        if ( UserServant )
        {
          v21 = UserServant;
          v22 = this->fields.deckSvtIdList;
          v24 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v23 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v30.fields.currentCryptoKey = v24;
          *(_QWORD *)&v30.fields.fakeValue = v23;
          NpcFollowerServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v30, 0);
          if ( !v22 )
LABEL_44:
            sub_1C2D6EC(NpcFollowerServantId, v8);
          if ( v6 >= LODWORD(v22->max_length) )
            goto LABEL_43;
          v22->m_Items[v6] = NpcFollowerServantId;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v27 = *(_QWORD *)&v21->fields.limitCount.fields.currentCryptoKey;
            v26 = *(_QWORD *)&v21->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v31.fields.currentCryptoKey = v27;
            *(_QWORD *)&v31.fields.fakeValue = v26;
            NpcFollowerServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v31, 0);
            if ( v6 >= LODWORD(deckLimitCountList->max_length) )
              goto LABEL_43;
            deckLimitCountList->m_Items[v6] = NpcFollowerServantId;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            NpcFollowerServantId = UserServantEntity__getDispLimitCount(v21, 0, 0);
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


void QuestRestrictionInfo__SetDeckInfo_43179292(
        QuestRestrictionInfo_o *this,
        UserEventDeckEntity_o *eventDeckEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *fixed; // x0
  System_Collections_Generic_List_int__o *v6; // x21
  unsigned __int64 v7; // x23
  __int64 v8; // x27
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x22
  __int64 Follower; // x0
  struct System_Int32_array *deckSvtIdList; // x8
  struct FollowerInfo_array *deckNpcInfoList; // x8
  const MethodInfo *v15; // x3
  struct FollowerInfo_array *v16; // x8
  struct FollowerInfo_array *v17; // x8
  int64_t NpcFollowerServantId; // x0
  int64_t v19; // x3
  NpcFollowerEntity_o *Entity_42187164; // x0
  unsigned int *v21; // x25
  const MethodInfo *v22; // x3
  __int64 v23; // x24
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v25; // x24
  struct System_Int32_array *v26; // x29
  __int64 v27; // x25
  __int64 v28; // x26
  struct System_Int32_array *deckLimitCountList; // x29
  __int64 v30; // x25
  __int64 v31; // x26
  struct System_Int32_array *deckDispLimitCountList; // x25
  __int64 v33; // x0
  NpcFollowerMaster_o *Master_object; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4C28610 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C28610 = 1;
  }
  fixed = QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, (const MethodInfo *)eventDeckEntity);
  if ( eventDeckEntity && this->fields.deckSvtIdList )
  {
    v6 = fixed;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v7 = 0;
    v8 = 8;
    v11 = (unsigned int)UserEventDeckEntity__GetFollowerIndex(eventDeckEntity, 0) - 1LL;
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
                     (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Follower & 1) == 0 )
        {
          v16 = this->fields.deckNpcInfoList;
          if ( !v16 )
            goto LABEL_48;
          if ( v7 >= LODWORD(v16->max_length) )
            goto LABEL_49;
          v16->m_Items[v7] = 0;
          sub_1C2D434((CGThumbnailListItem_o *)((char *)v16 + v8 * 4), 0, v10, v15);
        }
      }
      if ( v11 != v7 )
      {
        v17 = this->fields.deckNpcInfoList;
        if ( v17 && (__int64)v7 < SLODWORD(v17->max_length) )
        {
          if ( !v6 )
            goto LABEL_48;
          if ( !System_Collections_Generic_List_int___Contains(
                  v6,
                  v7,
                  (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            NpcFollowerServantId = UserEventDeckEntity__GetNpcFollowerServantId(eventDeckEntity, v7, 0);
            if ( NpcFollowerServantId >= 1 )
            {
              v19 = NpcFollowerServantId;
              Follower = (__int64)Master_object;
              if ( !Master_object )
                goto LABEL_48;
              Entity_42187164 = NpcFollowerMaster__GetEntity_42187164(
                                  Master_object,
                                  this->fields.questId,
                                  this->fields.questPhase,
                                  v19,
                                  0);
              if ( Entity_42187164 )
              {
                v21 = (unsigned int *)this->fields.deckNpcInfoList;
                Follower = (__int64)NpcFollowerMaster__GetFollower(
                                      Master_object,
                                      this->fields.questId,
                                      this->fields.questPhase,
                                      Entity_42187164->fields.id,
                                      0);
                if ( !v21 )
                  goto LABEL_48;
                v23 = Follower;
                if ( Follower )
                {
                  Follower = sub_1C2D5CC(Follower, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
                  if ( !Follower )
                  {
                    v33 = sub_1C2D710(0);
                    sub_1C2D5B8(v33, 0);
                  }
                }
                if ( v7 >= v21[6] )
                  goto LABEL_49;
                *(_QWORD *)&v21[2 * v7 + 8] = v23;
                sub_1C2D434((CGThumbnailListItem_o *)&v21[v8], v23, v10, v22);
              }
            }
          }
        }
        UserServant = UserEventDeckEntity__GetUserServant(eventDeckEntity, v7, 0);
        if ( UserServant )
        {
          v25 = UserServant;
          v26 = this->fields.deckSvtIdList;
          v28 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v27 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v35.fields.currentCryptoKey = v28;
          *(_QWORD *)&v35.fields.fakeValue = v27;
          Follower = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v35, 0);
          if ( !v26 )
LABEL_48:
            sub_1C2D6EC(Follower, v9);
          if ( v7 >= LODWORD(v26->max_length) )
LABEL_49:
            sub_1C2D6F4(Follower, v9, v10);
          v26->m_Items[v7] = Follower;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v31 = *(_QWORD *)&v25->fields.limitCount.fields.currentCryptoKey;
            v30 = *(_QWORD *)&v25->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v36.fields.currentCryptoKey = v31;
            *(_QWORD *)&v36.fields.fakeValue = v30;
            Follower = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v36, 0);
            if ( v7 >= LODWORD(deckLimitCountList->max_length) )
              goto LABEL_49;
            deckLimitCountList->m_Items[v7] = Follower;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            Follower = UserServantEntity__getDispLimitCount(v25, 0, 0);
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


// local variable allocation has failed, the output may be wrong!
void QuestRestrictionInfo__SetDeckInfo_43180644(
        QuestRestrictionInfo_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  unsigned __int64 v7; // x21
  unsigned __int64 v8; // x27
  __int64 i; // x28
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_array *deckNpcInfoList; // x8
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *deckSvtIdList; // x8
  struct System_Int32_array *v14; // x29
  PartyOrganizationListViewItem_o *v15; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x23
  struct FollowerInfo_array *v19; // x8
  FollowerInfo_o *followerInfo; // x0
  unsigned int *v21; // x23
  struct FollowerInfo_o *v22; // x22
  __int64 v23; // x0

  if ( (byte_4C28611 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C28611 = 1;
  }
  if ( this->fields.deckSvtIdList )
  {
    v7 = 0;
    v8 = (unsigned int)num;
    for ( i = 8; ; i += 2 )
    {
      Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v7 >= SHIDWORD(Member->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
        break;
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList )
      {
        max_length_low = LODWORD(deckNpcInfoList->max_length);
        if ( (__int64)v7 < (int)max_length_low )
        {
          if ( v7 >= max_length_low )
            goto LABEL_40;
          deckNpcInfoList->m_Items[v7] = 0;
          sub_1C2D434((CGThumbnailListItem_o *)((char *)deckNpcInfoList + i * 4), 0, num, method);
        }
      }
      if ( v8 == v7 )
      {
        deckSvtIdList = this->fields.deckSvtIdList;
        if ( !deckSvtIdList )
          goto LABEL_39;
        if ( LODWORD(deckSvtIdList->max_length) <= v8 )
          goto LABEL_40;
        deckSvtIdList->m_Items[v8] = 0;
      }
      else
      {
        if ( !partyItem )
          goto LABEL_39;
        Member = PartyListViewItem__GetMember(partyItem, v7, 0);
        if ( !Member )
          goto LABEL_39;
        v14 = this->fields.deckSvtIdList;
        v15 = Member;
        SvtId = PartyOrganizationListViewItem__get_SvtId(Member, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Member = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                      SvtId,
                                                      0);
        if ( !v14 )
LABEL_39:
          sub_1C2D6EC(Member, partyItem);
        if ( v7 >= LODWORD(v14->max_length) )
          goto LABEL_40;
        v14->m_Items[v7] = (int)Member;
        deckLimitCountList = this->fields.deckLimitCountList;
        if ( deckLimitCountList )
        {
          if ( v7 >= LODWORD(deckLimitCountList->max_length) )
            goto LABEL_40;
          deckLimitCountList->m_Items[v7] = v15->fields.svtLimitCount;
        }
        deckDispLimitCountList = this->fields.deckDispLimitCountList;
        if ( deckDispLimitCountList )
        {
          Member = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v15, 0);
          if ( v7 >= LODWORD(deckDispLimitCountList->max_length) )
            goto LABEL_40;
          deckDispLimitCountList->m_Items[v7] = (int)Member;
        }
        v19 = this->fields.deckNpcInfoList;
        if ( v19 )
        {
          if ( (__int64)v7 < SLODWORD(v19->max_length) )
          {
            followerInfo = v15->fields.followerInfo;
            if ( followerInfo )
            {
              Member = (PartyOrganizationListViewItem_o *)FollowerInfo__get_IsNpc(followerInfo, 0);
              if ( ((unsigned __int8)Member & 1) != 0 )
              {
                v21 = (unsigned int *)this->fields.deckNpcInfoList;
                if ( !v21 )
                  goto LABEL_39;
                v22 = v15->fields.followerInfo;
                if ( v22 )
                {
                  Member = (PartyOrganizationListViewItem_o *)sub_1C2D5CC(v22, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
                  if ( !Member )
                  {
                    v23 = sub_1C2D710(0);
                    sub_1C2D5B8(v23, 0);
                  }
                }
                if ( v7 >= v21[6] )
LABEL_40:
                  sub_1C2D6F4(Member, partyItem, *(_QWORD *)&num);
                *(_QWORD *)&v21[2 * v7 + 8] = v22;
                sub_1C2D434((CGThumbnailListItem_o *)&v21[i], (int32_t)v22, num, method);
              }
            }
          }
        }
      }
      ++v7;
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
  __int64 v6; // x2
  int max_length; // w8
  FollowerInfo_array *v8; // x21
  unsigned int v9; // w23
  FollowerInfo_o *v10; // x22
  struct FollowerInfo_array *deckNpcInfoList; // x25
  int32_t npcInitIdx; // w26
  const MethodInfo *v13; // x3
  char *v14; // x0
  int32_t v15; // w9
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x10
  __int64 size; // x11
  __int64 v20; // x0

  if ( (byte_4C28613 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C28613 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.deckNpcInfoList && this->fields.isNpcMultipleBattle && !this->fields.isNpcEditablePos )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (FollowerInfo_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object
      || (Master_object = NpcFollowerMaster__GetQuestFollowerList(
                            (NpcFollowerMaster_o *)Master_object,
                            this->fields.questId,
                            this->fields.questPhase,
                            0)) == 0 )
    {
LABEL_25:
      sub_1C2D6EC(Master_object, v5);
    }
    max_length = Master_object->max_length;
    v8 = Master_object;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( v9 < max_length )
      {
        v10 = v8->m_Items[v9];
        if ( !v10 )
          goto LABEL_25;
        if ( v10->fields.isFixedNpc )
        {
          deckNpcInfoList = this->fields.deckNpcInfoList;
          if ( !deckNpcInfoList )
            goto LABEL_25;
          npcInitIdx = v10->fields.npcInitIdx;
          Master_object = (FollowerInfo_array *)sub_1C2D5CC(v10, deckNpcInfoList->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v20 = sub_1C2D710(0);
            sub_1C2D5B8(v20, 0);
          }
          if ( (unsigned int)(npcInitIdx - 1) >= LODWORD(deckNpcInfoList->max_length) )
            break;
          v14 = (char *)deckNpcInfoList + 8 * npcInitIdx - 8;
          *((_QWORD *)v14 + 4) = v10;
          sub_1C2D434((CGThumbnailListItem_o *)(v14 + 32), (int32_t)v10, v6, v13);
          if ( !v3 )
            goto LABEL_25;
          v15 = v10->fields.npcInitIdx;
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v3->fields._size;
          v5 = (unsigned int)(v15 - 1);
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              v5,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = v5;
          }
        }
        max_length = v8->max_length;
        if ( (int)++v9 >= max_length )
          return v3;
      }
      sub_1C2D6F4(Master_object, v5, v6);
    }
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
void QuestRestrictionInfo__Setup(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  struct System_String_o *v6; // x20
  int32_t v7; // w1
  QuestRestrictionInfo_o *v8; // x29
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  CGThumbnailListItem_o *p_supportPositionList; // x24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t *p_eventDeckNum; // x27
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_int__o *v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_List_object__o *v47; // x20
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Collections_Generic_List_object__o *v50; // x20
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Collections_Generic_List_object__o *v53; // x20
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_Collections_Generic_List_object__o *v56; // x20
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_Collections_Generic_List_object__o *v59; // x20
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_Collections_Generic_List_object__o *v62; // x20
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Collections_Generic_List_object__o *v67; // x20
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  System_Collections_Generic_Dictionary_K__V__o **p_dialogMessageInfoDictionary; // x26
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  System_Collections_Generic_List_object__o *v75; // x20
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  __int64 Master_object; // x0
  Il2CppObject *v79; // x1
  const MethodInfo *v80; // x4
  const MethodInfo *v81; // x1
  System_Collections_Generic_Dictionary_int__object__o *v82; // x20
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  System_Collections_Generic_Dictionary_int__object__o *v85; // x20
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  System_Collections_Generic_Dictionary_int__object__o *v88; // x20
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  System_Collections_Generic_List_object__o *v91; // x29
  RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  bool HasFlag; // w0
  BalanceConfig_c *v94; // x0
  __int64 v95; // x0
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  RestrictionBaseEntity_o *v98; // x8
  Il2CppObject *v99; // x20
  RestrictionWholeEntity_array *Entities; // x0
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  __int64 restrictionMessageId; // x2
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  unsigned int v106; // w25
  RestrictionWholeEntity_o *v107; // x21
  System_Boolean_array *SetPossiblePosition; // x0
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  Il2CppObject *v111; // x23
  int32_t v112; // w0
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  System_Collections_Generic_List_object__o *v115; // x23
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  struct System_Object_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  __int64 v121; // x1
  Il2CppClass **v122; // x0
  System_Collections_Generic_List_object__o *v123; // x23
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  struct System_Object_array *items; // x8
  _QWORD *v127; // x9
  __int64 size; // x10
  __int64 v129; // x1
  Il2CppClass **v130; // x0
  System_Collections_Generic_List_object__o *v131; // x23
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  struct System_Object_array *v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  __int64 v137; // x1
  Il2CppClass **v138; // x0
  Il2CppObject *v139; // x23
  int32_t v140; // w0
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  BalanceConfig_c *v143; // x0
  __int64 v144; // x0
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  __int64 v147; // x0
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  __int64 v150; // x0
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  __int64 v153; // x0
  int32_t v154; // w2
  const MethodInfo *v155; // x3
  System_Boolean_array *v156; // x0
  int32_t v157; // w2
  const MethodInfo *v158; // x3
  Il2CppObject *v159; // x23
  int32_t v160; // w0
  int32_t v161; // w2
  const MethodInfo *v162; // x3
  System_Collections_Generic_List_object__o *v163; // x23
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  struct System_Object_array *v166; // x8
  _QWORD *v167; // x9
  __int64 v168; // x10
  __int64 v169; // x1
  Il2CppClass **v170; // x0
  Il2CppObject *v171; // x23
  int32_t v172; // w0
  int32_t v173; // w2
  const MethodInfo *v174; // x3
  System_Collections_Generic_List_object__o *v175; // x23
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  struct System_Object_array *v178; // x8
  _QWORD *v179; // x9
  __int64 v180; // x10
  __int64 v181; // x1
  Il2CppClass **v182; // x0
  struct System_Int32_array *targetVals; // x8
  System_Collections_Generic_List_object__o *v184; // x23
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  struct System_Object_array *v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  __int64 v190; // x1
  Il2CppClass **v191; // x0
  System_Collections_Generic_List_object__o *v192; // x23
  int32_t v193; // w2
  const MethodInfo *v194; // x3
  struct System_Object_array *v195; // x8
  _QWORD *v196; // x9
  __int64 v197; // x10
  __int64 v198; // x1
  Il2CppClass **v199; // x0
  const MethodInfo *v200; // x3
  struct System_Object_array *v201; // x8
  _QWORD *v202; // x9
  __int64 v203; // x10
  Il2CppClass **v204; // x0
  QuestRestrictionInfo_DialogMessageInfo_o *v205; // x23
  QuestRestrictionInfo_o *v206; // x28
  char isAllOutBattle; // w8
  __int64 v208; // x21
  const MethodInfo *v209; // x3
  BalanceConfig_c *v210; // x0
  __int64 v211; // x0
  int32_t v212; // w2
  const MethodInfo *v213; // x3
  int32_t v214; // w21
  int v215; // w24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v216; // x8
  __int64 v217; // x22
  System_Collections_Generic_List_int__o *v218; // x24
  int v219; // w8
  __int64 v220; // x19
  __int64 v221; // x23
  struct System_Int32_array *v222; // x8
  _QWORD *v223; // x9
  __int64 v224; // x10
  const MethodInfo *v225; // x3
  struct System_Object_array *v226; // x8
  _QWORD *v227; // x9
  __int64 v228; // x10
  Il2CppClass **v229; // x0
  QuestRestrictionInfo_DialogMessageInfo_o *v230; // x23
  __int64 v231; // x24
  CGThumbnailListItem_c *klass; // x25
  QuestRestrictionInfo_SlotInfo_o *v233; // x23
  const MethodInfo *v234; // x3
  int v235; // w19
  void **v236; // x0
  int servantNumMax; // w8
  CGThumbnailListItem_c *v238; // x8
  int32_t v239; // w24
  __int64 v240; // x8
  QuestRestrictionInfo___c_c *v241; // x0
  System_Func_object__bool__o *_9__85_0; // x23
  Il2CppObject *v243; // x25
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v245; // w2
  const MethodInfo *v246; // x3
  _BOOL4 v247; // w0
  QuestRestrictionInfo___c_c *v248; // x8
  _BOOL4 v249; // w23
  System_Func_object__bool__o *_9__85_1; // x25
  Il2CppObject *v251; // x28
  struct QuestRestrictionInfo___c_StaticFields *v252; // x0
  int32_t v253; // w2
  const MethodInfo *v254; // x3
  _BOOL4 v255; // w0
  QuestRestrictionInfo___c_c *v256; // x8
  _BOOL4 v257; // w25
  System_Func_object__bool__o *_9__85_2; // x28
  Il2CppObject *v259; // x27
  struct QuestRestrictionInfo___c_StaticFields *v260; // x0
  int32_t v261; // w2
  const MethodInfo *v262; // x3
  CGThumbnailListItem_c *v263; // x8
  __int64 v264; // x8
  CGThumbnailListItem_c *v265; // x8
  __int64 v266; // x8
  CGThumbnailListItem_c *v267; // x8
  __int64 v268; // x8
  int v269; // w8
  unsigned int v270; // w27
  __int64 v271; // x25
  __int64 v272; // x8
  CGThumbnailListItem_c *v273; // x8
  __int64 v274; // x8
  System_Collections_Generic_List_object__o *v275; // x23
  int32_t v276; // w2
  const MethodInfo *v277; // x3
  struct System_Object_array *v278; // x8
  _QWORD *v279; // x9
  __int64 v280; // x10
  __int64 v281; // x1
  Il2CppClass **v282; // x0
  CGThumbnailListItem_c *v283; // x8
  __int64 v284; // x8
  struct System_Int32_array *v285; // x8
  _QWORD *v286; // x9
  __int64 v287; // x10
  System_String_o *v288; // x23
  CGThumbnailListItem_c *v289; // x8
  __int64 v290; // x8
  const MethodInfo *v291; // x3
  CGThumbnailListItem_c *v292; // x8
  __int64 v293; // x8
  System_String_o **v294; // x25
  CGThumbnailListItem_c *v295; // x8
  QuestRestrictionInfo___c_c *v296; // x0
  __int64 v297; // x27
  System_Func_object__bool__o *_9__85_3; // x23
  Il2CppObject *v299; // x25
  struct QuestRestrictionInfo___c_StaticFields *v300; // x0
  int32_t v301; // w2
  const MethodInfo *v302; // x3
  CGThumbnailListItem_c *v303; // x8
  __int64 v304; // x8
  CGThumbnailListItem_c *v305; // x8
  __int64 v306; // x8
  CGThumbnailListItem_c *v307; // x8
  __int64 v308; // x8
  System_Object_array *v309; // x0
  int32_t v310; // w2
  const MethodInfo *v311; // x3
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v313; // w10
  int v314; // w11
  int v315; // w9
  int v316; // w20
  int32_t v317; // w19
  QuestRestrictionInfo_SlotInfo_o *v318; // x13
  int v319; // w21
  int v320; // w22
  __int64 v321; // x8
  bool HasFlag_42234640; // w0
  bool v323; // w0
  Il2CppObject *Value_int__object; // x0
  int v325; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v327; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v328; // x8
  __int64 v329; // x8
  Il2CppObject *v330; // x20
  int32_t v331; // w0
  int32_t v332; // w2
  const MethodInfo *v333; // x3
  System_Collections_Generic_Dictionary_int__object__o *restrictionSlotDictionary; // x8
  _BOOL8 v335; // x0
  __int64 v336; // x1
  __int64 v337; // x2
  int monitor; // w9
  int v339; // w10
  __int64 v340; // x11
  System_Text_StringBuilder_o *v341; // x20
  System_Text_StringBuilder_o *v342; // x21
  struct RestrictionWholeEntity_array *v343; // x19
  int v344; // w8
  unsigned int v345; // w22
  RestrictionWholeEntity_o *v346; // x24
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  int v349; // w25
  _BOOL4 v350; // w8
  __int64 v351; // x0
  int32_t v352; // w2
  const MethodInfo *v353; // x3
  System_String_o *v354; // x19
  System_String_o *v355; // x0
  System_String_o *v356; // x0
  int32_t v357; // w2
  const MethodInfo *v358; // x3
  __int64 v359; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // [xsp+8h] [xbp-198h]
  CGThumbnailListItem_o *p_svtIdForceBattleList; // [xsp+10h] [xbp-190h]
  CGThumbnailListItem_o *p_restrictionMessage; // [xsp+18h] [xbp-188h]
  CGThumbnailListItem_o *p_confirmRestrictionMessage; // [xsp+20h] [xbp-180h]
  struct RestrictionWholeEntity_array *v364; // [xsp+28h] [xbp-178h]
  CGThumbnailListItem_o *p_fixedSupportIndividualities; // [xsp+30h] [xbp-170h]
  CGThumbnailListItem_o *p_fixedNpcIndividualities; // [xsp+38h] [xbp-168h]
  CGThumbnailListItem_o *p_needStartingIndividualities; // [xsp+40h] [xbp-160h]
  CGThumbnailListItem_o *p_uniqueIndividualitys; // [xsp+48h] [xbp-158h]
  System_Collections_Generic_List_object__o **p_fixedMyServantIndividualitiesList; // [xsp+50h] [xbp-150h]
  System_Collections_Generic_List_object__o **p_fixedIndividualitiesList; // [xsp+58h] [xbp-148h]
  System_Collections_Generic_List_object__o **p_needStartingIndividualitiesList; // [xsp+60h] [xbp-140h]
  System_Collections_Generic_List_object__o **p_fixedNpcIndividualitiesList; // [xsp+68h] [xbp-138h]
  System_Collections_Generic_List_object__o **p_fixedSupportIndividualitiesList; // [xsp+70h] [xbp-130h]
  CGThumbnailListItem_o *p_deckDispLimitCountList; // [xsp+78h] [xbp-128h]
  CGThumbnailListItem_o *p_deckLimitCountList; // [xsp+80h] [xbp-120h]
  struct FollowerInfo_array **p_deckNpcInfoList; // [xsp+88h] [xbp-118h]
  System_Collections_Generic_List_object__o **p_myServantPositionsList; // [xsp+90h] [xbp-110h]
  System_Collections_Generic_List_object__o **p_positionsList; // [xsp+A0h] [xbp-100h]
  System_Collections_Generic_Dictionary_K__V__o **v380; // [xsp+A8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o **p_restrictionSlotDetailDictionary; // [xsp+B0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_K__V__o **p_restrictionSlotDictionary; // [xsp+B8h] [xbp-E8h]
  struct RestrictionBaseEntity_o **p_restrictionBaseEntity; // [xsp+C0h] [xbp-E0h]
  QuestRestrictionInfo_o *v384; // [xsp+C8h] [xbp-D8h]
  CGThumbnailListItem_o *p_deckSvtIdList; // [xsp+D0h] [xbp-D0h]
  _BOOL4 v386; // [xsp+D0h] [xbp-D0h]
  int32_t questIdb; // [xsp+DCh] [xbp-C4h]
  CGThumbnailListItem_o *p_fields; // [xsp+E0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v390; // [xsp+E8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v391; // [xsp+100h] [xbp-A0h] BYREF
  Il2CppObject *item; // [xsp+120h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+128h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v394; // [xsp+130h] [xbp-70h] BYREF
  Il2CppObject *v395; // [xsp+138h] [xbp-68h] BYREF

  if ( (byte_4C2860D & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
    sub_1C2D490(&Method_BasicHelper_Any_RestrictionSlotEntity___);
    sub_1C2D490(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
    sub_1C2D490(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_RestrictionBaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_RestrictionSlotMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_RestrictionWholeMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1C2D490(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__);
    sub_1C2D490(&FollowerInfo___TypeInfo);
    sub_1C2D490(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
    sub_1C2D490(&System_Func_RestrictionSlotEntity__bool__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_bool____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&QuestRestrictionInfo_SlotInfo___TypeInfo);
    sub_1C2D490(&QuestRestrictionInfo_SlotInfo_TypeInfo);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__Setup_b__85_0__);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__Setup_b__85_1__);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__Setup_b__85_2__);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__Setup_b__85_3__);
    sub_1C2D490(&QuestRestrictionInfo___c_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_10293/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/);
    sub_1C2D490(&StringLiteral_10258/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2860D = 1;
  }
  v394 = 0;
  v395 = 0;
  item = 0;
  entity = 0;
  memset(&v391, 0, sizeof(v391));
  this->fields.isRestriction = 0;
  v6 = (struct System_String_o *)StringLiteral_1/*""*/;
  v7 = StringLiteral_1/*""*/;
  v8 = this;
  this->fields.restrictionMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  p_restrictionMessage = (CGThumbnailListItem_o *)&this->fields.restrictionMessage;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.restrictionMessage, v7, questId, *(const MethodInfo **)&questPhase);
  this->fields.confirmRestrictionMessage = v6;
  p_confirmRestrictionMessage = (CGThumbnailListItem_o *)&this->fields.confirmRestrictionMessage;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.confirmRestrictionMessage, (int32_t)v6, v9, v10);
  this->fields.supportOnlyRestrictionEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.supportOnlyRestrictionEntity, 0, v11, v12);
  this->fields.uniqueSvtRestrictionEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.uniqueSvtRestrictionEntity, 0, v13, v14);
  this->fields.deckSvtIdList = 0;
  p_deckSvtIdList = (CGThumbnailListItem_o *)&this->fields.deckSvtIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.deckSvtIdList, 0, v15, v16);
  this->fields.deckNpcInfoList = 0;
  p_deckNpcInfoList = &this->fields.deckNpcInfoList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.deckNpcInfoList, 0, v17, v18);
  this->fields.fixedSupportPositionRestrictionEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.fixedSupportPositionRestrictionEntity, 0, v19, v20);
  this->fields.supportPositionList = 0;
  p_supportPositionList = (CGThumbnailListItem_o *)&this->fields.supportPositionList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.supportPositionList, 0, v22, v23);
  this->fields.fixedMyServantPositionRestrictionEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity, 0, v24, v25);
  this->fields.servantNumRestrictionEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantNumRestrictionEntity, 0, v26, v27);
  this->fields.servantNumMax = 0;
  this->fields.myServantNumRestrictionEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.myServantNumRestrictionEntity, 0, v28, v29);
  this->fields.myServantNumMax = 0;
  *(_WORD *)&this->fields.isSupportOnlyForceBattle = 0;
  this->fields.svtIdForceBattleList = 0;
  p_svtIdForceBattleList = (CGThumbnailListItem_o *)&this->fields.svtIdForceBattleList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtIdForceBattleList, 0, v30, v31);
  this->fields.isFatigure = 0;
  p_eventDeckNum = &this->fields.eventDeckNum;
  v8->fields.eventDeckNum = 0;
  *(int32_t *)((char *)p_eventDeckNum + 3) = 0;
  v33 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v8->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v33;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.myServantOrNpcRestrictionEntityList, (int32_t)v33, v34, v35);
  v36 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  v8->fields.specifiedPositionList = v36;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.specifiedPositionList, (int32_t)v36, v37, v38);
  v8->fields.isNotTransitionSupportList = 0;
  v8->fields.supportInitIndex = 0;
  v8->fields.fixedServantPositionRestrictionEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.fixedServantPositionRestrictionEntity, 0, v39, v40);
  v8->fields.uniqueIndividualityEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.uniqueIndividualityEntity, 0, v41, v42);
  v8->fields.isAllOutBattle = 0;
  v8->fields.isDataLostBattle = 0;
  v8->fields.allOutBattleGroupNo = -1;
  v8->fields.dataLostBattleId = -1;
  v8->fields.deckLimitCountList = 0;
  p_deckLimitCountList = (CGThumbnailListItem_o *)&v8->fields.deckLimitCountList;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.deckLimitCountList, 0, v43, v44);
  v8->fields.deckDispLimitCountList = 0;
  p_deckDispLimitCountList = (CGThumbnailListItem_o *)&v8->fields.deckDispLimitCountList;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.deckDispLimitCountList, 0, v45, v46);
  v8->fields.isNotSingleSupportOnly = 0;
  *(_DWORD *)&v8->fields.isUniqueServant = 0;
  v47 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_bool_____ctor__);
  v8->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v47;
  p_positionsList = (System_Collections_Generic_List_object__o **)&v8->fields.positionsList;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.positionsList, (int32_t)v47, v48, v49);
  v50 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v50,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_int_____ctor__);
  v8->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v50;
  p_fixedIndividualitiesList = (System_Collections_Generic_List_object__o **)&v8->fields.fixedIndividualitiesList;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.fixedIndividualitiesList, (int32_t)v50, v51, v52);
  v8->fields.isFixedMyServantPosition = 0;
  v53 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_bool_____ctor__);
  v8->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v53;
  p_myServantPositionsList = (System_Collections_Generic_List_object__o **)&v8->fields.myServantPositionsList;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.myServantPositionsList, (int32_t)v53, v54, v55);
  v56 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_int_____ctor__);
  v8->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v56;
  p_fixedMyServantIndividualitiesList = (System_Collections_Generic_List_object__o **)&v8->fields.fixedMyServantIndividualitiesList;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.fixedMyServantIndividualitiesList, (int32_t)v56, v57, v58);
  v8->fields.isFixedSupportPosition = 0;
  v59 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_int_____ctor__);
  v8->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v59;
  p_fixedSupportIndividualitiesList = (System_Collections_Generic_List_object__o **)&v8->fields.fixedSupportIndividualitiesList;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.fixedSupportIndividualitiesList, (int32_t)v59, v60, v61);
  v8->fields.isFixedNpcPosition = 0;
  v62 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v62,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_int_____ctor__);
  v8->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v62;
  p_fixedNpcIndividualitiesList = (System_Collections_Generic_List_object__o **)&v8->fields.fixedNpcIndividualitiesList;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.fixedNpcIndividualitiesList, (int32_t)v62, v63, v64);
  v8->fields.npcPositionList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.npcPositionList, 0, v65, v66);
  v67 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v67,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_int_____ctor__);
  v8->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v67;
  p_needStartingIndividualitiesList = (System_Collections_Generic_List_object__o **)&v8->fields.needStartingIndividualitiesList;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.needStartingIndividualitiesList, (int32_t)v67, v68, v69);
  v8->fields.isNeedStarting = 0;
  v8->fields.isFixedMyServantSingle = 0;
  *(_WORD *)&v8->fields.isMyServantOrNpc = 0;
  v8->fields.slotInfos = 0;
  p_fields = (CGThumbnailListItem_o *)&v8->fields;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields, 0, v70, v71);
  v8->fields.dialogMessageInfoDictionary = 0;
  p_dialogMessageInfoDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&v8->fields.dialogMessageInfoDictionary;
  v384 = v8;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.dialogMessageInfoDictionary, 0, v73, v74);
  v75 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v8->fields.grandServantRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v75;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.grandServantRestrictionEntityList, (int32_t)v75, v76, v77);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !Master_object )
    goto LABEL_387;
  p_restrictionBaseEntity = &v8->fields.restrictionBaseEntity;
  if ( RestrictionBaseMaster__TryGetEntity(
         (RestrictionBaseMaster_o *)Master_object,
         &v8->fields.restrictionBaseEntity,
         v8->fields.questId,
         v8->fields.questPhase,
         v80) )
  {
    v8->fields.isRestriction = 1;
    v82 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v82,
      (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    v8->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v82;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&v8->fields.restrictionSlotDictionary;
    sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.restrictionSlotDictionary, (int32_t)v82, v83, v84);
    v85 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v85,
      (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    v8->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v85;
    sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.restrictionSlotDetailDictionary, (int32_t)v85, v86, v87);
    v88 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v88,
      (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    v8->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v88;
    sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.dialogMessageInfoDictionary, (int32_t)v88, v89, v90);
    v91 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v91,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    Master_object = (__int64)v384->fields.restrictionBaseEntity;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__object__o **)&v384->fields.restrictionSlotDetailDictionary;
    if ( !Master_object )
      goto LABEL_387;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 2, 0);
    restrictionBaseEntity = v384->fields.restrictionBaseEntity;
    v384->fields.isNotTransitionSupportList = Master_object & 1;
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
    v384->fields.isUniqueServant = HasFlag;
    if ( HasFlag )
    {
      v94 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v94 = BalanceConfig_TypeInfo;
      }
      v95 = sub_1C2D538(int___TypeInfo, (unsigned int)v94->static_fields->DeckMemberMax);
      p_deckSvtIdList->klass = (CGThumbnailListItem_c *)v95;
      sub_1C2D434(p_deckSvtIdList, v95, v96, v97);
    }
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 32, 0);
    v98 = v384->fields.restrictionBaseEntity;
    v384->fields.isNotSingleSupportOnly = Master_object & 1;
    if ( !v98 )
      goto LABEL_387;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      v98,
      &v384->fields.overwriteLimitCountSvtIds,
      &v384->fields.overwriteLimitCounts,
      &v384->fields.overwriteLimitCountIconIds,
      0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v99 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    if ( !Master_object )
      goto LABEL_387;
    Entities = RestrictionWholeMaster__GetEntities(
                 (RestrictionWholeMaster_o *)Master_object,
                 (*p_restrictionBaseEntity)->fields.restrictionWholeId,
                 0);
    v384->fields.restrictionWholeEntities = Entities;
    sub_1C2D434((CGThumbnailListItem_o *)&v384->fields.restrictionWholeEntities, (int32_t)Entities, v101, v102);
    restrictionWholeEntities = v384->fields.restrictionWholeEntities;
    p_restrictionWholeEntities = &v384->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_387;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v106 = 0;
      p_needStartingIndividualities = (CGThumbnailListItem_o *)&v384->fields.needStartingIndividualities;
      p_uniqueIndividualitys = (CGThumbnailListItem_o *)&v384->fields.uniqueIndividualitys;
      p_fixedSupportIndividualities = (CGThumbnailListItem_o *)&v384->fields.fixedSupportIndividualities;
      p_fixedNpcIndividualities = (CGThumbnailListItem_o *)&v384->fields.fixedNpcIndividualities;
      v364 = v384->fields.restrictionWholeEntities;
      while ( 2 )
      {
        if ( v106 >= max_length )
          goto LABEL_388;
        v107 = restrictionWholeEntities->m_Items[v106];
        if ( v107 )
        {
          switch ( v107->fields.type )
          {
            case 2:
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestGroupMaster___);
              if ( !Master_object )
                goto LABEL_387;
              Master_object = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Master_object, questId, 17, 0);
              v384->fields.allOutBattleGroupNo = Master_object;
              v384->fields.isAllOutBattle = 1;
              goto LABEL_89;
            case 3:
              Master_object = System_Linq_Enumerable__Min(
                                (System_Collections_Generic_IEnumerable_int__o *)v107->fields.targetVals,
                                0);
              v384->fields.servantNumMax = Master_object - 1;
              goto LABEL_89;
            case 4:
              v123 = *p_positionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v107, 0);
              if ( !v123 )
                goto LABEL_387;
              items = v123->fields._items;
              v127 = Method_System_Collections_Generic_List_bool____Add__;
              ++v123->fields._version;
              if ( !items )
                goto LABEL_387;
              size = v123->fields._size;
              v129 = Master_object;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v123,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
              }
              else
              {
                v130 = &items->obj.klass + size;
                v123->fields._size = size + 1;
                v130[4] = (Il2CppClass *)v129;
                sub_1C2D434((CGThumbnailListItem_o *)(v130 + 4), v129, v124, v125);
              }
              Master_object = (__int64)v107->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v184 = *p_fixedIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v184 )
                goto LABEL_387;
              Master_object = sub_1C2D5CC(Master_object, int___TypeInfo);
              v187 = v184->fields._items;
              v188 = Method_System_Collections_Generic_List_int____Add__;
              ++v184->fields._version;
              if ( !v187 )
                goto LABEL_387;
              v189 = v184->fields._size;
              v190 = Master_object;
              if ( (unsigned int)v189 >= LODWORD(v187->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v184,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
              }
              else
              {
                v191 = &v187->obj.klass + v189;
                v184->fields._size = v189 + 1;
                v191[4] = (Il2CppClass *)v190;
                sub_1C2D434((CGThumbnailListItem_o *)(v191 + 4), v190, v185, v186);
              }
              v384->fields.isFixedPosition = 1;
              goto LABEL_89;
            case 5:
              v131 = *p_myServantPositionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v107, 0);
              if ( !v131 )
                goto LABEL_387;
              v134 = v131->fields._items;
              v135 = Method_System_Collections_Generic_List_bool____Add__;
              ++v131->fields._version;
              if ( !v134 )
                goto LABEL_387;
              v136 = v131->fields._size;
              v137 = Master_object;
              if ( (unsigned int)v136 >= LODWORD(v134->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v131,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
              }
              else
              {
                v138 = &v134->obj.klass + v136;
                v131->fields._size = v136 + 1;
                v138[4] = (Il2CppClass *)v137;
                sub_1C2D434((CGThumbnailListItem_o *)(v138 + 4), v137, v132, v133);
              }
              Master_object = (__int64)v107->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v192 = *p_fixedMyServantIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v192 )
                goto LABEL_387;
              Master_object = sub_1C2D5CC(Master_object, int___TypeInfo);
              v195 = v192->fields._items;
              v196 = Method_System_Collections_Generic_List_int____Add__;
              ++v192->fields._version;
              if ( !v195 )
                goto LABEL_387;
              v197 = v192->fields._size;
              v198 = Master_object;
              if ( (unsigned int)v197 >= LODWORD(v195->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v192,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
              }
              else
              {
                v199 = &v195->obj.klass + v197;
                v192->fields._size = v197 + 1;
                v199[4] = (Il2CppClass *)v198;
                sub_1C2D434((CGThumbnailListItem_o *)(v199 + 4), v198, v193, v194);
              }
              v384->fields.isFixedMyServantPosition = 1;
              goto LABEL_89;
            case 6:
              SetPossiblePosition = RestrictionWholeEntity__GetSetPossiblePosition(v107, 0);
              p_supportPositionList->klass = (CGThumbnailListItem_c *)SetPossiblePosition;
              sub_1C2D434(p_supportPositionList, (int32_t)SetPossiblePosition, v109, v110);
              Master_object = (__int64)v107->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v111 = System_Array__Clone((System_Array_o *)Master_object, 0);
              p_fixedSupportIndividualities->klass = (CGThumbnailListItem_c *)sub_1C2D5CC(v111, int___TypeInfo);
              v112 = sub_1C2D5CC(v111, int___TypeInfo);
              sub_1C2D434(p_fixedSupportIndividualities, v112, v113, v114);
              Master_object = (__int64)v107->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v115 = *p_fixedSupportIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v115 )
                goto LABEL_387;
              Master_object = sub_1C2D5CC(Master_object, int___TypeInfo);
              v118 = v115->fields._items;
              v119 = Method_System_Collections_Generic_List_int____Add__;
              ++v115->fields._version;
              if ( !v118 )
                goto LABEL_387;
              v120 = v115->fields._size;
              v121 = Master_object;
              if ( (unsigned int)v120 >= LODWORD(v118->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v115,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
              }
              else
              {
                v122 = &v118->obj.klass + v120;
                v115->fields._size = v120 + 1;
                v122[4] = (Il2CppClass *)v121;
                sub_1C2D434((CGThumbnailListItem_o *)(v122 + 4), v121, v116, v117);
              }
              v384->fields.isFixedSupportPosition = 1;
              goto LABEL_89;
            case 7:
              v156 = RestrictionWholeEntity__GetSetPossiblePosition(v107, 0);
              p_supportPositionList->klass = (CGThumbnailListItem_c *)v156;
              sub_1C2D434(p_supportPositionList, (int32_t)v156, v157, v158);
              Master_object = (__int64)v107->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v159 = System_Array__Clone((System_Array_o *)Master_object, 0);
              p_fixedNpcIndividualities->klass = (CGThumbnailListItem_c *)sub_1C2D5CC(v159, int___TypeInfo);
              v160 = sub_1C2D5CC(v159, int___TypeInfo);
              sub_1C2D434(p_fixedNpcIndividualities, v160, v161, v162);
              Master_object = (__int64)v107->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v163 = *p_fixedNpcIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v163 )
                goto LABEL_387;
              Master_object = sub_1C2D5CC(Master_object, int___TypeInfo);
              v166 = v163->fields._items;
              v167 = Method_System_Collections_Generic_List_int____Add__;
              ++v163->fields._version;
              if ( !v166 )
                goto LABEL_387;
              v168 = v163->fields._size;
              v169 = Master_object;
              if ( (unsigned int)v168 >= LODWORD(v166->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v163,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v167[4] + 192LL) + 112LL));
              }
              else
              {
                v170 = &v166->obj.klass + v168;
                v163->fields._size = v168 + 1;
                v170[4] = (Il2CppClass *)v169;
                sub_1C2D434((CGThumbnailListItem_o *)(v170 + 4), v169, v164, v165);
              }
              v384->fields.isFixedNpcPosition = 1;
              goto LABEL_89;
            case 8:
              Master_object = (__int64)v107->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v171 = System_Array__Clone((System_Array_o *)Master_object, 0);
              p_needStartingIndividualities->klass = (CGThumbnailListItem_c *)sub_1C2D5CC(v171, int___TypeInfo);
              v172 = sub_1C2D5CC(v171, int___TypeInfo);
              sub_1C2D434(p_needStartingIndividualities, v172, v173, v174);
              Master_object = (__int64)v107->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v175 = *p_needStartingIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
              if ( !v175 )
                goto LABEL_387;
              Master_object = sub_1C2D5CC(Master_object, int___TypeInfo);
              v178 = v175->fields._items;
              v179 = Method_System_Collections_Generic_List_int____Add__;
              ++v175->fields._version;
              if ( !v178 )
                goto LABEL_387;
              v180 = v175->fields._size;
              v181 = Master_object;
              if ( (unsigned int)v180 >= LODWORD(v178->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v175,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
              }
              else
              {
                v182 = &v178->obj.klass + v180;
                v175->fields._size = v180 + 1;
                v182[4] = (Il2CppClass *)v181;
                sub_1C2D434((CGThumbnailListItem_o *)(v182 + 4), v181, v176, v177);
              }
              v384->fields.isNeedStarting = 1;
              goto LABEL_89;
            case 9:
              Master_object = (__int64)v107->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v139 = System_Array__Clone((System_Array_o *)Master_object, 0);
              p_uniqueIndividualitys->klass = (CGThumbnailListItem_c *)sub_1C2D5CC(v139, int___TypeInfo);
              v140 = sub_1C2D5CC(v139, int___TypeInfo);
              sub_1C2D434(p_uniqueIndividualitys, v140, v141, v142);
              v143 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v143 = BalanceConfig_TypeInfo;
              }
              v144 = sub_1C2D538(int___TypeInfo, (unsigned int)v143->static_fields->DeckMemberMax);
              v384->fields.deckSvtIdList = (struct System_Int32_array *)v144;
              sub_1C2D434(p_deckSvtIdList, v144, v145, v146);
              v147 = sub_1C2D538(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v384->fields.deckLimitCountList = (struct System_Int32_array *)v147;
              sub_1C2D434(p_deckLimitCountList, v147, v148, v149);
              v150 = sub_1C2D538(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v384->fields.deckDispLimitCountList = (struct System_Int32_array *)v150;
              sub_1C2D434(p_deckDispLimitCountList, v150, v151, v152);
              v153 = sub_1C2D538(
                       FollowerInfo___TypeInfo,
                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v384->fields.deckNpcInfoList = (struct FollowerInfo_array *)v153;
              sub_1C2D434((CGThumbnailListItem_o *)p_deckNpcInfoList, v153, v154, v155);
              restrictionWholeEntities = v364;
              v384->fields.isUniqueIndividuality = 1;
              goto LABEL_89;
            case 0xA:
              v384->fields.isDataLostBattle = 1;
              targetVals = v107->fields.targetVals;
              if ( !targetVals )
                goto LABEL_387;
              if ( !LODWORD(targetVals->max_length) )
                goto LABEL_388;
              v384->fields.dataLostBattleId = targetVals->m_Items[0];
LABEL_89:
              restrictionMessageId = (unsigned int)v107->fields.restrictionMessageId;
              if ( (int)restrictionMessageId < 1 )
                goto LABEL_102;
              if ( !v99 )
                goto LABEL_387;
              Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v99,
                                &entity,
                                restrictionMessageId,
                                (const MethodInfo_3387DE4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
              if ( (Master_object & 1) == 0 )
                goto LABEL_102;
              if ( !v91 )
                goto LABEL_387;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v91,
                                entity,
                                (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) != 0 )
                goto LABEL_102;
              v79 = entity;
              v201 = v91->fields._items;
              v202 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
              ++v91->fields._version;
              if ( !v201 )
                goto LABEL_387;
              v203 = v91->fields._size;
              if ( (unsigned int)v203 >= LODWORD(v201->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v91,
                  v79,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v202[4] + 192LL) + 112LL));
              }
              else
              {
                v204 = &v201->obj.klass + v203;
                v91->fields._size = v203 + 1;
                v204[4] = (Il2CppClass *)v79;
                sub_1C2D434((CGThumbnailListItem_o *)(v204 + 4), (int32_t)v79, restrictionMessageId, v200);
              }
              v205 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_1C2D6DC(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
              QuestRestrictionInfo_DialogMessageInfo___ctor(v205, 0);
              if ( !v205 )
                goto LABEL_387;
              v205->fields.restrictionType = v107->fields.type;
              if ( !entity )
                goto LABEL_387;
              Master_object = (__int64)*p_dialogMessageInfoDictionary;
              if ( !*p_dialogMessageInfoDictionary )
                goto LABEL_387;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                (int32_t)entity[1].klass,
                (Il2CppObject *)v205,
                (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
LABEL_102:
              max_length = restrictionWholeEntities->max_length;
              if ( (int)++v106 >= max_length )
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
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestMaster___);
    v206 = v384;
    if ( !Master_object )
      goto LABEL_387;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
      &v395,
      questId,
      (const MethodInfo_3387DE4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    Master_object = (__int64)v395;
    if ( !v395 )
      goto LABEL_387;
    Master_object = QuestEntity__HasFlag_42234640((QuestEntity_o *)v395, 0x100000, questPhase, 0);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v384 )
        goto LABEL_387;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = v384->fields.isAllOutBattle;
    }
    v384->fields.isNoSupportBattle = isAllOutBattle;
    Master_object = (__int64)v395;
    if ( !v395 )
      goto LABEL_387;
    v384->fields.isSupportOnlyForceBattle = QuestEntity__HasFlag_42234640((QuestEntity_o *)v395, 0x80000, questPhase, 0);
    Master_object = (__int64)v395;
    if ( !v395 )
      goto LABEL_387;
    v384->fields.isFatigure = QuestEntity__HasFlag_42234640((QuestEntity_o *)v395, 0x200000, questPhase, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_387;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v394, questId, questPhase, 0) )
    {
      Master_object = sub_1C2D538(int___TypeInfo, 1);
      if ( !v394 )
        goto LABEL_387;
      v208 = Master_object;
      Master_object = QuestPhaseEntity__GetSingleForceSvtId(v394, 0);
      if ( !v208 )
        goto LABEL_387;
      if ( !*(_DWORD *)(v208 + 24) )
        goto LABEL_388;
      *(_DWORD *)(v208 + 32) = Master_object;
      p_svtIdForceBattleList->klass = (CGThumbnailListItem_c *)v208;
      sub_1C2D434(p_svtIdForceBattleList, v208, restrictionMessageId, v209);
      Master_object = (__int64)v394;
      if ( !v394 )
        goto LABEL_387;
      v384->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v394, 0);
      Master_object = (__int64)v394;
      if ( !v394 )
        goto LABEL_387;
      v384->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v394, 0);
    }
    else
    {
      v384->fields.correctionIconId = -1;
    }
    v210 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v210 = BalanceConfig_TypeInfo;
    }
    v211 = sub_1C2D538(QuestRestrictionInfo_SlotInfo___TypeInfo, (unsigned int)v210->static_fields->DeckMemberMax);
    p_fields->klass = (CGThumbnailListItem_c *)v211;
    sub_1C2D434(p_fields, v211, v212, v213);
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_387;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_33E1404 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    Master_object = (__int64)*p_restrictionSlotDetailDictionary;
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_387;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_33E1404 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v214 = 1;
    v215 = 1;
    v380 = p_dialogMessageInfoDictionary;
    while ( 1 )
    {
      Master_object = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Master_object = (__int64)BalanceConfig_TypeInfo;
      }
      if ( v214 > *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 172LL) )
        break;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      if ( !*p_restrictionBaseEntity )
        goto LABEL_387;
      if ( !Master_object )
        goto LABEL_387;
      Master_object = (__int64)RestrictionSlotMaster__GetEntities(
                                 (RestrictionSlotMaster_o *)Master_object,
                                 (*p_restrictionBaseEntity)->fields.restrictionSlotId,
                                 v214,
                                 0);
      if ( !Master_object )
        goto LABEL_387;
      v216 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
      v217 = Master_object;
      questIdb = v215;
      Master_object = (__int64)*p_restrictionSlotDictionary;
      v386 = v216 != 0;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_387;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
        v214,
        (Il2CppObject *)v217,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v218 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v218,
        (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
      v219 = *(_DWORD *)(v217 + 24);
      if ( v219 >= 1 )
      {
        v220 = 0;
        while ( (unsigned int)v220 < v219 )
        {
          v221 = *(_QWORD *)(v217 + 32 + 8 * v220);
          if ( !v221 || !v218 )
            goto LABEL_387;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v218,
                            *(_DWORD *)(v221 + 40),
                            (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            v79 = (Il2CppObject *)*(unsigned int *)(v221 + 40);
            v222 = v218->fields._items;
            v223 = Method_System_Collections_Generic_List_int__Add__;
            ++v218->fields._version;
            if ( !v222 )
              goto LABEL_387;
            v224 = v218->fields._size;
            if ( (unsigned int)v224 >= LODWORD(v222->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v218,
                (int32_t)v79,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v223[4] + 192LL) + 112LL));
            }
            else
            {
              v218->fields._size = v224 + 1;
              v222->m_Items[v224] = (int)v79;
            }
          }
          restrictionMessageId = *(unsigned int *)(v221 + 44);
          if ( (int)restrictionMessageId >= 1 )
          {
            if ( !v99 )
              goto LABEL_387;
            Master_object = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v99,
                              &item,
                              restrictionMessageId,
                              (const MethodInfo_3387DE4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (Master_object & 1) != 0 )
            {
              if ( !v91 )
                goto LABEL_387;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v91,
                                item,
                                (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) == 0 )
              {
                v79 = item;
                v226 = v91->fields._items;
                v227 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
                ++v91->fields._version;
                if ( !v226 )
                  goto LABEL_387;
                v228 = v91->fields._size;
                if ( (unsigned int)v228 >= LODWORD(v226->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v91,
                    v79,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v227[4] + 192LL) + 112LL));
                }
                else
                {
                  v229 = &v226->obj.klass + v228;
                  v91->fields._size = v228 + 1;
                  v229[4] = (Il2CppClass *)v79;
                  sub_1C2D434((CGThumbnailListItem_o *)(v229 + 4), (int32_t)v79, restrictionMessageId, v225);
                }
                v230 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_1C2D6DC(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
                QuestRestrictionInfo_DialogMessageInfo___ctor(v230, 0);
                if ( !v230 )
                  goto LABEL_387;
                v230->fields.slotNo = v214;
                if ( !item )
                  goto LABEL_387;
                Master_object = (__int64)*p_dialogMessageInfoDictionary;
                if ( !*p_dialogMessageInfoDictionary )
                  goto LABEL_387;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  (int32_t)item[1].klass,
                  (Il2CppObject *)v230,
                  (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v219 = *(_DWORD *)(v217 + 24);
          if ( (int)++v220 >= v219 )
            goto LABEL_163;
        }
        goto LABEL_388;
      }
LABEL_163:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !Master_object )
        goto LABEL_387;
      Master_object = (__int64)RestrictionSlotDetailMaster__GetEntities(
                                 (RestrictionSlotDetailMaster_o *)Master_object,
                                 v218,
                                 0);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_387;
      v231 = Master_object;
      System_Collections_Generic_Dictionary_int__object___Add(
        *p_restrictionSlotDetailDictionary,
        v214,
        (Il2CppObject *)Master_object,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v233 = (QuestRestrictionInfo_SlotInfo_o *)sub_1C2D6DC(QuestRestrictionInfo_SlotInfo_TypeInfo);
      QuestRestrictionInfo_SlotInfo___ctor(v233, 0);
      if ( !klass )
        goto LABEL_387;
      if ( v233 )
      {
        Master_object = sub_1C2D5CC(v233, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_object )
        {
          v359 = sub_1C2D710(0);
          sub_1C2D5B8(v359, 0);
        }
      }
      v235 = v214 - 1;
      if ( (unsigned int)(v214 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_388;
      v236 = &klass->_1.image + v235;
      v236[4] = v233;
      sub_1C2D434((CGThumbnailListItem_o *)(v236 + 4), (int32_t)v233, restrictionMessageId, v234);
      servantNumMax = v206->fields.servantNumMax;
      if ( servantNumMax < 1 || v235 < servantNumMax )
      {
        v241 = QuestRestrictionInfo___c_TypeInfo;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v241 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__85_0 = (System_Func_object__bool__o *)v241->static_fields->__9__85_0;
        if ( !_9__85_0 )
        {
          if ( !v241->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v241);
            v241 = QuestRestrictionInfo___c_TypeInfo;
          }
          v243 = (Il2CppObject *)v241->static_fields->__9;
          _9__85_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__85_0, v243, Method_QuestRestrictionInfo___c__Setup_b__85_0__, 0);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
          static_fields->__9__85_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__85_0;
          sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v245, v246);
        }
        v247 = BasicHelper__Any_object__51084700(
                 (System_Object_array *)v217,
                 (System_Func_T__bool__o *)_9__85_0,
                 (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v248 = QuestRestrictionInfo___c_TypeInfo;
        v249 = v247;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v248 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__85_1 = (System_Func_object__bool__o *)v248->static_fields->__9__85_1;
        if ( !_9__85_1 )
        {
          if ( !v248->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v248);
            v248 = QuestRestrictionInfo___c_TypeInfo;
          }
          v251 = (Il2CppObject *)v248->static_fields->__9;
          _9__85_1 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__85_1, v251, Method_QuestRestrictionInfo___c__Setup_b__85_1__, 0);
          v252 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v252->__9__85_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__85_1;
          sub_1C2D434((CGThumbnailListItem_o *)&v252->__9__85_1, (int32_t)_9__85_1, v253, v254);
        }
        v255 = BasicHelper__Any_object__51084700(
                 (System_Object_array *)v217,
                 (System_Func_T__bool__o *)_9__85_1,
                 (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v256 = QuestRestrictionInfo___c_TypeInfo;
        v257 = v255;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v256 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__85_2 = (System_Func_object__bool__o *)v256->static_fields->__9__85_2;
        if ( !_9__85_2 )
        {
          if ( !v256->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v256);
            v256 = QuestRestrictionInfo___c_TypeInfo;
          }
          v259 = (Il2CppObject *)v256->static_fields->__9;
          _9__85_2 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__85_2, v259, Method_QuestRestrictionInfo___c__Setup_b__85_2__, 0);
          v260 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v260->__9__85_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__85_2;
          sub_1C2D434((CGThumbnailListItem_o *)&v260->__9__85_2, (int32_t)_9__85_2, v261, v262);
        }
        Master_object = BasicHelper__Any_object__51084700(
                          (System_Object_array *)v217,
                          (System_Func_T__bool__o *)_9__85_2,
                          (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        if ( v257 || !v249 || (Master_object & 1) != 0 )
        {
          v206 = v384;
          if ( (v249 || !v257) | Master_object & 1 )
          {
            if ( v249 || v257 || (((unsigned int)Master_object ^ 1) & 1) != 0 )
            {
              if ( Master_object & 1 | (!v249 || !v257) )
              {
                if ( ((v249 || v257) & (unsigned int)Master_object & 1) != 0 )
                {
                  v305 = p_fields->klass;
                  if ( !p_fields->klass )
                    goto LABEL_387;
                  if ( (unsigned int)v235 >= LODWORD(v305->_1.namespaze) )
                    goto LABEL_388;
                  v306 = *((_QWORD *)&v305->_1.byval_arg.data + v235);
                  if ( !v306 )
                    goto LABEL_387;
                  *(_DWORD *)(v306 + 16) = 4;
                  v384->fields.isMyServantOrSupport = 1;
                }
              }
              else
              {
                v307 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_387;
                if ( (unsigned int)v235 >= LODWORD(v307->_1.namespaze) )
                  goto LABEL_388;
                v308 = *((_QWORD *)&v307->_1.byval_arg.data + v235);
                if ( !v308 )
                  goto LABEL_387;
                *(_DWORD *)(v308 + 16) = 3;
                v384->fields.isMyServantOrNpc = 1;
              }
            }
            else
            {
              v265 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v235 >= LODWORD(v265->_1.namespaze) )
                goto LABEL_388;
              v266 = *((_QWORD *)&v265->_1.byval_arg.data + v235);
              if ( !v266 )
                goto LABEL_387;
              *(_DWORD *)(v266 + 16) = 2;
              v384->fields.supportInitIndex = v214;
            }
          }
          else
          {
            v267 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_387;
            if ( (unsigned int)v235 >= LODWORD(v267->_1.namespaze) )
              goto LABEL_388;
            v268 = *((_QWORD *)&v267->_1.byval_arg.data + v235);
            if ( !v268 )
              goto LABEL_387;
            *(_DWORD *)(v268 + 16) = 1;
          }
        }
        else
        {
          v206 = v384;
          v263 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_387;
          if ( (unsigned int)v235 >= LODWORD(v263->_1.namespaze) )
            goto LABEL_388;
          v264 = *((_QWORD *)&v263->_1.byval_arg.data + v235);
          if ( !v264 )
            goto LABEL_387;
          *(_DWORD *)(v264 + 16) = 0;
        }
        if ( !v231 )
          goto LABEL_387;
        v269 = *(_DWORD *)(v231 + 24);
        if ( v269 >= 1 )
        {
          v270 = 0;
          while ( v270 < v269 )
          {
            v271 = *(_QWORD *)(v231 + 8LL * (int)v270 + 32);
            if ( !v271 )
              goto LABEL_387;
            if ( !*(_DWORD *)(v217 + 24) )
              break;
            v272 = *(_QWORD *)(v217 + 32);
            if ( !v272 )
              goto LABEL_387;
            if ( *(_DWORD *)(v271 + 16) == *(_DWORD *)(v272 + 40) )
            {
              v273 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v235 >= LODWORD(v273->_1.namespaze) )
                goto LABEL_388;
              v274 = *((_QWORD *)&v273->_1.byval_arg.data + v235);
              if ( !v274 )
                goto LABEL_387;
              if ( *(_DWORD *)(v274 + 16) <= 2u )
              {
                Master_object = *(_QWORD *)(v271 + 40);
                if ( !Master_object )
                  goto LABEL_387;
                v275 = *(System_Collections_Generic_List_object__o **)(v274 + 24);
                Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0);
                if ( !v275 )
                  goto LABEL_387;
                Master_object = sub_1C2D5CC(Master_object, int___TypeInfo);
                v278 = v275->fields._items;
                v279 = Method_System_Collections_Generic_List_int____Add__;
                ++v275->fields._version;
                if ( !v278 )
                  goto LABEL_387;
                v280 = v275->fields._size;
                v281 = Master_object;
                if ( (unsigned int)v280 >= LODWORD(v278->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v275,
                    (Il2CppObject *)Master_object,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v279[4] + 192LL) + 112LL));
                }
                else
                {
                  v282 = &v278->obj.klass + v280;
                  v275->fields._size = v280 + 1;
                  v282[4] = (Il2CppClass *)v281;
                  sub_1C2D434((CGThumbnailListItem_o *)(v282 + 4), v281, v276, v277);
                }
                v283 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_387;
                if ( (unsigned int)v235 >= LODWORD(v283->_1.namespaze) )
                  goto LABEL_388;
                v284 = *((_QWORD *)&v283->_1.byval_arg.data + v235);
                if ( !v284 )
                  goto LABEL_387;
                Master_object = *(_QWORD *)(v284 + 32);
                if ( !Master_object )
                  goto LABEL_387;
                v79 = (Il2CppObject *)*(unsigned int *)(v271 + 48);
                v285 = *(struct System_Int32_array **)(Master_object + 16);
                v286 = Method_System_Collections_Generic_List_Restriction_RangeType__Add__;
                ++*(_DWORD *)(Master_object + 28);
                if ( !v285 )
                  goto LABEL_387;
                v287 = *(int *)(Master_object + 24);
                if ( (unsigned int)v287 >= LODWORD(v285->max_length) )
                {
                  System_Collections_Generic_List_Int32Enum___AddWithResize(
                    (System_Collections_Generic_List_T__o *)Master_object,
                    (int32_t)v79,
                    *(const MethodInfo_376F38C **)(*(_QWORD *)(v286[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Master_object + 24) = v287 + 1;
                  v285->m_Items[v287] = (int)v79;
                }
              }
              if ( *(_DWORD *)(v271 + 32) == 2 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10293/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, 0);
                v288 = (System_String_o *)Master_object;
              }
              else
              {
                v288 = *(System_String_o **)(v271 + 24);
              }
              v289 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v235 >= LODWORD(v289->_1.namespaze) )
                goto LABEL_388;
              v290 = *((_QWORD *)&v289->_1.byval_arg.data + v235);
              if ( !v290 )
                goto LABEL_387;
              Master_object = System_String__IsNullOrEmpty(*(System_String_o **)(v290 + 40), 0);
              v292 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v235 >= LODWORD(v292->_1.namespaze) )
                goto LABEL_388;
              v293 = *((_QWORD *)&v292->_1.byval_arg.data + v235);
              if ( !v293 )
                goto LABEL_387;
              v294 = (System_String_o **)(v293 + 40);
              if ( (Master_object & 1) == 0 )
                v288 = System_String__Concat_63496112(*v294, (System_String_o *)StringLiteral_43/*"\n"*/, v288, 0);
              *v294 = v288;
              sub_1C2D434((CGThumbnailListItem_o *)v294, (int32_t)v288, restrictionMessageId, v291);
            }
            v269 = *(_DWORD *)(v231 + 24);
            if ( (int)++v270 >= v269 )
              goto LABEL_253;
          }
          goto LABEL_388;
        }
LABEL_253:
        v295 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_387;
        if ( (unsigned int)v235 >= LODWORD(v295->_1.namespaze) )
          goto LABEL_388;
        v296 = QuestRestrictionInfo___c_TypeInfo;
        v297 = *((_QWORD *)&v295->_1.byval_arg.data + v235);
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v296 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__85_3 = (System_Func_object__bool__o *)v296->static_fields->__9__85_3;
        if ( !_9__85_3 )
        {
          if ( !v296->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v296);
            v296 = QuestRestrictionInfo___c_TypeInfo;
          }
          v299 = (Il2CppObject *)v296->static_fields->__9;
          _9__85_3 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__85_3, v299, Method_QuestRestrictionInfo___c__Setup_b__85_3__, 0);
          v300 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v300->__9__85_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__85_3;
          sub_1C2D434((CGThumbnailListItem_o *)&v300->__9__85_3, (int32_t)_9__85_3, v301, v302);
          v206 = v384;
        }
        Master_object = BasicHelper__Any_object__51084700(
                          (System_Object_array *)v231,
                          (System_Func_T__bool__o *)_9__85_3,
                          (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
        if ( !v297 )
          goto LABEL_387;
        *(_BYTE *)(v297 + 48) = (Master_object & 1) == 0;
        v303 = p_fields->klass;
        v239 = questIdb;
        if ( !p_fields->klass )
          goto LABEL_387;
        if ( (unsigned int)v235 >= LODWORD(v303->_1.namespaze) )
          goto LABEL_388;
        v304 = *((_QWORD *)&v303->_1.byval_arg.data + v235);
        if ( !v304 )
          goto LABEL_387;
        p_dialogMessageInfoDictionary = v380;
        if ( *(_DWORD *)(v304 + 16) == 1 )
        {
          if ( *(_BYTE *)(v304 + 48) )
            v206->fields.isNpcEditablePos = 1;
        }
        *(_BYTE *)(v304 + 49) = *(_DWORD *)(v217 + 24) != 0;
      }
      else
      {
        v238 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_387;
        v239 = questIdb;
        if ( (unsigned int)v235 >= LODWORD(v238->_1.namespaze) )
          goto LABEL_388;
        v240 = *((_QWORD *)&v238->_1.byval_arg.data + v235);
        if ( !v240 )
          goto LABEL_387;
        p_dialogMessageInfoDictionary = v380;
        *(_DWORD *)(v240 + 16) = 5;
        *(_BYTE *)(v240 + 48) = 0;
      }
      ++v214;
      v215 = v239 & v386;
    }
    if ( !v91
      || (v309 = System_Collections_Generic_List_object___ToArray(
                   v91,
                   (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__),
          v206->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v309,
          sub_1C2D434((CGThumbnailListItem_o *)&v206->fields.restrictionMessageEntities, (int32_t)v309, v310, v311),
          (slotInfos = v206->fields.slotInfos) == 0) )
    {
LABEL_387:
      sub_1C2D6EC(Master_object, v79);
    }
    v313 = slotInfos->max_length;
    if ( v313 >= 1 )
    {
      v314 = 0;
      v315 = 0;
      v316 = 0;
      v317 = 0;
      while ( v313 != v314 )
      {
        v318 = slotInfos->m_Items[v314];
        if ( !v318 )
          goto LABEL_387;
        switch ( v318->fields.slotType )
        {
          case 0:
          case 3:
          case 4:
            ++v317;
            break;
          case 1:
            ++v316;
            break;
          case 2:
            ++v315;
            break;
          default:
            break;
        }
        if ( v313 == ++v314 )
          goto LABEL_293;
      }
LABEL_388:
      sub_1C2D6F4(Master_object, v79, restrictionMessageId);
    }
    v317 = 0;
    v316 = 0;
    v315 = 0;
LABEL_293:
    if ( v315 == 0 && (v215 & 1) != 0 )
      v206->fields.isNoSupportBattle = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object )
      goto LABEL_387;
    Master_object = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                               (NpcFollowerMaster_o *)Master_object,
                               v206->fields.questId,
                               v206->fields.questPhase,
                               0);
    if ( !Master_object )
      goto LABEL_387;
    v319 = *(_DWORD *)(Master_object + 24);
    if ( v319 >= 1 )
    {
      v320 = 0;
      while ( v319 != v320 )
      {
        v321 = *(_QWORD *)(Master_object + 8LL * v320 + 32);
        if ( !v321 )
          goto LABEL_387;
        if ( !*(_BYTE *)(v321 + 105) && v319 != ++v320 )
          continue;
        goto LABEL_307;
      }
      goto LABEL_388;
    }
    v320 = 0;
LABEL_307:
    Master_object = (__int64)v395;
    if ( !v395 )
      goto LABEL_387;
    HasFlag_42234640 = QuestEntity__HasFlag_42234640((QuestEntity_o *)v395, 0x10000000, questPhase, 0);
    v206->fields.isNpcMultipleBattle = HasFlag_42234640;
    if ( !HasFlag_42234640 )
      v206->fields.isNpcMultipleBattle = v320 < v319 && v317 > 0 && v316 > 0;
    Master_object = (__int64)v395;
    if ( !v395 )
      goto LABEL_387;
    v323 = QuestEntity__HasFlag_42234640((QuestEntity_o *)v395, 0x20000000, questPhase, 0);
    v206->fields.isNpcOnlyBattle = v323;
    if ( !v323 )
      v206->fields.isNpcOnlyBattle = v320 < v319 && v317 == 0 && v316 > 0;
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 8, 0) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            *p_restrictionSlotDictionary,
                            2,
                            0,
                            (const MethodInfo_30BC69C *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v325 = 2;
      else
        v325 = 1;
      DeckMemberMax = v206->fields.servantNumMax;
      v206->fields.servantNumMin = v325;
      if ( !DeckMemberMax )
      {
        v327 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v327 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v327->static_fields->DeckMemberMax;
        v206->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v206->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v206->fields.isNpcMultipleBattle )
        v206->fields.myServantNumMax = v317;
    }
    else
    {
      v206->fields.myServantNumMax = v317;
      if ( v317 == 1 && DeckMemberMax == 1 )
      {
        Master_object = (__int64)v206->fields.restrictionSlotDetailDictionary;
        v206->fields.isFixedMyServantSingle = 1;
        if ( !Master_object )
          goto LABEL_387;
        Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                                   1,
                                   (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( Master_object )
        {
          v328 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
          if ( v328 )
          {
            if ( !(_DWORD)v328 )
              goto LABEL_388;
            v329 = *(_QWORD *)(Master_object + 32);
            if ( !v329 )
              goto LABEL_387;
            Master_object = *(_QWORD *)(v329 + 40);
            if ( !Master_object )
              goto LABEL_387;
            v330 = System_Array__Clone((System_Array_o *)Master_object, 0);
            v206->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)sub_1C2D5CC(
                                                                                              v330,
                                                                                              int___TypeInfo);
            v331 = sub_1C2D5CC(v330, int___TypeInfo);
            sub_1C2D434((CGThumbnailListItem_o *)&v206->fields.fixedMyServantSingleIndividualities, v331, v332, v333);
          }
        }
      }
    }
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_387;
    Master_object = System_Collections_Generic_Dictionary_int__object___get_Count(
                      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                      (const MethodInfo_33E0F2C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__object__o *)v206->fields.restrictionSlotDictionary;
    v206->fields.isSupportOnly = (int)Master_object > 0;
    if ( !restrictionSlotDictionary )
      goto LABEL_387;
    Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Values(
                               restrictionSlotDictionary,
                               (const MethodInfo_33E108C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Master_object )
      goto LABEL_387;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v390,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Master_object,
      (const MethodInfo_3AC041C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v391 = v390;
    do
    {
      v335 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
               &v391,
               (const MethodInfo_3538D64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v335 )
        break;
      if ( !v391.fields._currentValue )
        sub_1C2D6EC(v335, v336);
      monitor = (int)v391.fields._currentValue[1].monitor;
      if ( monitor >= 1 )
      {
        v339 = 0;
        while ( 1 )
        {
          if ( monitor == v339 )
            sub_1C2D6F4(v335, v336, v337);
          v340 = *((_QWORD *)&v391.fields._currentValue[2].klass + v339);
          if ( !v340 )
            sub_1C2D6EC(v335, v336);
          if ( *(_DWORD *)(v340 + 28) == 1 )
            break;
          if ( monitor == ++v339 )
            goto LABEL_348;
        }
        v206->fields.isSupportOnly = 0;
        break;
      }
LABEL_348:
      ;
    }
    while ( v206->fields.isSupportOnly );
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &v391,
      (const MethodInfo_3538D60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    v341 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v341, 0);
    v342 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v342, 0);
    v343 = *p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_387;
    v344 = v343->max_length;
    if ( v344 >= 1 )
    {
      v345 = 0;
      while ( 1 )
      {
        if ( v345 >= v344 )
          goto LABEL_388;
        v346 = v343->m_Items[v345];
        if ( !v346 )
          goto LABEL_387;
        Master_object = System_String__IsNullOrEmpty(v346->fields.summary, 0);
        if ( (Master_object & 1) == 0 )
          break;
LABEL_377:
        v344 = v343->max_length;
        if ( (int)++v345 >= v344 )
          goto LABEL_378;
      }
      type = v346->fields.type;
      if ( type == 10 || type == 2 )
      {
        v349 = 1;
      }
      else
      {
        if ( type == 1 )
        {
          targetVals2 = v346->fields.targetVals2;
          if ( !targetVals2 )
            goto LABEL_387;
          v349 = 1;
          v350 = LODWORD(targetVals2->max_length) == 1;
LABEL_365:
          if ( (v350 & v349) != 0 )
          {
            if ( v206->fields.isRestriction )
            {
              if ( !v342 )
                goto LABEL_387;
              System_Text_StringBuilder__Append_63542928(v342, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
            }
            else if ( !v342 )
            {
              goto LABEL_387;
            }
            Master_object = (__int64)System_Text_StringBuilder__Append_63542928(v342, v346->fields.summary, 0);
            v206->fields.isRestriction = 1;
          }
          if ( v349 )
          {
            if ( v206->fields.isRestriction )
            {
              if ( !v341 )
                goto LABEL_387;
              System_Text_StringBuilder__Append_63542928(v341, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
            }
            else if ( !v341 )
            {
              goto LABEL_387;
            }
            Master_object = (__int64)System_Text_StringBuilder__Append_63542928(v341, v346->fields.summary, 0);
            v206->fields.isRestriction = 1;
          }
          goto LABEL_377;
        }
        v349 = 0;
      }
      v350 = 1;
      goto LABEL_365;
    }
LABEL_378:
    if ( !v342 )
      goto LABEL_387;
    Master_object = System_Text_StringBuilder__get_Length(v342, 0);
    if ( (int)Master_object >= 1 )
    {
      v351 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v342->klass->vtable._3_ToString.methodPtr)(
               v342,
               v342->klass->vtable._3_ToString.method);
      p_confirmRestrictionMessage->klass = (CGThumbnailListItem_c *)v351;
      sub_1C2D434(p_confirmRestrictionMessage, v351, v352, v353);
    }
    if ( !v341 )
      goto LABEL_387;
    if ( System_Text_StringBuilder__get_Length(v341, 0) >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v354 = LocalizationManager__Get((System_String_o *)StringLiteral_10258/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      v355 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v341->klass->vtable._3_ToString.methodPtr)(
                                  v341,
                                  v341->klass->vtable._3_ToString.method);
      v356 = System_String__Concat_63496112(v354, (System_String_o *)StringLiteral_43/*"\n"*/, v355, 0);
      p_restrictionMessage->klass = (CGThumbnailListItem_c *)v356;
      sub_1C2D434(p_restrictionMessage, (int32_t)v356, v357, v358);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(v8, v81);
  }
}


void QuestRestrictionInfo__SetupOldRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x20
  System_Text_StringBuilder_o *v4; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  struct RestrictionEntity_array *restrictionEntityList; // x21
  int max_length; // w8
  unsigned int v11; // w22
  struct RestrictionEntity_o *v12; // x27
  struct RestrictionEntity_o **p_totalCostRestrictionEntity; // x0
  BalanceConfig_c *v14; // x0
  struct System_Int32_array *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Boolean_array *DeckPositionList; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int *targetVals; // x8
  int32_t v22; // w8
  struct System_Int32_array *v23; // x8
  il2cpp_array_size_t v24; // x9
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  Il2CppObject *v29; // x25
  int32_t v30; // w0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  BalanceConfig_c *v33; // x0
  struct System_Int32_array *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Int32_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Int32_array *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct FollowerInfo_array *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x8
  struct System_Int32_array *v50; // x8
  _BOOL4 isRestriction; // w9
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x8
  __int64 v56; // x9
  struct System_Collections_Generic_List_int__o *specifiedPositionList; // x25
  struct System_Int32_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  struct System_Collections_Generic_List_int__o *v61; // x25
  struct System_Int32_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  struct System_String_o *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  System_String_o *v68; // x0
  struct System_String_o *v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  long double v72; // q0
  __int64 v73; // x0
  __int64 v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  bool HasFlag; // w0
  bool v78; // w0
  System_Collections_Generic_List_object__o *v79; // x20
  const MethodInfo *v80; // x3
  bool v81; // w0
  bool HasFlag_42234640; // w0
  bool v83; // w0
  System_Collections_Generic_List_object__o *v84; // x20
  const MethodInfo *v85; // x3
  bool v86; // w0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  CGThumbnailListItem_o *p_uniqueSvtRestrictionEntity; // [xsp+30h] [xbp-C0h]
  CGThumbnailListItem_o *p_servantNumRestrictionEntity; // [xsp+58h] [xbp-98h]
  CGThumbnailListItem_o *p_myServantNumRestrictionEntity; // [xsp+60h] [xbp-90h]
  CGThumbnailListItem_o *p_uniqueIndividualityEntity; // [xsp+70h] [xbp-80h]
  QuestRestrictionInfoEntity_o *v97; // [xsp+78h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v98; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4C2860E & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C2D490(&FollowerInfo___TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_10258/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_4C2860E = 1;
  }
  v98 = 0;
  entity = 0;
  v97 = 0;
  v3 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  v4 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0);
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_155;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    p_uniqueIndividualityEntity = (CGThumbnailListItem_o *)&this->fields.uniqueIndividualityEntity;
    p_servantNumRestrictionEntity = (CGThumbnailListItem_o *)&this->fields.servantNumRestrictionEntity;
    p_myServantNumRestrictionEntity = (CGThumbnailListItem_o *)&this->fields.myServantNumRestrictionEntity;
    v11 = 0;
    p_uniqueSvtRestrictionEntity = (CGThumbnailListItem_o *)&this->fields.uniqueSvtRestrictionEntity;
    while ( 1 )
    {
      if ( v11 >= max_length )
        goto LABEL_156;
      v12 = restrictionEntityList->m_Items[v11];
      if ( !v12 )
        goto LABEL_155;
      switch ( v12->fields.type )
      {
        case 3:
          p_totalCostRestrictionEntity = &this->fields.totalCostRestrictionEntity;
          this->fields.totalCostRestrictionEntity = v12;
          goto LABEL_51;
        case 5:
          this->fields.supportOnlyRestrictionEntity = v12;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.supportOnlyRestrictionEntity, (int32_t)v12, v7, v8);
          this->fields.isSupportOnly = 1;
          goto LABEL_72;
        case 6:
          p_uniqueSvtRestrictionEntity->klass = (CGThumbnailListItem_c *)v12;
          sub_1C2D434(p_uniqueSvtRestrictionEntity, (int32_t)v12, v7, v8);
          v14 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v14 = BalanceConfig_TypeInfo;
          }
          v15 = (struct System_Int32_array *)sub_1C2D538(
                                               int___TypeInfo,
                                               (unsigned int)v14->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v15;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.deckSvtIdList, (int32_t)v15, v16, v17);
          this->fields.isUniqueServant = 1;
          goto LABEL_72;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v12;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&this->fields.fixedSupportPositionRestrictionEntity,
            (int32_t)v12,
            v7,
            v8);
          DeckPositionList = RestrictionEntity__getDeckPositionList(v12, 0);
          this->fields.supportPositionList = DeckPositionList;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.supportPositionList, (int32_t)DeckPositionList, v19, v20);
          this->fields.isFixedSupportPosition = 1;
          goto LABEL_72;
        case 8:
          this->fields.fixedMyServantPositionRestrictionEntity = v12;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
            (int32_t)v12,
            v7,
            v8);
          this->fields.isFixedMyServantPosition = 1;
          goto LABEL_72;
        case 9:
          this->fields.fixedMyServantSingleRestrictionEntity = v12;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&this->fields.fixedMyServantSingleRestrictionEntity,
            (int32_t)v12,
            v7,
            v8);
          this->fields.isFixedMyServantSingle = 1;
          goto LABEL_72;
        case 0xA:
          p_servantNumRestrictionEntity->klass = (CGThumbnailListItem_c *)v12;
          sub_1C2D434(p_servantNumRestrictionEntity, (int32_t)v12, v7, v8);
          targetVals = (int *)v12->fields.targetVals;
          if ( v12->fields.rangeType == 5 )
          {
            if ( targetVals && targetVals[6] >= 2 )
            {
              this->fields.servantNumMin = targetVals[8];
              v22 = targetVals[9];
LABEL_56:
              this->fields.servantNumMax = v22;
            }
          }
          else if ( targetVals )
          {
            v56 = *((_QWORD *)targetVals + 3);
            if ( v56 )
            {
              if ( !(_DWORD)v56 )
                goto LABEL_156;
              v22 = targetVals[8];
              goto LABEL_56;
            }
          }
LABEL_72:
          max_length = restrictionEntityList->max_length;
          if ( (int)++v11 >= max_length )
            goto LABEL_73;
          break;
        case 0xB:
          p_myServantNumRestrictionEntity->klass = (CGThumbnailListItem_c *)v12;
          sub_1C2D434(p_myServantNumRestrictionEntity, (int32_t)v12, v7, v8);
          v23 = v12->fields.targetVals;
          if ( !v23 )
            goto LABEL_72;
          v24 = v23->max_length;
          if ( !v24 )
            goto LABEL_72;
          if ( !(_DWORD)v24 )
            goto LABEL_156;
          this->fields.myServantNumMax = v23->m_Items[0];
          goto LABEL_72;
        case 0xC:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_155;
          items = myServantOrNpcRestrictionEntityList->fields._items;
          v26 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !items )
            goto LABEL_155;
          size = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v12,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            myServantOrNpcRestrictionEntityList->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v12;
            sub_1C2D434((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v12, v7, v8);
          }
          specifiedPositionList = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v12,
                                                                                               0);
          if ( !specifiedPositionList )
            goto LABEL_155;
          v58 = specifiedPositionList->fields._items;
          v59 = Method_System_Collections_Generic_List_int__Add__;
          ++specifiedPositionList->fields._version;
          if ( !v58 )
            goto LABEL_155;
          v60 = specifiedPositionList->fields._size;
          v6 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v60 >= LODWORD(v58->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              specifiedPositionList,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
          }
          else
          {
            specifiedPositionList->fields._size = v60 + 1;
            v58->m_Items[v60] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrNpc = 1;
          goto LABEL_72;
        case 0xE:
          this->fields.fixedServantPositionRestrictionEntity = v12;
          sub_1C2D434(
            (CGThumbnailListItem_o *)&this->fields.fixedServantPositionRestrictionEntity,
            (int32_t)v12,
            v7,
            v8);
          this->fields.isNeedStarting = 1;
          goto LABEL_72;
        case 0xF:
          p_uniqueIndividualityEntity->klass = (CGThumbnailListItem_c *)v12;
          sub_1C2D434(p_uniqueIndividualityEntity, (int32_t)v12, v7, v8);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v12->fields.targetVals;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_155;
          v29 = System_Array__Clone((System_Array_o *)myServantOrNpcRestrictionEntityList, 0);
          this->fields.uniqueIndividualitys = (struct System_Int32_array *)sub_1C2D5CC(v29, int___TypeInfo);
          v30 = sub_1C2D5CC(v29, int___TypeInfo);
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.uniqueIndividualitys, v30, v31, v32);
          v33 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v33 = BalanceConfig_TypeInfo;
          }
          v34 = (struct System_Int32_array *)sub_1C2D538(
                                               int___TypeInfo,
                                               (unsigned int)v33->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v34;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.deckSvtIdList, (int32_t)v34, v35, v36);
          v37 = (struct System_Int32_array *)sub_1C2D538(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckLimitCountList = v37;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.deckLimitCountList, (int32_t)v37, v38, v39);
          v40 = (struct System_Int32_array *)sub_1C2D538(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckDispLimitCountList = v40;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.deckDispLimitCountList, (int32_t)v40, v41, v42);
          v43 = (struct FollowerInfo_array *)sub_1C2D538(
                                               FollowerInfo___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckNpcInfoList = v43;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.deckNpcInfoList, (int32_t)v43, v44, v45);
          this->fields.isUniqueIndividuality = 1;
          goto LABEL_72;
        case 0x10:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_155;
          v46 = myServantOrNpcRestrictionEntityList->fields._items;
          v47 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v46 )
            goto LABEL_155;
          v48 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v12,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = &v46->obj.klass + v48;
            myServantOrNpcRestrictionEntityList->fields._size = v48 + 1;
            v49[4] = (Il2CppClass *)v12;
            sub_1C2D434((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v12, v7, v8);
          }
          v61 = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v12,
                                                                                               0);
          if ( !v61 )
            goto LABEL_155;
          v62 = v61->fields._items;
          v63 = Method_System_Collections_Generic_List_int__Add__;
          ++v61->fields._version;
          if ( !v62 )
            goto LABEL_155;
          v64 = v61->fields._size;
          v6 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v61,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
          }
          else
          {
            v61->fields._size = v64 + 1;
            v62->m_Items[v64] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrSupport = 1;
          goto LABEL_72;
        case 0x11:
          this->fields.isDataLostBattle = 1;
          v50 = v12->fields.targetVals;
          if ( !v50 )
            goto LABEL_155;
          if ( !LODWORD(v50->max_length) )
            goto LABEL_156;
          isRestriction = this->fields.isRestriction;
          this->fields.dataLostBattleId = v50->m_Items[0];
          if ( isRestriction )
          {
LABEL_44:
            if ( !v3 )
              goto LABEL_155;
            System_Text_StringBuilder__Append_63542928(v3, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
          }
          else
          {
LABEL_11:
            if ( !v3 )
              goto LABEL_155;
          }
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_63542928(
                                                                                               v3,
                                                                                               v12->fields.name,
                                                                                               0);
          this->fields.isRestriction = 1;
          goto LABEL_72;
        case 0x15:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.grandServantRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_155;
          v52 = myServantOrNpcRestrictionEntityList->fields._items;
          v53 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v52 )
            goto LABEL_155;
          v54 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v12,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &v52->obj.klass + v54;
            myServantOrNpcRestrictionEntityList->fields._size = v54 + 1;
            v55[4] = (Il2CppClass *)v12;
            p_totalCostRestrictionEntity = (struct RestrictionEntity_o **)(v55 + 4);
LABEL_51:
            sub_1C2D434((CGThumbnailListItem_o *)p_totalCostRestrictionEntity, (int32_t)v12, v7, v8);
          }
          goto LABEL_72;
        default:
          if ( !this->fields.isRestriction )
            goto LABEL_11;
          goto LABEL_44;
      }
    }
  }
LABEL_73:
  if ( this->fields.isRestriction )
  {
    if ( !v3 )
      goto LABEL_155;
    v65 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v3->klass->vtable._3_ToString.methodPtr)(
                                      v3,
                                      v3->klass->vtable._3_ToString.method);
    this->fields.confirmRestrictionMessage = v65;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.confirmRestrictionMessage, (int32_t)v65, v66, v67);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v68 = LocalizationManager__Get((System_String_o *)StringLiteral_10258/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    v69 = System_String__Concat_63496112(
            v68,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            this->fields.confirmRestrictionMessage,
            0);
    this->fields.restrictionMessage = v69;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.restrictionMessage, (int32_t)v69, v70, v71);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_155;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_155;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)myServantOrNpcRestrictionEntityList,
    &entity,
    this->fields.questId,
    (const MethodInfo_3387DE4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_155;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_155;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)myServantOrNpcRestrictionEntityList,
    &v98,
    this->fields.questId,
    this->fields.questPhase,
    0);
  v73 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v73 + 309) & 1) == 0 )
    v73 = sub_1C7DBA4(v72);
  v74 = *(_QWORD *)(*(_QWORD *)(v73 + 192) + 16LL);
  if ( (*(_BYTE *)(v74 + 309) & 1) == 0 )
    v74 = sub_1C7DBA4(v72);
  myServantOrNpcRestrictionEntityList = **(System_Collections_Generic_List_object__o ***)(v74 + 184);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_155;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_155;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         (QuestRestrictionInfoMaster_o *)myServantOrNpcRestrictionEntityList,
         &v97,
         this->fields.questId,
         this->fields.questPhase,
         0) )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v97;
    if ( !v97 )
      goto LABEL_155;
    if ( QuestRestrictionInfoEntity__HasFlag(v97, 0x100000, 0) )
    {
      this->fields.isNoSupportBattle = 1;
      goto LABEL_107;
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v97;
    if ( !v97 )
      goto LABEL_155;
    HasFlag = QuestRestrictionInfoEntity__HasFlag(v97, 0x400000000000000LL, 0);
    this->fields.isNoSupportBattle = HasFlag;
    if ( HasFlag )
      goto LABEL_107;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v97;
    if ( !v97 )
      goto LABEL_155;
    v78 = QuestRestrictionInfoEntity__HasFlag(v97, 0x80000, 0);
    this->fields.isSupportOnlyForceBattle = v78;
    if ( v78 )
    {
LABEL_107:
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v97;
      if ( v97 )
      {
        this->fields.isNpcMultipleBattle = QuestRestrictionInfoEntity__HasFlag(v97, 0x10000000, 0);
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v97;
        if ( v97 )
        {
          this->fields.isNpcOnlyBattle = QuestRestrictionInfoEntity__HasFlag(v97, 0x20000000, 0);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v97;
          if ( v97 )
          {
            this->fields.isNpcEditablePos = QuestRestrictionInfoEntity__HasFlag(v97, 0x800000000LL, 0);
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v97;
            if ( v97 )
            {
              this->fields.isNotTransitionSupportList = QuestRestrictionInfoEntity__HasFlag(v97, 0x80000000000000LL, 0);
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v97;
              if ( v97 )
              {
                QuestRestrictionInfoEntity__GetOverwriteLimitCountSvtIds(
                  v97,
                  &this->fields.overwriteLimitCountSvtIds,
                  &this->fields.overwriteLimitCounts,
                  &this->fields.overwriteLimitCountIconIds,
                  0);
                myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v97;
                if ( v97 )
                {
                  v81 = QuestRestrictionInfoEntity__HasFlag(v97, 0x400000000000000LL, 0);
                  this->fields.isAllOutBattle = v81;
                  if ( v81 )
                  {
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_155;
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_((DataManager_o *)myServantOrNpcRestrictionEntityList, (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_155;
                    this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                                         (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                                         this->fields.questId,
                                                         17,
                                                         0);
                  }
                  if ( entity )
                    this->fields.isFatigure = QuestEntity__HasFlag_42234640(
                                                (QuestEntity_o *)entity,
                                                0x200000,
                                                this->fields.questPhase,
                                                0);
                  if ( v98 )
                  {
                    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v98, 0);
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v98;
                    if ( !v98 )
                      goto LABEL_155;
                    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v98, 0);
                  }
                  else
                  {
                    this->fields.correctionIconId = -1;
                  }
                  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v97;
                  if ( v97 )
                  {
                    this->fields.isNotSingleSupportOnly = QuestRestrictionInfoEntity__HasFlag(
                                                            v97,
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
LABEL_155:
      sub_1C2D6EC(myServantOrNpcRestrictionEntityList, v6);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v97;
    if ( !v97 )
      goto LABEL_155;
    if ( QuestRestrictionInfoEntity__HasFlag(v97, 0x1000000, 0) )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v97;
      if ( !v97 )
        goto LABEL_155;
      this->fields.eventDeckNum = QuestRestrictionInfoEntity__GetUserEventDeckNo(v97, 0);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1C2D538(int___TypeInfo, 1);
    if ( !v97 )
      goto LABEL_155;
    v79 = myServantOrNpcRestrictionEntityList;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetSingleForceSvtId(
                                                                                         v97,
                                                                                         0);
    if ( !v79 )
      goto LABEL_155;
    if ( v79->fields._size )
    {
      LODWORD(v79->fields._syncRoot) = (_DWORD)myServantOrNpcRestrictionEntityList;
      this->fields.svtIdForceBattleList = (struct System_Int32_array *)v79;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtIdForceBattleList, (int32_t)v79, v7, v80);
      goto LABEL_107;
    }
LABEL_156:
    sub_1C2D6F4(myServantOrNpcRestrictionEntityList, v6, v7);
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_42234640((QuestEntity_o *)entity, 0x100000, this->fields.questPhase, 0) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
      if ( !entity )
        goto LABEL_155;
      HasFlag_42234640 = QuestEntity__HasFlag_42234640(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0);
      this->fields.isNoSupportBattle = HasFlag_42234640;
      if ( !HasFlag_42234640 )
      {
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
        if ( !entity )
          goto LABEL_155;
        v83 = QuestEntity__HasFlag_42234640((QuestEntity_o *)entity, 0x80000, this->fields.questPhase, 0);
        this->fields.isSupportOnlyForceBattle = v83;
        if ( !v83 )
        {
          if ( v98 )
          {
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
            if ( !entity )
              goto LABEL_155;
            if ( QuestEntity__HasFlag_42234640((QuestEntity_o *)entity, 0x1000000, this->fields.questPhase, 0) )
            {
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v98;
              if ( !v98 )
                goto LABEL_155;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v98, 0);
            }
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1C2D538(
                                                                                                 int___TypeInfo,
                                                                                                 1);
            if ( !v98 )
              goto LABEL_155;
            v84 = myServantOrNpcRestrictionEntityList;
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__GetSingleForceSvtId(
                                                                                                 v98,
                                                                                                 0);
            if ( !v84 )
              goto LABEL_155;
            if ( !v84->fields._size )
              goto LABEL_156;
            LODWORD(v84->fields._syncRoot) = (_DWORD)myServantOrNpcRestrictionEntityList;
            this->fields.svtIdForceBattleList = (struct System_Int32_array *)v84;
            sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtIdForceBattleList, (int32_t)v84, v7, v85);
          }
        }
      }
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_155;
    this->fields.isFatigure = QuestEntity__HasFlag_42234640(
                                (QuestEntity_o *)entity,
                                0x200000,
                                this->fields.questPhase,
                                0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_155;
    v86 = QuestEntity__HasFlag_42234640((QuestEntity_o *)entity, 0x400000000000000LL, this->fields.questPhase, 0);
    this->fields.isAllOutBattle = v86;
    if ( v86 )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_155;
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                           (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_155;
      this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                           (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                           this->fields.questId,
                                           17,
                                           0);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_155;
    this->fields.isNpcMultipleBattle = QuestEntity__HasFlag_42234640(
                                         (QuestEntity_o *)entity,
                                         0x10000000,
                                         this->fields.questPhase,
                                         0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_155;
    this->fields.isNpcOnlyBattle = QuestEntity__HasFlag_42234640(
                                     (QuestEntity_o *)entity,
                                     0x20000000,
                                     this->fields.questPhase,
                                     0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_155;
    this->fields.isNpcEditablePos = QuestEntity__HasFlag_42234640(
                                      (QuestEntity_o *)entity,
                                      0x800000000LL,
                                      this->fields.questPhase,
                                      0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_155;
    this->fields.isNotTransitionSupportList = QuestEntity__HasFlag_42234640(
                                                (QuestEntity_o *)entity,
                                                0x80000000000000LL,
                                                this->fields.questPhase,
                                                0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_155;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_42234640(
                                            (QuestEntity_o *)entity,
                                            0x1000000000000000LL,
                                            this->fields.questPhase,
                                            0);
  }
  if ( v98 )
  {
    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v98, 0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v98;
    if ( !v98 )
      goto LABEL_155;
    QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
      v98,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      &this->fields.overwriteLimitCountRangeTypes,
      0);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v98;
    if ( !v98 )
      goto LABEL_155;
    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v98, 0);
  }
  else
  {
    this->fields.correctionIconId = -1;
    this->fields.overwriteLimitCountSvtIds = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.overwriteLimitCountSvtIds, 0, v75, v76);
    this->fields.overwriteLimitCounts = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.overwriteLimitCounts, 0, v87, v88);
    this->fields.overwriteLimitCountIconIds = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.overwriteLimitCountIconIds, 0, v89, v90);
    this->fields.overwriteLimitCountRangeTypes = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.overwriteLimitCountRangeTypes, 0, v91, v92);
  }
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
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_T__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct System_String_o **p_summary; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C2865D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2865D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.slotType = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.individualityList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v6,
    (const MethodInfo_376EB38 *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rangeTypeList, (int32_t)v6, v7, v8);
  v9 = StringLiteral_1/*""*/;
  this->fields.summary = (struct System_String_o *)StringLiteral_1/*""*/;
  p_summary = &this->fields.summary;
  sub_1C2D434((CGThumbnailListItem_o *)p_summary, v9, v11, v12);
  *((_WORD *)p_summary + 4) = 1;
}


void QuestRestrictionInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2865E & 1) == 0 )
  {
    sub_1C2D490(&QuestRestrictionInfo___c_TypeInfo);
    byte_4C2865E = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(QuestRestrictionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRestrictionInfo___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionInfo___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)QuestRestrictionInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void QuestRestrictionInfo___c___ctor(QuestRestrictionInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__109_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C2D6EC(this, 0);
  return e->fields.type != 1 || RestrictionEntity__IsRestrictionTarget(e, 1, 0);
}


System_String_o *QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__109_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C2D6EC(this, 0);
  return e->fields.name;
}


System_String_o *QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__109_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C2D6EC(this, 0);
  return e->fields.name;
}


bool QuestRestrictionInfo___c___GetRestrictionMessageEntityList_b__111_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  unsigned int v3; // w8
  _BOOL4 v4; // w0

  if ( !e )
    sub_1C2D6EC(this, 0);
  v3 = e->fields.type - 1;
  if ( v3 > 0x10 )
    LOBYTE(v4) = 0;
  else
    return (0x1100Bu >> v3) & 1;
  return v4;
}


System_String_o *QuestRestrictionInfo___c___GetRestrictionMessage_b__110_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C2D6EC(this, 0);
  return e->fields.name;
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__102_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C2D6EC(this, 0);
  return e->fields.type == 1 && e->fields.targetVals != 0;
}


bool QuestRestrictionInfo___c___IsClassRestriction_b__102_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C2D6EC(this, 0);
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
  const MethodInfo *v10; // x3

  if ( (byte_4C28660 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_int____77996856);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&Method_QuestRestrictionInfo___c__IsClassRestriction_b__102_4__);
    this = (QuestRestrictionInfo___c_o *)sub_1C2D490(&QuestRestrictionInfo___c_TypeInfo);
    byte_4C28660 = 1;
  }
  if ( !e )
    sub_1C2D6EC(this, e);
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
      _9__102_4 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(_9__102_4, v7, Method_QuestRestrictionInfo___c__IsClassRestriction_b__102_4__, 0);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__102_4 = _9__102_4;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__102_4, (int32_t)_9__102_4, v9, v10);
    }
    return !BasicHelper__Any_int__51083888(
              targetVals,
              (System_Func_T__bool__o *)_9__102_4,
              (const MethodInfo_30B7A70 *)Method_BasicHelper_Any_int____77996856);
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
  if ( (byte_4C28661 & 1) == 0 )
  {
    sub_1C2D490(&Individuality_TypeInfo);
    byte_4C28661 = 1;
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

  if ( (byte_4C2865F & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_1C2D490(&Method_System_Collections_Generic_List_int____get_Count__);
    byte_4C2865F = 1;
  }
  if ( !s || (individualityList = s->fields.individualityList) == 0 )
    sub_1C2D6EC(this, s);
  return individualityList->fields._size > 0;
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__99_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C2D6EC(this, 0);
  return e->fields.type == 1;
}


bool QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__99_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionWholeEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C2D6EC(this, 0);
  return e->fields.type == 1;
}


bool QuestRestrictionInfo___c___Setup_b__85_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.type == 1;
}


bool QuestRestrictionInfo___c___Setup_b__85_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.type == 3;
}


bool QuestRestrictionInfo___c___Setup_b__85_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.type == 2;
}


bool QuestRestrictionInfo___c___Setup_b__85_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return RestrictionEntity__IsRestriction(e, this->fields.individuality, 0);
}


void QuestRestrictionInfo___c__DisplayClass185_0___ctor(
        QuestRestrictionInfo___c__DisplayClass185_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass185_0___IsMyServantOrNpcRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass185_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass186_0___ctor(
        QuestRestrictionInfo___c__DisplayClass186_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass186_0___IsSelectableNormalSupport_b__0(
        QuestRestrictionInfo___c__DisplayClass186_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass187_0___ctor(
        QuestRestrictionInfo___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass187_0___IsNotIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass187_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.pos;
}


void QuestRestrictionInfo___c__DisplayClass190_0___ctor(
        QuestRestrictionInfo___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass190_0___GetRestrictedName_b__0(
        QuestRestrictionInfo___c__DisplayClass190_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_o *questRestrictionEntity; // x8

  if ( !x || (questRestrictionEntity = this->fields.questRestrictionEntity) == 0 )
    sub_1C2D6EC(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass193_0___ctor(
        QuestRestrictionInfo___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass193_0___GetMyServantOrNpcSvtIdList_b__0(
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
    sub_1C2D6F4(this, x, method);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1C2D6EC(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass194_0___ctor(
        QuestRestrictionInfo___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass194_0___GetMyServantOrSupportTargetPos_b__0(
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
    sub_1C2D6F4(this, x, method);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1C2D6EC(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void QuestRestrictionInfo___c__DisplayClass207_0___ctor(
        QuestRestrictionInfo___c__DisplayClass207_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass207_0___GetMyServantOrNpcSvtIdUnionNpcList_b__0(
        QuestRestrictionInfo___c__DisplayClass207_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return RestrictionEntity__GetSpecifiedPosition(x, 0) == this->fields.index;
}


void QuestRestrictionInfo___c__DisplayClass217_0___ctor(
        QuestRestrictionInfo___c__DisplayClass217_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRestrictionInfo___c__DisplayClass217_0___GetGrandServantRestrictionEntity_b__0(
        QuestRestrictionInfo___c__DisplayClass217_0_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c__DisplayClass217_0_o *v4; // x19
  System_Int32_array *targetVals2; // x20
  System_Func_int__bool__o *_9__1; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v4 = this;
  if ( (byte_4C28662 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_int____77996856);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    this = (QuestRestrictionInfo___c__DisplayClass217_0_o *)sub_1C2D490(&Method_QuestRestrictionInfo___c__DisplayClass217_0__GetGrandServantRestrictionEntity_b__1__);
    byte_4C28662 = 1;
  }
  if ( !entity )
    sub_1C2D6EC(this, entity);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.targetVals2, 0)
    && v4->fields.initPos == 1 )
  {
    return 1;
  }
  targetVals2 = entity->fields.targetVals2;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_QuestRestrictionInfo___c__DisplayClass217_0__GetGrandServantRestrictionEntity_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  return BasicHelper__Any_int__51083888(
           targetVals2,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_30B7A70 *)Method_BasicHelper_Any_int____77996856);
}


bool QuestRestrictionInfo___c__DisplayClass217_0___GetGrandServantRestrictionEntity_b__1(
        QuestRestrictionInfo___c__DisplayClass217_0_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  return this->fields.initPos == pos;
}