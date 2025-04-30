void __fastcall QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.questId = questId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo___ctor_41465016(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct RestrictionEntity_array *RestrictionList_40634896; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  const MethodInfo *v16; // x4

  if ( (byte_4A4F736 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestRestrictionMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A4F736 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v11);
  }
  RestrictionList_40634896 = QuestRestrictionMaster__getRestrictionList_40634896(
                               (QuestRestrictionMaster_o *)Instance,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               0LL);
  this->fields.restrictionEntityList = RestrictionList_40634896;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.restrictionEntityList, (int32_t)RestrictionList_40634896, v13, v14);
  QuestRestrictionInfo__Setup(this, v15, questId, questPhase, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo___ctor_41474620(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        RestrictionEntity_o *overwriteRestiction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  struct QuestRestrictionEntity_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x23
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  const MethodInfo *v25; // x4
  __int64 v26; // x0

  if ( (byte_4A4F737 & 1) == 0 )
  {
    sub_1B863B8(&QuestRestrictionEntity___TypeInfo, *(_QWORD *)&eventId);
    sub_1B863B8(&RestrictionEntity___TypeInfo, v11);
    byte_4A4F737 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v12 = (struct QuestRestrictionEntity_array *)sub_1B86460(QuestRestrictionEntity___TypeInfo, 0LL);
  this->fields.questRestrictionEntityList = v12;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questRestrictionEntityList, (int32_t)v12, v13, v14);
  if ( overwriteRestiction )
  {
    v15 = sub_1B86460(RestrictionEntity___TypeInfo, 1LL);
    if ( !v15 )
      sub_1B86614(0LL, v16);
    v17 = v15;
    v18 = sub_1B864F4(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
    if ( !v18 )
    {
      v26 = sub_1B86638(0LL);
      sub_1B864E0(v26, 0LL);
    }
    if ( !*(_DWORD *)(v17 + 24) )
      sub_1B8661C(v18, v19);
    *(_QWORD *)(v17 + 32) = overwriteRestiction;
    sub_1B8635C((CGThumbnailListItem_o *)(v17 + 32), (int32_t)overwriteRestiction, v20, v21);
  }
  else
  {
    v17 = sub_1B86460(RestrictionEntity___TypeInfo, 0LL);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v17;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.restrictionEntityList, v17, v22, v23);
  QuestRestrictionInfo__Setup(this, v24, questId, questPhase, v25);
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  int32_t v31; // w26
  System_Collections_Generic_IEnumerable_TSource__o *FixedServantPositionSvtIdList; // x0
  BalanceConfig_c *v33; // x0
  int v34; // w8
  System_Collections_Generic_IEnumerable_TSource__o *FixedMyServantPositionSvtIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  char v37; // w27
  System_Collections_Generic_IEnumerable_TSource__o *NeedStartingSvtIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  BalanceConfig_c *v40; // x0
  int32_t v41; // w23
  System_Collections_Generic_IEnumerable_TSource__o *FixedPositionSvtIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Collections_Generic_List_object__o *positionsList; // x8
  char v45; // w22
  System_Collections_Generic_IEnumerable_TSource__o *second; // [xsp+8h] [xbp-68h]

  if ( (byte_4A4F757 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, isFixedServantPositionRestriction);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_int___, v22);
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, v23);
    sub_1B863B8(&Method_System_Linq_Enumerable_Intersect_int___, v24);
    sub_1B863B8(&Method_System_Collections_Generic_List_bool____get_Count__, v25);
    sub_1B863B8(&Method_System_Collections_Generic_List_bool____get_Item__, v26);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    byte_4A4F757 = 1;
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
             (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        v33 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v33 = BalanceConfig_TypeInfo;
        }
        *isFixedServantPositionRestriction = v33->static_fields->DeckMainMemberMax <= num;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  v31 = 0;
  while ( v31 < SLODWORD(Instance->fields.m_CancellationTokenSource) )
  {
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v31,
                                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_67;
    if ( *(&Instance->fields._DispLog + num) )
      goto LABEL_22;
    Instance = (DataManager_o *)this->fields.myServantPositionsList;
    ++v31;
    if ( !Instance )
      goto LABEL_15;
  }
  v31 = 0;
LABEL_22:
  if ( isFollower )
  {
    Instance = (DataManager_o *)this->fields.myServantPositionsList;
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v31,
                                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_67;
    v34 = *((unsigned __int8 *)&Instance->fields._DispLog + num);
  }
  else
  {
    FixedMyServantPositionSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetFixedMyServantPositionSvtIdList(
                                                                                             this,
                                                                                             (int32_t)v29,
                                                                                             v30);
    if ( !FixedMyServantPositionSvtIdList )
      goto LABEL_37;
    v36 = System_Linq_Enumerable__Intersect_int_(
            FixedMyServantPositionSvtIdList,
            second,
            (const MethodInfo_2F95B84 *)Method_System_Linq_Enumerable_Intersect_int___);
    Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                  v36,
                                  (const MethodInfo_2F7B3AC *)Method_System_Linq_Enumerable_Any_int___);
    if ( !this->fields.myServantPositionsList )
      goto LABEL_15;
    v37 = (char)Instance;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this->fields.myServantPositionsList,
                                  v31,
                                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_67;
    v34 = *((unsigned __int8 *)&Instance->fields._DispLog + num);
    if ( (v37 & 1) != 0 )
    {
      if ( !*(&Instance->fields._DispLog + num) )
        goto LABEL_37;
      *isFixedServantPositionAgreement = 1;
      goto LABEL_36;
    }
  }
  if ( !v34 )
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
                                                                                   v29);
    if ( NeedStartingSvtIdList )
    {
      v39 = System_Linq_Enumerable__Intersect_int_(
              NeedStartingSvtIdList,
              second,
              (const MethodInfo_2F95B84 *)Method_System_Linq_Enumerable_Intersect_int___);
      if ( System_Linq_Enumerable__Any_int_(v39, (const MethodInfo_2F7B3AC *)Method_System_Linq_Enumerable_Any_int___) )
      {
        v40 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v40 = BalanceConfig_TypeInfo;
        }
        *isFixedServantPositionRestriction = v40->static_fields->DeckMainMemberMax <= num;
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
  v41 = 0;
  while ( v41 < SLODWORD(Instance->fields.m_CancellationTokenSource) )
  {
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v41,
                                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_bool____get_Item__);
    if ( !Instance )
      goto LABEL_15;
    if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
      goto LABEL_67;
    if ( *(&Instance->fields._DispLog + num) )
      goto LABEL_57;
    Instance = (DataManager_o *)this->fields.positionsList;
    ++v41;
    if ( !Instance )
      goto LABEL_15;
  }
  v41 = 0;
LABEL_57:
  FixedPositionSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetFixedPositionSvtIdList(
                                                                                  this,
                                                                                  (int32_t)v29,
                                                                                  v30);
  if ( !FixedPositionSvtIdList )
    return;
  v43 = System_Linq_Enumerable__Intersect_int_(
          FixedPositionSvtIdList,
          second,
          (const MethodInfo_2F95B84 *)Method_System_Linq_Enumerable_Intersect_int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                v43,
                                (const MethodInfo_2F7B3AC *)Method_System_Linq_Enumerable_Any_int___);
  positionsList = (System_Collections_Generic_List_object__o *)this->fields.positionsList;
  if ( !positionsList
    || (v45 = (char)Instance,
        (Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                       positionsList,
                                       v41,
                                       (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_bool____get_Item__)) == 0LL) )
  {
LABEL_15:
    sub_1B86614(Instance, v29);
  }
  if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
LABEL_67:
    sub_1B8661C(Instance, v29);
  if ( (v45 & 1) != 0 )
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1B8661C(this, *(_QWORD *)&svtId);
  return overwriteLimitCounts->m_Items[v6 + 1];
}


int32_t __fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41502848(
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
  if ( (byte_4A4F760 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B863B8(
                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                       userServantEntity);
    byte_4A4F760 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_20;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v16, 0LL);
  this = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(v4, v7, v8);
  if ( !this )
LABEL_20:
    sub_1B86614(this, userServantEntity);
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
      this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v17, 0LL);
      if ( (_DWORD)this == v12 )
        return v12;
      dialogMessageInfoDictionary = v10->fields.dialogMessageInfoDictionary;
      if ( (int)++v11 >= (int)dialogMessageInfoDictionary )
        goto LABEL_15;
    }
LABEL_19:
    sub_1B8661C(this, userServantEntity);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Int32_array *overwriteLimitCountSvtIds; // x8
  unsigned __int64 v12; // x22
  __int64 v13; // x23
  struct System_Int32_array *overwriteLimitCounts; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_4A4F75F & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4A4F75F = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( overwriteLimitCountSvtIds
    && this->fields.overwriteLimitCounts
    && (int)*(_QWORD *)&overwriteLimitCountSvtIds->max_length >= 1 )
  {
    v12 = 0LL;
    v13 = (unsigned int)*(_QWORD *)&overwriteLimitCountSvtIds->max_length - 1LL;
    do
    {
      if ( v12 >= overwriteLimitCountSvtIds->max_length )
LABEL_21:
        sub_1B8661C(v9, v10);
      if ( overwriteLimitCountSvtIds->m_Items[v12 + 1] == svtId )
      {
        overwriteLimitCounts = this->fields.overwriteLimitCounts;
        if ( !overwriteLimitCounts )
          break;
        if ( v12 >= overwriteLimitCounts->max_length )
          goto LABEL_21;
        if ( !v8 )
          break;
        v10 = (unsigned int)overwriteLimitCounts->m_Items[v12 + 1];
        items = v8->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            v10,
            *(const MethodInfo_35DF934 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = size + 1;
          items->m_Items[size + 1] = v10;
        }
      }
      if ( v13 == v12 )
        goto LABEL_19;
      overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
      ++v12;
    }
    while ( overwriteLimitCountSvtIds );
LABEL_18:
    sub_1B86614(v9, v10);
  }
LABEL_19:
  if ( !v8 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  __int64 v20; // x21
  QuestRestrictionInfo_SlotInfo_o *v21; // x8
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x21
  int max_length; // w8
  unsigned int v24; // w22
  __int64 v25; // x23
  RestrictionWholeEntity_o *v26; // x25
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x26
  unsigned __int64 v29; // x27
  int v30; // w8
  unsigned int v31; // w9
  struct QuestRestrictionInfo_SlotInfo_array *v32; // x8
  QuestRestrictionInfo_SlotInfo_o *v33; // x8
  System_Collections_Generic_IEnumerable_RestrictionEntity__o *RestrictionMessageEntityList; // x19
  QuestRestrictionInfo___c_c *v36; // x8
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__107_0; // x20
  Il2CppObject *v39; // x21
  struct QuestRestrictionInfo___c_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  QuestRestrictionInfo___c_c *v44; // x8
  System_Func_TSource__TResult__o *_9__107_2; // x20
  Il2CppObject *v46; // x21
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct QuestRestrictionInfo___c_StaticFields *v49; // x0
  CGThumbnailListItem_o *p__9__107_2; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v51; // x8
  QuestRestrictionInfo_SlotInfo_o *v52; // x8
  Il2CppObject *v53; // x21
  struct QuestRestrictionInfo___c_StaticFields *v54; // x0
  System_Collections_Generic_IEnumerable_string__o *v55; // x0

  v8 = this;
  if ( (byte_4A4F749 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&initPos);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v10);
    sub_1B863B8(&System_Func_RestrictionEntity__bool__TypeInfo, v11);
    sub_1B863B8(&System_Func_RestrictionEntity__string__TypeInfo, v12);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_0__, v13);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_1__, v14);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_2__, v15);
    sub_1B863B8(&QuestRestrictionInfo___c_TypeInfo, v16);
    sub_1B863B8(&StringLiteral_43/*"\n"*/, v17);
    this = (QuestRestrictionInfo_o *)sub_1B863B8(&StringLiteral_1/*""*/, v18);
    byte_4A4F749 = 1;
  }
  if ( !v8->fields.restrictionBaseEntity )
  {
    RestrictionMessageEntityList = QuestRestrictionInfo__GetRestrictionMessageEntityList(
                                     v8,
                                     *(const MethodInfo **)&initPos);
    v36 = QuestRestrictionInfo___c_TypeInfo;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v36 = QuestRestrictionInfo___c_TypeInfo;
    }
    static_fields = v36->static_fields;
    if ( initPos < 1 )
    {
      _9__107_2 = (System_Func_TSource__TResult__o *)static_fields->__9__107_2;
      if ( _9__107_2 )
      {
LABEL_61:
        v55 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                                    _9__107_2,
                                                                    (const MethodInfo_2FA1274 *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
        return System_String__Join_61687752((System_String_o *)StringLiteral_43/*"\n"*/, v55, 0LL);
      }
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = QuestRestrictionInfo___c_TypeInfo;
      }
      v53 = (Il2CppObject *)v36->static_fields->__9;
      _9__107_2 = (System_Func_TSource__TResult__o *)sub_1B86604(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__107_2,
        v53,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_2__,
        0LL);
      v54 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v54->__9__107_2 = (struct System_Func_RestrictionEntity__string__o *)_9__107_2;
      p__9__107_2 = (CGThumbnailListItem_o *)&v54->__9__107_2;
    }
    else
    {
      _9__107_0 = (System_Func_object__bool__o *)static_fields->__9__107_0;
      if ( !_9__107_0 )
      {
        if ( !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          v36 = QuestRestrictionInfo___c_TypeInfo;
        }
        v39 = (Il2CppObject *)v36->static_fields->__9;
        _9__107_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__107_0,
          v39,
          Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_0__,
          0LL);
        v40 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v40->__9__107_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__107_0;
        sub_1B8635C((CGThumbnailListItem_o *)&v40->__9__107_0, (int32_t)_9__107_0, v41, v42);
      }
      v43 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
              (System_Func_TSource__bool__o *)_9__107_0,
              (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v44 = QuestRestrictionInfo___c_TypeInfo;
      RestrictionMessageEntityList = (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)v43;
      if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v44 = QuestRestrictionInfo___c_TypeInfo;
      }
      _9__107_2 = (System_Func_TSource__TResult__o *)v44->static_fields->__9__107_1;
      if ( _9__107_2 )
        goto LABEL_61;
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v44 = QuestRestrictionInfo___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v44->static_fields->__9;
      _9__107_2 = (System_Func_TSource__TResult__o *)sub_1B86604(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__107_2,
        v46,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__107_1__,
        0LL);
      v49 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v49->__9__107_1 = (struct System_Func_RestrictionEntity__string__o *)_9__107_2;
      p__9__107_2 = (CGThumbnailListItem_o *)&v49->__9__107_1;
    }
    sub_1B8635C(p__9__107_2, (int32_t)_9__107_2, v47, v48);
    goto LABEL_61;
  }
  if ( initPos >= 1 )
  {
    slotInfos = v8->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_64;
    v20 = initPos - 1LL;
    if ( (unsigned int)v20 >= slotInfos->max_length )
      goto LABEL_63;
    v21 = slotInfos->m_Items[v20];
    if ( !v21 )
      goto LABEL_64;
    this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v21->fields.summary, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v51 = v8->fields.slotInfos;
      if ( v51 )
      {
        if ( (unsigned int)v20 >= v51->max_length )
          goto LABEL_63;
        v52 = v51->m_Items[v20];
        if ( v52 )
          return v52->fields.summary;
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
    sub_1B86614(this, *(_QWORD *)&initPos);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return v8->fields.confirmRestrictionMessage;
  v24 = 0;
  v25 = pos - 1LL;
  while ( 1 )
  {
    if ( v24 >= max_length )
      goto LABEL_63;
    v26 = restrictionWholeEntities->m_Items[v24];
    if ( !v26 )
      goto LABEL_64;
    type = v26->fields.type;
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
        v32 = v8->fields.slotInfos;
        if ( !v32 )
          goto LABEL_64;
        if ( (unsigned int)v25 >= v32->max_length )
          goto LABEL_63;
        v33 = v32->m_Items[v25];
        if ( !v33 )
          goto LABEL_64;
        if ( v33->fields.slotType != 5 )
        {
          this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v26->fields.summary, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            return v26->fields.summary;
        }
      }
    }
    targetVals2 = v26->fields.targetVals2;
    if ( !targetVals2 )
      goto LABEL_64;
    if ( (unsigned int)*(_QWORD *)&targetVals2->max_length == 1 )
    {
      v29 = 0LL;
      v30 = 1;
      v31 = 1;
      while ( v29 < v31 )
      {
        if ( targetVals2->m_Items[v29 + 1] == pos )
        {
          this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v26->fields.summary, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            return v26->fields.summary;
          v30 = targetVals2->max_length;
        }
        ++v29;
        v31 = v30;
        if ( (__int64)v29 >= v30 )
          goto LABEL_36;
      }
LABEL_63:
      sub_1B8661C(this, *(_QWORD *)&initPos);
    }
LABEL_36:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v24 >= max_length )
      return v8->fields.confirmRestrictionMessage;
  }
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1B8661C(this, *(_QWORD *)&svtId);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x20
  PartyOrganizationUtility_o *Instance; // x0
  __int64 id; // x1
  struct RestrictionMessageEntity_array *restrictionMessageEntities; // x23
  int v14; // w8
  unsigned int v15; // w24
  RestrictionMessageEntity_o *v16; // x25
  int32_t frequencyType; // w8
  Il2CppObject *v18; // x22
  UserQuestEntity_o *v19; // x22
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  int max_length; // w9
  int v25; // w24
  int32_t v26; // w21
  int32_t *v27; // x25
  int32_t v28; // w8
  Il2CppObject *MasterData_object; // x23
  UserQuestEntity_o *v30; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10

  if ( (byte_4A4F75C & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B863B8(&NetworkManager_TypeInfo, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    byte_4A4F75C = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !this->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
      goto LABEL_67;
    max_length = questRestrictionEntityList->max_length;
    v25 = max_length - 1;
    if ( max_length < 1 )
      goto LABEL_65;
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= questRestrictionEntityList->max_length )
LABEL_68:
        sub_1B8661C(Instance, id);
      v27 = (int32_t *)questRestrictionEntityList->m_Items[v26];
      if ( !v27 )
        goto LABEL_67;
      v28 = v27[7];
      if ( v28 == 1 )
        break;
      if ( v28 == 2 )
      {
        Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !Instance )
          goto LABEL_67;
        Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                                   Instance,
                                                   v27[4],
                                                   v27[5],
                                                   v27[6],
                                                   1,
                                                   0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_57;
      }
      else if ( v28 == 3 )
      {
        goto LABEL_57;
      }
LABEL_62:
      if ( v25 == v26 )
        goto LABEL_65;
      questRestrictionEntityList = this->fields.questRestrictionEntityList;
      ++v26;
      if ( !questRestrictionEntityList )
        goto LABEL_67;
    }
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4A48C25 )
    {
      sub_1B863B8(&NetworkManager_TypeInfo, id);
      byte_4A48C25 = 1;
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
                                               v27[4],
                                               0LL);
    if ( Instance )
    {
      v30 = (UserQuestEntity_o *)Instance;
      Instance = (PartyOrganizationUtility_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
      if ( (_DWORD)Instance )
        goto LABEL_62;
      Instance = (PartyOrganizationUtility_o *)UserQuestEntity__HasStatus(v30, 16, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_62;
    }
LABEL_57:
    if ( !v10 )
      goto LABEL_67;
    items = v10->fields._items;
    v32 = Method_System_Collections_Generic_List_int__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_67;
    size = v10->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v10,
        v26,
        *(const MethodInfo_35DF934 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v10->fields._size = size + 1;
      items->m_Items[size + 1] = v26;
    }
    goto LABEL_62;
  }
  restrictionMessageEntities = this->fields.restrictionMessageEntities;
  if ( !restrictionMessageEntities )
    goto LABEL_67;
  v14 = restrictionMessageEntities->max_length;
  if ( v14 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v14 )
        goto LABEL_68;
      v16 = restrictionMessageEntities->m_Items[v15];
      if ( !v16 )
        goto LABEL_67;
      frequencyType = v16->fields.frequencyType;
      if ( frequencyType != 1 )
        break;
      Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      v18 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, id);
        byte_4A48C25 = 1;
      }
      Instance = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (PartyOrganizationUtility_o *)NetworkManager_TypeInfo;
      }
      if ( !v18 )
        goto LABEL_67;
      Instance = (PartyOrganizationUtility_o *)UserQuestMaster__getEntityFromId(
                                                 (UserQuestMaster_o *)v18,
                                                 *(_QWORD *)&Instance[1].fields.restrictionDialogHistoryList[1].fields._size,
                                                 this->fields.questId,
                                                 0LL);
      if ( !Instance )
        goto LABEL_27;
      v19 = (UserQuestEntity_o *)Instance;
      Instance = (PartyOrganizationUtility_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
      if ( !(_DWORD)Instance )
      {
        Instance = (PartyOrganizationUtility_o *)UserQuestEntity__HasStatus(v19, 16, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_27;
      }
LABEL_32:
      v14 = restrictionMessageEntities->max_length;
      if ( (int)++v15 >= v14 )
        goto LABEL_65;
    }
    if ( frequencyType == 2 )
    {
      Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                                 Instance,
                                                 this->fields.questId,
                                                 this->fields.questPhase,
                                                 v16->fields.id,
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
    if ( !v10 )
      goto LABEL_67;
    id = (unsigned int)v16->fields.id;
    v20 = v10->fields._items;
    v21 = Method_System_Collections_Generic_List_int__Add__;
    ++v10->fields._version;
    if ( !v20 )
      goto LABEL_67;
    v22 = v10->fields._size;
    if ( (unsigned int)v22 >= v20->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v10,
        id,
        *(const MethodInfo_35DF934 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v10->fields._size = v22 + 1;
      v20->m_Items[v22 + 1] = id;
    }
    goto LABEL_32;
  }
LABEL_65:
  if ( !v10 )
LABEL_67:
    sub_1B86614(Instance, id);
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessage(
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
  if ( (byte_4A4F75D & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B863B8(&StringLiteral_1/*""*/, *(_QWORD *)&n);
    byte_4A4F75D = 1;
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
    sub_1B86614(this, *(_QWORD *)&n);
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
    if ( questRestrictionEntityList->max_length > n )
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
    sub_1B8661C(this, *(_QWORD *)&n);
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


// local variable allocation has failed, the output may be wrong!
QuestRestrictionInfo_DialogMessageInfo_o *__fastcall QuestRestrictionInfo__GetDialogMessageInfo(
        QuestRestrictionInfo_o *this,
        int32_t messageId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *v8; // x0

  if ( (byte_4A4F773 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__,
      *(_QWORD *)&messageId);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__,
      v5);
    byte_4A4F773 = 1;
  }
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary
    || !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
          messageId,
          (const MethodInfo_326D958 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
  {
    return 0LL;
  }
  v8 = this->fields.dialogMessageInfoDictionary;
  if ( !v8 )
    sub_1B86614(0LL, v7);
  return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_int__object__o *)v8,
                                                       messageId,
                                                       (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageMySvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_monitor; // x20
  unsigned int v9; // w21
  RestrictionWholeEntity_o *v10; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4A4F776 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v4);
    this = (QuestRestrictionInfo_o *)sub_1B863B8(&StringLiteral_1/*""*/, v5);
    byte_4A4F776 = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v2->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_19;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1B8661C(this, method);
      v10 = restrictionWholeEntities->m_Items[v9];
      if ( !v10 )
        goto LABEL_19;
      if ( v10->fields.type == 5 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v10->fields.restrictionMessageId,
                                           (const MethodInfo_32142CC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v9 >= max_length )
        return *p_monitor;
    }
    if ( entity )
    {
      p_monitor = (System_String_o **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_19:
    sub_1B86614(this, method);
  }
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_monitor;
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageSupportSvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_monitor; // x20
  unsigned int v9; // w21
  RestrictionWholeEntity_o *v10; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4A4F778 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v4);
    this = (QuestRestrictionInfo_o *)sub_1B863B8(&StringLiteral_1/*""*/, v5);
    byte_4A4F778 = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v2->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_19;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1B8661C(this, method);
      v10 = restrictionWholeEntities->m_Items[v9];
      if ( !v10 )
        goto LABEL_19;
      if ( v10->fields.type == 6 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v10->fields.restrictionMessageId,
                                           (const MethodInfo_32142CC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v9 >= max_length )
        return *p_monitor;
    }
    if ( entity )
    {
      p_monitor = (System_String_o **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_19:
    sub_1B86614(this, method);
  }
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_monitor;
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageSvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_monitor; // x20
  unsigned int v9; // w21
  RestrictionWholeEntity_o *v10; // x25
  int32_t type; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4A4F775 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v4);
    this = (QuestRestrictionInfo_o *)sub_1B863B8(&StringLiteral_1/*""*/, v5);
    byte_4A4F775 = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v2->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_20;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1B8661C(this, method);
      v10 = restrictionWholeEntities->m_Items[v9];
      if ( !v10 )
        goto LABEL_20;
      type = v10->fields.type;
      if ( type == 8 || type == 4 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v10->fields.restrictionMessageId,
                                           (const MethodInfo_32142CC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v9 >= max_length )
        return *p_monitor;
    }
    if ( entity )
    {
      p_monitor = (System_String_o **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_20:
    sub_1B86614(this, method);
  }
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_monitor;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetDialogTargetName(
        QuestRestrictionInfo_o *this,
        int32_t n,
        int32_t restrictionId,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x21
  __int64 v7; // x1
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v9; // x19
  System_String_o **p_this_arg; // x20
  unsigned int v11; // w21
  __int64 v12; // x22
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x9
  Il2CppClass **v14; // x8
  int max_length; // w10
  Il2CppClass *v16; // x11
  int v17; // w11
  QuestRestrictionEntity_o *v18; // x12
  Il2CppClass *v19; // x8

  v6 = this;
  if ( (byte_4A4F75E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, *(_QWORD *)&n);
    this = (QuestRestrictionInfo_o *)sub_1B863B8(&StringLiteral_1/*""*/, v7);
    byte_4A4F75E = 1;
  }
  if ( v6->fields.restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.restrictionSlotDictionary;
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         n,
                                         (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( this )
      {
        dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
        v9 = this;
        if ( dialogMessageInfoDictionary < 1 )
        {
          p_this_arg = (System_String_o **)&StringLiteral_1/*""*/;
        }
        else
        {
          p_this_arg = (System_String_o **)&StringLiteral_1/*""*/;
          v11 = 0;
          while ( 1 )
          {
            if ( v11 >= dialogMessageInfoDictionary )
              goto LABEL_33;
            v12 = *((_QWORD *)&v9->fields.eventId + (int)v11);
            if ( !v12 )
              goto LABEL_32;
            this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v12 + 32), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              break;
            dialogMessageInfoDictionary = (int)v9->fields.dialogMessageInfoDictionary;
            if ( (int)++v11 >= dialogMessageInfoDictionary )
              return *p_this_arg;
          }
          p_this_arg = (System_String_o **)(v12 + 32);
        }
        return *p_this_arg;
      }
    }
LABEL_32:
    sub_1B86614(this, *(_QWORD *)&n);
  }
  questRestrictionEntityList = v6->fields.questRestrictionEntityList;
  v14 = &questRestrictionEntityList->obj.klass + n;
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
  v16 = v14[4];
  if ( !v16 )
    goto LABEL_32;
  if ( LODWORD(v16->_1.namespaze) == restrictionId || max_length < 1 )
  {
LABEL_27:
    if ( questRestrictionEntityList->max_length > n )
    {
      v19 = v14[4];
      if ( v19 )
      {
        p_this_arg = (System_String_o **)&v19->_1.this_arg;
        return *p_this_arg;
      }
      goto LABEL_32;
    }
LABEL_33:
    sub_1B8661C(this, *(_QWORD *)&n);
  }
  v17 = 0;
  while ( 1 )
  {
    v18 = questRestrictionEntityList->m_Items[v17];
    if ( !v18 )
      goto LABEL_32;
    if ( v18->fields.restrictionId == restrictionId )
      break;
    if ( max_length == ++v17 )
      goto LABEL_27;
  }
  p_this_arg = &v18->fields.title;
  return *p_this_arg;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestRestrictionInfo__GetDialogType(
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
      sub_1B8661C(this, *(_QWORD *)&n);
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
      sub_1B86614(this, n);
    }
  }
  else if ( !restrictionEntityList )
  {
    goto LABEL_18;
  }
LABEL_15:
  if ( restrictionEntityList->max_length <= n )
    goto LABEL_19;
  v10 = (RestrictionEntity_o *)v6[4];
  if ( !v10 )
    goto LABEL_18;
  return v10->fields.type;
}


bool __fastcall QuestRestrictionInfo__GetExplanationMessage(
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
  il2cpp_array_size_t v11; // w22
  QuestRestrictionEntity_o *v12; // x23

  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  v5 = this;
  if ( !restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
LABEL_13:
      sub_1B86614(this, message);
    max_length = questRestrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= questRestrictionEntityList->max_length )
          sub_1B8661C(this, message);
        v12 = questRestrictionEntityList->m_Items[v11];
        if ( !v12 )
          goto LABEL_13;
        this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v12->fields.noticeMessage, 0LL);
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
    *message = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)message, 0, (int32_t)method, v3);
    return 0;
  }
  this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(restrictionBaseEntity->fields.subMessage, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_14;
  v7 = v5->fields.restrictionBaseEntity;
  if ( !v7 )
    goto LABEL_13;
  noticeMessage = v7->fields.subMessage;
LABEL_16:
  *message = noticeMessage;
  sub_1B8635C((CGThumbnailListItem_o *)message, (int32_t)noticeMessage, (int32_t)method, v3);
  return 1;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A4F768 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_10145/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, v2);
    byte_4A4F768 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10145/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A4F767 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_10146/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, v2);
    byte_4A4F767 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10146/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetFixedMyServantPositionCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4F77E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_4A4F77E = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_1B86614(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v11.fields._current[1].monitor) )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1B86614(v8, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedMyServantPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4F77B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&idx);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____GetEnumerator__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4A4F77B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v14 )
      break;
    if ( !v11 )
      sub_1B86614(v14, v15);
    System_Collections_Generic_List_int___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v17.fields._current,
      (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v11 )
LABEL_15:
    sub_1B86614(fixedMyServantIndividualitiesList, v12);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_Int32_array *fixedMyServantSingleIndividualities; // x8
  int32_t ServantImageLimitSealAfter; // w22
  ServantEntity_o *v17; // x20
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v19; // x21
  unsigned int v20; // w24
  RestrictionSlotDetailEntity_o *v21; // x23
  System_Int32_array *Individuality; // x0
  struct RestrictionEntity_o *fixedMyServantSingleRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  int32_t max_length; // w9

  v10 = this;
  if ( (byte_4A4F759 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v13);
    this = (QuestRestrictionInfo_o *)sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4A4F759 = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !*(_QWORD *)&fixedMyServantSingleIndividualities->max_length )
      return 0;
    this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       svtId,
                                       dispLimitCount,
                                       0LL);
        this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( this )
          {
            this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               svtId,
                                               (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v17 = (ServantEntity_o *)this;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
              if ( this )
              {
                dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
                v19 = this;
                if ( dialogMessageInfoDictionary >= 1 )
                {
                  v20 = 0;
                  while ( 1 )
                  {
                    if ( v20 >= dialogMessageInfoDictionary )
                      goto LABEL_30;
                    v21 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v19->fields.eventId + (int)v20);
                    if ( !v21 )
                      goto LABEL_29;
                    if ( v21->fields.type == 1 )
                    {
                      if ( !v17 )
                        goto LABEL_29;
                      Individuality = ServantEntity__getIndividuality(v17, limitCount, ServantImageLimitSealAfter, 0LL);
                      this = (QuestRestrictionInfo_o *)RestrictionSlotDetailEntity__IsIndividuality(
                                                         v21,
                                                         Individuality,
                                                         0LL);
                      if ( ((unsigned __int8)this & 1) == 0 )
                        return 1;
                    }
                    dialogMessageInfoDictionary = (int)v19->fields.dialogMessageInfoDictionary;
                    if ( (int)++v20 >= dialogMessageInfoDictionary )
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
    sub_1B86614(this, *(_QWORD *)&svtId);
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
    sub_1B8661C(this, *(_QWORD *)&svtId);
  return targetVals->m_Items[num + 1] != svtId;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A4F75A & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_10144/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, v2);
    byte_4A4F75A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10144/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_int____o *fixedIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4F780 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_4A4F780 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_1B86614(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v11.fields._current[1].monitor) )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1B86614(v8, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_int____o *fixedIndividualitiesList; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4F77D & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&idx);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____GetEnumerator__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4A4F77D = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v14 )
      break;
    if ( !v11 )
      sub_1B86614(v14, v15);
    System_Collections_Generic_List_int___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)v17.fields._current,
      (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v11 )
LABEL_15:
    sub_1B86614(fixedIndividualitiesList, v12);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestRestrictionInfo__GetFixedServantPositionCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int v7; // w22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  int32_t v13; // w20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A4F756 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_4A4F756 = 1;
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v7 = 0;
    for ( i = v17; ; v7 += LODWORD(i.fields._current[1].monitor) )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v8 )
        break;
      if ( !i.fields._current )
        sub_1B86614(v8, v9);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  }
  else
  {
    v7 = 0;
  }
  v13 = v7 + this->fields.isNeedStarting;
  if ( !this->fields.isFixedPosition )
    return v13;
  fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
LABEL_30:
    sub_1B86614(fixedMyServantIndividualitiesList, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v17; ; v13 += LODWORD(i.fields._current[1].monitor) )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v14 )
      break;
    if ( !i.fields._current )
      sub_1B86614(v14, v15);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v13;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A4F758 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_10143/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, v2);
    byte_4A4F758 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10143/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, 0LL);
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
        QuestRestrictionInfo_o *this,
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
  System_Collections_Generic_List_int__o *v11; // x19
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  _BOOL8 v16; // x0
  __int64 v17; // x1
  _BOOL8 v18; // x0
  __int64 v19; // x1
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A4F755 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____GetEnumerator__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4A4F755 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( this->fields.restrictionBaseEntity )
  {
    v11 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v11,
      (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( this->fields.isFixedMyServantPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v22;
            ;
            System_Collections_Generic_List_int___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v14 )
          break;
        if ( !v11 )
          sub_1B86614(v14, v15);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isNeedStarting )
    {
      fixedMyServantIndividualitiesList = this->fields.needStartingIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v22;
            ;
            System_Collections_Generic_List_int___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v16 )
          break;
        if ( !v11 )
          sub_1B86614(v16, v17);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isFixedPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v22;
            ;
            System_Collections_Generic_List_int___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v18 )
          break;
        if ( !v11 )
          sub_1B86614(v18, v19);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( v11 )
    {
      if ( v11->fields._size > 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v11,
                 (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
      return 0LL;
    }
LABEL_38:
    sub_1B86614(fixedMyServantIndividualitiesList, v13);
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
  __int64 v2; // x1

  if ( (byte_4A4F754 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_10148/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, v2);
    byte_4A4F754 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10148/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, 0LL);
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
  if ( (byte_4A4F741 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B863B8(&StringLiteral_1/*""*/, *(_QWORD *)&restrictionWholeType);
    byte_4A4F741 = 1;
  }
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_15:
    sub_1B86614(this, *(_QWORD *)&restrictionWholeType);
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
        sub_1B8661C(this, *(_QWORD *)&restrictionWholeType);
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
System_String_o *__fastcall QuestRestrictionInfo__GetMessage_41484152(
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
  if ( (byte_4A4F742 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B863B8(&StringLiteral_1/*""*/, *(_QWORD *)&restrictionType);
    byte_4A4F742 = 1;
  }
  restrictionEntityList = v4->fields.restrictionEntityList;
  if ( !restrictionEntityList )
LABEL_15:
    sub_1B86614(this, *(_QWORD *)&restrictionType);
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
        sub_1B8661C(this, *(_QWORD *)&restrictionType);
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  System_Collections_Generic_List_object__o *v31; // x20
  void *IsNullOrEmpty; // x0
  System_String_o *summary; // x1
  System_String_o *v34; // x26
  System_String_o *v35; // x27
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x22
  int max_length; // w8
  unsigned int v56; // w23
  RestrictionWholeEntity_o *v57; // x29
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  int v64; // w8
  void *v65; // x21
  unsigned int v66; // w22
  __int64 v67; // x26
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  System_String_o *v70; // x0
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0

  if ( (byte_4A4F73F & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      *(_QWORD *)&pos);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, v21);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__ToArray__, v22);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v23);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v24);
    sub_1B863B8(&LocalizationManager_TypeInfo, v25);
    sub_1B863B8(&StringLiteral_10117/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v26);
    sub_1B863B8(&StringLiteral_10925/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, v27);
    sub_1B863B8(&StringLiteral_10926/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v28);
    sub_1B863B8(&StringLiteral_10922/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v29);
    sub_1B863B8(&StringLiteral_6386/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v30);
    byte_4A4F73F = 1;
  }
  v31 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_98;
  if ( !isSlotOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_6386/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10926/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
    v35 = (System_String_o *)IsNullOrEmpty;
    if ( !this->fields.isUniqueServant )
      goto LABEL_20;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10925/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0LL);
    summary = (System_String_o *)IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( uniqueServant )
        goto LABEL_12;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v34, (Il2CppObject *)IsNullOrEmpty, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( uniqueServant )
      {
LABEL_12:
        IsNullOrEmpty = System_String__Concat_61645176(summary, v35, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v31 )
          goto LABEL_100;
        goto LABEL_16;
      }
    }
    if ( !v31 )
      goto LABEL_100;
LABEL_16:
    items = v31->fields._items;
    v39 = Method_System_Collections_Generic_List_string__Add__;
    ++v31->fields._version;
    if ( !items )
      goto LABEL_100;
    size = v31->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        (Il2CppObject *)summary,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &items->obj.klass + size;
      v31->fields._size = size + 1;
      v41[4] = (Il2CppClass *)summary;
      sub_1B8635C((CGThumbnailListItem_o *)(v41 + 4), (int32_t)summary, v36, v37);
    }
LABEL_20:
    if ( !this->fields.isFatigure )
      goto LABEL_33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10922/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
    summary = (System_String_o *)IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( fatigue )
        goto LABEL_25;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v34, (Il2CppObject *)IsNullOrEmpty, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( fatigue )
      {
LABEL_25:
        IsNullOrEmpty = System_String__Concat_61645176(summary, v35, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v31 )
          goto LABEL_100;
        goto LABEL_29;
      }
    }
    if ( !v31 )
      goto LABEL_100;
LABEL_29:
    v44 = v31->fields._items;
    v45 = Method_System_Collections_Generic_List_string__Add__;
    ++v31->fields._version;
    if ( !v44 )
      goto LABEL_100;
    v46 = v31->fields._size;
    if ( (unsigned int)v46 >= v44->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        (Il2CppObject *)summary,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = &v44->obj.klass + v46;
      v31->fields._size = v46 + 1;
      v47[4] = (Il2CppClass *)summary;
      sub_1B8635C((CGThumbnailListItem_o *)(v47 + 4), (int32_t)summary, v42, v43);
    }
LABEL_33:
    if ( !this->fields.isNotSingleSupportOnly )
      goto LABEL_46;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10117/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
    summary = (System_String_o *)IsNullOrEmpty;
    if ( isNoneTitle )
    {
      if ( singleSupport )
        goto LABEL_38;
    }
    else
    {
      IsNullOrEmpty = System_String__Format(v34, (Il2CppObject *)IsNullOrEmpty, 0LL);
      summary = (System_String_o *)IsNullOrEmpty;
      if ( singleSupport )
      {
LABEL_38:
        IsNullOrEmpty = System_String__Concat_61645176(summary, v35, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v31 )
          goto LABEL_100;
        goto LABEL_42;
      }
    }
    if ( !v31 )
      goto LABEL_100;
LABEL_42:
    v50 = v31->fields._items;
    v51 = Method_System_Collections_Generic_List_string__Add__;
    ++v31->fields._version;
    if ( !v50 )
      goto LABEL_100;
    v52 = v31->fields._size;
    if ( (unsigned int)v52 >= v50->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        (Il2CppObject *)summary,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = &v50->obj.klass + v52;
      v31->fields._size = v52 + 1;
      v53[4] = (Il2CppClass *)summary;
      sub_1B8635C((CGThumbnailListItem_o *)(v53 + 4), (int32_t)summary, v48, v49);
    }
LABEL_46:
    restrictionWholeEntities = this->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_100;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v56 = 0;
      while ( v56 < max_length )
      {
        v57 = restrictionWholeEntities->m_Items[v56];
        if ( !v57 )
          goto LABEL_100;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(v57->fields.summary, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            summary = v57->fields.summary;
          }
          else
          {
            IsNullOrEmpty = System_String__Format(v34, (Il2CppObject *)v57->fields.summary, 0LL);
            summary = (System_String_o *)IsNullOrEmpty;
          }
          switch ( v57->fields.type )
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
                IsNullOrEmpty = System_String__Concat_61645176(summary, v35, 0LL);
                summary = (System_String_o *)IsNullOrEmpty;
              }
              break;
            default:
              break;
          }
          if ( !v31 )
            goto LABEL_100;
          v60 = v31->fields._items;
          v61 = Method_System_Collections_Generic_List_string__Add__;
          ++v31->fields._version;
          if ( !v60 )
            goto LABEL_100;
          v62 = v31->fields._size;
          if ( (unsigned int)v62 >= v60->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v31,
              (Il2CppObject *)summary,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v63 = &v60->obj.klass + v62;
            v31->fields._size = v62 + 1;
            v63[4] = (Il2CppClass *)summary;
            sub_1B8635C((CGThumbnailListItem_o *)(v63 + 4), (int32_t)summary, v58, v59);
          }
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v56 >= max_length )
          goto LABEL_79;
      }
LABEL_101:
      sub_1B8661C(IsNullOrEmpty, summary);
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
                            (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0LL )
    {
LABEL_100:
      sub_1B86614(IsNullOrEmpty, summary);
    }
    v64 = *((_DWORD *)IsNullOrEmpty + 6);
    v65 = IsNullOrEmpty;
    if ( v64 >= 1 )
    {
      v66 = 0;
      while ( v66 < v64 )
      {
        v67 = *((_QWORD *)v65 + (int)v66 + 4);
        if ( !v67 )
          goto LABEL_100;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(*(System_String_o **)(v67 + 24), 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            summary = *(System_String_o **)(v67 + 24);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v70 = LocalizationManager__Get((System_String_o *)StringLiteral_6386/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
            IsNullOrEmpty = System_String__Format(v70, *(Il2CppObject **)(v67 + 24), 0LL);
            summary = (System_String_o *)IsNullOrEmpty;
          }
          if ( !v31 )
            goto LABEL_100;
          v71 = v31->fields._items;
          v72 = Method_System_Collections_Generic_List_string__Add__;
          ++v31->fields._version;
          if ( !v71 )
            goto LABEL_100;
          v73 = v31->fields._size;
          if ( (unsigned int)v73 >= v71->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v31,
              (Il2CppObject *)summary,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
          }
          else
          {
            v74 = &v71->obj.klass + v73;
            v31->fields._size = v73 + 1;
            v74[4] = (Il2CppClass *)summary;
            sub_1B8635C((CGThumbnailListItem_o *)(v74 + 4), (int32_t)summary, v68, v69);
          }
        }
        v64 = *((_DWORD *)v65 + 6);
        if ( (int)++v66 >= v64 )
          goto LABEL_98;
      }
      goto LABEL_101;
    }
  }
LABEL_98:
  if ( !v31 )
    goto LABEL_100;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v31,
                                  (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *__fastcall QuestRestrictionInfo__GetMessages_41482884(
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_String_o *v26; // x28
  System_String_o *v27; // x25
  System_Collections_Generic_List_object__o *v28; // x26
  System_String_o *IsNullOrEmpty; // x0
  System_String_o *name; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  signed int max_length; // w8
  unsigned int v44; // w19
  RestrictionEntity_o *v45; // x27
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0

  if ( (byte_4A4F740 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, entities);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__ToArray__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v19);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v20);
    sub_1B863B8(&LocalizationManager_TypeInfo, v21);
    sub_1B863B8(&StringLiteral_10117/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, v22);
    sub_1B863B8(&StringLiteral_10926/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, v23);
    sub_1B863B8(&StringLiteral_10922/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, v24);
    sub_1B863B8(&StringLiteral_6386/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v25);
    byte_4A4F740 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6386/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_10926/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  v28 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isSlotOnly || !this->fields.isFatigure )
    goto LABEL_19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10922/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
  name = IsNullOrEmpty;
  if ( isNoneTitle )
  {
    if ( !fatigue )
      goto LABEL_11;
  }
  else
  {
    IsNullOrEmpty = System_String__Format(v26, (Il2CppObject *)IsNullOrEmpty, 0LL);
    name = IsNullOrEmpty;
    if ( !fatigue )
    {
LABEL_11:
      if ( !v28 )
        goto LABEL_64;
      goto LABEL_15;
    }
  }
  IsNullOrEmpty = System_String__Concat_61645176(name, v27, 0LL);
  name = IsNullOrEmpty;
  if ( !v28 )
    goto LABEL_64;
LABEL_15:
  items = v28->fields._items;
  v34 = Method_System_Collections_Generic_List_string__Add__;
  ++v28->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v28->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      (Il2CppObject *)name,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v28->fields._size = size + 1;
    v36[4] = (Il2CppClass *)name;
    sub_1B8635C((CGThumbnailListItem_o *)(v36 + 4), (int32_t)name, v31, v32);
  }
LABEL_19:
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10117/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
    name = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = System_String__Format(v26, (Il2CppObject *)IsNullOrEmpty, 0LL);
      name = IsNullOrEmpty;
    }
    if ( singleSupport )
    {
      IsNullOrEmpty = System_String__Concat_61645176(name, v27, 0LL);
      name = IsNullOrEmpty;
    }
    if ( !v28 )
      goto LABEL_64;
    v39 = v28->fields._items;
    v40 = Method_System_Collections_Generic_List_string__Add__;
    ++v28->fields._version;
    if ( !v39 )
      goto LABEL_64;
    v41 = v28->fields._size;
    if ( (unsigned int)v41 >= v39->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v28,
        (Il2CppObject *)name,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &v39->obj.klass + v41;
      v28->fields._size = v41 + 1;
      v42[4] = (Il2CppClass *)name;
      sub_1B8635C((CGThumbnailListItem_o *)(v42 + 4), (int32_t)name, v37, v38);
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
        sub_1B8661C(IsNullOrEmpty, name);
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
              IsNullOrEmpty = System_String__Concat_61645176(name, v27, 0LL);
              name = IsNullOrEmpty;
            }
            break;
          default:
            break;
        }
        if ( !v28 )
          break;
        v48 = v28->fields._items;
        v49 = Method_System_Collections_Generic_List_string__Add__;
        ++v28->fields._version;
        if ( !v48 )
          break;
        v50 = v28->fields._size;
        if ( (unsigned int)v50 >= v48->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            (Il2CppObject *)name,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &v48->obj.klass + v50;
          v28->fields._size = v50 + 1;
          v51[4] = (Il2CppClass *)name;
          sub_1B8635C((CGThumbnailListItem_o *)(v51 + 4), (int32_t)name, v46, v47);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_62;
    }
LABEL_64:
    sub_1B86614(IsNullOrEmpty, name);
  }
LABEL_62:
  if ( !v28 )
    goto LABEL_64;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v28,
                                  (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  const MethodInfo *v2; // x3
  QuestRestrictionInfo_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  unsigned int v11; // w21
  RestrictionWholeEntity_o *v12; // x25
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int32_t v14; // w20
  int32_t v15; // w9
  QuestRestrictionInfo_SlotInfo_o *v16; // x8
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v18; // x21
  unsigned int v19; // w27
  __int64 v20; // x28
  struct RestrictionEntity_array *restrictionEntityList; // x8
  __int64 v22; // x9
  unsigned int v23; // w10
  int32_t priority; // w11
  RestrictionEntity_o *v25; // x12
  Il2CppObject *v27; // x8
  RestrictionEntity_o *v28; // x8
  Il2CppObject *v29; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_4A4F766 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    sub_1B863B8(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v7);
    this = (QuestRestrictionInfo_o *)sub_1B863B8(&StringLiteral_1/*""*/, v8);
    byte_4A4F766 = 1;
  }
  entity = 0LL;
  v29 = 0LL;
  if ( !v3->fields.restrictionBaseEntity )
  {
    restrictionEntityList = v3->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_58;
    v22 = *(_QWORD *)&restrictionEntityList->max_length;
    if ( (int)v22 < 1 )
    {
      method = 0LL;
LABEL_53:
      if ( (unsigned int)method < (unsigned int)v22 )
      {
        v28 = restrictionEntityList->m_Items[(int)method];
        if ( !v28 )
          goto LABEL_58;
        return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v28->fields.id, v2);
      }
    }
    else
    {
      v23 = 0;
      priority = 0;
      method = 0LL;
      while ( v23 < (unsigned int)v22 )
      {
        v25 = restrictionEntityList->m_Items[v23];
        if ( !v25 )
          goto LABEL_58;
        if ( !priority && v25->fields.type == 10 )
        {
          priority = v25->fields.priority;
          method = (const MethodInfo *)v23;
        }
        if ( (int)++v23 >= (int)v22 )
          goto LABEL_53;
      }
    }
LABEL_59:
    sub_1B8661C(this, method);
  }
  restrictionWholeEntities = v3->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_58;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( v11 < max_length )
    {
      v12 = restrictionWholeEntities->m_Items[v11];
      if ( !v12 )
        goto LABEL_58;
      if ( v12->fields.type == 3 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_58;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v12->fields.restrictionMessageId,
                                           (const MethodInfo_32142CC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v27 = entity;
          if ( !entity )
            goto LABEL_58;
          return (System_String_o *)v27[1].monitor;
        }
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_15;
    }
    goto LABEL_59;
  }
LABEL_15:
  slotInfos = v3->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_58;
  v14 = 0;
  while ( 1 )
  {
    v15 = slotInfos->max_length;
    if ( v14 >= v15 )
      return (System_String_o *)StringLiteral_1/*""*/;
    if ( v14 >= (unsigned int)v15 )
      goto LABEL_59;
    v16 = slotInfos->m_Items[v14];
    if ( !v16 )
      goto LABEL_58;
    if ( v16->fields.slotType )
    {
      ++v14;
      goto LABEL_37;
    }
    this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
    if ( !this )
      goto LABEL_58;
    this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                       (System_Collections_Generic_Dictionary_int__object__o *)this,
                                       ++v14,
                                       (const MethodInfo_326D958 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
      if ( !this )
        goto LABEL_58;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         v14,
                                         (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( !this )
        goto LABEL_58;
      dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
      v18 = this;
      if ( dialogMessageInfoDictionary >= 1 )
        break;
    }
LABEL_37:
    slotInfos = v3->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_58;
  }
  v19 = 0;
  while ( 1 )
  {
    if ( v19 >= dialogMessageInfoDictionary )
      goto LABEL_59;
    v20 = *((_QWORD *)&v18->fields.eventId + (int)v19);
    if ( !v20 )
      goto LABEL_58;
    if ( *(_DWORD *)(v20 + 44) && !*(_DWORD *)(v20 + 40) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
      if ( !this )
        goto LABEL_58;
      this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         &v29,
                                         *(_DWORD *)(v20 + 44),
                                         (const MethodInfo_32142CC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
    }
    dialogMessageInfoDictionary = (int)v18->fields.dialogMessageInfoDictionary;
    if ( (int)++v19 >= dialogMessageInfoDictionary )
      goto LABEL_37;
  }
  v27 = v29;
  if ( !v29 )
LABEL_58:
    sub_1B86614(this, method);
  return (System_String_o *)v27[1].monitor;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetMyServantOrNpcRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        bool haveIndividualityServant,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *RestrictedName; // x20
  System_String_o **v10; // x8
  System_String_o *v11; // x0

  if ( (byte_4A4F76F & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, *(_QWORD *)&pos);
    sub_1B863B8(&StringLiteral_10150/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/, v7);
    sub_1B863B8(&StringLiteral_10153/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/, v8);
    byte_4A4F76F = 1;
  }
  RestrictedName = (Il2CppObject *)QuestRestrictionInfo__GetRestrictedName(
                                     this,
                                     pos,
                                     (const MethodInfo *)haveIndividualityServant);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( haveIndividualityServant )
    v10 = (System_String_o **)&StringLiteral_10150/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/;
  else
    v10 = (System_String_o **)&StringLiteral_10153/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/;
  v11 = LocalizationManager__Get(*v10, 0LL);
  return System_String__Format(v11, RestrictedName, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetMyServantOrNpcRestrictionNum(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v2; // x19
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x8

  v2 = this;
  if ( (byte_4A4F783 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B863B8(
                                       &Method_System_Collections_Generic_List_RestrictionEntity__get_Count__,
                                       method);
    byte_4A4F783 = 1;
  }
  if ( !v2->fields.isMyServantOrNpc && !v2->fields.isMyServantOrSupport )
    return 0;
  myServantOrNpcRestrictionEntityList = v2->fields.myServantOrNpcRestrictionEntityList;
  if ( !myServantOrNpcRestrictionEntityList )
    sub_1B86614(this, method);
  return myServantOrNpcRestrictionEntityList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t index,
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
  __int64 v18; // x21
  void *restrictionSlotDetailDictionary; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_int__o *v23; // x20
  int v24; // w8
  void *v25; // x19
  unsigned int v26; // w21
  __int64 v27; // x8
  System_Int32_array *CollectionList; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x1
  const MethodInfo_2F95B84 *v31; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v34; // x20
  Il2CppObject *v35; // x0
  Il2CppObject *v36; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0

  if ( (byte_4A4F771 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&index);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_Distinct_int___, v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_Intersect_int___, v7);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B863B8(&System_Predicate_RestrictionEntity__TypeInfo, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__DisplayClass191_0__GetMyServantOrNpcSvtIdList_b__0__, v16);
    sub_1B863B8(&QuestRestrictionInfo___c__DisplayClass191_0_TypeInfo, v17);
    byte_4A4F771 = 1;
  }
  v18 = sub_1B86604(QuestRestrictionInfo___c__DisplayClass191_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass191_0___ctor((QuestRestrictionInfo___c__DisplayClass191_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_29;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  *(_DWORD *)(v18 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
  {
    v23 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v23,
      (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v18 + 24),
                                        (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    v24 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v25 = restrictionSlotDetailDictionary;
    if ( v24 >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        if ( v26 >= v24 )
          sub_1B8661C(restrictionSlotDetailDictionary, v20);
        v27 = *((_QWORD *)v25 + (int)v26 + 4);
        if ( !v27 )
          break;
        if ( *(_DWORD *)(v27 + 32) == 1 )
        {
          if ( !v23 )
            break;
          System_Collections_Generic_List_int___AddRange(
            v23,
            *(System_Collections_Generic_IEnumerable_T__o **)(v27 + 40),
            (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v24 = *((_DWORD *)v25 + 6);
        if ( (int)++v26 >= v24 )
          goto LABEL_15;
      }
LABEL_29:
      sub_1B86614(restrictionSlotDetailDictionary, v20);
    }
LABEL_15:
    if ( !v23 )
      goto LABEL_29;
    if ( v23->fields._size >= 1 )
    {
      restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                          (DataManager_o *)restrictionSlotDetailDictionary,
                                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList((ServantMaster_o *)restrictionSlotDetailDictionary, 0LL);
      monitor = System_Linq_Enumerable__Distinct_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v23,
                  (const MethodInfo_2F8E360 *)Method_System_Linq_Enumerable_Distinct_int___);
      v30 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v31 = (const MethodInfo_2F95B84 *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v37 = System_Linq_Enumerable__Intersect_int_(monitor, v30, v31);
      return System_Linq_Enumerable__ToArray_int_(
               v37,
               (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
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
      v34 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v34,
        (Il2CppObject *)v18,
        Method_QuestRestrictionInfo___c__DisplayClass191_0__GetMyServantOrNpcSvtIdList_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      v35 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v34,
              (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v35 )
      {
        v36 = v35;
        restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                            (DataManager_o *)restrictionSlotDetailDictionary,
                                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        v30 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                     (ServantMaster_o *)restrictionSlotDetailDictionary,
                                                                     0LL);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v36[2].monitor;
        v31 = (const MethodInfo_2F95B84 *)Method_System_Linq_Enumerable_Intersect_int___;
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  QuestRestrictionInfo___c__DisplayClass205_0_o *v27; // x22
  void *Instance; // x0
  __int64 v29; // x1
  System_Collections_Generic_Dictionary_int__object__o *v30; // x23
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x2
  long double inited; // q0
  _QWORD *v35; // x23
  __int64 v36; // x8
  __int64 v37; // x0
  __int64 v38; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x23
  System_Int32_array *MyServantOrNpcSvtIdList; // x27
  System_Predicate_object__o *v41; // x24
  Il2CppObject *v42; // x0
  Il2CppObject *v43; // x23
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  int32_t MyServantOrSupportTargetPos; // w22
  const MethodInfo *v47; // x2
  long double v48; // q0
  _QWORD *v49; // x21
  __int64 v50; // x8
  __int64 v51; // x0
  __int64 v52; // x0
  System_Collections_Generic_List_int__o *v53; // x23
  int v54; // w8
  void *v55; // x24
  unsigned int v56; // w29
  FollowerInfo_o *v57; // x25
  ServantLeaderInfo_o *v58; // x26
  int32_t ReturnTypeByQuestId; // w0
  System_Int32_array *NpcServantIndividualityFull; // x27
  const MethodInfo *v61; // x7
  const MethodInfo *v62; // x3
  __int64 v63; // x27
  __int64 v64; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v68; // x27
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v69; // x27
  __int64 v70; // x26
  __int64 v71; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  System_Collections_Generic_IEnumerable_TSource__o *first; // [xsp+0h] [xbp-70h]
  bool isWhole; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_4A4F77A & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Empty_int___, npcInfoDictionary);
    sub_1B863B8(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v13);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v14);
    sub_1B863B8(&Method_System_Linq_Enumerable_Intersect_int___, v15);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v16);
    sub_1B863B8(&Method_System_Linq_Enumerable_Union_int___, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B863B8(&System_Predicate_RestrictionEntity__TypeInfo, v23);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__DisplayClass205_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__, v25);
    sub_1B863B8(&QuestRestrictionInfo___c__DisplayClass205_0_TypeInfo, v26);
    byte_4A4F77A = 1;
  }
  isWhole = 0;
  v27 = (QuestRestrictionInfo___c__DisplayClass205_0_o *)sub_1B86604(QuestRestrictionInfo___c__DisplayClass205_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass205_0___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_57;
  v27->fields.index = index;
  v30 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v30,
    (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v30;
  sub_1B8635C((CGThumbnailListItem_o *)npcInfoDictionary, (int32_t)v30, v31, v32);
  v35 = Method_System_Array_Empty_int___;
  v36 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v36 )
  {
    sub_1BD6AA4(Method_System_Array_Empty_int___);
    v36 = v35[7];
  }
  v37 = *(_QWORD *)(v36 + 16);
  if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
    v37 = sub_1BD6A48(inited);
  if ( !*(_DWORD *)(v37 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v37);
  v38 = *(_QWORD *)(v35[7] + 16LL);
  if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
    v38 = sub_1BD6A48(inited);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v38 + 184);
    v41 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v41,
      (Il2CppObject *)v27,
      Method_QuestRestrictionInfo___c__DisplayClass205_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      0LL);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_57;
    v42 = System_Collections_Generic_List_object___Find(
            myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v41,
            (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v42 )
    {
      v43 = v42;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_57;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_57;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)Instance,
                                                                              0LL);
      v45 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v43[2].monitor,
              CollectionList,
              (const MethodInfo_2F95B84 *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v45,
                                  (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    MyServantOrSupportTargetPos = v27->fields.index;
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(this, v27->fields.index, v33);
    if ( !MyServantOrNpcSvtIdList )
    {
      v49 = Method_System_Array_Empty_int___;
      v50 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v50 )
      {
        sub_1BD6AA4(Method_System_Array_Empty_int___);
        v50 = v49[7];
      }
      v51 = *(_QWORD *)(v50 + 16);
      if ( (*(_BYTE *)(v51 + 309) & 1) == 0 )
        v51 = sub_1BD6A48(v48);
      if ( !*(_DWORD *)(v51 + 224) )
        v48 = j_il2cpp_runtime_class_init_0(v51);
      v52 = *(_QWORD *)(v49[7] + 16LL);
      if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
        v52 = sub_1BD6A48(v48);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v52 + 184);
    }
    MyServantOrSupportTargetPos = v27->fields.index;
    if ( !this->fields.restrictionBaseEntity )
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
                                      this,
                                      MyServantOrSupportTargetPos,
                                      v47);
  }
  v53 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v53,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !Instance )
    goto LABEL_57;
  Instance = NpcFollowerMaster__GetQuestFollowerList(
               (NpcFollowerMaster_o *)Instance,
               this->fields.questId,
               this->fields.questPhase,
               0LL);
  if ( !Instance )
    goto LABEL_57;
  v54 = *((_DWORD *)Instance + 6);
  v55 = Instance;
  if ( v54 >= 1 )
  {
    v56 = 0;
    while ( 1 )
    {
      if ( v56 >= v54 )
        sub_1B8661C(Instance, v29);
      v57 = (FollowerInfo_o *)*((_QWORD *)v55 + (int)v56 + 4);
      Instance = (void *)FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
      if ( !v57 )
        break;
      Instance = FollowerInfo__getServantLeaderInfo(v57, 0, (int32_t)Instance, 0LL);
      if ( Instance )
      {
        v58 = (ServantLeaderInfo_o *)Instance;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
        NpcServantIndividualityFull = FollowerInfo__GetNpcServantIndividualityFull(v57, 0, ReturnTypeByQuestId, 0LL);
        Instance = ServantLeaderInfo__GetOverwriteStatus(v58, 0LL);
        if ( !Instance )
          break;
        Instance = (void *)QuestRestrictionInfo__IsRestriction_41486800(
                             this,
                             &isWhole,
                             NpcServantIndividualityFull,
                             *((_DWORD *)Instance + 6),
                             v58->fields.lv,
                             MyServantOrSupportTargetPos,
                             3,
                             v61);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_41508816(
                               this,
                               NpcServantIndividualityFull,
                               MyServantOrSupportTargetPos,
                               v62);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v64 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
            v63 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v76.fields.currentCryptoKey = v64;
            *(_QWORD *)&v76.fields.fakeValue = v63;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v76, 0LL);
            if ( !v53 )
              break;
            items = v53->fields._items;
            v66 = Method_System_Collections_Generic_List_int__Add__;
            ++v53->fields._version;
            if ( !items )
              break;
            size = v53->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v53,
                (int32_t)Instance,
                *(const MethodInfo_35DF934 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
            }
            else
            {
              v53->fields._size = size + 1;
              items->m_Items[size + 1] = (int)Instance;
            }
            v68 = *npcInfoDictionary;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                 v58->fields.svtId,
                                 0LL);
            if ( !v68 )
              break;
            Instance = (void *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                 (System_Collections_Generic_Dictionary_int__object__o *)v68,
                                 (int32_t)Instance,
                                 (const MethodInfo_326D958 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              v69 = *npcInfoDictionary;
              v71 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
              v70 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v77.fields.currentCryptoKey = v71;
              *(_QWORD *)&v77.fields.fakeValue = v70;
              Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v77, 0LL);
              if ( !v69 )
                break;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)v69,
                (int32_t)Instance,
                (Il2CppObject *)v57,
                (const MethodInfo_326D764 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
            }
          }
        }
      }
      v54 = *((_DWORD *)v55 + 6);
      if ( (int)++v56 >= v54 )
        goto LABEL_56;
    }
LABEL_57:
    sub_1B86614(Instance, v29);
  }
LABEL_56:
  v72 = System_Linq_Enumerable__Union_int_(
          first,
          (System_Collections_Generic_IEnumerable_TSource__o *)v53,
          (const MethodInfo_2FAE09C *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v72,
           (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetMyServantOrSupportRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        bool haveIndividualityServant,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 *v12; // x8
  void *MyServantOrNpcSvtIdList; // x0
  __int64 v14; // x1
  int v15; // w8
  _DWORD *v16; // x19
  __int64 v17; // x20
  int v18; // w23

  if ( (byte_4A4F770 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&pos);
    sub_1B863B8(&LocalizationManager_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_10155/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/, v8);
    sub_1B863B8(&StringLiteral_10154/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/, v9);
    sub_1B863B8(&StringLiteral_10152/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/, v10);
    sub_1B863B8(&StringLiteral_10151/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/, v11);
    byte_4A4F770 = 1;
  }
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_10152/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/;
  }
  else if ( haveIndividualityServant )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_10151/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/;
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(
                                this,
                                pos,
                                (const MethodInfo *)haveIndividualityServant);
    if ( MyServantOrNpcSvtIdList
      && (v15 = *((_DWORD *)MyServantOrNpcSvtIdList + 6), v16 = MyServantOrNpcSvtIdList, v15 >= 1) )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v17 >= v15 )
          sub_1B8661C(MyServantOrNpcSvtIdList, v14);
        MyServantOrNpcSvtIdList = BalanceConfig_TypeInfo;
        v18 = v16[v17 + 8];
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          MyServantOrNpcSvtIdList = BalanceConfig_TypeInfo;
        }
        if ( v18 < *(_DWORD *)(*((_QWORD *)MyServantOrNpcSvtIdList + 23) + 876LL) )
          break;
        v15 = v16[6];
        if ( (int)++v17 >= v15 )
          goto LABEL_20;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = &StringLiteral_10154/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/;
    }
    else
    {
LABEL_20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = &StringLiteral_10155/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/;
    }
  }
  return LocalizationManager__Get((System_String_o *)*v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
        QuestRestrictionInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v15; // x20
  Il2CppClass *klass; // x8

  if ( (byte_4A4F772 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, *(_QWORD *)&index);
    sub_1B863B8(&System_Predicate_RestrictionEntity__TypeInfo, v5);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__DisplayClass192_0__GetMyServantOrSupportTargetPos_b__0__, v6);
    sub_1B863B8(&QuestRestrictionInfo___c__DisplayClass192_0_TypeInfo, v7);
    byte_4A4F772 = 1;
  }
  v8 = sub_1B86604(QuestRestrictionInfo___c__DisplayClass192_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass192_0___ctor((QuestRestrictionInfo___c__DisplayClass192_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_DWORD *)(v8 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
    goto LABEL_12;
  questRestrictionEntityList = this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_14;
  if ( (signed int)questRestrictionEntityList->max_length <= index )
  {
LABEL_12:
    LODWORD(v9) = 0;
    return (int)v9;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v15 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_QuestRestrictionInfo___c__DisplayClass192_0__GetMyServantOrSupportTargetPos_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  v9 = System_Collections_Generic_List_object___Find(
         myServantOrNpcRestrictionEntityList,
         (System_Predicate_T__o *)v15,
         (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v9 )
    return (int)v9;
  klass = v9[3].klass;
  if ( !klass )
LABEL_14:
    sub_1B86614(v9, v10);
  if ( !LODWORD(klass->_1.namespaze) )
    sub_1B8661C(v9, v10);
  LODWORD(v9) = klass->_1.byval_arg.data;
  return (int)v9;
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
    sub_1B8661C(this, *(_QWORD *)&pos);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1B86614(this, pos);
  return v4->fields.individualityList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetNeedIndividualityMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_String_o *DialogMessage; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4A4F774 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__,
      *(_QWORD *)&pos);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__,
      v5);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__,
      v6);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__,
      v7);
    sub_1B863B8(
      &Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__,
      v8);
    sub_1B863B8(
      &Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__,
      v9);
    sub_1B863B8(&StringLiteral_1/*""*/, v10);
    byte_4A4F774 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.restrictionBaseEntity )
  {
    dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
    if ( !dialogMessageInfoDictionary )
      sub_1B86614(0LL, *(_QWORD *)&pos);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v17,
      (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
      (const MethodInfo_326DB9C *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    while ( 1 )
    {
      v12 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v17,
              (const MethodInfo_33BBE28 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
      if ( !v12 )
        break;
      if ( !v17.fields._current.fields.value )
        sub_1B86614(v12, v13);
      if ( LODWORD(v17.fields._current.fields.value[1].klass) == pos )
      {
        DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v17.fields._current.fields.key, 0, v14);
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
          &v17,
          (const MethodInfo_33BBF4C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
        return DialogMessage;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v17,
      (const MethodInfo_33BBF4C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall QuestRestrictionInfo__GetNeedStartingSvtCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_int____o *needStartingIndividualitiesList; // x0
  int32_t i; // w19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4F77F & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_4A4F77F = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    sub_1B86614(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v11.fields._current[1].monitor) )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1B86614(v8, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return i;
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetNeedStartingSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x19
  __int64 v11; // x1
  struct System_Collections_Generic_List_int____o *needStartingIndividualitiesList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4F77C & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____GetEnumerator__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4A4F77C = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0LL;
  v10 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v13 )
      break;
    if ( !v10 )
      sub_1B86614(v13, v14);
    System_Collections_Generic_List_int___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)v16.fields._current,
      (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v10 )
LABEL_15:
    sub_1B86614(needStartingIndividualitiesList, v11);
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestRestrictionInfo__GetOverwriteLimitCountRangeType(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Int32_array *overwriteLimitCountSvtIds; // x9
  struct System_Int32_array *overwriteLimitCountRangeTypes; // x8
  int max_length; // w10
  il2cpp_array_size_t v6; // w11

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
  while ( overwriteLimitCountSvtIds->m_Items[v6 + 1] != svtId )
  {
    if ( max_length == ++v6 )
      return 0;
  }
  if ( v6 >= overwriteLimitCountRangeTypes->max_length )
    sub_1B8661C(this, *(_QWORD *)&svtId);
  return overwriteLimitCountRangeTypes->m_Items[v6 + 1];
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetOverwriteLimitCountSvtIds(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.overwriteLimitCountSvtIds;
}


System_String_array *__fastcall QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t FixedServantPositionCount; // w0
  const MethodInfo *v11; // x1
  int v12; // w21
  __int64 FixedServantPositionSvtIdList; // x0
  __int64 v14; // x1
  __int64 v15; // x20
  System_String_array *v16; // x19
  unsigned __int64 v17; // x25
  __int64 v18; // x26
  CGThumbnailListItem_o *i; // x21
  int32_t v20; // w23
  Il2CppObject *MasterData_object; // x24
  int32_t maxLimitCount; // w23
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UserServantCollectionEntity_o *v27; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A4F761 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, v3);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_1B863B8(&NetworkManager_TypeInfo, v6);
    sub_1B863B8(&OptionManager_TypeInfo, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B863B8(&string___TypeInfo, v9);
    byte_4A4F761 = 1;
  }
  v27 = 0LL;
  entity = 0LL;
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0LL;
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(this, method);
  if ( !FixedServantPositionCount )
    return 0LL;
  v12 = FixedServantPositionCount;
  FixedServantPositionSvtIdList = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(this, v11);
  if ( !FixedServantPositionSvtIdList )
    goto LABEL_41;
  v15 = FixedServantPositionSvtIdList;
  FixedServantPositionSvtIdList = sub_1B86460(string___TypeInfo, *(unsigned int *)(FixedServantPositionSvtIdList + 24));
  v16 = (System_String_array *)FixedServantPositionSvtIdList;
  if ( v12 >= 1 )
  {
    v17 = 0LL;
    v18 = (unsigned int)v12;
    for ( i = (CGThumbnailListItem_o *)(FixedServantPositionSvtIdList + 32); ; i = (CGThumbnailListItem_o *)((char *)i + 8) )
    {
      if ( v17 >= *(unsigned int *)(v15 + 24) )
LABEL_42:
        sub_1B8661C(FixedServantPositionSvtIdList, v14);
      v20 = *(_DWORD *)(v15 + 32 + 4 * v17);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      FixedServantPositionSvtIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !FixedServantPositionSvtIdList )
        break;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)FixedServantPositionSvtIdList,
              &entity,
              v20,
              (const MethodInfo_32142CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0LL;
      FixedServantPositionSvtIdList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !FixedServantPositionSvtIdList )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)FixedServantPositionSvtIdList,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v14);
        byte_4A48C25 = 1;
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
              &v27,
              *(_QWORD *)(*(_QWORD *)(FixedServantPositionSvtIdList + 184) + 64LL),
              v20,
              0LL) )
        goto LABEL_28;
      FixedServantPositionSvtIdList = (__int64)v27;
      if ( !v27 )
        break;
      FixedServantPositionSvtIdList = UserServantCollectionEntity__IsGet(v27, 0LL);
      if ( (FixedServantPositionSvtIdList & 1) != 0 )
      {
        if ( !v27 )
          break;
        maxLimitCount = v27->fields.maxLimitCount;
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
      v23 = ((maxLimitCount == -1) & ((unsigned int)FixedServantPositionSvtIdList ^ 1)) != 0 ? 0 : maxLimitCount;
      FixedServantPositionSvtIdList = (__int64)ServantEntity__getName((ServantEntity_o *)entity, v23, -1, 0, 0LL);
      if ( !v16 )
        break;
      if ( v17 >= v16->max_length )
        goto LABEL_42;
      i->klass = (CGThumbnailListItem_c *)FixedServantPositionSvtIdList;
      sub_1B8635C(i, FixedServantPositionSvtIdList, v24, v25);
      if ( v18 == ++v17 )
        return v16;
    }
LABEL_41:
    sub_1B86614(FixedServantPositionSvtIdList, v14);
  }
  return v16;
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
    sub_1B8661C(this, *(_QWORD *)&pos);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1B86614(this, pos);
  return v4->fields.rangeTypeList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetRestrictedName(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v11; // x20
  unsigned int v12; // w19
  __int64 v13; // x21
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x26
  unsigned __int64 v15; // x27
  __int64 v16; // x23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  QuestRestrictionEntity_o *v19; // x1
  __int64 v20; // x22
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x24
  System_Predicate_object__o *v22; // x25
  struct System_Int32_array *deckSvtIdList; // x8
  System_String_o *v25; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4A4F76E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, *(_QWORD *)&pos);
    sub_1B863B8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v5);
    sub_1B863B8(&System_Predicate_RestrictionEntity__TypeInfo, v6);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__DisplayClass188_0__GetRestrictedName_b__0__, v7);
    sub_1B863B8(&QuestRestrictionInfo___c__DisplayClass188_0_TypeInfo, v8);
    this = (QuestRestrictionInfo_o *)sub_1B863B8(&StringLiteral_1/*""*/, v9);
    byte_4A4F76E = 1;
  }
  v25 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v4->fields.restrictionBaseEntity )
  {
    this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         pos,
                                         (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( this )
      {
        dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
        v11 = this;
        if ( dialogMessageInfoDictionary >= 1 )
        {
          v12 = 0;
          while ( 1 )
          {
            if ( v12 >= dialogMessageInfoDictionary )
              goto LABEL_30;
            v13 = *((_QWORD *)&v11->fields.eventId + (int)v12);
            if ( !v13 )
              goto LABEL_29;
            this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v13 + 32), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              return *(System_String_o **)(v13 + 32);
            dialogMessageInfoDictionary = (int)v11->fields.dialogMessageInfoDictionary;
            if ( (int)++v12 >= dialogMessageInfoDictionary )
              return v25;
          }
        }
        return v25;
      }
    }
LABEL_29:
    sub_1B86614(this, *(_QWORD *)&pos);
  }
  questRestrictionEntityList = v4->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_29;
  if ( (int)questRestrictionEntityList->max_length >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      v16 = sub_1B86604(QuestRestrictionInfo___c__DisplayClass188_0_TypeInfo);
      QuestRestrictionInfo___c__DisplayClass188_0___ctor((QuestRestrictionInfo___c__DisplayClass188_0_o *)v16, 0LL);
      if ( v15 >= questRestrictionEntityList->max_length )
        break;
      if ( !v16 )
        goto LABEL_29;
      v19 = questRestrictionEntityList->m_Items[v15];
      *(_QWORD *)(v16 + 16) = v19;
      v20 = v16 + 16;
      sub_1B8635C((CGThumbnailListItem_o *)(v16 + 16), (int32_t)v19, v17, v18);
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v4->fields.myServantOrNpcRestrictionEntityList;
      v22 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v22,
        (Il2CppObject *)v16,
        Method_QuestRestrictionInfo___c__DisplayClass188_0__GetRestrictedName_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_object___Find(
                                         myServantOrNpcRestrictionEntityList,
                                         (System_Predicate_T__o *)v22,
                                         (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( this )
      {
        deckSvtIdList = this->fields.deckSvtIdList;
        if ( !deckSvtIdList )
          goto LABEL_29;
        if ( !deckSvtIdList->max_length )
          break;
        if ( deckSvtIdList->m_Items[1] == pos )
        {
          if ( !*(_QWORD *)v20 )
            goto LABEL_29;
          v25 = *(System_String_o **)(*(_QWORD *)v20 + 48LL);
        }
      }
      if ( (__int64)++v15 >= (int)questRestrictionEntityList->max_length )
        return v25;
    }
LABEL_30:
    sub_1B8661C(this, *(_QWORD *)&pos);
  }
  return v25;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  __int64 v13; // x20
  QuestRestrictionInfo_SlotInfo_o *v14; // x8
  System_Collections_Generic_IEnumerable_RestrictionEntity__o *RestrictionMessageEntityList; // x19
  QuestRestrictionInfo___c_c *v17; // x8
  System_Func_object__object__o *_9__108_0; // x20
  Il2CppObject *v19; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  Il2CppObject *v24; // x0
  System_Collections_Generic_IEnumerable_string__o *v25; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v26; // x8
  QuestRestrictionInfo_SlotInfo_o *v27; // x8

  v4 = this;
  if ( (byte_4A4F74A & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Prepend_string___, *(_QWORD *)&initPos);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___, v5);
    sub_1B863B8(&System_Func_RestrictionEntity__string__TypeInfo, v6);
    sub_1B863B8(&LocalizationManager_TypeInfo, v7);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__108_0__, v8);
    sub_1B863B8(&QuestRestrictionInfo___c_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_43/*"\n"*/, v10);
    this = (QuestRestrictionInfo_o *)sub_1B863B8(&StringLiteral_10113/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v11);
    byte_4A4F74A = 1;
  }
  if ( v4->fields.restrictionBaseEntity )
  {
    if ( initPos < 1 )
      return v4->fields.restrictionMessage;
    slotInfos = v4->fields.slotInfos;
    if ( slotInfos )
    {
      v13 = initPos - 1LL;
      if ( (unsigned int)v13 >= slotInfos->max_length )
        goto LABEL_26;
      v14 = slotInfos->m_Items[v13];
      if ( !v14 )
        goto LABEL_25;
      if ( System_String__IsNullOrEmpty(v14->fields.summary, 0LL) )
        return v4->fields.restrictionMessage;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10113/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v26 = v4->fields.slotInfos;
      if ( !v26 )
        goto LABEL_25;
      if ( (unsigned int)v13 >= v26->max_length )
LABEL_26:
        sub_1B8661C(this, *(_QWORD *)&initPos);
      v27 = v26->m_Items[v13];
      if ( v27 )
        return System_String__Concat_61683424(
                 (System_String_o *)this,
                 (System_String_o *)StringLiteral_43/*"\n"*/,
                 v27->fields.summary,
                 0LL);
    }
LABEL_25:
    sub_1B86614(this, *(_QWORD *)&initPos);
  }
  RestrictionMessageEntityList = QuestRestrictionInfo__GetRestrictionMessageEntityList(
                                   v4,
                                   *(const MethodInfo **)&initPos);
  v17 = QuestRestrictionInfo___c_TypeInfo;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v17 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__108_0 = (System_Func_object__object__o *)v17->static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = QuestRestrictionInfo___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__108_0 = (System_Func_object__object__o *)sub_1B86604(System_Func_RestrictionEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__108_0,
      v19,
      Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__108_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__108_0 = (struct System_Func_RestrictionEntity__string__o *)_9__108_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__108_0, (int32_t)_9__108_0, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                               (System_Func_TSource__TResult__o *)_9__108_0,
                                                               (const MethodInfo_2FA1274 *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10113/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
  v25 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Prepend_object_(
                                                              v23,
                                                              v24,
                                                              (const MethodInfo_2F9B3E4 *)Method_System_Linq_Enumerable_Prepend_string___);
  return System_String__Join_61687752((System_String_o *)StringLiteral_43/*"\n"*/, v25, 0LL);
}


System_Collections_Generic_IEnumerable_RestrictionEntity__o *__fastcall QuestRestrictionInfo__GetRestrictionMessageEntityList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  QuestRestrictionInfo___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x19
  System_Func_object__bool__o *_9__109_0; // x20
  Il2CppObject *v9; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4A4F74B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, method);
    sub_1B863B8(&System_Func_RestrictionEntity__bool__TypeInfo, v3);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__109_0__, v4);
    sub_1B863B8(&QuestRestrictionInfo___c_TypeInfo, v5);
    byte_4A4F74B = 1;
  }
  v6 = QuestRestrictionInfo___c_TypeInfo;
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v6 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__109_0 = (System_Func_object__bool__o *)v6->static_fields->__9__109_0;
  if ( !_9__109_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = QuestRestrictionInfo___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__109_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__109_0,
      v9,
      Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__109_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__109_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__109_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__109_0, (int32_t)_9__109_0, v11, v12);
  }
  return (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                          restrictionEntityList,
                                                                          (System_Func_TSource__bool__o *)_9__109_0,
                                                                          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
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
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int32_t ServantImageLimitSealAfter; // w21

  if ( (byte_4A4F745 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A4F745 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL
    || (ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)Instance,
                                       svtId,
                                       dispLimitCount,
                                       0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B86614(Instance, v12);
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

  if ( (byte_4A4F762 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    byte_4A4F762 = 1;
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
      sub_1B86614(0LL, method);
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
  const MethodInfo *v2; // x3
  QuestRestrictionInfo_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  unsigned int v10; // w21
  RestrictionWholeEntity_o *v11; // x25
  int32_t v12; // w20
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v14; // x21
  unsigned int v15; // w26
  __int64 v16; // x27
  struct RestrictionEntity_array *restrictionEntityList; // x8
  __int64 v19; // x9
  unsigned int v20; // w10
  int32_t priority; // w11
  RestrictionEntity_o *v22; // x12
  Il2CppObject *v23; // x8
  RestrictionEntity_o *v24; // x8
  Il2CppObject *v25; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_4A4F764 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    sub_1B863B8(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v6);
    this = (QuestRestrictionInfo_o *)sub_1B863B8(&StringLiteral_1/*""*/, v7);
    byte_4A4F764 = 1;
  }
  v25 = 0LL;
  entity = 0LL;
  if ( !v3->fields.restrictionBaseEntity )
  {
    restrictionEntityList = v3->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_51;
    v19 = *(_QWORD *)&restrictionEntityList->max_length;
    if ( (int)v19 < 1 )
    {
      method = 0LL;
LABEL_46:
      if ( (unsigned int)method < (unsigned int)v19 )
      {
        v24 = restrictionEntityList->m_Items[(int)method];
        if ( v24 )
          return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v24->fields.id, v2);
        goto LABEL_51;
      }
    }
    else
    {
      v20 = 0;
      priority = 0;
      method = 0LL;
      while ( v20 < (unsigned int)v19 )
      {
        v22 = restrictionEntityList->m_Items[v20];
        if ( !v22 )
          goto LABEL_51;
        if ( !priority && v22->fields.type == 10 )
        {
          priority = v22->fields.priority;
          method = (const MethodInfo *)v20;
        }
        if ( (int)++v20 >= (int)v19 )
          goto LABEL_46;
      }
    }
LABEL_52:
    sub_1B8661C(this, method);
  }
  restrictionWholeEntities = v3->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_51;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
  {
LABEL_16:
    if ( v3->fields.servantNumMin < 1 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v12 = 1;
    while ( 1 )
    {
      this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
      if ( !this )
        goto LABEL_51;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                         v12,
                                         (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( !this )
        goto LABEL_51;
      dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
      v14 = this;
      if ( dialogMessageInfoDictionary >= 1 )
        break;
LABEL_31:
      if ( ++v12 > v3->fields.servantNumMin )
        return (System_String_o *)StringLiteral_1/*""*/;
    }
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= dialogMessageInfoDictionary )
        goto LABEL_52;
      v16 = *((_QWORD *)&v14->fields.eventId + (int)v15);
      if ( !v16 )
        goto LABEL_51;
      if ( *(_DWORD *)(v16 + 44) && !*(_DWORD *)(v16 + 40) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_51;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &v25,
                                           *(_DWORD *)(v16 + 44),
                                           (const MethodInfo_32142CC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      dialogMessageInfoDictionary = (int)v14->fields.dialogMessageInfoDictionary;
      if ( (int)++v15 >= dialogMessageInfoDictionary )
        goto LABEL_31;
    }
    v23 = v25;
    if ( v25 )
      return (System_String_o *)v23[1].monitor;
LABEL_51:
    sub_1B86614(this, method);
  }
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
      goto LABEL_52;
    v11 = restrictionWholeEntities->m_Items[v10];
    if ( !v11 )
      goto LABEL_51;
    if ( v11->fields.restrictionMessageId && v11->fields.type == 3 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
      if ( !this )
        goto LABEL_51;
      this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         &entity,
                                         v11->fields.restrictionMessageId,
                                         (const MethodInfo_32142CC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
    }
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v10 >= max_length )
      goto LABEL_16;
  }
  v23 = entity;
  if ( !entity )
    goto LABEL_51;
  return (System_String_o *)v23[1].monitor;
}


System_String_o *__fastcall QuestRestrictionInfo__GetServantNumRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t ServantNumRangeType; // w0
  int32_t servantNumMax; // w20
  BalanceConfig_c *v9; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_String_o *v13; // x20
  int32_t *v14; // x1
  Il2CppObject *v15; // x0
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A4F763 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&int_TypeInfo, v3);
    sub_1B863B8(&LocalizationManager_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_10157/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, v5);
    sub_1B863B8(&StringLiteral_10156/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, v6);
    byte_4A4F763 = 1;
  }
  ServantNumRangeType = QuestRestrictionInfo__GetServantNumRangeType(this, method);
  if ( ServantNumRangeType == 5 )
    goto LABEL_17;
  if ( ServantNumRangeType != 4 )
    goto LABEL_18;
  servantNumMax = this->fields.servantNumMax;
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  if ( servantNumMax > v9->static_fields->DeckMainMemberMax )
  {
LABEL_17:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10157/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, 0LL);
    v14 = &v18;
    v18 = this->fields.servantNumMax;
  }
  else
  {
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10156/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, 0LL);
    v14 = &v17;
    v17 = this->fields.servantNumMax;
  }
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v14, v10, v11, v12);
  return System_String__Format(v13, v15, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetSupportInitIndex(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.supportInitIndex;
}


System_String_o *__fastcall QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A4F74C & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_10158/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, v2);
    byte_4A4F74C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10158/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, 0LL);
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

  if ( (byte_4A4F75B & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, method);
    byte_4A4F75B = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x8
  int max_length; // w9
  int v9; // w10
  RestrictionWholeEntity_o *v10; // x11

  v4 = this;
  if ( (byte_4A4F752 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, isFixMessage);
    sub_1B863B8(&StringLiteral_10160/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, v5);
    this = (QuestRestrictionInfo_o *)sub_1B863B8(&StringLiteral_1/*""*/, v6);
    byte_4A4F752 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_10160/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, 0LL);
  }
  else
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_18:
      sub_1B86614(this, isFixMessage);
    max_length = restrictionWholeEntities->max_length;
    if ( max_length < 1 )
    {
      return (System_String_o *)StringLiteral_1/*""*/;
    }
    else
    {
      v9 = 0;
      while ( 1 )
      {
        if ( max_length == v9 )
          sub_1B8661C(this, isFixMessage);
        v10 = restrictionWholeEntities->m_Items[v9];
        if ( !v10 )
          goto LABEL_18;
        if ( v10->fields.type == 9 )
          return v10->fields.summary;
        if ( max_length == ++v9 )
          return (System_String_o *)StringLiteral_1/*""*/;
      }
    }
  }
}


System_String_o *__fastcall QuestRestrictionInfo__GetUniqueServantRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A4F751 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_10159/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, v2);
    byte_4A4F751 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10159/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, 0LL);
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
    sub_1B8661C(this, *(_QWORD *)&initPos);
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_7:
    sub_1B86614(this, initPos);
  return v4->fields.isMoved;
}


bool __fastcall QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_1B86614(this, method);
  return restrictionEntityList->max_length == 0;
}


bool __fastcall QuestRestrictionInfo__IsFatigure(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isFatigure;
}


bool __fastcall QuestRestrictionInfo__IsFirstServantNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
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
        sub_1B8661C(this, method);
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
    sub_1B86614(this, method);
  }
  v8 = 0;
  v7 = 0;
  return v7 != 0 && v7 > v8;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x19
  __int64 v11; // x1
  struct System_Collections_Generic_List_int____o *fixedSupportIndividualitiesList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A4F777 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____GetEnumerator__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4A4F777 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !this->fields.isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v10 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.isFixedSupportPosition )
  {
    fixedSupportIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)fixedSupportIndividualitiesList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v18;
          ;
          System_Collections_Generic_List_int___AddRange(
            v10,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v13 )
        break;
      if ( !v10 )
        sub_1B86614(v13, v14);
    }
  }
  else
  {
    fixedSupportIndividualitiesList = this->fields.fixedNpcIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)fixedSupportIndividualitiesList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v18;
          ;
          System_Collections_Generic_List_int___AddRange(
            v10,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v16 )
        break;
      if ( !v10 )
        sub_1B86614(v16, v17);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v10 )
LABEL_23:
    sub_1B86614(fixedSupportIndividualitiesList, v11);
  return v10->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsFixedSupportPosition_41492892(
        QuestRestrictionInfo_o *this,
        int32_t num,
        ServantLeaderInfo_o *servantInfo,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x20
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_List_int__o *v22; // x22
  _BOOL8 v23; // x0
  __int64 v24; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x23
  __int64 v29; // x24
  __int64 v30; // x25
  Il2CppObject *Entity; // x23
  int32_t current; // w22
  int32_t limitCount; // w24
  __int64 DispLimitCount; // x0
  __int64 v35; // x1
  struct System_Boolean_array *supportPositionList; // x8
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  v6 = this;
  if ( (byte_4A4F753 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&num);
    sub_1B863B8(&DataManager_TypeInfo, v7);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__AddRange__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____GetEnumerator__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v20);
    this = (QuestRestrictionInfo_o *)sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    byte_4A4F753 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v38, 0, sizeof(v38));
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
  v22 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v6->fields.isFixedSupportPosition )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedSupportIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v37;
          ;
          System_Collections_Generic_List_int___AddRange(
            v22,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v23 )
        break;
      if ( !v22 )
        sub_1B86614(v23, v24);
    }
  }
  else
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedNpcIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v37;
          ;
          System_Collections_Generic_List_int___AddRange(
            v22,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v26 )
        break;
      if ( !v22 )
        sub_1B86614(v26, v27);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v22 )
    goto LABEL_42;
  if ( v22->fields._size < 1 )
    goto LABEL_36;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_42;
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v30 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v30;
  *(_QWORD *)&v40.fields.fakeValue = v29;
  this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v40, 0LL);
  if ( !v28 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v28,
             (int32_t)this,
             (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    v22,
    (const MethodInfo_35E0408 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v38 = v37;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v38,
            (const MethodInfo_337C530 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v38,
        (const MethodInfo_337C52C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      return 1;
    }
    current = (int32_t)v38.fields._current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, 0LL);
    if ( !Entity )
      sub_1B86614(DispLimitCount, v35);
  }
  while ( !ServantEntity__IsIndividuality((ServantEntity_o *)Entity, limitCount, DispLimitCount, current, 0LL) );
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v38,
    (const MethodInfo_337C52C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_36:
  supportPositionList = v6->fields.supportPositionList;
  if ( !supportPositionList )
LABEL_42:
    sub_1B86614(this, *(_QWORD *)&num);
  if ( supportPositionList->max_length <= num )
    sub_1B8661C(this, *(_QWORD *)&num);
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
bool __fastcall QuestRestrictionInfo__IsMyServantOrNpcRestriction_41505772(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  QuestRestrictionInfo___c__DisplayClass183_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v12; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_4A4F769 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__, *(_QWORD *)&pos);
    sub_1B863B8(&System_Predicate_RestrictionEntity__TypeInfo, v5);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__DisplayClass183_0__IsMyServantOrNpcRestriction_b__0__, v6);
    sub_1B863B8(&QuestRestrictionInfo___c__DisplayClass183_0_TypeInfo, v7);
    byte_4A4F769 = 1;
  }
  v8 = (QuestRestrictionInfo___c__DisplayClass183_0_o *)sub_1B86604(QuestRestrictionInfo___c__DisplayClass183_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass183_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  v8->fields.pos = pos;
  if ( !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  if ( this->fields.restrictionBaseEntity )
  {
    slotInfos = this->fields.slotInfos;
    if ( slotInfos )
    {
      if ( pos - 1 >= slotInfos->max_length )
        sub_1B8661C(v9, v10);
      v12 = slotInfos->m_Items[pos - 1];
      if ( v12 )
        return (unsigned int)(v12->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_1B86614(v9, v10);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v15 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_QuestRestrictionInfo___c__DisplayClass183_0__IsMyServantOrNpcRestriction_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  return System_Collections_Generic_List_object___Exists(
           myServantOrNpcRestrictionEntityList,
           (System_Predicate_T__o *)v15,
           (const MethodInfo_35FCF84 *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestRestrictionInfo___c__DisplayClass185_0_o *v9; // x21
  void *restrictionSlotDetailDictionary; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  int v13; // w8
  int v14; // w9
  __int64 v15; // x10
  __int64 v16; // x10
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v18; // x20
  __int64 v19; // x8

  if ( (byte_4A4F76B & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      *(_QWORD *)&pos);
    sub_1B863B8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v5);
    sub_1B863B8(&System_Predicate_RestrictionEntity__TypeInfo, v6);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__DisplayClass185_0__IsNotIndividuality_b__0__, v7);
    sub_1B863B8(&QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo, v8);
    byte_4A4F76B = 1;
  }
  v9 = (QuestRestrictionInfo___c__DisplayClass185_0_o *)sub_1B86604(QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass185_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_23;
  v9->fields.pos = pos;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_41505772(this, pos, v12) )
  {
    if ( this->fields.restrictionBaseEntity )
    {
      restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                          (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                          v9->fields.pos,
                                          (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      v13 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
      if ( v13 >= 1 )
      {
        v14 = 0;
        while ( 1 )
        {
          if ( v13 == v14 )
            sub_1B8661C(restrictionSlotDetailDictionary, v11);
          v15 = *((_QWORD *)restrictionSlotDetailDictionary + v14 + 4);
          if ( !v15 )
            break;
          if ( *(_DWORD *)(v15 + 32) == 1 )
          {
            v16 = *(_QWORD *)(v15 + 40);
            if ( v16 )
            {
              if ( *(_QWORD *)(v16 + 24) )
                goto LABEL_17;
            }
          }
          if ( v13 == ++v14 )
            goto LABEL_16;
        }
LABEL_23:
        sub_1B86614(restrictionSlotDetailDictionary, v11);
      }
LABEL_16:
      LOBYTE(restrictionSlotDetailDictionary) = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
      v18 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v18,
        (Il2CppObject *)v9,
        Method_QuestRestrictionInfo___c__DisplayClass185_0__IsNotIndividuality_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                          myServantOrNpcRestrictionEntityList,
                                          (System_Predicate_T__o *)v18,
                                          (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( restrictionSlotDetailDictionary )
      {
        v19 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
        if ( !v19 )
          goto LABEL_23;
        LOBYTE(restrictionSlotDetailDictionary) = *(_DWORD *)(v19 + 24) == 0;
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
      sub_1B8661C(this, *(_QWORD *)&initPos);
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_1B86614(this, initPos);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Object_array *slotInfos; // x19
  QuestRestrictionInfo___c_c *v7; // x0
  System_Func_object__bool__o *_9__99_0; // x20
  Il2CppObject *v9; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4A4F744 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___, method);
    sub_1B863B8(&System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo, v3);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__99_0__, v4);
    sub_1B863B8(&QuestRestrictionInfo___c_TypeInfo, v5);
    byte_4A4F744 = 1;
  }
  if ( !this->fields.restrictionBaseEntity )
    return 0;
  slotInfos = (System_Object_array *)this->fields.slotInfos;
  v7 = QuestRestrictionInfo___c_TypeInfo;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v7 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__99_0 = (System_Func_object__bool__o *)v7->static_fields->__9__99_0;
  if ( !_9__99_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = QuestRestrictionInfo___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__99_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__99_0,
      v9,
      Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__99_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__99_0 = (struct System_Func_QuestRestrictionInfo_SlotInfo__bool__o *)_9__99_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__99_0, (int32_t)_9__99_0, v11, v12);
  }
  return BasicHelper__Any_object__49642848(
           slotInfos,
           (System_Func_T__bool__o *)_9__99_0,
           (const MethodInfo_2F57D60 *)Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
}


bool __fastcall QuestRestrictionInfo__IsRestrictionIndividualityWhole(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestRestrictionInfo___c_c *v9; // x0
  System_Object_array *restrictionWholeEntities; // x19
  System_Func_object__bool__o *_9__98_1; // x20
  Il2CppObject *v12; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo_2F57D60 *v16; // x2
  QuestRestrictionInfo___c_c *v17; // x0
  Il2CppObject *v18; // x21
  struct QuestRestrictionInfo___c_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4A4F743 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_RestrictionEntity___, method);
    sub_1B863B8(&Method_BasicHelper_Any_RestrictionWholeEntity___, v3);
    sub_1B863B8(&System_Func_RestrictionEntity__bool__TypeInfo, v4);
    sub_1B863B8(&System_Func_RestrictionWholeEntity__bool__TypeInfo, v5);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__98_0__, v6);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__98_1__, v7);
    sub_1B863B8(&QuestRestrictionInfo___c_TypeInfo, v8);
    byte_4A4F743 = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    v9 = QuestRestrictionInfo___c_TypeInfo;
    restrictionWholeEntities = (System_Object_array *)this->fields.restrictionWholeEntities;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v9 = QuestRestrictionInfo___c_TypeInfo;
    }
    _9__98_1 = (System_Func_object__bool__o *)v9->static_fields->__9__98_1;
    if ( !_9__98_1 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = QuestRestrictionInfo___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v9->static_fields->__9;
      _9__98_1 = (System_Func_object__bool__o *)sub_1B86604(System_Func_RestrictionWholeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__98_1,
        v12,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__98_1__,
        0LL);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__98_1 = (struct System_Func_RestrictionWholeEntity__bool__o *)_9__98_1;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__98_1, (int32_t)_9__98_1, v14, v15);
    }
    v16 = (const MethodInfo_2F57D60 *)Method_BasicHelper_Any_RestrictionWholeEntity___;
  }
  else
  {
    v17 = QuestRestrictionInfo___c_TypeInfo;
    restrictionWholeEntities = (System_Object_array *)this->fields.restrictionEntityList;
    if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
      v17 = QuestRestrictionInfo___c_TypeInfo;
    }
    _9__98_1 = (System_Func_object__bool__o *)v17->static_fields->__9__98_0;
    if ( !_9__98_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = QuestRestrictionInfo___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v17->static_fields->__9;
      _9__98_1 = (System_Func_object__bool__o *)sub_1B86604(System_Func_RestrictionEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__98_1,
        v18,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__98_0__,
        0LL);
      v19 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v19->__9__98_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__98_1;
      sub_1B8635C((CGThumbnailListItem_o *)&v19->__9__98_0, (int32_t)_9__98_1, v20, v21);
    }
    v16 = (const MethodInfo_2F57D60 *)Method_BasicHelper_Any_RestrictionEntity___;
  }
  return BasicHelper__Any_object__49642848(restrictionWholeEntities, (System_Func_T__bool__o *)_9__98_1, v16);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  QuestRestrictionInfo___c__DisplayClass186_0_o *v22; // x24
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  int32_t ServantImageLimitSealAfter; // w20
  Il2CppObject *Entity; // x21
  int v28; // w25
  __int64 m_CancellationTokenSource; // x8
  bool *p_DispLog; // x9
  __int64 v31; // x10
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x22
  System_Predicate_object__o *v33; // x23
  struct DataMasterBase_array *datalist; // x8
  RestrictionEntity_o *v35; // x22
  __int64 v36; // x8
  System_Int32_array *v37; // x0
  struct System_Threading_CancellationTokenSource_o *v38; // x9
  DataManager_o *v39; // x22
  unsigned __int64 v40; // x24
  RestrictionSlotDetailEntity_o *v41; // x23
  struct System_Int32_array *targetVals; // x9
  System_Int32_array *Individuality; // x0

  if ( (byte_4A4F76C & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v17);
    sub_1B863B8(&System_Predicate_RestrictionEntity__TypeInfo, v18);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__DisplayClass186_0__IsRestrictionServantIndividuality_b__0__, v20);
    sub_1B863B8(&QuestRestrictionInfo___c__DisplayClass186_0_TypeInfo, v21);
    byte_4A4F76C = 1;
  }
  v22 = (QuestRestrictionInfo___c__DisplayClass186_0_o *)sub_1B86604(QuestRestrictionInfo___c__DisplayClass186_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass186_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_51;
  v22->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_41505772(this, pos, v25) )
    goto LABEL_49;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_51;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_51;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)this->fields.restrictionSlotDictionary;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                    v22->fields.pos,
                                    (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( Instance )
      {
        v28 = -1;
        if ( (int)Instance->fields.m_CancellationTokenSource >= 1 )
        {
          m_CancellationTokenSource = (unsigned int)Instance->fields.m_CancellationTokenSource;
          p_DispLog = &Instance->fields._DispLog;
          while ( 1 )
          {
            v31 = *(_QWORD *)p_DispLog;
            if ( isChkSupport )
            {
              if ( !v31 )
                goto LABEL_51;
              if ( *(_DWORD *)(v31 + 28) == 2 )
                goto LABEL_30;
            }
            else
            {
              if ( !v31 )
                goto LABEL_51;
              if ( *(_DWORD *)(v31 + 28) == 1 )
              {
LABEL_30:
                v28 = *(_DWORD *)(v31 + 40);
                break;
              }
            }
            --m_CancellationTokenSource;
            p_DispLog += 8;
            if ( !m_CancellationTokenSource )
            {
              v28 = -1;
              break;
            }
          }
        }
        Instance = (DataManager_o *)this->fields.restrictionSlotDetailDictionary;
        if ( Instance )
        {
          Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                        v22->fields.pos,
                                        (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
          if ( Instance )
          {
            v38 = Instance->fields.m_CancellationTokenSource;
            v39 = Instance;
            if ( (int)v38 >= 1 )
            {
              LOBYTE(v36) = 0;
              v40 = 0LL;
              while ( 1 )
              {
                if ( v40 >= (unsigned int)v38 )
                  sub_1B8661C(Instance, v24);
                v41 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v39->fields._DispLog + v40);
                if ( (v28 & 0x80000000) != 0 )
                {
                  if ( !v41 )
                    goto LABEL_51;
                }
                else
                {
                  if ( !v41 )
                    goto LABEL_51;
                  if ( v28 != v41->fields.id )
                    goto LABEL_47;
                }
                if ( v41->fields.type == 1 )
                {
                  targetVals = v41->fields.targetVals;
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
                      Instance = (DataManager_o *)RestrictionSlotDetailEntity__IsIndividuality(v41, Individuality, 0LL);
                      if ( ((unsigned __int8)Instance & 1) != 0 )
                        goto LABEL_49;
                      LOBYTE(v36) = 1;
                    }
                  }
                }
LABEL_47:
                LODWORD(v38) = v39->fields.m_CancellationTokenSource;
                if ( (__int64)++v40 >= (int)v38 )
                  return v36;
              }
            }
            goto LABEL_49;
          }
        }
      }
    }
LABEL_51:
    sub_1B86614(Instance, v24);
  }
  if ( isChkSupport )
    goto LABEL_49;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v33 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v33,
    (Il2CppObject *)v22,
    Method_QuestRestrictionInfo___c__DisplayClass186_0__IsRestrictionServantIndividuality_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_51;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                myServantOrNpcRestrictionEntityList,
                                (System_Predicate_T__o *)v33,
                                (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !Instance )
    goto LABEL_49;
  datalist = Instance->fields.datalist;
  v35 = (RestrictionEntity_o *)Instance;
  if ( !datalist )
    goto LABEL_51;
  v36 = *(_QWORD *)&datalist->max_length;
  if ( v36 )
  {
    if ( !Entity )
      goto LABEL_51;
    v37 = ServantEntity__getIndividuality((ServantEntity_o *)Entity, limitCount, ServantImageLimitSealAfter, 0LL);
    if ( RestrictionEntity__IsRestriction_40674908(v35, v37, 0LL) )
    {
      LOBYTE(v36) = 1;
      return v36;
    }
LABEL_49:
    LOBYTE(v36) = 0;
  }
  return v36;
}


bool __fastcall QuestRestrictionInfo__IsRestrictionServantIndividuality_41508816(
        QuestRestrictionInfo_o *this,
        System_Int32_array *individuality,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  QuestRestrictionInfo___c__DisplayClass187_0_o *v11; // x22
  void *restrictionSlotDetailDictionary; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  int v15; // w9
  void *v16; // x20
  unsigned int v17; // w21
  __int64 v18; // x8
  __int64 v19; // x9
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x20
  System_Predicate_object__o *v21; // x21
  __int64 v22; // x8

  if ( (byte_4A4F76D & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      individuality);
    sub_1B863B8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v7);
    sub_1B863B8(&System_Predicate_RestrictionEntity__TypeInfo, v8);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__DisplayClass187_0__IsRestrictionServantIndividuality_b__0__, v9);
    sub_1B863B8(&QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo, v10);
    byte_4A4F76D = 1;
  }
  v11 = (QuestRestrictionInfo___c__DisplayClass187_0_o *)sub_1B86604(QuestRestrictionInfo___c__DisplayClass187_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass187_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_26;
  v11->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_41505772(this, pos, v14) )
    goto LABEL_24;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        v11->fields.pos,
                                        (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    v15 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v16 = restrictionSlotDetailDictionary;
    if ( v15 >= 1 )
    {
      v17 = 0;
      LOBYTE(v18) = 0;
      while ( 1 )
      {
        if ( v17 >= v15 )
          sub_1B8661C(restrictionSlotDetailDictionary, v13);
        restrictionSlotDetailDictionary = (void *)*((_QWORD *)v16 + (int)v17 + 4);
        if ( !restrictionSlotDetailDictionary )
          break;
        if ( *((_DWORD *)restrictionSlotDetailDictionary + 8) == 1 )
        {
          v19 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
          if ( v19 )
          {
            if ( *(_QWORD *)(v19 + 24) )
            {
              restrictionSlotDetailDictionary = (void *)RestrictionSlotDetailEntity__IsIndividuality(
                                                          (RestrictionSlotDetailEntity_o *)restrictionSlotDetailDictionary,
                                                          individuality,
                                                          0LL);
              if ( ((unsigned __int8)restrictionSlotDetailDictionary & 1) != 0 )
                goto LABEL_24;
              LOBYTE(v18) = 1;
            }
          }
        }
        v15 = *((_DWORD *)v16 + 6);
        if ( (int)++v17 >= v15 )
          return v18 & 1;
      }
LABEL_26:
      sub_1B86614(restrictionSlotDetailDictionary, v13);
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v21 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v21,
    (Il2CppObject *)v11,
    Method_QuestRestrictionInfo___c__DisplayClass187_0__IsRestrictionServantIndividuality_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_26;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                      myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v21,
                                      (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !restrictionSlotDetailDictionary )
  {
LABEL_24:
    LOBYTE(v18) = 0;
    return v18 & 1;
  }
  v22 = *((_QWORD *)restrictionSlotDetailDictionary + 5);
  if ( !v22 )
    goto LABEL_26;
  v18 = *(_QWORD *)(v22 + 24);
  if ( v18 )
    return RestrictionEntity__IsRestriction_40674908(
             (RestrictionEntity_o *)restrictionSlotDetailDictionary,
             individuality,
             0LL);
  return v18 & 1;
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
  return QuestRestrictionInfo__IsRestrictionSlot_41486016(this, ServantIndividuality, initPos, v14);
}


bool __fastcall QuestRestrictionInfo__IsRestrictionSlot_41486016(
        QuestRestrictionInfo_o *this,
        System_Int32_array *svtIndividuality,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  unsigned int v12; // w23
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  bool v14; // w22
  int32_t v15; // w21
  QuestRestrictionInfo_SlotInfo_o *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v18; // x8
  QuestRestrictionInfo_SlotInfo_o *v19; // x8
  QuestRestrictionInfo_o *v20; // x22
  struct QuestRestrictionInfo_SlotInfo_array *v21; // x8
  QuestRestrictionInfo_SlotInfo_o *v22; // x8

  v6 = this;
  if ( (byte_4A4F748 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_int___, svtIndividuality);
    sub_1B863B8(&Method_System_Linq_Enumerable_Intersect_int___, v7);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____get_Count__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____get_Item__, v10);
    this = (QuestRestrictionInfo_o *)sub_1B863B8(
                                       &Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__,
                                       v11);
    byte_4A4F748 = 1;
  }
  v12 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v6->fields.slotInfos;
    if ( !slotInfos )
LABEL_27:
      sub_1B86614(this, svtIndividuality);
    v14 = 0;
    v15 = 0;
    while ( v12 < slotInfos->max_length )
    {
      v16 = slotInfos->m_Items[v12];
      if ( !v16 )
        goto LABEL_27;
      this = (QuestRestrictionInfo_o *)v16->fields.individualityList;
      if ( !this )
        goto LABEL_27;
      if ( v15 >= SLODWORD(this->fields.dialogMessageInfoDictionary) )
        return v14;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v15,
                                         (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_int____get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->fields.dialogMessageInfoDictionary )
      {
        v17 = System_Linq_Enumerable__Intersect_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this,
                (System_Collections_Generic_IEnumerable_TSource__o *)svtIndividuality,
                (const MethodInfo_2F95B84 *)Method_System_Linq_Enumerable_Intersect_int___);
        this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_int_(
                                           v17,
                                           (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
        v18 = v6->fields.slotInfos;
        if ( !v18 )
          goto LABEL_27;
        if ( v12 >= v18->max_length )
          break;
        v19 = v18->m_Items[v12];
        if ( !v19 )
          goto LABEL_27;
        v20 = this;
        this = (QuestRestrictionInfo_o *)v19->fields.rangeTypeList;
        if ( !this )
          goto LABEL_27;
        this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                           (System_Collections_Generic_List_T__o *)this,
                                           v15,
                                           (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
        if ( (_DWORD)this == 1 )
        {
          this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                             (const MethodInfo_2F7B3AC *)Method_System_Linq_Enumerable_Any_int___);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 0;
        }
        else
        {
          v21 = v6->fields.slotInfos;
          if ( !v21 )
            goto LABEL_27;
          if ( v12 >= v21->max_length )
            break;
          v22 = v21->m_Items[v12];
          if ( !v22 )
            goto LABEL_27;
          this = (QuestRestrictionInfo_o *)v22->fields.rangeTypeList;
          if ( !this )
            goto LABEL_27;
          this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                             (System_Collections_Generic_List_T__o *)this,
                                             v15,
                                             (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)this == 2 )
          {
            this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                               (const MethodInfo_2F7B3AC *)Method_System_Linq_Enumerable_Any_int___);
            if ( ((unsigned __int8)this & 1) == 0 )
              return 0;
          }
        }
        v14 = 1;
      }
      slotInfos = v6->fields.slotInfos;
      ++v15;
      if ( !slotInfos )
        goto LABEL_27;
    }
    sub_1B8661C(this, svtIndividuality);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestriction_41485288(
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

  if ( (byte_4A4F746 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Empty_int___, *(_QWORD *)&svtId);
    byte_4A4F746 = 1;
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
      sub_1BD6AA4(Method_System_Array_Empty_int___);
      v21 = v20[7];
    }
    v22 = *(_QWORD *)(v21 + 16);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1BD6A48(inited);
    if ( !*(_DWORD *)(v22 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v22);
    v23 = *(_QWORD *)(v20[7] + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1BD6A48(inited);
    ServantIndividuality = **(System_Int32_array ***)(v23 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_41485548(this, &isWhole, ServantIndividuality, rarity, lv, targetType, v17);
}


bool __fastcall QuestRestrictionInfo__IsRestriction_41485548(
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
      sub_1B86614(this, isWhole);
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
      return 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
LABEL_29:
        sub_1B8661C(this, isWhole);
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
          this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction_40674908(v18, svtIndividuality, 0LL);
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


bool __fastcall QuestRestrictionInfo__IsRestriction_41486520(
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

  if ( (byte_4A4F747 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Empty_int___, isWhole);
    byte_4A4F747 = 1;
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
      sub_1BD6AA4(Method_System_Array_Empty_int___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1BD6A48(inited);
    if ( !*(_DWORD *)(v26 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v26);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1BD6A48(inited);
    ServantIndividuality = **(System_Int32_array ***)(v27 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_41486800(
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
bool __fastcall QuestRestrictionInfo__IsRestriction_41486800(
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

  if ( QuestRestrictionInfo__IsRestriction_41485548(
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
    return QuestRestrictionInfo__IsRestrictionSlot_41486016(this, svtIndividuality, initPos, v11);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsSelectableNormalSupport(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  QuestRestrictionInfo___c__DisplayClass184_0_o *v8; // x21
  _BOOL8 IsMyServantOrNpcRestriction_41505772; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v13; // w9
  QuestRestrictionInfo_SlotInfo_o *v14; // x8
  bool v15; // zf
  Il2CppObject *v16; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4A4F76A & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, *(_QWORD *)&pos);
    sub_1B863B8(&System_Predicate_RestrictionEntity__TypeInfo, v5);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__DisplayClass184_0__IsSelectableNormalSupport_b__0__, v6);
    sub_1B863B8(&QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo, v7);
    byte_4A4F76A = 1;
  }
  v8 = (QuestRestrictionInfo___c__DisplayClass184_0_o *)sub_1B86604(QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo);
  QuestRestrictionInfo___c__DisplayClass184_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  v8->fields.pos = pos;
  IsMyServantOrNpcRestriction_41505772 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41505772(this, pos, v11);
  if ( !IsMyServantOrNpcRestriction_41505772 )
  {
    LOBYTE(v16) = 0;
    return (char)v16;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    v18 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v18,
      (Il2CppObject *)v8,
      Method_QuestRestrictionInfo___c__DisplayClass184_0__IsSelectableNormalSupport_b__0__,
      0LL);
    if ( myServantOrNpcRestrictionEntityList )
    {
      v16 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v18,
              (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v16 )
        return (char)v16;
      v15 = LODWORD(v16[2].klass) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_1B86614(IsMyServantOrNpcRestriction_41505772, v10);
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v13 = v8->fields.pos - 1;
  if ( v13 >= slotInfos->max_length )
    sub_1B8661C(IsMyServantOrNpcRestriction_41505772, v10);
  v14 = slotInfos->m_Items[v13];
  if ( !v14 )
    goto LABEL_18;
  v15 = v14->fields.slotType == 4;
LABEL_14:
  LOBYTE(v16) = v15;
  return (char)v16;
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
  int32_t servantNumMax; // w8
  void *IsMyServantOrNpcRestriction_41505772; // x0
  int32_t *p_myServantNumMax; // x8
  int32_t v11; // w8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x9
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

  if ( (byte_4A4F765 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__, v7);
    byte_4A4F765 = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  IsMyServantOrNpcRestriction_41505772 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    IsMyServantOrNpcRestriction_41505772 = BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    p_myServantNumMax = (int32_t *)(*((_QWORD *)IsMyServantOrNpcRestriction_41505772 + 23) + 156LL);
  }
  else
  {
    p_myServantNumMax = &this->fields.myServantNumMax;
    if ( this->fields.myServantNumMax <= 0 )
      p_myServantNumMax = &this->fields.servantNumMax;
  }
  v11 = *p_myServantNumMax;
  if ( this->fields.isMyServantOrNpc || this->fields.isMyServantOrSupport )
  {
    myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_44;
    v11 -= myServantOrNpcRestrictionEntityList->fields._size;
  }
  if ( v11 != 1 )
    return 0;
  IsMyServantOrNpcRestriction_41505772 = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_41505772(
                                                   this,
                                                   pos,
                                                   *(const MethodInfo **)&pos);
  if ( ((unsigned __int8)IsMyServantOrNpcRestriction_41505772 & 1) != 0 )
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
            sub_1B8661C(IsMyServantOrNpcRestriction_41505772, *(_QWORD *)&svtId);
          v25 = targetVals->m_Items[v23 + 1];
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
    sub_1B86614(IsMyServantOrNpcRestriction_41505772, *(_QWORD *)&svtId);
  }
  IsMyServantOrNpcRestriction_41505772 = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                           this,
                                           *(const MethodInfo **)&svtId);
  if ( !IsMyServantOrNpcRestriction_41505772 )
    goto LABEL_44;
  v14 = *((_DWORD *)IsMyServantOrNpcRestriction_41505772 + 6);
  if ( v14 < 1 )
    return 1;
  v15 = 0;
  v16 = -v14;
  do
  {
    if ( !(v16 + v15) )
      goto LABEL_43;
    v17 = *((_DWORD *)IsMyServantOrNpcRestriction_41505772 + v15 + 8);
    if ( v17 == svtId )
      break;
    v18 = v16 + v15++;
  }
  while ( v18 != -1 );
  v19 = v17 == svtId;
  return !v19;
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
  if ( (byte_4A4F779 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&pos);
    byte_4A4F779 = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( slotInfos )
  {
    if ( initPos - 1 >= slotInfos->max_length )
      sub_1B8661C(this, *(_QWORD *)&pos);
    v8 = slotInfos->m_Items[initPos - 1];
    if ( !v8 )
      sub_1B86614(this, *(_QWORD *)&pos);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsSlotRestrictionForSupport(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Int32_array *Instance; // x0
  __int64 v18; // x1
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x22
  int max_length; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  unsigned int v22; // w23
  bool v23; // w21
  QuestRestrictionInfo_SlotInfo_o *v24; // x29
  int32_t v25; // w20
  Il2CppObject *Item; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21

  if ( (byte_4A4F782 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_int___, v10);
    sub_1B863B8(&Method_System_Linq_Enumerable_Intersect_int___, v11);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____get_Count__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____get_Item__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v15);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4A4F782 = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       svtId,
                                       (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_33;
    Instance = ServantEntity__getIndividuality((ServantEntity_o *)Instance, limitCount, dispLimitCount, 0LL);
    slotInfos = this->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_33;
    max_length = slotInfos->max_length;
    if ( max_length >= 1 )
    {
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
      v22 = 0;
      v23 = 0;
      while ( 1 )
      {
        if ( v22 >= max_length )
          sub_1B8661C(Instance, v18);
        v24 = slotInfos->m_Items[v22];
        if ( !v24 )
          break;
        if ( v24->fields.slotType == 2 )
        {
          Instance = (System_Int32_array *)v24->fields.individualityList;
          if ( !Instance )
            break;
          v25 = 0;
          while ( v25 < (signed int)Instance->max_length )
          {
            Instance = (System_Int32_array *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)Instance,
                                               v25,
                                               (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_int____get_Item__);
            if ( !Instance )
              goto LABEL_33;
            if ( *(_QWORD *)&Instance->max_length )
            {
              Instance = (System_Int32_array *)v24->fields.individualityList;
              if ( !Instance )
                goto LABEL_33;
              Item = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Instance,
                       v25,
                       (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_int____get_Item__);
              v27 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)Item,
                      v21,
                      (const MethodInfo_2F95B84 *)Method_System_Linq_Enumerable_Intersect_int___);
              Instance = System_Linq_Enumerable__ToArray_int_(
                           v27,
                           (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
              if ( !v24->fields.rangeTypeList )
                goto LABEL_33;
              v28 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              if ( System_Collections_Generic_List_Int32Enum___get_Item(
                     (System_Collections_Generic_List_T__o *)v24->fields.rangeTypeList,
                     v25,
                     (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
              {
                if ( System_Linq_Enumerable__Any_int_(
                       v28,
                       (const MethodInfo_2F7B3AC *)Method_System_Linq_Enumerable_Any_int___) )
                {
                  return 0;
                }
              }
              else
              {
                Instance = (System_Int32_array *)v24->fields.rangeTypeList;
                if ( !Instance )
                  goto LABEL_33;
                if ( System_Collections_Generic_List_Int32Enum___get_Item(
                       (System_Collections_Generic_List_T__o *)Instance,
                       v25,
                       (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 2
                  && !System_Linq_Enumerable__Any_int_(
                        v28,
                        (const MethodInfo_2F7B3AC *)Method_System_Linq_Enumerable_Any_int___) )
                {
                  return 0;
                }
              }
              v23 = 1;
            }
            Instance = (System_Int32_array *)v24->fields.individualityList;
            ++v25;
            if ( !Instance )
              goto LABEL_33;
          }
        }
        max_length = slotInfos->max_length;
        if ( (int)++v22 >= max_length )
          return v23;
      }
LABEL_33:
      sub_1B86614(Instance, v18);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  unsigned int v10; // w21
  RestrictionWholeEntity_o *v11; // x8
  struct System_Int32_array *targetVals; // x23
  __int64 v13; // x8
  unsigned __int64 v14; // x24
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A4F781 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v4);
    byte_4A4F781 = 1;
  }
  entity = 0LL;
  if ( !this->fields.restrictionBaseEntity )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_23:
    sub_1B86614(Master_object, v6);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return 1;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
LABEL_24:
      sub_1B8661C(Master_object, v6);
    v11 = restrictionWholeEntities->m_Items[v10];
    if ( !v11 )
      goto LABEL_23;
    if ( v11->fields.type == 9 )
    {
      targetVals = v11->fields.targetVals;
      if ( !targetVals )
        goto LABEL_23;
      v13 = *(_QWORD *)&targetVals->max_length;
      if ( (int)v13 >= 1 )
        break;
    }
LABEL_19:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v10 >= max_length )
      return 1;
  }
  v14 = 0LL;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)v13 )
      goto LABEL_24;
    if ( !v9 )
      goto LABEL_23;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      v9,
                                      &entity,
                                      targetVals->m_Items[v14 + 1],
                                      (const MethodInfo_32142CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      return 0;
    LODWORD(v13) = targetVals->max_length;
    if ( (__int64)++v14 >= (int)v13 )
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_41489592(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        FollowerInfo_o *npcFollowerInfo,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
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
  Il2CppObject *Master_object; // x22
  Il2CppObject *v24; // x23
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  System_Int32_array *OverwriteIndividuality; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x25
  struct System_Int32_array *uniqueIndividualitys; // x9
  __int64 v30; // x8
  BalanceConfig_c **v31; // x20
  const MethodInfo_3216828 **v32; // x26
  const MethodInfo_2F884F0 **v33; // x24
  unsigned __int64 v34; // x10
  int32_t v35; // w27
  unsigned __int64 i; // x19
  struct FollowerInfo_array *deckNpcInfoList; // x8
  FollowerInfo_o *v38; // x8
  struct FollowerInfo_array *v39; // x8
  FollowerInfo_o *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *NpcServantIndividuality; // x0
  struct FollowerInfo_array *v42; // x8
  int32_t v43; // w21
  const MethodInfo_2F884F0 **v44; // x27
  Il2CppObject *v45; // x24
  BalanceConfig_c **v46; // x23
  Il2CppObject *v47; // x20
  const MethodInfo_3216828 **v48; // x22
  DataManager_o *v49; // x28
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x26
  struct System_Byte_array *masterDataBytes; // x29
  int32_t v52; // w0
  Il2CppObject *v53; // x0
  int32_t saveNameList; // w29
  int32_t monitor_high; // w26
  ServantEntity_o *v56; // x28
  struct System_Int32_array *deckSvtIdList; // x8
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x9
  int32_t v61; // [xsp+8h] [xbp-A8h]
  int32_t v62; // [xsp+Ch] [xbp-A4h]
  ServantEntity_o *v63; // [xsp+10h] [xbp-A0h]
  struct System_Int32_array *v64; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+20h] [xbp-90h]
  unsigned __int64 v66; // [xsp+28h] [xbp-88h]
  QuestRestrictionInfo_o *v67; // [xsp+30h] [xbp-80h]
  Il2CppObject *v68; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v69; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_4A4F74F & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v13);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, v14);
    sub_1B863B8(&DataManager_TypeInfo, v15);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1B863B8(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v17);
    sub_1B863B8(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v18);
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, v19);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v20);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4A4F74F = 1;
  }
  v69 = 0LL;
  entity = 0LL;
  v68 = 0LL;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_71;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v24 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo
    || (Instance = (DataManager_o *)FollowerInfo__get_IsNpc(npcFollowerInfo, 0LL), ((unsigned __int8)Instance & 1) == 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_82;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_82;
    dispLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                       (ServantLimitImageMaster_o *)Instance,
                       svtId,
                       dispLimitCount,
                       0LL);
    goto LABEL_16;
  }
  if ( !v24 )
    goto LABEL_82;
  Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v24,
                                &entity,
                                npcFollowerInfo->fields.npcFollowerSvtId,
                                (const MethodInfo_3216828 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !Master_object )
      goto LABEL_82;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &v69,
           npcFollowerInfo->fields.npcFollowerSvtId,
           (const MethodInfo_3216828 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
    {
      Instance = (DataManager_o *)v69;
      if ( !v69 )
        goto LABEL_82;
      if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v69, 0LL) )
      {
        Instance = (DataManager_o *)v69;
        if ( !v69 )
          goto LABEL_82;
        OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                   (NpcServantFollowerEntity_o *)v69,
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
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      svtId,
                                      (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_82:
    sub_1B86614(Instance, v26);
  }
  v30 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v30 < 1 )
  {
LABEL_71:
    LOBYTE(Instance) = 0;
    return (char)Instance;
  }
  v63 = (ServantEntity_o *)Instance;
  v61 = dispLimitCount;
  v62 = limitCount;
  v31 = &BalanceConfig_TypeInfo;
  v32 = (const MethodInfo_3216828 **)&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__;
  v33 = (const MethodInfo_2F884F0 **)&Method_System_Linq_Enumerable_Contains_int___;
  v34 = 0LL;
  v64 = this->fields.uniqueIndividualitys;
  v67 = this;
  while ( 1 )
  {
    if ( v34 >= (unsigned int)v30 )
LABEL_83:
      sub_1B8661C(Instance, v26);
    v35 = uniqueIndividualitys->m_Items[v34 + 1];
    v66 = v34;
    if ( !source )
      break;
    if ( System_Linq_Enumerable__Contains_int_(source, v35, *v33) )
      goto LABEL_29;
LABEL_69:
    uniqueIndividualitys = v64;
    Instance = 0LL;
    LODWORD(v30) = v64->max_length;
    v34 = v66 + 1;
    if ( (__int64)(v66 + 1) >= (int)v30 )
      return (char)Instance;
  }
  Instance = (DataManager_o *)v63;
  if ( !v63 )
    goto LABEL_82;
  if ( !ServantEntity__IsIndividuality(v63, v62, v61, v35, 0LL) )
    goto LABEL_69;
LABEL_29:
  for ( i = 0LL; ; ++i )
  {
    Instance = (DataManager_o *)*v31;
    if ( !(*v31)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (DataManager_o *)*v31;
    }
    if ( (__int64)i >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 156LL) )
      goto LABEL_69;
    deckNpcInfoList = this->fields.deckNpcInfoList;
    if ( !deckNpcInfoList )
      goto LABEL_82;
    if ( i >= deckNpcInfoList->max_length )
      goto LABEL_83;
    v38 = deckNpcInfoList->m_Items[i];
    if ( v38 )
    {
      if ( !v24 )
        goto LABEL_82;
      Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v24,
                                    &entity,
                                    v38->fields.npcFollowerSvtId,
                                    *v32);
      v39 = this->fields.deckNpcInfoList;
      if ( !v39 )
        goto LABEL_82;
      if ( i >= v39->max_length )
        goto LABEL_83;
      v40 = v39->m_Items[i];
      if ( !v40 )
        goto LABEL_82;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)FollowerInfo__GetNpcServantIndividuality(
                                                                                         v40,
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
                                      &v68,
                                      v40->fields.npcFollowerSvtId,
                                      (const MethodInfo_3216828 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_48;
        Instance = (DataManager_o *)v68;
        if ( !v68 )
          goto LABEL_82;
        Instance = (DataManager_o *)NpcServantFollowerEntity__IsOverwriteIndividuality(
                                      (NpcServantFollowerEntity_o *)v68,
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)v68;
          if ( !v68 )
            goto LABEL_82;
          NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantFollowerEntity__GetOverwriteIndividuality(
                                                                                           (NpcServantFollowerEntity_o *)v68,
                                                                                           0LL);
        }
        else
        {
LABEL_48:
          v42 = this->fields.deckNpcInfoList;
          if ( !v42 )
            goto LABEL_82;
          if ( i >= v42->max_length )
            goto LABEL_83;
          Instance = (DataManager_o *)v42->m_Items[i];
          if ( !Instance )
            goto LABEL_82;
          v43 = v35;
          v44 = v33;
          v45 = v24;
          v46 = v31;
          v47 = Master_object;
          v48 = v32;
          Instance = (DataManager_o *)FollowerInfo__getServantLeaderInfo((FollowerInfo_o *)Instance, 0, 0, 0LL);
          if ( !Instance )
            goto LABEL_82;
          v49 = Instance;
          lookup = Instance->fields.lookup;
          masterDataBytes = Instance->fields.masterDataBytes;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v71.fields.currentCryptoKey = lookup;
          *(_QWORD *)&v71.fields.fakeValue = masterDataBytes;
          v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v71, 0LL);
          v53 = DataMasterBase_object__object__int___GetEntity(
                  v28,
                  v52,
                  (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          saveNameList = (int32_t)v49->fields.saveNameList;
          monitor_high = HIDWORD(v49[1].monitor);
          v56 = (ServantEntity_o *)v53;
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          Instance = (DataManager_o *)ImageLimitCount__ConvertDispLimitCountForClient(monitor_high, 0LL);
          if ( !v56 )
            goto LABEL_82;
          NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                           v56,
                                                                                           saveNameList,
                                                                                           (int32_t)Instance,
                                                                                           0LL);
          v32 = v48;
          Master_object = v47;
          v31 = v46;
          v24 = v45;
          v33 = v44;
          v35 = v43;
          this = v67;
        }
      }
      Instance = (DataManager_o *)System_Linq_Enumerable__Contains_int_(NpcServantIndividuality, v35, *v33);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
    }
    deckSvtIdList = this->fields.deckSvtIdList;
    if ( !deckSvtIdList )
      goto LABEL_82;
    if ( i >= deckSvtIdList->max_length )
      goto LABEL_83;
    v26 = (unsigned int)deckSvtIdList->m_Items[i + 1];
    if ( (int)v26 >= 1 )
    {
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    v28,
                                    v26,
                                    (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
             v35,
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
bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_41491076(
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
  __int64 v29; // x1
  __int64 v30; // x1
  void *Instance; // x0
  System_Int32_array *OverwriteIndividuality; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x27
  struct System_Int32_array *uniqueIndividualitys; // x9
  __int64 v35; // x8
  unsigned __int64 v36; // x26
  int32_t v37; // w29
  int32_t i; // w22
  FollowerInfo_o *v39; // x23
  PartyOrganizationListViewItem_o *v40; // x28
  System_Collections_Generic_IEnumerable_TSource__o *NpcServantIndividuality; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // kr00_16
  int32_t v43; // w0
  Il2CppObject *v44; // x23
  int32_t svtLimitCount; // w24
  _DWORD *v46; // x23
  __int64 v47; // x24
  __int64 v48; // x28
  int32_t v49; // w0
  Il2CppObject *v50; // x0
  int32_t v51; // w28
  int32_t v52; // w24
  ServantEntity_o *v53; // x23
  int32_t v55; // [xsp+4h] [xbp-ACh]
  ServantEntity_o *v56; // [xsp+8h] [xbp-A8h]
  struct System_Int32_array *v57; // [xsp+10h] [xbp-A0h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *v60; // [xsp+28h] [xbp-88h]
  Il2CppObject *v61; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *v62; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v63; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4A4F750 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v17);
    sub_1B863B8(&Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___, v18);
    sub_1B863B8(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v19);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, v20);
    sub_1B863B8(&DataManager_TypeInfo, v21);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v23);
    sub_1B863B8(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v24);
    sub_1B863B8(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v25);
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, v26);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v27);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    byte_4A4F750 = 1;
  }
  v63 = 0LL;
  entity = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v60 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_NpcServantFollowerIndividualityMaster___);
  if ( !npcFollowerInfo || !FollowerInfo__get_IsNpc(npcFollowerInfo, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_75;
    dispLimitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                       (ServantLimitImageMaster_o *)Instance,
                       svtId,
                       dispLimitCount,
                       0LL);
    goto LABEL_16;
  }
  Instance = v60;
  if ( !v60 )
    goto LABEL_75;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          v60,
          &entity,
          npcFollowerInfo->fields.npcFollowerSvtId,
          (const MethodInfo_3216828 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
  {
    Instance = Master_object;
    if ( !Master_object )
      goto LABEL_75;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           Master_object,
           &v63,
           npcFollowerInfo->fields.npcFollowerSvtId,
           (const MethodInfo_3216828 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
    {
      Instance = v63;
      if ( !v63 )
        goto LABEL_75;
      if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v63, 0LL) )
      {
        Instance = v63;
        if ( !v63 )
          goto LABEL_75;
        OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                   (NpcServantFollowerEntity_o *)v63,
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
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_75:
    sub_1B86614(Instance, v30);
  }
  v35 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v35 >= 1 )
  {
    v56 = (ServantEntity_o *)Instance;
    v55 = limitCount;
    v36 = 0LL;
    v57 = this->fields.uniqueIndividualitys;
    do
    {
      if ( v36 >= (unsigned int)v35 )
        sub_1B8661C(Instance, v30);
      v37 = uniqueIndividualitys->m_Items[v36 + 1];
      if ( source )
      {
        Instance = (void *)System_Linq_Enumerable__Contains_int_(
                             source,
                             v37,
                             (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          goto LABEL_29;
      }
      else
      {
        Instance = v56;
        if ( !v56 )
          goto LABEL_75;
        Instance = (void *)ServantEntity__IsIndividuality(v56, v55, dispLimitCount, v37, 0LL);
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
              v39 = (FollowerInfo_o *)*((_QWORD *)Instance + 15);
              v40 = (PartyOrganizationListViewItem_o *)Instance;
              if ( v39 && FollowerInfo__get_IsNpc(*((FollowerInfo_o **)Instance + 15), 0LL) )
              {
                Instance = v60;
                if ( !v60 )
                  goto LABEL_75;
                if ( DataMasterBase_object__object__long___TryGetEntity(
                       v60,
                       &entity,
                       v39->fields.npcFollowerSvtId,
                       (const MethodInfo_3216828 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
                {
                  NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)FollowerInfo__GetNpcServantIndividuality(
                                                                                                   v39,
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
                          &v62,
                          v39->fields.npcFollowerSvtId,
                          (const MethodInfo_3216828 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
                    goto LABEL_54;
                  Instance = v62;
                  if ( !v62 )
                    goto LABEL_75;
                  if ( NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v62, 0LL) )
                  {
                    Instance = v62;
                    if ( !v62 )
                      goto LABEL_75;
                    NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)NpcServantFollowerEntity__GetOverwriteIndividuality(
                                                                                                     (NpcServantFollowerEntity_o *)v62,
                                                                                                     0LL);
                  }
                  else
                  {
LABEL_54:
                    Instance = FollowerInfo__getServantLeaderInfo(v39, 0, 0, 0LL);
                    if ( !Instance )
                      goto LABEL_75;
                    v46 = Instance;
                    v48 = *((_QWORD *)Instance + 6);
                    v47 = *((_QWORD *)Instance + 7);
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v65.fields.currentCryptoKey = v48;
                    *(_QWORD *)&v65.fields.fakeValue = v47;
                    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v65, 0LL);
                    v50 = DataMasterBase_object__object__int___GetEntity(
                            v33,
                            v49,
                            (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                    v51 = v46[16];
                    v52 = v46[41];
                    v53 = (ServantEntity_o *)v50;
                    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                    Instance = (void *)ImageLimitCount__ConvertDispLimitCountForClient(v52, 0LL);
                    if ( !v53 )
                      goto LABEL_75;
                    NpcServantIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                                     v53,
                                                                                                     v51,
                                                                                                     (int32_t)Instance,
                                                                                                     0LL);
                  }
                }
                if ( System_Linq_Enumerable__Contains_int_(
                       NpcServantIndividuality,
                       v37,
                       (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___) )
                {
                  return 1;
                }
              }
              else
              {
                v42 = PartyOrganizationListViewItem__get_SvtId(v40, 0LL);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v42, 0LL);
                if ( DataMasterBase_object__object__int___TryGetEntity(
                       v33,
                       &v61,
                       v43,
                       (const MethodInfo_32142CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
                {
                  v44 = v61;
                  svtLimitCount = v40->fields.svtLimitCount;
                  Instance = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(v40, 0LL);
                  if ( !v44 )
                    goto LABEL_75;
                  if ( ServantEntity__IsIndividuality(
                         (ServantEntity_o *)v44,
                         svtLimitCount,
                         (int32_t)Instance,
                         v37,
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
      uniqueIndividualitys = v57;
      ++v36;
      LODWORD(v35) = v57->max_length;
    }
    while ( (__int64)v36 < (int)v35 );
  }
  return 0;
}


bool __fastcall QuestRestrictionInfo__IsUniqueServant(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueServant_41489064(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  bool isUniqueServant; // w8
  signed int v6; // w22
  BalanceConfig_c *v7; // x0
  struct System_Int32_array *deckSvtIdList; // x9
  int32_t v9; // w9

  if ( (byte_4A4F74D & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    byte_4A4F74D = 1;
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
            sub_1B86614(v7, *(_QWORD *)&svtId);
          if ( v6 >= deckSvtIdList->max_length )
            sub_1B8661C(v7, *(_QWORD *)&svtId);
          v9 = deckSvtIdList->m_Items[++v6];
        }
        while ( v9 != svtId );
      }
    }
  }
  return isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueServant_41489264(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  __int64 v11; // x1
  bool v12; // w24
  int32_t i; // w23
  PartyOrganizationListViewItem_o *Member; // x0
  int32_t v15; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // kr00_16

  if ( (byte_4A4F74E & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4A4F74E = 1;
  }
  if ( !this->fields.isUniqueServant )
    return 0;
  v12 = 0;
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
      v15 = *(_DWORD *)(*(_QWORD *)&Member->fields.cost + 156LL);
      v12 = i < v15;
      if ( i >= v15 )
        break;
      if ( num != i && partyIndex != i )
      {
        if ( !partyItem || (Member = PartyListViewItem__GetMember(partyItem, i, 0LL)) == 0LL )
          sub_1B86614(Member, *(_QWORD *)&svtId);
        v16 = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v16, 0LL) == svtId )
          break;
      }
    }
  }
  return v12;
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
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct System_Int32_array *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct FollowerInfo_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1

  if ( (byte_4A4F73D & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&FollowerInfo___TypeInfo, v3);
    sub_1B863B8(&int___TypeInfo, v4);
    byte_4A4F73D = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, (unsigned int)v5->static_fields->DeckMemberMax);
  this->fields.deckSvtIdList = v6;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.deckSvtIdList, (int32_t)v6, v7, v8);
  v9 = (struct FollowerInfo_array *)sub_1B86460(
                                      FollowerInfo___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
  this->fields.deckNpcInfoList = v9;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.deckNpcInfoList, (int32_t)v9, v10, v11);
  QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, v12);
}


void __fastcall QuestRestrictionInfo__SetDeckInfo(
        QuestRestrictionInfo_o *this,
        UserDeckEntity_o *userDeckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x21
  unsigned __int64 v9; // x22
  __int64 v10; // x26
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x28
  __int64 NpcFollowerServantId; // x0
  struct System_Int32_array *deckSvtIdList; // x8
  struct FollowerInfo_array *deckNpcInfoList; // x8
  unsigned __int64 max_length; // x9
  struct FollowerInfo_array *v19; // x8
  struct FollowerInfo_array *v20; // x24
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  FollowerInfo_o *v23; // x23
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v25; // x23
  struct System_Int32_array *v26; // x29
  __int64 v27; // x24
  __int64 v28; // x25
  struct System_Int32_array *deckLimitCountList; // x29
  __int64 v30; // x24
  __int64 v31; // x25
  struct System_Int32_array *deckDispLimitCountList; // x24
  __int64 v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4A4F73A & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, userDeckEntity);
    sub_1B863B8(&Method_DataManager_GetMaster_NpcFollowerMaster___, v5);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4A4F73A = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtIdList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v9 = 0LL;
    v10 = 32LL;
    v14 = (unsigned int)UserDeckEntity__GetFollowerIndex(userDeckEntity, 0LL) - 1LL;
    while ( 1 )
    {
      NpcFollowerServantId = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        NpcFollowerServantId = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v9 >= *(int *)(*(_QWORD *)(NpcFollowerServantId + 184) + 156LL) )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_44;
      if ( v9 >= deckSvtIdList->max_length )
        goto LABEL_43;
      deckSvtIdList->m_Items[v9 + 1] = 0;
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList )
      {
        max_length = deckNpcInfoList->max_length;
        if ( (__int64)v9 < (int)max_length )
        {
          if ( v9 >= max_length )
            goto LABEL_43;
          deckNpcInfoList->m_Items[v9] = 0LL;
          sub_1B8635C((CGThumbnailListItem_o *)((char *)deckNpcInfoList + v10), 0, v12, v13);
        }
      }
      if ( v14 != v9 )
      {
        v19 = this->fields.deckNpcInfoList;
        if ( v19 )
        {
          if ( (__int64)v9 < (int)v19->max_length )
          {
            NpcFollowerServantId = UserDeckEntity__GetNpcFollowerServantId(userDeckEntity, v9, 0LL);
            if ( NpcFollowerServantId >= 1 )
            {
              if ( !Master_object )
                goto LABEL_44;
              NpcFollowerServantId = (__int64)NpcFollowerMaster__GetEntity_40430760(
                                                (NpcFollowerMaster_o *)Master_object,
                                                this->fields.questId,
                                                this->fields.questPhase,
                                                NpcFollowerServantId,
                                                0LL);
              if ( !NpcFollowerServantId )
                goto LABEL_44;
              v20 = this->fields.deckNpcInfoList;
              NpcFollowerServantId = (__int64)NpcFollowerMaster__GetFollower(
                                                (NpcFollowerMaster_o *)Master_object,
                                                this->fields.questId,
                                                this->fields.questPhase,
                                                *(_QWORD *)(NpcFollowerServantId + 16),
                                                0LL);
              if ( !v20 )
                goto LABEL_44;
              v23 = (FollowerInfo_o *)NpcFollowerServantId;
              if ( NpcFollowerServantId )
              {
                NpcFollowerServantId = sub_1B864F4(NpcFollowerServantId, v20->obj.klass->_1.element_class);
                if ( !NpcFollowerServantId )
                {
                  v33 = sub_1B86638(0LL);
                  sub_1B864E0(v33, 0LL);
                }
              }
              if ( v9 >= v20->max_length )
LABEL_43:
                sub_1B8661C(NpcFollowerServantId, v11);
              v20->m_Items[v9] = v23;
              sub_1B8635C((CGThumbnailListItem_o *)((char *)v20 + v10), (int32_t)v23, v21, v22);
            }
          }
        }
        UserServant = UserDeckEntity__GetUserServant(userDeckEntity, v9, 0LL);
        if ( UserServant )
        {
          v25 = UserServant;
          v26 = this->fields.deckSvtIdList;
          v28 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v27 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v34.fields.currentCryptoKey = v28;
          *(_QWORD *)&v34.fields.fakeValue = v27;
          NpcFollowerServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v34, 0LL);
          if ( !v26 )
LABEL_44:
            sub_1B86614(NpcFollowerServantId, v11);
          if ( v9 >= v26->max_length )
            goto LABEL_43;
          v26->m_Items[v9 + 1] = NpcFollowerServantId;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v31 = *(_QWORD *)&v25->fields.limitCount.fields.currentCryptoKey;
            v30 = *(_QWORD *)&v25->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v35.fields.currentCryptoKey = v31;
            *(_QWORD *)&v35.fields.fakeValue = v30;
            NpcFollowerServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v35, 0LL);
            if ( v9 >= deckLimitCountList->max_length )
              goto LABEL_43;
            deckLimitCountList->m_Items[v9 + 1] = NpcFollowerServantId;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            NpcFollowerServantId = UserServantEntity__getDispLimitCount(v25, 0, 0LL);
            if ( v9 >= deckDispLimitCountList->max_length )
              goto LABEL_43;
            deckDispLimitCountList->m_Items[v9 + 1] = NpcFollowerServantId;
          }
        }
      }
      ++v9;
      v10 += 8LL;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_41479000(
        QuestRestrictionInfo_o *this,
        UserEventDeckEntity_o *eventDeckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *fixed; // x0
  System_Collections_Generic_List_int__o *v10; // x21
  unsigned __int64 v11; // x23
  __int64 v12; // x27
  __int64 v13; // x1
  __int64 v14; // x22
  __int64 Follower; // x0
  struct System_Int32_array *deckSvtIdList; // x8
  struct FollowerInfo_array *deckNpcInfoList; // x8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct FollowerInfo_array *v20; // x8
  struct FollowerInfo_array *v21; // x8
  int64_t NpcFollowerServantId; // x0
  int64_t v23; // x3
  NpcFollowerEntity_o *Entity_40430760; // x0
  struct FollowerInfo_array *v25; // x25
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  FollowerInfo_o *v28; // x24
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v30; // x24
  struct System_Int32_array *v31; // x29
  __int64 v32; // x25
  __int64 v33; // x26
  struct System_Int32_array *deckLimitCountList; // x29
  __int64 v35; // x25
  __int64 v36; // x26
  struct System_Int32_array *deckDispLimitCountList; // x25
  __int64 v38; // x0
  NpcFollowerMaster_o *Master_object; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4A4F73B & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, eventDeckEntity);
    sub_1B863B8(&Method_DataManager_GetMaster_NpcFollowerMaster___, v5);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4A4F73B = 1;
  }
  fixed = QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(this, (const MethodInfo *)eventDeckEntity);
  if ( eventDeckEntity && this->fields.deckSvtIdList )
  {
    v10 = fixed;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v11 = 0LL;
    v12 = 32LL;
    v14 = (unsigned int)UserEventDeckEntity__GetFollowerIndex(eventDeckEntity, 0LL) - 1LL;
    while ( 1 )
    {
      Follower = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Follower = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v11 >= *(int *)(*(_QWORD *)(Follower + 184) + 156LL) )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_48;
      if ( v11 >= deckSvtIdList->max_length )
        goto LABEL_49;
      deckSvtIdList->m_Items[v11 + 1] = 0;
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList && (__int64)v11 < (int)deckNpcInfoList->max_length )
      {
        if ( !v10 )
          goto LABEL_48;
        Follower = System_Collections_Generic_List_int___Contains(
                     v10,
                     v11,
                     (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Follower & 1) == 0 )
        {
          v20 = this->fields.deckNpcInfoList;
          if ( !v20 )
            goto LABEL_48;
          if ( v11 >= v20->max_length )
            goto LABEL_49;
          v20->m_Items[v11] = 0LL;
          sub_1B8635C((CGThumbnailListItem_o *)((char *)v20 + v12), 0, v18, v19);
        }
      }
      if ( v14 != v11 )
      {
        v21 = this->fields.deckNpcInfoList;
        if ( v21 && (__int64)v11 < (int)v21->max_length )
        {
          if ( !v10 )
            goto LABEL_48;
          if ( !System_Collections_Generic_List_int___Contains(
                  v10,
                  v11,
                  (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            NpcFollowerServantId = UserEventDeckEntity__GetNpcFollowerServantId(eventDeckEntity, v11, 0LL);
            if ( NpcFollowerServantId >= 1 )
            {
              v23 = NpcFollowerServantId;
              Follower = (__int64)Master_object;
              if ( !Master_object )
                goto LABEL_48;
              Entity_40430760 = NpcFollowerMaster__GetEntity_40430760(
                                  Master_object,
                                  this->fields.questId,
                                  this->fields.questPhase,
                                  v23,
                                  0LL);
              if ( Entity_40430760 )
              {
                v25 = this->fields.deckNpcInfoList;
                Follower = (__int64)NpcFollowerMaster__GetFollower(
                                      Master_object,
                                      this->fields.questId,
                                      this->fields.questPhase,
                                      Entity_40430760->fields.id,
                                      0LL);
                if ( !v25 )
                  goto LABEL_48;
                v28 = (FollowerInfo_o *)Follower;
                if ( Follower )
                {
                  Follower = sub_1B864F4(Follower, v25->obj.klass->_1.element_class);
                  if ( !Follower )
                  {
                    v38 = sub_1B86638(0LL);
                    sub_1B864E0(v38, 0LL);
                  }
                }
                if ( v11 >= v25->max_length )
                  goto LABEL_49;
                v25->m_Items[v11] = v28;
                sub_1B8635C((CGThumbnailListItem_o *)((char *)v25 + v12), (int32_t)v28, v26, v27);
              }
            }
          }
        }
        UserServant = UserEventDeckEntity__GetUserServant(eventDeckEntity, v11, 0LL);
        if ( UserServant )
        {
          v30 = UserServant;
          v31 = this->fields.deckSvtIdList;
          v33 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v32 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v40.fields.currentCryptoKey = v33;
          *(_QWORD *)&v40.fields.fakeValue = v32;
          Follower = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v40, 0LL);
          if ( !v31 )
LABEL_48:
            sub_1B86614(Follower, v13);
          if ( v11 >= v31->max_length )
LABEL_49:
            sub_1B8661C(Follower, v13);
          v31->m_Items[v11 + 1] = Follower;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v36 = *(_QWORD *)&v30->fields.limitCount.fields.currentCryptoKey;
            v35 = *(_QWORD *)&v30->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v41.fields.currentCryptoKey = v36;
            *(_QWORD *)&v41.fields.fakeValue = v35;
            Follower = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v41, 0LL);
            if ( v11 >= deckLimitCountList->max_length )
              goto LABEL_49;
            deckLimitCountList->m_Items[v11 + 1] = Follower;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            Follower = UserServantEntity__getDispLimitCount(v30, 0, 0LL);
            if ( v11 >= deckDispLimitCountList->max_length )
              goto LABEL_49;
            deckDispLimitCountList->m_Items[v11 + 1] = Follower;
          }
        }
      }
      ++v11;
      v12 += 8LL;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_41480352(
        QuestRestrictionInfo_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x1
  unsigned __int64 v8; // x21
  unsigned __int64 v9; // x27
  __int64 i; // x28
  __int64 Member; // x0
  struct FollowerInfo_array *deckNpcInfoList; // x8
  unsigned __int64 max_length; // x9
  struct System_Int32_array *deckSvtIdList; // x8
  struct System_Int32_array *v15; // x29
  PartyOrganizationListViewItem_o *v16; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x23
  struct FollowerInfo_array *v20; // x8
  FollowerInfo_o *followerInfo; // x0
  struct FollowerInfo_array *v22; // x23
  FollowerInfo_o *v23; // x22
  __int64 v24; // x0

  if ( (byte_4A4F73C & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, partyItem);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4A4F73C = 1;
  }
  if ( this->fields.deckSvtIdList )
  {
    v8 = 0LL;
    v9 = (unsigned int)num;
    for ( i = 32LL; ; i += 8LL )
    {
      Member = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Member = (__int64)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v8 >= *(int *)(*(_QWORD *)(Member + 184) + 156LL) )
        break;
      deckNpcInfoList = this->fields.deckNpcInfoList;
      if ( deckNpcInfoList )
      {
        max_length = deckNpcInfoList->max_length;
        if ( (__int64)v8 < (int)max_length )
        {
          if ( v8 >= max_length )
            goto LABEL_40;
          deckNpcInfoList->m_Items[v8] = 0LL;
          sub_1B8635C((CGThumbnailListItem_o *)((char *)deckNpcInfoList + i), 0, num, method);
        }
      }
      if ( v9 == v8 )
      {
        deckSvtIdList = this->fields.deckSvtIdList;
        if ( !deckSvtIdList )
          goto LABEL_39;
        if ( deckSvtIdList->max_length <= v9 )
          goto LABEL_40;
        deckSvtIdList->m_Items[v9 + 1] = 0;
      }
      else
      {
        if ( !partyItem )
          goto LABEL_39;
        Member = (__int64)PartyListViewItem__GetMember(partyItem, v8, 0LL);
        if ( !Member )
          goto LABEL_39;
        v15 = this->fields.deckSvtIdList;
        v16 = (PartyOrganizationListViewItem_o *)Member;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Member, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Member = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(SvtId, 0LL);
        if ( !v15 )
LABEL_39:
          sub_1B86614(Member, partyItem);
        if ( v8 >= v15->max_length )
          goto LABEL_40;
        v15->m_Items[v8 + 1] = Member;
        deckLimitCountList = this->fields.deckLimitCountList;
        if ( deckLimitCountList )
        {
          if ( v8 >= deckLimitCountList->max_length )
            goto LABEL_40;
          deckLimitCountList->m_Items[v8 + 1] = v16->fields.svtLimitCount;
        }
        deckDispLimitCountList = this->fields.deckDispLimitCountList;
        if ( deckDispLimitCountList )
        {
          Member = PartyOrganizationListViewItem__GetDispImageLimitCount(v16, 0LL);
          if ( v8 >= deckDispLimitCountList->max_length )
            goto LABEL_40;
          deckDispLimitCountList->m_Items[v8 + 1] = Member;
        }
        v20 = this->fields.deckNpcInfoList;
        if ( v20 )
        {
          if ( (__int64)v8 < (int)v20->max_length )
          {
            followerInfo = v16->fields.followerInfo;
            if ( followerInfo )
            {
              Member = FollowerInfo__get_IsNpc(followerInfo, 0LL);
              if ( (Member & 1) != 0 )
              {
                v22 = this->fields.deckNpcInfoList;
                if ( !v22 )
                  goto LABEL_39;
                v23 = v16->fields.followerInfo;
                if ( v23 )
                {
                  Member = sub_1B864F4(v23, v22->obj.klass->_1.element_class);
                  if ( !Member )
                  {
                    v24 = sub_1B86638(0LL);
                    sub_1B864E0(v24, 0LL);
                  }
                }
                if ( v8 >= v22->max_length )
LABEL_40:
                  sub_1B8661C(Member, partyItem);
                v22->m_Items[v8] = v23;
                sub_1B8635C((CGThumbnailListItem_o *)((char *)v22 + i), (int32_t)v23, num, method);
              }
            }
          }
        }
      }
      ++v8;
    }
  }
}


System_Collections_Generic_List_int__o *__fastcall QuestRestrictionInfo__SetFixNpcFollowerDeckInfo(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  FollowerInfo_array *Master_object; // x0
  __int64 v9; // x1
  int max_length; // w8
  FollowerInfo_array *v11; // x21
  unsigned int v12; // w23
  FollowerInfo_o *v13; // x22
  struct FollowerInfo_array *deckNpcInfoList; // x25
  int32_t npcInitIdx; // w26
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  char *v18; // x0
  int32_t v19; // w9
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x10
  __int64 size; // x11
  __int64 v24; // x0

  if ( (byte_4A4F73E & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_NpcFollowerMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_4A4F73E = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.deckNpcInfoList && this->fields.isNpcMultipleBattle && !this->fields.isNpcEditablePos )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (FollowerInfo_array *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object
      || (Master_object = NpcFollowerMaster__GetQuestFollowerList(
                            (NpcFollowerMaster_o *)Master_object,
                            this->fields.questId,
                            this->fields.questPhase,
                            0LL)) == 0LL )
    {
LABEL_25:
      sub_1B86614(Master_object, v9);
    }
    max_length = Master_object->max_length;
    v11 = Master_object;
    if ( max_length >= 1 )
    {
      v12 = 0;
      while ( v12 < max_length )
      {
        v13 = v11->m_Items[v12];
        if ( !v13 )
          goto LABEL_25;
        if ( v13->fields.isFixedNpc )
        {
          deckNpcInfoList = this->fields.deckNpcInfoList;
          if ( !deckNpcInfoList )
            goto LABEL_25;
          npcInitIdx = v13->fields.npcInitIdx;
          Master_object = (FollowerInfo_array *)sub_1B864F4(v13, deckNpcInfoList->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v24 = sub_1B86638(0LL);
            sub_1B864E0(v24, 0LL);
          }
          if ( npcInitIdx - 1 >= deckNpcInfoList->max_length )
            break;
          v18 = (char *)deckNpcInfoList + 8 * npcInitIdx - 8;
          *((_QWORD *)v18 + 4) = v13;
          sub_1B8635C((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v13, v16, v17);
          if ( !v7 )
            goto LABEL_25;
          v19 = v13->fields.npcInitIdx;
          items = v7->fields._items;
          v21 = Method_System_Collections_Generic_List_int__Add__;
          ++v7->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v7->fields._size;
          v9 = (unsigned int)(v19 - 1);
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v7,
              v9,
              *(const MethodInfo_35DF934 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v7->fields._size = size + 1;
            items->m_Items[size + 1] = v9;
          }
        }
        max_length = v11->max_length;
        if ( (int)++v12 >= max_length )
          return v7;
      }
      sub_1B8661C(Master_object, v9);
    }
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo__Setup(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
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
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  struct System_String_o *v75; // x20
  int32_t v76; // w1
  QuestRestrictionInfo_o *v77; // x29
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  CGThumbnailListItem_o *p_supportPositionList; // x24
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  int32_t *p_eventDeckNum; // x27
  System_Collections_Generic_List_object__o *v102; // x20
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  System_Collections_Generic_List_int__o *v105; // x20
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  System_Collections_Generic_List_object__o *v116; // x20
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  System_Collections_Generic_List_object__o *v119; // x20
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  System_Collections_Generic_List_object__o *v122; // x20
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  System_Collections_Generic_List_object__o *v125; // x20
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  System_Collections_Generic_List_object__o *v128; // x20
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  System_Collections_Generic_List_object__o *v131; // x20
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  System_Collections_Generic_List_object__o *v136; // x20
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  System_Collections_Generic_Dictionary_K__V__o **p_dialogMessageInfoDictionary; // x26
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  __int64 Master_object; // x0
  Il2CppObject *monitor_low; // x1
  const MethodInfo *v146; // x4
  const MethodInfo *v147; // x1
  System_Collections_Generic_Dictionary_int__object__o *v148; // x20
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  System_Collections_Generic_Dictionary_int__object__o *v151; // x20
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  System_Collections_Generic_Dictionary_int__object__o *v154; // x20
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  System_Collections_Generic_List_object__o *v157; // x29
  RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  bool HasFlag; // w0
  BalanceConfig_c *v160; // x0
  __int64 v161; // x0
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  RestrictionBaseEntity_o *v164; // x8
  Il2CppObject *v165; // x20
  RestrictionWholeEntity_array *Entities; // x0
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  unsigned int v171; // w25
  RestrictionWholeEntity_o *v172; // x21
  System_Boolean_array *SetPossiblePosition; // x0
  int32_t v174; // w2
  const MethodInfo *v175; // x3
  Il2CppObject *v176; // x23
  int32_t v177; // w0
  int32_t v178; // w2
  const MethodInfo *v179; // x3
  System_Collections_Generic_List_object__o *v180; // x23
  int32_t v181; // w2
  const MethodInfo *v182; // x3
  struct System_Object_array *v183; // x8
  _QWORD *v184; // x9
  __int64 v185; // x10
  __int64 v186; // x1
  Il2CppClass **v187; // x0
  System_Collections_Generic_List_object__o *v188; // x23
  int32_t v189; // w2
  const MethodInfo *v190; // x3
  struct System_Object_array *items; // x8
  _QWORD *v192; // x9
  __int64 size; // x10
  __int64 v194; // x1
  Il2CppClass **v195; // x0
  System_Collections_Generic_List_object__o *v196; // x23
  int32_t v197; // w2
  const MethodInfo *v198; // x3
  struct System_Object_array *v199; // x8
  _QWORD *v200; // x9
  __int64 v201; // x10
  __int64 v202; // x1
  Il2CppClass **v203; // x0
  Il2CppObject *v204; // x23
  int32_t v205; // w0
  int32_t v206; // w2
  const MethodInfo *v207; // x3
  BalanceConfig_c *v208; // x0
  __int64 v209; // x0
  int32_t v210; // w2
  const MethodInfo *v211; // x3
  __int64 v212; // x0
  int32_t v213; // w2
  const MethodInfo *v214; // x3
  __int64 v215; // x0
  int32_t v216; // w2
  const MethodInfo *v217; // x3
  __int64 v218; // x0
  int32_t v219; // w2
  const MethodInfo *v220; // x3
  System_Boolean_array *v221; // x0
  int32_t v222; // w2
  const MethodInfo *v223; // x3
  Il2CppObject *v224; // x23
  int32_t v225; // w0
  int32_t v226; // w2
  const MethodInfo *v227; // x3
  System_Collections_Generic_List_object__o *v228; // x23
  int32_t v229; // w2
  const MethodInfo *v230; // x3
  struct System_Object_array *v231; // x8
  _QWORD *v232; // x9
  __int64 v233; // x10
  __int64 v234; // x1
  Il2CppClass **v235; // x0
  Il2CppObject *v236; // x23
  int32_t v237; // w0
  int32_t v238; // w2
  const MethodInfo *v239; // x3
  System_Collections_Generic_List_object__o *v240; // x23
  int32_t v241; // w2
  const MethodInfo *v242; // x3
  struct System_Object_array *v243; // x8
  _QWORD *v244; // x9
  __int64 v245; // x10
  __int64 v246; // x1
  Il2CppClass **v247; // x0
  struct System_Int32_array *targetVals; // x8
  System_Collections_Generic_List_object__o *v249; // x23
  int32_t v250; // w2
  const MethodInfo *v251; // x3
  struct System_Object_array *v252; // x8
  _QWORD *v253; // x9
  __int64 v254; // x10
  __int64 v255; // x1
  Il2CppClass **v256; // x0
  System_Collections_Generic_List_object__o *v257; // x23
  int32_t v258; // w2
  const MethodInfo *v259; // x3
  struct System_Object_array *v260; // x8
  _QWORD *v261; // x9
  __int64 v262; // x10
  __int64 v263; // x1
  Il2CppClass **v264; // x0
  int32_t restrictionMessageId; // w2
  int32_t v266; // w2
  const MethodInfo *v267; // x3
  struct System_Object_array *v268; // x8
  _QWORD *v269; // x9
  __int64 v270; // x10
  Il2CppClass **v271; // x0
  QuestRestrictionInfo_DialogMessageInfo_o *v272; // x23
  QuestRestrictionInfo_o *v273; // x28
  char isAllOutBattle; // w8
  __int64 v275; // x21
  int32_t v276; // w2
  const MethodInfo *v277; // x3
  BalanceConfig_c *v278; // x0
  __int64 v279; // x0
  int32_t v280; // w2
  const MethodInfo *v281; // x3
  int32_t v282; // w21
  int v283; // w24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v284; // x8
  System_Object_array *v285; // x22
  System_Collections_Generic_List_int__o *v286; // x24
  int v287; // w8
  __int64 v288; // x19
  Il2CppObject *v289; // x23
  struct System_Int32_array *v290; // x8
  _QWORD *v291; // x9
  __int64 v292; // x10
  int32_t monitor_high; // w2
  int32_t v294; // w2
  const MethodInfo *v295; // x3
  struct System_Object_array *v296; // x8
  _QWORD *v297; // x9
  __int64 v298; // x10
  Il2CppClass **v299; // x0
  QuestRestrictionInfo_DialogMessageInfo_o *v300; // x23
  System_Object_array *v301; // x24
  CGThumbnailListItem_c *klass; // x25
  QuestRestrictionInfo_SlotInfo_o *v303; // x23
  int32_t v304; // w2
  const MethodInfo *v305; // x3
  int v306; // w19
  void **v307; // x0
  int servantNumMax; // w8
  CGThumbnailListItem_c *v309; // x8
  int32_t v310; // w24
  __int64 v311; // x8
  QuestRestrictionInfo___c_c *v312; // x0
  System_Func_object__bool__o *_9__84_0; // x23
  Il2CppObject *v314; // x25
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v316; // w2
  const MethodInfo *v317; // x3
  _BOOL4 v318; // w0
  QuestRestrictionInfo___c_c *v319; // x8
  _BOOL4 v320; // w23
  System_Func_object__bool__o *_9__84_1; // x25
  Il2CppObject *v322; // x28
  struct QuestRestrictionInfo___c_StaticFields *v323; // x0
  int32_t v324; // w2
  const MethodInfo *v325; // x3
  _BOOL4 v326; // w0
  QuestRestrictionInfo___c_c *v327; // x8
  _BOOL4 v328; // w25
  System_Func_object__bool__o *_9__84_2; // x28
  Il2CppObject *v330; // x27
  struct QuestRestrictionInfo___c_StaticFields *v331; // x0
  int32_t v332; // w2
  const MethodInfo *v333; // x3
  CGThumbnailListItem_c *v334; // x8
  __int64 v335; // x8
  CGThumbnailListItem_c *v336; // x8
  __int64 v337; // x8
  CGThumbnailListItem_c *v338; // x8
  __int64 v339; // x8
  int v340; // w8
  unsigned int v341; // w27
  Il2CppObject *v342; // x25
  Il2CppObject *v343; // x8
  CGThumbnailListItem_c *v344; // x8
  __int64 v345; // x8
  System_Collections_Generic_List_object__o *v346; // x23
  int32_t v347; // w2
  const MethodInfo *v348; // x3
  struct System_Object_array *v349; // x8
  _QWORD *v350; // x9
  __int64 v351; // x10
  __int64 v352; // x1
  Il2CppClass **v353; // x0
  CGThumbnailListItem_c *v354; // x8
  __int64 v355; // x8
  struct System_Int32_array *v356; // x8
  _QWORD *v357; // x9
  __int64 v358; // x10
  System_String_o *monitor; // x23
  CGThumbnailListItem_c *v360; // x8
  __int64 v361; // x8
  int32_t v362; // w2
  const MethodInfo *v363; // x3
  CGThumbnailListItem_c *v364; // x8
  __int64 v365; // x8
  System_String_o **v366; // x25
  CGThumbnailListItem_c *v367; // x8
  QuestRestrictionInfo___c_c *v368; // x0
  __int64 v369; // x27
  System_Func_object__bool__o *_9__84_3; // x23
  Il2CppObject *v371; // x25
  struct QuestRestrictionInfo___c_StaticFields *v372; // x0
  int32_t v373; // w2
  const MethodInfo *v374; // x3
  CGThumbnailListItem_c *v375; // x8
  __int64 v376; // x8
  CGThumbnailListItem_c *v377; // x8
  __int64 v378; // x8
  CGThumbnailListItem_c *v379; // x8
  __int64 v380; // x8
  System_Object_array *v381; // x0
  int32_t v382; // w2
  const MethodInfo *v383; // x3
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v385; // w10
  int v386; // w11
  int v387; // w9
  int v388; // w20
  int32_t v389; // w19
  QuestRestrictionInfo_SlotInfo_o *v390; // x13
  int v391; // w21
  int v392; // w22
  __int64 v393; // x8
  bool HasFlag_40473784; // w0
  bool v395; // w0
  Il2CppObject *Value_int__object; // x0
  int v397; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v399; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v400; // x8
  __int64 v401; // x8
  Il2CppObject *v402; // x20
  int32_t v403; // w0
  int32_t v404; // w2
  const MethodInfo *v405; // x3
  System_Collections_Generic_Dictionary_int__object__o *restrictionSlotDictionary; // x8
  _BOOL8 v407; // x0
  __int64 v408; // x1
  int v409; // w9
  int v410; // w10
  __int64 v411; // x11
  System_Text_StringBuilder_o *v412; // x20
  System_Text_StringBuilder_o *v413; // x21
  struct RestrictionWholeEntity_array *v414; // x19
  int v415; // w8
  unsigned int v416; // w22
  RestrictionWholeEntity_o *v417; // x24
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  int v420; // w25
  _BOOL4 v421; // w8
  __int64 v422; // x0
  int32_t v423; // w2
  const MethodInfo *v424; // x3
  System_String_o *v425; // x19
  System_String_o *v426; // x0
  System_String_o *v427; // x0
  int32_t v428; // w2
  const MethodInfo *v429; // x3
  __int64 v430; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // [xsp+8h] [xbp-198h]
  CGThumbnailListItem_o *p_svtIdForceBattleList; // [xsp+10h] [xbp-190h]
  CGThumbnailListItem_o *p_restrictionMessage; // [xsp+18h] [xbp-188h]
  CGThumbnailListItem_o *p_confirmRestrictionMessage; // [xsp+20h] [xbp-180h]
  struct RestrictionWholeEntity_array *v435; // [xsp+28h] [xbp-178h]
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
  System_Collections_Generic_Dictionary_K__V__o **v451; // [xsp+A8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o **p_restrictionSlotDetailDictionary; // [xsp+B0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_K__V__o **p_restrictionSlotDictionary; // [xsp+B8h] [xbp-E8h]
  struct RestrictionBaseEntity_o **p_restrictionBaseEntity; // [xsp+C0h] [xbp-E0h]
  QuestRestrictionInfo_o *v455; // [xsp+C8h] [xbp-D8h]
  CGThumbnailListItem_o *p_deckSvtIdList; // [xsp+D0h] [xbp-D0h]
  _BOOL4 v457; // [xsp+D0h] [xbp-D0h]
  int32_t questIdb; // [xsp+DCh] [xbp-C4h]
  CGThumbnailListItem_o *p_fields; // [xsp+E0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v461; // [xsp+E8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v462; // [xsp+100h] [xbp-A0h] BYREF
  Il2CppObject *item; // [xsp+120h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+128h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v465; // [xsp+130h] [xbp-70h] BYREF
  Il2CppObject *v466; // [xsp+138h] [xbp-68h] BYREF

  if ( (byte_4A4F738 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___, v6);
    sub_1B863B8(&Method_BasicHelper_Any_RestrictionSlotEntity___, v7);
    sub_1B863B8(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____, v8);
    sub_1B863B8(&Method_DataManager_GetMaster_NpcFollowerMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestGroupMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMaster_RestrictionBaseMaster___, v13);
    sub_1B863B8(&Method_DataManager_GetMaster_RestrictionMessageMaster___, v14);
    sub_1B863B8(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___, v15);
    sub_1B863B8(&Method_DataManager_GetMaster_RestrictionSlotMaster___, v16);
    sub_1B863B8(&Method_DataManager_GetMaster_RestrictionWholeMaster___, v17);
    sub_1B863B8(&DataManager_TypeInfo, v18);
    sub_1B863B8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v19);
    sub_1B863B8(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v20);
    sub_1B863B8(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo, v21);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__, v22);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__, v23);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__, v24);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__, v25);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__, v26);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__, v27);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__, v28);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__, v29);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__, v30);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v31);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__, v32);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo, v33);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo, v34);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo, v35);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__,
      v36);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__,
      v37);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__,
      v38);
    sub_1B863B8(&FollowerInfo___TypeInfo, v39);
    sub_1B863B8(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo, v40);
    sub_1B863B8(&System_Func_RestrictionSlotEntity__bool__TypeInfo, v41);
    sub_1B863B8(&int___TypeInfo, v42);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v43);
    sub_1B863B8(&Method_System_Collections_Generic_List_bool____Add__, v44);
    sub_1B863B8(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__, v45);
    sub_1B863B8(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__, v46);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____Add__, v47);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Contains__, v48);
    sub_1B863B8(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__, v49);
    sub_1B863B8(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__, v50);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v51);
    sub_1B863B8(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v52);
    sub_1B863B8(&Method_System_Collections_Generic_List_bool_____ctor__, v53);
    sub_1B863B8(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__, v54);
    sub_1B863B8(&Method_System_Collections_Generic_List_int_____ctor__, v55);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v56);
    sub_1B863B8(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo, v57);
    sub_1B863B8(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v58);
    sub_1B863B8(&System_Collections_Generic_List_bool____TypeInfo, v59);
    sub_1B863B8(&System_Collections_Generic_List_int____TypeInfo, v60);
    sub_1B863B8(&LocalizationManager_TypeInfo, v61);
    sub_1B863B8(&QuestRestrictionInfo_SlotInfo___TypeInfo, v62);
    sub_1B863B8(&QuestRestrictionInfo_SlotInfo_TypeInfo, v63);
    sub_1B863B8(&System_Text_StringBuilder_TypeInfo, v64);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__Setup_b__84_0__, v65);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__Setup_b__84_1__, v66);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__Setup_b__84_2__, v67);
    sub_1B863B8(&Method_QuestRestrictionInfo___c__Setup_b__84_3__, v68);
    sub_1B863B8(&QuestRestrictionInfo___c_TypeInfo, v69);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__,
      v70);
    sub_1B863B8(&StringLiteral_43/*"\n"*/, v71);
    sub_1B863B8(&StringLiteral_10147/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, v72);
    sub_1B863B8(&StringLiteral_10113/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v73);
    sub_1B863B8(&StringLiteral_1/*""*/, v74);
    byte_4A4F738 = 1;
  }
  v465 = 0LL;
  v466 = 0LL;
  item = 0LL;
  entity = 0LL;
  memset(&v462, 0, sizeof(v462));
  this->fields.isRestriction = 0;
  v75 = (struct System_String_o *)StringLiteral_1/*""*/;
  v76 = (int)StringLiteral_1/*""*/;
  v77 = this;
  this->fields.restrictionMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  p_restrictionMessage = (CGThumbnailListItem_o *)&this->fields.restrictionMessage;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.restrictionMessage,
    v76,
    questId,
    *(const MethodInfo **)&questPhase);
  this->fields.confirmRestrictionMessage = v75;
  p_confirmRestrictionMessage = (CGThumbnailListItem_o *)&this->fields.confirmRestrictionMessage;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.confirmRestrictionMessage, (int32_t)v75, v78, v79);
  this->fields.supportOnlyRestrictionEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.supportOnlyRestrictionEntity, 0, v80, v81);
  this->fields.uniqueSvtRestrictionEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.uniqueSvtRestrictionEntity, 0, v82, v83);
  this->fields.deckSvtIdList = 0LL;
  p_deckSvtIdList = (CGThumbnailListItem_o *)&this->fields.deckSvtIdList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.deckSvtIdList, 0, v84, v85);
  this->fields.deckNpcInfoList = 0LL;
  p_deckNpcInfoList = &this->fields.deckNpcInfoList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.deckNpcInfoList, 0, v86, v87);
  this->fields.fixedSupportPositionRestrictionEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.fixedSupportPositionRestrictionEntity, 0, v88, v89);
  this->fields.supportPositionList = 0LL;
  p_supportPositionList = (CGThumbnailListItem_o *)&this->fields.supportPositionList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.supportPositionList, 0, v91, v92);
  this->fields.fixedMyServantPositionRestrictionEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity, 0, v93, v94);
  this->fields.servantNumRestrictionEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantNumRestrictionEntity, 0, v95, v96);
  this->fields.servantNumMax = 0;
  this->fields.myServantNumRestrictionEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.myServantNumRestrictionEntity, 0, v97, v98);
  this->fields.myServantNumMax = 0;
  *(_WORD *)&this->fields.isSupportOnlyForceBattle = 0;
  this->fields.svtIdForceBattleList = 0LL;
  p_svtIdForceBattleList = (CGThumbnailListItem_o *)&this->fields.svtIdForceBattleList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtIdForceBattleList, 0, v99, v100);
  this->fields.isFatigure = 0;
  p_eventDeckNum = &this->fields.eventDeckNum;
  v77->fields.eventDeckNum = 0;
  *(int32_t *)((char *)p_eventDeckNum + 3) = 0;
  v102 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v102,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v77->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v102;
  sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.myServantOrNpcRestrictionEntityList, (int32_t)v102, v103, v104);
  v105 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v105,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v77->fields.specifiedPositionList = v105;
  sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.specifiedPositionList, (int32_t)v105, v106, v107);
  v77->fields.isNotTransitionSupportList = 0;
  v77->fields.supportInitIndex = 0;
  v77->fields.fixedServantPositionRestrictionEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.fixedServantPositionRestrictionEntity, 0, v108, v109);
  v77->fields.uniqueIndividualityEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.uniqueIndividualityEntity, 0, v110, v111);
  v77->fields.isAllOutBattle = 0;
  v77->fields.isDataLostBattle = 0;
  v77->fields.allOutBattleGroupNo = -1;
  v77->fields.dataLostBattleId = -1;
  v77->fields.deckLimitCountList = 0LL;
  p_deckLimitCountList = (CGThumbnailListItem_o *)&v77->fields.deckLimitCountList;
  sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.deckLimitCountList, 0, v112, v113);
  v77->fields.deckDispLimitCountList = 0LL;
  p_deckDispLimitCountList = (CGThumbnailListItem_o *)&v77->fields.deckDispLimitCountList;
  sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.deckDispLimitCountList, 0, v114, v115);
  v77->fields.isNotSingleSupportOnly = 0;
  *(_DWORD *)&v77->fields.isUniqueServant = 0;
  v116 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v116,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_bool_____ctor__);
  v77->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v116;
  p_positionsList = (System_Collections_Generic_List_object__o **)&v77->fields.positionsList;
  sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.positionsList, (int32_t)v116, v117, v118);
  v119 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v119,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_int_____ctor__);
  v77->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v119;
  p_fixedIndividualitiesList = (System_Collections_Generic_List_object__o **)&v77->fields.fixedIndividualitiesList;
  sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.fixedIndividualitiesList, (int32_t)v119, v120, v121);
  v77->fields.isFixedMyServantPosition = 0;
  v122 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v122,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_bool_____ctor__);
  v77->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v122;
  p_myServantPositionsList = (System_Collections_Generic_List_object__o **)&v77->fields.myServantPositionsList;
  sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.myServantPositionsList, (int32_t)v122, v123, v124);
  v125 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v125,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_int_____ctor__);
  v77->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v125;
  p_fixedMyServantIndividualitiesList = (System_Collections_Generic_List_object__o **)&v77->fields.fixedMyServantIndividualitiesList;
  sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.fixedMyServantIndividualitiesList, (int32_t)v125, v126, v127);
  v77->fields.isFixedSupportPosition = 0;
  v128 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v128,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_int_____ctor__);
  v77->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v128;
  p_fixedSupportIndividualitiesList = (System_Collections_Generic_List_object__o **)&v77->fields.fixedSupportIndividualitiesList;
  sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.fixedSupportIndividualitiesList, (int32_t)v128, v129, v130);
  v77->fields.isFixedNpcPosition = 0;
  v131 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v131,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_int_____ctor__);
  v77->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v131;
  p_fixedNpcIndividualitiesList = (System_Collections_Generic_List_object__o **)&v77->fields.fixedNpcIndividualitiesList;
  sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.fixedNpcIndividualitiesList, (int32_t)v131, v132, v133);
  v77->fields.npcPositionList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.npcPositionList, 0, v134, v135);
  v136 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v136,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_int_____ctor__);
  v77->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v136;
  p_needStartingIndividualitiesList = (System_Collections_Generic_List_object__o **)&v77->fields.needStartingIndividualitiesList;
  sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.needStartingIndividualitiesList, (int32_t)v136, v137, v138);
  v77->fields.isNeedStarting = 0;
  v77->fields.isFixedMyServantSingle = 0;
  *(_WORD *)&v77->fields.isMyServantOrNpc = 0;
  v77->fields.slotInfos = 0LL;
  p_fields = (CGThumbnailListItem_o *)&v77->fields;
  sub_1B8635C((CGThumbnailListItem_o *)&v77->fields, 0, v139, v140);
  v77->fields.dialogMessageInfoDictionary = 0LL;
  p_dialogMessageInfoDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&v77->fields.dialogMessageInfoDictionary;
  v455 = v77;
  sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.dialogMessageInfoDictionary, 0, v142, v143);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !Master_object )
    goto LABEL_387;
  p_restrictionBaseEntity = &v77->fields.restrictionBaseEntity;
  if ( RestrictionBaseMaster__TryGetEntity(
         (RestrictionBaseMaster_o *)Master_object,
         &v77->fields.restrictionBaseEntity,
         v77->fields.questId,
         v77->fields.questPhase,
         v146) )
  {
    v77->fields.isRestriction = 1;
    v148 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v148,
      (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    v77->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v148;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&v77->fields.restrictionSlotDictionary;
    sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.restrictionSlotDictionary, (int32_t)v148, v149, v150);
    v151 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v151,
      (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    v77->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v151;
    sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.restrictionSlotDetailDictionary, (int32_t)v151, v152, v153);
    v154 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v154,
      (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    v77->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v154;
    sub_1B8635C((CGThumbnailListItem_o *)&v77->fields.dialogMessageInfoDictionary, (int32_t)v154, v155, v156);
    v157 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v157,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    Master_object = (__int64)v455->fields.restrictionBaseEntity;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__object__o **)&v455->fields.restrictionSlotDetailDictionary;
    if ( !Master_object )
      goto LABEL_387;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 2LL, 0LL);
    restrictionBaseEntity = v455->fields.restrictionBaseEntity;
    v455->fields.isNotTransitionSupportList = Master_object & 1;
    if ( !restrictionBaseEntity )
      goto LABEL_387;
    if ( RestrictionBaseEntity__HasFlag(restrictionBaseEntity, 4LL, 0LL) )
    {
      Master_object = (__int64)*p_restrictionBaseEntity;
      if ( !*p_restrictionBaseEntity )
        goto LABEL_387;
      *p_eventDeckNum = RestrictionBaseEntity__GetUserEventDeckNo((RestrictionBaseEntity_o *)Master_object, 0LL);
    }
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    HasFlag = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 16LL, 0LL);
    v455->fields.isUniqueServant = HasFlag;
    if ( HasFlag )
    {
      v160 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v160 = BalanceConfig_TypeInfo;
      }
      v161 = sub_1B86460(int___TypeInfo, (unsigned int)v160->static_fields->DeckMemberMax);
      p_deckSvtIdList->klass = (CGThumbnailListItem_c *)v161;
      sub_1B8635C(p_deckSvtIdList, v161, v162, v163);
    }
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 32LL, 0LL);
    v164 = v455->fields.restrictionBaseEntity;
    v455->fields.isNotSingleSupportOnly = Master_object & 1;
    if ( !v164 )
      goto LABEL_387;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      v164,
      &v455->fields.overwriteLimitCountSvtIds,
      &v455->fields.overwriteLimitCounts,
      &v455->fields.overwriteLimitCountIconIds,
      0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v165 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    if ( !Master_object )
      goto LABEL_387;
    Entities = RestrictionWholeMaster__GetEntities(
                 (RestrictionWholeMaster_o *)Master_object,
                 (*p_restrictionBaseEntity)->fields.restrictionWholeId,
                 0LL);
    v455->fields.restrictionWholeEntities = Entities;
    sub_1B8635C((CGThumbnailListItem_o *)&v455->fields.restrictionWholeEntities, (int32_t)Entities, v167, v168);
    restrictionWholeEntities = v455->fields.restrictionWholeEntities;
    p_restrictionWholeEntities = &v455->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_387;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v171 = 0;
      p_needStartingIndividualities = (CGThumbnailListItem_o *)&v455->fields.needStartingIndividualities;
      p_uniqueIndividualitys = (CGThumbnailListItem_o *)&v455->fields.uniqueIndividualitys;
      p_fixedSupportIndividualities = (CGThumbnailListItem_o *)&v455->fields.fixedSupportIndividualities;
      p_fixedNpcIndividualities = (CGThumbnailListItem_o *)&v455->fields.fixedNpcIndividualities;
      v435 = v455->fields.restrictionWholeEntities;
      while ( 2 )
      {
        if ( v171 >= max_length )
          goto LABEL_388;
        v172 = restrictionWholeEntities->m_Items[v171];
        if ( v172 )
        {
          switch ( v172->fields.type )
          {
            case 2:
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestGroupMaster___);
              if ( !Master_object )
                goto LABEL_387;
              Master_object = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Master_object, questId, 17, 0LL);
              v455->fields.allOutBattleGroupNo = Master_object;
              v455->fields.isAllOutBattle = 1;
              goto LABEL_89;
            case 3:
              Master_object = System_Linq_Enumerable__Min(
                                (System_Collections_Generic_IEnumerable_int__o *)v172->fields.targetVals,
                                0LL);
              v455->fields.servantNumMax = Master_object - 1;
              goto LABEL_89;
            case 4:
              v188 = *p_positionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v172, 0LL);
              if ( !v188 )
                goto LABEL_387;
              items = v188->fields._items;
              v192 = Method_System_Collections_Generic_List_bool____Add__;
              ++v188->fields._version;
              if ( !items )
                goto LABEL_387;
              size = v188->fields._size;
              v194 = Master_object;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v188,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
              }
              else
              {
                v195 = &items->obj.klass + size;
                v188->fields._size = size + 1;
                v195[4] = (Il2CppClass *)v194;
                sub_1B8635C((CGThumbnailListItem_o *)(v195 + 4), v194, v189, v190);
              }
              Master_object = (__int64)v172->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v249 = *p_fixedIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v249 )
                goto LABEL_387;
              Master_object = sub_1B864F4(Master_object, int___TypeInfo);
              v252 = v249->fields._items;
              v253 = Method_System_Collections_Generic_List_int____Add__;
              ++v249->fields._version;
              if ( !v252 )
                goto LABEL_387;
              v254 = v249->fields._size;
              v255 = Master_object;
              if ( (unsigned int)v254 >= v252->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v249,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
              }
              else
              {
                v256 = &v252->obj.klass + v254;
                v249->fields._size = v254 + 1;
                v256[4] = (Il2CppClass *)v255;
                sub_1B8635C((CGThumbnailListItem_o *)(v256 + 4), v255, v250, v251);
              }
              v455->fields.isFixedPosition = 1;
              goto LABEL_89;
            case 5:
              v196 = *p_myServantPositionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v172, 0LL);
              if ( !v196 )
                goto LABEL_387;
              v199 = v196->fields._items;
              v200 = Method_System_Collections_Generic_List_bool____Add__;
              ++v196->fields._version;
              if ( !v199 )
                goto LABEL_387;
              v201 = v196->fields._size;
              v202 = Master_object;
              if ( (unsigned int)v201 >= v199->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v196,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v200[4] + 192LL) + 112LL));
              }
              else
              {
                v203 = &v199->obj.klass + v201;
                v196->fields._size = v201 + 1;
                v203[4] = (Il2CppClass *)v202;
                sub_1B8635C((CGThumbnailListItem_o *)(v203 + 4), v202, v197, v198);
              }
              Master_object = (__int64)v172->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v257 = *p_fixedMyServantIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v257 )
                goto LABEL_387;
              Master_object = sub_1B864F4(Master_object, int___TypeInfo);
              v260 = v257->fields._items;
              v261 = Method_System_Collections_Generic_List_int____Add__;
              ++v257->fields._version;
              if ( !v260 )
                goto LABEL_387;
              v262 = v257->fields._size;
              v263 = Master_object;
              if ( (unsigned int)v262 >= v260->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v257,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
              }
              else
              {
                v264 = &v260->obj.klass + v262;
                v257->fields._size = v262 + 1;
                v264[4] = (Il2CppClass *)v263;
                sub_1B8635C((CGThumbnailListItem_o *)(v264 + 4), v263, v258, v259);
              }
              v455->fields.isFixedMyServantPosition = 1;
              goto LABEL_89;
            case 6:
              SetPossiblePosition = RestrictionWholeEntity__GetSetPossiblePosition(v172, 0LL);
              p_supportPositionList->klass = (CGThumbnailListItem_c *)SetPossiblePosition;
              sub_1B8635C(p_supportPositionList, (int32_t)SetPossiblePosition, v174, v175);
              Master_object = (__int64)v172->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v176 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_fixedSupportIndividualities->klass = (CGThumbnailListItem_c *)sub_1B864F4(v176, int___TypeInfo);
              v177 = sub_1B864F4(v176, int___TypeInfo);
              sub_1B8635C(p_fixedSupportIndividualities, v177, v178, v179);
              Master_object = (__int64)v172->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v180 = *p_fixedSupportIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v180 )
                goto LABEL_387;
              Master_object = sub_1B864F4(Master_object, int___TypeInfo);
              v183 = v180->fields._items;
              v184 = Method_System_Collections_Generic_List_int____Add__;
              ++v180->fields._version;
              if ( !v183 )
                goto LABEL_387;
              v185 = v180->fields._size;
              v186 = Master_object;
              if ( (unsigned int)v185 >= v183->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v180,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v184[4] + 192LL) + 112LL));
              }
              else
              {
                v187 = &v183->obj.klass + v185;
                v180->fields._size = v185 + 1;
                v187[4] = (Il2CppClass *)v186;
                sub_1B8635C((CGThumbnailListItem_o *)(v187 + 4), v186, v181, v182);
              }
              v455->fields.isFixedSupportPosition = 1;
              goto LABEL_89;
            case 7:
              v221 = RestrictionWholeEntity__GetSetPossiblePosition(v172, 0LL);
              p_supportPositionList->klass = (CGThumbnailListItem_c *)v221;
              sub_1B8635C(p_supportPositionList, (int32_t)v221, v222, v223);
              Master_object = (__int64)v172->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v224 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_fixedNpcIndividualities->klass = (CGThumbnailListItem_c *)sub_1B864F4(v224, int___TypeInfo);
              v225 = sub_1B864F4(v224, int___TypeInfo);
              sub_1B8635C(p_fixedNpcIndividualities, v225, v226, v227);
              Master_object = (__int64)v172->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v228 = *p_fixedNpcIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v228 )
                goto LABEL_387;
              Master_object = sub_1B864F4(Master_object, int___TypeInfo);
              v231 = v228->fields._items;
              v232 = Method_System_Collections_Generic_List_int____Add__;
              ++v228->fields._version;
              if ( !v231 )
                goto LABEL_387;
              v233 = v228->fields._size;
              v234 = Master_object;
              if ( (unsigned int)v233 >= v231->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v228,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v232[4] + 192LL) + 112LL));
              }
              else
              {
                v235 = &v231->obj.klass + v233;
                v228->fields._size = v233 + 1;
                v235[4] = (Il2CppClass *)v234;
                sub_1B8635C((CGThumbnailListItem_o *)(v235 + 4), v234, v229, v230);
              }
              v455->fields.isFixedNpcPosition = 1;
              goto LABEL_89;
            case 8:
              Master_object = (__int64)v172->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v236 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_needStartingIndividualities->klass = (CGThumbnailListItem_c *)sub_1B864F4(v236, int___TypeInfo);
              v237 = sub_1B864F4(v236, int___TypeInfo);
              sub_1B8635C(p_needStartingIndividualities, v237, v238, v239);
              Master_object = (__int64)v172->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v240 = *p_needStartingIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v240 )
                goto LABEL_387;
              Master_object = sub_1B864F4(Master_object, int___TypeInfo);
              v243 = v240->fields._items;
              v244 = Method_System_Collections_Generic_List_int____Add__;
              ++v240->fields._version;
              if ( !v243 )
                goto LABEL_387;
              v245 = v240->fields._size;
              v246 = Master_object;
              if ( (unsigned int)v245 >= v243->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v240,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v244[4] + 192LL) + 112LL));
              }
              else
              {
                v247 = &v243->obj.klass + v245;
                v240->fields._size = v245 + 1;
                v247[4] = (Il2CppClass *)v246;
                sub_1B8635C((CGThumbnailListItem_o *)(v247 + 4), v246, v241, v242);
              }
              v455->fields.isNeedStarting = 1;
              goto LABEL_89;
            case 9:
              Master_object = (__int64)v172->fields.targetVals;
              if ( !Master_object )
                goto LABEL_387;
              v204 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_uniqueIndividualitys->klass = (CGThumbnailListItem_c *)sub_1B864F4(v204, int___TypeInfo);
              v205 = sub_1B864F4(v204, int___TypeInfo);
              sub_1B8635C(p_uniqueIndividualitys, v205, v206, v207);
              v208 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v208 = BalanceConfig_TypeInfo;
              }
              v209 = sub_1B86460(int___TypeInfo, (unsigned int)v208->static_fields->DeckMemberMax);
              v455->fields.deckSvtIdList = (struct System_Int32_array *)v209;
              sub_1B8635C(p_deckSvtIdList, v209, v210, v211);
              v212 = sub_1B86460(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v455->fields.deckLimitCountList = (struct System_Int32_array *)v212;
              sub_1B8635C(p_deckLimitCountList, v212, v213, v214);
              v215 = sub_1B86460(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v455->fields.deckDispLimitCountList = (struct System_Int32_array *)v215;
              sub_1B8635C(p_deckDispLimitCountList, v215, v216, v217);
              v218 = sub_1B86460(
                       FollowerInfo___TypeInfo,
                       (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v455->fields.deckNpcInfoList = (struct FollowerInfo_array *)v218;
              sub_1B8635C((CGThumbnailListItem_o *)p_deckNpcInfoList, v218, v219, v220);
              restrictionWholeEntities = v435;
              v455->fields.isUniqueIndividuality = 1;
              goto LABEL_89;
            case 0xA:
              v455->fields.isDataLostBattle = 1;
              targetVals = v172->fields.targetVals;
              if ( !targetVals )
                goto LABEL_387;
              if ( !targetVals->max_length )
                goto LABEL_388;
              v455->fields.dataLostBattleId = targetVals->m_Items[1];
LABEL_89:
              restrictionMessageId = v172->fields.restrictionMessageId;
              if ( restrictionMessageId < 1 )
                goto LABEL_102;
              if ( !v165 )
                goto LABEL_387;
              Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v165,
                                &entity,
                                restrictionMessageId,
                                (const MethodInfo_32142CC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
              if ( (Master_object & 1) == 0 )
                goto LABEL_102;
              if ( !v157 )
                goto LABEL_387;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v157,
                                entity,
                                (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) != 0 )
                goto LABEL_102;
              monitor_low = entity;
              v268 = v157->fields._items;
              v269 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
              ++v157->fields._version;
              if ( !v268 )
                goto LABEL_387;
              v270 = v157->fields._size;
              if ( (unsigned int)v270 >= v268->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v157,
                  monitor_low,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v269[4] + 192LL) + 112LL));
              }
              else
              {
                v271 = &v268->obj.klass + v270;
                v157->fields._size = v270 + 1;
                v271[4] = (Il2CppClass *)monitor_low;
                sub_1B8635C((CGThumbnailListItem_o *)(v271 + 4), (int32_t)monitor_low, v266, v267);
              }
              v272 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_1B86604(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
              QuestRestrictionInfo_DialogMessageInfo___ctor(v272, 0LL);
              if ( !v272 )
                goto LABEL_387;
              v272->fields.restrictionType = v172->fields.type;
              if ( !entity )
                goto LABEL_387;
              Master_object = (__int64)*p_dialogMessageInfoDictionary;
              if ( !*p_dialogMessageInfoDictionary )
                goto LABEL_387;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                (int32_t)entity[1].klass,
                (Il2CppObject *)v272,
                (const MethodInfo_326D764 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
LABEL_102:
              max_length = restrictionWholeEntities->max_length;
              if ( (int)++v171 >= max_length )
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
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestMaster___);
    v273 = v455;
    if ( !Master_object )
      goto LABEL_387;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
      &v466,
      questId,
      (const MethodInfo_32142CC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    Master_object = (__int64)v466;
    if ( !v466 )
      goto LABEL_387;
    Master_object = QuestEntity__HasFlag_40473784((QuestEntity_o *)v466, 0x100000LL, questPhase, 0LL);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v455 )
        goto LABEL_387;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = v455->fields.isAllOutBattle;
    }
    v455->fields.isNoSupportBattle = isAllOutBattle;
    Master_object = (__int64)v466;
    if ( !v466 )
      goto LABEL_387;
    v455->fields.isSupportOnlyForceBattle = QuestEntity__HasFlag_40473784(
                                              (QuestEntity_o *)v466,
                                              0x80000LL,
                                              questPhase,
                                              0LL);
    Master_object = (__int64)v466;
    if ( !v466 )
      goto LABEL_387;
    v455->fields.isFatigure = QuestEntity__HasFlag_40473784((QuestEntity_o *)v466, 0x200000LL, questPhase, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_387;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v465, questId, questPhase, 0LL) )
    {
      Master_object = sub_1B86460(int___TypeInfo, 1LL);
      if ( !v465 )
        goto LABEL_387;
      v275 = Master_object;
      Master_object = QuestPhaseEntity__GetSingleForceSvtId(v465, 0LL);
      if ( !v275 )
        goto LABEL_387;
      if ( !*(_DWORD *)(v275 + 24) )
        goto LABEL_388;
      *(_DWORD *)(v275 + 32) = Master_object;
      p_svtIdForceBattleList->klass = (CGThumbnailListItem_c *)v275;
      sub_1B8635C(p_svtIdForceBattleList, v275, v276, v277);
      Master_object = (__int64)v465;
      if ( !v465 )
        goto LABEL_387;
      v455->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v465, 0LL);
      Master_object = (__int64)v465;
      if ( !v465 )
        goto LABEL_387;
      v455->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v465, 0LL);
    }
    else
    {
      v455->fields.correctionIconId = -1;
    }
    v278 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v278 = BalanceConfig_TypeInfo;
    }
    v279 = sub_1B86460(QuestRestrictionInfo_SlotInfo___TypeInfo, (unsigned int)v278->static_fields->DeckMemberMax);
    p_fields->klass = (CGThumbnailListItem_c *)v279;
    sub_1B8635C(p_fields, v279, v280, v281);
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_387;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_326D8EC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    Master_object = (__int64)*p_restrictionSlotDetailDictionary;
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_387;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_326D8EC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v282 = 1;
    v283 = 1;
    v451 = p_dialogMessageInfoDictionary;
    while ( 1 )
    {
      Master_object = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Master_object = (__int64)BalanceConfig_TypeInfo;
      }
      if ( v282 > *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 156LL) )
        break;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      if ( !*p_restrictionBaseEntity )
        goto LABEL_387;
      if ( !Master_object )
        goto LABEL_387;
      Master_object = (__int64)RestrictionSlotMaster__GetEntities(
                                 (RestrictionSlotMaster_o *)Master_object,
                                 (*p_restrictionBaseEntity)->fields.restrictionSlotId,
                                 v282,
                                 0LL);
      if ( !Master_object )
        goto LABEL_387;
      v284 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
      v285 = (System_Object_array *)Master_object;
      questIdb = v283;
      Master_object = (__int64)*p_restrictionSlotDictionary;
      v457 = v284 != 0LL;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_387;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
        v282,
        &v285->obj,
        (const MethodInfo_326D764 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v286 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v286,
        (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
      v287 = v285->max_length;
      if ( v287 >= 1 )
      {
        v288 = 0LL;
        while ( (unsigned int)v288 < v287 )
        {
          v289 = v285->m_Items[v288];
          if ( !v289 || !v286 )
            goto LABEL_387;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v286,
                            (int32_t)v289[2].monitor,
                            (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            monitor_low = (Il2CppObject *)LODWORD(v289[2].monitor);
            v290 = v286->fields._items;
            v291 = Method_System_Collections_Generic_List_int__Add__;
            ++v286->fields._version;
            if ( !v290 )
              goto LABEL_387;
            v292 = v286->fields._size;
            if ( (unsigned int)v292 >= v290->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v286,
                (int32_t)monitor_low,
                *(const MethodInfo_35DF934 **)(*(_QWORD *)(v291[4] + 192LL) + 112LL));
            }
            else
            {
              v286->fields._size = v292 + 1;
              v290->m_Items[v292 + 1] = (int)monitor_low;
            }
          }
          monitor_high = HIDWORD(v289[2].monitor);
          if ( monitor_high >= 1 )
          {
            if ( !v165 )
              goto LABEL_387;
            Master_object = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v165,
                              &item,
                              monitor_high,
                              (const MethodInfo_32142CC *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (Master_object & 1) != 0 )
            {
              if ( !v157 )
                goto LABEL_387;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v157,
                                item,
                                (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) == 0 )
              {
                monitor_low = item;
                v296 = v157->fields._items;
                v297 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
                ++v157->fields._version;
                if ( !v296 )
                  goto LABEL_387;
                v298 = v157->fields._size;
                if ( (unsigned int)v298 >= v296->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v157,
                    monitor_low,
                    *(const MethodInfo_35FC958 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
                }
                else
                {
                  v299 = &v296->obj.klass + v298;
                  v157->fields._size = v298 + 1;
                  v299[4] = (Il2CppClass *)monitor_low;
                  sub_1B8635C((CGThumbnailListItem_o *)(v299 + 4), (int32_t)monitor_low, v294, v295);
                }
                v300 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_1B86604(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
                QuestRestrictionInfo_DialogMessageInfo___ctor(v300, 0LL);
                if ( !v300 )
                  goto LABEL_387;
                v300->fields.slotNo = v282;
                if ( !item )
                  goto LABEL_387;
                Master_object = (__int64)*p_dialogMessageInfoDictionary;
                if ( !*p_dialogMessageInfoDictionary )
                  goto LABEL_387;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  (int32_t)item[1].klass,
                  (Il2CppObject *)v300,
                  (const MethodInfo_326D764 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v287 = v285->max_length;
          if ( (int)++v288 >= v287 )
            goto LABEL_163;
        }
        goto LABEL_388;
      }
LABEL_163:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !Master_object )
        goto LABEL_387;
      Master_object = (__int64)RestrictionSlotDetailMaster__GetEntities(
                                 (RestrictionSlotDetailMaster_o *)Master_object,
                                 v286,
                                 0LL);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_387;
      v301 = (System_Object_array *)Master_object;
      System_Collections_Generic_Dictionary_int__object___Add(
        *p_restrictionSlotDetailDictionary,
        v282,
        (Il2CppObject *)Master_object,
        (const MethodInfo_326D764 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v303 = (QuestRestrictionInfo_SlotInfo_o *)sub_1B86604(QuestRestrictionInfo_SlotInfo_TypeInfo);
      QuestRestrictionInfo_SlotInfo___ctor(v303, 0LL);
      if ( !klass )
        goto LABEL_387;
      if ( v303 )
      {
        Master_object = sub_1B864F4(v303, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_object )
        {
          v430 = sub_1B86638(0LL);
          sub_1B864E0(v430, 0LL);
        }
      }
      v306 = v282 - 1;
      if ( (unsigned int)(v282 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_388;
      v307 = &klass->_1.image + v306;
      v307[4] = v303;
      sub_1B8635C((CGThumbnailListItem_o *)(v307 + 4), (int32_t)v303, v304, v305);
      servantNumMax = v273->fields.servantNumMax;
      if ( servantNumMax < 1 || v306 < servantNumMax )
      {
        v312 = QuestRestrictionInfo___c_TypeInfo;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v312 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__84_0 = (System_Func_object__bool__o *)v312->static_fields->__9__84_0;
        if ( !_9__84_0 )
        {
          if ( !v312->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v312);
            v312 = QuestRestrictionInfo___c_TypeInfo;
          }
          v314 = (Il2CppObject *)v312->static_fields->__9;
          _9__84_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__84_0, v314, Method_QuestRestrictionInfo___c__Setup_b__84_0__, 0LL);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
          static_fields->__9__84_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__84_0;
          sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__84_0, (int32_t)_9__84_0, v316, v317);
        }
        v318 = BasicHelper__Any_object__49642848(
                 v285,
                 (System_Func_T__bool__o *)_9__84_0,
                 (const MethodInfo_2F57D60 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v319 = QuestRestrictionInfo___c_TypeInfo;
        v320 = v318;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v319 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__84_1 = (System_Func_object__bool__o *)v319->static_fields->__9__84_1;
        if ( !_9__84_1 )
        {
          if ( !v319->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v319);
            v319 = QuestRestrictionInfo___c_TypeInfo;
          }
          v322 = (Il2CppObject *)v319->static_fields->__9;
          _9__84_1 = (System_Func_object__bool__o *)sub_1B86604(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__84_1, v322, Method_QuestRestrictionInfo___c__Setup_b__84_1__, 0LL);
          v323 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v323->__9__84_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__84_1;
          sub_1B8635C((CGThumbnailListItem_o *)&v323->__9__84_1, (int32_t)_9__84_1, v324, v325);
        }
        v326 = BasicHelper__Any_object__49642848(
                 v285,
                 (System_Func_T__bool__o *)_9__84_1,
                 (const MethodInfo_2F57D60 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v327 = QuestRestrictionInfo___c_TypeInfo;
        v328 = v326;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v327 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__84_2 = (System_Func_object__bool__o *)v327->static_fields->__9__84_2;
        if ( !_9__84_2 )
        {
          if ( !v327->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v327);
            v327 = QuestRestrictionInfo___c_TypeInfo;
          }
          v330 = (Il2CppObject *)v327->static_fields->__9;
          _9__84_2 = (System_Func_object__bool__o *)sub_1B86604(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__84_2, v330, Method_QuestRestrictionInfo___c__Setup_b__84_2__, 0LL);
          v331 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v331->__9__84_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__84_2;
          sub_1B8635C((CGThumbnailListItem_o *)&v331->__9__84_2, (int32_t)_9__84_2, v332, v333);
        }
        Master_object = BasicHelper__Any_object__49642848(
                          v285,
                          (System_Func_T__bool__o *)_9__84_2,
                          (const MethodInfo_2F57D60 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        if ( v328 || !v320 || (Master_object & 1) != 0 )
        {
          v273 = v455;
          if ( (v320 || !v328) | Master_object & 1 )
          {
            if ( v320 || v328 || (((unsigned int)Master_object ^ 1) & 1) != 0 )
            {
              if ( Master_object & 1 | (!v320 || !v328) )
              {
                if ( ((v320 || v328) & (unsigned int)Master_object & 1) != 0 )
                {
                  v377 = p_fields->klass;
                  if ( !p_fields->klass )
                    goto LABEL_387;
                  if ( (unsigned int)v306 >= LODWORD(v377->_1.namespaze) )
                    goto LABEL_388;
                  v378 = *((_QWORD *)&v377->_1.byval_arg.data + v306);
                  if ( !v378 )
                    goto LABEL_387;
                  *(_DWORD *)(v378 + 16) = 4;
                  v455->fields.isMyServantOrSupport = 1;
                }
              }
              else
              {
                v379 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_387;
                if ( (unsigned int)v306 >= LODWORD(v379->_1.namespaze) )
                  goto LABEL_388;
                v380 = *((_QWORD *)&v379->_1.byval_arg.data + v306);
                if ( !v380 )
                  goto LABEL_387;
                *(_DWORD *)(v380 + 16) = 3;
                v455->fields.isMyServantOrNpc = 1;
              }
            }
            else
            {
              v336 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v306 >= LODWORD(v336->_1.namespaze) )
                goto LABEL_388;
              v337 = *((_QWORD *)&v336->_1.byval_arg.data + v306);
              if ( !v337 )
                goto LABEL_387;
              *(_DWORD *)(v337 + 16) = 2;
              v455->fields.supportInitIndex = v282;
            }
          }
          else
          {
            v338 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_387;
            if ( (unsigned int)v306 >= LODWORD(v338->_1.namespaze) )
              goto LABEL_388;
            v339 = *((_QWORD *)&v338->_1.byval_arg.data + v306);
            if ( !v339 )
              goto LABEL_387;
            *(_DWORD *)(v339 + 16) = 1;
          }
        }
        else
        {
          v273 = v455;
          v334 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_387;
          if ( (unsigned int)v306 >= LODWORD(v334->_1.namespaze) )
            goto LABEL_388;
          v335 = *((_QWORD *)&v334->_1.byval_arg.data + v306);
          if ( !v335 )
            goto LABEL_387;
          *(_DWORD *)(v335 + 16) = 0;
        }
        if ( !v301 )
          goto LABEL_387;
        v340 = v301->max_length;
        if ( v340 >= 1 )
        {
          v341 = 0;
          while ( v341 < v340 )
          {
            v342 = v301->m_Items[v341];
            if ( !v342 )
              goto LABEL_387;
            if ( !v285->max_length )
              break;
            v343 = v285->m_Items[0];
            if ( !v343 )
              goto LABEL_387;
            if ( LODWORD(v342[1].klass) == LODWORD(v343[2].monitor) )
            {
              v344 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v306 >= LODWORD(v344->_1.namespaze) )
                goto LABEL_388;
              v345 = *((_QWORD *)&v344->_1.byval_arg.data + v306);
              if ( !v345 )
                goto LABEL_387;
              if ( *(_DWORD *)(v345 + 16) <= 2u )
              {
                Master_object = (__int64)v342[2].monitor;
                if ( !Master_object )
                  goto LABEL_387;
                v346 = *(System_Collections_Generic_List_object__o **)(v345 + 24);
                Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
                if ( !v346 )
                  goto LABEL_387;
                Master_object = sub_1B864F4(Master_object, int___TypeInfo);
                v349 = v346->fields._items;
                v350 = Method_System_Collections_Generic_List_int____Add__;
                ++v346->fields._version;
                if ( !v349 )
                  goto LABEL_387;
                v351 = v346->fields._size;
                v352 = Master_object;
                if ( (unsigned int)v351 >= v349->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v346,
                    (Il2CppObject *)Master_object,
                    *(const MethodInfo_35FC958 **)(*(_QWORD *)(v350[4] + 192LL) + 112LL));
                }
                else
                {
                  v353 = &v349->obj.klass + v351;
                  v346->fields._size = v351 + 1;
                  v353[4] = (Il2CppClass *)v352;
                  sub_1B8635C((CGThumbnailListItem_o *)(v353 + 4), v352, v347, v348);
                }
                v354 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_387;
                if ( (unsigned int)v306 >= LODWORD(v354->_1.namespaze) )
                  goto LABEL_388;
                v355 = *((_QWORD *)&v354->_1.byval_arg.data + v306);
                if ( !v355 )
                  goto LABEL_387;
                Master_object = *(_QWORD *)(v355 + 32);
                if ( !Master_object )
                  goto LABEL_387;
                monitor_low = (Il2CppObject *)LODWORD(v342[3].klass);
                v356 = *(struct System_Int32_array **)(Master_object + 16);
                v357 = Method_System_Collections_Generic_List_Restriction_RangeType__Add__;
                ++*(_DWORD *)(Master_object + 28);
                if ( !v356 )
                  goto LABEL_387;
                v358 = *(int *)(Master_object + 24);
                if ( (unsigned int)v358 >= v356->max_length )
                {
                  System_Collections_Generic_List_Int32Enum___AddWithResize(
                    (System_Collections_Generic_List_T__o *)Master_object,
                    (int32_t)monitor_low,
                    *(const MethodInfo_35E2160 **)(*(_QWORD *)(v357[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Master_object + 24) = v358 + 1;
                  v356->m_Items[v358 + 1] = (int)monitor_low;
                }
              }
              if ( LODWORD(v342[2].klass) == 2 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10147/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, 0LL);
                monitor = (System_String_o *)Master_object;
              }
              else
              {
                monitor = (System_String_o *)v342[1].monitor;
              }
              v360 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v306 >= LODWORD(v360->_1.namespaze) )
                goto LABEL_388;
              v361 = *((_QWORD *)&v360->_1.byval_arg.data + v306);
              if ( !v361 )
                goto LABEL_387;
              Master_object = System_String__IsNullOrEmpty(*(System_String_o **)(v361 + 40), 0LL);
              v364 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_387;
              if ( (unsigned int)v306 >= LODWORD(v364->_1.namespaze) )
                goto LABEL_388;
              v365 = *((_QWORD *)&v364->_1.byval_arg.data + v306);
              if ( !v365 )
                goto LABEL_387;
              v366 = (System_String_o **)(v365 + 40);
              if ( (Master_object & 1) == 0 )
                monitor = System_String__Concat_61683424(*v366, (System_String_o *)StringLiteral_43/*"\n"*/, monitor, 0LL);
              *v366 = monitor;
              sub_1B8635C((CGThumbnailListItem_o *)v366, (int32_t)monitor, v362, v363);
            }
            v340 = v301->max_length;
            if ( (int)++v341 >= v340 )
              goto LABEL_253;
          }
          goto LABEL_388;
        }
LABEL_253:
        v367 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_387;
        if ( (unsigned int)v306 >= LODWORD(v367->_1.namespaze) )
          goto LABEL_388;
        v368 = QuestRestrictionInfo___c_TypeInfo;
        v369 = *((_QWORD *)&v367->_1.byval_arg.data + v306);
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v368 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__84_3 = (System_Func_object__bool__o *)v368->static_fields->__9__84_3;
        if ( !_9__84_3 )
        {
          if ( !v368->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v368);
            v368 = QuestRestrictionInfo___c_TypeInfo;
          }
          v371 = (Il2CppObject *)v368->static_fields->__9;
          _9__84_3 = (System_Func_object__bool__o *)sub_1B86604(System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__84_3, v371, Method_QuestRestrictionInfo___c__Setup_b__84_3__, 0LL);
          v372 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v372->__9__84_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__84_3;
          sub_1B8635C((CGThumbnailListItem_o *)&v372->__9__84_3, (int32_t)_9__84_3, v373, v374);
          v273 = v455;
        }
        Master_object = BasicHelper__Any_object__49642848(
                          v301,
                          (System_Func_T__bool__o *)_9__84_3,
                          (const MethodInfo_2F57D60 *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
        if ( !v369 )
          goto LABEL_387;
        *(_BYTE *)(v369 + 48) = (Master_object & 1) == 0;
        v375 = p_fields->klass;
        v310 = questIdb;
        if ( !p_fields->klass )
          goto LABEL_387;
        if ( (unsigned int)v306 >= LODWORD(v375->_1.namespaze) )
          goto LABEL_388;
        v376 = *((_QWORD *)&v375->_1.byval_arg.data + v306);
        if ( !v376 )
          goto LABEL_387;
        p_dialogMessageInfoDictionary = v451;
        if ( *(_DWORD *)(v376 + 16) == 1 )
        {
          if ( *(_BYTE *)(v376 + 48) )
            v273->fields.isNpcEditablePos = 1;
        }
        *(_BYTE *)(v376 + 49) = v285->max_length != 0;
      }
      else
      {
        v309 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_387;
        v310 = questIdb;
        if ( (unsigned int)v306 >= LODWORD(v309->_1.namespaze) )
          goto LABEL_388;
        v311 = *((_QWORD *)&v309->_1.byval_arg.data + v306);
        if ( !v311 )
          goto LABEL_387;
        p_dialogMessageInfoDictionary = v451;
        *(_DWORD *)(v311 + 16) = 5;
        *(_BYTE *)(v311 + 48) = 0;
      }
      ++v282;
      v283 = v310 & v457;
    }
    if ( !v157
      || (v381 = System_Collections_Generic_List_object___ToArray(
                   v157,
                   (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__),
          v273->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v381,
          sub_1B8635C((CGThumbnailListItem_o *)&v273->fields.restrictionMessageEntities, (int32_t)v381, v382, v383),
          (slotInfos = v273->fields.slotInfos) == 0LL) )
    {
LABEL_387:
      sub_1B86614(Master_object, monitor_low);
    }
    v385 = slotInfos->max_length;
    if ( v385 >= 1 )
    {
      v386 = 0;
      v387 = 0;
      v388 = 0;
      v389 = 0;
      while ( v385 != v386 )
      {
        v390 = slotInfos->m_Items[v386];
        if ( !v390 )
          goto LABEL_387;
        switch ( v390->fields.slotType )
        {
          case 0:
          case 3:
          case 4:
            ++v389;
            break;
          case 1:
            ++v388;
            break;
          case 2:
            ++v387;
            break;
          default:
            break;
        }
        if ( v385 == ++v386 )
          goto LABEL_293;
      }
LABEL_388:
      sub_1B8661C(Master_object, monitor_low);
    }
    v389 = 0;
    v388 = 0;
    v387 = 0;
LABEL_293:
    if ( v387 == 0 && (v283 & 1) != 0 )
      v273->fields.isNoSupportBattle = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object )
      goto LABEL_387;
    Master_object = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                               (NpcFollowerMaster_o *)Master_object,
                               v273->fields.questId,
                               v273->fields.questPhase,
                               0LL);
    if ( !Master_object )
      goto LABEL_387;
    v391 = *(_DWORD *)(Master_object + 24);
    if ( v391 >= 1 )
    {
      v392 = 0;
      while ( v391 != v392 )
      {
        v393 = *(_QWORD *)(Master_object + 8LL * v392 + 32);
        if ( !v393 )
          goto LABEL_387;
        if ( !*(_BYTE *)(v393 + 105) && v391 != ++v392 )
          continue;
        goto LABEL_307;
      }
      goto LABEL_388;
    }
    v392 = 0;
LABEL_307:
    Master_object = (__int64)v466;
    if ( !v466 )
      goto LABEL_387;
    HasFlag_40473784 = QuestEntity__HasFlag_40473784((QuestEntity_o *)v466, 0x10000000LL, questPhase, 0LL);
    v273->fields.isNpcMultipleBattle = HasFlag_40473784;
    if ( !HasFlag_40473784 )
      v273->fields.isNpcMultipleBattle = v392 < v391 && v389 > 0 && v388 > 0;
    Master_object = (__int64)v466;
    if ( !v466 )
      goto LABEL_387;
    v395 = QuestEntity__HasFlag_40473784((QuestEntity_o *)v466, 0x20000000LL, questPhase, 0LL);
    v273->fields.isNpcOnlyBattle = v395;
    if ( !v395 )
      v273->fields.isNpcOnlyBattle = v392 < v391 && v389 == 0 && v388 > 0;
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_387;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 8LL, 0LL) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            *p_restrictionSlotDictionary,
                            2,
                            0LL,
                            (const MethodInfo_2F5BD3C *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v397 = 2;
      else
        v397 = 1;
      DeckMemberMax = v273->fields.servantNumMax;
      v273->fields.servantNumMin = v397;
      if ( !DeckMemberMax )
      {
        v399 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v399 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v399->static_fields->DeckMemberMax;
        v273->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v273->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v273->fields.isNpcMultipleBattle )
        v273->fields.myServantNumMax = v389;
    }
    else
    {
      v273->fields.myServantNumMax = v389;
      if ( v389 == 1 && DeckMemberMax == 1 )
      {
        Master_object = (__int64)v273->fields.restrictionSlotDetailDictionary;
        v273->fields.isFixedMyServantSingle = 1;
        if ( !Master_object )
          goto LABEL_387;
        Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                                   1,
                                   (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( Master_object )
        {
          v400 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
          if ( v400 )
          {
            if ( !(_DWORD)v400 )
              goto LABEL_388;
            v401 = *(_QWORD *)(Master_object + 32);
            if ( !v401 )
              goto LABEL_387;
            Master_object = *(_QWORD *)(v401 + 40);
            if ( !Master_object )
              goto LABEL_387;
            v402 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
            v273->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)sub_1B864F4(
                                                                                              v402,
                                                                                              int___TypeInfo);
            v403 = sub_1B864F4(v402, int___TypeInfo);
            sub_1B8635C((CGThumbnailListItem_o *)&v273->fields.fixedMyServantSingleIndividualities, v403, v404, v405);
          }
        }
      }
    }
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_387;
    Master_object = System_Collections_Generic_Dictionary_int__object___get_Count(
                      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                      (const MethodInfo_326D414 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__object__o *)v273->fields.restrictionSlotDictionary;
    v273->fields.isSupportOnly = (int)Master_object > 0;
    if ( !restrictionSlotDictionary )
      goto LABEL_387;
    Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Values(
                               restrictionSlotDictionary,
                               (const MethodInfo_326D574 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Master_object )
      goto LABEL_387;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v461,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Master_object,
      (const MethodInfo_39200B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v462 = v461;
    do
    {
      v407 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
               &v462,
               (const MethodInfo_33BCA9C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v407 )
        break;
      if ( !v462.fields._currentValue )
        sub_1B86614(v407, v408);
      v409 = (int)v462.fields._currentValue[1].monitor;
      if ( v409 >= 1 )
      {
        v410 = 0;
        while ( 1 )
        {
          if ( v409 == v410 )
            sub_1B8661C(v407, v408);
          v411 = *((_QWORD *)&v462.fields._currentValue[2].klass + v410);
          if ( !v411 )
            sub_1B86614(v407, v408);
          if ( *(_DWORD *)(v411 + 28) == 1 )
            break;
          if ( v409 == ++v410 )
            goto LABEL_348;
        }
        v273->fields.isSupportOnly = 0;
        break;
      }
LABEL_348:
      ;
    }
    while ( v273->fields.isSupportOnly );
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &v462,
      (const MethodInfo_33BCA98 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    v412 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v412, 0LL);
    v413 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v413, 0LL);
    v414 = *p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_387;
    v415 = v414->max_length;
    if ( v415 >= 1 )
    {
      v416 = 0;
      while ( 1 )
      {
        if ( v416 >= v415 )
          goto LABEL_388;
        v417 = v414->m_Items[v416];
        if ( !v417 )
          goto LABEL_387;
        Master_object = System_String__IsNullOrEmpty(v417->fields.summary, 0LL);
        if ( (Master_object & 1) == 0 )
          break;
LABEL_377:
        v415 = v414->max_length;
        if ( (int)++v416 >= v415 )
          goto LABEL_378;
      }
      type = v417->fields.type;
      if ( type == 10 || type == 2 )
      {
        v420 = 1;
      }
      else
      {
        if ( type == 1 )
        {
          targetVals2 = v417->fields.targetVals2;
          if ( !targetVals2 )
            goto LABEL_387;
          v420 = 1;
          v421 = targetVals2->max_length == 1;
LABEL_365:
          if ( (v421 & v420) != 0 )
          {
            if ( v273->fields.isRestriction )
            {
              if ( !v413 )
                goto LABEL_387;
              System_Text_StringBuilder__Append_61730360(v413, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            }
            else if ( !v413 )
            {
              goto LABEL_387;
            }
            Master_object = (__int64)System_Text_StringBuilder__Append_61730360(v413, v417->fields.summary, 0LL);
            v273->fields.isRestriction = 1;
          }
          if ( v420 )
          {
            if ( v273->fields.isRestriction )
            {
              if ( !v412 )
                goto LABEL_387;
              System_Text_StringBuilder__Append_61730360(v412, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            }
            else if ( !v412 )
            {
              goto LABEL_387;
            }
            Master_object = (__int64)System_Text_StringBuilder__Append_61730360(v412, v417->fields.summary, 0LL);
            v273->fields.isRestriction = 1;
          }
          goto LABEL_377;
        }
        v420 = 0;
      }
      v421 = 1;
      goto LABEL_365;
    }
LABEL_378:
    if ( !v413 )
      goto LABEL_387;
    Master_object = System_Text_StringBuilder__get_Length(v413, 0LL);
    if ( (int)Master_object >= 1 )
    {
      v422 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v413->klass->vtable._3_ToString.method)(
               v413,
               v413->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      p_confirmRestrictionMessage->klass = (CGThumbnailListItem_c *)v422;
      sub_1B8635C(p_confirmRestrictionMessage, v422, v423, v424);
    }
    if ( !v412 )
      goto LABEL_387;
    if ( System_Text_StringBuilder__get_Length(v412, 0LL) >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v425 = LocalizationManager__Get((System_String_o *)StringLiteral_10113/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v426 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v412->klass->vtable._3_ToString.method)(
                                  v412,
                                  v412->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v427 = System_String__Concat_61683424(v425, (System_String_o *)StringLiteral_43/*"\n"*/, v426, 0LL);
      p_restrictionMessage->klass = (CGThumbnailListItem_c *)v427;
      sub_1B8635C(p_restrictionMessage, (int32_t)v427, v428, v429);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(v77, v147);
  }
}


void __fastcall QuestRestrictionInfo__SetupOldRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
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
  __int64 v17; // x1
  System_Text_StringBuilder_o *v18; // x20
  System_Text_StringBuilder_o *v19; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct RestrictionEntity_array *restrictionEntityList; // x21
  int max_length; // w8
  unsigned int v26; // w22
  struct RestrictionEntity_o *v27; // x27
  BalanceConfig_c *v28; // x0
  struct System_Int32_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Boolean_array *DeckPositionList; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int *targetVals; // x8
  int32_t v36; // w8
  struct System_Int32_array *v37; // x8
  __int64 v38; // x9
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x8
  Il2CppObject *v43; // x25
  int32_t v44; // w0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  BalanceConfig_c *v47; // x0
  struct System_Int32_array *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_Int32_array *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Int32_array *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct FollowerInfo_array *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x8
  struct System_Int32_array *v64; // x8
  _BOOL4 isRestriction; // w9
  __int64 v66; // x9
  struct System_Collections_Generic_List_int__o *specifiedPositionList; // x25
  struct System_Int32_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  struct System_Collections_Generic_List_int__o *v71; // x25
  struct System_Int32_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  struct System_String_o *v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  System_String_o *v78; // x0
  struct System_String_o *v79; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  long double v82; // q0
  __int64 v83; // x0
  __int64 v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  bool HasFlag; // w0
  bool v88; // w0
  struct System_Int32_array *v89; // x20
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  bool v92; // w0
  bool HasFlag_40473784; // w0
  bool v94; // w0
  struct System_Int32_array *v95; // x20
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  bool v98; // w0
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  CGThumbnailListItem_o *p_totalCostRestrictionEntity; // [xsp+20h] [xbp-D0h]
  CGThumbnailListItem_o *p_uniqueSvtRestrictionEntity; // [xsp+30h] [xbp-C0h]
  CGThumbnailListItem_o *p_servantNumRestrictionEntity; // [xsp+58h] [xbp-98h]
  CGThumbnailListItem_o *p_myServantNumRestrictionEntity; // [xsp+60h] [xbp-90h]
  CGThumbnailListItem_o *p_uniqueIndividualityEntity; // [xsp+70h] [xbp-80h]
  QuestRestrictionInfoEntity_o *v110; // [xsp+78h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v111; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4A4F739 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v6);
    sub_1B863B8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7);
    sub_1B863B8(&FollowerInfo___TypeInfo, v8);
    sub_1B863B8(&int___TypeInfo, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v11);
    sub_1B863B8(&LocalizationManager_TypeInfo, v12);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B863B8(&System_Text_StringBuilder_TypeInfo, v15);
    sub_1B863B8(&StringLiteral_43/*"\n"*/, v16);
    sub_1B863B8(&StringLiteral_10113/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v17);
    byte_4A4F739 = 1;
  }
  v111 = 0LL;
  entity = 0LL;
  v110 = 0LL;
  v18 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v18, 0LL);
  v19 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v19, 0LL);
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_149;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    p_uniqueIndividualityEntity = (CGThumbnailListItem_o *)&this->fields.uniqueIndividualityEntity;
    p_servantNumRestrictionEntity = (CGThumbnailListItem_o *)&this->fields.servantNumRestrictionEntity;
    p_myServantNumRestrictionEntity = (CGThumbnailListItem_o *)&this->fields.myServantNumRestrictionEntity;
    v26 = 0;
    p_uniqueSvtRestrictionEntity = (CGThumbnailListItem_o *)&this->fields.uniqueSvtRestrictionEntity;
    p_totalCostRestrictionEntity = (CGThumbnailListItem_o *)&this->fields.totalCostRestrictionEntity;
    while ( 1 )
    {
      if ( v26 >= max_length )
        goto LABEL_150;
      v27 = restrictionEntityList->m_Items[v26];
      if ( !v27 )
        goto LABEL_149;
      switch ( v27->fields.type )
      {
        case 3:
          p_totalCostRestrictionEntity->klass = (CGThumbnailListItem_c *)v27;
          sub_1B8635C(p_totalCostRestrictionEntity, (int32_t)v27, v22, v23);
          goto LABEL_66;
        case 5:
          this->fields.supportOnlyRestrictionEntity = v27;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.supportOnlyRestrictionEntity, (int32_t)v27, v22, v23);
          this->fields.isSupportOnly = 1;
          goto LABEL_66;
        case 6:
          p_uniqueSvtRestrictionEntity->klass = (CGThumbnailListItem_c *)v27;
          sub_1B8635C(p_uniqueSvtRestrictionEntity, (int32_t)v27, v22, v23);
          v28 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v28 = BalanceConfig_TypeInfo;
          }
          v29 = (struct System_Int32_array *)sub_1B86460(
                                               int___TypeInfo,
                                               (unsigned int)v28->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v29;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.deckSvtIdList, (int32_t)v29, v30, v31);
          this->fields.isUniqueServant = 1;
          goto LABEL_66;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v27;
          sub_1B8635C(
            (CGThumbnailListItem_o *)&this->fields.fixedSupportPositionRestrictionEntity,
            (int32_t)v27,
            v22,
            v23);
          DeckPositionList = RestrictionEntity__getDeckPositionList(v27, 0LL);
          this->fields.supportPositionList = DeckPositionList;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.supportPositionList, (int32_t)DeckPositionList, v33, v34);
          this->fields.isFixedSupportPosition = 1;
          goto LABEL_66;
        case 8:
          this->fields.fixedMyServantPositionRestrictionEntity = v27;
          sub_1B8635C(
            (CGThumbnailListItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
            (int32_t)v27,
            v22,
            v23);
          this->fields.isFixedMyServantPosition = 1;
          goto LABEL_66;
        case 9:
          this->fields.fixedMyServantSingleRestrictionEntity = v27;
          sub_1B8635C(
            (CGThumbnailListItem_o *)&this->fields.fixedMyServantSingleRestrictionEntity,
            (int32_t)v27,
            v22,
            v23);
          this->fields.isFixedMyServantSingle = 1;
          goto LABEL_66;
        case 0xA:
          p_servantNumRestrictionEntity->klass = (CGThumbnailListItem_c *)v27;
          sub_1B8635C(p_servantNumRestrictionEntity, (int32_t)v27, v22, v23);
          targetVals = (int *)v27->fields.targetVals;
          if ( v27->fields.rangeType == 5 )
          {
            if ( targetVals && targetVals[6] >= 2 )
            {
              this->fields.servantNumMin = targetVals[8];
              v36 = targetVals[9];
LABEL_51:
              this->fields.servantNumMax = v36;
            }
          }
          else if ( targetVals )
          {
            v66 = *((_QWORD *)targetVals + 3);
            if ( v66 )
            {
              if ( !(_DWORD)v66 )
                goto LABEL_150;
              v36 = targetVals[8];
              goto LABEL_51;
            }
          }
LABEL_66:
          max_length = restrictionEntityList->max_length;
          if ( (int)++v26 >= max_length )
            goto LABEL_67;
          break;
        case 0xB:
          p_myServantNumRestrictionEntity->klass = (CGThumbnailListItem_c *)v27;
          sub_1B8635C(p_myServantNumRestrictionEntity, (int32_t)v27, v22, v23);
          v37 = v27->fields.targetVals;
          if ( !v37 )
            goto LABEL_66;
          v38 = *(_QWORD *)&v37->max_length;
          if ( !v38 )
            goto LABEL_66;
          if ( !(_DWORD)v38 )
            goto LABEL_150;
          this->fields.myServantNumMax = v37->m_Items[1];
          goto LABEL_66;
        case 0xC:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          items = myServantOrNpcRestrictionEntityList->fields._items;
          v40 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !items )
            goto LABEL_149;
          size = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v27,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            myServantOrNpcRestrictionEntityList->fields._size = size + 1;
            v42[4] = (Il2CppClass *)v27;
            sub_1B8635C((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v27, v22, v23);
          }
          specifiedPositionList = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v27,
                                                                                               0LL);
          if ( !specifiedPositionList )
            goto LABEL_149;
          v68 = specifiedPositionList->fields._items;
          v69 = Method_System_Collections_Generic_List_int__Add__;
          ++specifiedPositionList->fields._version;
          if ( !v68 )
            goto LABEL_149;
          v70 = specifiedPositionList->fields._size;
          v21 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v70 >= v68->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              specifiedPositionList,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_35DF934 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
          }
          else
          {
            specifiedPositionList->fields._size = v70 + 1;
            v68->m_Items[v70 + 1] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrNpc = 1;
          goto LABEL_66;
        case 0xE:
          this->fields.fixedServantPositionRestrictionEntity = v27;
          sub_1B8635C(
            (CGThumbnailListItem_o *)&this->fields.fixedServantPositionRestrictionEntity,
            (int32_t)v27,
            v22,
            v23);
          this->fields.isNeedStarting = 1;
          goto LABEL_66;
        case 0xF:
          p_uniqueIndividualityEntity->klass = (CGThumbnailListItem_c *)v27;
          sub_1B8635C(p_uniqueIndividualityEntity, (int32_t)v27, v22, v23);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v27->fields.targetVals;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          v43 = System_Array__Clone((System_Array_o *)myServantOrNpcRestrictionEntityList, 0LL);
          this->fields.uniqueIndividualitys = (struct System_Int32_array *)sub_1B864F4(v43, int___TypeInfo);
          v44 = sub_1B864F4(v43, int___TypeInfo);
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.uniqueIndividualitys, v44, v45, v46);
          v47 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v47 = BalanceConfig_TypeInfo;
          }
          v48 = (struct System_Int32_array *)sub_1B86460(
                                               int___TypeInfo,
                                               (unsigned int)v47->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v48;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.deckSvtIdList, (int32_t)v48, v49, v50);
          v51 = (struct System_Int32_array *)sub_1B86460(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckLimitCountList = v51;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.deckLimitCountList, (int32_t)v51, v52, v53);
          v54 = (struct System_Int32_array *)sub_1B86460(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckDispLimitCountList = v54;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.deckDispLimitCountList, (int32_t)v54, v55, v56);
          v57 = (struct FollowerInfo_array *)sub_1B86460(
                                               FollowerInfo___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckNpcInfoList = v57;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.deckNpcInfoList, (int32_t)v57, v58, v59);
          this->fields.isUniqueIndividuality = 1;
          goto LABEL_66;
        case 0x10:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          v60 = myServantOrNpcRestrictionEntityList->fields._items;
          v61 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v60 )
            goto LABEL_149;
          v62 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v62 >= v60->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v27,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v63 = &v60->obj.klass + v62;
            myServantOrNpcRestrictionEntityList->fields._size = v62 + 1;
            v63[4] = (Il2CppClass *)v27;
            sub_1B8635C((CGThumbnailListItem_o *)(v63 + 4), (int32_t)v27, v22, v23);
          }
          v71 = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v27,
                                                                                               0LL);
          if ( !v71 )
            goto LABEL_149;
          v72 = v71->fields._items;
          v73 = Method_System_Collections_Generic_List_int__Add__;
          ++v71->fields._version;
          if ( !v72 )
            goto LABEL_149;
          v74 = v71->fields._size;
          v21 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v74 >= v72->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v71,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_35DF934 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v71->fields._size = v74 + 1;
            v72->m_Items[v74 + 1] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrSupport = 1;
          goto LABEL_66;
        case 0x11:
          this->fields.isDataLostBattle = 1;
          v64 = v27->fields.targetVals;
          if ( !v64 )
            goto LABEL_149;
          if ( !v64->max_length )
            goto LABEL_150;
          isRestriction = this->fields.isRestriction;
          this->fields.dataLostBattleId = v64->m_Items[1];
          if ( isRestriction )
          {
LABEL_44:
            if ( !v18 )
              goto LABEL_149;
            System_Text_StringBuilder__Append_61730360(v18, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
          }
          else
          {
LABEL_11:
            if ( !v18 )
              goto LABEL_149;
          }
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_61730360(
                                                                                               v18,
                                                                                               v27->fields.name,
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
    if ( !v18 )
      goto LABEL_149;
    v75 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                                      v18,
                                      v18->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    this->fields.confirmRestrictionMessage = v75;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.confirmRestrictionMessage, (int32_t)v75, v76, v77);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v78 = LocalizationManager__Get((System_String_o *)StringLiteral_10113/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    v79 = System_String__Concat_61683424(
            v78,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            this->fields.confirmRestrictionMessage,
            0LL);
    this->fields.restrictionMessage = v79;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.restrictionMessage, (int32_t)v79, v80, v81);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)myServantOrNpcRestrictionEntityList,
    &entity,
    this->fields.questId,
    (const MethodInfo_32142CC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)myServantOrNpcRestrictionEntityList,
    &v111,
    this->fields.questId,
    this->fields.questPhase,
    0LL);
  v83 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v83 + 309) & 1) == 0 )
    v83 = sub_1BD6A48(v82);
  v84 = *(_QWORD *)(*(_QWORD *)(v83 + 192) + 16LL);
  if ( (*(_BYTE *)(v84 + 309) & 1) == 0 )
    v84 = sub_1BD6A48(v82);
  myServantOrNpcRestrictionEntityList = **(System_Collections_Generic_List_object__o ***)(v84 + 184);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         (QuestRestrictionInfoMaster_o *)myServantOrNpcRestrictionEntityList,
         &v110,
         this->fields.questId,
         this->fields.questPhase,
         0LL) )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v110;
    if ( !v110 )
      goto LABEL_149;
    if ( QuestRestrictionInfoEntity__HasFlag(v110, 0x100000LL, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
      goto LABEL_101;
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v110;
    if ( !v110 )
      goto LABEL_149;
    HasFlag = QuestRestrictionInfoEntity__HasFlag(v110, 0x400000000000000LL, 0LL);
    this->fields.isNoSupportBattle = HasFlag;
    if ( HasFlag )
      goto LABEL_101;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v110;
    if ( !v110 )
      goto LABEL_149;
    v88 = QuestRestrictionInfoEntity__HasFlag(v110, 0x80000LL, 0LL);
    this->fields.isSupportOnlyForceBattle = v88;
    if ( v88 )
    {
LABEL_101:
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v110;
      if ( v110 )
      {
        this->fields.isNpcMultipleBattle = QuestRestrictionInfoEntity__HasFlag(v110, 0x10000000LL, 0LL);
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v110;
        if ( v110 )
        {
          this->fields.isNpcOnlyBattle = QuestRestrictionInfoEntity__HasFlag(v110, 0x20000000LL, 0LL);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v110;
          if ( v110 )
          {
            this->fields.isNpcEditablePos = QuestRestrictionInfoEntity__HasFlag(v110, 0x800000000LL, 0LL);
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v110;
            if ( v110 )
            {
              this->fields.isNotTransitionSupportList = QuestRestrictionInfoEntity__HasFlag(
                                                          v110,
                                                          0x80000000000000LL,
                                                          0LL);
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v110;
              if ( v110 )
              {
                QuestRestrictionInfoEntity__GetOverwriteLimitCountSvtIds(
                  v110,
                  &this->fields.overwriteLimitCountSvtIds,
                  &this->fields.overwriteLimitCounts,
                  &this->fields.overwriteLimitCountIconIds,
                  0LL);
                myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v110;
                if ( v110 )
                {
                  v92 = QuestRestrictionInfoEntity__HasFlag(v110, 0x400000000000000LL, 0LL);
                  this->fields.isAllOutBattle = v92;
                  if ( v92 )
                  {
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_149;
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_((DataManager_o *)myServantOrNpcRestrictionEntityList, (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_149;
                    this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                                         (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                                         this->fields.questId,
                                                         17,
                                                         0LL);
                  }
                  if ( entity )
                    this->fields.isFatigure = QuestEntity__HasFlag_40473784(
                                                (QuestEntity_o *)entity,
                                                0x200000LL,
                                                this->fields.questPhase,
                                                0LL);
                  if ( v111 )
                  {
                    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v111, 0LL);
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v111;
                    if ( !v111 )
                      goto LABEL_149;
                    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v111, 0LL);
                  }
                  else
                  {
                    this->fields.correctionIconId = -1;
                  }
                  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v110;
                  if ( v110 )
                  {
                    this->fields.isNotSingleSupportOnly = QuestRestrictionInfoEntity__HasFlag(
                                                            v110,
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
      sub_1B86614(myServantOrNpcRestrictionEntityList, v21);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v110;
    if ( !v110 )
      goto LABEL_149;
    if ( QuestRestrictionInfoEntity__HasFlag(v110, 0x1000000LL, 0LL) )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v110;
      if ( !v110 )
        goto LABEL_149;
      this->fields.eventDeckNum = QuestRestrictionInfoEntity__GetUserEventDeckNo(v110, 0LL);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1B86460(int___TypeInfo, 1LL);
    if ( !v110 )
      goto LABEL_149;
    v89 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetSingleForceSvtId(
                                                                                         v110,
                                                                                         0LL);
    if ( !v89 )
      goto LABEL_149;
    if ( v89->max_length )
    {
      v89->m_Items[1] = (int)myServantOrNpcRestrictionEntityList;
      this->fields.svtIdForceBattleList = v89;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtIdForceBattleList, (int32_t)v89, v90, v91);
      goto LABEL_101;
    }
LABEL_150:
    sub_1B8661C(myServantOrNpcRestrictionEntityList, v21);
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_40473784((QuestEntity_o *)entity, 0x100000LL, this->fields.questPhase, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
      if ( !entity )
        goto LABEL_149;
      HasFlag_40473784 = QuestEntity__HasFlag_40473784(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0LL);
      this->fields.isNoSupportBattle = HasFlag_40473784;
      if ( !HasFlag_40473784 )
      {
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
        if ( !entity )
          goto LABEL_149;
        v94 = QuestEntity__HasFlag_40473784((QuestEntity_o *)entity, 0x80000LL, this->fields.questPhase, 0LL);
        this->fields.isSupportOnlyForceBattle = v94;
        if ( !v94 )
        {
          if ( v111 )
          {
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
            if ( !entity )
              goto LABEL_149;
            if ( QuestEntity__HasFlag_40473784((QuestEntity_o *)entity, 0x1000000LL, this->fields.questPhase, 0LL) )
            {
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v111;
              if ( !v111 )
                goto LABEL_149;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v111, 0LL);
            }
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1B86460(
                                                                                                 int___TypeInfo,
                                                                                                 1LL);
            if ( !v111 )
              goto LABEL_149;
            v95 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__GetSingleForceSvtId(
                                                                                                 v111,
                                                                                                 0LL);
            if ( !v95 )
              goto LABEL_149;
            if ( !v95->max_length )
              goto LABEL_150;
            v95->m_Items[1] = (int)myServantOrNpcRestrictionEntityList;
            this->fields.svtIdForceBattleList = v95;
            sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtIdForceBattleList, (int32_t)v95, v96, v97);
          }
        }
      }
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isFatigure = QuestEntity__HasFlag_40473784(
                                (QuestEntity_o *)entity,
                                0x200000LL,
                                this->fields.questPhase,
                                0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    v98 = QuestEntity__HasFlag_40473784((QuestEntity_o *)entity, 0x400000000000000LL, this->fields.questPhase, 0LL);
    this->fields.isAllOutBattle = v98;
    if ( v98 )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_149;
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                           (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                           (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
    this->fields.isNpcMultipleBattle = QuestEntity__HasFlag_40473784(
                                         (QuestEntity_o *)entity,
                                         0x10000000LL,
                                         this->fields.questPhase,
                                         0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNpcOnlyBattle = QuestEntity__HasFlag_40473784(
                                     (QuestEntity_o *)entity,
                                     0x20000000LL,
                                     this->fields.questPhase,
                                     0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNpcEditablePos = QuestEntity__HasFlag_40473784(
                                      (QuestEntity_o *)entity,
                                      0x800000000LL,
                                      this->fields.questPhase,
                                      0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNotTransitionSupportList = QuestEntity__HasFlag_40473784(
                                                (QuestEntity_o *)entity,
                                                0x80000000000000LL,
                                                this->fields.questPhase,
                                                0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_40473784(
                                            (QuestEntity_o *)entity,
                                            0x1000000000000000LL,
                                            this->fields.questPhase,
                                            0LL);
  }
  if ( v111 )
  {
    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v111, 0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v111;
    if ( !v111 )
      goto LABEL_149;
    QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
      v111,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      &this->fields.overwriteLimitCountRangeTypes,
      0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v111;
    if ( !v111 )
      goto LABEL_149;
    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v111, 0LL);
  }
  else
  {
    this->fields.correctionIconId = -1;
    this->fields.overwriteLimitCountSvtIds = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.overwriteLimitCountSvtIds, 0, v85, v86);
    this->fields.overwriteLimitCounts = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.overwriteLimitCounts, 0, v99, v100);
    this->fields.overwriteLimitCountIconIds = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.overwriteLimitCountIconIds, 0, v101, v102);
    this->fields.overwriteLimitCountRangeTypes = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.overwriteLimitCountRangeTypes, 0, v103, v104);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantList(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        bool isFollower,
        const MethodInfo *method)
{
  return !isFollower
      && QuestRestrictionInfo__GetOverwriteLimitCountRangeType(this, svtId, (const MethodInfo *)isFollower) == 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        bool isFollower,
        const MethodInfo *method)
{
  return !isFollower
      && QuestRestrictionInfo__GetOverwriteLimitCountRangeType(this, svtId, (const MethodInfo *)isFollower) == 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_T__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct System_String_o **p_summary; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4A4F784 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_int_____ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_List_int____TypeInfo, v4);
    sub_1B863B8(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo, v5);
    sub_1B863B8(&StringLiteral_1/*""*/, v6);
    byte_4A4F784 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.slotType = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v7;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.individualityList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v10;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.rangeTypeList, (int32_t)v10, v11, v12);
  v13 = (int)StringLiteral_1/*""*/;
  this->fields.summary = (struct System_String_o *)StringLiteral_1/*""*/;
  p_summary = &this->fields.summary;
  sub_1B8635C((CGThumbnailListItem_o *)p_summary, v13, v15, v16);
  *((_WORD *)p_summary + 4) = 1;
}


void __fastcall QuestRestrictionInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4F785 & 1) == 0 )
  {
    sub_1B863B8(&QuestRestrictionInfo___c_TypeInfo, v1);
    byte_4A4F785 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(QuestRestrictionInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestRestrictionInfo___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionInfo___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)QuestRestrictionInfo___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B86614(this, 0LL);
  return e->fields.type != 1 || RestrictionEntity__IsRestrictionTarget(e, 1, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__107_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B86614(this, 0LL);
  return e->fields.name;
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__107_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, 0LL);
  return e->fields.name;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualitySlot_b__99_0(
        QuestRestrictionInfo___c_o *this,
        QuestRestrictionInfo_SlotInfo_o *s,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *individualityList; // x8

  if ( (byte_4A4F786 & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_1B863B8(&Method_System_Collections_Generic_List_int____get_Count__, s);
    byte_4A4F786 = 1;
  }
  if ( !s || (individualityList = s->fields.individualityList) == 0LL )
    sub_1B86614(this, s);
  return individualityList->fields._size > 0;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__98_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B86614(this, 0LL);
  return e->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__98_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionWholeEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B86614(this, 0LL);
  return e->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__84_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__84_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.type == 3;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__84_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.type == 2;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__84_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.type == 2;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass183_0___ctor(
        QuestRestrictionInfo___c__DisplayClass183_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass183_0___IsMyServantOrNpcRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass183_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass184_0___ctor(
        QuestRestrictionInfo___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass184_0___IsSelectableNormalSupport_b__0(
        QuestRestrictionInfo___c__DisplayClass184_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass185_0___ctor(
        QuestRestrictionInfo___c__DisplayClass185_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass185_0___IsNotIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass185_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass186_0___ctor(
        QuestRestrictionInfo___c__DisplayClass186_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass186_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass186_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass187_0___ctor(
        QuestRestrictionInfo___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass187_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass187_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass188_0___ctor(
        QuestRestrictionInfo___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass188_0___GetRestrictedName_b__0(
        QuestRestrictionInfo___c__DisplayClass188_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_o *questRestrictionEntity; // x8

  if ( !x || (questRestrictionEntity = this->fields.questRestrictionEntity) == 0LL )
    sub_1B86614(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass191_0___ctor(
        QuestRestrictionInfo___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass191_0___GetMyServantOrNpcSvtIdList_b__0(
        QuestRestrictionInfo___c__DisplayClass191_0_o *this,
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
    sub_1B8661C(this, x);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1B86614(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass192_0___ctor(
        QuestRestrictionInfo___c__DisplayClass192_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass192_0___GetMyServantOrSupportTargetPos_b__0(
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
  if ( (unsigned int)index >= questRestrictionEntityList->max_length )
    sub_1B8661C(this, x);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1B86614(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass205_0___ctor(
        QuestRestrictionInfo___c__DisplayClass205_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass205_0___GetMyServantOrNpcSvtIdUnionNpcList_b__0(
        QuestRestrictionInfo___c__DisplayClass205_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.index;
}