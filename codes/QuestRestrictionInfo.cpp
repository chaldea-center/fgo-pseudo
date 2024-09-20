void __fastcall QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.questId = questId;
}


void __fastcall QuestRestrictionInfo___ctor_40416380(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct RestrictionEntity_array *RestrictionList_39538204; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  const MethodInfo *v15; // x4

  if ( (byte_4A5C29F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C29F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v10);
  }
  RestrictionList_39538204 = QuestRestrictionMaster__getRestrictionList_39538204(
                               (QuestRestrictionMaster_o *)Instance,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               0LL);
  this->fields.restrictionEntityList = RestrictionList_39538204;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.restrictionEntityList,
    (int32_t)RestrictionList_39538204,
    v12,
    v13);
  QuestRestrictionInfo__Setup(this, v14, questId, questPhase, v15);
}


void __fastcall QuestRestrictionInfo___ctor_40425900(
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
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x23
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  const MethodInfo *v24; // x4
  __int64 v25; // x0

  if ( (byte_4A5C2A0 & 1) == 0 )
  {
    sub_1B885B0(&QuestRestrictionEntity___TypeInfo);
    sub_1B885B0(&RestrictionEntity___TypeInfo);
    byte_4A5C2A0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v11 = (struct QuestRestrictionEntity_array *)sub_1B88658(QuestRestrictionEntity___TypeInfo, 0LL);
  this->fields.questRestrictionEntityList = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionEntityList, (int32_t)v11, v12, v13);
  if ( overwriteRestiction )
  {
    v14 = sub_1B88658(RestrictionEntity___TypeInfo, 1LL);
    if ( !v14 )
      sub_1B8880C(0LL, v15);
    v16 = v14;
    v17 = sub_1B886EC(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
    if ( !v17 )
    {
      v25 = sub_1B88830(0LL);
      sub_1B886D8(v25, 0LL);
    }
    if ( !*(_DWORD *)(v16 + 24) )
      sub_1B88814(v17, v18);
    *(_QWORD *)(v16 + 32) = overwriteRestiction;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)overwriteRestiction, v19, v20);
  }
  else
  {
    v16 = sub_1B88658(RestrictionEntity___TypeInfo, 0LL);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.restrictionEntityList, v16, v21, v22);
  QuestRestrictionInfo__Setup(this, v23, questId, questPhase, v24);
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

  if ( (byte_4A5C2C0 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_bool____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_bool____get_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C2C0 = 1;
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
             (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___) )
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
            (const MethodInfo_2EA51C8 *)Method_System_Linq_Enumerable_Intersect_int___);
    Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                  v28,
                                  (const MethodInfo_2E8CDAC *)Method_System_Linq_Enumerable_Any_int___);
    if ( !this->fields.myServantPositionsList )
      goto LABEL_15;
    v29 = (char)Instance;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this->fields.myServantPositionsList,
                                  v23,
                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
              (const MethodInfo_2EA51C8 *)Method_System_Linq_Enumerable_Intersect_int___);
      if ( System_Linq_Enumerable__Any_int_(v31, (const MethodInfo_2E8CDAC *)Method_System_Linq_Enumerable_Any_int___) )
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
                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_bool____get_Item__);
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
          (const MethodInfo_2EA51C8 *)Method_System_Linq_Enumerable_Intersect_int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__Any_int_(
                                v35,
                                (const MethodInfo_2E8CDAC *)Method_System_Linq_Enumerable_Any_int___);
  positionsList = (System_Collections_Generic_List_object__o *)this->fields.positionsList;
  if ( !positionsList
    || (v37 = (char)Instance,
        (Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                       positionsList,
                                       v33,
                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_bool____get_Item__)) == 0LL) )
  {
LABEL_15:
    sub_1B8880C(Instance, v21);
  }
  if ( LODWORD(Instance->fields.m_CancellationTokenSource) <= num )
LABEL_67:
    sub_1B88814(Instance, v21);
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
    sub_1B88814(this, svtId);
  return overwriteLimitCounts->m_Items[v6 + 1];
}


int32_t __fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40451096(
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
  if ( (byte_4A5C2C9 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C2C9 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_20;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  this = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(v4, v7, v8);
  if ( !this )
LABEL_20:
    sub_1B8880C(this, userServantEntity);
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
      this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
      if ( (_DWORD)this == v12 )
        return v12;
      dialogMessageInfoDictionary = v10->fields.dialogMessageInfoDictionary;
      if ( (int)++v11 >= (int)dialogMessageInfoDictionary )
        goto LABEL_15;
    }
LABEL_19:
    sub_1B88814(this, userServantEntity);
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

  if ( (byte_4A5C2C8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5C2C8 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1B88814(v6, v7);
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
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_1B8880C(v6, v7);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Func_object__bool__o *_9__104_0; // x20
  Il2CppObject *v29; // x21
  struct QuestRestrictionInfo___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  QuestRestrictionInfo___c_c *v34; // x8
  System_Func_TSource__TResult__o *_9__104_2; // x20
  Il2CppObject *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  struct QuestRestrictionInfo___c_StaticFields *v39; // x0
  ServantStatusBattleListViewItem_o *p__9__104_2; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v41; // x8
  QuestRestrictionInfo_SlotInfo_o *v42; // x8
  Il2CppObject *v43; // x21
  struct QuestRestrictionInfo___c_StaticFields *v44; // x0
  System_Collections_Generic_IEnumerable_string__o *v45; // x0

  v8 = this;
  if ( (byte_4A5C2B2 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1B885B0(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_0__);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_1__);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_2__);
    sub_1B885B0(&QuestRestrictionInfo___c_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C2B2 = 1;
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
      _9__104_2 = (System_Func_TSource__TResult__o *)static_fields->__9__104_2;
      if ( _9__104_2 )
      {
LABEL_61:
        v45 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_object__object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                                    _9__104_2,
                                                                    (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
        return System_String__Join_61722688((System_String_o *)StringLiteral_43/*"\n"*/, v45, 0LL);
      }
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = QuestRestrictionInfo___c_TypeInfo;
      }
      v43 = (Il2CppObject *)v26->static_fields->__9;
      _9__104_2 = (System_Func_TSource__TResult__o *)sub_1B887FC(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__104_2,
        v43,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_2__,
        0LL);
      v44 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v44->__9__104_2 = (struct System_Func_RestrictionEntity__string__o *)_9__104_2;
      p__9__104_2 = (ServantStatusBattleListViewItem_o *)&v44->__9__104_2;
    }
    else
    {
      _9__104_0 = (System_Func_object__bool__o *)static_fields->__9__104_0;
      if ( !_9__104_0 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = QuestRestrictionInfo___c_TypeInfo;
        }
        v29 = (Il2CppObject *)v26->static_fields->__9;
        _9__104_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__104_0,
          v29,
          Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_0__,
          0LL);
        v30 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v30->__9__104_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__104_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->__9__104_0, (int32_t)_9__104_0, v31, v32);
      }
      v33 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
              (System_Func_TSource__bool__o *)_9__104_0,
              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v34 = QuestRestrictionInfo___c_TypeInfo;
      RestrictionMessageEntityList = (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)v33;
      if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v34 = QuestRestrictionInfo___c_TypeInfo;
      }
      _9__104_2 = (System_Func_TSource__TResult__o *)v34->static_fields->__9__104_1;
      if ( _9__104_2 )
        goto LABEL_61;
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = QuestRestrictionInfo___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v34->static_fields->__9;
      _9__104_2 = (System_Func_TSource__TResult__o *)sub_1B887FC(System_Func_RestrictionEntity__string__TypeInfo);
      System_Func_object__object____ctor(
        (System_Func_object__object__o *)_9__104_2,
        v36,
        Method_QuestRestrictionInfo___c__GetConfirmRestrictionMessage_b__104_1__,
        0LL);
      v39 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v39->__9__104_1 = (struct System_Func_RestrictionEntity__string__o *)_9__104_2;
      p__9__104_2 = (ServantStatusBattleListViewItem_o *)&v39->__9__104_1;
    }
    sub_1B88554(p__9__104_2, (int32_t)_9__104_2, v37, v38);
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
      v41 = v8->fields.slotInfos;
      if ( v41 )
      {
        if ( (unsigned int)v10 >= v41->max_length )
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
    sub_1B8880C(this, *(_QWORD *)&initPos);
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
      if ( this->fields.fixedSupportPositionRestrictionEntity[2].fields.type >= pos )
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
      sub_1B88814(this, *(_QWORD *)&initPos);
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
      sub_1B88814(this, svtId);
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
  int64_t Instance; // x0
  __int64 id; // x1
  struct RestrictionMessageEntity_array *restrictionMessageEntities; // x22
  int v7; // w8
  unsigned int v8; // w23
  RestrictionMessageEntity_o *v9; // x29
  int32_t frequencyType; // w8
  Il2CppObject *v11; // x21
  UserQuestEntity_o *v12; // x21
  struct System_Int32_array *v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  int max_length; // w9
  int v18; // w23
  int32_t v19; // w21
  int32_t *v20; // x29
  int32_t v21; // w8
  Il2CppObject *MasterData_object; // x22
  UserQuestEntity_o *v23; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10

  if ( (byte_4A5C2C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A5C2C5 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !this->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
      goto LABEL_59;
    max_length = questRestrictionEntityList->max_length;
    v18 = max_length - 1;
    if ( max_length < 1 )
      goto LABEL_57;
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= questRestrictionEntityList->max_length )
LABEL_60:
        sub_1B88814(Instance, id);
      v20 = (int32_t *)questRestrictionEntityList->m_Items[v19];
      if ( !v20 )
        goto LABEL_59;
      v21 = v20[7];
      if ( v21 == 1 )
        break;
      if ( v21 == 2 )
      {
        Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !Instance )
          goto LABEL_59;
        Instance = PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                     (PartyOrganizationUtility_o *)Instance,
                     v20[4],
                     v20[5],
                     v20[6],
                     1,
                     0LL);
        if ( (Instance & 1) == 0 )
          goto LABEL_49;
      }
      else if ( v21 == 3 )
      {
        goto LABEL_49;
      }
LABEL_54:
      if ( v18 == v19 )
        goto LABEL_57;
      questRestrictionEntityList = this->fields.questRestrictionEntityList;
      ++v19;
      if ( !questRestrictionEntityList )
        goto LABEL_59;
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_59;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_59;
    Instance = (int64_t)UserQuestMaster__getEntityFromId((UserQuestMaster_o *)MasterData_object, Instance, v20[4], 0LL);
    if ( Instance )
    {
      v23 = (UserQuestEntity_o *)Instance;
      Instance = UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
      if ( (_DWORD)Instance )
        goto LABEL_54;
      Instance = UserQuestEntity__HasStatus(v23, 16, 0LL);
      if ( (Instance & 1) != 0 )
        goto LABEL_54;
    }
LABEL_49:
    if ( !v3 )
      goto LABEL_59;
    items = v3->fields._items;
    v25 = Method_System_Collections_Generic_List_int__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_59;
    size = v3->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v3,
        v19,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v3->fields._size = size + 1;
      items->m_Items[size + 1] = v19;
    }
    goto LABEL_54;
  }
  restrictionMessageEntities = this->fields.restrictionMessageEntities;
  if ( !restrictionMessageEntities )
    goto LABEL_59;
  v7 = restrictionMessageEntities->max_length;
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v7 )
        goto LABEL_60;
      v9 = restrictionMessageEntities->m_Items[v8];
      if ( !v9 )
        goto LABEL_59;
      frequencyType = v9->fields.frequencyType;
      if ( frequencyType != 1 )
        break;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_59;
      v11 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v11 )
        goto LABEL_59;
      Instance = (int64_t)UserQuestMaster__getEntityFromId(
                            (UserQuestMaster_o *)v11,
                            Instance,
                            this->fields.questId,
                            0LL);
      if ( !Instance )
        goto LABEL_23;
      v12 = (UserQuestEntity_o *)Instance;
      Instance = UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
      if ( !(_DWORD)Instance )
      {
        Instance = UserQuestEntity__HasStatus(v12, 16, 0LL);
        if ( (Instance & 1) == 0 )
          goto LABEL_23;
      }
LABEL_28:
      v7 = restrictionMessageEntities->max_length;
      if ( (int)++v8 >= v7 )
        goto LABEL_57;
    }
    if ( frequencyType == 2 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_59;
      Instance = PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                   (PartyOrganizationUtility_o *)Instance,
                   this->fields.questId,
                   this->fields.questPhase,
                   v9->fields.id,
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
    if ( !v3 )
      goto LABEL_59;
    id = (unsigned int)v9->fields.id;
    v13 = v3->fields._items;
    v14 = Method_System_Collections_Generic_List_int__Add__;
    ++v3->fields._version;
    if ( !v13 )
      goto LABEL_59;
    v15 = v3->fields._size;
    if ( (unsigned int)v15 >= v13->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v3,
        id,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v3->fields._size = v15 + 1;
      v13->m_Items[v15 + 1] = id;
    }
    goto LABEL_28;
  }
LABEL_57:
  if ( !v3 )
LABEL_59:
    sub_1B8880C(Instance, id);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4A5C2C6 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C2C6 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
LABEL_20:
        sub_1B88814(this, *(_QWORD *)&n);
      v11 = questRestrictionEntityList->m_Items[n];
      if ( v11 )
      {
        p_dialogMessage = &v11->fields.dialogMessage;
        return *p_dialogMessage;
      }
    }
LABEL_19:
    sub_1B8880C(this, *(_QWORD *)&n);
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

  if ( (byte_4A5C2DC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
    byte_4A5C2DC = 1;
  }
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary
    || !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
          messageId,
          (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
  {
    return 0LL;
  }
  v7 = this->fields.dialogMessageInfoDictionary;
  if ( !v7 )
    sub_1B8880C(0LL, v6);
  return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_int__object__o *)v7,
                                                       messageId,
                                                       (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
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
  if ( (byte_4A5C2DF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C2DF = 1;
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
        sub_1B88814(this, method);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_19;
      if ( v7->fields.type == 5 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_311D988 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1B8880C(this, method);
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
  if ( (byte_4A5C2E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C2E1 = 1;
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
        sub_1B88814(this, method);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_19;
      if ( v7->fields.type == 6 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_19;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_311D988 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1B8880C(this, method);
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
  if ( (byte_4A5C2DE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C2DE = 1;
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
        sub_1B88814(this, method);
      v7 = restrictionWholeEntities->m_Items[v6];
      if ( !v7 )
        goto LABEL_20;
      type = v7->fields.type;
      if ( type == 8 || type == 4 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_311D988 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1B8880C(this, method);
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
  if ( (byte_4A5C2C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C2C7 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
LABEL_21:
        sub_1B88814(this, *(_QWORD *)&n);
      v11 = questRestrictionEntityList->m_Items[n];
      if ( v11 )
      {
        p_title = &v11->fields.title;
        return *p_title;
      }
    }
LABEL_20:
    sub_1B8880C(this, *(_QWORD *)&n);
  }
  this = (QuestRestrictionInfo_o *)v4->fields.restrictionSlotDictionary;
  if ( !this )
    goto LABEL_20;
  this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)this,
                                     n,
                                     (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
    sub_1B88814(this, n);
  v5 = restrictionEntityList->m_Items[n];
  if ( !v5 )
LABEL_7:
    sub_1B8880C(this, n);
  return v5->fields.type;
}


bool __fastcall QuestRestrictionInfo__GetExplanationMessage(
        QuestRestrictionInfo_o *this,
        System_String_o **message,
        const MethodInfo *method)
{
  int32_t v3; // w3
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
      sub_1B8880C(this, message);
    max_length = questRestrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= questRestrictionEntityList->max_length )
          sub_1B88814(this, message);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)message, 0, (int32_t)method, v3);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)message, (int32_t)noticeMessage, (int32_t)method, v3);
  return 1;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C2D1 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10313/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/);
    byte_4A5C2D1 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10313/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC"*/, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C2D0 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10314/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/);
    byte_4A5C2D0 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10314/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_NPC_ONLY"*/, 0LL);
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

  if ( (byte_4A5C2E7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4A5C2E7 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v8.fields._current[1].monitor) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1B8880C(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4A5C2E4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5C2E4 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_1B8880C(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v10.fields._current,
      (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_1B8880C(fixedMyServantIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4A5C2C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C2C2 = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !*(_QWORD *)&fixedMyServantSingleIndividualities->max_length )
      return 0;
    this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       svtId,
                                       dispLimitCount,
                                       0LL);
        this = (QuestRestrictionInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (QuestRestrictionInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( this )
          {
            this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               svtId,
                                               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v13 = (ServantEntity_o *)this;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
    sub_1B8880C(this, *(_QWORD *)&svtId);
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
    sub_1B88814(this, *(_QWORD *)&svtId);
  return targetVals->m_Items[num + 1] != svtId;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C2C3 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10312/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/);
    byte_4A5C2C3 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10312/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE"*/, 0LL);
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

  if ( (byte_4A5C2E9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4A5C2E9 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v8.fields._current[1].monitor) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1B8880C(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4A5C2E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5C2E6 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)fixedIndividualitiesList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_1B8880C(v7, v8);
    System_Collections_Generic_List_int___AddRange(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)v10.fields._current,
      (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v4 )
LABEL_15:
    sub_1B8880C(fixedIndividualitiesList, v5);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4A5C2BF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4A5C2BF = 1;
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
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v4 = 0;
    for ( i = v14; ; v4 += LODWORD(i.fields._current[1].monitor) )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v5 )
        break;
      if ( !i.fields._current )
        sub_1B8880C(v5, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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
    sub_1B8880C(fixedMyServantIndividualitiesList, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v14; ; v10 += LODWORD(i.fields._current[1].monitor) )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v11 )
      break;
    if ( !i.fields._current )
      sub_1B8880C(v11, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v10;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C2C1 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10311/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/);
    byte_4A5C2C1 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10311/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, 0LL);
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

  if ( (byte_4A5C2BE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5C2BE = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( this->fields.restrictionBaseEntity )
  {
    v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v3,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    if ( this->fields.isFixedMyServantPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &i,
               (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v6 )
          break;
        if ( !v3 )
          sub_1B8880C(v6, v7);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isNeedStarting )
    {
      fixedMyServantIndividualitiesList = this->fields.needStartingIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &i,
               (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v8 )
          break;
        if ( !v3 )
          sub_1B8880C(v8, v9);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( this->fields.isFixedPosition )
    {
      fixedMyServantIndividualitiesList = this->fields.fixedIndividualitiesList;
      if ( !fixedMyServantIndividualitiesList )
        goto LABEL_38;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)fixedMyServantIndividualitiesList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v14;
            ;
            System_Collections_Generic_List_int___AddRange(
              v3,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
              (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        if ( !v10 )
          break;
        if ( !v3 )
          sub_1B8880C(v10, v11);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    }
    if ( v3 )
    {
      if ( v3->fields._size > 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v3,
                 (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
      return 0LL;
    }
LABEL_38:
    sub_1B8880C(fixedMyServantIndividualitiesList, v5);
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
  if ( (byte_4A5C2BD & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10316/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/);
    byte_4A5C2BD = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10316/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION"*/, 0LL);
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
  if ( (byte_4A5C2A9 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C2A9 = 1;
  }
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_15:
    sub_1B8880C(this, *(_QWORD *)&restrictionWholeType);
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
        sub_1B88814(this, *(_QWORD *)&restrictionWholeType);
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
System_String_o *__fastcall QuestRestrictionInfo__GetMessage_40434184(
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
  if ( (byte_4A5C2AA & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C2AA = 1;
  }
  restrictionEntityList = v4->fields.restrictionEntityList;
  if ( !restrictionEntityList )
LABEL_15:
    sub_1B8880C(this, *(_QWORD *)&restrictionType);
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
        sub_1B88814(this, *(_QWORD *)&restrictionType);
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
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x22
  int max_length; // w8
  unsigned int v46; // w23
  RestrictionWholeEntity_o *v47; // x29
  int32_t v48; // w2
  int32_t v49; // w3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  int v54; // w8
  void *v55; // x21
  unsigned int v56; // w22
  __int64 v57; // x26
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x0
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0

  if ( (byte_4A5C2A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10286/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1B885B0(&StringLiteral_11080/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/);
    sub_1B885B0(&StringLiteral_11081/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1B885B0(&StringLiteral_11077/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_1B885B0(&StringLiteral_6422/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_4A5C2A7 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_98;
  if ( !isSlotOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6422/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11081/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
    v25 = (System_String_o *)IsNullOrEmpty;
    if ( !this->fields.isUniqueServant )
      goto LABEL_20;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11080/*"RESTRICTION_NOT_SATISFY_DIALOG_UNIQUE"*/, 0LL);
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
        IsNullOrEmpty = System_String__Concat_61707032(summary, v25, 0LL);
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
    v29 = Method_System_Collections_Generic_List_string__Add__;
    ++v21->fields._version;
    if ( !items )
      goto LABEL_100;
    size = v21->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)summary,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &items->obj.klass + size;
      v21->fields._size = size + 1;
      v31[4] = (Il2CppClass *)summary;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)summary, v26, v27);
    }
LABEL_20:
    if ( !this->fields.isFatigure )
      goto LABEL_33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11077/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
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
        IsNullOrEmpty = System_String__Concat_61707032(summary, v25, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v21 )
          goto LABEL_100;
        goto LABEL_29;
      }
    }
    if ( !v21 )
      goto LABEL_100;
LABEL_29:
    v34 = v21->fields._items;
    v35 = Method_System_Collections_Generic_List_string__Add__;
    ++v21->fields._version;
    if ( !v34 )
      goto LABEL_100;
    v36 = v21->fields._size;
    if ( (unsigned int)v36 >= v34->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)summary,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v37 = &v34->obj.klass + v36;
      v21->fields._size = v36 + 1;
      v37[4] = (Il2CppClass *)summary;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)summary, v32, v33);
    }
LABEL_33:
    if ( !this->fields.isNotSingleSupportOnly )
      goto LABEL_46;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10286/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
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
        IsNullOrEmpty = System_String__Concat_61707032(summary, v25, 0LL);
        summary = (System_String_o *)IsNullOrEmpty;
        if ( !v21 )
          goto LABEL_100;
        goto LABEL_42;
      }
    }
    if ( !v21 )
      goto LABEL_100;
LABEL_42:
    v40 = v21->fields._items;
    v41 = Method_System_Collections_Generic_List_string__Add__;
    ++v21->fields._version;
    if ( !v40 )
      goto LABEL_100;
    v42 = v21->fields._size;
    if ( (unsigned int)v42 >= v40->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)summary,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    }
    else
    {
      v43 = &v40->obj.klass + v42;
      v21->fields._size = v42 + 1;
      v43[4] = (Il2CppClass *)summary;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)summary, v38, v39);
    }
LABEL_46:
    restrictionWholeEntities = this->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_100;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v46 = 0;
      while ( v46 < max_length )
      {
        v47 = restrictionWholeEntities->m_Items[v46];
        if ( !v47 )
          goto LABEL_100;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(v47->fields.summary, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            summary = v47->fields.summary;
          }
          else
          {
            IsNullOrEmpty = System_String__Format(v24, (Il2CppObject *)v47->fields.summary, 0LL);
            summary = (System_String_o *)IsNullOrEmpty;
          }
          switch ( v47->fields.type )
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
                IsNullOrEmpty = System_String__Concat_61707032(summary, v25, 0LL);
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
          if ( (unsigned int)v52 >= v50->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              (Il2CppObject *)summary,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
          }
          else
          {
            v53 = &v50->obj.klass + v52;
            v21->fields._size = v52 + 1;
            v53[4] = (Il2CppClass *)summary;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)summary, v48, v49);
          }
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v46 >= max_length )
          goto LABEL_79;
      }
LABEL_101:
      sub_1B88814(IsNullOrEmpty, summary);
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
                            (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0LL )
    {
LABEL_100:
      sub_1B8880C(IsNullOrEmpty, summary);
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
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(*(System_String_o **)(v57 + 24), 0LL);
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
            v60 = LocalizationManager__Get((System_String_o *)StringLiteral_6422/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
            IsNullOrEmpty = System_String__Format(v60, *(Il2CppObject **)(v57 + 24), 0LL);
            summary = (System_String_o *)IsNullOrEmpty;
          }
          if ( !v21 )
            goto LABEL_100;
          v61 = v21->fields._items;
          v62 = Method_System_Collections_Generic_List_string__Add__;
          ++v21->fields._version;
          if ( !v61 )
            goto LABEL_100;
          v63 = v21->fields._size;
          if ( (unsigned int)v63 >= v61->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              (Il2CppObject *)summary,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v64 = &v61->obj.klass + v63;
            v21->fields._size = v63 + 1;
            v64[4] = (Il2CppClass *)summary;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)summary, v58, v59);
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
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *__fastcall QuestRestrictionInfo__GetMessages_40432916(
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
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  signed int max_length; // w8
  unsigned int v36; // w19
  RestrictionEntity_o *v37; // x27
  int32_t v38; // w2
  int32_t v39; // w3
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0

  if ( (byte_4A5C2A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10286/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/);
    sub_1B885B0(&StringLiteral_11081/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/);
    sub_1B885B0(&StringLiteral_11077/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/);
    sub_1B885B0(&StringLiteral_6422/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    byte_4A5C2A8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6422/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11081/*"RESTRICTION_NOT_SATISFY_DIALOG_WHOLE_SUFFIX"*/, 0LL);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isSlotOnly || !this->fields.isFatigure )
    goto LABEL_19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11077/*"RESTRICTION_NOT_SATISFY_DIALOG_FATIGUE"*/, 0LL);
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
  IsNullOrEmpty = System_String__Concat_61707032(name, v19, 0LL);
  name = IsNullOrEmpty;
  if ( !v20 )
    goto LABEL_64;
LABEL_15:
  items = v20->fields._items;
  v26 = Method_System_Collections_Generic_List_string__Add__;
  ++v20->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v20->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)name,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v28[4] = (Il2CppClass *)name;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)name, v23, v24);
  }
LABEL_19:
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_10286/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING_SINGLE_SUPPORT"*/, 0LL);
    name = IsNullOrEmpty;
    if ( !isNoneTitle )
    {
      IsNullOrEmpty = System_String__Format(v18, (Il2CppObject *)IsNullOrEmpty, 0LL);
      name = IsNullOrEmpty;
    }
    if ( singleSupport )
    {
      IsNullOrEmpty = System_String__Concat_61707032(name, v19, 0LL);
      name = IsNullOrEmpty;
    }
    if ( !v20 )
      goto LABEL_64;
    v31 = v20->fields._items;
    v32 = Method_System_Collections_Generic_List_string__Add__;
    ++v20->fields._version;
    if ( !v31 )
      goto LABEL_64;
    v33 = v20->fields._size;
    if ( (unsigned int)v33 >= v31->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)name,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &v31->obj.klass + v33;
      v20->fields._size = v33 + 1;
      v34[4] = (Il2CppClass *)name;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)name, v29, v30);
    }
  }
  if ( !entities )
    goto LABEL_64;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= max_length )
        sub_1B88814(IsNullOrEmpty, name);
      v37 = entities->m_Items[v36];
      if ( !v37 )
        break;
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v37->fields.name, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( isNoneTitle )
        {
          name = v37->fields.name;
        }
        else
        {
          IsNullOrEmpty = RestrictionEntity__getTitle(v37, 0LL);
          name = IsNullOrEmpty;
        }
        switch ( v37->fields.type )
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
              IsNullOrEmpty = System_String__Concat_61707032(name, v19, 0LL);
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
        if ( (unsigned int)v42 >= v40->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)name,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &v40->obj.klass + v42;
          v20->fields._size = v42 + 1;
          v43[4] = (Il2CppClass *)name;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)name, v38, v39);
        }
      }
      max_length = entities->max_length;
      if ( (int)++v36 >= max_length )
        goto LABEL_62;
    }
LABEL_64:
    sub_1B8880C(IsNullOrEmpty, name);
  }
LABEL_62:
  if ( !v20 )
    goto LABEL_64;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v20,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
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
  if ( (byte_4A5C2CF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C2CF = 1;
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
                                             (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (QuestRestrictionInfo_o *)v3->fields.restrictionSlotDictionary;
            if ( !this )
              goto LABEL_55;
            this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                               (System_Collections_Generic_Dictionary_int__object__o *)this,
                                               v9,
                                               (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
                  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
                  if ( !this )
                    goto LABEL_55;
                  this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     &v22,
                                                     *(_DWORD *)(v15 + 44),
                                                     (const MethodInfo_311D988 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
              sub_1B8880C(this, method);
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
        this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !this )
          goto LABEL_55;
        this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v7->fields.restrictionMessageId,
                                           (const MethodInfo_311D988 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
    sub_1B88814(this, method);
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

  if ( (byte_4A5C2D8 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10318/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/);
    sub_1B885B0(&StringLiteral_10321/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/);
    byte_4A5C2D8 = 1;
  }
  RestrictedName = (Il2CppObject *)QuestRestrictionInfo__GetRestrictedName(
                                     this,
                                     pos,
                                     (const MethodInfo *)haveIndividualityServant);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( haveIndividualityServant )
    v8 = (System_String_o **)&StringLiteral_10318/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_NPC"*/;
  else
    v8 = (System_String_o **)&StringLiteral_10321/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/;
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
  if ( (byte_4A5C2EC & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    byte_4A5C2EC = 1;
  }
  if ( !v2->fields.isMyServantOrNpc && !v2->fields.isMyServantOrSupport )
    return 0;
  myServantOrNpcRestrictionEntityList = v2->fields.myServantOrNpcRestrictionEntityList;
  if ( !myServantOrNpcRestrictionEntityList )
    sub_1B8880C(this, method);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_int__o *v10; // x20
  int v11; // w8
  void *v12; // x19
  unsigned int v13; // w21
  __int64 v14; // x8
  System_Int32_array *CollectionList; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x1
  const MethodInfo_2EA51C8 *v18; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v21; // x20
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4A5C2DA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__DisplayClass184_0__GetMyServantOrNpcSvtIdList_b__0__);
    sub_1B885B0(&QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo);
    byte_4A5C2DA = 1;
  }
  v5 = sub_1B887FC(QuestRestrictionInfo___c__DisplayClass184_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
  {
    v10 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v10,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v5 + 24),
                                        (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    v11 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
    v12 = restrictionSlotDetailDictionary;
    if ( v11 >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= v11 )
          sub_1B88814(restrictionSlotDetailDictionary, v7);
        v14 = *((_QWORD *)v12 + (int)v13 + 4);
        if ( !v14 )
          break;
        if ( *(_DWORD *)(v14 + 32) == 1 )
        {
          if ( !v10 )
            break;
          System_Collections_Generic_List_int___AddRange(
            v10,
            *(System_Collections_Generic_IEnumerable_T__o **)(v14 + 40),
            (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        v11 = *((_DWORD *)v12 + 6);
        if ( (int)++v13 >= v11 )
          goto LABEL_15;
      }
LABEL_29:
      sub_1B8880C(restrictionSlotDetailDictionary, v7);
    }
LABEL_15:
    if ( !v10 )
      goto LABEL_29;
    if ( v10->fields._size >= 1 )
    {
      restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                          (DataManager_o *)restrictionSlotDetailDictionary,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList((ServantMaster_o *)restrictionSlotDetailDictionary, 0LL);
      monitor = System_Linq_Enumerable__Distinct_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v10,
                  (const MethodInfo_2E9EB0C *)Method_System_Linq_Enumerable_Distinct_int___);
      v17 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v18 = (const MethodInfo_2EA51C8 *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v24 = System_Linq_Enumerable__Intersect_int_(monitor, v17, v18);
      return System_Linq_Enumerable__ToArray_int_(
               v24,
               (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
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
      v21 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v21,
        (Il2CppObject *)v5,
        Method_QuestRestrictionInfo___c__DisplayClass184_0__GetMyServantOrNpcSvtIdList_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      v22 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v21,
              (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v22 )
      {
        v23 = v22;
        restrictionSlotDetailDictionary = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        restrictionSlotDetailDictionary = DataManager__GetMasterData_object_(
                                            (DataManager_o *)restrictionSlotDetailDictionary,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !restrictionSlotDetailDictionary )
          goto LABEL_29;
        v17 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                     (ServantMaster_o *)restrictionSlotDetailDictionary,
                                                                     0LL);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v23[2].monitor;
        v18 = (const MethodInfo_2EA51C8 *)Method_System_Linq_Enumerable_Intersect_int___;
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
  __int64 v8; // x22
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__object__o *v11; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x2
  _QWORD *v15; // x23
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x23
  System_Int32_array *MyServantOrNpcSvtIdList; // x26
  System_Predicate_object__o *v21; // x24
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x23
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  int32_t MyServantOrSupportTargetPos; // w22
  const MethodInfo *v27; // x2
  _QWORD *v28; // x21
  __int64 v29; // x8
  __int64 v30; // x0
  __int64 v31; // x0
  System_Collections_Generic_List_int__o *v32; // x23
  FollowerInfo_array *QuestFollowerList; // x24
  Il2CppObject *Master_object; // x25
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x26
  int i; // w19
  FollowerInfo_o *v38; // x27
  DataManager_o *v39; // x28
  int32_t ReturnTypeByQuestId; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  const MethodInfo *v42; // x3
  System_Int32_array *OverwriteIndividuality; // x0
  const MethodInfo *v44; // x3
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x21
  struct System_Byte_array *masterDataBytes; // x29
  int32_t v47; // w0
  const MethodInfo *v48; // x6
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v49; // x21
  struct System_Byte_array *v50; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v54; // x29
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v55; // x21
  struct System_Byte_array *v56; // x28
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v57; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Collections_Generic_IEnumerable_TSource__o *first; // [xsp+0h] [xbp-80h]
  Il2CppObject *v62; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4A5C2E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Union_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__DisplayClass198_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__);
    sub_1B885B0(&QuestRestrictionInfo___c__DisplayClass198_0_TypeInfo);
    byte_4A5C2E3 = 1;
  }
  v62 = 0LL;
  entity = 0LL;
  v8 = sub_1B887FC(QuestRestrictionInfo___c__DisplayClass198_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_70;
  *(_DWORD *)(v8 + 16) = index;
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)npcInfoDictionary, (int32_t)v11, v12, v13);
  v15 = Method_System_Array_Empty_int___;
  v16 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v16 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v16 = v15[7];
  }
  v17 = *(_QWORD *)(v16 + 16);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BDA48C(v17);
  if ( !*(_DWORD *)(v17 + 224) )
    j_il2cpp_runtime_class_init_0(v17);
  v18 = *(_QWORD *)(v15[7] + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1BDA48C(v18);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v18 + 184);
    v21 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v21,
      (Il2CppObject *)v8,
      Method_QuestRestrictionInfo___c__DisplayClass198_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      0LL);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_70;
    v22 = System_Collections_Generic_List_object___Find(
            myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v21,
            (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v22 )
    {
      v23 = v22;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_70;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !Instance )
        goto LABEL_70;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              (ServantMaster_o *)Instance,
                                                                              0LL);
      v25 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v23[2].monitor,
              CollectionList,
              (const MethodInfo_2EA51C8 *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v25,
                                  (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    MyServantOrSupportTargetPos = *(_DWORD *)(v8 + 16);
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(this, *(_DWORD *)(v8 + 16), v14);
    if ( !MyServantOrNpcSvtIdList )
    {
      v28 = Method_System_Array_Empty_int___;
      v29 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v29 )
      {
        sub_1BDA4E8(Method_System_Array_Empty_int___);
        v29 = v28[7];
      }
      v30 = *(_QWORD *)(v29 + 16);
      if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
        v30 = sub_1BDA48C(v30);
      if ( !*(_DWORD *)(v30 + 224) )
        j_il2cpp_runtime_class_init_0(v30);
      v31 = *(_QWORD *)(v28[7] + 16LL);
      if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
        v31 = sub_1BDA48C(v31);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v31 + 184);
    }
    MyServantOrSupportTargetPos = *(_DWORD *)(v8 + 16);
    if ( !this->fields.restrictionBaseEntity )
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
                                      this,
                                      MyServantOrSupportTargetPos,
                                      v27);
  }
  v32 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !Instance )
    goto LABEL_70;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Instance,
                        this->fields.questId,
                        this->fields.questPhase,
                        0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList,
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___),
        !QuestFollowerList) )
  {
LABEL_70:
    sub_1B8880C(Instance, v10);
  }
  max_length = QuestFollowerList->max_length;
  if ( max_length >= 1 )
  {
    v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1B88814(Instance, v10);
      v38 = QuestFollowerList->m_Items[i];
      Instance = (DataManager_o *)FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
      if ( !v38 )
        goto LABEL_70;
      Instance = (DataManager_o *)FollowerInfo__getServantLeaderInfo(v38, 0, (int32_t)Instance, 0LL);
      if ( Instance )
      {
        if ( !v36 )
          goto LABEL_70;
        v39 = Instance;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                      v36,
                                      &entity,
                                      v38->fields.npcFollowerSvtId,
                                      (const MethodInfo_311DB34 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
          NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v38, 0, ReturnTypeByQuestId, 0LL);
          Instance = (DataManager_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_40456936(
                                        this,
                                        NpcServantIndividuality,
                                        MyServantOrSupportTargetPos,
                                        v42);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            goto LABEL_68;
        }
        else
        {
          if ( !Master_object )
            goto LABEL_70;
          if ( !DataMasterBase_object__object__long___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                  &v62,
                  v38->fields.npcFollowerSvtId,
                  (const MethodInfo_311DB34 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
            goto LABEL_74;
          Instance = (DataManager_o *)v62;
          if ( !v62 )
            goto LABEL_70;
          if ( !NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v62, 0LL) )
            goto LABEL_74;
          Instance = (DataManager_o *)v62;
          if ( !v62 )
            goto LABEL_70;
          OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                     (NpcServantFollowerEntity_o *)v62,
                                     0LL);
          if ( QuestRestrictionInfo__IsRestrictionServantIndividuality_40456936(
                 this,
                 OverwriteIndividuality,
                 MyServantOrSupportTargetPos,
                 v44) )
          {
LABEL_74:
            lookup = v39->fields.lookup;
            masterDataBytes = v39->fields.masterDataBytes;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v64.fields.currentCryptoKey = lookup;
            *(_QWORD *)&v64.fields.fakeValue = masterDataBytes;
            v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v64, 0LL);
            Instance = (DataManager_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                          this,
                                          v47,
                                          (int32_t)v39->fields.saveNameList,
                                          HIDWORD(v39[1].monitor),
                                          MyServantOrSupportTargetPos,
                                          0,
                                          v48);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_68;
          }
        }
        v49 = v39->fields.lookup;
        v50 = v39->fields.masterDataBytes;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v65.fields.currentCryptoKey = v49;
        *(_QWORD *)&v65.fields.fakeValue = v50;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v65, 0LL);
        if ( !v32 )
          goto LABEL_70;
        items = v32->fields._items;
        v52 = Method_System_Collections_Generic_List_int__Add__;
        ++v32->fields._version;
        if ( !items )
          goto LABEL_70;
        size = v32->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v32,
            (int32_t)Instance,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v32->fields._size = size + 1;
          items->m_Items[size + 1] = (int)Instance;
        }
        v54 = *npcInfoDictionary;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v39->fields.lookup,
                                      0LL);
        if ( !v54 )
          goto LABEL_70;
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                      (System_Collections_Generic_Dictionary_int__object__o *)v54,
                                      (int32_t)Instance,
                                      (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v55 = v39->fields.lookup;
          v56 = v39->fields.masterDataBytes;
          v57 = *npcInfoDictionary;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v66.fields.currentCryptoKey = v55;
          *(_QWORD *)&v66.fields.fakeValue = v56;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v66, 0LL);
          if ( !v57 )
            goto LABEL_70;
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)v57,
            (int32_t)Instance,
            (Il2CppObject *)v38,
            (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
        }
      }
LABEL_68:
      max_length = QuestFollowerList->max_length;
    }
  }
  v58 = System_Linq_Enumerable__Union_int_(
          first,
          (System_Collections_Generic_IEnumerable_TSource__o *)v32,
          (const MethodInfo_2EBC408 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v58,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4A5C2D9 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10323/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/);
    sub_1B885B0(&StringLiteral_10322/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/);
    sub_1B885B0(&StringLiteral_10320/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/);
    sub_1B885B0(&StringLiteral_10319/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/);
    byte_4A5C2D9 = 1;
  }
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_10320/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/;
  }
  else if ( haveIndividualityServant )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_10319/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT"*/;
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
          sub_1B88814(MyServantOrNpcSvtIdList, v9);
        MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
        v13 = v11[v12 + 8];
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          MyServantOrNpcSvtIdList = (int *)BalanceConfig_TypeInfo;
        }
        if ( v13 < *(_DWORD *)(*((_QWORD *)MyServantOrNpcSvtIdList + 23) + 860LL) )
          break;
        v10 = v11[6];
        if ( (int)++v12 >= v10 )
          goto LABEL_20;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_10322/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT"*/;
    }
    else
    {
LABEL_20:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_10323/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/;
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v12; // x20
  Il2CppClass *klass; // x8

  if ( (byte_4A5C2DB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1B885B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__DisplayClass185_0__GetMyServantOrSupportTargetPos_b__0__);
    sub_1B885B0(&QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo);
    byte_4A5C2DB = 1;
  }
  v5 = sub_1B887FC(QuestRestrictionInfo___c__DisplayClass185_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
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
  v12 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass185_0__GetMyServantOrSupportTargetPos_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  v6 = System_Collections_Generic_List_object___Find(
         myServantOrNpcRestrictionEntityList,
         (System_Predicate_T__o *)v12,
         (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v6 )
    return (int)v6;
  klass = v6[3].klass;
  if ( !klass )
LABEL_14:
    sub_1B8880C(v6, v7);
  if ( !LODWORD(klass->_1.namespaze) )
    sub_1B88814(v6, v7);
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
    sub_1B88814(this, pos);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1B8880C(this, pos);
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

  if ( (byte_4A5C2DD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C2DD = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.restrictionBaseEntity )
  {
    dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
    if ( !dialogMessageInfoDictionary )
      sub_1B8880C(0LL, *(_QWORD *)&pos);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v11,
      (System_Collections_Generic_Dictionary_int__object__o *)dialogMessageInfoDictionary,
      (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
             &v11,
             (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__);
      if ( !v6 )
        break;
      if ( !v11.fields._current.fields.value )
        sub_1B8880C(v6, v7);
      if ( LODWORD(v11.fields._current.fields.value[1].klass) == pos )
      {
        DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v11.fields._current.fields.key, v8);
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
          &v11,
          (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
        return DialogMessage;
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v11,
      (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
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

  if ( (byte_4A5C2E8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    byte_4A5C2E8 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = 0; ; i += LODWORD(v8.fields._current[1].monitor) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1B8880C(v5, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
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

  if ( (byte_4A5C2E5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5C2E5 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0LL;
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)needStartingIndividualitiesList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v6 )
      break;
    if ( !v3 )
      sub_1B8880C(v6, v7);
    System_Collections_Generic_List_int___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)v9.fields._current,
      (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v3 )
LABEL_15:
    sub_1B8880C(needStartingIndividualitiesList, v4);
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_array *__fastcall QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  int32_t FixedServantPositionCount; // w0
  const MethodInfo *v4; // x1
  int v5; // w21
  __int64 FixedServantPositionSvtIdList; // x0
  __int64 v7; // x1
  __int64 v8; // x20
  System_String_array *v9; // x19
  unsigned __int64 v10; // x24
  __int64 v11; // x25
  ServantStatusBattleListViewItem_o *i; // x21
  int32_t v13; // w22
  Il2CppObject *MasterData_object; // x23
  int32_t maxLimitCount; // w22
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  UserServantCollectionEntity_o *v20; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5C2CA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    byte_4A5C2CA = 1;
  }
  v20 = 0LL;
  entity = 0LL;
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0LL;
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(this, method);
  if ( !FixedServantPositionCount )
    return 0LL;
  v5 = FixedServantPositionCount;
  FixedServantPositionSvtIdList = (__int64)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(this, v4);
  if ( !FixedServantPositionSvtIdList )
    goto LABEL_37;
  v8 = FixedServantPositionSvtIdList;
  FixedServantPositionSvtIdList = sub_1B88658(string___TypeInfo, *(unsigned int *)(FixedServantPositionSvtIdList + 24));
  v9 = (System_String_array *)FixedServantPositionSvtIdList;
  if ( v5 >= 1 )
  {
    v10 = 0LL;
    v11 = (unsigned int)v5;
    for ( i = (ServantStatusBattleListViewItem_o *)(FixedServantPositionSvtIdList + 32);
          ;
          i = (ServantStatusBattleListViewItem_o *)((char *)i + 8) )
    {
      if ( v10 >= *(unsigned int *)(v8 + 24) )
LABEL_38:
        sub_1B88814(FixedServantPositionSvtIdList, v7);
      v13 = *(_DWORD *)(v8 + 32 + 4 * v10);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      FixedServantPositionSvtIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !FixedServantPositionSvtIdList )
        break;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)FixedServantPositionSvtIdList,
              &entity,
              v13,
              (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0LL;
      FixedServantPositionSvtIdList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !FixedServantPositionSvtIdList )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)FixedServantPositionSvtIdList,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      FixedServantPositionSvtIdList = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        break;
      if ( !UserServantCollectionMaster__TryGetEntity(
              (UserServantCollectionMaster_o *)MasterData_object,
              &v20,
              FixedServantPositionSvtIdList,
              v13,
              0LL) )
        goto LABEL_24;
      FixedServantPositionSvtIdList = (__int64)v20;
      if ( !v20 )
        break;
      FixedServantPositionSvtIdList = UserServantCollectionEntity__IsGet(v20, 0LL);
      if ( (FixedServantPositionSvtIdList & 1) != 0 )
      {
        if ( !v20 )
          break;
        maxLimitCount = v20->fields.maxLimitCount;
      }
      else
      {
LABEL_24:
        maxLimitCount = -1;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      FixedServantPositionSvtIdList = OptionManager__GetSpoilerSetting(0LL);
      if ( !entity )
        break;
      v16 = ((maxLimitCount == -1) & ((unsigned int)FixedServantPositionSvtIdList ^ 1)) != 0 ? 0 : maxLimitCount;
      FixedServantPositionSvtIdList = (__int64)ServantEntity__getName((ServantEntity_o *)entity, v16, -1, 0LL);
      if ( !v9 )
        break;
      if ( v10 >= v9->max_length )
        goto LABEL_38;
      i->klass = (ServantStatusBattleListViewItem_c *)FixedServantPositionSvtIdList;
      sub_1B88554(i, FixedServantPositionSvtIdList, v17, v18);
      if ( v11 == ++v10 )
        return v9;
    }
LABEL_37:
    sub_1B8880C(FixedServantPositionSvtIdList, v7);
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
    sub_1B88814(this, pos);
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_7:
    sub_1B8880C(this, pos);
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
  int32_t v12; // w2
  int32_t v13; // w3
  QuestRestrictionEntity_o *v14; // x1
  __int64 v15; // x22
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x24
  System_Predicate_object__o *v17; // x25
  struct System_Int32_array *deckSvtIdList; // x8
  System_String_o *v20; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4A5C2D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1B885B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__DisplayClass181_0__GetRestrictedName_b__0__);
    sub_1B885B0(&QuestRestrictionInfo___c__DisplayClass181_0_TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C2D7 = 1;
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
                                         (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
              return v20;
          }
        }
        return v20;
      }
    }
LABEL_29:
    sub_1B8880C(this, *(_QWORD *)&pos);
  }
  questRestrictionEntityList = v4->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_29;
  if ( (int)questRestrictionEntityList->max_length >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = sub_1B887FC(QuestRestrictionInfo___c__DisplayClass181_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0LL);
      if ( v10 >= questRestrictionEntityList->max_length )
        break;
      if ( !v11 )
        goto LABEL_29;
      v14 = questRestrictionEntityList->m_Items[v10];
      *(_QWORD *)(v11 + 16) = v14;
      v15 = v11 + 16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)v14, v12, v13);
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v4->fields.myServantOrNpcRestrictionEntityList;
      v17 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v17,
        (Il2CppObject *)v11,
        Method_QuestRestrictionInfo___c__DisplayClass181_0__GetRestrictedName_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      this = (QuestRestrictionInfo_o *)System_Collections_Generic_List_object___Find(
                                         myServantOrNpcRestrictionEntityList,
                                         (System_Predicate_T__o *)v17,
                                         (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( this )
      {
        deckSvtIdList = this->fields.deckSvtIdList;
        if ( !deckSvtIdList )
          goto LABEL_29;
        if ( !deckSvtIdList->max_length )
          break;
        if ( deckSvtIdList->m_Items[1] == pos )
        {
          if ( !*(_QWORD *)v15 )
            goto LABEL_29;
          v20 = *(System_String_o **)(*(_QWORD *)v15 + 48LL);
        }
      }
      if ( (__int64)++v10 >= (int)questRestrictionEntityList->max_length )
        return v20;
    }
LABEL_30:
    sub_1B88814(this, *(_QWORD *)&pos);
  }
  return v20;
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
  System_Func_object__object__o *_9__105_0; // x20
  Il2CppObject *v12; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  Il2CppObject *v17; // x0
  System_Collections_Generic_IEnumerable_string__o *v18; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v19; // x8
  QuestRestrictionInfo_SlotInfo_o *v20; // x8

  v4 = this;
  if ( (byte_4A5C2B3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Prepend_string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
    sub_1B885B0(&System_Func_RestrictionEntity__string__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__105_0__);
    sub_1B885B0(&QuestRestrictionInfo___c_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&StringLiteral_10282/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_4A5C2B3 = 1;
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
      this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10282/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v19 = v4->fields.slotInfos;
      if ( !v19 )
        goto LABEL_25;
      if ( (unsigned int)v6 >= v19->max_length )
LABEL_26:
        sub_1B88814(this, *(_QWORD *)&initPos);
      v20 = v19->m_Items[v6];
      if ( v20 )
        return System_String__Concat_61718292(
                 (System_String_o *)this,
                 (System_String_o *)StringLiteral_43/*"\n"*/,
                 v20->fields.summary,
                 0LL);
    }
LABEL_25:
    sub_1B8880C(this, *(_QWORD *)&initPos);
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
  _9__105_0 = (System_Func_object__object__o *)v10->static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = QuestRestrictionInfo___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__105_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_RestrictionEntity__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__105_0,
      v12,
      Method_QuestRestrictionInfo___c__GetRestrictionMessage_b__105_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__105_0 = (struct System_Func_RestrictionEntity__string__o *)_9__105_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__105_0, (int32_t)_9__105_0, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionMessageEntityList,
                                                               (System_Func_TSource__TResult__o *)_9__105_0,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_RestrictionEntity__string___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10282/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
  v18 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Prepend_object_(
                                                              v16,
                                                              v17,
                                                              (const MethodInfo_2EAA57C *)Method_System_Linq_Enumerable_Prepend_string___);
  return System_String__Join_61722688((System_String_o *)StringLiteral_43/*"\n"*/, v18, 0LL);
}


System_Collections_Generic_IEnumerable_RestrictionEntity__o *__fastcall QuestRestrictionInfo__GetRestrictionMessageEntityList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x19
  System_Func_object__bool__o *_9__106_0; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5C2B4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1B885B0(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__106_0__);
    sub_1B885B0(&QuestRestrictionInfo___c_TypeInfo);
    byte_4A5C2B4 = 1;
  }
  v3 = QuestRestrictionInfo___c_TypeInfo;
  restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.restrictionEntityList;
  if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
    v3 = QuestRestrictionInfo___c_TypeInfo;
  }
  _9__106_0 = (System_Func_object__bool__o *)v3->static_fields->__9__106_0;
  if ( !_9__106_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestRestrictionInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__106_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RestrictionEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__106_0,
      v6,
      Method_QuestRestrictionInfo___c__GetRestrictionMessageEntityList_b__106_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__106_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__106_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__106_0, (int32_t)_9__106_0, v8, v9);
  }
  return (System_Collections_Generic_IEnumerable_RestrictionEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                          restrictionEntityList,
                                                                          (System_Func_TSource__bool__o *)_9__106_0,
                                                                          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
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

  if ( (byte_4A5C2AE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C2AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL
    || (ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       (ServantLimitImageMaster_o *)Instance,
                                       svtId,
                                       dispLimitCount,
                                       0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v9);
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

  if ( (byte_4A5C2CB & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A5C2CB = 1;
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
      sub_1B8880C(0LL, method);
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
  if ( (byte_4A5C2CD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C2CD = 1;
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
                                           (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_49;
          this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             &v19,
                                             *(_DWORD *)(v12 + 44),
                                             (const MethodInfo_311D988 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
          this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !this )
            goto LABEL_49;
          this = (QuestRestrictionInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             &entity,
                                             v7->fields.restrictionMessageId,
                                             (const MethodInfo_311D988 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
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
          sub_1B88814(this, method);
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
      sub_1B8880C(this, method);
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

  if ( (byte_4A5C2CC & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10325/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/);
    sub_1B885B0(&StringLiteral_10324/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/);
    byte_4A5C2CC = 1;
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
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10325/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FREE"*/, 0LL);
    v10 = &v14;
    v14 = this->fields.servantNumMax;
  }
  else
  {
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10324/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SERVANT_NUM_FIXED"*/, 0LL);
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

  if ( (byte_4A5C2AD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C2AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL)) == 0LL )
  {
    sub_1B8880C(Instance, v7);
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
  if ( (byte_4A5C2B5 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10326/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/);
    byte_4A5C2B5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10326/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SUPPORT_ONLY"*/, 0LL);
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

  if ( (byte_4A5C2C4 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    byte_4A5C2C4 = 1;
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
  if ( (byte_4A5C2BB & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10328/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/);
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C2BB = 1;
  }
  if ( !v4->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_10328/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY"*/, 0LL);
  }
  else
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_18:
      sub_1B8880C(this, isFixMessage);
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
          sub_1B88814(this, isFixMessage);
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
  if ( (byte_4A5C2BA & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10327/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/);
    byte_4A5C2BA = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_10327/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_UNIEQU_SERVANT"*/, 0LL);
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
    sub_1B88814(this, initPos);
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_7:
    sub_1B8880C(this, initPos);
  return v4->fields.isMoved;
}


bool __fastcall QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_1B8880C(this, method);
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
        sub_1B88814(this, method);
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
    sub_1B8880C(this, method);
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

  if ( (byte_4A5C2E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5C2E0 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !this->fields.isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.isFixedSupportPosition )
  {
    fixedSupportIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_23;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)fixedSupportIndividualitiesList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v11;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v6 )
        break;
      if ( !v3 )
        sub_1B8880C(v6, v7);
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
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v11;
          ;
          System_Collections_Generic_List_int___AddRange(
            v3,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v9 )
        break;
      if ( !v3 )
        sub_1B8880C(v9, v10);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v3 )
LABEL_23:
    sub_1B8880C(fixedSupportIndividualitiesList, v4);
  return v3->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsFixedSupportPosition_40441480(
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
  const MethodInfo *v17; // x1
  int32_t current; // w22
  int32_t limitCount; // w24
  __int64 DispLimitCount; // x0
  __int64 v21; // x1
  struct System_Boolean_array *supportPositionList; // x8
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v6 = this;
  if ( (byte_4A5C2BC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C2BC = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v24, 0, sizeof(v24));
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
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v6->fields.isFixedSupportPosition )
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedSupportIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v23;
          ;
          System_Collections_Generic_List_int___AddRange(
            v7,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &i,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v8 )
        break;
      if ( !v7 )
        sub_1B8880C(v8, v9);
    }
  }
  else
  {
    this = (QuestRestrictionInfo_o *)v6->fields.fixedNpcIndividualitiesList;
    if ( !this )
      goto LABEL_42;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v23;
          ;
          System_Collections_Generic_List_int___AddRange(
            v7,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields._current,
            (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v11 )
        break;
      if ( !v7 )
        sub_1B8880C(v11, v12);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v7 )
    goto LABEL_42;
  if ( v7->fields._size < 1 )
    goto LABEL_36;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_42;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v15 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v15;
  *(_QWORD *)&v26.fields.fakeValue = v14;
  this = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v26, 0LL);
  if ( !v13 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v13,
             (int32_t)this,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    v7,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v24 = v23;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v24,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v24,
        (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      return 1;
    }
    current = (int32_t)v24.fields._current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, v17);
    if ( !Entity )
      sub_1B8880C(DispLimitCount, v21);
  }
  while ( !ServantEntity__IsIndividuality((ServantEntity_o *)Entity, limitCount, DispLimitCount, current, 0LL) );
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v24,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
LABEL_36:
  supportPositionList = v6->fields.supportPositionList;
  if ( !supportPositionList )
LABEL_42:
    sub_1B8880C(this, *(_QWORD *)&num);
  if ( supportPositionList->max_length <= num )
    sub_1B88814(this, *(_QWORD *)&num);
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


bool __fastcall QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(
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

  if ( (byte_4A5C2D2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
    sub_1B885B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__DisplayClass176_0__IsMyServantOrNpcRestriction_b__0__);
    sub_1B885B0(&QuestRestrictionInfo___c__DisplayClass176_0_TypeInfo);
    byte_4A5C2D2 = 1;
  }
  v5 = sub_1B887FC(QuestRestrictionInfo___c__DisplayClass176_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
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
      if ( pos - 1 >= slotInfos->max_length )
        sub_1B88814(v6, v7);
      v9 = slotInfos->m_Items[pos - 1];
      if ( v9 )
        return (unsigned int)(v9->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_1B8880C(v6, v7);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v12 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_QuestRestrictionInfo___c__DisplayClass176_0__IsMyServantOrNpcRestriction_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  return System_Collections_Generic_List_object___Exists(
           myServantOrNpcRestrictionEntityList,
           (System_Predicate_T__o *)v12,
           (const MethodInfo_34FDE60 *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
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

  if ( (byte_4A5C2D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1B885B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__DisplayClass178_0__IsNotIndividuality_b__0__);
    sub_1B885B0(&QuestRestrictionInfo___c__DisplayClass178_0_TypeInfo);
    byte_4A5C2D4 = 1;
  }
  v5 = sub_1B887FC(QuestRestrictionInfo___c__DisplayClass178_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_23;
  *(_DWORD *)(v5 + 16) = pos;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(this, pos, v8) )
  {
    if ( this->fields.restrictionBaseEntity )
    {
      restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                          (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                          *(_DWORD *)(v5 + 16),
                                          (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      v9 = *((_DWORD *)restrictionSlotDetailDictionary + 6);
      if ( v9 >= 1 )
      {
        v10 = 0;
        while ( 1 )
        {
          if ( v9 == v10 )
            sub_1B88814(restrictionSlotDetailDictionary, v7);
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
        sub_1B8880C(restrictionSlotDetailDictionary, v7);
      }
LABEL_16:
      LOBYTE(restrictionSlotDetailDictionary) = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
      v14 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_RestrictionEntity__TypeInfo);
      System_Predicate_object____ctor(
        v14,
        (Il2CppObject *)v5,
        Method_QuestRestrictionInfo___c__DisplayClass178_0__IsNotIndividuality_b__0__,
        0LL);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_23;
      restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                          myServantOrNpcRestrictionEntityList,
                                          (System_Predicate_T__o *)v14,
                                          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
      sub_1B88814(this, initPos);
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_1B8880C(this, initPos);
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
  System_Func_object__bool__o *_9__96_0; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5C2AC & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
    sub_1B885B0(&System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__96_0__);
    sub_1B885B0(&QuestRestrictionInfo___c_TypeInfo);
    byte_4A5C2AC = 1;
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
  _9__96_0 = (System_Func_object__bool__o *)v4->static_fields->__9__96_0;
  if ( !_9__96_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = QuestRestrictionInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__96_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_QuestRestrictionInfo_SlotInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__96_0,
      v6,
      Method_QuestRestrictionInfo___c__IsRestrictionIndividualitySlot_b__96_0__,
      0LL);
    static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
    static_fields->__9__96_0 = (struct System_Func_QuestRestrictionInfo_SlotInfo__bool__o *)_9__96_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__96_0, (int32_t)_9__96_0, v8, v9);
  }
  return BasicHelper__Any_object__48672124(
           slotInfos,
           (System_Func_T__bool__o *)_9__96_0,
           (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_QuestRestrictionInfo_SlotInfo___);
}


bool __fastcall QuestRestrictionInfo__IsRestrictionIndividualityWhole(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo___c_c *v3; // x0
  System_Object_array *restrictionWholeEntities; // x19
  System_Func_object__bool__o *_9__95_1; // x20
  Il2CppObject *v6; // x21
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo_2E6AD7C *v10; // x2
  QuestRestrictionInfo___c_c *v11; // x0
  Il2CppObject *v12; // x21
  struct QuestRestrictionInfo___c_StaticFields *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5C2AB & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_RestrictionEntity___);
    sub_1B885B0(&Method_BasicHelper_Any_RestrictionWholeEntity___);
    sub_1B885B0(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_RestrictionWholeEntity__bool__TypeInfo);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__95_0__);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__95_1__);
    sub_1B885B0(&QuestRestrictionInfo___c_TypeInfo);
    byte_4A5C2AB = 1;
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
    _9__95_1 = (System_Func_object__bool__o *)v3->static_fields->__9__95_1;
    if ( !_9__95_1 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = QuestRestrictionInfo___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v3->static_fields->__9;
      _9__95_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RestrictionWholeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__95_1,
        v6,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__95_1__,
        0LL);
      static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
      static_fields->__9__95_1 = (struct System_Func_RestrictionWholeEntity__bool__o *)_9__95_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__95_1, (int32_t)_9__95_1, v8, v9);
    }
    v10 = (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_RestrictionWholeEntity___;
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
    _9__95_1 = (System_Func_object__bool__o *)v11->static_fields->__9__95_0;
    if ( !_9__95_1 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = QuestRestrictionInfo___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v11->static_fields->__9;
      _9__95_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RestrictionEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__95_1,
        v12,
        Method_QuestRestrictionInfo___c__IsRestrictionIndividualityWhole_b__95_0__,
        0LL);
      v13 = QuestRestrictionInfo___c_TypeInfo->static_fields;
      v13->__9__95_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__95_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v13->__9__95_0, (int32_t)_9__95_1, v14, v15);
    }
    v10 = (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_RestrictionEntity___;
  }
  return BasicHelper__Any_object__48672124(restrictionWholeEntities, (System_Func_T__bool__o *)_9__95_1, v10);
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
  __int64 v13; // x24
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

  if ( (byte_4A5C2D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1B885B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__DisplayClass179_0__IsRestrictionServantIndividuality_b__0__);
    sub_1B885B0(&QuestRestrictionInfo___c__DisplayClass179_0_TypeInfo);
    byte_4A5C2D5 = 1;
  }
  v13 = sub_1B887FC(QuestRestrictionInfo___c__DisplayClass179_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_51;
  *(_DWORD *)(v13 + 16) = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(this, pos, v16) )
    goto LABEL_49;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_51;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_51;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (DataManager_o *)this->fields.restrictionSlotDictionary;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                    *(_DWORD *)(v13 + 16),
                                    (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
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
                                        *(_DWORD *)(v13 + 16),
                                        (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
                  sub_1B88814(Instance, v15);
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
    sub_1B8880C(Instance, v15);
  }
  if ( isChkSupport )
    goto LABEL_49;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v24 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v24,
    (Il2CppObject *)v13,
    Method_QuestRestrictionInfo___c__DisplayClass179_0__IsRestrictionServantIndividuality_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_51;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                myServantOrNpcRestrictionEntityList,
                                (System_Predicate_T__o *)v24,
                                (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
    if ( RestrictionEntity__IsRestriction_39577408(v26, v28, 0LL) )
    {
      LOBYTE(v27) = 1;
      return v27;
    }
LABEL_49:
    LOBYTE(v27) = 0;
  }
  return v27;
}


bool __fastcall QuestRestrictionInfo__IsRestrictionServantIndividuality_40456936(
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
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x20
  System_Predicate_object__o *v17; // x21
  __int64 v18; // x8

  if ( (byte_4A5C2D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1B885B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__DisplayClass180_0__IsRestrictionServantIndividuality_b__0__);
    sub_1B885B0(&QuestRestrictionInfo___c__DisplayClass180_0_TypeInfo);
    byte_4A5C2D6 = 1;
  }
  v7 = sub_1B887FC(QuestRestrictionInfo___c__DisplayClass180_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_26;
  *(_DWORD *)(v7 + 16) = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(this, pos, v10) )
    goto LABEL_24;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    restrictionSlotDetailDictionary = System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)restrictionSlotDetailDictionary,
                                        *(_DWORD *)(v7 + 16),
                                        (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
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
          sub_1B88814(restrictionSlotDetailDictionary, v9);
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
      sub_1B8880C(restrictionSlotDetailDictionary, v9);
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
  v17 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_RestrictionEntity__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_QuestRestrictionInfo___c__DisplayClass180_0__IsRestrictionServantIndividuality_b__0__,
    0LL);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_26;
  restrictionSlotDetailDictionary = System_Collections_Generic_List_object___Find(
                                      myServantOrNpcRestrictionEntityList,
                                      (System_Predicate_T__o *)v17,
                                      (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
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
    return RestrictionEntity__IsRestriction_39577408(
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
  return QuestRestrictionInfo__IsRestrictionSlot_40436208(this, ServantIndividuality, initPos, v14);
}


bool __fastcall QuestRestrictionInfo__IsRestrictionSlot_40436208(
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
  if ( (byte_4A5C2B1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____get_Item__);
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    byte_4A5C2B1 = 1;
  }
  v7 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v6->fields.slotInfos;
    if ( !slotInfos )
LABEL_27:
      sub_1B8880C(this, svtIndividuality);
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
                                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_int____get_Item__);
      if ( !this )
        goto LABEL_27;
      if ( this->fields.dialogMessageInfoDictionary )
      {
        v12 = System_Linq_Enumerable__Intersect_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this,
                (System_Collections_Generic_IEnumerable_TSource__o *)svtIndividuality,
                (const MethodInfo_2EA51C8 *)Method_System_Linq_Enumerable_Intersect_int___);
        this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_int_(
                                           v12,
                                           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
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
                                           (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
        if ( (_DWORD)this == 1 )
        {
          this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                             (const MethodInfo_2E8CDAC *)Method_System_Linq_Enumerable_Any_int___);
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
                                             (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          if ( (_DWORD)this == 2 )
          {
            this = (QuestRestrictionInfo_o *)System_Linq_Enumerable__Any_int_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                               (const MethodInfo_2E8CDAC *)Method_System_Linq_Enumerable_Any_int___);
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
    sub_1B88814(this, svtIndividuality);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestriction_40435468(
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
  System_Int32_array *ServantIndividuality; // x2
  _QWORD *v19; // x23
  __int64 v20; // x8
  __int64 v21; // x0
  __int64 v22; // x0
  bool isWhole; // [xsp+Ch] [xbp-44h] BYREF

  v12 = this;
  if ( (byte_4A5C2AF & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&Method_System_Array_Empty_int___);
    byte_4A5C2AF = 1;
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
    v19 = Method_System_Array_Empty_int___;
    v20 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v20 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v20 = v19[7];
    }
    v21 = *(_QWORD *)(v20 + 16);
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
      v21 = sub_1BDA48C(v21);
    if ( !*(_DWORD *)(v21 + 224) )
      j_il2cpp_runtime_class_init_0(v21);
    v22 = *(_QWORD *)(v19[7] + 16LL);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1BDA48C(v22);
    ServantIndividuality = **(System_Int32_array ***)(v22 + 184);
  }
  return QuestRestrictionInfo__IsRestriction_40435740(
           v12,
           &isWhole,
           ServantIndividuality,
           ServantRarity,
           lv,
           targetType,
           v17);
}


bool __fastcall QuestRestrictionInfo__IsRestriction_40435740(
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
      sub_1B8880C(this, isWhole);
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
      return 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
LABEL_29:
        sub_1B88814(this, isWhole);
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
          this = (QuestRestrictionInfo_o *)RestrictionEntity__IsRestriction_39577408(v18, svtIndividuality, 0LL);
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
bool __fastcall QuestRestrictionInfo__IsRestriction_40436712(
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
  const MethodInfo *v22; // x6
  System_Int32_array *ServantIndividuality; // x25
  _QWORD *v24; // x25
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0
  const MethodInfo *v28; // x3

  v16 = this;
  if ( (byte_4A5C2B0 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&Method_System_Array_Empty_int___);
    byte_4A5C2B0 = 1;
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
    v24 = Method_System_Array_Empty_int___;
    v25 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v25 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1BDA48C(v26);
    if ( !*(_DWORD *)(v26 + 224) )
      j_il2cpp_runtime_class_init_0(v26);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1BDA48C(v27);
    ServantIndividuality = **(System_Int32_array ***)(v27 + 184);
  }
  if ( QuestRestrictionInfo__IsRestriction_40435740(
         v16,
         isWhole,
         ServantIndividuality,
         ServantRarity,
         lv,
         targetType,
         v22) )
  {
    return 1;
  }
  if ( v16->fields.restrictionBaseEntity )
    return QuestRestrictionInfo__IsRestrictionSlot_40436208(v16, ServantIndividuality, initPos, v28);
  return 0;
}


bool __fastcall QuestRestrictionInfo__IsSelectableNormalSupport(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x21
  _BOOL8 IsMyServantOrNpcRestriction_40453904; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v10; // w9
  QuestRestrictionInfo_SlotInfo_o *v11; // x8
  bool v12; // zf
  Il2CppObject *v13; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_4A5C2D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    sub_1B885B0(&System_Predicate_RestrictionEntity__TypeInfo);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__DisplayClass177_0__IsSelectableNormalSupport_b__0__);
    sub_1B885B0(&QuestRestrictionInfo___c__DisplayClass177_0_TypeInfo);
    byte_4A5C2D3 = 1;
  }
  v5 = sub_1B887FC(QuestRestrictionInfo___c__DisplayClass177_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_18;
  *(_DWORD *)(v5 + 16) = pos;
  IsMyServantOrNpcRestriction_40453904 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(this, pos, v8);
  if ( !IsMyServantOrNpcRestriction_40453904 )
  {
    LOBYTE(v13) = 0;
    return (char)v13;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
    v15 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_RestrictionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v15,
      (Il2CppObject *)v5,
      Method_QuestRestrictionInfo___c__DisplayClass177_0__IsSelectableNormalSupport_b__0__,
      0LL);
    if ( myServantOrNpcRestrictionEntityList )
    {
      v13 = System_Collections_Generic_List_object___Find(
              myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v15,
              (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v13 )
        return (char)v13;
      v12 = LODWORD(v13[2].klass) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_1B8880C(IsMyServantOrNpcRestriction_40453904, v7);
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v10 = *(_DWORD *)(v5 + 16) - 1;
  if ( v10 >= slotInfos->max_length )
    sub_1B88814(IsMyServantOrNpcRestriction_40453904, v7);
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
  void *IsMyServantOrNpcRestriction_40453904; // x0
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

  if ( (byte_4A5C2CE & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__);
    byte_4A5C2CE = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  IsMyServantOrNpcRestriction_40453904 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    IsMyServantOrNpcRestriction_40453904 = BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    p_myServantNumMax = (int32_t *)(*((_QWORD *)IsMyServantOrNpcRestriction_40453904 + 23) + 156LL);
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
  IsMyServantOrNpcRestriction_40453904 = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(
                                                   this,
                                                   pos,
                                                   *(const MethodInfo **)&pos);
  if ( ((unsigned __int8)IsMyServantOrNpcRestriction_40453904 & 1) != 0 )
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
            sub_1B88814(IsMyServantOrNpcRestriction_40453904, *(_QWORD *)&svtId);
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
    sub_1B8880C(IsMyServantOrNpcRestriction_40453904, *(_QWORD *)&svtId);
  }
  IsMyServantOrNpcRestriction_40453904 = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                           this,
                                           *(const MethodInfo **)&svtId);
  if ( !IsMyServantOrNpcRestriction_40453904 )
    goto LABEL_44;
  v13 = *((_DWORD *)IsMyServantOrNpcRestriction_40453904 + 6);
  if ( v13 < 1 )
    return 1;
  v14 = 0;
  v15 = -v13;
  do
  {
    if ( !(v15 + v14) )
      goto LABEL_43;
    v16 = *((_DWORD *)IsMyServantOrNpcRestriction_40453904 + v14 + 8);
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
  if ( (byte_4A5C2E2 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A5C2E2 = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( slotInfos )
  {
    if ( initPos - 1 >= slotInfos->max_length )
      sub_1B88814(this, *(_QWORD *)&pos);
    v8 = slotInfos->m_Items[initPos - 1];
    if ( !v8 )
      sub_1B8880C(this, *(_QWORD *)&pos);
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

  if ( (byte_4A5C2EB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C2EB = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_33;
    Instance = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                       svtId,
                                       (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
          sub_1B88814(Instance, v10);
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
                                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_int____get_Item__);
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
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_int____get_Item__);
              v19 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)Item,
                      v13,
                      (const MethodInfo_2EA51C8 *)Method_System_Linq_Enumerable_Intersect_int___);
              Instance = System_Linq_Enumerable__ToArray_int_(
                           v19,
                           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
              if ( !v16->fields.rangeTypeList )
                goto LABEL_33;
              v20 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              if ( System_Collections_Generic_List_Int32Enum___get_Item(
                     (System_Collections_Generic_List_T__o *)v16->fields.rangeTypeList,
                     v17,
                     (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
              {
                if ( System_Linq_Enumerable__Any_int_(
                       v20,
                       (const MethodInfo_2E8CDAC *)Method_System_Linq_Enumerable_Any_int___) )
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
                       (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 2
                  && !System_Linq_Enumerable__Any_int_(
                        v20,
                        (const MethodInfo_2E8CDAC *)Method_System_Linq_Enumerable_Any_int___) )
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
      sub_1B8880C(Instance, v10);
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

  if ( (byte_4A5C2EA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_4A5C2EA = 1;
  }
  entity = 0LL;
  if ( !this->fields.restrictionBaseEntity )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_23:
    sub_1B8880C(Master_object, v4);
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return 1;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
LABEL_24:
      sub_1B88814(Master_object, v4);
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
                                      (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      return 0;
    LODWORD(v11) = targetVals->max_length;
    if ( (__int64)++v12 >= (int)v11 )
      goto LABEL_19;
  }
}


bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_40439764(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  struct System_Int32_array *uniqueIndividualitys; // x26
  __int64 v13; // x8
  ServantEntity_o *v14; // x23
  unsigned __int64 v15; // x27
  int32_t v16; // w24
  __int64 i; // x29
  unsigned __int64 v18; // x21
  struct System_Int32_array *deckSvtIdList; // x8
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x9
  int32_t dispLimitCounta; // [xsp+Ch] [xbp-64h]

  if ( (byte_4A5C2B8 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C2B8 = 1;
  }
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_33;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_35;
  dispLimitCounta = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                      (ServantLimitImageMaster_o *)Instance,
                      svtId,
                      dispLimitCount,
                      0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      svtId,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_35:
    sub_1B8880C(Instance, v10);
  }
  v13 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = (ServantEntity_o *)Instance;
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v13 )
LABEL_36:
        sub_1B88814(Instance, v10);
      if ( !v14 )
        goto LABEL_35;
      v16 = uniqueIndividualitys->m_Items[v15 + 1];
      if ( ServantEntity__IsIndividuality(v14, limitCount, dispLimitCounta, v16, 0LL) )
        break;
LABEL_31:
      LODWORD(v13) = uniqueIndividualitys->max_length;
      ++v15;
      Instance = 0LL;
      if ( (__int64)v15 >= (int)v13 )
        return (char)Instance;
    }
    for ( i = 8LL; ; ++i )
    {
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      v18 = i - 8;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (DataManager_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v18 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 156LL) )
        goto LABEL_31;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_35;
      if ( v18 >= deckSvtIdList->max_length )
        goto LABEL_36;
      v10 = *((unsigned int *)&deckSvtIdList->obj.klass + i);
      if ( (int)v10 >= 1 )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v11,
                                      v10,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        deckLimitCountList = this->fields.deckLimitCountList;
        if ( !deckLimitCountList )
          goto LABEL_35;
        if ( v18 >= deckLimitCountList->max_length )
          goto LABEL_36;
        deckDispLimitCountList = this->fields.deckDispLimitCountList;
        if ( !deckDispLimitCountList )
          goto LABEL_35;
        if ( v18 >= deckDispLimitCountList->max_length )
          goto LABEL_36;
        if ( !Instance )
          goto LABEL_35;
        if ( ServantEntity__IsIndividuality(
               (ServantEntity_o *)Instance,
               *((_DWORD *)&deckLimitCountList->obj.klass + i),
               *((_DWORD *)&deckDispLimitCountList->obj.klass + i),
               v16,
               0LL) )
        {
          break;
        }
      }
    }
    LOBYTE(Instance) = 1;
  }
  else
  {
LABEL_33:
    LOBYTE(Instance) = 0;
  }
  return (char)Instance;
}


bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_40440384(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x24
  struct System_Int32_array *uniqueIndividualitys; // x9
  __int64 v18; // x8
  unsigned __int64 v19; // x25
  int32_t v20; // w26
  int32_t i; // w27
  PartyOrganizationListViewItem_o *v22; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // kr00_16
  int32_t v24; // w0
  Il2CppObject *v25; // x29
  int32_t svtLimitCount; // w23
  DataManager_o *v28; // [xsp+0h] [xbp-80h]
  struct System_Int32_array *v29; // [xsp+8h] [xbp-78h]
  int32_t ServantImageLimitSealAfter; // [xsp+10h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A5C2B9 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C2B9 = 1;
  }
  entity = 0LL;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_35;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance
    || (v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      svtId,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_35:
    sub_1B8880C(Instance, v15);
  }
  v18 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v18 < 1 )
    return 0;
  v19 = 0LL;
  v28 = Instance;
  v29 = uniqueIndividualitys;
  while ( 1 )
  {
    if ( v19 >= (unsigned int)v18 )
      sub_1B88814(Instance, v15);
    if ( !Instance )
      goto LABEL_35;
    v20 = uniqueIndividualitys->m_Items[v19 + 1];
    if ( ServantEntity__IsIndividuality((ServantEntity_o *)Instance, limitCount, ServantImageLimitSealAfter, v20, 0LL) )
      break;
LABEL_31:
    Instance = v28;
    uniqueIndividualitys = v29;
    ++v19;
    LODWORD(v18) = v29->max_length;
    if ( (__int64)v19 >= (int)v18 )
      return 0;
  }
  for ( i = 0; ; ++i )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 156LL) )
      goto LABEL_31;
    if ( num != i && partyIndex != i )
    {
      if ( !partyItem )
        goto LABEL_35;
      Instance = (DataManager_o *)PartyListViewItem__GetMember(partyItem, i, 0LL);
      if ( !Instance )
        goto LABEL_35;
      v22 = (PartyOrganizationListViewItem_o *)Instance;
      v23 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v16,
             &entity,
             v24,
             (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
      {
        v25 = entity;
        svtLimitCount = v22->fields.svtLimitCount;
        Instance = (DataManager_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v22, 0LL);
        if ( !v25 )
          goto LABEL_35;
        if ( ServantEntity__IsIndividuality((ServantEntity_o *)v25, svtLimitCount, (int32_t)Instance, v20, 0LL) )
          break;
      }
    }
  }
  return 1;
}


bool __fastcall QuestRestrictionInfo__IsUniqueServant(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueServant_40439236(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  bool isUniqueServant; // w8
  signed int v6; // w22
  BalanceConfig_c *v7; // x0
  struct System_Int32_array *deckSvtIdList; // x9
  int32_t v9; // w9

  if ( (byte_4A5C2B6 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A5C2B6 = 1;
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
            sub_1B8880C(v7, *(_QWORD *)&svtId);
          if ( v6 >= deckSvtIdList->max_length )
            sub_1B88814(v7, *(_QWORD *)&svtId);
          v9 = deckSvtIdList->m_Items[++v6];
        }
        while ( v9 != svtId );
      }
    }
  }
  return isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueServant_40439436(
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

  if ( (byte_4A5C2B7 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C2B7 = 1;
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
          sub_1B8880C(Member, *(_QWORD *)&svtId);
        v15 = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL) == svtId )
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
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5C2A6 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5C2A6 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.deckSvtIdList = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.deckSvtIdList, (int32_t)v4, v5, v6);
}


void __fastcall QuestRestrictionInfo__SetDeckInfo(
        QuestRestrictionInfo_o *this,
        UserDeckEntity_o *userDeckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x24
  __int64 v6; // x1
  __int64 v7; // x26
  BalanceConfig_c *DispLimitCount; // x0
  unsigned __int64 v9; // x28
  struct System_Int32_array *deckSvtIdList; // x8
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v12; // x21
  struct System_Int32_array *v13; // x29
  __int64 v14; // x22
  __int64 v15; // x23
  struct System_Int32_array *deckLimitCountList; // x29
  __int64 v17; // x22
  __int64 v18; // x23
  struct System_Int32_array *deckDispLimitCountList; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4A5C2A3 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C2A3 = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtIdList )
  {
    v5 = 8LL;
    v7 = 1LL - (unsigned int)UserDeckEntity__GetFollowerIndex(userDeckEntity, 0LL);
    while ( 1 )
    {
      DispLimitCount = BalanceConfig_TypeInfo;
      v9 = v5 - 8;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        DispLimitCount = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v9 >= DispLimitCount->static_fields->DeckMemberMax )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_28;
      if ( v9 >= deckSvtIdList->max_length )
        goto LABEL_27;
      *((_DWORD *)&deckSvtIdList->obj.klass + v5) = 0;
      if ( v7 + v5 != 8 )
      {
        UserServant = UserDeckEntity__GetUserServant(userDeckEntity, (int)v5 - 8, 0LL);
        if ( UserServant )
        {
          v12 = UserServant;
          v13 = this->fields.deckSvtIdList;
          v15 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v14 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v20.fields.currentCryptoKey = v15;
          *(_QWORD *)&v20.fields.fakeValue = v14;
          DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                v20,
                                                0LL);
          if ( !v13 )
LABEL_28:
            sub_1B8880C(DispLimitCount, v6);
          if ( v9 >= v13->max_length )
LABEL_27:
            sub_1B88814(DispLimitCount, v6);
          *((_DWORD *)&v13->obj.klass + v5) = (_DWORD)DispLimitCount;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v18 = *(_QWORD *)&v12->fields.limitCount.fields.currentCryptoKey;
            v17 = *(_QWORD *)&v12->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v21.fields.currentCryptoKey = v18;
            *(_QWORD *)&v21.fields.fakeValue = v17;
            DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                  v21,
                                                  0LL);
            if ( v9 >= deckLimitCountList->max_length )
              goto LABEL_27;
            *((_DWORD *)&deckLimitCountList->obj.klass + v5) = (_DWORD)DispLimitCount;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            DispLimitCount = (BalanceConfig_c *)UserServantEntity__getDispLimitCount(v12, 0, 0LL);
            if ( v9 >= deckDispLimitCountList->max_length )
              goto LABEL_27;
            *((_DWORD *)&deckDispLimitCountList->obj.klass + v5) = (_DWORD)DispLimitCount;
          }
        }
      }
      ++v5;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_40430188(
        QuestRestrictionInfo_o *this,
        UserEventDeckEntity_o *eventDeckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x24
  __int64 v6; // x1
  __int64 v7; // x26
  BalanceConfig_c *DispLimitCount; // x0
  unsigned __int64 v9; // x28
  struct System_Int32_array *deckSvtIdList; // x8
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v12; // x21
  struct System_Int32_array *v13; // x29
  __int64 v14; // x22
  __int64 v15; // x23
  struct System_Int32_array *deckLimitCountList; // x29
  __int64 v17; // x22
  __int64 v18; // x23
  struct System_Int32_array *deckDispLimitCountList; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4A5C2A4 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C2A4 = 1;
  }
  if ( eventDeckEntity && this->fields.deckSvtIdList )
  {
    v5 = 8LL;
    v7 = 1LL - (unsigned int)UserEventDeckEntity__GetFollowerIndex(eventDeckEntity, 0LL);
    while ( 1 )
    {
      DispLimitCount = BalanceConfig_TypeInfo;
      v9 = v5 - 8;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        DispLimitCount = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v9 >= DispLimitCount->static_fields->DeckMemberMax )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_28;
      if ( v9 >= deckSvtIdList->max_length )
        goto LABEL_27;
      *((_DWORD *)&deckSvtIdList->obj.klass + v5) = 0;
      if ( v7 + v5 != 8 )
      {
        UserServant = UserEventDeckEntity__GetUserServant(eventDeckEntity, (int)v5 - 8, 0LL);
        if ( UserServant )
        {
          v12 = UserServant;
          v13 = this->fields.deckSvtIdList;
          v15 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v14 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v20.fields.currentCryptoKey = v15;
          *(_QWORD *)&v20.fields.fakeValue = v14;
          DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                v20,
                                                0LL);
          if ( !v13 )
LABEL_28:
            sub_1B8880C(DispLimitCount, v6);
          if ( v9 >= v13->max_length )
LABEL_27:
            sub_1B88814(DispLimitCount, v6);
          *((_DWORD *)&v13->obj.klass + v5) = (_DWORD)DispLimitCount;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v18 = *(_QWORD *)&v12->fields.limitCount.fields.currentCryptoKey;
            v17 = *(_QWORD *)&v12->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v21.fields.currentCryptoKey = v18;
            *(_QWORD *)&v21.fields.fakeValue = v17;
            DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                  v21,
                                                  0LL);
            if ( v9 >= deckLimitCountList->max_length )
              goto LABEL_27;
            *((_DWORD *)&deckLimitCountList->obj.klass + v5) = (_DWORD)DispLimitCount;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            DispLimitCount = (BalanceConfig_c *)UserServantEntity__getDispLimitCount(v12, 0, 0LL);
            if ( v9 >= deckDispLimitCountList->max_length )
              goto LABEL_27;
            *((_DWORD *)&deckDispLimitCountList->obj.klass + v5) = (_DWORD)DispLimitCount;
          }
        }
      }
      ++v5;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_40430620(
        QuestRestrictionInfo_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  unsigned __int64 v7; // x21
  unsigned __int64 v8; // x27
  __int64 i; // x28
  PartyOrganizationListViewItem_o *Member; // x0
  struct System_Int32_array *v11; // x8
  int32_t *v12; // x8
  struct System_Int32_array *deckSvtIdList; // x29
  PartyOrganizationListViewItem_o *v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x23

  if ( (byte_4A5C2A5 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C2A5 = 1;
  }
  if ( this->fields.deckSvtIdList )
  {
    v7 = 0LL;
    v8 = (unsigned int)num;
    for ( i = 32LL; ; i += 4LL )
    {
      Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Member = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v7 >= *(int *)(*(_QWORD *)&Member->fields.classId + 156LL) )
        return;
      if ( v8 == v7 )
        break;
      if ( !partyItem )
        goto LABEL_27;
      Member = PartyListViewItem__GetMember(partyItem, v7, 0LL);
      if ( !Member )
        goto LABEL_27;
      deckSvtIdList = this->fields.deckSvtIdList;
      v14 = Member;
      SvtId = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      Member = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                    SvtId,
                                                    0LL);
      if ( !deckSvtIdList )
LABEL_27:
        sub_1B8880C(Member, partyItem);
      if ( v7 >= deckSvtIdList->max_length )
LABEL_28:
        sub_1B88814(Member, partyItem);
      deckSvtIdList->m_Items[v7 + 1] = (int)Member;
      deckLimitCountList = this->fields.deckLimitCountList;
      if ( deckLimitCountList )
      {
        if ( v7 >= deckLimitCountList->max_length )
          goto LABEL_28;
        deckLimitCountList->m_Items[v7 + 1] = v14->fields.svtLimitCount;
      }
      deckDispLimitCountList = this->fields.deckDispLimitCountList;
      if ( deckDispLimitCountList )
      {
        Member = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(v14, 0LL);
        if ( v7 >= deckDispLimitCountList->max_length )
          goto LABEL_28;
        v12 = (int32_t *)((char *)deckDispLimitCountList + i);
LABEL_24:
        *v12 = (int)Member;
      }
      ++v7;
    }
    v11 = this->fields.deckSvtIdList;
    if ( !v11 )
      goto LABEL_27;
    if ( v11->max_length <= v8 )
      goto LABEL_28;
    LODWORD(Member) = 0;
    v12 = &v11->m_Items[v8 + 1];
    goto LABEL_24;
  }
}


void __fastcall QuestRestrictionInfo__Setup(
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
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  ServantStatusBattleListViewItem_o *p_supportPositionList; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t *p_eventDeckNum; // x27
  System_Collections_Generic_List_object__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_List_int__o *v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_List_object__o *v45; // x20
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_List_object__o *v48; // x20
  int32_t v49; // w2
  int32_t v50; // w3
  System_Collections_Generic_List_object__o *v51; // x20
  int32_t v52; // w2
  int32_t v53; // w3
  System_Collections_Generic_List_object__o *v54; // x20
  int32_t v55; // w2
  int32_t v56; // w3
  System_Collections_Generic_List_object__o *v57; // x20
  int32_t v58; // w2
  int32_t v59; // w3
  System_Collections_Generic_List_object__o *v60; // x20
  int32_t v61; // w2
  int32_t v62; // w3
  int32_t v63; // w2
  int32_t v64; // w3
  System_Collections_Generic_List_object__o *v65; // x20
  int32_t v66; // w2
  int32_t v67; // w3
  int32_t v68; // w2
  int32_t v69; // w3
  System_Collections_Generic_Dictionary_K__V__o **p_dialogMessageInfoDictionary; // x26
  int32_t v71; // w2
  int32_t v72; // w3
  __int64 Master_object; // x0
  Il2CppObject *monitor_low; // x1
  const MethodInfo *v75; // x1
  System_Collections_Generic_Dictionary_int__object__o *v76; // x20
  int32_t v77; // w2
  int32_t v78; // w3
  System_Collections_Generic_Dictionary_int__object__o *v79; // x20
  int32_t v80; // w2
  int32_t v81; // w3
  System_Collections_Generic_Dictionary_int__object__o *v82; // x20
  int32_t v83; // w2
  int32_t v84; // w3
  System_Collections_Generic_List_object__o *v85; // x29
  RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  bool HasFlag; // w0
  BalanceConfig_c *v88; // x0
  __int64 v89; // x0
  int32_t v90; // w2
  int32_t v91; // w3
  RestrictionBaseEntity_o *v92; // x8
  Il2CppObject *v93; // x20
  RestrictionWholeEntity_array *Entities; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  unsigned int v99; // w25
  RestrictionWholeEntity_o *v100; // x24
  System_Boolean_array *SetPossiblePosition; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  Il2CppObject *v104; // x23
  int32_t v105; // w0
  int32_t v106; // w2
  int32_t v107; // w3
  System_Collections_Generic_List_object__o *v108; // x23
  int32_t v109; // w2
  int32_t v110; // w3
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  __int64 v114; // x1
  Il2CppClass **v115; // x0
  System_Collections_Generic_List_object__o *v116; // x23
  int32_t v117; // w2
  int32_t v118; // w3
  struct System_Object_array *items; // x8
  _QWORD *v120; // x9
  __int64 size; // x10
  __int64 v122; // x1
  Il2CppClass **v123; // x0
  System_Collections_Generic_List_object__o *v124; // x23
  int32_t v125; // w2
  int32_t v126; // w3
  struct System_Object_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  __int64 v130; // x1
  Il2CppClass **v131; // x0
  Il2CppObject *v132; // x23
  int32_t v133; // w0
  int32_t v134; // w2
  int32_t v135; // w3
  BalanceConfig_c *v136; // x0
  __int64 v137; // x0
  int32_t v138; // w2
  int32_t v139; // w3
  __int64 v140; // x0
  int32_t v141; // w2
  int32_t v142; // w3
  __int64 v143; // x0
  int32_t v144; // w2
  int32_t v145; // w3
  System_Boolean_array *v146; // x0
  int32_t v147; // w2
  int32_t v148; // w3
  Il2CppObject *v149; // x23
  int32_t v150; // w0
  int32_t v151; // w2
  int32_t v152; // w3
  System_Collections_Generic_List_object__o *v153; // x23
  int32_t v154; // w2
  int32_t v155; // w3
  struct System_Object_array *v156; // x8
  _QWORD *v157; // x9
  __int64 v158; // x10
  __int64 v159; // x1
  Il2CppClass **v160; // x0
  Il2CppObject *v161; // x23
  int32_t v162; // w0
  int32_t v163; // w2
  int32_t v164; // w3
  System_Collections_Generic_List_object__o *v165; // x23
  int32_t v166; // w2
  int32_t v167; // w3
  struct System_Object_array *v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  __int64 v171; // x1
  Il2CppClass **v172; // x0
  struct System_Int32_array *targetVals; // x8
  System_Collections_Generic_List_object__o *v174; // x23
  int32_t v175; // w2
  int32_t v176; // w3
  struct System_Object_array *v177; // x8
  _QWORD *v178; // x9
  __int64 v179; // x10
  __int64 v180; // x1
  Il2CppClass **v181; // x0
  System_Collections_Generic_List_object__o *v182; // x23
  int32_t v183; // w2
  int32_t v184; // w3
  struct System_Object_array *v185; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  __int64 v188; // x1
  Il2CppClass **v189; // x0
  int32_t restrictionMessageId; // w2
  int32_t v191; // w2
  int32_t v192; // w3
  struct System_Object_array *v193; // x8
  _QWORD *v194; // x9
  __int64 v195; // x10
  Il2CppClass **v196; // x0
  __int64 v197; // x23
  QuestRestrictionInfo_o *v198; // x28
  char isAllOutBattle; // w8
  System_Collections_Generic_Dictionary_K__V__o *v200; // x21
  int32_t v201; // w2
  int32_t v202; // w3
  BalanceConfig_c *v203; // x0
  __int64 v204; // x0
  int32_t v205; // w2
  int32_t v206; // w3
  int32_t v207; // w21
  int v208; // w24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v209; // x8
  System_Object_array *v210; // x22
  System_Collections_Generic_List_int__o *v211; // x24
  int v212; // w8
  __int64 v213; // x19
  Il2CppObject *v214; // x23
  struct System_Int32_array *v215; // x8
  _QWORD *v216; // x9
  __int64 v217; // x10
  int32_t monitor_high; // w2
  int32_t v219; // w2
  int32_t v220; // w3
  struct System_Object_array *v221; // x8
  _QWORD *v222; // x9
  __int64 v223; // x10
  Il2CppClass **v224; // x0
  __int64 v225; // x23
  System_Object_array *v226; // x24
  ServantStatusBattleListViewItem_c *klass; // x25
  QuestRestrictionInfo_SlotInfo_o *v228; // x23
  const MethodInfo *v229; // x1
  int32_t v230; // w2
  int32_t v231; // w3
  int v232; // w19
  void **v233; // x0
  int servantNumMax; // w8
  ServantStatusBattleListViewItem_c *v235; // x8
  int32_t v236; // w24
  __int64 v237; // x8
  QuestRestrictionInfo___c_c *v238; // x0
  System_Func_object__bool__o *_9__82_0; // x23
  Il2CppObject *v240; // x25
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x0
  int32_t v242; // w2
  int32_t v243; // w3
  _BOOL4 v244; // w0
  QuestRestrictionInfo___c_c *v245; // x8
  _BOOL4 v246; // w23
  System_Func_object__bool__o *_9__82_1; // x25
  Il2CppObject *v248; // x28
  struct QuestRestrictionInfo___c_StaticFields *v249; // x0
  int32_t v250; // w2
  int32_t v251; // w3
  _BOOL4 v252; // w0
  QuestRestrictionInfo___c_c *v253; // x8
  _BOOL4 v254; // w25
  System_Func_object__bool__o *_9__82_2; // x28
  Il2CppObject *v256; // x27
  struct QuestRestrictionInfo___c_StaticFields *v257; // x0
  int32_t v258; // w2
  int32_t v259; // w3
  ServantStatusBattleListViewItem_c *v260; // x8
  __int64 v261; // x8
  ServantStatusBattleListViewItem_c *v262; // x8
  __int64 v263; // x8
  ServantStatusBattleListViewItem_c *v264; // x8
  __int64 v265; // x8
  int v266; // w8
  unsigned int v267; // w27
  Il2CppObject *v268; // x25
  Il2CppObject *v269; // x8
  ServantStatusBattleListViewItem_c *v270; // x8
  __int64 v271; // x8
  System_Collections_Generic_List_object__o *v272; // x23
  int32_t v273; // w2
  int32_t v274; // w3
  struct System_Object_array *v275; // x8
  _QWORD *v276; // x9
  __int64 v277; // x10
  __int64 v278; // x1
  Il2CppClass **v279; // x0
  ServantStatusBattleListViewItem_c *v280; // x8
  __int64 v281; // x8
  struct System_Int32_array *v282; // x8
  _QWORD *v283; // x9
  __int64 v284; // x10
  System_String_o *monitor; // x23
  ServantStatusBattleListViewItem_c *v286; // x8
  __int64 v287; // x8
  int32_t v288; // w2
  int32_t v289; // w3
  ServantStatusBattleListViewItem_c *v290; // x8
  __int64 v291; // x8
  System_String_o **v292; // x25
  ServantStatusBattleListViewItem_c *v293; // x8
  QuestRestrictionInfo___c_c *v294; // x0
  __int64 v295; // x27
  System_Func_object__bool__o *_9__82_3; // x23
  Il2CppObject *v297; // x25
  struct QuestRestrictionInfo___c_StaticFields *v298; // x0
  int32_t v299; // w2
  int32_t v300; // w3
  ServantStatusBattleListViewItem_c *v301; // x8
  __int64 v302; // x8
  ServantStatusBattleListViewItem_c *v303; // x8
  __int64 v304; // x8
  ServantStatusBattleListViewItem_c *v305; // x8
  __int64 v306; // x8
  System_Object_array *v307; // x0
  int32_t v308; // w2
  int32_t v309; // w3
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v311; // w10
  int v312; // w11
  int v313; // w9
  int v314; // w20
  int32_t v315; // w19
  QuestRestrictionInfo_SlotInfo_o *v316; // x13
  int v317; // w21
  int v318; // w22
  __int64 v319; // x8
  bool HasFlag_39473080; // w0
  bool v321; // w0
  Il2CppObject *Value_int__object; // x0
  int v323; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v325; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v326; // x8
  __int64 v327; // x8
  Il2CppObject *v328; // x20
  int32_t v329; // w0
  int32_t v330; // w2
  int32_t v331; // w3
  System_Collections_Generic_Dictionary_int__object__o *restrictionSlotDictionary; // x8
  _BOOL8 v333; // x0
  __int64 v334; // x1
  int v335; // w9
  int v336; // w10
  __int64 v337; // x11
  System_Text_StringBuilder_o *v338; // x20
  System_Text_StringBuilder_o *v339; // x21
  struct RestrictionWholeEntity_array *v340; // x19
  int v341; // w8
  unsigned int v342; // w22
  RestrictionWholeEntity_o *v343; // x24
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  int v346; // w25
  _BOOL4 v347; // w8
  __int64 v348; // x0
  int32_t v349; // w2
  int32_t v350; // w3
  System_String_o *v351; // x19
  System_String_o *v352; // x0
  System_String_o *v353; // x0
  int32_t v354; // w2
  int32_t v355; // w3
  __int64 v356; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // [xsp+10h] [xbp-190h]
  ServantStatusBattleListViewItem_o *p_svtIdForceBattleList; // [xsp+18h] [xbp-188h]
  ServantStatusBattleListViewItem_o *p_restrictionMessage; // [xsp+20h] [xbp-180h]
  ServantStatusBattleListViewItem_o *p_confirmRestrictionMessage; // [xsp+28h] [xbp-178h]
  struct RestrictionWholeEntity_array *v361; // [xsp+30h] [xbp-170h]
  ServantStatusBattleListViewItem_o *p_fixedSupportIndividualities; // [xsp+38h] [xbp-168h]
  ServantStatusBattleListViewItem_o *p_fixedNpcIndividualities; // [xsp+40h] [xbp-160h]
  ServantStatusBattleListViewItem_o *p_needStartingIndividualities; // [xsp+48h] [xbp-158h]
  ServantStatusBattleListViewItem_o *p_uniqueIndividualitys; // [xsp+50h] [xbp-150h]
  System_Collections_Generic_List_object__o **p_fixedMyServantIndividualitiesList; // [xsp+58h] [xbp-148h]
  System_Collections_Generic_List_object__o **p_fixedIndividualitiesList; // [xsp+60h] [xbp-140h]
  System_Collections_Generic_List_object__o **p_needStartingIndividualitiesList; // [xsp+68h] [xbp-138h]
  System_Collections_Generic_List_object__o **p_fixedNpcIndividualitiesList; // [xsp+70h] [xbp-130h]
  System_Collections_Generic_List_object__o **p_fixedSupportIndividualitiesList; // [xsp+78h] [xbp-128h]
  ServantStatusBattleListViewItem_o *p_deckDispLimitCountList; // [xsp+80h] [xbp-120h]
  ServantStatusBattleListViewItem_o *p_deckLimitCountList; // [xsp+88h] [xbp-118h]
  System_Collections_Generic_List_object__o **p_myServantPositionsList; // [xsp+90h] [xbp-110h]
  System_Collections_Generic_List_object__o **p_positionsList; // [xsp+A0h] [xbp-100h]
  System_Collections_Generic_Dictionary_K__V__o **v376; // [xsp+A8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o **p_restrictionSlotDetailDictionary; // [xsp+B0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_K__V__o **p_restrictionSlotDictionary; // [xsp+B8h] [xbp-E8h]
  struct RestrictionBaseEntity_o **p_restrictionBaseEntity; // [xsp+C0h] [xbp-E0h]
  QuestRestrictionInfo_o *v380; // [xsp+C8h] [xbp-D8h]
  ServantStatusBattleListViewItem_o *p_deckSvtIdList; // [xsp+D0h] [xbp-D0h]
  _BOOL4 v382; // [xsp+D0h] [xbp-D0h]
  int32_t questIdb; // [xsp+DCh] [xbp-C4h]
  ServantStatusBattleListViewItem_o *p_fields; // [xsp+E0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v386; // [xsp+E8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v387; // [xsp+100h] [xbp-A0h] BYREF
  Il2CppObject *item; // [xsp+120h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+128h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v390; // [xsp+130h] [xbp-70h] BYREF
  Il2CppObject *v391; // [xsp+138h] [xbp-68h] BYREF

  if ( (byte_4A5C2A1 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
    sub_1B885B0(&Method_BasicHelper_Any_RestrictionSlotEntity___);
    sub_1B885B0(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
    sub_1B885B0(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_RestrictionBaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_RestrictionMessageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_RestrictionSlotMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_RestrictionWholeMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
    sub_1B885B0(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__);
    sub_1B885B0(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_RestrictionSlotEntity__bool__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_bool____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_bool_____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_bool____TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_int____TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&QuestRestrictionInfo_SlotInfo___TypeInfo);
    sub_1B885B0(&QuestRestrictionInfo_SlotInfo_TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__Setup_b__82_0__);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__Setup_b__82_1__);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__Setup_b__82_2__);
    sub_1B885B0(&Method_QuestRestrictionInfo___c__Setup_b__82_3__);
    sub_1B885B0(&QuestRestrictionInfo___c_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_10315/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/);
    sub_1B885B0(&StringLiteral_10282/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C2A1 = 1;
  }
  v390 = 0LL;
  v391 = 0LL;
  item = 0LL;
  entity = 0LL;
  memset(&v387, 0, sizeof(v387));
  this->fields.isRestriction = 0;
  v6 = (struct System_String_o *)StringLiteral_1/*""*/;
  v7 = (int)StringLiteral_1/*""*/;
  v8 = this;
  this->fields.restrictionMessage = (struct System_String_o *)StringLiteral_1/*""*/;
  p_restrictionMessage = (ServantStatusBattleListViewItem_o *)&this->fields.restrictionMessage;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.restrictionMessage, v7, questId, questPhase);
  this->fields.confirmRestrictionMessage = v6;
  p_confirmRestrictionMessage = (ServantStatusBattleListViewItem_o *)&this->fields.confirmRestrictionMessage;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.confirmRestrictionMessage, (int32_t)v6, v9, v10);
  this->fields.supportOnlyRestrictionEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.supportOnlyRestrictionEntity, 0, v11, v12);
  this->fields.uniqueSvtRestrictionEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.uniqueSvtRestrictionEntity, 0, v13, v14);
  this->fields.deckSvtIdList = 0LL;
  p_deckSvtIdList = (ServantStatusBattleListViewItem_o *)&this->fields.deckSvtIdList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.deckSvtIdList, 0, v15, v16);
  this->fields.fixedSupportPositionRestrictionEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fixedSupportPositionRestrictionEntity, 0, v17, v18);
  this->fields.supportPositionList = 0LL;
  p_supportPositionList = (ServantStatusBattleListViewItem_o *)&this->fields.supportPositionList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.supportPositionList, 0, v20, v21);
  this->fields.fixedMyServantPositionRestrictionEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity, 0, v22, v23);
  this->fields.servantNumRestrictionEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantNumRestrictionEntity, 0, v24, v25);
  this->fields.servantNumMax = 0;
  this->fields.myServantNumRestrictionEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.myServantNumRestrictionEntity, 0, v26, v27);
  this->fields.myServantNumMax = 0;
  *(_WORD *)&this->fields.isSupportOnlyForceBattle = 0;
  this->fields.svtIdForceBattleList = 0LL;
  p_svtIdForceBattleList = (ServantStatusBattleListViewItem_o *)&this->fields.svtIdForceBattleList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtIdForceBattleList, 0, v28, v29);
  this->fields.isFatigure = 0;
  p_eventDeckNum = &this->fields.eventDeckNum;
  v8->fields.eventDeckNum = 0;
  *(int32_t *)((char *)p_eventDeckNum + 3) = 0;
  v31 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v8->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v31;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v8->fields.myServantOrNpcRestrictionEntityList,
    (int32_t)v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v8->fields.specifiedPositionList = v34;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.specifiedPositionList, (int32_t)v34, v35, v36);
  v8->fields.isNotTransitionSupportList = 0;
  v8->fields.supportInitIndex = 0;
  v8->fields.fixedServantPositionRestrictionEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.fixedServantPositionRestrictionEntity, 0, v37, v38);
  v8->fields.uniqueIndividualityEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.uniqueIndividualityEntity, 0, v39, v40);
  v8->fields.isAllOutBattle = 0;
  v8->fields.isDataLostBattle = 0;
  v8->fields.allOutBattleGroupNo = -1;
  v8->fields.dataLostBattleId = -1;
  v8->fields.deckLimitCountList = 0LL;
  p_deckLimitCountList = (ServantStatusBattleListViewItem_o *)&v8->fields.deckLimitCountList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.deckLimitCountList, 0, v41, v42);
  v8->fields.deckDispLimitCountList = 0LL;
  p_deckDispLimitCountList = (ServantStatusBattleListViewItem_o *)&v8->fields.deckDispLimitCountList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.deckDispLimitCountList, 0, v43, v44);
  v8->fields.isNotSingleSupportOnly = 0;
  *(_DWORD *)&v8->fields.isUniqueServant = 0;
  v45 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_bool_____ctor__);
  v8->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v45;
  p_positionsList = (System_Collections_Generic_List_object__o **)&v8->fields.positionsList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.positionsList, (int32_t)v45, v46, v47);
  v48 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_int_____ctor__);
  v8->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v48;
  p_fixedIndividualitiesList = (System_Collections_Generic_List_object__o **)&v8->fields.fixedIndividualitiesList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.fixedIndividualitiesList, (int32_t)v48, v49, v50);
  v8->fields.isFixedMyServantPosition = 0;
  v51 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_bool____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_bool_____ctor__);
  v8->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v51;
  p_myServantPositionsList = (System_Collections_Generic_List_object__o **)&v8->fields.myServantPositionsList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.myServantPositionsList, (int32_t)v51, v52, v53);
  v54 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v54,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_int_____ctor__);
  v8->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v54;
  p_fixedMyServantIndividualitiesList = (System_Collections_Generic_List_object__o **)&v8->fields.fixedMyServantIndividualitiesList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v8->fields.fixedMyServantIndividualitiesList,
    (int32_t)v54,
    v55,
    v56);
  v8->fields.isFixedSupportPosition = 0;
  v57 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_int_____ctor__);
  v8->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v57;
  p_fixedSupportIndividualitiesList = (System_Collections_Generic_List_object__o **)&v8->fields.fixedSupportIndividualitiesList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.fixedSupportIndividualitiesList, (int32_t)v57, v58, v59);
  v8->fields.isFixedNpcPosition = 0;
  v60 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_int_____ctor__);
  v8->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v60;
  p_fixedNpcIndividualitiesList = (System_Collections_Generic_List_object__o **)&v8->fields.fixedNpcIndividualitiesList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.fixedNpcIndividualitiesList, (int32_t)v60, v61, v62);
  v8->fields.npcPositionList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.npcPositionList, 0, v63, v64);
  v65 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v65,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_int_____ctor__);
  v8->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v65;
  p_needStartingIndividualitiesList = (System_Collections_Generic_List_object__o **)&v8->fields.needStartingIndividualitiesList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.needStartingIndividualitiesList, (int32_t)v65, v66, v67);
  v8->fields.isNeedStarting = 0;
  v8->fields.isFixedMyServantSingle = 0;
  *(_WORD *)&v8->fields.isMyServantOrNpc = 0;
  v8->fields.slotInfos = 0LL;
  p_fields = (ServantStatusBattleListViewItem_o *)&v8->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields, 0, v68, v69);
  v8->fields.dialogMessageInfoDictionary = 0LL;
  p_dialogMessageInfoDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&v8->fields.dialogMessageInfoDictionary;
  v380 = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.dialogMessageInfoDictionary, 0, v71, v72);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !Master_object )
    goto LABEL_385;
  p_restrictionBaseEntity = &v8->fields.restrictionBaseEntity;
  if ( RestrictionBaseMaster__TryGetEntity(
         (RestrictionBaseMaster_o *)Master_object,
         &v8->fields.restrictionBaseEntity,
         v8->fields.questId,
         v8->fields.questPhase,
         0LL) )
  {
    v8->fields.isRestriction = 1;
    v76 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v76,
      (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    v8->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v76;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_K__V__o **)&v8->fields.restrictionSlotDictionary;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.restrictionSlotDictionary, (int32_t)v76, v77, v78);
    v79 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v79,
      (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    v8->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v79;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v8->fields.restrictionSlotDetailDictionary,
      (int32_t)v79,
      v80,
      v81);
    v82 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v82,
      (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    v8->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v82;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.dialogMessageInfoDictionary, (int32_t)v82, v83, v84);
    v85 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v85,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    Master_object = (__int64)v380->fields.restrictionBaseEntity;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__object__o **)&v380->fields.restrictionSlotDetailDictionary;
    if ( !Master_object )
      goto LABEL_385;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 2LL, 0LL);
    restrictionBaseEntity = v380->fields.restrictionBaseEntity;
    v380->fields.isNotTransitionSupportList = Master_object & 1;
    if ( !restrictionBaseEntity )
      goto LABEL_385;
    if ( RestrictionBaseEntity__HasFlag(restrictionBaseEntity, 4LL, 0LL) )
    {
      Master_object = (__int64)*p_restrictionBaseEntity;
      if ( !*p_restrictionBaseEntity )
        goto LABEL_385;
      *p_eventDeckNum = RestrictionBaseEntity__GetUserEventDeckNo((RestrictionBaseEntity_o *)Master_object, 0LL);
    }
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_385;
    HasFlag = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 16LL, 0LL);
    v380->fields.isUniqueServant = HasFlag;
    if ( HasFlag )
    {
      v88 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v88 = BalanceConfig_TypeInfo;
      }
      v89 = sub_1B88658(int___TypeInfo, (unsigned int)v88->static_fields->DeckMemberMax);
      p_deckSvtIdList->klass = (ServantStatusBattleListViewItem_c *)v89;
      sub_1B88554(p_deckSvtIdList, v89, v90, v91);
    }
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_385;
    Master_object = RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 32LL, 0LL);
    v92 = v380->fields.restrictionBaseEntity;
    v380->fields.isNotSingleSupportOnly = Master_object & 1;
    if ( !v92 )
      goto LABEL_385;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      v92,
      &v380->fields.overwriteLimitCountSvtIds,
      &v380->fields.overwriteLimitCounts,
      &v380->fields.overwriteLimitCountIconIds,
      0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v93 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
    if ( !*p_restrictionBaseEntity )
      goto LABEL_385;
    if ( !Master_object )
      goto LABEL_385;
    Entities = RestrictionWholeMaster__GetEntities(
                 (RestrictionWholeMaster_o *)Master_object,
                 (*p_restrictionBaseEntity)->fields.restrictionWholeId,
                 0LL);
    v380->fields.restrictionWholeEntities = Entities;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v380->fields.restrictionWholeEntities,
      (int32_t)Entities,
      v95,
      v96);
    restrictionWholeEntities = v380->fields.restrictionWholeEntities;
    p_restrictionWholeEntities = &v380->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_385;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length >= 1 )
    {
      v99 = 0;
      p_needStartingIndividualities = (ServantStatusBattleListViewItem_o *)&v380->fields.needStartingIndividualities;
      p_uniqueIndividualitys = (ServantStatusBattleListViewItem_o *)&v380->fields.uniqueIndividualitys;
      p_fixedSupportIndividualities = (ServantStatusBattleListViewItem_o *)&v380->fields.fixedSupportIndividualities;
      p_fixedNpcIndividualities = (ServantStatusBattleListViewItem_o *)&v380->fields.fixedNpcIndividualities;
      v361 = v380->fields.restrictionWholeEntities;
      while ( 2 )
      {
        if ( v99 >= max_length )
          goto LABEL_386;
        v100 = restrictionWholeEntities->m_Items[v99];
        if ( v100 )
        {
          switch ( v100->fields.type )
          {
            case 2:
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestGroupMaster___);
              if ( !Master_object )
                goto LABEL_385;
              Master_object = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Master_object, questId, 17, 0LL);
              v380->fields.allOutBattleGroupNo = Master_object;
              v380->fields.isAllOutBattle = 1;
              goto LABEL_89;
            case 3:
              Master_object = System_Linq_Enumerable__Min(
                                (System_Collections_Generic_IEnumerable_int__o *)v100->fields.targetVals,
                                0LL);
              v380->fields.servantNumMax = Master_object - 1;
              goto LABEL_89;
            case 4:
              v116 = *p_positionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v100, 0LL);
              if ( !v116 )
                goto LABEL_385;
              items = v116->fields._items;
              v120 = Method_System_Collections_Generic_List_bool____Add__;
              ++v116->fields._version;
              if ( !items )
                goto LABEL_385;
              size = v116->fields._size;
              v122 = Master_object;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v116,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
              }
              else
              {
                v123 = &items->obj.klass + size;
                v116->fields._size = size + 1;
                v123[4] = (Il2CppClass *)v122;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v123 + 4), v122, v117, v118);
              }
              Master_object = (__int64)v100->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v174 = *p_fixedIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v174 )
                goto LABEL_385;
              Master_object = sub_1B886EC(Master_object, int___TypeInfo);
              v177 = v174->fields._items;
              v178 = Method_System_Collections_Generic_List_int____Add__;
              ++v174->fields._version;
              if ( !v177 )
                goto LABEL_385;
              v179 = v174->fields._size;
              v180 = Master_object;
              if ( (unsigned int)v179 >= v177->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v174,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
              }
              else
              {
                v181 = &v177->obj.klass + v179;
                v174->fields._size = v179 + 1;
                v181[4] = (Il2CppClass *)v180;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v181 + 4), v180, v175, v176);
              }
              v380->fields.isFixedPosition = 1;
              goto LABEL_89;
            case 5:
              v124 = *p_myServantPositionsList;
              Master_object = (__int64)RestrictionWholeEntity__GetSetPossiblePosition(v100, 0LL);
              if ( !v124 )
                goto LABEL_385;
              v127 = v124->fields._items;
              v128 = Method_System_Collections_Generic_List_bool____Add__;
              ++v124->fields._version;
              if ( !v127 )
                goto LABEL_385;
              v129 = v124->fields._size;
              v130 = Master_object;
              if ( (unsigned int)v129 >= v127->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v124,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
              }
              else
              {
                v131 = &v127->obj.klass + v129;
                v124->fields._size = v129 + 1;
                v131[4] = (Il2CppClass *)v130;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v131 + 4), v130, v125, v126);
              }
              Master_object = (__int64)v100->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v182 = *p_fixedMyServantIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v182 )
                goto LABEL_385;
              Master_object = sub_1B886EC(Master_object, int___TypeInfo);
              v185 = v182->fields._items;
              v186 = Method_System_Collections_Generic_List_int____Add__;
              ++v182->fields._version;
              if ( !v185 )
                goto LABEL_385;
              v187 = v182->fields._size;
              v188 = Master_object;
              if ( (unsigned int)v187 >= v185->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v182,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
              }
              else
              {
                v189 = &v185->obj.klass + v187;
                v182->fields._size = v187 + 1;
                v189[4] = (Il2CppClass *)v188;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v189 + 4), v188, v183, v184);
              }
              v380->fields.isFixedMyServantPosition = 1;
              goto LABEL_89;
            case 6:
              SetPossiblePosition = RestrictionWholeEntity__GetSetPossiblePosition(v100, 0LL);
              p_supportPositionList->klass = (ServantStatusBattleListViewItem_c *)SetPossiblePosition;
              sub_1B88554(p_supportPositionList, (int32_t)SetPossiblePosition, v102, v103);
              Master_object = (__int64)v100->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v104 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_fixedSupportIndividualities->klass = (ServantStatusBattleListViewItem_c *)sub_1B886EC(
                                                                                            v104,
                                                                                            int___TypeInfo);
              v105 = sub_1B886EC(v104, int___TypeInfo);
              sub_1B88554(p_fixedSupportIndividualities, v105, v106, v107);
              Master_object = (__int64)v100->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v108 = *p_fixedSupportIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v108 )
                goto LABEL_385;
              Master_object = sub_1B886EC(Master_object, int___TypeInfo);
              v111 = v108->fields._items;
              v112 = Method_System_Collections_Generic_List_int____Add__;
              ++v108->fields._version;
              if ( !v111 )
                goto LABEL_385;
              v113 = v108->fields._size;
              v114 = Master_object;
              if ( (unsigned int)v113 >= v111->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v108,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
              }
              else
              {
                v115 = &v111->obj.klass + v113;
                v108->fields._size = v113 + 1;
                v115[4] = (Il2CppClass *)v114;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v115 + 4), v114, v109, v110);
              }
              v380->fields.isFixedSupportPosition = 1;
              goto LABEL_89;
            case 7:
              v146 = RestrictionWholeEntity__GetSetPossiblePosition(v100, 0LL);
              p_supportPositionList->klass = (ServantStatusBattleListViewItem_c *)v146;
              sub_1B88554(p_supportPositionList, (int32_t)v146, v147, v148);
              Master_object = (__int64)v100->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v149 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_fixedNpcIndividualities->klass = (ServantStatusBattleListViewItem_c *)sub_1B886EC(v149, int___TypeInfo);
              v150 = sub_1B886EC(v149, int___TypeInfo);
              sub_1B88554(p_fixedNpcIndividualities, v150, v151, v152);
              Master_object = (__int64)v100->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v153 = *p_fixedNpcIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v153 )
                goto LABEL_385;
              Master_object = sub_1B886EC(Master_object, int___TypeInfo);
              v156 = v153->fields._items;
              v157 = Method_System_Collections_Generic_List_int____Add__;
              ++v153->fields._version;
              if ( !v156 )
                goto LABEL_385;
              v158 = v153->fields._size;
              v159 = Master_object;
              if ( (unsigned int)v158 >= v156->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v153,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
              }
              else
              {
                v160 = &v156->obj.klass + v158;
                v153->fields._size = v158 + 1;
                v160[4] = (Il2CppClass *)v159;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v160 + 4), v159, v154, v155);
              }
              v380->fields.isFixedNpcPosition = 1;
              goto LABEL_89;
            case 8:
              Master_object = (__int64)v100->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v161 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_needStartingIndividualities->klass = (ServantStatusBattleListViewItem_c *)sub_1B886EC(
                                                                                            v161,
                                                                                            int___TypeInfo);
              v162 = sub_1B886EC(v161, int___TypeInfo);
              sub_1B88554(p_needStartingIndividualities, v162, v163, v164);
              Master_object = (__int64)v100->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v165 = *p_needStartingIndividualitiesList;
              Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
              if ( !v165 )
                goto LABEL_385;
              Master_object = sub_1B886EC(Master_object, int___TypeInfo);
              v168 = v165->fields._items;
              v169 = Method_System_Collections_Generic_List_int____Add__;
              ++v165->fields._version;
              if ( !v168 )
                goto LABEL_385;
              v170 = v165->fields._size;
              v171 = Master_object;
              if ( (unsigned int)v170 >= v168->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v165,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
              }
              else
              {
                v172 = &v168->obj.klass + v170;
                v165->fields._size = v170 + 1;
                v172[4] = (Il2CppClass *)v171;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v172 + 4), v171, v166, v167);
              }
              v380->fields.isNeedStarting = 1;
              goto LABEL_89;
            case 9:
              Master_object = (__int64)v100->fields.targetVals;
              if ( !Master_object )
                goto LABEL_385;
              v132 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
              p_uniqueIndividualitys->klass = (ServantStatusBattleListViewItem_c *)sub_1B886EC(v132, int___TypeInfo);
              v133 = sub_1B886EC(v132, int___TypeInfo);
              sub_1B88554(p_uniqueIndividualitys, v133, v134, v135);
              v136 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v136 = BalanceConfig_TypeInfo;
              }
              v137 = sub_1B88658(int___TypeInfo, (unsigned int)v136->static_fields->DeckMemberMax);
              v380->fields.deckSvtIdList = (struct System_Int32_array *)v137;
              sub_1B88554(p_deckSvtIdList, v137, v138, v139);
              v140 = sub_1B88658(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v380->fields.deckLimitCountList = (struct System_Int32_array *)v140;
              sub_1B88554(p_deckLimitCountList, v140, v141, v142);
              v143 = sub_1B88658(int___TypeInfo, (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
              v380->fields.deckDispLimitCountList = (struct System_Int32_array *)v143;
              sub_1B88554(p_deckDispLimitCountList, v143, v144, v145);
              restrictionWholeEntities = v361;
              v380->fields.isUniqueIndividuality = 1;
              goto LABEL_89;
            case 0xA:
              v380->fields.isDataLostBattle = 1;
              targetVals = v100->fields.targetVals;
              if ( !targetVals )
                goto LABEL_385;
              if ( !targetVals->max_length )
                goto LABEL_386;
              v380->fields.dataLostBattleId = targetVals->m_Items[1];
LABEL_89:
              restrictionMessageId = v100->fields.restrictionMessageId;
              if ( restrictionMessageId < 1 )
                goto LABEL_101;
              if ( !v93 )
                goto LABEL_385;
              Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v93,
                                &entity,
                                restrictionMessageId,
                                (const MethodInfo_311D988 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
              if ( (Master_object & 1) == 0 )
                goto LABEL_101;
              if ( !v85 )
                goto LABEL_385;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v85,
                                entity,
                                (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) != 0 )
                goto LABEL_101;
              monitor_low = entity;
              v193 = v85->fields._items;
              v194 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
              ++v85->fields._version;
              if ( !v193 )
                goto LABEL_385;
              v195 = v85->fields._size;
              if ( (unsigned int)v195 >= v193->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v85,
                  monitor_low,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
              }
              else
              {
                v196 = &v193->obj.klass + v195;
                v85->fields._size = v195 + 1;
                v196[4] = (Il2CppClass *)monitor_low;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v196 + 4), (int32_t)monitor_low, v191, v192);
              }
              v197 = sub_1B887FC(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v197, 0LL);
              *(_DWORD *)(v197 + 16) = 0;
              *(_DWORD *)(v197 + 20) = v100->fields.type;
              if ( !entity )
                goto LABEL_385;
              Master_object = (__int64)*p_dialogMessageInfoDictionary;
              if ( !*p_dialogMessageInfoDictionary )
                goto LABEL_385;
              System_Collections_Generic_Dictionary_int__object___Add(
                (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                (int32_t)entity[1].klass,
                (Il2CppObject *)v197,
                (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
LABEL_101:
              max_length = restrictionWholeEntities->max_length;
              if ( (int)++v99 >= max_length )
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestMaster___);
    v198 = v380;
    if ( !Master_object )
      goto LABEL_385;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
      &v391,
      questId,
      (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    Master_object = (__int64)v391;
    if ( !v391 )
      goto LABEL_385;
    Master_object = QuestEntity__HasFlag_39473080((QuestEntity_o *)v391, 0x100000LL, questPhase, 0LL);
    if ( (Master_object & 1) != 0 )
    {
      if ( !v380 )
        goto LABEL_385;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = v380->fields.isAllOutBattle;
    }
    v380->fields.isNoSupportBattle = isAllOutBattle;
    Master_object = (__int64)v391;
    if ( !v391 )
      goto LABEL_385;
    v380->fields.isSupportOnlyForceBattle = QuestEntity__HasFlag_39473080(
                                              (QuestEntity_o *)v391,
                                              0x80000LL,
                                              questPhase,
                                              0LL);
    Master_object = (__int64)v391;
    if ( !v391 )
      goto LABEL_385;
    v380->fields.isFatigure = QuestEntity__HasFlag_39473080((QuestEntity_o *)v391, 0x200000LL, questPhase, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_385;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v390, questId, questPhase, 0LL) )
    {
      Master_object = sub_1B88658(int___TypeInfo, 1LL);
      if ( !v390 )
        goto LABEL_385;
      v200 = (System_Collections_Generic_Dictionary_K__V__o *)Master_object;
      Master_object = QuestPhaseEntity__GetSingleForceSvtId(v390, 0LL);
      if ( !v200 )
        goto LABEL_385;
      if ( !LODWORD(v200->fields._entries) )
        goto LABEL_386;
      v200->fields._count = Master_object;
      p_svtIdForceBattleList->klass = (ServantStatusBattleListViewItem_c *)v200;
      sub_1B88554(p_svtIdForceBattleList, (int32_t)v200, v201, v202);
      Master_object = (__int64)v390;
      if ( !v390 )
        goto LABEL_385;
      v380->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v390, 0LL);
      Master_object = (__int64)v390;
      if ( !v390 )
        goto LABEL_385;
      v380->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v390, 0LL);
    }
    else
    {
      v380->fields.correctionIconId = -1;
    }
    v203 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v203 = BalanceConfig_TypeInfo;
    }
    v204 = sub_1B88658(QuestRestrictionInfo_SlotInfo___TypeInfo, (unsigned int)v203->static_fields->DeckMemberMax);
    p_fields->klass = (ServantStatusBattleListViewItem_c *)v204;
    sub_1B88554(p_fields, v204, v205, v206);
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_385;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    Master_object = (__int64)*p_restrictionSlotDetailDictionary;
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_385;
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
      (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v207 = 1;
    v208 = 1;
    v376 = p_dialogMessageInfoDictionary;
    while ( 1 )
    {
      Master_object = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Master_object = (__int64)BalanceConfig_TypeInfo;
      }
      if ( v207 > *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 156LL) )
        break;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      if ( !*p_restrictionBaseEntity )
        goto LABEL_385;
      if ( !Master_object )
        goto LABEL_385;
      Master_object = (__int64)RestrictionSlotMaster__GetEntities(
                                 (RestrictionSlotMaster_o *)Master_object,
                                 (*p_restrictionBaseEntity)->fields.restrictionSlotId,
                                 v207,
                                 0LL);
      if ( !Master_object )
        goto LABEL_385;
      v209 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
      v210 = (System_Object_array *)Master_object;
      questIdb = v208;
      Master_object = (__int64)*p_restrictionSlotDictionary;
      v382 = v209 != 0LL;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_385;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
        v207,
        &v210->obj,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v211 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v211,
        (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
      v212 = v210->max_length;
      if ( v212 >= 1 )
      {
        v213 = 0LL;
        while ( (unsigned int)v213 < v212 )
        {
          v214 = v210->m_Items[v213];
          if ( !v214 || !v211 )
            goto LABEL_385;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v211,
                            (int32_t)v214[2].monitor,
                            (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            monitor_low = (Il2CppObject *)LODWORD(v214[2].monitor);
            v215 = v211->fields._items;
            v216 = Method_System_Collections_Generic_List_int__Add__;
            ++v211->fields._version;
            if ( !v215 )
              goto LABEL_385;
            v217 = v211->fields._size;
            if ( (unsigned int)v217 >= v215->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v211,
                (int32_t)monitor_low,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v216[4] + 192LL) + 112LL));
            }
            else
            {
              v211->fields._size = v217 + 1;
              v215->m_Items[v217 + 1] = (int)monitor_low;
            }
          }
          monitor_high = HIDWORD(v214[2].monitor);
          if ( monitor_high >= 1 )
          {
            if ( !v93 )
              goto LABEL_385;
            Master_object = DataMasterBase_object__object__int___TryGetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v93,
                              &item,
                              monitor_high,
                              (const MethodInfo_311D988 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (Master_object & 1) != 0 )
            {
              if ( !v85 )
                goto LABEL_385;
              Master_object = System_Collections_Generic_List_object___Contains(
                                v85,
                                item,
                                (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (Master_object & 1) == 0 )
              {
                monitor_low = item;
                v221 = v85->fields._items;
                v222 = Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__;
                ++v85->fields._version;
                if ( !v221 )
                  goto LABEL_385;
                v223 = v85->fields._size;
                if ( (unsigned int)v223 >= v221->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v85,
                    monitor_low,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v222[4] + 192LL) + 112LL));
                }
                else
                {
                  v224 = &v221->obj.klass + v223;
                  v85->fields._size = v223 + 1;
                  v224[4] = (Il2CppClass *)monitor_low;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v224 + 4), (int32_t)monitor_low, v219, v220);
                }
                v225 = sub_1B887FC(QuestRestrictionInfo_DialogMessageInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v225, 0LL);
                *(_DWORD *)(v225 + 16) = v207;
                *(_DWORD *)(v225 + 20) = 0;
                if ( !item )
                  goto LABEL_385;
                Master_object = (__int64)*p_dialogMessageInfoDictionary;
                if ( !*p_dialogMessageInfoDictionary )
                  goto LABEL_385;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  (int32_t)item[1].klass,
                  (Il2CppObject *)v225,
                  (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v212 = v210->max_length;
          if ( (int)++v213 >= v212 )
            goto LABEL_161;
        }
        goto LABEL_386;
      }
LABEL_161:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !Master_object )
        goto LABEL_385;
      Master_object = (__int64)RestrictionSlotDetailMaster__GetEntities(
                                 (RestrictionSlotDetailMaster_o *)Master_object,
                                 v211,
                                 0LL);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_385;
      v226 = (System_Object_array *)Master_object;
      System_Collections_Generic_Dictionary_int__object___Add(
        *p_restrictionSlotDetailDictionary,
        v207,
        (Il2CppObject *)Master_object,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v228 = (QuestRestrictionInfo_SlotInfo_o *)sub_1B887FC(QuestRestrictionInfo_SlotInfo_TypeInfo);
      QuestRestrictionInfo_SlotInfo___ctor(v228, v229);
      if ( !klass )
        goto LABEL_385;
      if ( v228 )
      {
        Master_object = sub_1B886EC(v228, *((_QWORD *)klass->_1.image + 8));
        if ( !Master_object )
        {
          v356 = sub_1B88830(0LL);
          sub_1B886D8(v356, 0LL);
        }
      }
      v232 = v207 - 1;
      if ( (unsigned int)(v207 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_386;
      v233 = &klass->_1.image + v232;
      v233[4] = v228;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v233 + 4), (int32_t)v228, v230, v231);
      servantNumMax = v198->fields.servantNumMax;
      if ( servantNumMax < 1 || v232 < servantNumMax )
      {
        v238 = QuestRestrictionInfo___c_TypeInfo;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v238 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__82_0 = (System_Func_object__bool__o *)v238->static_fields->__9__82_0;
        if ( !_9__82_0 )
        {
          if ( !v238->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v238);
            v238 = QuestRestrictionInfo___c_TypeInfo;
          }
          v240 = (Il2CppObject *)v238->static_fields->__9;
          _9__82_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__82_0, v240, Method_QuestRestrictionInfo___c__Setup_b__82_0__, 0LL);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
          static_fields->__9__82_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_0;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__82_0, (int32_t)_9__82_0, v242, v243);
        }
        v244 = BasicHelper__Any_object__48672124(
                 v210,
                 (System_Func_T__bool__o *)_9__82_0,
                 (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v245 = QuestRestrictionInfo___c_TypeInfo;
        v246 = v244;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v245 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__82_1 = (System_Func_object__bool__o *)v245->static_fields->__9__82_1;
        if ( !_9__82_1 )
        {
          if ( !v245->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v245);
            v245 = QuestRestrictionInfo___c_TypeInfo;
          }
          v248 = (Il2CppObject *)v245->static_fields->__9;
          _9__82_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__82_1, v248, Method_QuestRestrictionInfo___c__Setup_b__82_1__, 0LL);
          v249 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v249->__9__82_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_1;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v249->__9__82_1, (int32_t)_9__82_1, v250, v251);
        }
        v252 = BasicHelper__Any_object__48672124(
                 v210,
                 (System_Func_T__bool__o *)_9__82_1,
                 (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        v253 = QuestRestrictionInfo___c_TypeInfo;
        v254 = v252;
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v253 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__82_2 = (System_Func_object__bool__o *)v253->static_fields->__9__82_2;
        if ( !_9__82_2 )
        {
          if ( !v253->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v253);
            v253 = QuestRestrictionInfo___c_TypeInfo;
          }
          v256 = (Il2CppObject *)v253->static_fields->__9;
          _9__82_2 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RestrictionSlotEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__82_2, v256, Method_QuestRestrictionInfo___c__Setup_b__82_2__, 0LL);
          v257 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v257->__9__82_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_2;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v257->__9__82_2, (int32_t)_9__82_2, v258, v259);
        }
        Master_object = BasicHelper__Any_object__48672124(
                          v210,
                          (System_Func_T__bool__o *)_9__82_2,
                          (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_RestrictionSlotEntity___);
        if ( v254 || !v246 || (Master_object & 1) != 0 )
        {
          v198 = v380;
          if ( (v246 || !v254) | Master_object & 1 )
          {
            if ( v246 || v254 || (((unsigned int)Master_object ^ 1) & 1) != 0 )
            {
              if ( Master_object & 1 | (!v246 || !v254) )
              {
                if ( ((v246 || v254) & (unsigned int)Master_object & 1) != 0 )
                {
                  v303 = p_fields->klass;
                  if ( !p_fields->klass )
                    goto LABEL_385;
                  if ( (unsigned int)v232 >= LODWORD(v303->_1.namespaze) )
                    goto LABEL_386;
                  v304 = *((_QWORD *)&v303->_1.byval_arg.data + v232);
                  if ( !v304 )
                    goto LABEL_385;
                  *(_DWORD *)(v304 + 16) = 4;
                  v380->fields.isMyServantOrSupport = 1;
                }
              }
              else
              {
                v305 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_385;
                if ( (unsigned int)v232 >= LODWORD(v305->_1.namespaze) )
                  goto LABEL_386;
                v306 = *((_QWORD *)&v305->_1.byval_arg.data + v232);
                if ( !v306 )
                  goto LABEL_385;
                *(_DWORD *)(v306 + 16) = 3;
                v380->fields.isMyServantOrNpc = 1;
              }
            }
            else
            {
              v262 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_385;
              if ( (unsigned int)v232 >= LODWORD(v262->_1.namespaze) )
                goto LABEL_386;
              v263 = *((_QWORD *)&v262->_1.byval_arg.data + v232);
              if ( !v263 )
                goto LABEL_385;
              *(_DWORD *)(v263 + 16) = 2;
              v380->fields.supportInitIndex = v207;
            }
          }
          else
          {
            v264 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_385;
            if ( (unsigned int)v232 >= LODWORD(v264->_1.namespaze) )
              goto LABEL_386;
            v265 = *((_QWORD *)&v264->_1.byval_arg.data + v232);
            if ( !v265 )
              goto LABEL_385;
            *(_DWORD *)(v265 + 16) = 1;
          }
        }
        else
        {
          v198 = v380;
          v260 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_385;
          if ( (unsigned int)v232 >= LODWORD(v260->_1.namespaze) )
            goto LABEL_386;
          v261 = *((_QWORD *)&v260->_1.byval_arg.data + v232);
          if ( !v261 )
            goto LABEL_385;
          *(_DWORD *)(v261 + 16) = 0;
        }
        if ( !v226 )
          goto LABEL_385;
        v266 = v226->max_length;
        if ( v266 >= 1 )
        {
          v267 = 0;
          while ( v267 < v266 )
          {
            v268 = v226->m_Items[v267];
            if ( !v268 )
              goto LABEL_385;
            if ( !v210->max_length )
              break;
            v269 = v210->m_Items[0];
            if ( !v269 )
              goto LABEL_385;
            if ( LODWORD(v268[1].klass) == LODWORD(v269[2].monitor) )
            {
              v270 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_385;
              if ( (unsigned int)v232 >= LODWORD(v270->_1.namespaze) )
                goto LABEL_386;
              v271 = *((_QWORD *)&v270->_1.byval_arg.data + v232);
              if ( !v271 )
                goto LABEL_385;
              if ( *(_DWORD *)(v271 + 16) <= 2u )
              {
                Master_object = (__int64)v268[2].monitor;
                if ( !Master_object )
                  goto LABEL_385;
                v272 = *(System_Collections_Generic_List_object__o **)(v271 + 24);
                Master_object = (__int64)System_Array__Clone((System_Array_o *)Master_object, 0LL);
                if ( !v272 )
                  goto LABEL_385;
                Master_object = sub_1B886EC(Master_object, int___TypeInfo);
                v275 = v272->fields._items;
                v276 = Method_System_Collections_Generic_List_int____Add__;
                ++v272->fields._version;
                if ( !v275 )
                  goto LABEL_385;
                v277 = v272->fields._size;
                v278 = Master_object;
                if ( (unsigned int)v277 >= v275->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v272,
                    (Il2CppObject *)Master_object,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v276[4] + 192LL) + 112LL));
                }
                else
                {
                  v279 = &v275->obj.klass + v277;
                  v272->fields._size = v277 + 1;
                  v279[4] = (Il2CppClass *)v278;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v279 + 4), v278, v273, v274);
                }
                v280 = p_fields->klass;
                if ( !p_fields->klass )
                  goto LABEL_385;
                if ( (unsigned int)v232 >= LODWORD(v280->_1.namespaze) )
                  goto LABEL_386;
                v281 = *((_QWORD *)&v280->_1.byval_arg.data + v232);
                if ( !v281 )
                  goto LABEL_385;
                Master_object = *(_QWORD *)(v281 + 32);
                if ( !Master_object )
                  goto LABEL_385;
                monitor_low = (Il2CppObject *)LODWORD(v268[3].klass);
                v282 = *(struct System_Int32_array **)(Master_object + 16);
                v283 = Method_System_Collections_Generic_List_Restriction_RangeType__Add__;
                ++*(_DWORD *)(Master_object + 28);
                if ( !v282 )
                  goto LABEL_385;
                v284 = *(int *)(Master_object + 24);
                if ( (unsigned int)v284 >= v282->max_length )
                {
                  System_Collections_Generic_List_Int32Enum___AddWithResize(
                    (System_Collections_Generic_List_T__o *)Master_object,
                    (int32_t)monitor_low,
                    *(const MethodInfo_34E303C **)(*(_QWORD *)(v283[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Master_object + 24) = v284 + 1;
                  v282->m_Items[v284 + 1] = (int)monitor_low;
                }
              }
              if ( LODWORD(v268[2].klass) == 2 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10315/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_POSITION"*/, 0LL);
                monitor = (System_String_o *)Master_object;
              }
              else
              {
                monitor = (System_String_o *)v268[1].monitor;
              }
              v286 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_385;
              if ( (unsigned int)v232 >= LODWORD(v286->_1.namespaze) )
                goto LABEL_386;
              v287 = *((_QWORD *)&v286->_1.byval_arg.data + v232);
              if ( !v287 )
                goto LABEL_385;
              Master_object = System_String__IsNullOrEmpty(*(System_String_o **)(v287 + 40), 0LL);
              v290 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_385;
              if ( (unsigned int)v232 >= LODWORD(v290->_1.namespaze) )
                goto LABEL_386;
              v291 = *((_QWORD *)&v290->_1.byval_arg.data + v232);
              if ( !v291 )
                goto LABEL_385;
              v292 = (System_String_o **)(v291 + 40);
              if ( (Master_object & 1) == 0 )
                monitor = System_String__Concat_61718292(*v292, (System_String_o *)StringLiteral_43/*"\n"*/, monitor, 0LL);
              *v292 = monitor;
              sub_1B88554((ServantStatusBattleListViewItem_o *)v292, (int32_t)monitor, v288, v289);
            }
            v266 = v226->max_length;
            if ( (int)++v267 >= v266 )
              goto LABEL_251;
          }
          goto LABEL_386;
        }
LABEL_251:
        v293 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_385;
        if ( (unsigned int)v232 >= LODWORD(v293->_1.namespaze) )
          goto LABEL_386;
        v294 = QuestRestrictionInfo___c_TypeInfo;
        v295 = *((_QWORD *)&v293->_1.byval_arg.data + v232);
        if ( !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
          v294 = QuestRestrictionInfo___c_TypeInfo;
        }
        _9__82_3 = (System_Func_object__bool__o *)v294->static_fields->__9__82_3;
        if ( !_9__82_3 )
        {
          if ( !v294->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v294);
            v294 = QuestRestrictionInfo___c_TypeInfo;
          }
          v297 = (Il2CppObject *)v294->static_fields->__9;
          _9__82_3 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RestrictionSlotDetailEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__82_3, v297, Method_QuestRestrictionInfo___c__Setup_b__82_3__, 0LL);
          v298 = QuestRestrictionInfo___c_TypeInfo->static_fields;
          v298->__9__82_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__82_3;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v298->__9__82_3, (int32_t)_9__82_3, v299, v300);
          v198 = v380;
        }
        Master_object = BasicHelper__Any_object__48672124(
                          v226,
                          (System_Func_T__bool__o *)_9__82_3,
                          (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
        if ( !v295 )
          goto LABEL_385;
        *(_BYTE *)(v295 + 48) = (Master_object & 1) == 0;
        v301 = p_fields->klass;
        v236 = questIdb;
        if ( !p_fields->klass )
          goto LABEL_385;
        if ( (unsigned int)v232 >= LODWORD(v301->_1.namespaze) )
          goto LABEL_386;
        v302 = *((_QWORD *)&v301->_1.byval_arg.data + v232);
        if ( !v302 )
          goto LABEL_385;
        p_dialogMessageInfoDictionary = v376;
        if ( *(_DWORD *)(v302 + 16) == 1 )
        {
          if ( *(_BYTE *)(v302 + 48) )
            v198->fields.isNpcEditablePos = 1;
        }
        *(_BYTE *)(v302 + 49) = v210->max_length != 0;
      }
      else
      {
        v235 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_385;
        v236 = questIdb;
        if ( (unsigned int)v232 >= LODWORD(v235->_1.namespaze) )
          goto LABEL_386;
        v237 = *((_QWORD *)&v235->_1.byval_arg.data + v232);
        if ( !v237 )
          goto LABEL_385;
        p_dialogMessageInfoDictionary = v376;
        *(_DWORD *)(v237 + 16) = 5;
        *(_BYTE *)(v237 + 48) = 0;
      }
      ++v207;
      v208 = v236 & v382;
    }
    if ( !v85
      || (v307 = System_Collections_Generic_List_object___ToArray(
                   v85,
                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__),
          v198->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v307,
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&v198->fields.restrictionMessageEntities,
            (int32_t)v307,
            v308,
            v309),
          (slotInfos = v198->fields.slotInfos) == 0LL) )
    {
LABEL_385:
      sub_1B8880C(Master_object, monitor_low);
    }
    v311 = slotInfos->max_length;
    if ( v311 >= 1 )
    {
      v312 = 0;
      v313 = 0;
      v314 = 0;
      v315 = 0;
      while ( v311 != v312 )
      {
        v316 = slotInfos->m_Items[v312];
        if ( !v316 )
          goto LABEL_385;
        switch ( v316->fields.slotType )
        {
          case 0:
          case 3:
          case 4:
            ++v315;
            break;
          case 1:
            ++v314;
            break;
          case 2:
            ++v313;
            break;
          default:
            break;
        }
        if ( v311 == ++v312 )
          goto LABEL_291;
      }
LABEL_386:
      sub_1B88814(Master_object, monitor_low);
    }
    v315 = 0;
    v314 = 0;
    v313 = 0;
LABEL_291:
    if ( v313 == 0 && (v208 & 1) != 0 )
      v198->fields.isNoSupportBattle = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !Master_object )
      goto LABEL_385;
    Master_object = (__int64)NpcFollowerMaster__GetQuestFollowerList(
                               (NpcFollowerMaster_o *)Master_object,
                               v198->fields.questId,
                               v198->fields.questPhase,
                               0LL);
    if ( !Master_object )
      goto LABEL_385;
    v317 = *(_DWORD *)(Master_object + 24);
    if ( v317 >= 1 )
    {
      v318 = 0;
      while ( v317 != v318 )
      {
        v319 = *(_QWORD *)(Master_object + 8LL * v318 + 32);
        if ( !v319 )
          goto LABEL_385;
        if ( !*(_BYTE *)(v319 + 105) && v317 != ++v318 )
          continue;
        goto LABEL_305;
      }
      goto LABEL_386;
    }
    v318 = 0;
LABEL_305:
    Master_object = (__int64)v391;
    if ( !v391 )
      goto LABEL_385;
    HasFlag_39473080 = QuestEntity__HasFlag_39473080((QuestEntity_o *)v391, 0x10000000LL, questPhase, 0LL);
    v198->fields.isNpcMultipleBattle = HasFlag_39473080;
    if ( !HasFlag_39473080 )
      v198->fields.isNpcMultipleBattle = v318 < v317 && v315 > 0 && v314 > 0;
    Master_object = (__int64)v391;
    if ( !v391 )
      goto LABEL_385;
    v321 = QuestEntity__HasFlag_39473080((QuestEntity_o *)v391, 0x20000000LL, questPhase, 0LL);
    v198->fields.isNpcOnlyBattle = v321;
    if ( !v321 )
      v198->fields.isNpcOnlyBattle = v318 < v317 && v315 == 0 && v314 > 0;
    Master_object = (__int64)*p_restrictionBaseEntity;
    if ( !*p_restrictionBaseEntity )
      goto LABEL_385;
    if ( RestrictionBaseEntity__HasFlag((RestrictionBaseEntity_o *)Master_object, 8LL, 0LL) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            *p_restrictionSlotDictionary,
                            2,
                            0LL,
                            (const MethodInfo_2E6E040 *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v323 = 2;
      else
        v323 = 1;
      DeckMemberMax = v198->fields.servantNumMax;
      v198->fields.servantNumMin = v323;
      if ( !DeckMemberMax )
      {
        v325 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v325 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v325->static_fields->DeckMemberMax;
        v198->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v198->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v198->fields.isNpcMultipleBattle )
        v198->fields.myServantNumMax = v315;
    }
    else
    {
      v198->fields.myServantNumMax = v315;
      if ( v315 == 1 && DeckMemberMax == 1 )
      {
        Master_object = (__int64)v198->fields.restrictionSlotDetailDictionary;
        v198->fields.isFixedMyServantSingle = 1;
        if ( !Master_object )
          goto LABEL_385;
        Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                                   1,
                                   (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( Master_object )
        {
          v326 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(Master_object + 24);
          if ( v326 )
          {
            if ( !(_DWORD)v326 )
              goto LABEL_386;
            v327 = *(_QWORD *)(Master_object + 32);
            if ( !v327 )
              goto LABEL_385;
            Master_object = *(_QWORD *)(v327 + 40);
            if ( !Master_object )
              goto LABEL_385;
            v328 = System_Array__Clone((System_Array_o *)Master_object, 0LL);
            v198->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)sub_1B886EC(
                                                                                              v328,
                                                                                              int___TypeInfo);
            v329 = sub_1B886EC(v328, int___TypeInfo);
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&v198->fields.fixedMyServantSingleIndividualities,
              v329,
              v330,
              v331);
          }
        }
      }
    }
    Master_object = (__int64)*p_restrictionSlotDictionary;
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_385;
    Master_object = System_Collections_Generic_Dictionary_int__object___get_Count(
                      (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                      (const MethodInfo_316D608 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__object__o *)v198->fields.restrictionSlotDictionary;
    v198->fields.isSupportOnly = (int)Master_object > 0;
    if ( !restrictionSlotDictionary )
      goto LABEL_385;
    Master_object = (__int64)System_Collections_Generic_Dictionary_int__object___get_Values(
                               restrictionSlotDictionary,
                               (const MethodInfo_316D768 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Master_object )
      goto LABEL_385;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v386,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Master_object,
      (const MethodInfo_3804A5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v387 = v386;
    do
    {
      v333 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
               &v387,
               (const MethodInfo_32B808C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v333 )
        break;
      if ( !v387.fields._currentValue )
        sub_1B8880C(v333, v334);
      v335 = (int)v387.fields._currentValue[1].monitor;
      if ( v335 >= 1 )
      {
        v336 = 0;
        while ( 1 )
        {
          if ( v335 == v336 )
            sub_1B88814(v333, v334);
          v337 = *((_QWORD *)&v387.fields._currentValue[2].klass + v336);
          if ( !v337 )
            sub_1B8880C(v333, v334);
          if ( *(_DWORD *)(v337 + 28) == 1 )
            break;
          if ( v335 == ++v336 )
            goto LABEL_346;
        }
        v198->fields.isSupportOnly = 0;
        break;
      }
LABEL_346:
      ;
    }
    while ( v198->fields.isSupportOnly );
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &v387,
      (const MethodInfo_32B8088 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    v338 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v338, 0LL);
    v339 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v339, 0LL);
    v340 = *p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_385;
    v341 = v340->max_length;
    if ( v341 >= 1 )
    {
      v342 = 0;
      while ( 1 )
      {
        if ( v342 >= v341 )
          goto LABEL_386;
        v343 = v340->m_Items[v342];
        if ( !v343 )
          goto LABEL_385;
        Master_object = System_String__IsNullOrEmpty(v343->fields.summary, 0LL);
        if ( (Master_object & 1) == 0 )
          break;
LABEL_375:
        v341 = v340->max_length;
        if ( (int)++v342 >= v341 )
          goto LABEL_376;
      }
      type = v343->fields.type;
      if ( type == 10 || type == 2 )
      {
        v346 = 1;
      }
      else
      {
        if ( type == 1 )
        {
          targetVals2 = v343->fields.targetVals2;
          if ( !targetVals2 )
            goto LABEL_385;
          v346 = 1;
          v347 = targetVals2->max_length == 1;
LABEL_363:
          if ( (v347 & v346) != 0 )
          {
            if ( v198->fields.isRestriction )
            {
              if ( !v339 )
                goto LABEL_385;
              System_Text_StringBuilder__Append_60868928(v339, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            }
            else if ( !v339 )
            {
              goto LABEL_385;
            }
            Master_object = (__int64)System_Text_StringBuilder__Append_60868928(v339, v343->fields.summary, 0LL);
            v198->fields.isRestriction = 1;
          }
          if ( v346 )
          {
            if ( v198->fields.isRestriction )
            {
              if ( !v338 )
                goto LABEL_385;
              System_Text_StringBuilder__Append_60868928(v338, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
            }
            else if ( !v338 )
            {
              goto LABEL_385;
            }
            Master_object = (__int64)System_Text_StringBuilder__Append_60868928(v338, v343->fields.summary, 0LL);
            v198->fields.isRestriction = 1;
          }
          goto LABEL_375;
        }
        v346 = 0;
      }
      v347 = 1;
      goto LABEL_363;
    }
LABEL_376:
    if ( !v339 )
      goto LABEL_385;
    Master_object = System_Text_StringBuilder__get_Length(v339, 0LL);
    if ( (int)Master_object >= 1 )
    {
      v348 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v339->klass->vtable._3_ToString.method)(
               v339,
               v339->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      p_confirmRestrictionMessage->klass = (ServantStatusBattleListViewItem_c *)v348;
      sub_1B88554(p_confirmRestrictionMessage, v348, v349, v350);
    }
    if ( !v338 )
      goto LABEL_385;
    if ( System_Text_StringBuilder__get_Length(v338, 0LL) >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v351 = LocalizationManager__Get((System_String_o *)StringLiteral_10282/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v352 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v338->klass->vtable._3_ToString.method)(
                                  v338,
                                  v338->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v353 = System_String__Concat_61718292(v351, (System_String_o *)StringLiteral_43/*"\n"*/, v352, 0LL);
      p_restrictionMessage->klass = (ServantStatusBattleListViewItem_c *)v353;
      sub_1B88554(p_restrictionMessage, (int32_t)v353, v354, v355);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(v8, v75);
  }
}


void __fastcall QuestRestrictionInfo__SetupOldRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x20
  System_Text_StringBuilder_o *v4; // x0
  System_Collections_Generic_List_object__o *myServantOrNpcRestrictionEntityList; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct RestrictionEntity_array *restrictionEntityList; // x21
  int max_length; // w8
  unsigned int v11; // w22
  struct RestrictionEntity_o *v12; // x26
  BalanceConfig_c *v13; // x0
  struct System_Int32_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Boolean_array *DeckPositionList; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int *targetVals; // x8
  int32_t v21; // w8
  struct System_Int32_array *v22; // x8
  __int64 v23; // x9
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  Il2CppObject *v28; // x24
  int32_t v29; // w0
  int32_t v30; // w2
  int32_t v31; // w3
  BalanceConfig_c *v32; // x0
  struct System_Int32_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Int32_array *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Int32_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x8
  struct System_Int32_array *v46; // x8
  _BOOL4 isRestriction; // w9
  __int64 v48; // x9
  struct System_Collections_Generic_List_int__o *specifiedPositionList; // x24
  struct System_Int32_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  struct System_Collections_Generic_List_int__o *v53; // x24
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  struct System_String_o *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x0
  struct System_String_o *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  __int64 v64; // x0
  __int64 v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  bool HasFlag; // w0
  bool v69; // w0
  struct System_Int32_array *v70; // x20
  int32_t v71; // w2
  int32_t v72; // w3
  bool v73; // w0
  bool HasFlag_39473080; // w0
  bool v75; // w0
  struct System_Int32_array *v76; // x20
  int32_t v77; // w2
  int32_t v78; // w3
  bool v79; // w0
  int32_t v80; // w2
  int32_t v81; // w3
  int32_t v82; // w2
  int32_t v83; // w3
  ServantStatusBattleListViewItem_o *p_totalCostRestrictionEntity; // [xsp+20h] [xbp-D0h]
  ServantStatusBattleListViewItem_o *p_uniqueSvtRestrictionEntity; // [xsp+30h] [xbp-C0h]
  ServantStatusBattleListViewItem_o *p_servantNumRestrictionEntity; // [xsp+58h] [xbp-98h]
  ServantStatusBattleListViewItem_o *p_myServantNumRestrictionEntity; // [xsp+60h] [xbp-90h]
  ServantStatusBattleListViewItem_o *p_uniqueIndividualityEntity; // [xsp+70h] [xbp-80h]
  QuestRestrictionInfoEntity_o *v89; // [xsp+78h] [xbp-78h] BYREF
  QuestPhaseEntity_o *v90; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4A5C2A2 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_10282/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    byte_4A5C2A2 = 1;
  }
  v90 = 0LL;
  entity = 0LL;
  v89 = 0LL;
  v3 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0LL);
  v4 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0LL);
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_149;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    p_uniqueIndividualityEntity = (ServantStatusBattleListViewItem_o *)&this->fields.uniqueIndividualityEntity;
    p_servantNumRestrictionEntity = (ServantStatusBattleListViewItem_o *)&this->fields.servantNumRestrictionEntity;
    p_myServantNumRestrictionEntity = (ServantStatusBattleListViewItem_o *)&this->fields.myServantNumRestrictionEntity;
    v11 = 0;
    p_uniqueSvtRestrictionEntity = (ServantStatusBattleListViewItem_o *)&this->fields.uniqueSvtRestrictionEntity;
    p_totalCostRestrictionEntity = (ServantStatusBattleListViewItem_o *)&this->fields.totalCostRestrictionEntity;
    while ( 1 )
    {
      if ( v11 >= max_length )
        goto LABEL_150;
      v12 = restrictionEntityList->m_Items[v11];
      if ( !v12 )
        goto LABEL_149;
      switch ( v12->fields.type )
      {
        case 3:
          p_totalCostRestrictionEntity->klass = (ServantStatusBattleListViewItem_c *)v12;
          sub_1B88554(p_totalCostRestrictionEntity, (int32_t)v12, v7, v8);
          goto LABEL_66;
        case 5:
          this->fields.supportOnlyRestrictionEntity = v12;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.supportOnlyRestrictionEntity,
            (int32_t)v12,
            v7,
            v8);
          this->fields.isSupportOnly = 1;
          goto LABEL_66;
        case 6:
          p_uniqueSvtRestrictionEntity->klass = (ServantStatusBattleListViewItem_c *)v12;
          sub_1B88554(p_uniqueSvtRestrictionEntity, (int32_t)v12, v7, v8);
          v13 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v13 = BalanceConfig_TypeInfo;
          }
          v14 = (struct System_Int32_array *)sub_1B88658(
                                               int___TypeInfo,
                                               (unsigned int)v13->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v14;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.deckSvtIdList, (int32_t)v14, v15, v16);
          this->fields.isUniqueServant = 1;
          goto LABEL_66;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v12;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.fixedSupportPositionRestrictionEntity,
            (int32_t)v12,
            v7,
            v8);
          DeckPositionList = RestrictionEntity__getDeckPositionList(v12, 0LL);
          this->fields.supportPositionList = DeckPositionList;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.supportPositionList,
            (int32_t)DeckPositionList,
            v18,
            v19);
          this->fields.isFixedSupportPosition = 1;
          goto LABEL_66;
        case 8:
          this->fields.fixedMyServantPositionRestrictionEntity = v12;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
            (int32_t)v12,
            v7,
            v8);
          this->fields.isFixedMyServantPosition = 1;
          goto LABEL_66;
        case 9:
          this->fields.fixedMyServantSingleRestrictionEntity = v12;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.fixedMyServantSingleRestrictionEntity,
            (int32_t)v12,
            v7,
            v8);
          this->fields.isFixedMyServantSingle = 1;
          goto LABEL_66;
        case 0xA:
          p_servantNumRestrictionEntity->klass = (ServantStatusBattleListViewItem_c *)v12;
          sub_1B88554(p_servantNumRestrictionEntity, (int32_t)v12, v7, v8);
          targetVals = (int *)v12->fields.targetVals;
          if ( v12->fields.rangeType == 5 )
          {
            if ( targetVals && targetVals[6] >= 2 )
            {
              this->fields.servantNumMin = targetVals[8];
              v21 = targetVals[9];
LABEL_51:
              this->fields.servantNumMax = v21;
            }
          }
          else if ( targetVals )
          {
            v48 = *((_QWORD *)targetVals + 3);
            if ( v48 )
            {
              if ( !(_DWORD)v48 )
                goto LABEL_150;
              v21 = targetVals[8];
              goto LABEL_51;
            }
          }
LABEL_66:
          max_length = restrictionEntityList->max_length;
          if ( (int)++v11 >= max_length )
            goto LABEL_67;
          break;
        case 0xB:
          p_myServantNumRestrictionEntity->klass = (ServantStatusBattleListViewItem_c *)v12;
          sub_1B88554(p_myServantNumRestrictionEntity, (int32_t)v12, v7, v8);
          v22 = v12->fields.targetVals;
          if ( !v22 )
            goto LABEL_66;
          v23 = *(_QWORD *)&v22->max_length;
          if ( !v23 )
            goto LABEL_66;
          if ( !(_DWORD)v23 )
            goto LABEL_150;
          this->fields.myServantNumMax = v22->m_Items[1];
          goto LABEL_66;
        case 0xC:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          items = myServantOrNpcRestrictionEntityList->fields._items;
          v25 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !items )
            goto LABEL_149;
          size = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v12,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            myServantOrNpcRestrictionEntityList->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v12;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v12, v7, v8);
          }
          specifiedPositionList = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v12,
                                                                                               0LL);
          if ( !specifiedPositionList )
            goto LABEL_149;
          v50 = specifiedPositionList->fields._items;
          v51 = Method_System_Collections_Generic_List_int__Add__;
          ++specifiedPositionList->fields._version;
          if ( !v50 )
            goto LABEL_149;
          v52 = specifiedPositionList->fields._size;
          v6 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v52 >= v50->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              specifiedPositionList,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
          }
          else
          {
            specifiedPositionList->fields._size = v52 + 1;
            v50->m_Items[v52 + 1] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrNpc = 1;
          goto LABEL_66;
        case 0xE:
          this->fields.fixedServantPositionRestrictionEntity = v12;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.fixedServantPositionRestrictionEntity,
            (int32_t)v12,
            v7,
            v8);
          this->fields.isNeedStarting = 1;
          goto LABEL_66;
        case 0xF:
          p_uniqueIndividualityEntity->klass = (ServantStatusBattleListViewItem_c *)v12;
          sub_1B88554(p_uniqueIndividualityEntity, (int32_t)v12, v7, v8);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v12->fields.targetVals;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          v28 = System_Array__Clone((System_Array_o *)myServantOrNpcRestrictionEntityList, 0LL);
          this->fields.uniqueIndividualitys = (struct System_Int32_array *)sub_1B886EC(v28, int___TypeInfo);
          v29 = sub_1B886EC(v28, int___TypeInfo);
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.uniqueIndividualitys, v29, v30, v31);
          v32 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v32 = BalanceConfig_TypeInfo;
          }
          v33 = (struct System_Int32_array *)sub_1B88658(
                                               int___TypeInfo,
                                               (unsigned int)v32->static_fields->DeckMemberMax);
          this->fields.deckSvtIdList = v33;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.deckSvtIdList, (int32_t)v33, v34, v35);
          v36 = (struct System_Int32_array *)sub_1B88658(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckLimitCountList = v36;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.deckLimitCountList, (int32_t)v36, v37, v38);
          v39 = (struct System_Int32_array *)sub_1B88658(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax);
          this->fields.deckDispLimitCountList = v39;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.deckDispLimitCountList, (int32_t)v39, v40, v41);
          this->fields.isUniqueIndividuality = 1;
          goto LABEL_66;
        case 0x10:
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_149;
          v42 = myServantOrNpcRestrictionEntityList->fields._items;
          v43 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
          ++myServantOrNpcRestrictionEntityList->fields._version;
          if ( !v42 )
            goto LABEL_149;
          v44 = myServantOrNpcRestrictionEntityList->fields._size;
          if ( (unsigned int)v44 >= v42->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              myServantOrNpcRestrictionEntityList,
              (Il2CppObject *)v12,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = &v42->obj.klass + v44;
            myServantOrNpcRestrictionEntityList->fields._size = v44 + 1;
            v45[4] = (Il2CppClass *)v12;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v12, v7, v8);
          }
          v53 = this->fields.specifiedPositionList;
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)RestrictionEntity__GetSpecifiedPosition(
                                                                                               v12,
                                                                                               0LL);
          if ( !v53 )
            goto LABEL_149;
          v54 = v53->fields._items;
          v55 = Method_System_Collections_Generic_List_int__Add__;
          ++v53->fields._version;
          if ( !v54 )
            goto LABEL_149;
          v56 = v53->fields._size;
          v6 = (unsigned int)myServantOrNpcRestrictionEntityList;
          if ( (unsigned int)v56 >= v54->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v53,
              (int32_t)myServantOrNpcRestrictionEntityList,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v53->fields._size = v56 + 1;
            v54->m_Items[v56 + 1] = (int)myServantOrNpcRestrictionEntityList;
          }
          this->fields.isMyServantOrSupport = 1;
          goto LABEL_66;
        case 0x11:
          this->fields.isDataLostBattle = 1;
          v46 = v12->fields.targetVals;
          if ( !v46 )
            goto LABEL_149;
          if ( !v46->max_length )
            goto LABEL_150;
          isRestriction = this->fields.isRestriction;
          this->fields.dataLostBattleId = v46->m_Items[1];
          if ( isRestriction )
          {
LABEL_44:
            if ( !v3 )
              goto LABEL_149;
            System_Text_StringBuilder__Append_60868928(v3, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
          }
          else
          {
LABEL_11:
            if ( !v3 )
              goto LABEL_149;
          }
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_60868928(
                                                                                               v3,
                                                                                               v12->fields.name,
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
    v57 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v3->klass->vtable._3_ToString.method)(
                                      v3,
                                      v3->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    this->fields.confirmRestrictionMessage = v57;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.confirmRestrictionMessage, (int32_t)v57, v58, v59);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_10282/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    v61 = System_String__Concat_61718292(
            v60,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            this->fields.confirmRestrictionMessage,
            0LL);
    this->fields.restrictionMessage = v61;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.restrictionMessage, (int32_t)v61, v62, v63);
  }
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)myServantOrNpcRestrictionEntityList,
    &entity,
    this->fields.questId,
    (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  QuestPhaseMaster__TryGetEntity(
    (QuestPhaseMaster_o *)myServantOrNpcRestrictionEntityList,
    &v90,
    this->fields.questId,
    this->fields.questPhase,
    0LL);
  v64 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v64 + 309) & 1) == 0 )
    v64 = sub_1BDA48C(v64);
  v65 = *(_QWORD *)(*(_QWORD *)(v64 + 192) + 16LL);
  if ( (*(_BYTE *)(v65 + 309) & 1) == 0 )
    v65 = sub_1BDA48C(v65);
  myServantOrNpcRestrictionEntityList = **(System_Collections_Generic_List_object__o ***)(v65 + 184);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                       (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_149;
  if ( QuestRestrictionInfoMaster__TryGetEntity(
         (QuestRestrictionInfoMaster_o *)myServantOrNpcRestrictionEntityList,
         &v89,
         this->fields.questId,
         this->fields.questPhase,
         0LL) )
  {
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v89;
    if ( !v89 )
      goto LABEL_149;
    if ( QuestRestrictionInfoEntity__HasFlag(v89, 0x100000LL, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
      goto LABEL_101;
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v89;
    if ( !v89 )
      goto LABEL_149;
    HasFlag = QuestRestrictionInfoEntity__HasFlag(v89, 0x400000000000000LL, 0LL);
    this->fields.isNoSupportBattle = HasFlag;
    if ( HasFlag )
      goto LABEL_101;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v89;
    if ( !v89 )
      goto LABEL_149;
    v69 = QuestRestrictionInfoEntity__HasFlag(v89, 0x80000LL, 0LL);
    this->fields.isSupportOnlyForceBattle = v69;
    if ( v69 )
    {
LABEL_101:
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v89;
      if ( v89 )
      {
        this->fields.isNpcMultipleBattle = QuestRestrictionInfoEntity__HasFlag(v89, 0x10000000LL, 0LL);
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v89;
        if ( v89 )
        {
          this->fields.isNpcOnlyBattle = QuestRestrictionInfoEntity__HasFlag(v89, 0x20000000LL, 0LL);
          myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v89;
          if ( v89 )
          {
            this->fields.isNpcEditablePos = QuestRestrictionInfoEntity__HasFlag(v89, 0x800000000LL, 0LL);
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v89;
            if ( v89 )
            {
              this->fields.isNotTransitionSupportList = QuestRestrictionInfoEntity__HasFlag(
                                                          v89,
                                                          0x80000000000000LL,
                                                          0LL);
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v89;
              if ( v89 )
              {
                QuestRestrictionInfoEntity__GetOverwriteLimitCountSvtIds(
                  v89,
                  &this->fields.overwriteLimitCountSvtIds,
                  &this->fields.overwriteLimitCounts,
                  &this->fields.overwriteLimitCountIconIds,
                  0LL);
                myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v89;
                if ( v89 )
                {
                  v73 = QuestRestrictionInfoEntity__HasFlag(v89, 0x400000000000000LL, 0LL);
                  this->fields.isAllOutBattle = v73;
                  if ( v73 )
                  {
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_149;
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_((DataManager_o *)myServantOrNpcRestrictionEntityList, (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
                    if ( !myServantOrNpcRestrictionEntityList )
                      goto LABEL_149;
                    this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(
                                                         (QuestGroupMaster_o *)myServantOrNpcRestrictionEntityList,
                                                         this->fields.questId,
                                                         17,
                                                         0LL);
                  }
                  if ( entity )
                    this->fields.isFatigure = QuestEntity__HasFlag_39473080(
                                                (QuestEntity_o *)entity,
                                                0x200000LL,
                                                this->fields.questPhase,
                                                0LL);
                  if ( v90 )
                  {
                    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v90, 0LL);
                    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v90;
                    if ( !v90 )
                      goto LABEL_149;
                    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v90, 0LL);
                  }
                  else
                  {
                    this->fields.correctionIconId = -1;
                  }
                  myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v89;
                  if ( v89 )
                  {
                    this->fields.isNotSingleSupportOnly = QuestRestrictionInfoEntity__HasFlag(
                                                            v89,
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
      sub_1B8880C(myServantOrNpcRestrictionEntityList, v6);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v89;
    if ( !v89 )
      goto LABEL_149;
    if ( QuestRestrictionInfoEntity__HasFlag(v89, 0x1000000LL, 0LL) )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v89;
      if ( !v89 )
        goto LABEL_149;
      this->fields.eventDeckNum = QuestRestrictionInfoEntity__GetUserEventDeckNo(v89, 0LL);
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1B88658(int___TypeInfo, 1LL);
    if ( !v89 )
      goto LABEL_149;
    v70 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetSingleForceSvtId(
                                                                                         v89,
                                                                                         0LL);
    if ( !v70 )
      goto LABEL_149;
    if ( v70->max_length )
    {
      v70->m_Items[1] = (int)myServantOrNpcRestrictionEntityList;
      this->fields.svtIdForceBattleList = v70;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtIdForceBattleList, (int32_t)v70, v71, v72);
      goto LABEL_101;
    }
LABEL_150:
    sub_1B88814(myServantOrNpcRestrictionEntityList, v6);
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_39473080((QuestEntity_o *)entity, 0x100000LL, this->fields.questPhase, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
      if ( !entity )
        goto LABEL_149;
      HasFlag_39473080 = QuestEntity__HasFlag_39473080(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0LL);
      this->fields.isNoSupportBattle = HasFlag_39473080;
      if ( !HasFlag_39473080 )
      {
        myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
        if ( !entity )
          goto LABEL_149;
        v75 = QuestEntity__HasFlag_39473080((QuestEntity_o *)entity, 0x80000LL, this->fields.questPhase, 0LL);
        this->fields.isSupportOnlyForceBattle = v75;
        if ( !v75 )
        {
          if ( v90 )
          {
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
            if ( !entity )
              goto LABEL_149;
            if ( QuestEntity__HasFlag_39473080((QuestEntity_o *)entity, 0x1000000LL, this->fields.questPhase, 0LL) )
            {
              myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v90;
              if ( !v90 )
                goto LABEL_149;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v90, 0LL);
            }
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)sub_1B88658(
                                                                                                 int___TypeInfo,
                                                                                                 1LL);
            if ( !v90 )
              goto LABEL_149;
            v76 = (struct System_Int32_array *)myServantOrNpcRestrictionEntityList;
            myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__GetSingleForceSvtId(
                                                                                                 v90,
                                                                                                 0LL);
            if ( !v76 )
              goto LABEL_149;
            if ( !v76->max_length )
              goto LABEL_150;
            v76->m_Items[1] = (int)myServantOrNpcRestrictionEntityList;
            this->fields.svtIdForceBattleList = v76;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtIdForceBattleList, (int32_t)v76, v77, v78);
          }
        }
      }
    }
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isFatigure = QuestEntity__HasFlag_39473080(
                                (QuestEntity_o *)entity,
                                0x200000LL,
                                this->fields.questPhase,
                                0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    v79 = QuestEntity__HasFlag_39473080((QuestEntity_o *)entity, 0x400000000000000LL, this->fields.questPhase, 0LL);
    this->fields.isAllOutBattle = v79;
    if ( v79 )
    {
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_149;
      myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                                           (DataManager_o *)myServantOrNpcRestrictionEntityList,
                                                                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
    this->fields.isNpcMultipleBattle = QuestEntity__HasFlag_39473080(
                                         (QuestEntity_o *)entity,
                                         0x10000000LL,
                                         this->fields.questPhase,
                                         0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNpcOnlyBattle = QuestEntity__HasFlag_39473080(
                                     (QuestEntity_o *)entity,
                                     0x20000000LL,
                                     this->fields.questPhase,
                                     0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNpcEditablePos = QuestEntity__HasFlag_39473080(
                                      (QuestEntity_o *)entity,
                                      0x800000000LL,
                                      this->fields.questPhase,
                                      0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNotTransitionSupportList = QuestEntity__HasFlag_39473080(
                                                (QuestEntity_o *)entity,
                                                0x80000000000000LL,
                                                this->fields.questPhase,
                                                0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)entity;
    if ( !entity )
      goto LABEL_149;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_39473080(
                                            (QuestEntity_o *)entity,
                                            0x1000000000000000LL,
                                            this->fields.questPhase,
                                            0LL);
  }
  if ( v90 )
  {
    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v90, 0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v90;
    if ( !v90 )
      goto LABEL_149;
    QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
      v90,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      0LL);
    myServantOrNpcRestrictionEntityList = (System_Collections_Generic_List_object__o *)v90;
    if ( !v90 )
      goto LABEL_149;
    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v90, 0LL);
  }
  else
  {
    this->fields.correctionIconId = -1;
    this->fields.overwriteLimitCountSvtIds = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overwriteLimitCountSvtIds, 0, v66, v67);
    this->fields.overwriteLimitCounts = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overwriteLimitCounts, 0, v80, v81);
    this->fields.overwriteLimitCountIconIds = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overwriteLimitCountIconIds, 0, v82, v83);
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
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_T__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  struct System_String_o **p_summary; // x19
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5C2ED & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int____TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C2ED = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.slotType = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.individualityList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_Restriction_RangeType__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v6,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rangeTypeList, (int32_t)v6, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.summary = (struct System_String_o *)StringLiteral_1/*""*/;
  p_summary = &this->fields.summary;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_summary, v9, v11, v12);
  *((_WORD *)p_summary + 4) = 1;
}


void __fastcall QuestRestrictionInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5C2EE & 1) == 0 )
  {
    sub_1B885B0(&QuestRestrictionInfo___c_TypeInfo);
    byte_4A5C2EE = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestRestrictionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestRestrictionInfo___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionInfo___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestRestrictionInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall QuestRestrictionInfo___c___ctor(QuestRestrictionInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__104_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B8880C(this, 0LL);
  return e->fields.type != 1 || RestrictionEntity__IsRestrictionTarget(e, 1, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__104_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B8880C(this, 0LL);
  return e->fields.name;
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetConfirmRestrictionMessage_b__104_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B8880C(this, 0LL);
  return e->fields.name;
}


bool __fastcall QuestRestrictionInfo___c___GetRestrictionMessageEntityList_b__106_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  unsigned int v3; // w8
  _BOOL4 v4; // w0

  if ( !e )
    sub_1B8880C(this, 0LL);
  v3 = e->fields.type - 1;
  if ( v3 > 0x10 )
    LOBYTE(v4) = 0;
  else
    return (0x1100Bu >> v3) & 1;
  return v4;
}


System_String_o *__fastcall QuestRestrictionInfo___c___GetRestrictionMessage_b__105_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B8880C(this, 0LL);
  return e->fields.name;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualitySlot_b__96_0(
        QuestRestrictionInfo___c_o *this,
        QuestRestrictionInfo_SlotInfo_o *s,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int____o *individualityList; // x8

  if ( (byte_4A5C2EF & 1) == 0 )
  {
    this = (QuestRestrictionInfo___c_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int____get_Count__);
    byte_4A5C2EF = 1;
  }
  if ( !s || (individualityList = s->fields.individualityList) == 0LL )
    sub_1B8880C(this, s);
  return individualityList->fields._size > 0;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__95_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B8880C(this, 0LL);
  return e->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___IsRestrictionIndividualityWhole_b__95_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionWholeEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B8880C(this, 0LL);
  return e->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.type == 3;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.type == 2;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.type == 2;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass176_0___ctor(
        QuestRestrictionInfo___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass176_0___IsMyServantOrNpcRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass176_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass177_0___ctor(
        QuestRestrictionInfo___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass177_0___IsSelectableNormalSupport_b__0(
        QuestRestrictionInfo___c__DisplayClass177_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass178_0___ctor(
        QuestRestrictionInfo___c__DisplayClass178_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass178_0___IsNotIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass178_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass179_0___ctor(
        QuestRestrictionInfo___c__DisplayClass179_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass179_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass179_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass180_0___ctor(
        QuestRestrictionInfo___c__DisplayClass180_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass180_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass180_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass181_0___ctor(
        QuestRestrictionInfo___c__DisplayClass181_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass181_0___GetRestrictedName_b__0(
        QuestRestrictionInfo___c__DisplayClass181_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_o *questRestrictionEntity; // x8

  if ( !x || (questRestrictionEntity = this->fields.questRestrictionEntity) == 0LL )
    sub_1B8880C(this, x);
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass184_0___ctor(
        QuestRestrictionInfo___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass184_0___GetMyServantOrNpcSvtIdList_b__0(
        QuestRestrictionInfo___c__DisplayClass184_0_o *this,
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
    sub_1B88814(this, x);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1B8880C(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass185_0___ctor(
        QuestRestrictionInfo___c__DisplayClass185_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass185_0___GetMyServantOrSupportTargetPos_b__0(
        QuestRestrictionInfo___c__DisplayClass185_0_o *this,
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
    sub_1B88814(this, x);
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_1B8880C(this, x);
  return x->fields.id == v6->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass198_0___ctor(
        QuestRestrictionInfo___c__DisplayClass198_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass198_0___GetMyServantOrNpcSvtIdUnionNpcList_b__0(
        QuestRestrictionInfo___c__DisplayClass198_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.index;
}